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
hash (register const char *str, register size_t len)
{
  static unsigned char asso_values[] =
    {
      14, 14, 15, 27, 13, 21, 43, 43, 20, 43,
      15, 37, 20, 37, 43, 43, 22, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 21, 43, 43, 43, 11, 43, 43, 43,
       2, 43, 43, 43, 43, 43, 43, 43,  3, 43,
      43, 43, 21, 43, 43, 43, 13, 43, 43, 43,
      20, 43, 43, 43, 19, 43, 43, 43,  0, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
       9, 43, 43, 43, 18, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 17, 43, 43, 43, 15, 43,
      43, 43,  7, 43, 43, 43, 20, 43, 43, 43,
      43, 43, 43, 43, 12, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43,  5, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 11, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43,  1,  0, 43, 43,
      43, 43, 43, 43, 10, 43, 43, 43, 10, 43,
      43, 43, 43, 43, 43, 43,  7, 43, 43, 43,
      43, 43, 43, 43,  7, 43, 43, 43,  3, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
       6, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43
    };
  return asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

static unsigned char lengthtable[] =
  {
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4
  };

static struct k_object wordlist[] =
  {
#line 32 "kobject_prebuilt_hash.gperf"
    {"D\305\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 36 "kobject_prebuilt_hash.gperf"
    {"\304\305\000\010", {0}, K_OBJ_DRIVER_UART, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 28 "kobject_prebuilt_hash.gperf"
    {"\304\304\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 37 "kobject_prebuilt_hash.gperf"
    {"\344\305\000\010", {0}, K_OBJ_DRIVER_UART, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 29 "kobject_prebuilt_hash.gperf"
    {"\344\304\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 35 "kobject_prebuilt_hash.gperf"
    {"\244\305\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 27 "kobject_prebuilt_hash.gperf"
    {"\244\304\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 34 "kobject_prebuilt_hash.gperf"
    {"\204\305\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 26 "kobject_prebuilt_hash.gperf"
    {"\204\304\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 33 "kobject_prebuilt_hash.gperf"
    {"d\305\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 25 "kobject_prebuilt_hash.gperf"
    {"d\304\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 31 "kobject_prebuilt_hash.gperf"
    {"$\305\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 24 "kobject_prebuilt_hash.gperf"
    {"$\304\000\010", {0}, K_OBJ_DRIVER_RESET, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 30 "kobject_prebuilt_hash.gperf"
    {"\004\305\000\010", {0}, K_OBJ_DRIVER_GPIO, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 23 "kobject_prebuilt_hash.gperf"
    {"\004\304\000\010", {0}, K_OBJ_DRIVER_CLOCK_CONTROL, 0 | K_OBJ_FLAG_DRIVER, { .unused = 0 }},
#line 52 "kobject_prebuilt_hash.gperf"
    {"(\004\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 1 }},
#line 60 "kobject_prebuilt_hash.gperf"
    {"\000(\001 ", {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[0] }},
#line 61 "kobject_prebuilt_hash.gperf"
    {"\0000\001 ", {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[1] }},
#line 49 "kobject_prebuilt_hash.gperf"
    {"0\002\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 4 }},
#line 41 "kobject_prebuilt_hash.gperf"
    {"\244\001\001 ", {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 45 "kobject_prebuilt_hash.gperf"
    {"\360\001\001 ", {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 44 "kobject_prebuilt_hash.gperf"
    {"\340\001\001 ", {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 50 "kobject_prebuilt_hash.gperf"
    {"\330\002\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 3 }},
#line 53 "kobject_prebuilt_hash.gperf"
    {"\320\004\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 0 }},
#line 43 "kobject_prebuilt_hash.gperf"
    {"\314\001\001 ", {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 42 "kobject_prebuilt_hash.gperf"
    {"\270\001\001 ", {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 40 "kobject_prebuilt_hash.gperf"
    {"\220\001\001 ", {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 63 "kobject_prebuilt_hash.gperf"
    {"\0008\001 ", {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[3] }},
#line 55 "kobject_prebuilt_hash.gperf"
    {"8\012\001 ", {0}, K_OBJ_TIMER, 0, { .unused = 0 }},
#line 46 "kobject_prebuilt_hash.gperf"
    {"\000\002\001 ", {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 56 "kobject_prebuilt_hash.gperf"
    {"\200\012\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 7 }},
#line 39 "kobject_prebuilt_hash.gperf"
    {"|\001\001 ", {0}, K_OBJ_MUTEX, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 38 "kobject_prebuilt_hash.gperf"
    {"h\001\001 ", {0}, K_OBJ_SEM, 0, { .unused = 0 }},
#line 65 "kobject_prebuilt_hash.gperf"
    {"\000@\001 ", {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[5] }},
#line 64 "kobject_prebuilt_hash.gperf"
    {"\000<\001 ", {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[4] }},
#line 62 "kobject_prebuilt_hash.gperf"
    {"\0004\001 ", {0}, K_OBJ_THREAD_STACK_ELEMENT, 0, { .stack_data = &stack_data[2] }},
#line 48 "kobject_prebuilt_hash.gperf"
    {" \002\001 ", {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 47 "kobject_prebuilt_hash.gperf"
    {"\020\002\001 ", {0}, K_OBJ_SEM, 0 | K_OBJ_FLAG_INITIALIZED, { .unused = 0 }},
#line 59 "kobject_prebuilt_hash.gperf"
    {"\304\015\001 ", {0}, K_OBJ_SEM, 0, { .unused = 0 }},
#line 57 "kobject_prebuilt_hash.gperf"
    {"(\013\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 6 }},
#line 58 "kobject_prebuilt_hash.gperf"
    {"\010\014\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 8 }},
#line 54 "kobject_prebuilt_hash.gperf"
    {"\210\005\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 5 }},
#line 51 "kobject_prebuilt_hash.gperf"
    {"\200\003\001 ", {0}, K_OBJ_THREAD, 0, { .thread_id = 2 }}
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
