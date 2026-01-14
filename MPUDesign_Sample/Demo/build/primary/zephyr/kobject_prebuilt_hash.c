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
static uint8_t Z_GENERIC_SECTION(.priv_stacks.noinit)  __aligned(Z_KERNEL_STACK_OBJ_ALIGN) priv_stacks[6][K_KERNEL_STACK_LEN(CONFIG_PRIVILEGED_STACK_SIZE)];
static const struct z_stack_data stack_data[6] = {
	{ 1024, (uint8_t *)(&priv_stacks[0]) },
	{ 1024, (uint8_t *)(&priv_stacks[1]) },
	{ 1024, (uint8_t *)(&priv_stacks[2]) },
	{ 1024, (uint8_t *)(&priv_stacks[3]) },
	{ 1024, (uint8_t *)(&priv_stacks[4]) },
	{ 1024, (uint8_t *)(&priv_stacks[5]) }
};

#define TOTAL_KEYWORDS 31
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
      10, 31, 31, 31, 31, 31, 31, 31, 20,  7,
      15,  9, 14, 13, 31, 31, 14, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 12, 31,
      31, 31, 15, 31, 31, 31, 14, 31, 31, 31,
      10, 31, 31, 31, 13, 31, 31, 31, 12, 31,
      31, 31, 11, 31, 31, 31, 31, 31, 31, 31,
      10, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 10, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 16, 31, 31, 31,  8, 31, 31, 31,
      31, 31, 31,  1,  0, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      14, 31, 31, 31,  8, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 14, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31,  6, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 13, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31,  4, 31,
      31, 31,  9, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
       2, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
      31, 31, 31, 31, 31, 31, 31, 31,  7, 31,
      31, 31,  0, 31, 31, 31
    };
  return asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

static unsigned char __unused lengthtable[] =
  {
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4,  4
  };

static struct k_object wordlist[] =
  {
#line 39 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000080068fc, {0}, K_OBJ_DRIVER_UART, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 31 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000080067fc, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 38 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000080068dc, {0}, K_OBJ_DRIVER_UART, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 30 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000080067dc, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 37 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000080068bc, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 29 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000080067bc, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 36 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800689c, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 28 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800679c, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 35 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800687c, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 27 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800677c, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 33 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800683c, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 26 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800673c, {0}, K_OBJ_DRIVER_RESET, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 32 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800681c, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 25 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800671c, {0}, K_OBJ_DRIVER_CLOCK_CONTROL, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 43 "kobject_prebuilt_hash.gperf"
    {(char *)0x00000000200109f8, {0}, K_OBJ_THREAD, 0, { .thread_id = 3 }},
#line 42 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010960, {0}, K_OBJ_THREAD, 0, { .thread_id = 4 }},
#line 34 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000000800685c, {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 41 "kobject_prebuilt_hash.gperf"
    {(char *)0x000000002001094c, {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 46 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010bc0, {0}, K_OBJ_THREAD, 0, { .thread_id = 0 }},
#line 45 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010b28, {0}, K_OBJ_THREAD, 0, { .thread_id = 1 }},
#line 52 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020012800, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[2] }},
#line 55 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020013400, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[5] }},
#line 54 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020013000, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[4] }},
#line 53 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020012c00, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[3] }},
#line 51 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020012400, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[1] }},
#line 50 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020012000, {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[0] }},
#line 49 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010da8, {0}, K_OBJ_THREAD, 0, { .thread_id = 7 }},
#line 48 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010d10, {0}, K_OBJ_THREAD, 0, { .thread_id = 5 }},
#line 47 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010c78, {0}, K_OBJ_THREAD, 0, { .thread_id = 6 }},
#line 44 "kobject_prebuilt_hash.gperf"
    {(char *)0x0000000020010a90, {0}, K_OBJ_THREAD, 0, { .thread_id = 2 }},
#line 40 "kobject_prebuilt_hash.gperf"
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
#line 56 "kobject_prebuilt_hash.gperf"

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
uint8_t _thread_idx_map[2] = { 0x0,  0xff, };
