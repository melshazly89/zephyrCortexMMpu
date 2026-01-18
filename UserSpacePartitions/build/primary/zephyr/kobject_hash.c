/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: /usr/bin/gperf --output-file kobject_hash_preprocessed.c --multiple-iterations 10 kobject_hash.gperf  */
/* Computed positions: -k'1-2' */

#line 6 "kobject_hash.gperf"

#include <zephyr/kernel.h>
#include <zephyr/toolchain.h>
#include <zephyr/internal/syscall_handler.h>
#include <string.h>
#line 12 "kobject_hash.gperf"
struct k_object;
static struct k_mutex kernel_mutexes[1] = {
Z_MUTEX_INITIALIZER(kernel_mutexes[0])};
static uint8_t Z_GENERIC_SECTION(.priv_stacks.noinit)  __aligned(Z_KERNEL_STACK_OBJ_ALIGN) priv_stacks[3][K_KERNEL_STACK_LEN(CONFIG_PRIVILEGED_STACK_SIZE)];
static const struct z_stack_data stack_data[3] = {
	{ 2048, (uint8_t *)(&priv_stacks[0]) },
	{ 1024, (uint8_t *)(&priv_stacks[1]) },
	{ 1024, (uint8_t *)(&priv_stacks[2]) }
};

#define TOTAL_KEYWORDS 30
#define MIN_WORD_LENGTH 4
#define MAX_WORD_LENGTH 4
#define MIN_HASH_VALUE 0
#define MAX_HASH_VALUE 29
/* maximum key range = 30, duplicates = 0 */

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
       7, 30, 30, 30, 30, 30, 30, 30, 18, 11,
      30, 30, 17, 14, 10, 30, 30, 30, 30, 13,
      13, 13, 30, 12, 12, 30, 30, 30, 30, 30,
      30, 30, 12, 30, 30, 30, 12, 30, 30, 30,
      11, 30, 30, 30, 30, 30, 30, 30, 12, 30,
      30, 30, 11, 30, 30, 30, 10, 30, 30, 30,
      11, 30, 30, 30, 30, 30, 30, 30, 30, 30,
      30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
      30, 30, 30, 30, 30, 30, 30, 30,  8, 30,
      30, 30, 30, 30, 30, 30, 12, 30, 30, 30,
      30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
      30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
       6, 30, 30, 30, 30, 30, 30, 30, 13, 30,
      30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
      30, 30, 30, 30,  3, 30, 30, 30, 30, 30,
      30, 30,  4, 30, 30, 30, 30, 30, 30, 30,
      30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
      30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
      30, 30, 30, 30, 14, 30, 30,  1,  0,  1,
      30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
      30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
      30, 30, 30, 30, 30, 30,  2, 30, 30, 30,
      30, 30, 30, 30, 10, 30, 30, 30, 30, 30,
      30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
      30, 30, 30, 30, 30, 30, 30, 30,  0, 30,
      30, 30, 30, 30, 30, 30
    };
  return asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

static unsigned char __unused lengthtable[] =
  {
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4
  };

static struct k_object wordlist[] =
  {
#line 33 "kobject_hash.gperf"
    {(char *)0x000000000800bcf8, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 25 "kobject_hash.gperf"
    {(char *)0x000000000800bbf8, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 32 "kobject_hash.gperf"
    {(char *)0x000000000800bcd8, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 24 "kobject_hash.gperf"
    {(char *)0x000000000800bbd8, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 30 "kobject_hash.gperf"
    {(char *)0x000000000800bc98, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 23 "kobject_hash.gperf"
    {(char *)0x000000000800bb98, {0}, K_OBJ_DRIVER_RESET, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 29 "kobject_hash.gperf"
    {(char *)0x000000000800bc78, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 22 "kobject_hash.gperf"
    {(char *)0x000000000800bb78, {0}, K_OBJ_DRIVER_CLOCK_CONTROL, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 28 "kobject_hash.gperf"
    {(char *)0x000000000800bc58, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 36 "kobject_hash.gperf"
    {(char *)0x000000000800bd58, {0}, K_OBJ_DRIVER_UART, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 27 "kobject_hash.gperf"
    {(char *)0x000000000800bc38, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 35 "kobject_hash.gperf"
    {(char *)0x000000000800bd38, {0}, K_OBJ_DRIVER_UART, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 26 "kobject_hash.gperf"
    {(char *)0x000000000800bc18, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 34 "kobject_hash.gperf"
    {(char *)0x000000000800bd18, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 31 "kobject_hash.gperf"
    {(char *)0x000000000800bcb8, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 45 "kobject_hash.gperf"
    {(char *)0x00000000200113d8, {0}, K_OBJ_THREAD, 0, { .thread_id = 4 }},
#line 44 "kobject_hash.gperf"
    {(char *)0x0000000020011390, {0}, K_OBJ_TIMER, 0, { .unused = 0 }},
#line 50 "kobject_hash.gperf"
    {(char *)0x0000000020013800, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[1] }},
#line 51 "kobject_hash.gperf"
    {(char *)0x0000000020013c00, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[2] }},
#line 49 "kobject_hash.gperf"
    {(char *)0x0000000020013000, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[0] }},
#line 43 "kobject_hash.gperf"
    {(char *)0x0000000020010ee0, {0}, K_OBJ_THREAD, 0, { .thread_id = 2 }},
#line 42 "kobject_hash.gperf"
    {(char *)0x0000000020010e28, {0}, K_OBJ_THREAD, 0, { .thread_id = 0 }},
#line 40 "kobject_hash.gperf"
    {(char *)0x0000000020010934, {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 39 "kobject_hash.gperf"
    {(char *)0x0000000020010920, {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 48 "kobject_hash.gperf"
    {(char *)0x0000000020011724, {0}, K_OBJ_SEM, 0, { .unused = 0 }},
#line 47 "kobject_hash.gperf"
    {(char *)0x0000000020011560, {0}, K_OBJ_THREAD, 0, { .thread_id = 5 }},
#line 46 "kobject_hash.gperf"
    {(char *)0x0000000020011480, {0}, K_OBJ_THREAD, 0, { .thread_id = 3 }},
#line 41 "kobject_hash.gperf"
    {(char *)0x0000000020010d80, {0}, K_OBJ_THREAD, 0, { .thread_id = 1 }},
#line 38 "kobject_hash.gperf"
    {(char *)0x000000002001090c, {0}, K_OBJ_SEM, 0, { .unused = 0 }},
#line 37 "kobject_hash.gperf"
    {(char *)0x0000000020010828, {0}, K_OBJ_SYS_MUTEX, 0, { .mutex = &kernel_mutexes[0] }}
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
#line 52 "kobject_hash.gperf"

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
uint8_t _thread_idx_map[2] = { 0xc0,  0xff, };
