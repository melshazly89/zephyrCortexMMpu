#include <zephyr/kernel.h>
#include <zephyr/app_memory/app_memdomain.h>
#include <zephyr/sys/libc-hooks.h>
#include <zephyr/sys/printk.h>

/*Simulate MPU Faults*/
//#define INJECT_MPU_FAULTS_A 1
/* Memory domains for AppA and AppB */
struct k_mem_domain AppA;
struct k_mem_domain AppB;
/* Threads definition for different applications */
k_tid_t tid_app_a;
k_tid_t tid_app_b;

static struct k_thread threadA;
static struct k_thread threadB;

/* Aligned buffers for MPU partitions */
__aligned(128) static uint8_t AppA_buf[128];
__aligned(128) static uint8_t AppB_buf[128];
/* Define memory partitions */
K_MEM_PARTITION_DEFINE(partitionA, AppA_buf, sizeof(AppA_buf),K_MEM_PARTITION_P_RW_U_RW);
K_MEM_PARTITION_DEFINE(partitionB, AppB_buf, sizeof(AppB_buf),K_MEM_PARTITION_P_RW_U_RW);
/* Arrays of partition pointers for domain AppA */
static struct k_mem_partition *AppA_parts[] = { 
   &z_libc_partition,
    &partitionA};
/* Arrays of partition pointers for domain AppB */
static struct k_mem_partition *AppB_parts[] = { 
   &z_libc_partition,
    &partitionB};


/* Thread stacks and control blocks */
K_THREAD_STACK_DEFINE(stack_a, 1024);
K_THREAD_STACK_DEFINE(stack_b, 1024);
/* Thread entry functions */
void app_a_threads(void *arg1, void *arg2, void *arg3)
{
    /* Safe: AppA_buf is in AppA's domain */
    for (int i = 0; i < 128; i++) {
        AppA_buf[i] = (uint8_t)i;
    }

    /* Unsafe (will fault): touching AppB_buf from AppA domain */
    #if INJECT_MPU_FAULTS_A
    for (int i = 0; i < 32; i++) {
        AppB_buf[i] = (uint8_t)i;
    }
    #endif
    printf("Hello World from %s \n",
	       k_is_user_context() ? "UserSpace!" : "privileged mode.");
    k_sleep(K_FOREVER);
}
void app_b_threads(void *arg1, void *arg2, void *arg3)
{
    /* Safe: AppB_buf is in AppB's domain */
    for (int i = 0; i < 128; i++) {
        AppB_buf[i] = (uint8_t)i;
    }

    /* Unsafe (will fault): touching AppB_buf from AppA domain */
    #if INJECT_MPU_FAULTS_B
    for (int i = 0; i < 32; i++) {
        AppA_buf[i] = (uint8_t)i;
    }
    #endif
    printf("Hello World from %s \n",
	       k_is_user_context() ? "UserSpace!" : "privileged mode.");
    k_sleep(K_FOREVER);
}

int main(void)   
{
    /* Initialize domains with correct partition counts */
    k_mem_domain_init(&AppA, ARRAY_SIZE(AppA_parts), AppA_parts);
    k_mem_domain_init(&AppB, ARRAY_SIZE(AppB_parts), AppB_parts);
    /* Create threads */
    tid_app_a = k_thread_create(&threadA, stack_a, K_THREAD_STACK_SIZEOF(stack_a),
                    app_a_threads, NULL, NULL, NULL,
                    10, K_USER, K_FOREVER);
    tid_app_b = k_thread_create(&threadB, stack_b, K_THREAD_STACK_SIZEOF(stack_b),
                    app_b_threads, NULL, NULL, NULL,
                    10, K_USER, K_FOREVER);
    /* Assign threads to their domains immediately */
    k_mem_domain_add_thread(&AppA, tid_app_a);
    k_mem_domain_add_thread(&AppB, tid_app_b);
    /* Start the threads */
    k_thread_start(tid_app_a);
    k_thread_start(tid_app_b);
    /*Print the current mode of main thread*/
    printf("Hello World from %s \n",
	       k_is_user_context() ? "UserSpace!" : "privileged mode.");
    
    k_sleep(K_FOREVER);
    return 0;
}
