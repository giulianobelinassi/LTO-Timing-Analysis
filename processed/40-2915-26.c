# 1 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
# 1 "/home/giulianob/gcc_git_gnu/build_temp/libbacktrace//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
# 33 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
# 1 "./config.h" 1
# 34 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 2

# 1 "/usr/include/errno.h" 1 3 4
# 25 "/usr/include/errno.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/errno.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4




# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 6 "/usr/include/asm-generic/errno.h" 2 3 4
# 2 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 2 "/usr/include/linux/errno.h" 2 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 29 "/usr/include/errno.h" 2 3 4









# 37 "/usr/include/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));







extern char *program_invocation_name;
extern char *program_invocation_short_name;

# 1 "/usr/include/x86_64-linux-gnu/bits/types/error_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/error_t.h" 3 4
typedef int error_t;
# 49 "/usr/include/errno.h" 2 3 4




# 36 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 209 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 321 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef int wchar_t;
# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 140 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float64 strtof64 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float128 strtof128 (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float32x strtof32x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float64x strtof64x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));

extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));

extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 232 "/usr/include/stdlib.h" 3 4
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf128 (char *__dest, size_t __size, const char * __format,
   _Float128 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 272 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 273 "/usr/include/stdlib.h" 2 3 4

extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
# 316 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float64 strtof64_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float128 strtof128_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float32x strtof32x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float64x strtof64x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
# 360 "/usr/include/stdlib.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__ , __leaf__)) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}


__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__ , __leaf__)) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 30 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;



  __syscall_slong_t tv_nsec;
# 26 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 49 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 101 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 126 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 180 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 74 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
};
# 75 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4
# 87 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
};
# 88 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)));



extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));


# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 569 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 675 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 688 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 698 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 710 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 720 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 731 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 742 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 752 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 762 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 774 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 784 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;





extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 800 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);




extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return ((void *)0);
}
# 826 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 872 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));







extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 957 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1013 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__ , __leaf__)) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
# 1014 "/usr/include/stdlib.h" 2 3 4
# 1023 "/usr/include/stdlib.h" 3 4

# 37 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 91 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 104 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 115 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 226 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 253 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 266 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 303 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 330 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 360 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 421 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 433 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 487 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 499 "/usr/include/string.h" 3 4

# 38 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 2

# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 99 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 164 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];



  };
# 102 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 205 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 224 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));







extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 249 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));







extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 272 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));




extern __mode_t getumask (void) __attribute__ ((__nothrow__ , __leaf__));



extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 395 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 428 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, const char *__filename,
        struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, const char *__filename,
         struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));


# 1 "/usr/include/x86_64-linux-gnu/bits/statx.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/statx.h" 3 4
# 1 "/usr/include/linux/stat.h" 1 3 4




# 1 "/usr/include/linux/types.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/asm/types.h" 1 3 4
# 1 "/usr/include/asm-generic/types.h" 1 3 4






# 1 "/usr/include/asm-generic/int-ll64.h" 1 3 4
# 12 "/usr/include/asm-generic/int-ll64.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 3 4
# 1 "/usr/include/asm-generic/bitsperlong.h" 1 3 4
# 12 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 2 3 4
# 13 "/usr/include/asm-generic/int-ll64.h" 2 3 4







typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 8 "/usr/include/asm-generic/types.h" 2 3 4
# 2 "/usr/include/x86_64-linux-gnu/asm/types.h" 2 3 4
# 6 "/usr/include/linux/types.h" 2 3 4



# 1 "/usr/include/linux/posix_types.h" 1 3 4




# 1 "/usr/include/linux/stddef.h" 1 3 4
# 6 "/usr/include/linux/posix_types.h" 2 3 4
# 25 "/usr/include/linux/posix_types.h" 3 4
typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/usr/include/x86_64-linux-gnu/asm/posix_types.h" 1 3 4






# 1 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 3 4
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;


typedef unsigned long __kernel_old_dev_t;


# 1 "/usr/include/asm-generic/posix_types.h" 1 3 4
# 15 "/usr/include/asm-generic/posix_types.h" 3 4
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;



typedef __kernel_ulong_t __kernel_ino_t;



typedef unsigned int __kernel_mode_t;



typedef int __kernel_pid_t;



typedef int __kernel_ipc_pid_t;



typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;



typedef __kernel_long_t __kernel_suseconds_t;



typedef int __kernel_daddr_t;



typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
# 72 "/usr/include/asm-generic/posix_types.h" 3 4
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;




typedef struct {
 int val[2];
} __kernel_fsid_t;





typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_old_time_t;
typedef __kernel_long_t __kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
# 19 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 2 3 4
# 8 "/usr/include/x86_64-linux-gnu/asm/posix_types.h" 2 3 4
# 37 "/usr/include/linux/posix_types.h" 2 3 4
# 10 "/usr/include/linux/types.h" 2 3 4
# 24 "/usr/include/linux/types.h" 3 4
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
# 47 "/usr/include/linux/types.h" 3 4
typedef unsigned __poll_t;
# 6 "/usr/include/linux/stat.h" 2 3 4
# 56 "/usr/include/linux/stat.h" 3 4
struct statx_timestamp {
 __s64 tv_sec;
 __u32 tv_nsec;
 __s32 __reserved;
};
# 99 "/usr/include/linux/stat.h" 3 4
struct statx {

 __u32 stx_mask;
 __u32 stx_blksize;
 __u64 stx_attributes;

 __u32 stx_nlink;
 __u32 stx_uid;
 __u32 stx_gid;
 __u16 stx_mode;
 __u16 __spare0[1];

 __u64 stx_ino;
 __u64 stx_size;
 __u64 stx_blocks;
 __u64 stx_attributes_mask;

 struct statx_timestamp stx_atime;
 struct statx_timestamp stx_btime;
 struct statx_timestamp stx_ctime;
 struct statx_timestamp stx_mtime;

 __u32 stx_rdev_major;
 __u32 stx_rdev_minor;
 __u32 stx_dev_major;
 __u32 stx_dev_minor;

 __u64 __spare2[14];

};
# 32 "/usr/include/x86_64-linux-gnu/bits/statx.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_statx_timestamp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_statx.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 2 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 3 4



int statx (int __dirfd, const char *__restrict __path, int __flags,
           unsigned int __mask, struct statx *__restrict __buf)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 5)));


# 40 "/usr/include/x86_64-linux-gnu/bits/statx.h" 2 3 4
# 447 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) stat (const char *__path, struct stat *__statbuf)
{
  return __xstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) lstat (const char *__path, struct stat *__statbuf)
{
  return __lxstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstat (int __fd, struct stat *__statbuf)
{
  return __fxstat (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstatat (int __fd, const char *__filename, struct stat *__statbuf, int __flag)

{
  return __fxstatat (1, __fd, __filename, __statbuf, __flag);
}



extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) mknod (const char *__path, __mode_t __mode, __dev_t __dev)
{
  return __xmknod (0, __path, __mode, &__dev);
}



extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) mknodat (int __fd, const char *__path, __mode_t __mode, __dev_t __dev)

{
  return __xmknodat (0, __fd, __path, __mode, &__dev);
}





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) stat64 (const char *__path, struct stat64 *__statbuf)
{
  return __xstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) lstat64 (const char *__path, struct stat64 *__statbuf)
{
  return __lxstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstat64 (int __fd, struct stat64 *__statbuf)
{
  return __fxstat64 (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstatat64 (int __fd, const char *__filename, struct stat64 *__statbuf, int __flag)

{
  return __fxstatat64 (1, __fd, __filename, __statbuf, __flag);
}







# 40 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 345 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ , __leaf__));






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__ , __leaf__)) ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__ , __leaf__));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__ , __leaf__));



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;



extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__ , __leaf__));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__ , __leaf__));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__ , __leaf__)) ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__ , __leaf__)) ;






extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4








extern char *optarg;
# 50 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 91 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 2 3 4


# 49 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4

# 870 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);





extern int syncfs (int __fd) __attribute__ ((__nothrow__ , __leaf__));






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 991 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1003 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1014 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1024 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1035 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1056 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1079 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1089 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1107 "/usr/include/unistd.h" 3 4
ssize_t copy_file_range (int __infd, __off64_t *__pinoff,
    int __outfd, __off64_t *__poutoff,
    size_t __length, unsigned int __flags);





extern int fdatasync (int __fildes);
# 1124 "/usr/include/unistd.h" 3 4
extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));







extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 1161 "/usr/include/unistd.h" 3 4
int getentropy (void *__buffer, size_t __length) ;
# 1170 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/unistd_ext.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/unistd_ext.h" 3 4
extern __pid_t gettid (void) __attribute__ ((__nothrow__ , __leaf__));
# 1171 "/usr/include/unistd.h" 2 3 4


# 41 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 2


# 1 "/usr/include/link.h" 1 3 4
# 24 "/usr/include/link.h" 3 4
# 1 "/usr/include/elf.h" 1 3 4
# 24 "/usr/include/elf.h" 3 4




# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stdint.h" 2 3 4
# 29 "/usr/include/elf.h" 2 3 4


typedef uint16_t Elf32_Half;
typedef uint16_t Elf64_Half;


typedef uint32_t Elf32_Word;
typedef int32_t Elf32_Sword;
typedef uint32_t Elf64_Word;
typedef int32_t Elf64_Sword;


typedef uint64_t Elf32_Xword;
typedef int64_t Elf32_Sxword;
typedef uint64_t Elf64_Xword;
typedef int64_t Elf64_Sxword;


typedef uint32_t Elf32_Addr;
typedef uint64_t Elf64_Addr;


typedef uint32_t Elf32_Off;
typedef uint64_t Elf64_Off;


typedef uint16_t Elf32_Section;
typedef uint16_t Elf64_Section;


typedef Elf32_Half Elf32_Versym;
typedef Elf64_Half Elf64_Versym;






typedef struct
{
  unsigned char e_ident[(16)];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct
{
  unsigned char e_ident[(16)];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;
# 385 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct
{
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 492 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word ch_type;
  Elf32_Word ch_size;
  Elf32_Word ch_addralign;
} Elf32_Chdr;

typedef struct
{
  Elf64_Word ch_type;
  Elf64_Word ch_reserved;
  Elf64_Xword ch_size;
  Elf64_Xword ch_addralign;
} Elf64_Chdr;
# 519 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Section st_shndx;
} Elf32_Sym;

typedef struct
{
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Section st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct
{
  Elf32_Half si_boundto;
  Elf32_Half si_flags;
} Elf32_Syminfo;

typedef struct
{
  Elf64_Half si_boundto;
  Elf64_Half si_flags;
} Elf64_Syminfo;
# 634 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;






typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;



typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;
# 679 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct
{
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 830 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Sword d_tag;
  union
    {
      Elf32_Word d_val;
      Elf32_Addr d_ptr;
    } d_un;
} Elf32_Dyn;

typedef struct
{
  Elf64_Sxword d_tag;
  union
    {
      Elf64_Xword d_val;
      Elf64_Addr d_ptr;
    } d_un;
} Elf64_Dyn;
# 1012 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Half vd_version;
  Elf32_Half vd_flags;
  Elf32_Half vd_ndx;
  Elf32_Half vd_cnt;
  Elf32_Word vd_hash;
  Elf32_Word vd_aux;
  Elf32_Word vd_next;

} Elf32_Verdef;

typedef struct
{
  Elf64_Half vd_version;
  Elf64_Half vd_flags;
  Elf64_Half vd_ndx;
  Elf64_Half vd_cnt;
  Elf64_Word vd_hash;
  Elf64_Word vd_aux;
  Elf64_Word vd_next;

} Elf64_Verdef;
# 1054 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word vda_name;
  Elf32_Word vda_next;

} Elf32_Verdaux;

typedef struct
{
  Elf64_Word vda_name;
  Elf64_Word vda_next;

} Elf64_Verdaux;




typedef struct
{
  Elf32_Half vn_version;
  Elf32_Half vn_cnt;
  Elf32_Word vn_file;

  Elf32_Word vn_aux;
  Elf32_Word vn_next;

} Elf32_Verneed;

typedef struct
{
  Elf64_Half vn_version;
  Elf64_Half vn_cnt;
  Elf64_Word vn_file;

  Elf64_Word vn_aux;
  Elf64_Word vn_next;

} Elf64_Verneed;
# 1101 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word vna_hash;
  Elf32_Half vna_flags;
  Elf32_Half vna_other;
  Elf32_Word vna_name;
  Elf32_Word vna_next;

} Elf32_Vernaux;

typedef struct
{
  Elf64_Word vna_hash;
  Elf64_Half vna_flags;
  Elf64_Half vna_other;
  Elf64_Word vna_name;
  Elf64_Word vna_next;

} Elf64_Vernaux;
# 1135 "/usr/include/elf.h" 3 4
typedef struct
{
  uint32_t a_type;
  union
    {
      uint32_t a_val;



    } a_un;
} Elf32_auxv_t;

typedef struct
{
  uint64_t a_type;
  union
    {
      uint64_t a_val;



    } a_un;
} Elf64_auxv_t;

# 1 "/usr/include/x86_64-linux-gnu/bits/auxv.h" 1 3 4
# 1160 "/usr/include/elf.h" 2 3 4



typedef struct
{
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;

typedef struct
{
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
# 1283 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Xword m_value;
  Elf32_Word m_info;
  Elf32_Word m_poffset;
  Elf32_Half m_repeat;
  Elf32_Half m_stride;
} Elf32_Move;

typedef struct
{
  Elf64_Xword m_value;
  Elf64_Xword m_info;
  Elf64_Xword m_poffset;
  Elf64_Half m_repeat;
  Elf64_Half m_stride;
} Elf64_Move;
# 1673 "/usr/include/elf.h" 3 4
typedef union
{
  struct
    {
      Elf32_Word gt_current_g_value;
      Elf32_Word gt_unused;
    } gt_header;
  struct
    {
      Elf32_Word gt_g_value;
      Elf32_Word gt_bytes;
    } gt_entry;
} Elf32_gptab;



typedef struct
{
  Elf32_Word ri_gprmask;
  Elf32_Word ri_cprmask[4];
  Elf32_Sword ri_gp_value;
} Elf32_RegInfo;



typedef struct
{
  unsigned char kind;

  unsigned char size;
  Elf32_Section section;

  Elf32_Word info;
} Elf_Options;
# 1749 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word hwp_flags1;
  Elf32_Word hwp_flags2;
} Elf_Options_Hw;
# 1917 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word l_name;
  Elf32_Word l_time_stamp;
  Elf32_Word l_checksum;
  Elf32_Word l_version;
  Elf32_Word l_flags;
} Elf32_Lib;

typedef struct
{
  Elf64_Word l_name;
  Elf64_Word l_time_stamp;
  Elf64_Word l_checksum;
  Elf64_Word l_version;
  Elf64_Word l_flags;
} Elf64_Lib;
# 1948 "/usr/include/elf.h" 3 4
typedef Elf32_Addr Elf32_Conflict;

typedef struct
{

  Elf32_Half version;

  unsigned char isa_level;

  unsigned char isa_rev;

  unsigned char gpr_size;

  unsigned char cpr1_size;

  unsigned char cpr2_size;

  unsigned char fp_abi;

  Elf32_Word isa_ext;

  Elf32_Word ases;

  Elf32_Word flags1;
  Elf32_Word flags2;
} Elf_MIPS_ABIFlags_v0;
# 2024 "/usr/include/elf.h" 3 4
enum
{

  Val_GNU_MIPS_ABI_FP_ANY = 0,

  Val_GNU_MIPS_ABI_FP_DOUBLE = 1,

  Val_GNU_MIPS_ABI_FP_SINGLE = 2,

  Val_GNU_MIPS_ABI_FP_SOFT = 3,

  Val_GNU_MIPS_ABI_FP_OLD_64 = 4,

  Val_GNU_MIPS_ABI_FP_XX = 5,

  Val_GNU_MIPS_ABI_FP_64 = 6,

  Val_GNU_MIPS_ABI_FP_64A = 7,

  Val_GNU_MIPS_ABI_FP_MAX = 7
};
# 3956 "/usr/include/elf.h" 3 4

# 25 "/usr/include/link.h" 2 3 4
# 1 "/usr/include/dlfcn.h" 1 3 4
# 24 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 1 3 4
# 57 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 3 4



extern void _dl_mcount_wrapper_check (void *__selfpc) __attribute__ ((__nothrow__ , __leaf__));


# 28 "/usr/include/dlfcn.h" 2 3 4
# 44 "/usr/include/dlfcn.h" 3 4
typedef long int Lmid_t;











extern void *dlopen (const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern void *dlmopen (Lmid_t __nsid, const char *__file, int __mode) __attribute__ ((__nothrow__));



extern void *dlvsym (void *__restrict __handle,
       const char *__restrict __name,
       const char *__restrict __version)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));





extern char *dlerror (void) __attribute__ ((__nothrow__ , __leaf__));





typedef struct
{
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (const void *__address, Dl_info *__info)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int dladdr1 (const void *__address, Dl_info *__info,
      void **__extra_info, int __flags) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *__restrict __handle,
     int __request, void *__restrict __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;





  __extension__ union
  {
    Dl_serpath dls_serpath[0];
    Dl_serpath __dls_serpath_pad[1];
  };



} Dl_serinfo;




# 26 "/usr/include/link.h" 2 3 4
# 34 "/usr/include/link.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/elfclass.h" 1 3 4
# 9 "/usr/include/x86_64-linux-gnu/bits/elfclass.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/elfclass.h" 2 3 4




typedef uint32_t Elf_Symndx;
# 35 "/usr/include/link.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/link.h" 1 3 4
# 68 "/usr/include/x86_64-linux-gnu/bits/link.h" 3 4
typedef float La_x86_64_xmm __attribute__ ((__vector_size__ (16)));
typedef float La_x86_64_ymm
    __attribute__ ((__vector_size__ (32), __aligned__ (16)));
typedef double La_x86_64_zmm
    __attribute__ ((__vector_size__ (64), __aligned__ (16)));




typedef union
{

  La_x86_64_ymm ymm[2];
  La_x86_64_zmm zmm[1];

  La_x86_64_xmm xmm[4];
} La_x86_64_vector __attribute__ ((__aligned__ (16)));

typedef struct La_x86_64_regs
{
  uint64_t lr_rdx;
  uint64_t lr_r8;
  uint64_t lr_r9;
  uint64_t lr_rcx;
  uint64_t lr_rsi;
  uint64_t lr_rdi;
  uint64_t lr_rbp;
  uint64_t lr_rsp;
  La_x86_64_xmm lr_xmm[8];
  La_x86_64_vector lr_vector[8];

  __int128_t lr_bnd[4];

} La_x86_64_regs;


typedef struct La_x86_64_retval
{
  uint64_t lrv_rax;
  uint64_t lrv_rdx;
  La_x86_64_xmm lrv_xmm0;
  La_x86_64_xmm lrv_xmm1;
  long double lrv_st0;
  long double lrv_st1;
  La_x86_64_vector lrv_vector0;
  La_x86_64_vector lrv_vector1;

  __int128_t lrv_bnd0;
  __int128_t lrv_bnd1;

} La_x86_64_retval;






extern Elf64_Addr la_x86_64_gnu_pltenter (Elf64_Sym *__sym,
       unsigned int __ndx,
       uintptr_t *__refcook,
       uintptr_t *__defcook,
       La_x86_64_regs *__regs,
       unsigned int *__flags,
       const char *__symname,
       long int *__framesizep);
extern unsigned int la_x86_64_gnu_pltexit (Elf64_Sym *__sym,
        unsigned int __ndx,
        uintptr_t *__refcook,
        uintptr_t *__defcook,
        const La_x86_64_regs *__inregs,
        La_x86_64_retval *__outregs,
        const char *__symname);

extern Elf32_Addr la_x32_gnu_pltenter (Elf32_Sym *__sym,
           unsigned int __ndx,
           uintptr_t *__refcook,
           uintptr_t *__defcook,
           La_x86_64_regs *__regs,
           unsigned int *__flags,
           const char *__symname,
           long int *__framesizep);
extern unsigned int la_x32_gnu_pltexit (Elf32_Sym *__sym,
     unsigned int __ndx,
     uintptr_t *__refcook,
     uintptr_t *__defcook,
     const La_x86_64_regs *__inregs,
     La_x86_64_retval *__outregs,
     const char *__symname);


# 36 "/usr/include/link.h" 2 3 4






struct r_debug
  {
    int r_version;

    struct link_map *r_map;






    Elf64_Addr r_brk;
    enum
      {


 RT_CONSISTENT,
 RT_ADD,
 RT_DELETE
      } r_state;

    Elf64_Addr r_ldbase;
  };


extern struct r_debug _r_debug;
# 76 "/usr/include/link.h" 3 4
extern Elf64_Dyn _DYNAMIC[];







struct link_map
  {



    Elf64_Addr l_addr;

    char *l_name;
    Elf64_Dyn *l_ld;
    struct link_map *l_next, *l_prev;
  };







enum
  {
    LA_ACT_CONSISTENT,
    LA_ACT_ADD,
    LA_ACT_DELETE
  };


enum
  {
    LA_SER_ORIG = 0x01,
    LA_SER_LIBPATH = 0x02,
    LA_SER_RUNPATH = 0x04,
    LA_SER_CONFIG = 0x08,
    LA_SER_DEFAULT = 0x40,
    LA_SER_SECURE = 0x80
  };


enum
  {
    LA_FLG_BINDTO = 0x01,
    LA_FLG_BINDFROM = 0x02
  };


enum
  {
    LA_SYMB_NOPLTENTER = 0x01,
    LA_SYMB_NOPLTEXIT = 0x02,
    LA_SYMB_STRUCTCALL = 0x04,
    LA_SYMB_DLSYM = 0x08,
    LA_SYMB_ALTVALUE = 0x10

  };

struct dl_phdr_info
  {
    Elf64_Addr dlpi_addr;
    const char *dlpi_name;
    const Elf64_Phdr *dlpi_phdr;
    Elf64_Half dlpi_phnum;







    __extension__ unsigned long long int dlpi_adds;

    __extension__ unsigned long long int dlpi_subs;



    size_t dlpi_tls_modid;




    void *dlpi_tls_data;
  };



extern int dl_iterate_phdr (int (*__callback) (struct dl_phdr_info *,
            size_t, void *),
       void *__data);





extern unsigned int la_version (unsigned int __version);
extern void la_activity (uintptr_t *__cookie, unsigned int __flag);
extern char *la_objsearch (const char *__name, uintptr_t *__cookie,
      unsigned int __flag);
extern unsigned int la_objopen (struct link_map *__map, Lmid_t __lmid,
    uintptr_t *__cookie);
extern void la_preinit (uintptr_t *__cookie);
extern uintptr_t la_symbind32 (Elf32_Sym *__sym, unsigned int __ndx,
          uintptr_t *__refcook, uintptr_t *__defcook,
          unsigned int *__flags, const char *__symname);
extern uintptr_t la_symbind64 (Elf64_Sym *__sym, unsigned int __ndx,
          uintptr_t *__refcook, uintptr_t *__defcook,
          unsigned int *__flags, const char *__symname);
extern unsigned int la_objclose (uintptr_t *__cookie);


# 44 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 2


# 1 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h" 1
# 36 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
} max_align_t;
# 37 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 3 4
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
# 47 "/usr/include/stdio.h" 2 3 4





typedef __gnuc_va_list va_list;
# 84 "/usr/include/stdio.h" 3 4
typedef __fpos_t fpos_t;




typedef __fpos64_t fpos64_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 164 "/usr/include/stdio.h" 3 4
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
        const char *__new, unsigned int __flags) __attribute__ ((__nothrow__ , __leaf__));







extern FILE *tmpfile (void) ;
# 183 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 237 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 270 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));





extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));






extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 432 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));




extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 485 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 510 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 521 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 587 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 662 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 750 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 858 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);




# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0010) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0020) != 0);
}
# 865 "/usr/include/stdio.h" 2 3 4
# 873 "/usr/include/stdio.h" 3 4

# 38 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h" 2
# 64 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h"

# 64 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h"
struct backtrace_state;
# 82 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h"
typedef void (*backtrace_error_callback) (void *data, const char *msg,
       int errnum);
# 103 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h"
extern struct backtrace_state *backtrace_create_state (
    const char *filename, int threaded,
    backtrace_error_callback error_callback, void *data);
# 116 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h"
typedef int (*backtrace_full_callback) (void *data, uintptr_t pc,
     const char *filename, int lineno,
     const char *function);
# 130 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h"
extern int backtrace_full (struct backtrace_state *state, int skip,
      backtrace_full_callback callback,
      backtrace_error_callback error_callback,
      void *data);





typedef int (*backtrace_simple_callback) (void *data, uintptr_t pc);
# 149 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h"
extern int backtrace_simple (struct backtrace_state *state, int skip,
        backtrace_simple_callback callback,
        backtrace_error_callback error_callback,
        void *data);






extern void backtrace_print (struct backtrace_state *state, int skip, FILE *);
# 170 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h"
extern int backtrace_pcinfo (struct backtrace_state *state, uintptr_t pc,
        backtrace_full_callback callback,
        backtrace_error_callback error_callback,
        void *data);







typedef void (*backtrace_syminfo_callback) (void *data, uintptr_t pc,
         const char *symname,
         uintptr_t symval,
         uintptr_t symsize);
# 196 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h"
extern int backtrace_syminfo (struct backtrace_state *state, uintptr_t addr,
         backtrace_syminfo_callback callback,
         backtrace_error_callback error_callback,
         void *data);
# 47 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 2
# 1 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/internal.h" 1
# 114 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/internal.h"
typedef int (*fileline) (struct backtrace_state *state, uintptr_t pc,
    backtrace_full_callback callback,
    backtrace_error_callback error_callback, void *data);




typedef void (*syminfo) (struct backtrace_state *state, uintptr_t pc,
    backtrace_syminfo_callback callback,
    backtrace_error_callback error_callback, void *data);



struct backtrace_state
{

  const char *filename;

  int threaded;



  void *lock;

  fileline fileline_fn;

  void *fileline_data;

  syminfo syminfo_fn;

  void *syminfo_data;

  int fileline_initialization_failed;

  int lock_alloc;

  struct backtrace_freelist_struct *freelist;
};







extern int backtrace_open (const char *filename,
      backtrace_error_callback error_callback,
      void *data,
      int *does_not_exist);






struct backtrace_view
{

  const void *data;

  void *base;

  size_t len;
};



extern int backtrace_get_view (struct backtrace_state *state, int descriptor,
          off_t offset, uint64_t size,
          backtrace_error_callback error_callback,
          void *data, struct backtrace_view *view);


extern void backtrace_release_view (struct backtrace_state *state,
        struct backtrace_view *view,
        backtrace_error_callback error_callback,
        void *data);




extern int backtrace_close (int descriptor,
       backtrace_error_callback error_callback,
       void *data);



extern void backtrace_qsort (void *base, size_t count, size_t size,
        int (*compar) (const void *, const void *));




extern void *backtrace_alloc (struct backtrace_state *state, size_t size,
         backtrace_error_callback error_callback,
         void *data) __attribute__ ((__malloc__));




extern void backtrace_free (struct backtrace_state *state, void *mem,
       size_t size,
       backtrace_error_callback error_callback,
       void *data);





struct backtrace_vector
{

  void *base;

  size_t size;

  size_t alc;
};





extern void *backtrace_vector_grow (struct backtrace_state *state, size_t size,
        backtrace_error_callback error_callback,
        void *data,
        struct backtrace_vector *vec);






extern void* backtrace_vector_finish (struct backtrace_state *state,
          struct backtrace_vector *vec,
          backtrace_error_callback error_callback,
          void *data);




extern int backtrace_vector_release (struct backtrace_state *state,
         struct backtrace_vector *vec,
         backtrace_error_callback error_callback,
         void *data);



static inline void
backtrace_vector_free (struct backtrace_state *state,
         struct backtrace_vector *vec,
         backtrace_error_callback error_callback, void *data)
{
  vec->alc += vec->size;
  vec->size = 0;
  backtrace_vector_release (state, vec, error_callback, data);
}
# 282 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/internal.h"
extern int backtrace_initialize (struct backtrace_state *state,
     const char *filename,
     int descriptor,
     backtrace_error_callback error_callback,
     void *data,
     fileline *fileline_fn);



enum dwarf_section
{
  DEBUG_INFO,
  DEBUG_LINE,
  DEBUG_ABBREV,
  DEBUG_RANGES,
  DEBUG_STR,
  DEBUG_ADDR,
  DEBUG_STR_OFFSETS,
  DEBUG_LINE_STR,
  DEBUG_RNGLISTS,

  DEBUG_MAX
};



struct dwarf_sections
{
  const unsigned char *data[DEBUG_MAX];
  size_t size[DEBUG_MAX];
};



struct dwarf_data;



extern int backtrace_dwarf_add (struct backtrace_state *state,
    uintptr_t base_address,
    const struct dwarf_sections *dwarf_sections,
    int is_bigendian,
    struct dwarf_data *fileline_altlink,
    backtrace_error_callback error_callback,
    void *data, fileline *fileline_fn,
    struct dwarf_data **fileline_entry);



extern int backtrace_uncompress_zdebug (struct backtrace_state *,
     const unsigned char *compressed,
     size_t compressed_size,
     backtrace_error_callback, void *data,
     unsigned char **uncompressed,
     size_t *uncompressed_size);
# 48 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 2
# 185 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
typedef uint16_t b_elf_half;
typedef uint32_t b_elf_word;
typedef int32_t b_elf_sword;
# 198 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
typedef uint64_t b_elf_addr;
typedef uint64_t b_elf_off;
typedef uint64_t b_elf_xword;
typedef int64_t b_elf_sxword;

typedef uint64_t b_elf_wxword;







typedef struct {
  unsigned char e_ident[16];
  b_elf_half e_type;
  b_elf_half e_machine;
  b_elf_word e_version;
  b_elf_addr e_entry;
  b_elf_off e_phoff;
  b_elf_off e_shoff;
  b_elf_word e_flags;
  b_elf_half e_ehsize;
  b_elf_half e_phentsize;
  b_elf_half e_phnum;
  b_elf_half e_shentsize;
  b_elf_half e_shnum;
  b_elf_half e_shstrndx;
} b_elf_ehdr;
# 254 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
typedef struct {
  b_elf_word sh_name;
  b_elf_word sh_type;
  b_elf_wxword sh_flags;
  b_elf_addr sh_addr;
  b_elf_off sh_offset;
  b_elf_wxword sh_size;
  b_elf_word sh_link;
  b_elf_word sh_info;
  b_elf_wxword sh_addralign;
  b_elf_wxword sh_entsize;
} b_elf_shdr;
# 292 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
typedef struct
{
  b_elf_word st_name;
  unsigned char st_info;
  unsigned char st_other;
  b_elf_half st_shndx;
  b_elf_addr st_value;
  b_elf_xword st_size;
} b_elf_sym;






typedef struct
{
  uint32_t namesz;
  uint32_t descsz;
  uint32_t type;
  char name[1];
} b_elf_note;
# 328 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
typedef struct
{
  b_elf_word ch_type;
  b_elf_word ch_reserved;
  b_elf_xword ch_size;
  b_elf_xword ch_addralign;
} b_elf_chdr;







static const char * const dwarf_section_names[DEBUG_MAX] =
{
  ".debug_info",
  ".debug_line",
  ".debug_abbrev",
  ".debug_ranges",
  ".debug_str",
  ".debug_addr",
  ".debug_str_offsets",
  ".debug_line_str",
  ".debug_rnglists"
};



struct debug_section_info
{

  off_t offset;

  size_t size;

  const unsigned char *data;

  int compressed;
};



struct elf_symbol
{

  const char *name;

  uintptr_t address;

  size_t size;
};



struct elf_syminfo_data
{

  struct elf_syminfo_data *next;

  struct elf_symbol *symbols;

  size_t count;
};



struct elf_ppc64_opd_data
{

  b_elf_addr addr;

  const char *data;

  size_t size;

  struct backtrace_view view;
};




static uint32_t
elf_crc32 (uint32_t crc, const unsigned char *buf, size_t len)
{
  static const uint32_t crc32_table[256] =
    {
      0x00000000, 0x77073096, 0xee0e612c, 0x990951ba, 0x076dc419,
      0x706af48f, 0xe963a535, 0x9e6495a3, 0x0edb8832, 0x79dcb8a4,
      0xe0d5e91e, 0x97d2d988, 0x09b64c2b, 0x7eb17cbd, 0xe7b82d07,
      0x90bf1d91, 0x1db71064, 0x6ab020f2, 0xf3b97148, 0x84be41de,
      0x1adad47d, 0x6ddde4eb, 0xf4d4b551, 0x83d385c7, 0x136c9856,
      0x646ba8c0, 0xfd62f97a, 0x8a65c9ec, 0x14015c4f, 0x63066cd9,
      0xfa0f3d63, 0x8d080df5, 0x3b6e20c8, 0x4c69105e, 0xd56041e4,
      0xa2677172, 0x3c03e4d1, 0x4b04d447, 0xd20d85fd, 0xa50ab56b,
      0x35b5a8fa, 0x42b2986c, 0xdbbbc9d6, 0xacbcf940, 0x32d86ce3,
      0x45df5c75, 0xdcd60dcf, 0xabd13d59, 0x26d930ac, 0x51de003a,
      0xc8d75180, 0xbfd06116, 0x21b4f4b5, 0x56b3c423, 0xcfba9599,
      0xb8bda50f, 0x2802b89e, 0x5f058808, 0xc60cd9b2, 0xb10be924,
      0x2f6f7c87, 0x58684c11, 0xc1611dab, 0xb6662d3d, 0x76dc4190,
      0x01db7106, 0x98d220bc, 0xefd5102a, 0x71b18589, 0x06b6b51f,
      0x9fbfe4a5, 0xe8b8d433, 0x7807c9a2, 0x0f00f934, 0x9609a88e,
      0xe10e9818, 0x7f6a0dbb, 0x086d3d2d, 0x91646c97, 0xe6635c01,
      0x6b6b51f4, 0x1c6c6162, 0x856530d8, 0xf262004e, 0x6c0695ed,
      0x1b01a57b, 0x8208f4c1, 0xf50fc457, 0x65b0d9c6, 0x12b7e950,
      0x8bbeb8ea, 0xfcb9887c, 0x62dd1ddf, 0x15da2d49, 0x8cd37cf3,
      0xfbd44c65, 0x4db26158, 0x3ab551ce, 0xa3bc0074, 0xd4bb30e2,
      0x4adfa541, 0x3dd895d7, 0xa4d1c46d, 0xd3d6f4fb, 0x4369e96a,
      0x346ed9fc, 0xad678846, 0xda60b8d0, 0x44042d73, 0x33031de5,
      0xaa0a4c5f, 0xdd0d7cc9, 0x5005713c, 0x270241aa, 0xbe0b1010,
      0xc90c2086, 0x5768b525, 0x206f85b3, 0xb966d409, 0xce61e49f,
      0x5edef90e, 0x29d9c998, 0xb0d09822, 0xc7d7a8b4, 0x59b33d17,
      0x2eb40d81, 0xb7bd5c3b, 0xc0ba6cad, 0xedb88320, 0x9abfb3b6,
      0x03b6e20c, 0x74b1d29a, 0xead54739, 0x9dd277af, 0x04db2615,
      0x73dc1683, 0xe3630b12, 0x94643b84, 0x0d6d6a3e, 0x7a6a5aa8,
      0xe40ecf0b, 0x9309ff9d, 0x0a00ae27, 0x7d079eb1, 0xf00f9344,
      0x8708a3d2, 0x1e01f268, 0x6906c2fe, 0xf762575d, 0x806567cb,
      0x196c3671, 0x6e6b06e7, 0xfed41b76, 0x89d32be0, 0x10da7a5a,
      0x67dd4acc, 0xf9b9df6f, 0x8ebeeff9, 0x17b7be43, 0x60b08ed5,
      0xd6d6a3e8, 0xa1d1937e, 0x38d8c2c4, 0x4fdff252, 0xd1bb67f1,
      0xa6bc5767, 0x3fb506dd, 0x48b2364b, 0xd80d2bda, 0xaf0a1b4c,
      0x36034af6, 0x41047a60, 0xdf60efc3, 0xa867df55, 0x316e8eef,
      0x4669be79, 0xcb61b38c, 0xbc66831a, 0x256fd2a0, 0x5268e236,
      0xcc0c7795, 0xbb0b4703, 0x220216b9, 0x5505262f, 0xc5ba3bbe,
      0xb2bd0b28, 0x2bb45a92, 0x5cb36a04, 0xc2d7ffa7, 0xb5d0cf31,
      0x2cd99e8b, 0x5bdeae1d, 0x9b64c2b0, 0xec63f226, 0x756aa39c,
      0x026d930a, 0x9c0906a9, 0xeb0e363f, 0x72076785, 0x05005713,
      0x95bf4a82, 0xe2b87a14, 0x7bb12bae, 0x0cb61b38, 0x92d28e9b,
      0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21, 0x86d3d2d4, 0xf1d4e242,
      0x68ddb3f8, 0x1fda836e, 0x81be16cd, 0xf6b9265b, 0x6fb077e1,
      0x18b74777, 0x88085ae6, 0xff0f6a70, 0x66063bca, 0x11010b5c,
      0x8f659eff, 0xf862ae69, 0x616bffd3, 0x166ccf45, 0xa00ae278,
      0xd70dd2ee, 0x4e048354, 0x3903b3c2, 0xa7672661, 0xd06016f7,
      0x4969474d, 0x3e6e77db, 0xaed16a4a, 0xd9d65adc, 0x40df0b66,
      0x37d83bf0, 0xa9bcae53, 0xdebb9ec5, 0x47b2cf7f, 0x30b5ffe9,
      0xbdbdf21c, 0xcabac28a, 0x53b39330, 0x24b4a3a6, 0xbad03605,
      0xcdd70693, 0x54de5729, 0x23d967bf, 0xb3667a2e, 0xc4614ab8,
      0x5d681b02, 0x2a6f2b94, 0xb40bbe37, 0xc30c8ea1, 0x5a05df1b,
      0x2d02ef8d
    };
  const unsigned char *end;

  crc = ~crc;
  for (end = buf + len; buf < end; ++ buf)
    crc = crc32_table[(crc ^ *buf) & 0xff] ^ (crc >> 8);
  return ~crc;
}



static uint32_t
elf_crc32_file (struct backtrace_state *state, int descriptor,
  backtrace_error_callback error_callback, void *data)
{
  struct stat st;
  struct backtrace_view file_view;
  uint32_t ret;

  if (fstat (descriptor, &st) < 0)
    {
      error_callback (data, "fstat", 
# 488 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                    (*__errno_location ())
# 488 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                         );
      return 0;
    }

  if (!backtrace_get_view (state, descriptor, 0, st.st_size, error_callback,
      data, &file_view))
    return 0;

  ret = elf_crc32 (0, (const unsigned char *) file_view.data, st.st_size);

  backtrace_release_view (state, &file_view, error_callback, data);

  return ret;
}



static int
elf_nodebug (struct backtrace_state *state __attribute__ ((__unused__)),
      uintptr_t pc __attribute__ ((__unused__)),
      backtrace_full_callback callback __attribute__ ((__unused__)),
      backtrace_error_callback error_callback, void *data)
{
  error_callback (data, "no debug info in ELF executable", -1);
  return 0;
}




static void
elf_nosyms (struct backtrace_state *state __attribute__ ((__unused__)),
     uintptr_t addr __attribute__ ((__unused__)),
     backtrace_syminfo_callback callback __attribute__ ((__unused__)),
     backtrace_error_callback error_callback, void *data)
{
  error_callback (data, "no symbol table in ELF executable", -1);
}



static int
elf_symbol_compare (const void *v1, const void *v2)
{
  const struct elf_symbol *e1 = (const struct elf_symbol *) v1;
  const struct elf_symbol *e2 = (const struct elf_symbol *) v2;

  if (e1->address < e2->address)
    return -1;
  else if (e1->address > e2->address)
    return 1;
  else
    return 0;
}





static int
elf_symbol_search (const void *vkey, const void *ventry)
{
  const uintptr_t *key = (const uintptr_t *) vkey;
  const struct elf_symbol *entry = (const struct elf_symbol *) ventry;
  uintptr_t addr;

  addr = *key;
  if (addr < entry->address)
    return -1;
  else if (addr >= entry->address + entry->size)
    return 1;
  else
    return 0;
}



static int
elf_initialize_syminfo (struct backtrace_state *state,
   uintptr_t base_address,
   const unsigned char *symtab_data, size_t symtab_size,
   const unsigned char *strtab, size_t strtab_size,
   backtrace_error_callback error_callback,
   void *data, struct elf_syminfo_data *sdata,
   struct elf_ppc64_opd_data *opd)
{
  size_t sym_count;
  const b_elf_sym *sym;
  size_t elf_symbol_count;
  size_t elf_symbol_size;
  struct elf_symbol *elf_symbols;
  size_t i;
  unsigned int j;

  sym_count = symtab_size / sizeof (b_elf_sym);


  sym = (const b_elf_sym *) symtab_data;
  elf_symbol_count = 0;
  for (i = 0; i < sym_count; ++i, ++sym)
    {
      int info;

      info = sym->st_info & 0xf;
      if ((info == 2 || info == 1)
   && sym->st_shndx != 0x0000)
 ++elf_symbol_count;
    }

  elf_symbol_size = elf_symbol_count * sizeof (struct elf_symbol);
  elf_symbols = ((struct elf_symbol *)
   backtrace_alloc (state, elf_symbol_size, error_callback,
      data));
  if (elf_symbols == 
# 601 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                    ((void *)0)
# 601 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                        )
    return 0;

  sym = (const b_elf_sym *) symtab_data;
  j = 0;
  for (i = 0; i < sym_count; ++i, ++sym)
    {
      int info;

      info = sym->st_info & 0xf;
      if (info != 2 && info != 1)
 continue;
      if (sym->st_shndx == 0x0000)
 continue;
      if (sym->st_name >= strtab_size)
 {
   error_callback (data, "symbol string index out of range", 0);
   backtrace_free (state, elf_symbols, elf_symbol_size, error_callback,
     data);
   return 0;
 }
      elf_symbols[j].name = (const char *) strtab + sym->st_name;



      if (opd
   && sym->st_value >= opd->addr
   && sym->st_value < opd->addr + opd->size)
 elf_symbols[j].address
   = *(const b_elf_addr *) (opd->data + (sym->st_value - opd->addr));
      else
 elf_symbols[j].address = sym->st_value;
      elf_symbols[j].address += base_address;
      elf_symbols[j].size = sym->st_size;
      ++j;
    }

  backtrace_qsort (elf_symbols, elf_symbol_count, sizeof (struct elf_symbol),
     elf_symbol_compare);

  sdata->next = 
# 641 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
               ((void *)0)
# 641 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                   ;
  sdata->symbols = elf_symbols;
  sdata->count = elf_symbol_count;

  return 1;
}



static void
elf_add_syminfo_data (struct backtrace_state *state,
        struct elf_syminfo_data *edata)
{
  if (!state->threaded)
    {
      struct elf_syminfo_data **pp;

      for (pp = (struct elf_syminfo_data **) (void *) &state->syminfo_data;
    *pp != 
# 659 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
          ((void *)0)
# 659 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
              ;
    pp = &(*pp)->next)
 ;
      *pp = edata;
    }
  else
    {
      while (1)
 {
   struct elf_syminfo_data **pp;

   pp = (struct elf_syminfo_data **) (void *) &state->syminfo_data;

   while (1)
     {
       struct elf_syminfo_data *p;

       p = __atomic_load_n ((pp), 2);

       if (p == 
# 678 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
               ((void *)0)
# 678 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                   )
  break;

       pp = &p->next;
     }

   if (__sync_bool_compare_and_swap (pp, 
# 684 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                        ((void *)0)
# 684 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                            , edata))
     break;
 }
    }
}



static void
elf_syminfo (struct backtrace_state *state, uintptr_t addr,
      backtrace_syminfo_callback callback,
      backtrace_error_callback error_callback __attribute__ ((__unused__)),
      void *data)
{
  struct elf_syminfo_data *edata;
  struct elf_symbol *sym = 
# 699 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                          ((void *)0)
# 699 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                              ;

  if (!state->threaded)
    {
      for (edata = (struct elf_syminfo_data *) state->syminfo_data;
    edata != 
# 704 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
            ((void *)0)
# 704 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                ;
    edata = edata->next)
 {
   sym = ((struct elf_symbol *)
   bsearch (&addr, edata->symbols, edata->count,
     sizeof (struct elf_symbol), elf_symbol_search));
   if (sym != 
# 710 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
             ((void *)0)
# 710 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                 )
     break;
 }
    }
  else
    {
      struct elf_syminfo_data **pp;

      pp = (struct elf_syminfo_data **) (void *) &state->syminfo_data;
      while (1)
 {
   edata = __atomic_load_n ((pp), 2);
   if (edata == 
# 722 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
               ((void *)0)
# 722 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                   )
     break;

   sym = ((struct elf_symbol *)
   bsearch (&addr, edata->symbols, edata->count,
     sizeof (struct elf_symbol), elf_symbol_search));
   if (sym != 
# 728 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
             ((void *)0)
# 728 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                 )
     break;

   pp = &edata->next;
 }
    }

  if (sym == 
# 735 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
            ((void *)0)
# 735 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                )
    callback (data, addr, 
# 736 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                         ((void *)0)
# 736 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                             , 0, 0);
  else
    callback (data, addr, sym->name, sym->address, sym->size);
}



static int
elf_is_symlink (const char *filename)
{
  struct stat st;

  if (lstat (filename, &st) < 0)
    return 0;
  return 
# 750 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
        ((((
# 750 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
        st.st_mode
# 750 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
        )) & 0170000) == (0120000))
# 750 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                            ;
}





static char *
elf_readlink (struct backtrace_state *state, const char *filename,
       backtrace_error_callback error_callback, void *data,
       size_t *plen)
{
  size_t len;
  char *buf;

  len = 128;
  while (1)
    {
      ssize_t rl;

      buf = backtrace_alloc (state, len, error_callback, data);
      if (buf == 
# 771 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                ((void *)0)
# 771 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                    )
 return 
# 772 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
       ((void *)0)
# 772 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
           ;
      rl = readlink (filename, buf, len);
      if (rl < 0)
 {
   backtrace_free (state, buf, len, error_callback, data);
   return 
# 777 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
         ((void *)0)
# 777 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
             ;
 }
      if ((size_t) rl < len - 1)
 {
   buf[rl] = '\0';
   *plen = len;
   return buf;
 }
      backtrace_free (state, buf, len, error_callback, data);
      len *= 2;
    }
}
# 798 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
static int
elf_open_debugfile_by_buildid (struct backtrace_state *state,
          const char *buildid_data, size_t buildid_size,
          backtrace_error_callback error_callback,
          void *data)
{
  const char * const prefix = "/usr/lib/debug/.build-id/";
  const size_t prefix_len = strlen (prefix);
  const char * const suffix = ".debug";
  const size_t suffix_len = strlen (suffix);
  size_t len;
  char *bd_filename;
  char *t;
  size_t i;
  int ret;
  int does_not_exist;

  len = prefix_len + buildid_size * 2 + suffix_len + 2;
  bd_filename = backtrace_alloc (state, len, error_callback, data);
  if (bd_filename == 
# 817 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                    ((void *)0)
# 817 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                        )
    return -1;

  t = bd_filename;
  memcpy (t, prefix, prefix_len);
  t += prefix_len;
  for (i = 0; i < buildid_size; i++)
    {
      unsigned char b;
      unsigned char nib;

      b = (unsigned char) buildid_data[i];
      nib = (b & 0xf0) >> 4;
      *t++ = nib < 10 ? '0' + nib : 'a' + nib - 10;
      nib = b & 0x0f;
      *t++ = nib < 10 ? '0' + nib : 'a' + nib - 10;
      if (i == 0)
 *t++ = '/';
    }
  memcpy (t, suffix, suffix_len);
  t[suffix_len] = '\0';

  ret = backtrace_open (bd_filename, error_callback, data, &does_not_exist);

  backtrace_free (state, bd_filename, len, error_callback, data);





  return ret;
}





static int
elf_try_debugfile (struct backtrace_state *state, const char *prefix,
     size_t prefix_len, const char *prefix2, size_t prefix2_len,
     const char *debuglink_name,
     backtrace_error_callback error_callback, void *data)
{
  size_t debuglink_len;
  size_t try_len;
  char *try;
  int does_not_exist;
  int ret;

  debuglink_len = strlen (debuglink_name);
  try_len = prefix_len + prefix2_len + debuglink_len + 1;
  try = backtrace_alloc (state, try_len, error_callback, data);
  if (try == 
# 869 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
            ((void *)0)
# 869 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                )
    return -1;

  memcpy (try, prefix, prefix_len);
  memcpy (try + prefix_len, prefix2, prefix2_len);
  memcpy (try + prefix_len + prefix2_len, debuglink_name, debuglink_len);
  try[prefix_len + prefix2_len + debuglink_len] = '\0';

  ret = backtrace_open (try, error_callback, data, &does_not_exist);

  backtrace_free (state, try, try_len, error_callback, data);

  return ret;
}




static int
elf_find_debugfile_by_debuglink (struct backtrace_state *state,
     const char *filename,
     const char *debuglink_name,
     backtrace_error_callback error_callback,
     void *data)
{
  int ret;
  char *alc;
  size_t alc_len;
  const char *slash;
  int ddescriptor;
  const char *prefix;
  size_t prefix_len;




  ret = -1;
  alc = 
# 906 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
       ((void *)0)
# 906 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
           ;
  alc_len = 0;
  while (elf_is_symlink (filename))
    {
      char *new_buf;
      size_t new_len;

      new_buf = elf_readlink (state, filename, error_callback, data, &new_len);
      if (new_buf == 
# 914 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                    ((void *)0)
# 914 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                        )
 break;

      if (new_buf[0] == '/')
 filename = new_buf;
      else
 {
   slash = strrchr (filename, '/');
   if (slash == 
# 922 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
               ((void *)0)
# 922 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                   )
     filename = new_buf;
   else
     {
       size_t clen;
       char *c;

       slash++;
       clen = slash - filename + strlen (new_buf) + 1;
       c = backtrace_alloc (state, clen, error_callback, data);
       if (c == 
# 932 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
               ((void *)0)
# 932 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                   )
  goto done;

       memcpy (c, filename, slash - filename);
       memcpy (c + (slash - filename), new_buf, strlen (new_buf));
       c[slash - filename + strlen (new_buf)] = '\0';
       backtrace_free (state, new_buf, new_len, error_callback, data);
       filename = c;
       new_buf = c;
       new_len = clen;
     }
 }

      if (alc != 
# 945 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                ((void *)0)
# 945 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                    )
 backtrace_free (state, alc, alc_len, error_callback, data);
      alc = new_buf;
      alc_len = new_len;
    }



  slash = strrchr (filename, '/');
  if (slash == 
# 954 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
              ((void *)0)
# 954 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                  )
    {
      prefix = "";
      prefix_len = 0;
    }
  else
    {
      slash++;
      prefix = filename;
      prefix_len = slash - filename;
    }

  ddescriptor = elf_try_debugfile (state, prefix, prefix_len, "", 0,
       debuglink_name, error_callback, data);
  if (ddescriptor >= 0)
    {
      ret = ddescriptor;
      goto done;
    }



  ddescriptor = elf_try_debugfile (state, prefix, prefix_len, ".debug/",
       strlen (".debug/"), debuglink_name,
       error_callback, data);
  if (ddescriptor >= 0)
    {
      ret = ddescriptor;
      goto done;
    }



  ddescriptor = elf_try_debugfile (state, "/usr/lib/debug/",
       strlen ("/usr/lib/debug/"), prefix,
       prefix_len, debuglink_name,
       error_callback, data);
  if (ddescriptor >= 0)
    ret = ddescriptor;

 done:
  if (alc != 
# 995 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
            ((void *)0) 
# 995 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                 && alc_len > 0)
    backtrace_free (state, alc, alc_len, error_callback, data);
  return ret;
}




static int
elf_open_debugfile_by_debuglink (struct backtrace_state *state,
     const char *filename,
     const char *debuglink_name,
     uint32_t debuglink_crc,
     backtrace_error_callback error_callback,
     void *data)
{
  int ddescriptor;

  ddescriptor = elf_find_debugfile_by_debuglink (state, filename,
       debuglink_name,
       error_callback, data);
  if (ddescriptor < 0)
    return -1;

  if (debuglink_crc != 0)
    {
      uint32_t got_crc;

      got_crc = elf_crc32_file (state, ddescriptor, error_callback, data);
      if (got_crc != debuglink_crc)
 {
   backtrace_close (ddescriptor, error_callback, data);
   return -1;
 }
    }

  return ddescriptor;
}




static void
elf_zlib_failed(void)
{
}







static int
elf_zlib_fetch (const unsigned char **ppin, const unsigned char *pinend,
  uint64_t *pval, unsigned int *pbits)
{
  unsigned int bits;
  const unsigned char *pin;
  uint64_t val;
  uint32_t next;

  bits = *pbits;
  if (bits >= 15)
    return 1;
  pin = *ppin;
  val = *pval;

  if (__builtin_expect(!!(pinend - pin < 4), 0))
    {
      elf_zlib_failed ();
      return 0;
    }






  next = *(const uint32_t *)pin;
# 1083 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
  val |= (uint64_t)next << bits;
  bits += 32;
  pin += 4;


  __builtin_prefetch (pin, 0, 0);

  *ppin = pin;
  *pval = val;
  *pbits = bits;
  return 1;
}
# 1170 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
static int
elf_zlib_inflate_table (unsigned char *codes, size_t codes_len,
   uint16_t *zdebug_table, uint16_t *table)
{
  uint16_t count[16];
  uint16_t start[16];
  uint16_t prev[16];
  uint16_t firstcode[7];
  uint16_t *next;
  size_t i;
  size_t j;
  unsigned int code;
  size_t next_secondary;




  next = (uint16_t *) (((unsigned char *) zdebug_table)
         + (2 * (1024) * sizeof (uint16_t)));

  memset (&count[0], 0, 16 * sizeof (uint16_t));
  for (i = 0; i < codes_len; ++i)
    {
      if (__builtin_expect(!!(codes[i] >= 16), 0))
 {
   elf_zlib_failed ();
   return 0;
 }

      if (count[codes[i]] == 0)
 {
   start[codes[i]] = i;
   prev[codes[i]] = i;
 }
      else
 {
   next[prev[codes[i]]] = i;
   prev[codes[i]] = i;
 }

      ++count[codes[i]];
    }




  memset (table, 0, (1024) * sizeof (uint16_t));



  code = 0;
  for (j = 1; j <= 8; ++j)
    {
      unsigned int jcnt;
      unsigned int val;

      jcnt = count[j];
      if (jcnt == 0)
 continue;

      if (__builtin_expect(!!(jcnt > (1U << j)), 0))
 {
   elf_zlib_failed ();
   return 0;
 }





      val = start[j];
      for (i = 0; i < jcnt; ++i)
 {
   uint16_t tval;
   size_t ind;
   unsigned int incr;




   if (__builtin_expect(!!((val & ~0x01ff) != 0), 0))
     {
       elf_zlib_failed ();
       return 0;
     }

   tval = val | ((j - 1) << 9);







   for (ind = code; ind < 0x100; ind += 1 << j)
     {
       if (__builtin_expect(!!(table[ind] != 0), 0))
  {
    elf_zlib_failed ();
    return 0;
  }
       table[ind] = tval;
     }


   if (i + 1 < jcnt)
     val = next[val];
# 1300 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
   incr = 1U << (j - 1);
   while ((code & incr) != 0)
     incr >>= 1;
   if (incr == 0)
     code = 0;
   else
     {
       code &= incr - 1;
       code += incr;
     }
 }
    }






  for (j = 9; j < 16; j++)
    {
      unsigned int jcnt;
      unsigned int k;

      jcnt = count[j];
      if (jcnt == 0)
 continue;





      firstcode[j - 9] = code;


      for (k = 0; k < j; ++k)
 {
   if ((jcnt & (1U << k)) != 0)
     {
       unsigned int m;
       unsigned int bit;

       bit = 1U << (j - k - 1);
       for (m = 0; m < j - k; ++m, bit >>= 1)
  {
    if ((code & bit) == 0)
      {
        code += bit;
        break;
      }
    code &= ~bit;
  }
       jcnt &= ~(1U << k);
     }
 }
      if (__builtin_expect(!!(jcnt != 0), 0))
 {
   elf_zlib_failed ();
   return 0;
 }
    }
# 1369 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
  next_secondary = 0;
  for (j = 15; j >= 9; j--)
    {
      unsigned int jcnt;
      unsigned int val;
      size_t primary;
      size_t secondary;
      size_t secondary_bits;

      jcnt = count[j];
      if (jcnt == 0)
 continue;

      val = start[j];
      code = firstcode[j - 9];
      primary = 0x100;
      secondary = 0;
      secondary_bits = 0;
      for (i = 0; i < jcnt; ++i)
 {
   uint16_t tval;
   size_t ind;
   unsigned int incr;

   if ((code & 0xff) != primary)
     {
       uint16_t tprimary;



       primary = code & 0xff;

       tprimary = table[primary];
       if (tprimary == 0)
  {


    if (__builtin_expect(!!((next_secondary & 0x01ff) != next_secondary), 0)
                      )
      {
        elf_zlib_failed ();
        return 0;
      }

    secondary = next_secondary;
    secondary_bits = j - 8;
    next_secondary += 1 << secondary_bits;
    table[primary] = (secondary
        + ((j - 8) << 9)
        + (1U << 12));
  }
       else
  {


    if (__builtin_expect(!!((tprimary & (1U << 12)) == 0), 0)
         )
      {
        elf_zlib_failed ();
        return 0;
      }
    secondary = tprimary & 0x01ff;
    secondary_bits = ((tprimary >> 9)
        & 0x7);
    if (__builtin_expect(!!(secondary_bits < j - 8), 0))
      {
        elf_zlib_failed ();
        return 0;
      }
  }
     }



   tval = val | ((j - 8) << 9);

   for (ind = code >> 8;
        ind < (1U << secondary_bits);
        ind += 1U << (j - 8))
     {
       if (__builtin_expect(!!(table[secondary + 0x100 + ind] != 0), 0))
  {
    elf_zlib_failed ();
    return 0;
  }
       table[secondary + 0x100 + ind] = tval;
     }

   if (i + 1 < jcnt)
     val = next[val];

   incr = 1U << (j - 1);
   while ((code & incr) != 0)
     incr >>= 1;
   if (incr == 0)
     code = 0;
   else
     {
       code &= incr - 1;
       code += incr;
     }
 }
    }





  return 1;
}
# 1553 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
static const uint16_t elf_zlib_default_table[0x170] =
{
  0xd00, 0xe50, 0xe10, 0xf18, 0xd10, 0xe70, 0xe30, 0x1230,
  0xd08, 0xe60, 0xe20, 0x1210, 0xe00, 0xe80, 0xe40, 0x1250,
  0xd04, 0xe58, 0xe18, 0x1200, 0xd14, 0xe78, 0xe38, 0x1240,
  0xd0c, 0xe68, 0xe28, 0x1220, 0xe08, 0xe88, 0xe48, 0x1260,
  0xd02, 0xe54, 0xe14, 0xf1c, 0xd12, 0xe74, 0xe34, 0x1238,
  0xd0a, 0xe64, 0xe24, 0x1218, 0xe04, 0xe84, 0xe44, 0x1258,
  0xd06, 0xe5c, 0xe1c, 0x1208, 0xd16, 0xe7c, 0xe3c, 0x1248,
  0xd0e, 0xe6c, 0xe2c, 0x1228, 0xe0c, 0xe8c, 0xe4c, 0x1268,
  0xd01, 0xe52, 0xe12, 0xf1a, 0xd11, 0xe72, 0xe32, 0x1234,
  0xd09, 0xe62, 0xe22, 0x1214, 0xe02, 0xe82, 0xe42, 0x1254,
  0xd05, 0xe5a, 0xe1a, 0x1204, 0xd15, 0xe7a, 0xe3a, 0x1244,
  0xd0d, 0xe6a, 0xe2a, 0x1224, 0xe0a, 0xe8a, 0xe4a, 0x1264,
  0xd03, 0xe56, 0xe16, 0xf1e, 0xd13, 0xe76, 0xe36, 0x123c,
  0xd0b, 0xe66, 0xe26, 0x121c, 0xe06, 0xe86, 0xe46, 0x125c,
  0xd07, 0xe5e, 0xe1e, 0x120c, 0xd17, 0xe7e, 0xe3e, 0x124c,
  0xd0f, 0xe6e, 0xe2e, 0x122c, 0xe0e, 0xe8e, 0xe4e, 0x126c,
  0xd00, 0xe51, 0xe11, 0xf19, 0xd10, 0xe71, 0xe31, 0x1232,
  0xd08, 0xe61, 0xe21, 0x1212, 0xe01, 0xe81, 0xe41, 0x1252,
  0xd04, 0xe59, 0xe19, 0x1202, 0xd14, 0xe79, 0xe39, 0x1242,
  0xd0c, 0xe69, 0xe29, 0x1222, 0xe09, 0xe89, 0xe49, 0x1262,
  0xd02, 0xe55, 0xe15, 0xf1d, 0xd12, 0xe75, 0xe35, 0x123a,
  0xd0a, 0xe65, 0xe25, 0x121a, 0xe05, 0xe85, 0xe45, 0x125a,
  0xd06, 0xe5d, 0xe1d, 0x120a, 0xd16, 0xe7d, 0xe3d, 0x124a,
  0xd0e, 0xe6d, 0xe2d, 0x122a, 0xe0d, 0xe8d, 0xe4d, 0x126a,
  0xd01, 0xe53, 0xe13, 0xf1b, 0xd11, 0xe73, 0xe33, 0x1236,
  0xd09, 0xe63, 0xe23, 0x1216, 0xe03, 0xe83, 0xe43, 0x1256,
  0xd05, 0xe5b, 0xe1b, 0x1206, 0xd15, 0xe7b, 0xe3b, 0x1246,
  0xd0d, 0xe6b, 0xe2b, 0x1226, 0xe0b, 0xe8b, 0xe4b, 0x1266,
  0xd03, 0xe57, 0xe17, 0xf1f, 0xd13, 0xe77, 0xe37, 0x123e,
  0xd0b, 0xe67, 0xe27, 0x121e, 0xe07, 0xe87, 0xe47, 0x125e,
  0xd07, 0xe5f, 0xe1f, 0x120e, 0xd17, 0xe7f, 0xe3f, 0x124e,
  0xd0f, 0xe6f, 0xe2f, 0x122e, 0xe0f, 0xe8f, 0xe4f, 0x126e,
  0x290, 0x291, 0x292, 0x293, 0x294, 0x295, 0x296, 0x297,
  0x298, 0x299, 0x29a, 0x29b, 0x29c, 0x29d, 0x29e, 0x29f,
  0x2a0, 0x2a1, 0x2a2, 0x2a3, 0x2a4, 0x2a5, 0x2a6, 0x2a7,
  0x2a8, 0x2a9, 0x2aa, 0x2ab, 0x2ac, 0x2ad, 0x2ae, 0x2af,
  0x2b0, 0x2b1, 0x2b2, 0x2b3, 0x2b4, 0x2b5, 0x2b6, 0x2b7,
  0x2b8, 0x2b9, 0x2ba, 0x2bb, 0x2bc, 0x2bd, 0x2be, 0x2bf,
  0x2c0, 0x2c1, 0x2c2, 0x2c3, 0x2c4, 0x2c5, 0x2c6, 0x2c7,
  0x2c8, 0x2c9, 0x2ca, 0x2cb, 0x2cc, 0x2cd, 0x2ce, 0x2cf,
  0x2d0, 0x2d1, 0x2d2, 0x2d3, 0x2d4, 0x2d5, 0x2d6, 0x2d7,
  0x2d8, 0x2d9, 0x2da, 0x2db, 0x2dc, 0x2dd, 0x2de, 0x2df,
  0x2e0, 0x2e1, 0x2e2, 0x2e3, 0x2e4, 0x2e5, 0x2e6, 0x2e7,
  0x2e8, 0x2e9, 0x2ea, 0x2eb, 0x2ec, 0x2ed, 0x2ee, 0x2ef,
  0x2f0, 0x2f1, 0x2f2, 0x2f3, 0x2f4, 0x2f5, 0x2f6, 0x2f7,
  0x2f8, 0x2f9, 0x2fa, 0x2fb, 0x2fc, 0x2fd, 0x2fe, 0x2ff,
};

static const uint16_t elf_zlib_default_dist_table[0x100] =
{
  0x800, 0x810, 0x808, 0x818, 0x804, 0x814, 0x80c, 0x81c,
  0x802, 0x812, 0x80a, 0x81a, 0x806, 0x816, 0x80e, 0x81e,
  0x801, 0x811, 0x809, 0x819, 0x805, 0x815, 0x80d, 0x81d,
  0x803, 0x813, 0x80b, 0x81b, 0x807, 0x817, 0x80f, 0x81f,
  0x800, 0x810, 0x808, 0x818, 0x804, 0x814, 0x80c, 0x81c,
  0x802, 0x812, 0x80a, 0x81a, 0x806, 0x816, 0x80e, 0x81e,
  0x801, 0x811, 0x809, 0x819, 0x805, 0x815, 0x80d, 0x81d,
  0x803, 0x813, 0x80b, 0x81b, 0x807, 0x817, 0x80f, 0x81f,
  0x800, 0x810, 0x808, 0x818, 0x804, 0x814, 0x80c, 0x81c,
  0x802, 0x812, 0x80a, 0x81a, 0x806, 0x816, 0x80e, 0x81e,
  0x801, 0x811, 0x809, 0x819, 0x805, 0x815, 0x80d, 0x81d,
  0x803, 0x813, 0x80b, 0x81b, 0x807, 0x817, 0x80f, 0x81f,
  0x800, 0x810, 0x808, 0x818, 0x804, 0x814, 0x80c, 0x81c,
  0x802, 0x812, 0x80a, 0x81a, 0x806, 0x816, 0x80e, 0x81e,
  0x801, 0x811, 0x809, 0x819, 0x805, 0x815, 0x80d, 0x81d,
  0x803, 0x813, 0x80b, 0x81b, 0x807, 0x817, 0x80f, 0x81f,
  0x800, 0x810, 0x808, 0x818, 0x804, 0x814, 0x80c, 0x81c,
  0x802, 0x812, 0x80a, 0x81a, 0x806, 0x816, 0x80e, 0x81e,
  0x801, 0x811, 0x809, 0x819, 0x805, 0x815, 0x80d, 0x81d,
  0x803, 0x813, 0x80b, 0x81b, 0x807, 0x817, 0x80f, 0x81f,
  0x800, 0x810, 0x808, 0x818, 0x804, 0x814, 0x80c, 0x81c,
  0x802, 0x812, 0x80a, 0x81a, 0x806, 0x816, 0x80e, 0x81e,
  0x801, 0x811, 0x809, 0x819, 0x805, 0x815, 0x80d, 0x81d,
  0x803, 0x813, 0x80b, 0x81b, 0x807, 0x817, 0x80f, 0x81f,
  0x800, 0x810, 0x808, 0x818, 0x804, 0x814, 0x80c, 0x81c,
  0x802, 0x812, 0x80a, 0x81a, 0x806, 0x816, 0x80e, 0x81e,
  0x801, 0x811, 0x809, 0x819, 0x805, 0x815, 0x80d, 0x81d,
  0x803, 0x813, 0x80b, 0x81b, 0x807, 0x817, 0x80f, 0x81f,
  0x800, 0x810, 0x808, 0x818, 0x804, 0x814, 0x80c, 0x81c,
  0x802, 0x812, 0x80a, 0x81a, 0x806, 0x816, 0x80e, 0x81e,
  0x801, 0x811, 0x809, 0x819, 0x805, 0x815, 0x80d, 0x81d,
  0x803, 0x813, 0x80b, 0x81b, 0x807, 0x817, 0x80f, 0x81f,
};




static int
elf_zlib_inflate (const unsigned char *pin, size_t sin, uint16_t *zdebug_table,
    unsigned char *pout, size_t sout)
{
  unsigned char *porigout;
  const unsigned char *pinend;
  unsigned char *poutend;




  porigout = pout;
  pinend = pin + sin;
  poutend = pout + sout;
  while ((pinend - pin) > 4)
    {
      uint64_t val;
      unsigned int bits;
      int last;



      if (__builtin_expect(!!((pin[0] & 0xf) != 8), 0))
 {

   elf_zlib_failed ();
   return 0;
 }
      if (__builtin_expect(!!((pin[0] >> 4) > 7), 0))
 {


   elf_zlib_failed ();
   return 0;
 }
      if (__builtin_expect(!!((pin[1] & 0x20) != 0), 0))
 {


   elf_zlib_failed ();
   return 0;
 }
      val = (pin[0] << 8) | pin[1];
      if (__builtin_expect(!!(val % 31 != 0), 0))
 {

   elf_zlib_failed ();
   return 0;
 }
      pin += 2;



      val = 0;
      bits = 0;
      while ((((uintptr_t) pin) & 3) != 0)
 {
   val |= (uint64_t)*pin << bits;
   bits += 8;
   ++pin;
 }



      last = 0;

      while (!last)
 {
   unsigned int type;
   const uint16_t *tlit;
   const uint16_t *tdist;

   if (!elf_zlib_fetch (&pin, pinend, &val, &bits))
     return 0;

   last = val & 1;
   type = (val >> 1) & 3;
   val >>= 3;
   bits -= 3;

   if (__builtin_expect(!!(type == 3), 0))
     {

       elf_zlib_failed ();
       return 0;
     }

   if (type == 0)
     {
       uint16_t len;
       uint16_t lenc;




       while (bits > 8)
  {
    --pin;
    bits -= 8;
  }

       val = 0;
       bits = 0;
       if (__builtin_expect(!!((pinend - pin) < 4), 0))
  {

    elf_zlib_failed ();
    return 0;
  }
       len = pin[0] | (pin[1] << 8);
       lenc = pin[2] | (pin[3] << 8);
       pin += 4;
       lenc = ~lenc;
       if (__builtin_expect(!!(len != lenc), 0))
  {

    elf_zlib_failed ();
    return 0;
  }
       if (__builtin_expect(!!(len > (unsigned int) (pinend - pin) || len > (unsigned int) (poutend - pout)), 0)
                                                )
  {

    elf_zlib_failed ();
    return 0;
  }
       memcpy (pout, pin, len);
       pout += len;
       pin += len;


       while ((((uintptr_t) pin) & 3) != 0)
  {
    val |= (uint64_t)*pin << bits;
    bits += 8;
    ++pin;
  }


       continue;
     }

   if (type == 1)
     {
       tlit = elf_zlib_default_table;
       tdist = elf_zlib_default_dist_table;
     }
   else
     {
       unsigned int nlit;
       unsigned int ndist;
       unsigned int nclen;
       unsigned char codebits[19];
       unsigned char *plenbase;
       unsigned char *plen;
       unsigned char *plenend;




       if (!elf_zlib_fetch (&pin, pinend, &val, &bits))
  return 0;

       nlit = (val & 0x1f) + 257;
       val >>= 5;
       ndist = (val & 0x1f) + 1;
       val >>= 5;
       nclen = (val & 0xf) + 4;
       val >>= 4;
       bits -= 14;
       if (__builtin_expect(!!(nlit > 286 || ndist > 30), 0))
  {

    elf_zlib_failed ();
    return 0;
  }




       memset(&codebits[0], 0, 19);




       if (!elf_zlib_fetch (&pin, pinend, &val, &bits))
  return 0;

       codebits[16] = val & 7;
       codebits[17] = (val >> 3) & 7;
       codebits[18] = (val >> 6) & 7;
       codebits[0] = (val >> 9) & 7;
       val >>= 12;
       bits -= 12;

       if (nclen == 4)
  goto codebitsdone;

       codebits[8] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 5)
  goto codebitsdone;

       if (!elf_zlib_fetch (&pin, pinend, &val, &bits))
  return 0;

       codebits[7] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 6)
  goto codebitsdone;

       codebits[9] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 7)
  goto codebitsdone;

       codebits[6] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 8)
  goto codebitsdone;

       codebits[10] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 9)
  goto codebitsdone;

       codebits[5] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 10)
  goto codebitsdone;

       if (!elf_zlib_fetch (&pin, pinend, &val, &bits))
  return 0;

       codebits[11] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 11)
  goto codebitsdone;

       codebits[4] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 12)
  goto codebitsdone;

       codebits[12] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 13)
  goto codebitsdone;

       codebits[3] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 14)
  goto codebitsdone;

       codebits[13] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 15)
  goto codebitsdone;

       if (!elf_zlib_fetch (&pin, pinend, &val, &bits))
  return 0;

       codebits[2] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 16)
  goto codebitsdone;

       codebits[14] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 17)
  goto codebitsdone;

       codebits[1] = val & 7;
       val >>= 3;
       bits -= 3;

       if (nclen == 18)
  goto codebitsdone;

       codebits[15] = val & 7;
       val >>= 3;
       bits -= 3;

     codebitsdone:

       if (!elf_zlib_inflate_table (codebits, 19, zdebug_table,
        zdebug_table))
  return 0;





       plenbase = (((unsigned char *) zdebug_table)
     + (2 * (1024) * sizeof (uint16_t) + (286 + 30) * sizeof (uint16_t)));
       plen = plenbase;
       plenend = plen + nlit + ndist;
       while (plen < plenend)
  {
    uint16_t t;
    unsigned int b;
    uint16_t v;

    if (!elf_zlib_fetch (&pin, pinend, &val, &bits))
      return 0;

    t = zdebug_table[val & 0xff];



    if (__builtin_expect(!!((t & (1U << 12)) != 0), 0))
      {
        elf_zlib_failed ();
        return 0;
      }

    b = (t >> 9) & 0x7;
    val >>= b + 1;
    bits -= b + 1;

    v = t & 0x01ff;
    if (v < 16)
      *plen++ = v;
    else if (v == 16)
      {
        unsigned int c;
        unsigned int prev;



        if (__builtin_expect(!!(plen == plenbase), 0))
   {
     elf_zlib_failed ();
     return 0;
   }





        c = 3 + (val & 0x3);
        val >>= 2;
        bits -= 2;
        if (__builtin_expect(!!((unsigned int) (plenend - plen) < c), 0))
   {
     elf_zlib_failed ();
     return 0;
   }

        prev = plen[-1];
        switch (c)
   {
   case 6:
     *plen++ = prev;

   case 5:
     *plen++ = prev;

   case 4:
     *plen++ = prev;
   }
        *plen++ = prev;
        *plen++ = prev;
        *plen++ = prev;
      }
    else if (v == 17)
      {
        unsigned int c;







        c = 3 + (val & 0x7);
        val >>= 3;
        bits -= 3;
        if (__builtin_expect(!!((unsigned int) (plenend - plen) < c), 0))
   {
     elf_zlib_failed ();
     return 0;
   }

        switch (c)
   {
   case 10:
     *plen++ = 0;

   case 9:
     *plen++ = 0;

   case 8:
     *plen++ = 0;

   case 7:
     *plen++ = 0;

   case 6:
     *plen++ = 0;

   case 5:
     *plen++ = 0;

   case 4:
     *plen++ = 0;
   }
        *plen++ = 0;
        *plen++ = 0;
        *plen++ = 0;
      }
    else if (v == 18)
      {
        unsigned int c;







        c = 11 + (val & 0x7f);
        val >>= 7;
        bits -= 7;
        if (__builtin_expect(!!((unsigned int) (plenend - plen) < c), 0))
   {
     elf_zlib_failed ();
     return 0;
   }

        memset (plen, 0, c);
        plen += c;
      }
    else
      {
        elf_zlib_failed ();
        return 0;
      }
  }



       plen = plenbase;
       if (__builtin_expect(!!(plen[256] == 0), 0))
  {
    elf_zlib_failed ();
    return 0;
  }



       if (!elf_zlib_inflate_table (plen, nlit, zdebug_table,
        zdebug_table))
  return 0;
       if (!elf_zlib_inflate_table (plen + nlit, ndist, zdebug_table,
        zdebug_table + (1024)))
  return 0;
       tlit = zdebug_table;
       tdist = zdebug_table + (1024);
     }




   while (1)
     {
       uint16_t t;
       unsigned int b;
       uint16_t v;
       unsigned int lit;

       if (!elf_zlib_fetch (&pin, pinend, &val, &bits))
  return 0;

       t = tlit[val & 0xff];
       b = (t >> 9) & 0x7;
       v = t & 0x01ff;

       if ((t & (1U << 12)) == 0)
  {
    lit = v;
    val >>= b + 1;
    bits -= b + 1;
  }
       else
  {
    t = tlit[v + 0x100 + ((val >> 8) & ((1U << b) - 1))];
    b = (t >> 9) & 0x7;
    lit = t & 0x01ff;
    val >>= b + 8;
    bits -= b + 8;
  }

       if (lit < 256)
  {
    if (__builtin_expect(!!(pout == poutend), 0))
      {
        elf_zlib_failed ();
        return 0;
      }

    *pout++ = lit;




    __builtin_prefetch (pout, 1, 3);
  }
       else if (lit == 256)
  {

    break;
  }
       else
  {
    unsigned int dist;
    unsigned int len;



    if (lit < 265)
      len = lit - 257 + 3;
    else if (lit == 285)
      len = 258;
    else if (__builtin_expect(!!(lit > 285), 0))
      {
        elf_zlib_failed ();
        return 0;
      }
    else
      {
        unsigned int extra;

        if (!elf_zlib_fetch (&pin, pinend, &val, &bits))
   return 0;



        lit -= 265;
        extra = (lit >> 2) + 1;
        len = (lit & 3) << extra;
        len += 11;
        len += ((1U << (extra - 1)) - 1) << 3;
        len += val & ((1U << extra) - 1);
        val >>= extra;
        bits -= extra;
      }

    if (!elf_zlib_fetch (&pin, pinend, &val, &bits))
      return 0;

    t = tdist[val & 0xff];
    b = (t >> 9) & 0x7;
    v = t & 0x01ff;

    if ((t & (1U << 12)) == 0)
      {
        dist = v;
        val >>= b + 1;
        bits -= b + 1;
      }
    else
      {
        t = tdist[v + 0x100 + ((val >> 8) & ((1U << b) - 1))];
        b = (t >> 9) & 0x7;
        dist = t & 0x01ff;
        val >>= b + 8;
        bits -= b + 8;
      }



    if (dist == 0)
      {



        if (__builtin_expect(!!(pout == porigout), 0))
   {
     elf_zlib_failed ();
     return 0;
   }

        if (__builtin_expect(!!((unsigned int) (poutend - pout) < len), 0))
   {
     elf_zlib_failed ();
     return 0;
   }

        memset (pout, pout[-1], len);
        pout += len;
      }
    else if (__builtin_expect(!!(dist > 29), 0))
      {
        elf_zlib_failed ();
        return 0;
      }
    else
      {
        if (dist < 4)
   dist = dist + 1;
        else
   {
     unsigned int extra;

     if (!elf_zlib_fetch (&pin, pinend, &val, &bits))
       return 0;



     dist -= 4;
     extra = (dist >> 1) + 1;
     dist = (dist & 1) << extra;
     dist += 5;
     dist += ((1U << (extra - 1)) - 1) << 2;
     dist += val & ((1U << extra) - 1);
     val >>= extra;
     bits -= extra;
   }




        if (__builtin_expect(!!((unsigned int) (pout - porigout) < dist), 0))
   {
     elf_zlib_failed ();
     return 0;
   }

        if (__builtin_expect(!!((unsigned int) (poutend - pout) < len), 0))
   {
     elf_zlib_failed ();
     return 0;
   }

        if (dist >= len)
   {
     memcpy (pout, pout - dist, len);
     pout += len;
   }
        else
   {
     while (len > 0)
       {
         unsigned int copy;

         copy = len < dist ? len : dist;
         memcpy (pout, pout - dist, copy);
         len -= copy;
         pout += copy;
       }
   }
      }
  }
     }
 }
    }


  if (__builtin_expect(!!(pout != poutend), 0))
    {
      elf_zlib_failed ();
      return 0;
    }

  return 1;
}





static int
elf_zlib_verify_checksum (const unsigned char *checkbytes,
     const unsigned char *uncompressed,
     size_t uncompressed_size)
{
  unsigned int i;
  unsigned int cksum;
  const unsigned char *p;
  uint32_t s1;
  uint32_t s2;
  size_t hsz;

  cksum = 0;
  for (i = 0; i < 4; i++)
    cksum = (cksum << 8) | checkbytes[i];

  s1 = 1;
  s2 = 0;



  p = uncompressed;
  hsz = uncompressed_size;
  while (hsz >= 5552)
    {
      for (i = 0; i < 5552; i += 16)
 {

   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
   s1 = s1 + *p++;
   s2 = s2 + s1;
 }
      hsz -= 5552;
      s1 %= 65521;
      s2 %= 65521;
    }

  while (hsz >= 16)
    {

      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;
      s1 = s1 + *p++;
      s2 = s2 + s1;

      hsz -= 16;
    }

  for (i = 0; i < hsz; ++i)
    {
      s1 = s1 + *p++;
      s2 = s2 + s1;
    }

  s1 %= 65521;
  s2 %= 65521;

  if (__builtin_expect(!!((s2 << 16) + s1 != cksum), 0))
    {
      elf_zlib_failed ();
      return 0;
    }

  return 1;
}




static int
elf_zlib_inflate_and_verify (const unsigned char *pin, size_t sin,
        uint16_t *zdebug_table, unsigned char *pout,
        size_t sout)
{
  if (!elf_zlib_inflate (pin, sin, zdebug_table, pout, sout))
    return 0;
  if (!elf_zlib_verify_checksum (pin + sin - 4, pout, sout))
    return 0;
  return 1;
}
# 2486 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
static int
elf_uncompress_zdebug (struct backtrace_state *state,
         const unsigned char *compressed, size_t compressed_size,
         uint16_t *zdebug_table,
         backtrace_error_callback error_callback, void *data,
         unsigned char **uncompressed, size_t *uncompressed_size)
{
  size_t sz;
  size_t i;
  unsigned char *po;

  *uncompressed = 
# 2497 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                 ((void *)0)
# 2497 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                     ;
  *uncompressed_size = 0;





  if (compressed_size < 12 || memcmp (compressed, "ZLIB", 4) != 0)
    return 1;

  sz = 0;
  for (i = 0; i < 8; i++)
    sz = (sz << 8) | compressed[i + 4];

  if (*uncompressed != 
# 2511 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                      ((void *)0) 
# 2511 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                           && *uncompressed_size >= sz)
    po = *uncompressed;
  else
    {
      po = (unsigned char *) backtrace_alloc (state, sz, error_callback, data);
      if (po == 
# 2516 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
               ((void *)0)
# 2516 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                   )
 return 0;
    }

  if (!elf_zlib_inflate_and_verify (compressed + 12, compressed_size - 12,
        zdebug_table, po, sz))
    return 1;

  *uncompressed = po;
  *uncompressed_size = sz;

  return 1;
}
# 2539 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
static int
elf_uncompress_chdr (struct backtrace_state *state,
       const unsigned char *compressed, size_t compressed_size,
       uint16_t *zdebug_table,
       backtrace_error_callback error_callback, void *data,
       unsigned char **uncompressed, size_t *uncompressed_size)
{
  const b_elf_chdr *chdr;
  unsigned char *po;

  *uncompressed = 
# 2549 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                 ((void *)0)
# 2549 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                     ;
  *uncompressed_size = 0;


  if (compressed_size < sizeof (b_elf_chdr))
    return 1;

  chdr = (const b_elf_chdr *) compressed;

  if (chdr->ch_type != 1)
    {

      return 1;
    }

  if (*uncompressed != 
# 2564 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                      ((void *)0) 
# 2564 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                           && *uncompressed_size >= chdr->ch_size)
    po = *uncompressed;
  else
    {
      po = (unsigned char *) backtrace_alloc (state, chdr->ch_size,
           error_callback, data);
      if (po == 
# 2570 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
               ((void *)0)
# 2570 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                   )
 return 0;
    }

  if (!elf_zlib_inflate_and_verify (compressed + sizeof (b_elf_chdr),
        compressed_size - sizeof (b_elf_chdr),
        zdebug_table, po, chdr->ch_size))
    return 1;

  *uncompressed = po;
  *uncompressed_size = chdr->ch_size;

  return 1;
}




int
backtrace_uncompress_zdebug (struct backtrace_state *state,
        const unsigned char *compressed,
        size_t compressed_size,
        backtrace_error_callback error_callback,
        void *data, unsigned char **uncompressed,
        size_t *uncompressed_size)
{
  uint16_t *zdebug_table;
  int ret;

  zdebug_table = ((uint16_t *) backtrace_alloc (state, (2 * (1024) * sizeof (uint16_t) + (286 + 30) * sizeof (uint16_t) + (286 + 30) * sizeof (unsigned char)),
      error_callback, data));
  if (zdebug_table == 
# 2601 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                     ((void *)0)
# 2601 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                         )
    return 0;
  ret = elf_uncompress_zdebug (state, compressed, compressed_size,
          zdebug_table, error_callback, data,
          uncompressed, uncompressed_size);
  backtrace_free (state, zdebug_table, (2 * (1024) * sizeof (uint16_t) + (286 + 30) * sizeof (uint16_t) + (286 + 30) * sizeof (unsigned char)),
    error_callback, data);
  return ret;
}







static int
elf_add (struct backtrace_state *state, const char *filename, int descriptor,
  uintptr_t base_address, backtrace_error_callback error_callback,
  void *data, fileline *fileline_fn, int *found_sym, int *found_dwarf,
  struct dwarf_data **fileline_entry, int exe, int debuginfo,
  const char *with_buildid_data, uint32_t with_buildid_size)
{
  struct backtrace_view ehdr_view;
  b_elf_ehdr ehdr;
  off_t shoff;
  unsigned int shnum;
  unsigned int shstrndx;
  struct backtrace_view shdrs_view;
  int shdrs_view_valid;
  const b_elf_shdr *shdrs;
  const b_elf_shdr *shstrhdr;
  size_t shstr_size;
  off_t shstr_off;
  struct backtrace_view names_view;
  int names_view_valid;
  const char *names;
  unsigned int symtab_shndx;
  unsigned int dynsym_shndx;
  unsigned int i;
  struct debug_section_info sections[DEBUG_MAX];
  struct debug_section_info zsections[DEBUG_MAX];
  struct backtrace_view symtab_view;
  int symtab_view_valid;
  struct backtrace_view strtab_view;
  int strtab_view_valid;
  struct backtrace_view buildid_view;
  int buildid_view_valid;
  const char *buildid_data;
  uint32_t buildid_size;
  struct backtrace_view debuglink_view;
  int debuglink_view_valid;
  const char *debuglink_name;
  uint32_t debuglink_crc;
  struct backtrace_view debugaltlink_view;
  int debugaltlink_view_valid;
  const char *debugaltlink_name;
  const char *debugaltlink_buildid_data;
  uint32_t debugaltlink_buildid_size;
  off_t min_offset;
  off_t max_offset;
  off_t debug_size;
  struct backtrace_view debug_view;
  int debug_view_valid;
  unsigned int using_debug_view;
  uint16_t *zdebug_table;
  struct backtrace_view split_debug_view[DEBUG_MAX];
  unsigned char split_debug_view_valid[DEBUG_MAX];
  struct elf_ppc64_opd_data opd_data, *opd;
  struct dwarf_sections dwarf_sections;

  if (!debuginfo)
    {
      *found_sym = 0;
      *found_dwarf = 0;
    }

  shdrs_view_valid = 0;
  names_view_valid = 0;
  symtab_view_valid = 0;
  strtab_view_valid = 0;
  buildid_view_valid = 0;
  buildid_data = 
# 2683 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                ((void *)0)
# 2683 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                    ;
  buildid_size = 0;
  debuglink_view_valid = 0;
  debuglink_name = 
# 2686 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                  ((void *)0)
# 2686 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                      ;
  debuglink_crc = 0;
  debugaltlink_view_valid = 0;
  debugaltlink_name = 
# 2689 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                     ((void *)0)
# 2689 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                         ;
  debugaltlink_buildid_data = 
# 2690 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                             ((void *)0)
# 2690 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                 ;
  debugaltlink_buildid_size = 0;
  debug_view_valid = 0;
  memset (&split_debug_view_valid[0], 0, sizeof split_debug_view_valid);
  opd = 
# 2694 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
       ((void *)0)
# 2694 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
           ;

  if (!backtrace_get_view (state, descriptor, 0, sizeof ehdr, error_callback,
      data, &ehdr_view))
    goto fail;

  memcpy (&ehdr, ehdr_view.data, sizeof ehdr);

  backtrace_release_view (state, &ehdr_view, error_callback, data);

  if (ehdr.e_ident[0] != 0x7f
      || ehdr.e_ident[1] != 'E'
      || ehdr.e_ident[2] != 'L'
      || ehdr.e_ident[3] != 'F')
    {
      error_callback (data, "executable file is not ELF", 0);
      goto fail;
    }
  if (ehdr.e_ident[6] != 1)
    {
      error_callback (data, "executable file is unrecognized ELF version", 0);
      goto fail;
    }







  if (ehdr.e_ident[4] != 2)
    {
      error_callback (data, "executable file is unexpected ELF class", 0);
      goto fail;
    }

  if (ehdr.e_ident[5] != 1
      && ehdr.e_ident[5] != 2)
    {
      error_callback (data, "executable file has unknown endianness", 0);
      goto fail;
    }




  if (exe && ehdr.e_type == 3)
    return -1;

  shoff = ehdr.e_shoff;
  shnum = ehdr.e_shnum;
  shstrndx = ehdr.e_shstrndx;

  if ((shnum == 0 || shstrndx == 0xFFFF)
      && shoff != 0)
    {
      struct backtrace_view shdr_view;
      const b_elf_shdr *shdr;

      if (!backtrace_get_view (state, descriptor, shoff, sizeof shdr,
          error_callback, data, &shdr_view))
 goto fail;

      shdr = (const b_elf_shdr *) shdr_view.data;

      if (shnum == 0)
 shnum = shdr->sh_size;

      if (shstrndx == 0xFFFF)
 {
   shstrndx = shdr->sh_link;
# 2777 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
   if (shstrndx >= shnum && shstrndx >= 0xFF00 + 0x100)
     shstrndx -= 0x100;
 }

      backtrace_release_view (state, &shdr_view, error_callback, data);
    }

  if (shnum == 0 || shstrndx == 0)
    goto fail;






  if (!backtrace_get_view (state, descriptor, shoff + sizeof (b_elf_shdr),
      (shnum - 1) * sizeof (b_elf_shdr),
      error_callback, data, &shdrs_view))
    goto fail;
  shdrs_view_valid = 1;
  shdrs = (const b_elf_shdr *) shdrs_view.data;



  shstrhdr = &shdrs[shstrndx - 1];
  shstr_size = shstrhdr->sh_size;
  shstr_off = shstrhdr->sh_offset;

  if (!backtrace_get_view (state, descriptor, shstr_off, shstrhdr->sh_size,
      error_callback, data, &names_view))
    goto fail;
  names_view_valid = 1;
  names = (const char *) names_view.data;

  symtab_shndx = 0;
  dynsym_shndx = 0;

  memset (sections, 0, sizeof sections);
  memset (zsections, 0, sizeof zsections);


  for (i = 1; i < shnum; ++i)
    {
      const b_elf_shdr *shdr;
      unsigned int sh_name;
      const char *name;
      int j;

      shdr = &shdrs[i - 1];

      if (shdr->sh_type == 2)
 symtab_shndx = i;
      else if (shdr->sh_type == 11)
 dynsym_shndx = i;

      sh_name = shdr->sh_name;
      if (sh_name >= shstr_size)
 {
   error_callback (data, "ELF section name out of range", 0);
   goto fail;
 }

      name = names + sh_name;

      for (j = 0; j < (int) DEBUG_MAX; ++j)
 {
   if (strcmp (name, dwarf_section_names[j]) == 0)
     {
       sections[j].offset = shdr->sh_offset;
       sections[j].size = shdr->sh_size;
       sections[j].compressed = (shdr->sh_flags & 0x800) != 0;
       break;
     }
 }

      if (name[0] == '.' && name[1] == 'z')
 {
   for (j = 0; j < (int) DEBUG_MAX; ++j)
     {
       if (strcmp (name + 2, dwarf_section_names[j] + 1) == 0)
  {
    zsections[j].offset = shdr->sh_offset;
    zsections[j].size = shdr->sh_size;
    break;
  }
     }
 }




      if ((!debuginfo || with_buildid_data != 
# 2868 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                             ((void *)0)
# 2868 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                                 )
   && !buildid_view_valid
   && strcmp (name, ".note.gnu.build-id") == 0)
 {
   const b_elf_note *note;

   if (!backtrace_get_view (state, descriptor, shdr->sh_offset,
       shdr->sh_size, error_callback, data,
       &buildid_view))
     goto fail;

   buildid_view_valid = 1;
   note = (const b_elf_note *) buildid_view.data;
   if (note->type == 3
       && note->namesz == 4
       && strncmp (note->name, "GNU", 4) == 0
       && shdr->sh_size <= 12 + ((note->namesz + 3) & ~ 3) + note->descsz)
     {
       buildid_data = &note->name[0] + ((note->namesz + 3) & ~ 3);
       buildid_size = note->descsz;
     }

   if (with_buildid_size != 0)
     {
       if (buildid_size != with_buildid_size)
  goto fail;

       if (memcmp (buildid_data, with_buildid_data, buildid_size) != 0)
  goto fail;
     }
 }


      if (!debuginfo
   && !debuglink_view_valid
   && strcmp (name, ".gnu_debuglink") == 0)
 {
   const char *debuglink_data;
   size_t crc_offset;

   if (!backtrace_get_view (state, descriptor, shdr->sh_offset,
       shdr->sh_size, error_callback, data,
       &debuglink_view))
     goto fail;

   debuglink_view_valid = 1;
   debuglink_data = (const char *) debuglink_view.data;
   crc_offset = strnlen (debuglink_data, shdr->sh_size);
   crc_offset = (crc_offset + 3) & ~3;
   if (crc_offset + 4 <= shdr->sh_size)
     {
       debuglink_name = debuglink_data;
       debuglink_crc = *(const uint32_t*)(debuglink_data + crc_offset);
     }
 }

      if (!debugaltlink_view_valid
   && strcmp (name, ".gnu_debugaltlink") == 0)
 {
   const char *debugaltlink_data;
   size_t debugaltlink_name_len;

   if (!backtrace_get_view (state, descriptor, shdr->sh_offset,
       shdr->sh_size, error_callback, data,
       &debugaltlink_view))
     goto fail;

   debugaltlink_view_valid = 1;
   debugaltlink_data = (const char *) debugaltlink_view.data;
   debugaltlink_name = debugaltlink_data;
   debugaltlink_name_len = strnlen (debugaltlink_data, shdr->sh_size);
   if (debugaltlink_name_len < shdr->sh_size)
     {

       debugaltlink_name_len += 1;

       debugaltlink_buildid_data
  = debugaltlink_data + debugaltlink_name_len;
       debugaltlink_buildid_size = shdr->sh_size - debugaltlink_name_len;
     }
 }


      if (ehdr.e_machine == 21
   && (ehdr.e_flags & 3) < 2
   && shdr->sh_type == 1
   && strcmp (name, ".opd") == 0)
 {
   if (!backtrace_get_view (state, descriptor, shdr->sh_offset,
       shdr->sh_size, error_callback, data,
       &opd_data.view))
     goto fail;

   opd = &opd_data;
   opd->addr = shdr->sh_addr;
   opd->data = (const char *) opd_data.view.data;
   opd->size = shdr->sh_size;
 }
    }

  if (symtab_shndx == 0)
    symtab_shndx = dynsym_shndx;
  if (symtab_shndx != 0 && !debuginfo)
    {
      const b_elf_shdr *symtab_shdr;
      unsigned int strtab_shndx;
      const b_elf_shdr *strtab_shdr;
      struct elf_syminfo_data *sdata;

      symtab_shdr = &shdrs[symtab_shndx - 1];
      strtab_shndx = symtab_shdr->sh_link;
      if (strtab_shndx >= shnum)
 {
   error_callback (data,
     "ELF symbol table strtab link out of range", 0);
   goto fail;
 }
      strtab_shdr = &shdrs[strtab_shndx - 1];

      if (!backtrace_get_view (state, descriptor, symtab_shdr->sh_offset,
          symtab_shdr->sh_size, error_callback, data,
          &symtab_view))
 goto fail;
      symtab_view_valid = 1;

      if (!backtrace_get_view (state, descriptor, strtab_shdr->sh_offset,
          strtab_shdr->sh_size, error_callback, data,
          &strtab_view))
 goto fail;
      strtab_view_valid = 1;

      sdata = ((struct elf_syminfo_data *)
        backtrace_alloc (state, sizeof *sdata, error_callback, data));
      if (sdata == 
# 3001 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                  ((void *)0)
# 3001 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                      )
 goto fail;

      if (!elf_initialize_syminfo (state, base_address,
       symtab_view.data, symtab_shdr->sh_size,
       strtab_view.data, strtab_shdr->sh_size,
       error_callback, data, sdata, opd))
 {
   backtrace_free (state, sdata, sizeof *sdata, error_callback, data);
   goto fail;
 }



      backtrace_release_view (state, &symtab_view, error_callback, data);
      symtab_view_valid = 0;
      strtab_view_valid = 0;

      *found_sym = 1;

      elf_add_syminfo_data (state, sdata);
    }

  backtrace_release_view (state, &shdrs_view, error_callback, data);
  shdrs_view_valid = 0;
  backtrace_release_view (state, &names_view, error_callback, data);
  names_view_valid = 0;



  if (buildid_data != 
# 3031 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                     ((void *)0)
# 3031 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                         )
    {
      int d;

      d = elf_open_debugfile_by_buildid (state, buildid_data, buildid_size,
      error_callback, data);
      if (d >= 0)
 {
   int ret;

   backtrace_release_view (state, &buildid_view, error_callback, data);
   if (debuglink_view_valid)
     backtrace_release_view (state, &debuglink_view, error_callback,
        data);
   if (debugaltlink_view_valid)
     backtrace_release_view (state, &debugaltlink_view, error_callback,
        data);
   ret = elf_add (state, "", d, base_address, error_callback, data,
    fileline_fn, found_sym, found_dwarf, 
# 3049 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                        ((void *)0)
# 3049 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                            , 0, 1, 
# 3049 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                                    ((void *)0)
# 3049 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                                        ,
    0);
   if (ret < 0)
     backtrace_close (d, error_callback, data);
   else
     backtrace_close (descriptor, error_callback, data);
   return ret;
 }
    }

  if (buildid_view_valid)
    {
      backtrace_release_view (state, &buildid_view, error_callback, data);
      buildid_view_valid = 0;
    }

  if (opd)
    {
      backtrace_release_view (state, &opd->view, error_callback, data);
      opd = 
# 3068 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
           ((void *)0)
# 3068 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
               ;
    }

  if (debuglink_name != 
# 3071 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                       ((void *)0)
# 3071 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                           )
    {
      int d;

      d = elf_open_debugfile_by_debuglink (state, filename, debuglink_name,
        debuglink_crc, error_callback,
        data);
      if (d >= 0)
 {
   int ret;

   backtrace_release_view (state, &debuglink_view, error_callback,
      data);
   if (debugaltlink_view_valid)
     backtrace_release_view (state, &debugaltlink_view, error_callback,
        data);
   ret = elf_add (state, "", d, base_address, error_callback, data,
    fileline_fn, found_sym, found_dwarf, 
# 3088 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                        ((void *)0)
# 3088 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                            , 0, 1, 
# 3088 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                                    ((void *)0)
# 3088 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                                        ,
    0);
   if (ret < 0)
     backtrace_close (d, error_callback, data);
   else
     backtrace_close(descriptor, error_callback, data);
   return ret;
 }
    }

  if (debuglink_view_valid)
    {
      backtrace_release_view (state, &debuglink_view, error_callback, data);
      debuglink_view_valid = 0;
    }

  struct dwarf_data *fileline_altlink = 
# 3104 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                       ((void *)0)
# 3104 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                           ;
  if (debugaltlink_name != 
# 3105 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                          ((void *)0)
# 3105 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                              )
    {
      int d;

      d = elf_open_debugfile_by_debuglink (state, filename, debugaltlink_name,
        0, error_callback, data);
      if (d >= 0)
 {
   int ret;

   ret = elf_add (state, filename, d, base_address, error_callback, data,
    fileline_fn, found_sym, found_dwarf, &fileline_altlink,
    0, 1, debugaltlink_buildid_data,
    debugaltlink_buildid_size);
   backtrace_release_view (state, &debugaltlink_view, error_callback,
      data);
   debugaltlink_view_valid = 0;
   if (ret < 0)
     {
       backtrace_close (d, error_callback, data);
       return ret;
     }
 }
    }

  if (debugaltlink_view_valid)
    {
      backtrace_release_view (state, &debugaltlink_view, error_callback, data);
      debugaltlink_view_valid = 0;
    }





  min_offset = 0;
  max_offset = 0;
  debug_size = 0;
  for (i = 0; i < (int) DEBUG_MAX; ++i)
    {
      off_t end;

      if (sections[i].size != 0)
 {
   if (min_offset == 0 || sections[i].offset < min_offset)
     min_offset = sections[i].offset;
   end = sections[i].offset + sections[i].size;
   if (end > max_offset)
     max_offset = end;
   debug_size += sections[i].size;
 }
      if (zsections[i].size != 0)
 {
   if (min_offset == 0 || zsections[i].offset < min_offset)
     min_offset = zsections[i].offset;
   end = zsections[i].offset + zsections[i].size;
   if (end > max_offset)
     max_offset = end;
   debug_size += zsections[i].size;
 }
    }
  if (min_offset == 0 || max_offset == 0)
    {
      if (!backtrace_close (descriptor, error_callback, data))
 goto fail;
      return 1;
    }




  if (max_offset - min_offset < 0x20000000
      || max_offset - min_offset < debug_size + 0x10000)
    {
      if (!backtrace_get_view (state, descriptor, min_offset,
          max_offset - min_offset,
          error_callback, data, &debug_view))
 goto fail;
      debug_view_valid = 1;
    }
  else
    {
      memset (&split_debug_view[0], 0, sizeof split_debug_view);
      for (i = 0; i < (int) DEBUG_MAX; ++i)
 {
   struct debug_section_info *dsec;

   if (sections[i].size != 0)
     dsec = &sections[i];
   else if (zsections[i].size != 0)
     dsec = &zsections[i];
   else
     continue;

   if (!backtrace_get_view (state, descriptor, dsec->offset, dsec->size,
       error_callback, data, &split_debug_view[i]))
     goto fail;
   split_debug_view_valid[i] = 1;

   if (sections[i].size != 0)
     sections[i].data = ((const unsigned char *)
    split_debug_view[i].data);
   else
     zsections[i].data = ((const unsigned char *)
     split_debug_view[i].data);
 }
    }


  if (!backtrace_close (descriptor, error_callback, data))
    goto fail;
  descriptor = -1;

  using_debug_view = 0;
  if (debug_view_valid)
    {
      for (i = 0; i < (int) DEBUG_MAX; ++i)
 {
   if (sections[i].size == 0)
     sections[i].data = 
# 3224 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                       ((void *)0)
# 3224 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                           ;
   else
     {
       sections[i].data = ((const unsigned char *) debug_view.data
      + (sections[i].offset - min_offset));
       ++using_debug_view;
     }

   if (zsections[i].size == 0)
     zsections[i].data = 
# 3233 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                        ((void *)0)
# 3233 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                            ;
   else
     zsections[i].data = ((const unsigned char *) debug_view.data
     + (zsections[i].offset - min_offset));
 }
    }



  zdebug_table = 
# 3242 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                ((void *)0)
# 3242 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                    ;
  for (i = 0; i < (int) DEBUG_MAX; ++i)
    {
      if (sections[i].size == 0 && zsections[i].size > 0)
 {
   unsigned char *uncompressed_data;
   size_t uncompressed_size;

   if (zdebug_table == 
# 3250 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                      ((void *)0)
# 3250 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                          )
     {
       zdebug_table = ((uint16_t *)
         backtrace_alloc (state, (2 * (1024) * sizeof (uint16_t) + (286 + 30) * sizeof (uint16_t) + (286 + 30) * sizeof (unsigned char)),
            error_callback, data));
       if (zdebug_table == 
# 3255 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                          ((void *)0)
# 3255 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                              )
  goto fail;
     }

   uncompressed_data = 
# 3259 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                      ((void *)0)
# 3259 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                          ;
   uncompressed_size = 0;
   if (!elf_uncompress_zdebug (state, zsections[i].data,
          zsections[i].size, zdebug_table,
          error_callback, data,
          &uncompressed_data, &uncompressed_size))
     goto fail;
   sections[i].data = uncompressed_data;
   sections[i].size = uncompressed_size;
   sections[i].compressed = 0;

   if (split_debug_view_valid[i])
     {
       backtrace_release_view (state, &split_debug_view[i],
          error_callback, data);
       split_debug_view_valid[i] = 0;
     }
 }
    }



  for (i = 0; i < (int) DEBUG_MAX; ++i)
    {
      unsigned char *uncompressed_data;
      size_t uncompressed_size;

      if (sections[i].size == 0 || !sections[i].compressed)
 continue;

      if (zdebug_table == 
# 3289 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                         ((void *)0)
# 3289 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                             )
 {
   zdebug_table = ((uint16_t *)
     backtrace_alloc (state, (2 * (1024) * sizeof (uint16_t) + (286 + 30) * sizeof (uint16_t) + (286 + 30) * sizeof (unsigned char)),
        error_callback, data));
   if (zdebug_table == 
# 3294 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                      ((void *)0)
# 3294 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                          )
     goto fail;
 }

      uncompressed_data = 
# 3298 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                         ((void *)0)
# 3298 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                             ;
      uncompressed_size = 0;
      if (!elf_uncompress_chdr (state, sections[i].data, sections[i].size,
    zdebug_table, error_callback, data,
    &uncompressed_data, &uncompressed_size))
 goto fail;
      sections[i].data = uncompressed_data;
      sections[i].size = uncompressed_size;
      sections[i].compressed = 0;

      if (debug_view_valid)
 --using_debug_view;
      else if (split_debug_view_valid[i])
 {
   backtrace_release_view (state, &split_debug_view[i],
      error_callback, data);
   split_debug_view_valid[i] = 0;
 }
    }

  if (zdebug_table != 
# 3318 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                     ((void *)0)
# 3318 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                         )
    backtrace_free (state, zdebug_table, (2 * (1024) * sizeof (uint16_t) + (286 + 30) * sizeof (uint16_t) + (286 + 30) * sizeof (unsigned char)),
      error_callback, data);

  if (debug_view_valid && using_debug_view == 0)
    {
      backtrace_release_view (state, &debug_view, error_callback, data);
      debug_view_valid = 0;
    }

  for (i = 0; i < (int) DEBUG_MAX; ++i)
    {
      dwarf_sections.data[i] = sections[i].data;
      dwarf_sections.size[i] = sections[i].size;
    }

  if (!backtrace_dwarf_add (state, base_address, &dwarf_sections,
       ehdr.e_ident[5] == 2,
       fileline_altlink,
       error_callback, data, fileline_fn,
       fileline_entry))
    goto fail;

  *found_dwarf = 1;

  return 1;

 fail:
  if (shdrs_view_valid)
    backtrace_release_view (state, &shdrs_view, error_callback, data);
  if (names_view_valid)
    backtrace_release_view (state, &names_view, error_callback, data);
  if (symtab_view_valid)
    backtrace_release_view (state, &symtab_view, error_callback, data);
  if (strtab_view_valid)
    backtrace_release_view (state, &strtab_view, error_callback, data);
  if (debuglink_view_valid)
    backtrace_release_view (state, &debuglink_view, error_callback, data);
  if (debugaltlink_view_valid)
    backtrace_release_view (state, &debugaltlink_view, error_callback, data);
  if (buildid_view_valid)
    backtrace_release_view (state, &buildid_view, error_callback, data);
  if (debug_view_valid)
    backtrace_release_view (state, &debug_view, error_callback, data);
  for (i = 0; i < (int) DEBUG_MAX; ++i)
    {
      if (split_debug_view_valid[i])
 backtrace_release_view (state, &split_debug_view[i],
    error_callback, data);
    }
  if (opd)
    backtrace_release_view (state, &opd->view, error_callback, data);
  if (descriptor != -1)
    backtrace_close (descriptor, error_callback, data);
  return 0;
}



struct phdr_data
{
  struct backtrace_state *state;
  backtrace_error_callback error_callback;
  void *data;
  fileline *fileline_fn;
  int *found_sym;
  int *found_dwarf;
  const char *exe_filename;
  int exe_descriptor;
};




static int



phdr_callback (struct dl_phdr_info *info, size_t size __attribute__ ((__unused__)),
        void *pdata)
{
  struct phdr_data *pd = (struct phdr_data *) pdata;
  const char *filename;
  int descriptor;
  int does_not_exist;
  fileline elf_fileline_fn;
  int found_dwarf;




  if (info->dlpi_name == 
# 3409 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                        ((void *)0) 
# 3409 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                             || info->dlpi_name[0] == '\0')
    {
      if (pd->exe_descriptor == -1)
 return 0;
      filename = pd->exe_filename;
      descriptor = pd->exe_descriptor;
      pd->exe_descriptor = -1;
    }
  else
    {
      if (pd->exe_descriptor != -1)
 {
   backtrace_close (pd->exe_descriptor, pd->error_callback, pd->data);
   pd->exe_descriptor = -1;
 }

      filename = info->dlpi_name;
      descriptor = backtrace_open (info->dlpi_name, pd->error_callback,
       pd->data, &does_not_exist);
      if (descriptor < 0)
 return 0;
    }

  if (elf_add (pd->state, filename, descriptor, info->dlpi_addr,
        pd->error_callback, pd->data, &elf_fileline_fn, pd->found_sym,
        &found_dwarf, 
# 3434 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                     ((void *)0)
# 3434 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                         , 0, 0, 
# 3434 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                 ((void *)0)
# 3434 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                     , 0))
    {
      if (found_dwarf)
 {
   *pd->found_dwarf = 1;
   *pd->fileline_fn = elf_fileline_fn;
 }
    }

  return 0;
}





int
backtrace_initialize (struct backtrace_state *state, const char *filename,
        int descriptor, backtrace_error_callback error_callback,
        void *data, fileline *fileline_fn)
{
  int ret;
  int found_sym;
  int found_dwarf;
  fileline elf_fileline_fn = elf_nodebug;
  struct phdr_data pd;

  ret = elf_add (state, filename, descriptor, 0, error_callback, data,
   &elf_fileline_fn, &found_sym, &found_dwarf, 
# 3462 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                              ((void *)0)
# 3462 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                                  , 1, 0, 
# 3462 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                                          ((void *)0)
# 3462 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                                              ,
   0);
  if (!ret)
    return 0;

  pd.state = state;
  pd.error_callback = error_callback;
  pd.data = data;
  pd.fileline_fn = &elf_fileline_fn;
  pd.found_sym = &found_sym;
  pd.found_dwarf = &found_dwarf;
  pd.exe_filename = filename;
  pd.exe_descriptor = ret < 0 ? descriptor : -1;

  dl_iterate_phdr (phdr_callback, (void *) &pd);

  if (!state->threaded)
    {
      if (found_sym)
 state->syminfo_fn = elf_syminfo;
      else if (state->syminfo_fn == 
# 3482 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                   ((void *)0)
# 3482 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                       )
 state->syminfo_fn = elf_nosyms;
    }
  else
    {
      if (found_sym)
 __atomic_store_n ((&state->syminfo_fn), (elf_syminfo), 3);
      else
 (void) __sync_bool_compare_and_swap (&state->syminfo_fn, 
# 3490 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                                                         ((void *)0)
# 3490 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                                                             ,
          elf_nosyms);
    }

  if (!state->threaded)
    *fileline_fn = state->fileline_fn;
  else
    *fileline_fn = __atomic_load_n ((&state->fileline_fn), 2);

  if (*fileline_fn == 
# 3499 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c" 3 4
                     ((void *)0) 
# 3499 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/elf.c"
                          || *fileline_fn == elf_nodebug)
    *fileline_fn = elf_fileline_fn;

  return 1;
}
