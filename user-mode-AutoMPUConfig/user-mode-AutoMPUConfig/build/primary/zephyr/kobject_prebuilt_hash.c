/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: /usr/bin/gperf --output-file kobject_prebuilt_hash_preprocessed.c --multiple-iterations 10 kobject_prebuilt_hash.gperf  */
/* Computed positions: -k'1-2' */

#line 6 "kobject_prebuilt_hash.gperf"

#include <zephyr/kernel.h>
#include <zephyr/toolchain.h>
#include <zephyr/internal/syscall_handler.h>
#include <string.h>
#line 12 "kobject_prebuilt_hash.gperf"
struct k_object;
static uint8_t Z_GENERIC_SECTION(.priv_stacks.noinit)  __aligned(Z_KERNEL_STACK_OBJ_ALIGN) priv_stacks[6][K_KERNEL_STACK_LEN(CONFIG_PRIVILEGED_STACK_SIZE)];
static const struct z_stack_data stack_data[6] = {
	{ 2048, (uint8_t *)(&priv_stacks[0]) },
	{ 1024, (uint8_t *)(&priv_stacks[1]) },
	{ 1024, (uint8_t *)(&priv_stacks[2]) },
	{ 1024, (uint8_t *)(&priv_stacks[3]) },
	{ 1024, (uint8_t *)(&priv_stacks[4]) },
	{ 1024, (uint8_t *)(&priv_stacks[5]) }
};

#define TOTAL_KEYWORDS 43
#define MIN_WORD_LENGTH 4
#define MAX_WORD_LENGTH 4
#define MIN_HASH_VALUE 0
#define MAX_HASH_VALUE 42
/* maximum key range = 43, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
hash ( const char *str,  size_t len)
{
  static unsigned short asso_values[] =
    {
       4,  9, 12, 16,  5, 21, 43, 43, 20, 43,
       5, 23, 20, 38, 43, 43, 25, 43, 43, 43,
      12, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 24, 43, 43, 43, 43, 43, 43, 43,
      16, 43, 43, 43, 43, 43, 43, 43, 11, 43,
      43, 43, 10, 43, 43, 43, 25, 43, 43, 43,
      31, 43, 43, 43, 30, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43,  8, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 24, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43,  6, 43, 43, 43,
      43, 43, 43, 43, 23, 43, 43, 43, 26, 43,
      43, 43, 43, 43, 43, 43, 20, 43, 43, 43,
      43, 43, 43, 43, 19, 43, 43, 43, 27, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 17, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
       4, 43, 43, 43, 16, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43,  1,  0,  1, 43, 43,
      43, 43, 43, 43, 15, 43, 43, 43, 17, 43,
      43, 43,  2, 43, 43, 43,  7, 43, 43, 43,
      43, 43, 43, 43,  9, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
       8, 43, 43, 43,  0, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43
    };
  return asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

static unsigned char __unused lengthtable[] =
  {
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4
  };

static struct k_object wordlist[] =
  {
#line 35 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c4f4, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 27 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c3f4, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 34 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c4d4, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 26 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c3d4, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 33 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c4b4, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 25 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c3b4, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 31 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c474, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 24 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c374, {0}, K_OBJ_DRIVER_RESET, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 30 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c454, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 23 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c354, {0}, K_OBJ_DRIVER_CLOCK_CONTROL, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 29 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c434, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 37 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c534, {0}, K_OBJ_DRIVER_UART, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 28 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c414, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 36 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c514, {0}, K_OBJ_DRIVER_UART, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 62 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020013400, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[2] }},
#line 61 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020013000, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[1] }},
#line 46 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010200, {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 45 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000200101f0, {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 44 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000200101e0, {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 50 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000200102d8, {0}, K_OBJ_THREAD, 0, { .thread_id = 3 }},
#line 60 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020012800, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[0] }},
#line 52 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010428, {0}, K_OBJ_THREAD, 0, { .thread_id = 1 }},
#line 53 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000200104d0, {0}, K_OBJ_THREAD, 0, { .thread_id = 0 }},
#line 49 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010230, {0}, K_OBJ_THREAD, 0, { .thread_id = 4 }},
#line 43 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000200101cc, {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 42 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000200101b8, {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 41 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000200101a4, {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 32 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800c494, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 40 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010190, {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 63 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020013800, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[3] }},
#line 55 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010a38, {0}, K_OBJ_TIMER, 0, { .unused = 0 }},
#line 56 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010a80, {0}, K_OBJ_THREAD, 0, { .thread_id = 7 }},
#line 39 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000002001017c, {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 38 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010168, {0}, K_OBJ_SEM, 0, { .unused = 0 }},
#line 65 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020014000, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[5] }},
#line 64 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020013c00, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[4] }},
#line 48 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010220, {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 47 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010210, {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 59 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010dc4, {0}, K_OBJ_SEM, 0, { .unused = 0 }},
#line 57 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010b28, {0}, K_OBJ_THREAD, 0, { .thread_id = 6 }},
#line 58 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010c08, {0}, K_OBJ_THREAD, 0, { .thread_id = 8 }},
#line 54 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010588, {0}, K_OBJ_THREAD, 0, { .thread_id = 5 }},
#line 51 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010380, {0}, K_OBJ_THREAD, 0, { .thread_id = 2 }}
  };

static inline struct k_object *
z_object_lookup ( const char *str,  size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
       unsigned int key = hash((const char *)&str, len);

      if (key <= MAX_HASH_VALUE)
        if (len == sizeof(void *))
          {
             const char *s = wordlist[key].name;

            if (str == s)
              return &wordlist[key];
          }
    }
  return 0;
}
#line 66 "kobject_prebuilt_hash.gperf"

struct k_object *z_object_gperf_find(const void *obj)
{
    return z_object_lookup((const char *)obj, sizeof(void *));
}

void z_object_gperf_wordlist_foreach(_wordlist_cb_func_t func, void *context)
{
    int i;

    for (i = MIN_HASH_VALUE; i <= MAX_HASH_VALUE; i++) {
        if (wordlist[i].name != NULL) {
            func(&wordlist[i], context);
        }
    }
}

#ifndef CONFIG_DYNAMIC_OBJECTS
struct k_object *k_object_find(const void *obj)
	ALIAS_OF(z_object_gperf_find);

void k_object_wordlist_foreach(_wordlist_cb_func_t func, void *context)
	ALIAS_OF(z_object_gperf_wordlist_foreach);
#endif

Z_GENERIC_DOT_SECTION(data)
uint8_t _thread_idx_map[2] = { 0x0,  0xfe, };
