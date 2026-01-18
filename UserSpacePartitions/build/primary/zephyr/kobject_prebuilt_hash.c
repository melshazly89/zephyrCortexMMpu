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
static struct k_mutex kernel_mutexes[1] = {
Z_MUTEX_INITIALIZER(kernel_mutexes[0])};
static uint8_t Z_GENERIC_SECTION(.priv_stacks.noinit)  __aligned(Z_KERNEL_STACK_OBJ_ALIGN) priv_stacks[2][K_KERNEL_STACK_LEN(CONFIG_PRIVILEGED_STACK_SIZE)];
static const struct z_stack_data stack_data[2] = {
	{ 2048, (uint8_t *)(&priv_stacks[0]) },
	{ 1024, (uint8_t *)(&priv_stacks[1]) }
};

#define TOTAL_KEYWORDS 28
#define MIN_WORD_LENGTH 4
#define MAX_WORD_LENGTH 4
#define MIN_HASH_VALUE 0
#define MAX_HASH_VALUE 30
/* maximum key range = 31, duplicates = 0 */

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
      16, 31, 31, 31, 31, 31, 31, 31, 14, 13,
      14, 31, 13, 31, 31, 10, 16, 13, 11, 31,
      31, 31, 31, 31, 12, 31, 31, 31, 31, 31,
      31, 31, 12, 31, 31, 31, 31, 31, 31, 31,
       1, 31, 31, 31, 31, 31, 31, 31,  5, 31,
      31, 31, 31, 31, 31, 31, 10, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31,  8, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 10, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
       6, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      11, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31,  4, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31,  9, 31, 31, 31,
      31, 31, 31, 31,  2, 31,  1,  0,  1, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 18, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31,  0, 31,
      31, 31, 31, 31, 31, 31
    };
  return asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

static unsigned char __unused lengthtable[] =
  {
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  0,
     0,  0,  4
  };

static struct k_object wordlist[] =
  {
#line 31 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bbf8, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 23 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800baf8, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 29 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bbb8, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 22 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bab8, {0}, K_OBJ_DRIVER_RESET, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 28 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bb98, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 21 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800ba98, {0}, K_OBJ_DRIVER_CLOCK_CONTROL, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 27 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bb78, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 35 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bc78, {0}, K_OBJ_DRIVER_UART, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 26 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bb58, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 34 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bc58, {0}, K_OBJ_DRIVER_UART, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 25 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bb38, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 33 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bc38, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 24 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bb18, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 32 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bc18, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 37 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000200108f8, {0}, K_OBJ_SEM, 0, { .unused = 0 }},
#line 36 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010828, {0}, K_OBJ_SYS_MUTEX, 0, { .mutex = &kernel_mutexes[0] }},
#line 41 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010ab8, {0}, K_OBJ_THREAD, 0, { .thread_id = 1 }},
#line 47 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020012800, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[0] }},
#line 30 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800bbd8, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 43 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010fb0, {0}, K_OBJ_THREAD, 0, { .thread_id = 3 }},
#line 42 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010f68, {0}, K_OBJ_TIMER, 0, { .unused = 0 }},
#line 48 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020013000, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[1] }},
#line 46 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000002001128c, {0}, K_OBJ_SEM, 0, { .unused = 0 }},
#line 45 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020011138, {0}, K_OBJ_THREAD, 0, { .thread_id = 4 }},
#line 44 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020011058, {0}, K_OBJ_THREAD, 0, { .thread_id = 2 }},
#line 39 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010920, {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 38 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000002001090c, {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
    {}, {}, {},
#line 40 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010a00, {0}, K_OBJ_THREAD, 0, { .thread_id = 0 }}
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
#line 49 "kobject_prebuilt_hash.gperf"

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
uint8_t _thread_idx_map[2] = { 0xe0,  0xff, };
