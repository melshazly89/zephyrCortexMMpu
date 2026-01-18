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
static uint8_t Z_GENERIC_SECTION(.priv_stacks.noinit)  __aligned(Z_KERNEL_STACK_OBJ_ALIGN) priv_stacks[4][K_KERNEL_STACK_LEN(CONFIG_PRIVILEGED_STACK_SIZE)];
static const struct z_stack_data stack_data[4] = {
	{ 1024, (uint8_t *)(&priv_stacks[0]) },
	{ 1024, (uint8_t *)(&priv_stacks[1]) },
	{ 1024, (uint8_t *)(&priv_stacks[2]) },
	{ 1024, (uint8_t *)(&priv_stacks[3]) }
};

#define TOTAL_KEYWORDS 33
#define MIN_WORD_LENGTH 4
#define MAX_WORD_LENGTH 4
#define MIN_HASH_VALUE 0
#define MAX_HASH_VALUE 32
/* maximum key range = 33, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
hash (register const char *str, register size_t len)
{
  static unsigned char asso_values[] =
    {
       5, 33, 33, 33, 33, 33, 33, 33,  6,  1,
      16, 16, 12, 33, 33, 33, 14, 11, 15, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 28, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      11, 33, 33, 33, 10, 33, 33, 33, 13, 33,
      33, 33, 23, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33,  8, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 15, 33, 33, 33, 27, 33,
      33, 33, 12, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
       6, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      16, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33,  4, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33,  1,  0, 12,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33,  2, 33, 33, 33, 33, 33,
      33, 33, 15, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 12, 33, 33, 33, 15, 33,
      33, 33, 19, 33, 33, 33,  0, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 13, 33,
      33, 33, 33, 33, 33, 33
    };
  return asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

static unsigned char lengthtable[] =
  {
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4,  4,  4,  4
  };

static struct k_object wordlist[] =
  {
#line 36 "kobject_prebuilt_hash.gperf"
    {"\354\274\000\010", {0}, K_OBJ_DRIVER_UART, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 28 "kobject_prebuilt_hash.gperf"
    {"\354\273\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 35 "kobject_prebuilt_hash.gperf"
    {"\314\274\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 27 "kobject_prebuilt_hash.gperf"
    {"\314\273\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 34 "kobject_prebuilt_hash.gperf"
    {"\254\274\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 26 "kobject_prebuilt_hash.gperf"
    {"\254\273\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 33 "kobject_prebuilt_hash.gperf"
    {"\214\274\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 25 "kobject_prebuilt_hash.gperf"
    {"\214\273\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 31 "kobject_prebuilt_hash.gperf"
    {"L\274\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 24 "kobject_prebuilt_hash.gperf"
    {"L\273\000\010", {0}, K_OBJ_DRIVER_RESET, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 30 "kobject_prebuilt_hash.gperf"
    {",\274\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 23 "kobject_prebuilt_hash.gperf"
    {",\273\000\010", {0}, K_OBJ_DRIVER_CLOCK_CONTROL, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 29 "kobject_prebuilt_hash.gperf"
    {"\014\274\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 41 "kobject_prebuilt_hash.gperf"
    {"\014\011\001 ", {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 43 "kobject_prebuilt_hash.gperf"
    {"0\011\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 2 }},
#line 53 "kobject_prebuilt_hash.gperf"
    {"\000,\001 ", {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[1] }},
#line 52 "kobject_prebuilt_hash.gperf"
    {"\000(\001 ", {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[0] }},
#line 38 "kobject_prebuilt_hash.gperf"
    {"(\010\001 ", {0}, K_OBJ_SYS_MUTEX, 0, { .mutex = &kernel_mutexes[0] }},
#line 54 "kobject_prebuilt_hash.gperf"
    {"\0000\001 ", {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[2] }},
#line 40 "kobject_prebuilt_hash.gperf"
    {"\370\010\001 ", {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 44 "kobject_prebuilt_hash.gperf"
    {"\350\011\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 1 }},
#line 39 "kobject_prebuilt_hash.gperf"
    {"\344\010\001 ", {0}, K_OBJ_SEM, 0, { .unused = 0 }},
#line 49 "kobject_prebuilt_hash.gperf"
    {"(\021\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 4 }},
#line 50 "kobject_prebuilt_hash.gperf"
    {"\340\021\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 6 }},
#line 37 "kobject_prebuilt_hash.gperf"
    {"\014\275\000\010", {0}, K_OBJ_DRIVER_UART, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 47 "kobject_prebuilt_hash.gperf"
    {"(\020\001 ", {0}, K_OBJ_TIMER, 0, { .unused = 0 }},
#line 48 "kobject_prebuilt_hash.gperf"
    {"p\020\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 5 }},
#line 32 "kobject_prebuilt_hash.gperf"
    {"l\274\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 55 "kobject_prebuilt_hash.gperf"
    {"\0004\001 ", {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[3] }},
#line 42 "kobject_prebuilt_hash.gperf"
    {"\034\011\001 ", {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 51 "kobject_prebuilt_hash.gperf"
    {"\324\022\001 ", {0}, K_OBJ_SEM, 0, { .unused = 0 }},
#line 46 "kobject_prebuilt_hash.gperf"
    {"h\013\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 3 }},
#line 45 "kobject_prebuilt_hash.gperf"
    {"\240\012\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 0 }}
  };

struct k_object *
z_object_lookup (register const char *str, register size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        if (len == lengthtable[key])
          {
            register const char *s = wordlist[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
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
uint8_t _thread_idx_map[2] = { 0x80,  0xff, };
