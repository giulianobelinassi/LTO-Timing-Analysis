# 1 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
# 1 "/home/giulianob/gcc_git_gnu/build_temp/libbacktrace//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
# 33 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
# 1 "./config.h" 1
# 34 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 2

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




# 36 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 2
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

# 37 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 2
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

# 38 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 2


# 1 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/dwarf2.h" 1
# 81 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/dwarf2.h"
# 1 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/dwarf2.def" 1
# 71 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/dwarf2.def"

# 71 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/dwarf2.def"
enum dwarf_tag { DW_TAG_padding = 0x00
, DW_TAG_array_type = 0x01
, DW_TAG_class_type = 0x02
, DW_TAG_entry_point = 0x03
, DW_TAG_enumeration_type = 0x04
, DW_TAG_formal_parameter = 0x05
, DW_TAG_imported_declaration = 0x08
, DW_TAG_label = 0x0a
, DW_TAG_lexical_block = 0x0b
, DW_TAG_member = 0x0d
, DW_TAG_pointer_type = 0x0f
, DW_TAG_reference_type = 0x10
, DW_TAG_compile_unit = 0x11
, DW_TAG_string_type = 0x12
, DW_TAG_structure_type = 0x13
, DW_TAG_subroutine_type = 0x15
, DW_TAG_typedef = 0x16
, DW_TAG_union_type = 0x17
, DW_TAG_unspecified_parameters = 0x18
, DW_TAG_variant = 0x19
, DW_TAG_common_block = 0x1a
, DW_TAG_common_inclusion = 0x1b
, DW_TAG_inheritance = 0x1c
, DW_TAG_inlined_subroutine = 0x1d
, DW_TAG_module = 0x1e
, DW_TAG_ptr_to_member_type = 0x1f
, DW_TAG_set_type = 0x20
, DW_TAG_subrange_type = 0x21
, DW_TAG_with_stmt = 0x22
, DW_TAG_access_declaration = 0x23
, DW_TAG_base_type = 0x24
, DW_TAG_catch_block = 0x25
, DW_TAG_const_type = 0x26
, DW_TAG_constant = 0x27
, DW_TAG_enumerator = 0x28
, DW_TAG_file_type = 0x29
, DW_TAG_friend = 0x2a
, DW_TAG_namelist = 0x2b
, DW_TAG_namelist_item = 0x2c
, DW_TAG_packed_type = 0x2d
, DW_TAG_subprogram = 0x2e
, DW_TAG_template_type_param = 0x2f
, DW_TAG_template_value_param = 0x30
, DW_TAG_thrown_type = 0x31
, DW_TAG_try_block = 0x32
, DW_TAG_variant_part = 0x33
, DW_TAG_variable = 0x34
, DW_TAG_volatile_type = 0x35

, DW_TAG_dwarf_procedure = 0x36
, DW_TAG_restrict_type = 0x37
, DW_TAG_interface_type = 0x38
, DW_TAG_namespace = 0x39
, DW_TAG_imported_module = 0x3a
, DW_TAG_unspecified_type = 0x3b
, DW_TAG_partial_unit = 0x3c
, DW_TAG_imported_unit = 0x3d
, DW_TAG_condition = 0x3f
, DW_TAG_shared_type = 0x40

, DW_TAG_type_unit = 0x41
, DW_TAG_rvalue_reference_type = 0x42
, DW_TAG_template_alias = 0x43

, DW_TAG_coarray_type = 0x44
, DW_TAG_generic_subrange = 0x45
, DW_TAG_dynamic_type = 0x46
, DW_TAG_atomic_type = 0x47
, DW_TAG_call_site = 0x48
, DW_TAG_call_site_parameter = 0x49
, DW_TAG_skeleton_unit = 0x4a
, DW_TAG_immutable_type = 0x4b

, DW_TAG_lo_user = 0x4080
, DW_TAG_hi_user = 0xffff


, DW_TAG_MIPS_loop = 0x4081


, DW_TAG_HP_array_descriptor = 0x4090
, DW_TAG_HP_Bliss_field = 0x4091
, DW_TAG_HP_Bliss_field_set = 0x4092


, DW_TAG_format_label = 0x4101
, DW_TAG_function_template = 0x4102
, DW_TAG_class_template = 0x4103
, DW_TAG_GNU_BINCL = 0x4104
, DW_TAG_GNU_EINCL = 0x4105


, DW_TAG_GNU_template_template_param = 0x4106





, DW_TAG_GNU_template_parameter_pack = 0x4107
, DW_TAG_GNU_formal_parameter_pack = 0x4108




, DW_TAG_GNU_call_site = 0x4109
, DW_TAG_GNU_call_site_parameter = 0x410a

, DW_TAG_upc_shared_type = 0x8765
, DW_TAG_upc_strict_type = 0x8766
, DW_TAG_upc_relaxed_type = 0x8767

, DW_TAG_PGI_kanji_type = 0xA000
, DW_TAG_PGI_interface_block = 0xA020
};

enum dwarf_form { DW_FORM_addr = 0x01
, DW_FORM_block2 = 0x03
, DW_FORM_block4 = 0x04
, DW_FORM_data2 = 0x05
, DW_FORM_data4 = 0x06
, DW_FORM_data8 = 0x07
, DW_FORM_string = 0x08
, DW_FORM_block = 0x09
, DW_FORM_block1 = 0x0a
, DW_FORM_data1 = 0x0b
, DW_FORM_flag = 0x0c
, DW_FORM_sdata = 0x0d
, DW_FORM_strp = 0x0e
, DW_FORM_udata = 0x0f
, DW_FORM_ref_addr = 0x10
, DW_FORM_ref1 = 0x11
, DW_FORM_ref2 = 0x12
, DW_FORM_ref4 = 0x13
, DW_FORM_ref8 = 0x14
, DW_FORM_ref_udata = 0x15
, DW_FORM_indirect = 0x16

, DW_FORM_sec_offset = 0x17
, DW_FORM_exprloc = 0x18
, DW_FORM_flag_present = 0x19
, DW_FORM_ref_sig8 = 0x20

, DW_FORM_strx = 0x1a
, DW_FORM_addrx = 0x1b
, DW_FORM_ref_sup4 = 0x1c
, DW_FORM_strp_sup = 0x1d
, DW_FORM_data16 = 0x1e
, DW_FORM_line_strp = 0x1f
, DW_FORM_implicit_const = 0x21
, DW_FORM_loclistx = 0x22
, DW_FORM_rnglistx = 0x23
, DW_FORM_ref_sup8 = 0x24
, DW_FORM_strx1 = 0x25
, DW_FORM_strx2 = 0x26
, DW_FORM_strx3 = 0x27
, DW_FORM_strx4 = 0x28
, DW_FORM_addrx1 = 0x29
, DW_FORM_addrx2 = 0x2a
, DW_FORM_addrx3 = 0x2b
, DW_FORM_addrx4 = 0x2c

, DW_FORM_GNU_addr_index = 0x1f01
, DW_FORM_GNU_str_index = 0x1f02


, DW_FORM_GNU_ref_alt = 0x1f20
, DW_FORM_GNU_strp_alt = 0x1f21
};

enum dwarf_attribute { DW_AT_sibling = 0x01
, DW_AT_location = 0x02
, DW_AT_name = 0x03
, DW_AT_ordering = 0x09
, DW_AT_subscr_data = 0x0a
, DW_AT_byte_size = 0x0b
, DW_AT_bit_offset = 0x0c
, DW_AT_bit_size = 0x0d
, DW_AT_element_list = 0x0f
, DW_AT_stmt_list = 0x10
, DW_AT_low_pc = 0x11
, DW_AT_high_pc = 0x12
, DW_AT_language = 0x13
, DW_AT_member = 0x14
, DW_AT_discr = 0x15
, DW_AT_discr_value = 0x16
, DW_AT_visibility = 0x17
, DW_AT_import = 0x18
, DW_AT_string_length = 0x19
, DW_AT_common_reference = 0x1a
, DW_AT_comp_dir = 0x1b
, DW_AT_const_value = 0x1c
, DW_AT_containing_type = 0x1d
, DW_AT_default_value = 0x1e
, DW_AT_inline = 0x20
, DW_AT_is_optional = 0x21
, DW_AT_lower_bound = 0x22
, DW_AT_producer = 0x25
, DW_AT_prototyped = 0x27
, DW_AT_return_addr = 0x2a
, DW_AT_start_scope = 0x2c
, DW_AT_bit_stride = 0x2e
, DW_AT_upper_bound = 0x2f
, DW_AT_abstract_origin = 0x31
, DW_AT_accessibility = 0x32
, DW_AT_address_class = 0x33
, DW_AT_artificial = 0x34
, DW_AT_base_types = 0x35
, DW_AT_calling_convention = 0x36
, DW_AT_count = 0x37
, DW_AT_data_member_location = 0x38
, DW_AT_decl_column = 0x39
, DW_AT_decl_file = 0x3a
, DW_AT_decl_line = 0x3b
, DW_AT_declaration = 0x3c
, DW_AT_discr_list = 0x3d
, DW_AT_encoding = 0x3e
, DW_AT_external = 0x3f
, DW_AT_frame_base = 0x40
, DW_AT_friend = 0x41
, DW_AT_identifier_case = 0x42
, DW_AT_macro_info = 0x43
, DW_AT_namelist_items = 0x44
, DW_AT_priority = 0x45
, DW_AT_segment = 0x46
, DW_AT_specification = 0x47
, DW_AT_static_link = 0x48
, DW_AT_type = 0x49
, DW_AT_use_location = 0x4a
, DW_AT_variable_parameter = 0x4b
, DW_AT_virtuality = 0x4c
, DW_AT_vtable_elem_location = 0x4d

, DW_AT_allocated = 0x4e
, DW_AT_associated = 0x4f
, DW_AT_data_location = 0x50
, DW_AT_byte_stride = 0x51
, DW_AT_entry_pc = 0x52
, DW_AT_use_UTF8 = 0x53
, DW_AT_extension = 0x54
, DW_AT_ranges = 0x55
, DW_AT_trampoline = 0x56
, DW_AT_call_column = 0x57
, DW_AT_call_file = 0x58
, DW_AT_call_line = 0x59
, DW_AT_description = 0x5a
, DW_AT_binary_scale = 0x5b
, DW_AT_decimal_scale = 0x5c
, DW_AT_small = 0x5d
, DW_AT_decimal_sign = 0x5e
, DW_AT_digit_count = 0x5f
, DW_AT_picture_string = 0x60
, DW_AT_mutable = 0x61
, DW_AT_threads_scaled = 0x62
, DW_AT_explicit = 0x63
, DW_AT_object_pointer = 0x64
, DW_AT_endianity = 0x65
, DW_AT_elemental = 0x66
, DW_AT_pure = 0x67
, DW_AT_recursive = 0x68

, DW_AT_signature = 0x69
, DW_AT_main_subprogram = 0x6a
, DW_AT_data_bit_offset = 0x6b
, DW_AT_const_expr = 0x6c
, DW_AT_enum_class = 0x6d
, DW_AT_linkage_name = 0x6e

, DW_AT_string_length_bit_size = 0x6f
, DW_AT_string_length_byte_size = 0x70
, DW_AT_rank = 0x71
, DW_AT_str_offsets_base = 0x72
, DW_AT_addr_base = 0x73
, DW_AT_rnglists_base = 0x74
, DW_AT_dwo_name = 0x76
, DW_AT_reference = 0x77
, DW_AT_rvalue_reference = 0x78
, DW_AT_macros = 0x79
, DW_AT_call_all_calls = 0x7a
, DW_AT_call_all_source_calls = 0x7b
, DW_AT_call_all_tail_calls = 0x7c
, DW_AT_call_return_pc = 0x7d
, DW_AT_call_value = 0x7e
, DW_AT_call_origin = 0x7f
, DW_AT_call_parameter = 0x80
, DW_AT_call_pc = 0x81
, DW_AT_call_tail_call = 0x82
, DW_AT_call_target = 0x83
, DW_AT_call_target_clobbered = 0x84
, DW_AT_call_data_location = 0x85
, DW_AT_call_data_value = 0x86
, DW_AT_noreturn = 0x87
, DW_AT_alignment = 0x88
, DW_AT_export_symbols = 0x89
, DW_AT_deleted = 0x8a
, DW_AT_defaulted = 0x8b
, DW_AT_loclists_base = 0x8c

, DW_AT_lo_user = 0x2000
, DW_AT_hi_user = 0x3fff


, DW_AT_MIPS_fde = 0x2001
, DW_AT_MIPS_loop_begin = 0x2002
, DW_AT_MIPS_tail_loop_begin = 0x2003
, DW_AT_MIPS_epilog_begin = 0x2004
, DW_AT_MIPS_loop_unroll_factor = 0x2005
, DW_AT_MIPS_software_pipeline_depth = 0x2006
, DW_AT_MIPS_linkage_name = 0x2007
, DW_AT_MIPS_stride = 0x2008
, DW_AT_MIPS_abstract_name = 0x2009
, DW_AT_MIPS_clone_origin = 0x200a
, DW_AT_MIPS_has_inlines = 0x200b

, DW_AT_HP_block_index = 0x2000
, DW_AT_HP_unmodifiable = 0x2001
, DW_AT_HP_prologue = 0x2005
, DW_AT_HP_epilogue = 0x2008
, DW_AT_HP_actuals_stmt_list = 0x2010
, DW_AT_HP_proc_per_section = 0x2011
, DW_AT_HP_raw_data_ptr = 0x2012
, DW_AT_HP_pass_by_reference = 0x2013
, DW_AT_HP_opt_level = 0x2014
, DW_AT_HP_prof_version_id = 0x2015
, DW_AT_HP_opt_flags = 0x2016
, DW_AT_HP_cold_region_low_pc = 0x2017
, DW_AT_HP_cold_region_high_pc = 0x2018
, DW_AT_HP_all_variables_modifiable = 0x2019
, DW_AT_HP_linkage_name = 0x201a
, DW_AT_HP_prof_flags = 0x201b
, DW_AT_HP_unit_name = 0x201f
, DW_AT_HP_unit_size = 0x2020
, DW_AT_HP_widened_byte_size = 0x2021
, DW_AT_HP_definition_points = 0x2022
, DW_AT_HP_default_location = 0x2023
, DW_AT_HP_is_result_param = 0x2029


, DW_AT_sf_names = 0x2101
, DW_AT_src_info = 0x2102
, DW_AT_mac_info = 0x2103
, DW_AT_src_coords = 0x2104
, DW_AT_body_begin = 0x2105
, DW_AT_body_end = 0x2106
, DW_AT_GNU_vector = 0x2107


, DW_AT_GNU_guarded_by = 0x2108
, DW_AT_GNU_pt_guarded_by = 0x2109
, DW_AT_GNU_guarded = 0x210a
, DW_AT_GNU_pt_guarded = 0x210b
, DW_AT_GNU_locks_excluded = 0x210c
, DW_AT_GNU_exclusive_locks_required = 0x210d
, DW_AT_GNU_shared_locks_required = 0x210e


, DW_AT_GNU_odr_signature = 0x210f


, DW_AT_GNU_template_name = 0x2110


, DW_AT_GNU_call_site_value = 0x2111
, DW_AT_GNU_call_site_data_value = 0x2112
, DW_AT_GNU_call_site_target = 0x2113
, DW_AT_GNU_call_site_target_clobbered = 0x2114
, DW_AT_GNU_tail_call = 0x2115
, DW_AT_GNU_all_tail_call_sites = 0x2116
, DW_AT_GNU_all_call_sites = 0x2117
, DW_AT_GNU_all_source_call_sites = 0x2118

, DW_AT_GNU_macros = 0x2119

, DW_AT_GNU_deleted = 0x211a

, DW_AT_GNU_dwo_name = 0x2130
, DW_AT_GNU_dwo_id = 0x2131
, DW_AT_GNU_ranges_base = 0x2132
, DW_AT_GNU_addr_base = 0x2133
, DW_AT_GNU_pubnames = 0x2134
, DW_AT_GNU_pubtypes = 0x2135


, DW_AT_GNU_discriminator = 0x2136
, DW_AT_GNU_locviews = 0x2137
, DW_AT_GNU_entry_view = 0x2138

, DW_AT_VMS_rtnbeg_pd_address = 0x2201



, DW_AT_use_GNAT_descriptive_type = 0x2301
, DW_AT_GNAT_descriptive_type = 0x2302


, DW_AT_GNU_numerator = 0x2303
, DW_AT_GNU_denominator = 0x2304


, DW_AT_GNU_bias = 0x2305

, DW_AT_upc_threads_scaled = 0x3210

, DW_AT_PGI_lbase = 0x3a00
, DW_AT_PGI_soffset = 0x3a01
, DW_AT_PGI_lstride = 0x3a02

, DW_AT_APPLE_optimized = 0x3fe1
, DW_AT_APPLE_flags = 0x3fe2
, DW_AT_APPLE_isa = 0x3fe3
, DW_AT_APPLE_block = 0x3fe4
, DW_AT_APPLE_major_runtime_vers = 0x3fe5
, DW_AT_APPLE_runtime_class = 0x3fe6
, DW_AT_APPLE_omit_frame_ptr = 0x3fe7
, DW_AT_APPLE_property_name = 0x3fe8
, DW_AT_APPLE_property_getter = 0x3fe9
, DW_AT_APPLE_property_setter = 0x3fea
, DW_AT_APPLE_property_attribute = 0x3feb
, DW_AT_APPLE_objc_complete_type = 0x3fec
, DW_AT_APPLE_property = 0x3fed
};

enum dwarf_location_atom { DW_OP_addr = 0x03
, DW_OP_deref = 0x06
, DW_OP_const1u = 0x08
, DW_OP_const1s = 0x09
, DW_OP_const2u = 0x0a
, DW_OP_const2s = 0x0b
, DW_OP_const4u = 0x0c
, DW_OP_const4s = 0x0d
, DW_OP_const8u = 0x0e
, DW_OP_const8s = 0x0f
, DW_OP_constu = 0x10
, DW_OP_consts = 0x11
, DW_OP_dup = 0x12
, DW_OP_drop = 0x13
, DW_OP_over = 0x14
, DW_OP_pick = 0x15
, DW_OP_swap = 0x16
, DW_OP_rot = 0x17
, DW_OP_xderef = 0x18
, DW_OP_abs = 0x19
, DW_OP_and = 0x1a
, DW_OP_div = 0x1b
, DW_OP_minus = 0x1c
, DW_OP_mod = 0x1d
, DW_OP_mul = 0x1e
, DW_OP_neg = 0x1f
, DW_OP_not = 0x20
, DW_OP_or = 0x21
, DW_OP_plus = 0x22
, DW_OP_plus_uconst = 0x23
, DW_OP_shl = 0x24
, DW_OP_shr = 0x25
, DW_OP_shra = 0x26
, DW_OP_xor = 0x27
, DW_OP_bra = 0x28
, DW_OP_eq = 0x29
, DW_OP_ge = 0x2a
, DW_OP_gt = 0x2b
, DW_OP_le = 0x2c
, DW_OP_lt = 0x2d
, DW_OP_ne = 0x2e
, DW_OP_skip = 0x2f
, DW_OP_lit0 = 0x30
, DW_OP_lit1 = 0x31
, DW_OP_lit2 = 0x32
, DW_OP_lit3 = 0x33
, DW_OP_lit4 = 0x34
, DW_OP_lit5 = 0x35
, DW_OP_lit6 = 0x36
, DW_OP_lit7 = 0x37
, DW_OP_lit8 = 0x38
, DW_OP_lit9 = 0x39
, DW_OP_lit10 = 0x3a
, DW_OP_lit11 = 0x3b
, DW_OP_lit12 = 0x3c
, DW_OP_lit13 = 0x3d
, DW_OP_lit14 = 0x3e
, DW_OP_lit15 = 0x3f
, DW_OP_lit16 = 0x40
, DW_OP_lit17 = 0x41
, DW_OP_lit18 = 0x42
, DW_OP_lit19 = 0x43
, DW_OP_lit20 = 0x44
, DW_OP_lit21 = 0x45
, DW_OP_lit22 = 0x46
, DW_OP_lit23 = 0x47
, DW_OP_lit24 = 0x48
, DW_OP_lit25 = 0x49
, DW_OP_lit26 = 0x4a
, DW_OP_lit27 = 0x4b
, DW_OP_lit28 = 0x4c
, DW_OP_lit29 = 0x4d
, DW_OP_lit30 = 0x4e
, DW_OP_lit31 = 0x4f
, DW_OP_reg0 = 0x50
, DW_OP_reg1 = 0x51
, DW_OP_reg2 = 0x52
, DW_OP_reg3 = 0x53
, DW_OP_reg4 = 0x54
, DW_OP_reg5 = 0x55
, DW_OP_reg6 = 0x56
, DW_OP_reg7 = 0x57
, DW_OP_reg8 = 0x58
, DW_OP_reg9 = 0x59
, DW_OP_reg10 = 0x5a
, DW_OP_reg11 = 0x5b
, DW_OP_reg12 = 0x5c
, DW_OP_reg13 = 0x5d
, DW_OP_reg14 = 0x5e
, DW_OP_reg15 = 0x5f
, DW_OP_reg16 = 0x60
, DW_OP_reg17 = 0x61
, DW_OP_reg18 = 0x62
, DW_OP_reg19 = 0x63
, DW_OP_reg20 = 0x64
, DW_OP_reg21 = 0x65
, DW_OP_reg22 = 0x66
, DW_OP_reg23 = 0x67
, DW_OP_reg24 = 0x68
, DW_OP_reg25 = 0x69
, DW_OP_reg26 = 0x6a
, DW_OP_reg27 = 0x6b
, DW_OP_reg28 = 0x6c
, DW_OP_reg29 = 0x6d
, DW_OP_reg30 = 0x6e
, DW_OP_reg31 = 0x6f
, DW_OP_breg0 = 0x70
, DW_OP_breg1 = 0x71
, DW_OP_breg2 = 0x72
, DW_OP_breg3 = 0x73
, DW_OP_breg4 = 0x74
, DW_OP_breg5 = 0x75
, DW_OP_breg6 = 0x76
, DW_OP_breg7 = 0x77
, DW_OP_breg8 = 0x78
, DW_OP_breg9 = 0x79
, DW_OP_breg10 = 0x7a
, DW_OP_breg11 = 0x7b
, DW_OP_breg12 = 0x7c
, DW_OP_breg13 = 0x7d
, DW_OP_breg14 = 0x7e
, DW_OP_breg15 = 0x7f
, DW_OP_breg16 = 0x80
, DW_OP_breg17 = 0x81
, DW_OP_breg18 = 0x82
, DW_OP_breg19 = 0x83
, DW_OP_breg20 = 0x84
, DW_OP_breg21 = 0x85
, DW_OP_breg22 = 0x86
, DW_OP_breg23 = 0x87
, DW_OP_breg24 = 0x88
, DW_OP_breg25 = 0x89
, DW_OP_breg26 = 0x8a
, DW_OP_breg27 = 0x8b
, DW_OP_breg28 = 0x8c
, DW_OP_breg29 = 0x8d
, DW_OP_breg30 = 0x8e
, DW_OP_breg31 = 0x8f
, DW_OP_regx = 0x90
, DW_OP_fbreg = 0x91
, DW_OP_bregx = 0x92
, DW_OP_piece = 0x93
, DW_OP_deref_size = 0x94
, DW_OP_xderef_size = 0x95
, DW_OP_nop = 0x96

, DW_OP_push_object_address = 0x97
, DW_OP_call2 = 0x98
, DW_OP_call4 = 0x99
, DW_OP_call_ref = 0x9a
, DW_OP_form_tls_address = 0x9b
, DW_OP_call_frame_cfa = 0x9c
, DW_OP_bit_piece = 0x9d


, DW_OP_implicit_value = 0x9e
, DW_OP_stack_value = 0x9f


, DW_OP_implicit_pointer = 0xa0
, DW_OP_addrx = 0xa1
, DW_OP_constx = 0xa2
, DW_OP_entry_value = 0xa3
, DW_OP_const_type = 0xa4
, DW_OP_regval_type = 0xa5
, DW_OP_deref_type = 0xa6
, DW_OP_xderef_type = 0xa7
, DW_OP_convert = 0xa8
, DW_OP_reinterpret = 0xa9

, DW_OP_lo_user = 0xe0
, DW_OP_hi_user = 0xff


, DW_OP_GNU_push_tls_address = 0xe0

, DW_OP_GNU_uninit = 0xf0
, DW_OP_GNU_encoded_addr = 0xf1


, DW_OP_GNU_implicit_pointer = 0xf2


, DW_OP_GNU_entry_value = 0xf3


, DW_OP_GNU_const_type = 0xf4
, DW_OP_GNU_regval_type = 0xf5
, DW_OP_GNU_deref_type = 0xf6
, DW_OP_GNU_convert = 0xf7
, DW_OP_GNU_reinterpret = 0xf9

, DW_OP_GNU_parameter_ref = 0xfa

, DW_OP_GNU_addr_index = 0xfb
, DW_OP_GNU_const_index = 0xfc


, DW_OP_GNU_variable_value = 0xfd

, DW_OP_HP_unknown = 0xe0
, DW_OP_HP_is_value = 0xe1
, DW_OP_HP_fltconst4 = 0xe2
, DW_OP_HP_fltconst8 = 0xe3
, DW_OP_HP_mod_range = 0xe4
, DW_OP_HP_unmod_range = 0xe5
, DW_OP_HP_tls = 0xe6

, DW_OP_PGI_omp_thread_num = 0xf8





, DW_OP_AARCH64_operation = 0xea
};

enum dwarf_type { DW_ATE_void = 0x0
, DW_ATE_address = 0x1
, DW_ATE_boolean = 0x2
, DW_ATE_complex_float = 0x3
, DW_ATE_float = 0x4
, DW_ATE_signed = 0x5
, DW_ATE_signed_char = 0x6
, DW_ATE_unsigned = 0x7
, DW_ATE_unsigned_char = 0x8

, DW_ATE_imaginary_float = 0x9
, DW_ATE_packed_decimal = 0xa
, DW_ATE_numeric_string = 0xb
, DW_ATE_edited = 0xc
, DW_ATE_signed_fixed = 0xd
, DW_ATE_unsigned_fixed = 0xe
, DW_ATE_decimal_float = 0xf

, DW_ATE_UTF = 0x10

, DW_ATE_UCS = 0x11
, DW_ATE_ASCII = 0x12

, DW_ATE_lo_user = 0x80
, DW_ATE_hi_user = 0xff


, DW_ATE_HP_float80 = 0x80
, DW_ATE_HP_complex_float80 = 0x81
, DW_ATE_HP_float128 = 0x82
, DW_ATE_HP_complex_float128 = 0x83
, DW_ATE_HP_floathpintel = 0x84
, DW_ATE_HP_imaginary_float80 = 0x85
, DW_ATE_HP_imaginary_float128 = 0x86
, DW_ATE_HP_VAX_float = 0x88
, DW_ATE_HP_VAX_float_d = 0x89
, DW_ATE_HP_packed_decimal = 0x8a
, DW_ATE_HP_zoned_decimal = 0x8b
, DW_ATE_HP_edited = 0x8c
, DW_ATE_HP_signed_fixed = 0x8d
, DW_ATE_HP_unsigned_fixed = 0x8e
, DW_ATE_HP_VAX_complex_float = 0x8f
, DW_ATE_HP_VAX_complex_float_d = 0x90

};

enum dwarf_call_frame_info { DW_CFA_advance_loc = 0x40
, DW_CFA_offset = 0x80
, DW_CFA_restore = 0xc0
, DW_CFA_nop = 0x00
, DW_CFA_set_loc = 0x01
, DW_CFA_advance_loc1 = 0x02
, DW_CFA_advance_loc2 = 0x03
, DW_CFA_advance_loc4 = 0x04
, DW_CFA_offset_extended = 0x05
, DW_CFA_restore_extended = 0x06
, DW_CFA_undefined = 0x07
, DW_CFA_same_value = 0x08
, DW_CFA_register = 0x09
, DW_CFA_remember_state = 0x0a
, DW_CFA_restore_state = 0x0b
, DW_CFA_def_cfa = 0x0c
, DW_CFA_def_cfa_register = 0x0d
, DW_CFA_def_cfa_offset = 0x0e

, DW_CFA_def_cfa_expression = 0x0f
, DW_CFA_expression = 0x10
, DW_CFA_offset_extended_sf = 0x11
, DW_CFA_def_cfa_sf = 0x12
, DW_CFA_def_cfa_offset_sf = 0x13
, DW_CFA_val_offset = 0x14
, DW_CFA_val_offset_sf = 0x15
, DW_CFA_val_expression = 0x16

, DW_CFA_lo_user = 0x1c
, DW_CFA_hi_user = 0x3f


, DW_CFA_MIPS_advance_loc8 = 0x1d


, DW_CFA_GNU_window_save = 0x2d
, DW_CFA_AARCH64_negate_ra_state = 0x2d
, DW_CFA_GNU_args_size = 0x2e
, DW_CFA_GNU_negative_offset_extended = 0x2f

};


enum dwarf_name_index_attribute { DW_IDX_compile_unit = 1
, DW_IDX_type_unit = 2
, DW_IDX_die_offset = 3
, DW_IDX_parent = 4
, DW_IDX_type_hash = 5
, DW_IDX_lo_user = 0x2000
, DW_IDX_hi_user = 0x3fff
, DW_IDX_GNU_internal = 0x2000
, DW_IDX_GNU_external = 0x2001
};
# 82 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/dwarf2.h" 2
# 120 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/dwarf2.h"
enum dwarf_decimal_sign_encoding
  {

    DW_DS_unsigned = 0x01,
    DW_DS_leading_overpunch = 0x02,
    DW_DS_trailing_overpunch = 0x03,
    DW_DS_leading_separate = 0x04,
    DW_DS_trailing_separate = 0x05
  };


enum dwarf_endianity_encoding
  {

    DW_END_default = 0x00,
    DW_END_big = 0x01,
    DW_END_little = 0x02,

    DW_END_lo_user = 0x40,
    DW_END_hi_user = 0xff
  };


enum dwarf_array_dim_ordering
  {
    DW_ORD_row_major = 0,
    DW_ORD_col_major = 1
  };


enum dwarf_access_attribute
  {
    DW_ACCESS_public = 1,
    DW_ACCESS_protected = 2,
    DW_ACCESS_private = 3
  };


enum dwarf_visibility_attribute
  {
    DW_VIS_local = 1,
    DW_VIS_exported = 2,
    DW_VIS_qualified = 3
  };


enum dwarf_virtuality_attribute
  {
    DW_VIRTUALITY_none = 0,
    DW_VIRTUALITY_virtual = 1,
    DW_VIRTUALITY_pure_virtual = 2
  };


enum dwarf_id_case
  {
    DW_ID_case_sensitive = 0,
    DW_ID_up_case = 1,
    DW_ID_down_case = 2,
    DW_ID_case_insensitive = 3
  };


enum dwarf_calling_convention
  {
    DW_CC_normal = 0x1,
    DW_CC_program = 0x2,
    DW_CC_nocall = 0x3,


    DW_CC_pass_by_reference = 0x4,
    DW_CC_pass_by_value = 0x5,

    DW_CC_lo_user = 0x40,
    DW_CC_hi_user = 0xff,

    DW_CC_GNU_renesas_sh = 0x40,
    DW_CC_GNU_borland_fastcall_i386 = 0x41,







    DW_CC_GDB_IBM_OpenCL = 0xff
  };


enum dwarf_inline_attribute
  {
    DW_INL_not_inlined = 0,
    DW_INL_inlined = 1,
    DW_INL_declared_not_inlined = 2,
    DW_INL_declared_inlined = 3
  };


enum dwarf_discrim_list
  {
    DW_DSC_label = 0,
    DW_DSC_range = 1
  };


enum dwarf_line_number_ops
  {
    DW_LNS_extended_op = 0,
    DW_LNS_copy = 1,
    DW_LNS_advance_pc = 2,
    DW_LNS_advance_line = 3,
    DW_LNS_set_file = 4,
    DW_LNS_set_column = 5,
    DW_LNS_negate_stmt = 6,
    DW_LNS_set_basic_block = 7,
    DW_LNS_const_add_pc = 8,
    DW_LNS_fixed_advance_pc = 9,

    DW_LNS_set_prologue_end = 10,
    DW_LNS_set_epilogue_begin = 11,
    DW_LNS_set_isa = 12
  };


enum dwarf_line_number_x_ops
  {
    DW_LNE_end_sequence = 1,
    DW_LNE_set_address = 2,
    DW_LNE_define_file = 3,
    DW_LNE_set_discriminator = 4,

    DW_LNE_HP_negate_is_UV_update = 0x11,
    DW_LNE_HP_push_context = 0x12,
    DW_LNE_HP_pop_context = 0x13,
    DW_LNE_HP_set_file_line_column = 0x14,
    DW_LNE_HP_set_routine_name = 0x15,
    DW_LNE_HP_set_sequence = 0x16,
    DW_LNE_HP_negate_post_semantics = 0x17,
    DW_LNE_HP_negate_function_exit = 0x18,
    DW_LNE_HP_negate_front_end_logical = 0x19,
    DW_LNE_HP_define_proc = 0x20,
    DW_LNE_HP_source_file_correlation = 0x80,

    DW_LNE_lo_user = 0x80,
    DW_LNE_hi_user = 0xff
  };


enum dwarf_line_number_hp_sfc_ops
  {
    DW_LNE_HP_SFC_formfeed = 1,
    DW_LNE_HP_SFC_set_listing_line = 2,
    DW_LNE_HP_SFC_associate = 3
  };



enum dwarf_line_number_content_type
  {
    DW_LNCT_path = 0x1,
    DW_LNCT_directory_index = 0x2,
    DW_LNCT_timestamp = 0x3,
    DW_LNCT_size = 0x4,
    DW_LNCT_MD5 = 0x5,
    DW_LNCT_lo_user = 0x2000,
    DW_LNCT_hi_user = 0x3fff
  };


enum dwarf_location_list_entry_type
  {
    DW_LLE_end_of_list = 0x00,
    DW_LLE_base_addressx = 0x01,
    DW_LLE_startx_endx = 0x02,
    DW_LLE_startx_length = 0x03,
    DW_LLE_offset_pair = 0x04,
    DW_LLE_default_location = 0x05,
    DW_LLE_base_address = 0x06,
    DW_LLE_start_end = 0x07,
    DW_LLE_start_length = 0x08,






    DW_LLE_GNU_view_pair = 0x09,




    DW_LLE_GNU_end_of_list_entry = 0x00,
    DW_LLE_GNU_base_address_selection_entry = 0x01,
    DW_LLE_GNU_start_end_entry = 0x02,
    DW_LLE_GNU_start_length_entry = 0x03
  };
# 329 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/dwarf2.h"
enum dwarf_source_language
  {
    DW_LANG_C89 = 0x0001,
    DW_LANG_C = 0x0002,
    DW_LANG_Ada83 = 0x0003,
    DW_LANG_C_plus_plus = 0x0004,
    DW_LANG_Cobol74 = 0x0005,
    DW_LANG_Cobol85 = 0x0006,
    DW_LANG_Fortran77 = 0x0007,
    DW_LANG_Fortran90 = 0x0008,
    DW_LANG_Pascal83 = 0x0009,
    DW_LANG_Modula2 = 0x000a,

    DW_LANG_Java = 0x000b,
    DW_LANG_C99 = 0x000c,
    DW_LANG_Ada95 = 0x000d,
    DW_LANG_Fortran95 = 0x000e,
    DW_LANG_PLI = 0x000f,
    DW_LANG_ObjC = 0x0010,
    DW_LANG_ObjC_plus_plus = 0x0011,
    DW_LANG_UPC = 0x0012,
    DW_LANG_D = 0x0013,

    DW_LANG_Python = 0x0014,

    DW_LANG_OpenCL = 0x0015,
    DW_LANG_Go = 0x0016,
    DW_LANG_Modula3 = 0x0017,
    DW_LANG_Haskell = 0x0018,
    DW_LANG_C_plus_plus_03 = 0x0019,
    DW_LANG_C_plus_plus_11 = 0x001a,
    DW_LANG_OCaml = 0x001b,
    DW_LANG_Rust = 0x001c,
    DW_LANG_C11 = 0x001d,
    DW_LANG_Swift = 0x001e,
    DW_LANG_Julia = 0x001f,
    DW_LANG_Dylan = 0x0020,
    DW_LANG_C_plus_plus_14 = 0x0021,
    DW_LANG_Fortran03 = 0x0022,
    DW_LANG_Fortran08 = 0x0023,
    DW_LANG_RenderScript = 0x0024,

    DW_LANG_lo_user = 0x8000,
    DW_LANG_hi_user = 0xffff,


    DW_LANG_Mips_Assembler = 0x8001,

    DW_LANG_Upc = 0x8765,

    DW_LANG_HP_Bliss = 0x8003,
    DW_LANG_HP_Basic91 = 0x8004,
    DW_LANG_HP_Pascal91 = 0x8005,
    DW_LANG_HP_IMacro = 0x8006,
    DW_LANG_HP_Assembler = 0x8007,


    DW_LANG_Rust_old = 0x9000
  };


enum dwarf_macinfo_record_type
  {
    DW_MACINFO_define = 1,
    DW_MACINFO_undef = 2,
    DW_MACINFO_start_file = 3,
    DW_MACINFO_end_file = 4,
    DW_MACINFO_vendor_ext = 255
  };


enum dwarf_defaulted_attribute
  {
    DW_DEFAULTED_no = 0x00,
    DW_DEFAULTED_in_class = 0x01,
    DW_DEFAULTED_out_of_class = 0x02
  };


enum dwarf_macro_record_type
  {
    DW_MACRO_define = 0x01,
    DW_MACRO_undef = 0x02,
    DW_MACRO_start_file = 0x03,
    DW_MACRO_end_file = 0x04,
    DW_MACRO_define_strp = 0x05,
    DW_MACRO_undef_strp = 0x06,
    DW_MACRO_import = 0x07,
    DW_MACRO_define_sup = 0x08,
    DW_MACRO_undef_sup = 0x09,
    DW_MACRO_import_sup = 0x0a,
    DW_MACRO_define_strx = 0x0b,
    DW_MACRO_undef_strx = 0x0c,
    DW_MACRO_lo_user = 0xe0,
    DW_MACRO_hi_user = 0xff,


    DW_MACRO_GNU_define = 0x01,
    DW_MACRO_GNU_undef = 0x02,
    DW_MACRO_GNU_start_file = 0x03,
    DW_MACRO_GNU_end_file = 0x04,
    DW_MACRO_GNU_define_indirect = 0x05,
    DW_MACRO_GNU_undef_indirect = 0x06,
    DW_MACRO_GNU_transparent_include = 0x07,


    DW_MACRO_GNU_define_indirect_alt = 0x08,
    DW_MACRO_GNU_undef_indirect_alt = 0x09,
    DW_MACRO_GNU_transparent_include_alt = 0x0a,
    DW_MACRO_GNU_lo_user = 0xe0,
    DW_MACRO_GNU_hi_user = 0xff
  };


enum dwarf_range_list_entry
  {
    DW_RLE_end_of_list = 0x00,
    DW_RLE_base_addressx = 0x01,
    DW_RLE_startx_endx = 0x02,
    DW_RLE_startx_length = 0x03,
    DW_RLE_offset_pair = 0x04,
    DW_RLE_base_address = 0x05,
    DW_RLE_start_end = 0x06,
    DW_RLE_start_length = 0x07
  };


enum dwarf_unit_type
  {
    DW_UT_compile = 0x01,
    DW_UT_type = 0x02,
    DW_UT_partial = 0x03,
    DW_UT_skeleton = 0x04,
    DW_UT_split_compile = 0x05,
    DW_UT_split_type = 0x06,
    DW_UT_lo_user = 0x80,
    DW_UT_hi_user = 0xff
  };
# 493 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/dwarf2.h"
enum dwarf_sect
  {
    DW_SECT_INFO = 1,
    DW_SECT_TYPES = 2,
    DW_SECT_ABBREV = 3,
    DW_SECT_LINE = 4,
    DW_SECT_LOC = 5,
    DW_SECT_STR_OFFSETS = 6,
    DW_SECT_MACINFO = 7,
    DW_SECT_MACRO = 8,
    DW_SECT_MAX = 8
  };







extern const char *get_DW_TAG_name (unsigned int tag);



extern const char *get_DW_AT_name (unsigned int attr);



extern const char *get_DW_FORM_name (unsigned int form);



extern const char *get_DW_OP_name (unsigned int op);



extern const char *get_DW_ATE_name (unsigned int enc);



extern const char *get_DW_CFA_name (unsigned int opc);



extern const char *get_DW_IDX_name (unsigned int idx);
# 41 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 2
# 1 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/filenames.h" 1
# 29 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/filenames.h"
# 1 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/hashtab.h" 1
# 39 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/hashtab.h"
# 1 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/ansidecl.h" 1
# 40 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/hashtab.h" 2


typedef unsigned int hashval_t;




typedef hashval_t (*htab_hash) (const void *);






typedef int (*htab_eq) (const void *, const void *);



typedef void (*htab_del) (void *);





typedef int (*htab_trav) (void **, void *);





typedef void *(*htab_alloc) (size_t, size_t);


typedef void (*htab_free) (void *);



typedef void *(*htab_alloc_with_arg) (void *, size_t, size_t);
typedef void (*htab_free_with_arg) (void *, void *);
# 95 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/hashtab.h"
struct htab {

  htab_hash hash_f;


  htab_eq eq_f;


  htab_del del_f;


  void **entries;


  size_t size;


  size_t n_elements;


  size_t n_deleted;



  unsigned int searches;



  unsigned int collisions;


  htab_alloc alloc_f;
  htab_free free_f;


  void *alloc_arg;
  htab_alloc_with_arg alloc_with_arg_f;
  htab_free_with_arg free_with_arg_f;



  unsigned int size_prime_index;
};

typedef struct htab *htab_t;


enum insert_option {NO_INSERT, INSERT};



extern htab_t htab_create_alloc (size_t, htab_hash,
                                    htab_eq, htab_del,
                                    htab_alloc, htab_free);

extern htab_t htab_create_alloc_ex (size_t, htab_hash,
                                      htab_eq, htab_del,
                                      void *, htab_alloc_with_arg,
                                      htab_free_with_arg);

extern htab_t htab_create_typed_alloc (size_t, htab_hash, htab_eq, htab_del,
     htab_alloc, htab_alloc, htab_free);


extern htab_t htab_create (size_t, htab_hash, htab_eq, htab_del);
extern htab_t htab_try_create (size_t, htab_hash, htab_eq, htab_del);

extern void htab_set_functions_ex (htab_t, htab_hash,
                                       htab_eq, htab_del,
                                       void *, htab_alloc_with_arg,
                                       htab_free_with_arg);

extern void htab_delete (htab_t);
extern void htab_empty (htab_t);

extern void * htab_find (htab_t, const void *);
extern void ** htab_find_slot (htab_t, const void *, enum insert_option);
extern void * htab_find_with_hash (htab_t, const void *, hashval_t);
extern void ** htab_find_slot_with_hash (htab_t, const void *,
       hashval_t, enum insert_option);
extern void htab_clear_slot (htab_t, void **);
extern void htab_remove_elt (htab_t, const void *);
extern void htab_remove_elt_with_hash (htab_t, const void *, hashval_t);

extern void htab_traverse (htab_t, htab_trav, void *);
extern void htab_traverse_noresize (htab_t, htab_trav, void *);

extern size_t htab_size (htab_t);
extern size_t htab_elements (htab_t);
extern double htab_collisions (htab_t);


extern htab_hash htab_hash_pointer;


extern htab_eq htab_eq_pointer;


extern hashval_t htab_hash_string (const void *);


extern hashval_t iterative_hash (const void *, size_t, hashval_t);
# 30 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/filenames.h" 2
# 84 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/../include/filenames.h"
extern int filename_cmp (const char *s1, const char *s2);


extern int filename_ncmp (const char *s1, const char *s2,
     size_t n);

extern hashval_t filename_hash (const void *s);

extern int filename_eq (const void *s1, const void *s2);

extern int canonical_filename_eq (const char *a, const char *b);
# 42 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 2

# 1 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h" 1
# 36 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4

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
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stdint.h" 2 3 4
# 44 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/backtrace.h" 2
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
# 44 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 2
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
# 45 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 2
# 67 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
struct dwarf_buf
{

  const char *name;

  const unsigned char *start;

  const unsigned char *buf;

  size_t left;

  int is_bigendian;

  backtrace_error_callback error_callback;

  void *data;

  int reported_underflow;
};



struct attr
{

  enum dwarf_attribute name;

  enum dwarf_form form;

  int64_t val;
};



struct abbrev
{

  uint64_t code;

  enum dwarf_tag tag;

  int has_children;

  size_t num_attrs;

  struct attr *attrs;
};
# 122 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
struct abbrevs
{

  size_t num_abbrevs;

  struct abbrev *abbrevs;
};



enum attr_val_encoding
{

  ATTR_VAL_NONE,

  ATTR_VAL_ADDRESS,


  ATTR_VAL_ADDRESS_INDEX,

  ATTR_VAL_UINT,

  ATTR_VAL_SINT,

  ATTR_VAL_STRING,

  ATTR_VAL_STRING_INDEX,

  ATTR_VAL_REF_UNIT,

  ATTR_VAL_REF_INFO,

  ATTR_VAL_REF_ALT_INFO,

  ATTR_VAL_REF_SECTION,

  ATTR_VAL_REF_TYPE,

  ATTR_VAL_RNGLISTS_INDEX,

  ATTR_VAL_BLOCK,

  ATTR_VAL_EXPR,
};



struct attr_val
{

  enum attr_val_encoding encoding;
  union
  {

    uint64_t uint;

    int64_t sint;

    const char *string;

  } u;
};



struct line_header
{

  int version;

  int addrsize;

  unsigned int min_insn_len;

  unsigned int max_ops_per_insn;

  int line_base;

  unsigned int line_range;

  unsigned int opcode_base;

  const unsigned char *opcode_lengths;

  size_t dirs_count;

  const char **dirs;

  size_t filenames_count;

  const char **filenames;
};



struct line_header_format
{
  int lnct;
  enum dwarf_form form;
};






struct line
{

  uintptr_t pc;


  const char *filename;

  int lineno;



  int idx;
};




struct line_vector
{

  struct backtrace_vector vec;

  size_t count;
};



struct function
{

  const char *name;


  const char *caller_filename;


  int caller_lineno;

  struct function_addrs *function_addrs;
  size_t function_addrs_count;
};




struct function_addrs
{

  uint64_t low;
  uint64_t high;

  struct function *function;
};



struct function_vector
{

  struct backtrace_vector vec;

  size_t count;
};




struct unit
{

  const unsigned char *unit_data;

  size_t unit_data_len;


  size_t unit_data_offset;


  size_t low_offset;


  size_t high_offset;

  int version;

  int is_dwarf64;

  int addrsize;

  off_t lineoff;

  uint64_t str_offsets_base;

  uint64_t addr_base;

  uint64_t rnglists_base;

  const char *filename;

  const char *comp_dir;

  const char *abs_filename;

  struct abbrevs abbrevs;
# 342 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
  struct line *lines;

  size_t lines_count;

  struct function_addrs *function_addrs;
  size_t function_addrs_count;
};







struct unit_addrs
{

  uint64_t low;
  uint64_t high;

  struct unit *u;
};



struct unit_addrs_vector
{

  struct backtrace_vector vec;

  size_t count;
};



struct unit_vector
{
  struct backtrace_vector vec;
  size_t count;
};



struct dwarf_data
{

  struct dwarf_data *next;

  struct dwarf_data *altlink;

  uintptr_t base_address;

  struct unit_addrs *addrs;

  size_t addrs_count;

  struct unit **units;

  size_t units_count;

  struct dwarf_sections dwarf_sections;

  int is_bigendian;


  struct function_vector fvec;
};



static void
dwarf_buf_error (struct dwarf_buf *buf, const char *msg)
{
  char b[200];

  snprintf (b, sizeof b, "%s in %s at %d",
     msg, buf->name, (int) (buf->buf - buf->start));
  buf->error_callback (buf->data, b, 0);
}




static int
require (struct dwarf_buf *buf, size_t count)
{
  if (buf->left >= count)
    return 1;

  if (!buf->reported_underflow)
    {
      dwarf_buf_error (buf, "DWARF underflow");
      buf->reported_underflow = 1;
    }

  return 0;
}




static int
advance (struct dwarf_buf *buf, size_t count)
{
  if (!require (buf, count))
    return 0;
  buf->buf += count;
  buf->left -= count;
  return 1;
}



static const char *
read_string (struct dwarf_buf *buf)
{
  const char *p = (const char *)buf->buf;
  size_t len = strnlen (p, buf->left);




  size_t count = len + 1;

  if (!advance (buf, count))
    return 
# 467 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 467 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              ;

  return p;
}



static unsigned char
read_byte (struct dwarf_buf *buf)
{
  const unsigned char *p = buf->buf;

  if (!advance (buf, 1))
    return 0;
  return p[0];
}



static signed char
read_sbyte (struct dwarf_buf *buf)
{
  const unsigned char *p = buf->buf;

  if (!advance (buf, 1))
    return 0;
  return (*p ^ 0x80) - 0x80;
}



static uint16_t
read_uint16 (struct dwarf_buf *buf)
{
  const unsigned char *p = buf->buf;

  if (!advance (buf, 2))
    return 0;
  if (buf->is_bigendian)
    return ((uint16_t) p[0] << 8) | (uint16_t) p[1];
  else
    return ((uint16_t) p[1] << 8) | (uint16_t) p[0];
}



static uint32_t
read_uint24 (struct dwarf_buf *buf)
{
  const unsigned char *p = buf->buf;

  if (!advance (buf, 3))
    return 0;
  if (buf->is_bigendian)
    return (((uint32_t) p[0] << 16) | ((uint32_t) p[1] << 8)
     | (uint32_t) p[2]);
  else
    return (((uint32_t) p[2] << 16) | ((uint32_t) p[1] << 8)
     | (uint32_t) p[0]);
}



static uint32_t
read_uint32 (struct dwarf_buf *buf)
{
  const unsigned char *p = buf->buf;

  if (!advance (buf, 4))
    return 0;
  if (buf->is_bigendian)
    return (((uint32_t) p[0] << 24) | ((uint32_t) p[1] << 16)
     | ((uint32_t) p[2] << 8) | (uint32_t) p[3]);
  else
    return (((uint32_t) p[3] << 24) | ((uint32_t) p[2] << 16)
     | ((uint32_t) p[1] << 8) | (uint32_t) p[0]);
}



static uint64_t
read_uint64 (struct dwarf_buf *buf)
{
  const unsigned char *p = buf->buf;

  if (!advance (buf, 8))
    return 0;
  if (buf->is_bigendian)
    return (((uint64_t) p[0] << 56) | ((uint64_t) p[1] << 48)
     | ((uint64_t) p[2] << 40) | ((uint64_t) p[3] << 32)
     | ((uint64_t) p[4] << 24) | ((uint64_t) p[5] << 16)
     | ((uint64_t) p[6] << 8) | (uint64_t) p[7]);
  else
    return (((uint64_t) p[7] << 56) | ((uint64_t) p[6] << 48)
     | ((uint64_t) p[5] << 40) | ((uint64_t) p[4] << 32)
     | ((uint64_t) p[3] << 24) | ((uint64_t) p[2] << 16)
     | ((uint64_t) p[1] << 8) | (uint64_t) p[0]);
}




static uint64_t
read_offset (struct dwarf_buf *buf, int is_dwarf64)
{
  if (is_dwarf64)
    return read_uint64 (buf);
  else
    return read_uint32 (buf);
}




static uint64_t
read_address (struct dwarf_buf *buf, int addrsize)
{
  switch (addrsize)
    {
    case 1:
      return read_byte (buf);
    case 2:
      return read_uint16 (buf);
    case 4:
      return read_uint32 (buf);
    case 8:
      return read_uint64 (buf);
    default:
      dwarf_buf_error (buf, "unrecognized address size");
      return 0;
    }
}




static int
is_highest_address (uint64_t address, int addrsize)
{
  switch (addrsize)
    {
    case 1:
      return address == (unsigned char) -1;
    case 2:
      return address == (uint16_t) -1;
    case 4:
      return address == (uint32_t) -1;
    case 8:
      return address == (uint64_t) -1;
    default:
      return 0;
    }
}



static uint64_t
read_uleb128 (struct dwarf_buf *buf)
{
  uint64_t ret;
  unsigned int shift;
  int overflow;
  unsigned char b;

  ret = 0;
  shift = 0;
  overflow = 0;
  do
    {
      const unsigned char *p;

      p = buf->buf;
      if (!advance (buf, 1))
 return 0;
      b = *p;
      if (shift < 64)
 ret |= ((uint64_t) (b & 0x7f)) << shift;
      else if (!overflow)
 {
   dwarf_buf_error (buf, "LEB128 overflows uint64_t");
   overflow = 1;
 }
      shift += 7;
    }
  while ((b & 0x80) != 0);

  return ret;
}



static int64_t
read_sleb128 (struct dwarf_buf *buf)
{
  uint64_t val;
  unsigned int shift;
  int overflow;
  unsigned char b;

  val = 0;
  shift = 0;
  overflow = 0;
  do
    {
      const unsigned char *p;

      p = buf->buf;
      if (!advance (buf, 1))
 return 0;
      b = *p;
      if (shift < 64)
 val |= ((uint64_t) (b & 0x7f)) << shift;
      else if (!overflow)
 {
   dwarf_buf_error (buf, "signed LEB128 overflows uint64_t");
   overflow = 1;
 }
      shift += 7;
    }
  while ((b & 0x80) != 0);

  if ((b & 0x40) != 0 && shift < 64)
    val |= ((uint64_t) -1) << shift;

  return (int64_t) val;
}



static size_t
leb128_len (const unsigned char *p)
{
  size_t ret;

  ret = 1;
  while ((*p & 0x80) != 0)
    {
      ++p;
      ++ret;
    }
  return ret;
}



static uint64_t
read_initial_length (struct dwarf_buf *buf, int *is_dwarf64)
{
  uint64_t len;

  len = read_uint32 (buf);
  if (len == 0xffffffff)
    {
      len = read_uint64 (buf);
      *is_dwarf64 = 1;
    }
  else
    *is_dwarf64 = 0;

  return len;
}



static void
free_abbrevs (struct backtrace_state *state, struct abbrevs *abbrevs,
       backtrace_error_callback error_callback, void *data)
{
  size_t i;

  for (i = 0; i < abbrevs->num_abbrevs; ++i)
    backtrace_free (state, abbrevs->abbrevs[i].attrs,
      abbrevs->abbrevs[i].num_attrs * sizeof (struct attr),
      error_callback, data);
  backtrace_free (state, abbrevs->abbrevs,
    abbrevs->num_abbrevs * sizeof (struct abbrev),
    error_callback, data);
  abbrevs->num_abbrevs = 0;
  abbrevs->abbrevs = 
# 745 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                    ((void *)0)
# 745 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                        ;
}






static int
read_attribute (enum dwarf_form form, uint64_t implicit_val,
  struct dwarf_buf *buf, int is_dwarf64, int version,
  int addrsize, const struct dwarf_sections *dwarf_sections,
  struct dwarf_data *altlink, struct attr_val *val)
{




  memset (val, 0, sizeof *val);

  switch (form)
    {
    case DW_FORM_addr:
      val->encoding = ATTR_VAL_ADDRESS;
      val->u.uint = read_address (buf, addrsize);
      return 1;
    case DW_FORM_block2:
      val->encoding = ATTR_VAL_BLOCK;
      return advance (buf, read_uint16 (buf));
    case DW_FORM_block4:
      val->encoding = ATTR_VAL_BLOCK;
      return advance (buf, read_uint32 (buf));
    case DW_FORM_data2:
      val->encoding = ATTR_VAL_UINT;
      val->u.uint = read_uint16 (buf);
      return 1;
    case DW_FORM_data4:
      val->encoding = ATTR_VAL_UINT;
      val->u.uint = read_uint32 (buf);
      return 1;
    case DW_FORM_data8:
      val->encoding = ATTR_VAL_UINT;
      val->u.uint = read_uint64 (buf);
      return 1;
    case DW_FORM_data16:
      val->encoding = ATTR_VAL_BLOCK;
      return advance (buf, 16);
    case DW_FORM_string:
      val->encoding = ATTR_VAL_STRING;
      val->u.string = read_string (buf);
      return val->u.string == 
# 795 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                             ((void *)0) 
# 795 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                  ? 0 : 1;
    case DW_FORM_block:
      val->encoding = ATTR_VAL_BLOCK;
      return advance (buf, read_uleb128 (buf));
    case DW_FORM_block1:
      val->encoding = ATTR_VAL_BLOCK;
      return advance (buf, read_byte (buf));
    case DW_FORM_data1:
      val->encoding = ATTR_VAL_UINT;
      val->u.uint = read_byte (buf);
      return 1;
    case DW_FORM_flag:
      val->encoding = ATTR_VAL_UINT;
      val->u.uint = read_byte (buf);
      return 1;
    case DW_FORM_sdata:
      val->encoding = ATTR_VAL_SINT;
      val->u.sint = read_sleb128 (buf);
      return 1;
    case DW_FORM_strp:
      {
 uint64_t offset;

 offset = read_offset (buf, is_dwarf64);
 if (offset >= dwarf_sections->size[DEBUG_STR])
   {
     dwarf_buf_error (buf, "DW_FORM_strp out of range");
     return 0;
   }
 val->encoding = ATTR_VAL_STRING;
 val->u.string =
   (const char *) dwarf_sections->data[DEBUG_STR] + offset;
 return 1;
      }
    case DW_FORM_line_strp:
      {
 uint64_t offset;

 offset = read_offset (buf, is_dwarf64);
 if (offset >= dwarf_sections->size[DEBUG_LINE_STR])
   {
     dwarf_buf_error (buf, "DW_FORM_line_strp out of range");
     return 0;
   }
 val->encoding = ATTR_VAL_STRING;
 val->u.string =
   (const char *) dwarf_sections->data[DEBUG_LINE_STR] + offset;
 return 1;
      }
    case DW_FORM_udata:
      val->encoding = ATTR_VAL_UINT;
      val->u.uint = read_uleb128 (buf);
      return 1;
    case DW_FORM_ref_addr:
      val->encoding = ATTR_VAL_REF_INFO;
      if (version == 2)
 val->u.uint = read_address (buf, addrsize);
      else
 val->u.uint = read_offset (buf, is_dwarf64);
      return 1;
    case DW_FORM_ref1:
      val->encoding = ATTR_VAL_REF_UNIT;
      val->u.uint = read_byte (buf);
      return 1;
    case DW_FORM_ref2:
      val->encoding = ATTR_VAL_REF_UNIT;
      val->u.uint = read_uint16 (buf);
      return 1;
    case DW_FORM_ref4:
      val->encoding = ATTR_VAL_REF_UNIT;
      val->u.uint = read_uint32 (buf);
      return 1;
    case DW_FORM_ref8:
      val->encoding = ATTR_VAL_REF_UNIT;
      val->u.uint = read_uint64 (buf);
      return 1;
    case DW_FORM_ref_udata:
      val->encoding = ATTR_VAL_REF_UNIT;
      val->u.uint = read_uleb128 (buf);
      return 1;
    case DW_FORM_indirect:
      {
 uint64_t form;

 form = read_uleb128 (buf);
 if (form == DW_FORM_implicit_const)
   {
     dwarf_buf_error (buf,
        "DW_FORM_indirect to DW_FORM_implicit_const");
     return 0;
   }
 return read_attribute ((enum dwarf_form) form, 0, buf, is_dwarf64,
          version, addrsize, dwarf_sections, altlink,
          val);
      }
    case DW_FORM_sec_offset:
      val->encoding = ATTR_VAL_REF_SECTION;
      val->u.uint = read_offset (buf, is_dwarf64);
      return 1;
    case DW_FORM_exprloc:
      val->encoding = ATTR_VAL_EXPR;
      return advance (buf, read_uleb128 (buf));
    case DW_FORM_flag_present:
      val->encoding = ATTR_VAL_UINT;
      val->u.uint = 1;
      return 1;
    case DW_FORM_ref_sig8:
      val->encoding = ATTR_VAL_REF_TYPE;
      val->u.uint = read_uint64 (buf);
      return 1;
    case DW_FORM_strx: case DW_FORM_strx1: case DW_FORM_strx2:
    case DW_FORM_strx3: case DW_FORM_strx4:
      {
 uint64_t offset;

 switch (form)
   {
   case DW_FORM_strx:
     offset = read_uleb128 (buf);
     break;
   case DW_FORM_strx1:
     offset = read_byte (buf);
     break;
   case DW_FORM_strx2:
     offset = read_uint16 (buf);
     break;
   case DW_FORM_strx3:
     offset = read_uint24 (buf);
     break;
   case DW_FORM_strx4:
     offset = read_uint32 (buf);
     break;
   default:

     return 0;
   }
 val->encoding = ATTR_VAL_STRING_INDEX;
 val->u.uint = offset;
 return 1;
      }
    case DW_FORM_addrx: case DW_FORM_addrx1: case DW_FORM_addrx2:
    case DW_FORM_addrx3: case DW_FORM_addrx4:
      {
 uint64_t offset;

 switch (form)
   {
   case DW_FORM_addrx:
     offset = read_uleb128 (buf);
     break;
   case DW_FORM_addrx1:
     offset = read_byte (buf);
     break;
   case DW_FORM_addrx2:
     offset = read_uint16 (buf);
     break;
   case DW_FORM_addrx3:
     offset = read_uint24 (buf);
     break;
   case DW_FORM_addrx4:
     offset = read_uint32 (buf);
     break;
   default:

     return 0;
   }
 val->encoding = ATTR_VAL_ADDRESS_INDEX;
 val->u.uint = offset;
 return 1;
      }
    case DW_FORM_ref_sup4:
      val->encoding = ATTR_VAL_REF_SECTION;
      val->u.uint = read_uint32 (buf);
      return 1;
    case DW_FORM_ref_sup8:
      val->encoding = ATTR_VAL_REF_SECTION;
      val->u.uint = read_uint64 (buf);
      return 1;
    case DW_FORM_implicit_const:
      val->encoding = ATTR_VAL_UINT;
      val->u.uint = implicit_val;
      return 1;
    case DW_FORM_loclistx:


      val->encoding = ATTR_VAL_REF_SECTION;
      val->u.uint = read_uleb128 (buf);
      return 1;
    case DW_FORM_rnglistx:
      val->encoding = ATTR_VAL_RNGLISTS_INDEX;
      val->u.uint = read_uleb128 (buf);
      return 1;
    case DW_FORM_GNU_addr_index:
      val->encoding = ATTR_VAL_REF_SECTION;
      val->u.uint = read_uleb128 (buf);
      return 1;
    case DW_FORM_GNU_str_index:
      val->encoding = ATTR_VAL_REF_SECTION;
      val->u.uint = read_uleb128 (buf);
      return 1;
    case DW_FORM_GNU_ref_alt:
      val->u.uint = read_offset (buf, is_dwarf64);
      if (altlink == 
# 997 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                    ((void *)0)
# 997 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                        )
 {
   val->encoding = ATTR_VAL_NONE;
   return 1;
 }
      val->encoding = ATTR_VAL_REF_ALT_INFO;
      return 1;
    case DW_FORM_strp_sup: case DW_FORM_GNU_strp_alt:
      {
 uint64_t offset;

 offset = read_offset (buf, is_dwarf64);
 if (altlink == 
# 1009 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
               ((void *)0)
# 1009 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                   )
   {
     val->encoding = ATTR_VAL_NONE;
     return 1;
   }
 if (offset >= altlink->dwarf_sections.size[DEBUG_STR])
   {
     dwarf_buf_error (buf, "DW_FORM_strp_sup out of range");
     return 0;
   }
 val->encoding = ATTR_VAL_STRING;
 val->u.string =
   (const char *) altlink->dwarf_sections.data[DEBUG_STR] + offset;
 return 1;
      }
    default:
      dwarf_buf_error (buf, "unrecognized DWARF form");
      return 0;
    }
}







static int
resolve_string (const struct dwarf_sections *dwarf_sections, int is_dwarf64,
  int is_bigendian, uint64_t str_offsets_base,
  const struct attr_val *val,
  backtrace_error_callback error_callback, void *data,
  const char **string)
{
  switch (val->encoding)
    {
    case ATTR_VAL_STRING:
      *string = val->u.string;
      return 1;

    case ATTR_VAL_STRING_INDEX:
      {
 uint64_t offset;
 struct dwarf_buf offset_buf;

 offset = val->u.uint * (is_dwarf64 ? 8 : 4) + str_offsets_base;
 if (offset + (is_dwarf64 ? 8 : 4)
     >= dwarf_sections->size[DEBUG_STR_OFFSETS])
   {
     error_callback (data, "DW_FORM_strx value out of range", 0);
     return 0;
   }

 offset_buf.name = ".debug_str_offsets";
 offset_buf.start = dwarf_sections->data[DEBUG_STR_OFFSETS];
 offset_buf.buf = dwarf_sections->data[DEBUG_STR_OFFSETS] + offset;
 offset_buf.left = dwarf_sections->size[DEBUG_STR_OFFSETS] - offset;
 offset_buf.is_bigendian = is_bigendian;
 offset_buf.error_callback = error_callback;
 offset_buf.data = data;
 offset_buf.reported_underflow = 0;

 offset = read_offset (&offset_buf, is_dwarf64);
 if (offset >= dwarf_sections->size[DEBUG_STR])
   {
     dwarf_buf_error (&offset_buf, "DW_FORM_strx offset out of range");
     return 0;
   }
 *string = (const char *) dwarf_sections->data[DEBUG_STR] + offset;
 return 1;
      }

    default:
      return 1;
    }
}




static int
resolve_addr_index (const struct dwarf_sections *dwarf_sections,
      uint64_t addr_base, int addrsize, int is_bigendian,
      uint64_t addr_index,
      backtrace_error_callback error_callback, void *data,
      uint64_t *address)
{
  uint64_t offset;
  struct dwarf_buf addr_buf;

  offset = addr_index * addrsize + addr_base;
  if (offset + addrsize >= dwarf_sections->size[DEBUG_ADDR])
    {
      error_callback (data, "DW_FORM_addrx value out of range", 0);
      return 0;
    }

  addr_buf.name = ".debug_addr";
  addr_buf.start = dwarf_sections->data[DEBUG_ADDR];
  addr_buf.buf = dwarf_sections->data[DEBUG_ADDR] + offset;
  addr_buf.left = dwarf_sections->size[DEBUG_ADDR] - offset;
  addr_buf.is_bigendian = is_bigendian;
  addr_buf.error_callback = error_callback;
  addr_buf.data = data;
  addr_buf.reported_underflow = 0;

  *address = read_address (&addr_buf, addrsize);
  return 1;
}



static int
units_search (const void *vkey, const void *ventry)
{
  const size_t *key = (const size_t *) vkey;
  const struct unit *entry = *((const struct unit *const *) ventry);
  size_t offset;

  offset = *key;
  if (offset < entry->low_offset)
    return -1;
  else if (offset >= entry->high_offset)
    return 1;
  else
    return 0;
}



static struct unit *
find_unit (struct unit **pu, size_t units_count, size_t offset)
{
  struct unit **u;
  u = bsearch (&offset, pu, units_count, sizeof (struct unit *), units_search);
  return u == 
# 1144 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
             ((void *)0) 
# 1144 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                  ? 
# 1144 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                    ((void *)0) 
# 1144 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                         : *u;
}




static int
function_addrs_compare (const void *v1, const void *v2)
{
  const struct function_addrs *a1 = (const struct function_addrs *) v1;
  const struct function_addrs *a2 = (const struct function_addrs *) v2;

  if (a1->low < a2->low)
    return -1;
  if (a1->low > a2->low)
    return 1;
  if (a1->high < a2->high)
    return 1;
  if (a1->high > a2->high)
    return -1;
  return strcmp (a1->function->name, a2->function->name);
}





static int
function_addrs_search (const void *vkey, const void *ventry)
{
  const uintptr_t *key = (const uintptr_t *) vkey;
  const struct function_addrs *entry = (const struct function_addrs *) ventry;
  uintptr_t pc;

  pc = *key;
  if (pc < entry->low)
    return -1;
  else if (pc >= entry->high)
    return 1;
  else
    return 0;
}




static int
add_unit_addr (struct backtrace_state *state, void *rdata,
        uint64_t lowpc, uint64_t highpc,
        backtrace_error_callback error_callback, void *data,
        void *pvec)
{
  struct unit *u = (struct unit *) rdata;
  struct unit_addrs_vector *vec = (struct unit_addrs_vector *) pvec;
  struct unit_addrs *p;


  if (vec->count > 0)
    {
      p = (struct unit_addrs *) vec->vec.base + (vec->count - 1);
      if ((lowpc == p->high || lowpc == p->high + 1)
   && u == p->u)
 {
   if (highpc > p->high)
     p->high = highpc;
   return 1;
 }
    }

  p = ((struct unit_addrs *)
       backtrace_vector_grow (state, sizeof (struct unit_addrs),
         error_callback, data, &vec->vec));
  if (p == 
# 1216 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 1216 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              )
    return 0;

  p->low = lowpc;
  p->high = highpc;
  p->u = u;

  ++vec->count;

  return 1;
}




static int
unit_addrs_compare (const void *v1, const void *v2)
{
  const struct unit_addrs *a1 = (const struct unit_addrs *) v1;
  const struct unit_addrs *a2 = (const struct unit_addrs *) v2;

  if (a1->low < a2->low)
    return -1;
  if (a1->low > a2->low)
    return 1;
  if (a1->high < a2->high)
    return 1;
  if (a1->high > a2->high)
    return -1;
  if (a1->u->lineoff < a2->u->lineoff)
    return -1;
  if (a1->u->lineoff > a2->u->lineoff)
    return 1;
  return 0;
}





static int
unit_addrs_search (const void *vkey, const void *ventry)
{
  const uintptr_t *key = (const uintptr_t *) vkey;
  const struct unit_addrs *entry = (const struct unit_addrs *) ventry;
  uintptr_t pc;

  pc = *key;
  if (pc < entry->low)
    return -1;
  else if (pc >= entry->high)
    return 1;
  else
    return 0;
}






static int
line_compare (const void *v1, const void *v2)
{
  const struct line *ln1 = (const struct line *) v1;
  const struct line *ln2 = (const struct line *) v2;

  if (ln1->pc < ln2->pc)
    return -1;
  else if (ln1->pc > ln2->pc)
    return 1;
  else if (ln1->idx < ln2->idx)
    return -1;
  else if (ln1->idx > ln2->idx)
    return 1;
  else
    return 0;
}






static int
line_search (const void *vkey, const void *ventry)
{
  const uintptr_t *key = (const uintptr_t *) vkey;
  const struct line *entry = (const struct line *) ventry;
  uintptr_t pc;

  pc = *key;
  if (pc < entry->pc)
    return -1;
  else if (pc >= (entry + 1)->pc)
    return 1;
  else
    return 0;
}




static int
abbrev_compare (const void *v1, const void *v2)
{
  const struct abbrev *a1 = (const struct abbrev *) v1;
  const struct abbrev *a2 = (const struct abbrev *) v2;

  if (a1->code < a2->code)
    return -1;
  else if (a1->code > a2->code)
    return 1;
  else
    {



      return 0;
    }
}




static int
read_abbrevs (struct backtrace_state *state, uint64_t abbrev_offset,
       const unsigned char *dwarf_abbrev, size_t dwarf_abbrev_size,
       int is_bigendian, backtrace_error_callback error_callback,
       void *data, struct abbrevs *abbrevs)
{
  struct dwarf_buf abbrev_buf;
  struct dwarf_buf count_buf;
  size_t num_abbrevs;

  abbrevs->num_abbrevs = 0;
  abbrevs->abbrevs = 
# 1352 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                    ((void *)0)
# 1352 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                        ;

  if (abbrev_offset >= dwarf_abbrev_size)
    {
      error_callback (data, "abbrev offset out of range", 0);
      return 0;
    }

  abbrev_buf.name = ".debug_abbrev";
  abbrev_buf.start = dwarf_abbrev;
  abbrev_buf.buf = dwarf_abbrev + abbrev_offset;
  abbrev_buf.left = dwarf_abbrev_size - abbrev_offset;
  abbrev_buf.is_bigendian = is_bigendian;
  abbrev_buf.error_callback = error_callback;
  abbrev_buf.data = data;
  abbrev_buf.reported_underflow = 0;



  count_buf = abbrev_buf;
  num_abbrevs = 0;
  while (read_uleb128 (&count_buf) != 0)
    {
      if (count_buf.reported_underflow)
 return 0;
      ++num_abbrevs;

      read_uleb128 (&count_buf);

      read_byte (&count_buf);

      while (read_uleb128 (&count_buf) != 0)
 {
   uint64_t form;

   form = read_uleb128 (&count_buf);
   if ((enum dwarf_form) form == DW_FORM_implicit_const)
     read_sleb128 (&count_buf);
 }

      read_uleb128 (&count_buf);
    }

  if (count_buf.reported_underflow)
    return 0;

  if (num_abbrevs == 0)
    return 1;

  abbrevs->abbrevs = ((struct abbrev *)
        backtrace_alloc (state,
           num_abbrevs * sizeof (struct abbrev),
           error_callback, data));
  if (abbrevs->abbrevs == 
# 1405 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                         ((void *)0)
# 1405 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                             )
    return 0;
  abbrevs->num_abbrevs = num_abbrevs;
  memset (abbrevs->abbrevs, 0, num_abbrevs * sizeof (struct abbrev));

  num_abbrevs = 0;
  while (1)
    {
      uint64_t code;
      struct abbrev a;
      size_t num_attrs;
      struct attr *attrs;

      if (abbrev_buf.reported_underflow)
 goto fail;

      code = read_uleb128 (&abbrev_buf);
      if (code == 0)
 break;

      a.code = code;
      a.tag = (enum dwarf_tag) read_uleb128 (&abbrev_buf);
      a.has_children = read_byte (&abbrev_buf);

      count_buf = abbrev_buf;
      num_attrs = 0;
      while (read_uleb128 (&count_buf) != 0)
 {
   uint64_t form;

   ++num_attrs;
   form = read_uleb128 (&count_buf);
   if ((enum dwarf_form) form == DW_FORM_implicit_const)
     read_sleb128 (&count_buf);
 }

      if (num_attrs == 0)
 {
   attrs = 
# 1443 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 1443 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              ;
   read_uleb128 (&abbrev_buf);
   read_uleb128 (&abbrev_buf);
 }
      else
 {
   attrs = ((struct attr *)
     backtrace_alloc (state, num_attrs * sizeof *attrs,
        error_callback, data));
   if (attrs == 
# 1452 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
               ((void *)0)
# 1452 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                   )
     goto fail;
   num_attrs = 0;
   while (1)
     {
       uint64_t name;
       uint64_t form;

       name = read_uleb128 (&abbrev_buf);
       form = read_uleb128 (&abbrev_buf);
       if (name == 0)
  break;
       attrs[num_attrs].name = (enum dwarf_attribute) name;
       attrs[num_attrs].form = (enum dwarf_form) form;
       if ((enum dwarf_form) form == DW_FORM_implicit_const)
  attrs[num_attrs].val = read_sleb128 (&abbrev_buf);
       else
  attrs[num_attrs].val = 0;
       ++num_attrs;
     }
 }

      a.num_attrs = num_attrs;
      a.attrs = attrs;

      abbrevs->abbrevs[num_abbrevs] = a;
      ++num_abbrevs;
    }

  backtrace_qsort (abbrevs->abbrevs, abbrevs->num_abbrevs,
     sizeof (struct abbrev), abbrev_compare);

  return 1;

 fail:
  free_abbrevs (state, abbrevs, error_callback, data);
  return 0;
}



static const struct abbrev *
lookup_abbrev (struct abbrevs *abbrevs, uint64_t code,
        backtrace_error_callback error_callback, void *data)
{
  struct abbrev key;
  void *p;



  if (code - 1 < abbrevs->num_abbrevs
      && abbrevs->abbrevs[code - 1].code == code)
    return &abbrevs->abbrevs[code - 1];


  memset (&key, 0, sizeof key);
  key.code = code;
  p = bsearch (&key, abbrevs->abbrevs, abbrevs->num_abbrevs,
        sizeof (struct abbrev), abbrev_compare);
  if (p == 
# 1511 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 1511 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              )
    {
      error_callback (data, "invalid abbreviation code", 0);
      return 
# 1514 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
            ((void *)0)
# 1514 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                ;
    }
  return (const struct abbrev *) p;
}







struct pcrange {
  uint64_t lowpc;
  int have_lowpc;
  int lowpc_is_addr_index;
  uint64_t highpc;
  int have_highpc;
  int highpc_is_relative;
  int highpc_is_addr_index;
  uint64_t ranges;
  int have_ranges;
  int ranges_is_index;
};



static void
update_pcrange (const struct attr* attr, const struct attr_val* val,
  struct pcrange *pcrange)
{
  switch (attr->name)
    {
    case DW_AT_low_pc:
      if (val->encoding == ATTR_VAL_ADDRESS)
 {
   pcrange->lowpc = val->u.uint;
   pcrange->have_lowpc = 1;
 }
      else if (val->encoding == ATTR_VAL_ADDRESS_INDEX)
 {
   pcrange->lowpc = val->u.uint;
   pcrange->have_lowpc = 1;
   pcrange->lowpc_is_addr_index = 1;
 }
      break;

    case DW_AT_high_pc:
      if (val->encoding == ATTR_VAL_ADDRESS)
 {
   pcrange->highpc = val->u.uint;
   pcrange->have_highpc = 1;
 }
      else if (val->encoding == ATTR_VAL_UINT)
 {
   pcrange->highpc = val->u.uint;
   pcrange->have_highpc = 1;
   pcrange->highpc_is_relative = 1;
 }
      else if (val->encoding == ATTR_VAL_ADDRESS_INDEX)
 {
   pcrange->highpc = val->u.uint;
   pcrange->have_highpc = 1;
   pcrange->highpc_is_addr_index = 1;
 }
      break;

    case DW_AT_ranges:
      if (val->encoding == ATTR_VAL_UINT
   || val->encoding == ATTR_VAL_REF_SECTION)
 {
   pcrange->ranges = val->u.uint;
   pcrange->have_ranges = 1;
 }
      else if (val->encoding == ATTR_VAL_RNGLISTS_INDEX)
 {
   pcrange->ranges = val->u.uint;
   pcrange->have_ranges = 1;
   pcrange->ranges_is_index = 1;
 }
      break;

    default:
      break;
    }
}




static int
add_low_high_range (struct backtrace_state *state,
      const struct dwarf_sections *dwarf_sections,
      uintptr_t base_address, int is_bigendian,
      struct unit *u, const struct pcrange *pcrange,
      int (*add_range) (struct backtrace_state *state,
          void *rdata, uint64_t lowpc,
          uint64_t highpc,
          backtrace_error_callback error_callback,
          void *data, void *vec),
      void *rdata,
      backtrace_error_callback error_callback, void *data,
      void *vec)
{
  uint64_t lowpc;
  uint64_t highpc;

  lowpc = pcrange->lowpc;
  if (pcrange->lowpc_is_addr_index)
    {
      if (!resolve_addr_index (dwarf_sections, u->addr_base, u->addrsize,
          is_bigendian, lowpc, error_callback, data,
          &lowpc))
 return 0;
    }

  highpc = pcrange->highpc;
  if (pcrange->highpc_is_addr_index)
    {
      if (!resolve_addr_index (dwarf_sections, u->addr_base, u->addrsize,
          is_bigendian, highpc, error_callback, data,
          &highpc))
 return 0;
    }
  if (pcrange->highpc_is_relative)
    highpc += lowpc;



  lowpc += base_address;
  highpc += base_address;

  return add_range (state, rdata, lowpc, highpc, error_callback, data, vec);
}




static int
add_ranges_from_ranges (
    struct backtrace_state *state,
    const struct dwarf_sections *dwarf_sections,
    uintptr_t base_address, int is_bigendian,
    struct unit *u, uint64_t base,
    const struct pcrange *pcrange,
    int (*add_range) (struct backtrace_state *state, void *rdata,
        uint64_t lowpc, uint64_t highpc,
        backtrace_error_callback error_callback, void *data,
        void *vec),
    void *rdata,
    backtrace_error_callback error_callback, void *data,
    void *vec)
{
  struct dwarf_buf ranges_buf;

  if (pcrange->ranges >= dwarf_sections->size[DEBUG_RANGES])
    {
      error_callback (data, "ranges offset out of range", 0);
      return 0;
    }

  ranges_buf.name = ".debug_ranges";
  ranges_buf.start = dwarf_sections->data[DEBUG_RANGES];
  ranges_buf.buf = dwarf_sections->data[DEBUG_RANGES] + pcrange->ranges;
  ranges_buf.left = dwarf_sections->size[DEBUG_RANGES] - pcrange->ranges;
  ranges_buf.is_bigendian = is_bigendian;
  ranges_buf.error_callback = error_callback;
  ranges_buf.data = data;
  ranges_buf.reported_underflow = 0;

  while (1)
    {
      uint64_t low;
      uint64_t high;

      if (ranges_buf.reported_underflow)
 return 0;

      low = read_address (&ranges_buf, u->addrsize);
      high = read_address (&ranges_buf, u->addrsize);

      if (low == 0 && high == 0)
 break;

      if (is_highest_address (low, u->addrsize))
 base = high;
      else
 {
   if (!add_range (state, rdata,
     low + base + base_address,
     high + base + base_address,
     error_callback, data, vec))
     return 0;
 }
    }

  if (ranges_buf.reported_underflow)
    return 0;

  return 1;
}




static int
add_ranges_from_rnglists (
    struct backtrace_state *state,
    const struct dwarf_sections *dwarf_sections,
    uintptr_t base_address, int is_bigendian,
    struct unit *u, uint64_t base,
    const struct pcrange *pcrange,
    int (*add_range) (struct backtrace_state *state, void *rdata,
        uint64_t lowpc, uint64_t highpc,
        backtrace_error_callback error_callback, void *data,
        void *vec),
    void *rdata,
    backtrace_error_callback error_callback, void *data,
    void *vec)
{
  uint64_t offset;
  struct dwarf_buf rnglists_buf;

  if (!pcrange->ranges_is_index)
    offset = pcrange->ranges;
  else
    offset = u->rnglists_base + pcrange->ranges * (u->is_dwarf64 ? 8 : 4);
  if (offset >= dwarf_sections->size[DEBUG_RNGLISTS])
    {
      error_callback (data, "rnglists offset out of range", 0);
      return 0;
    }

  rnglists_buf.name = ".debug_rnglists";
  rnglists_buf.start = dwarf_sections->data[DEBUG_RNGLISTS];
  rnglists_buf.buf = dwarf_sections->data[DEBUG_RNGLISTS] + offset;
  rnglists_buf.left = dwarf_sections->size[DEBUG_RNGLISTS] - offset;
  rnglists_buf.is_bigendian = is_bigendian;
  rnglists_buf.error_callback = error_callback;
  rnglists_buf.data = data;
  rnglists_buf.reported_underflow = 0;

  if (pcrange->ranges_is_index)
    {
      offset = read_offset (&rnglists_buf, u->is_dwarf64);
      offset += u->rnglists_base;
      if (offset >= dwarf_sections->size[DEBUG_RNGLISTS])
 {
   error_callback (data, "rnglists index offset out of range", 0);
   return 0;
 }
      rnglists_buf.buf = dwarf_sections->data[DEBUG_RNGLISTS] + offset;
      rnglists_buf.left = dwarf_sections->size[DEBUG_RNGLISTS] - offset;
    }

  while (1)
    {
      unsigned char rle;

      rle = read_byte (&rnglists_buf);
      if (rle == DW_RLE_end_of_list)
 break;
      switch (rle)
 {
 case DW_RLE_base_addressx:
   {
     uint64_t index;

     index = read_uleb128 (&rnglists_buf);
     if (!resolve_addr_index (dwarf_sections, u->addr_base,
         u->addrsize, is_bigendian, index,
         error_callback, data, &base))
       return 0;
   }
   break;

 case DW_RLE_startx_endx:
   {
     uint64_t index;
     uint64_t low;
     uint64_t high;

     index = read_uleb128 (&rnglists_buf);
     if (!resolve_addr_index (dwarf_sections, u->addr_base,
         u->addrsize, is_bigendian, index,
         error_callback, data, &low))
       return 0;
     index = read_uleb128 (&rnglists_buf);
     if (!resolve_addr_index (dwarf_sections, u->addr_base,
         u->addrsize, is_bigendian, index,
         error_callback, data, &high))
       return 0;
     if (!add_range (state, rdata, low + base_address,
       high + base_address, error_callback, data,
       vec))
       return 0;
   }
   break;

 case DW_RLE_startx_length:
   {
     uint64_t index;
     uint64_t low;
     uint64_t length;

     index = read_uleb128 (&rnglists_buf);
     if (!resolve_addr_index (dwarf_sections, u->addr_base,
         u->addrsize, is_bigendian, index,
         error_callback, data, &low))
       return 0;
     length = read_uleb128 (&rnglists_buf);
     low += base_address;
     if (!add_range (state, rdata, low, low + length,
       error_callback, data, vec))
       return 0;
   }
   break;

 case DW_RLE_offset_pair:
   {
     uint64_t low;
     uint64_t high;

     low = read_uleb128 (&rnglists_buf);
     high = read_uleb128 (&rnglists_buf);
     if (!add_range (state, rdata, low + base + base_address,
       high + base + base_address,
       error_callback, data, vec))
       return 0;
   }
   break;

 case DW_RLE_base_address:
   base = read_address (&rnglists_buf, u->addrsize);
   break;

 case DW_RLE_start_end:
   {
     uint64_t low;
     uint64_t high;

     low = read_address (&rnglists_buf, u->addrsize);
     high = read_address (&rnglists_buf, u->addrsize);
     if (!add_range (state, rdata, low + base_address,
       high + base_address, error_callback, data,
       vec))
       return 0;
   }
   break;

 case DW_RLE_start_length:
   {
     uint64_t low;
     uint64_t length;

     low = read_address (&rnglists_buf, u->addrsize);
     length = read_uleb128 (&rnglists_buf);
     low += base_address;
     if (!add_range (state, rdata, low, low + length,
       error_callback, data, vec))
       return 0;
   }
   break;

 default:
   dwarf_buf_error (&rnglists_buf, "unrecognized DW_RLE value");
   return 0;
 }
    }

  if (rnglists_buf.reported_underflow)
    return 0;

  return 1;
}







static int
add_ranges (struct backtrace_state *state,
     const struct dwarf_sections *dwarf_sections,
     uintptr_t base_address, int is_bigendian,
     struct unit *u, uint64_t base, const struct pcrange *pcrange,
     int (*add_range) (struct backtrace_state *state, void *rdata,
         uint64_t lowpc, uint64_t highpc,
         backtrace_error_callback error_callback,
         void *data, void *vec),
     void *rdata,
     backtrace_error_callback error_callback, void *data,
     void *vec)
{
  if (pcrange->have_lowpc && pcrange->have_highpc)
    return add_low_high_range (state, dwarf_sections, base_address,
          is_bigendian, u, pcrange, add_range, rdata,
          error_callback, data, vec);

  if (!pcrange->have_ranges)
    {

      return 1;
    }

  if (u->version < 5)
    return add_ranges_from_ranges (state, dwarf_sections, base_address,
       is_bigendian, u, base, pcrange, add_range,
       rdata, error_callback, data, vec);
  else
    return add_ranges_from_rnglists (state, dwarf_sections, base_address,
         is_bigendian, u, base, pcrange, add_range,
         rdata, error_callback, data, vec);
}





static int
find_address_ranges (struct backtrace_state *state, uintptr_t base_address,
       struct dwarf_buf *unit_buf,
       const struct dwarf_sections *dwarf_sections,
       int is_bigendian, struct dwarf_data *altlink,
       backtrace_error_callback error_callback, void *data,
       struct unit *u, struct unit_addrs_vector *addrs,
       enum dwarf_tag *unit_tag)
{
  while (unit_buf->left > 0)
    {
      uint64_t code;
      const struct abbrev *abbrev;
      struct pcrange pcrange;
      struct attr_val name_val;
      int have_name_val;
      struct attr_val comp_dir_val;
      int have_comp_dir_val;
      size_t i;

      code = read_uleb128 (unit_buf);
      if (code == 0)
 return 1;

      abbrev = lookup_abbrev (&u->abbrevs, code, error_callback, data);
      if (abbrev == 
# 1958 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                   ((void *)0)
# 1958 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                       )
 return 0;

      if (unit_tag != 
# 1961 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                     ((void *)0)
# 1961 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                         )
 *unit_tag = abbrev->tag;

      memset (&pcrange, 0, sizeof pcrange);
      memset (&name_val, 0, sizeof name_val);
      have_name_val = 0;
      memset (&comp_dir_val, 0, sizeof comp_dir_val);
      have_comp_dir_val = 0;
      for (i = 0; i < abbrev->num_attrs; ++i)
 {
   struct attr_val val;

   if (!read_attribute (abbrev->attrs[i].form, abbrev->attrs[i].val,
          unit_buf, u->is_dwarf64, u->version,
          u->addrsize, dwarf_sections, altlink, &val))
     return 0;

   switch (abbrev->attrs[i].name)
     {
     case DW_AT_low_pc: case DW_AT_high_pc: case DW_AT_ranges:
       update_pcrange (&abbrev->attrs[i], &val, &pcrange);
       break;

     case DW_AT_stmt_list:
       if (abbrev->tag == DW_TAG_compile_unit
    && (val.encoding == ATTR_VAL_UINT
        || val.encoding == ATTR_VAL_REF_SECTION))
  u->lineoff = val.u.uint;
       break;

     case DW_AT_name:
       if (abbrev->tag == DW_TAG_compile_unit)
  {
    name_val = val;
    have_name_val = 1;
  }
       break;

     case DW_AT_comp_dir:
       if (abbrev->tag == DW_TAG_compile_unit)
  {
    comp_dir_val = val;
    have_comp_dir_val = 1;
  }
       break;

     case DW_AT_str_offsets_base:
       if (abbrev->tag == DW_TAG_compile_unit
    && val.encoding == ATTR_VAL_REF_SECTION)
  u->str_offsets_base = val.u.uint;
       break;

     case DW_AT_addr_base:
       if (abbrev->tag == DW_TAG_compile_unit
    && val.encoding == ATTR_VAL_REF_SECTION)
  u->addr_base = val.u.uint;
       break;

     case DW_AT_rnglists_base:
       if (abbrev->tag == DW_TAG_compile_unit
    && val.encoding == ATTR_VAL_REF_SECTION)
  u->rnglists_base = val.u.uint;
       break;

     default:
       break;
     }
 }



      if (have_name_val)
 {
   if (!resolve_string (dwarf_sections, u->is_dwarf64, is_bigendian,
          u->str_offsets_base, &name_val,
          error_callback, data, &u->filename))
     return 0;
 }
      if (have_comp_dir_val)
 {
   if (!resolve_string (dwarf_sections, u->is_dwarf64, is_bigendian,
          u->str_offsets_base, &comp_dir_val,
          error_callback, data, &u->comp_dir))
     return 0;
 }

      if (abbrev->tag == DW_TAG_compile_unit
   || abbrev->tag == DW_TAG_subprogram)
 {
   if (!add_ranges (state, dwarf_sections, base_address,
      is_bigendian, u, pcrange.lowpc, &pcrange,
      add_unit_addr, (void *) u, error_callback, data,
      (void *) addrs))
     return 0;



   if (abbrev->tag == DW_TAG_compile_unit
       && (pcrange.have_ranges
    || (pcrange.have_lowpc && pcrange.have_highpc)))
     return 1;
 }

      if (abbrev->has_children)
 {
   if (!find_address_ranges (state, base_address, unit_buf,
        dwarf_sections, is_bigendian, altlink,
        error_callback, data, u, addrs, 
# 2068 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                                       ((void *)0)
# 2068 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                           ))
     return 0;
 }
    }

  return 1;
}





static int
build_address_map (struct backtrace_state *state, uintptr_t base_address,
     const struct dwarf_sections *dwarf_sections,
     int is_bigendian, struct dwarf_data *altlink,
     backtrace_error_callback error_callback, void *data,
     struct unit_addrs_vector *addrs,
     struct unit_vector *unit_vec)
{
  struct dwarf_buf info;
  struct backtrace_vector units;
  size_t units_count;
  size_t i;
  struct unit **pu;
  size_t unit_offset = 0;

  memset (&addrs->vec, 0, sizeof addrs->vec);
  memset (&unit_vec->vec, 0, sizeof unit_vec->vec);
  addrs->count = 0;
  unit_vec->count = 0;





  info.name = ".debug_info";
  info.start = dwarf_sections->data[DEBUG_INFO];
  info.buf = info.start;
  info.left = dwarf_sections->size[DEBUG_INFO];
  info.is_bigendian = is_bigendian;
  info.error_callback = error_callback;
  info.data = data;
  info.reported_underflow = 0;

  memset (&units, 0, sizeof units);
  units_count = 0;

  while (info.left > 0)
    {
      const unsigned char *unit_data_start;
      uint64_t len;
      int is_dwarf64;
      struct dwarf_buf unit_buf;
      int version;
      int unit_type;
      uint64_t abbrev_offset;
      int addrsize;
      struct unit *u;
      enum dwarf_tag unit_tag;

      if (info.reported_underflow)
 goto fail;

      unit_data_start = info.buf;

      len = read_initial_length (&info, &is_dwarf64);
      unit_buf = info;
      unit_buf.left = len;

      if (!advance (&info, len))
 goto fail;

      version = read_uint16 (&unit_buf);
      if (version < 2 || version > 5)
 {
   dwarf_buf_error (&unit_buf, "unrecognized DWARF version");
   goto fail;
 }

      if (version < 5)
 unit_type = 0;
      else
 {
   unit_type = read_byte (&unit_buf);
   if (unit_type == DW_UT_type || unit_type == DW_UT_split_type)
     {

       continue;
     }
 }

      pu = ((struct unit **)
     backtrace_vector_grow (state, sizeof (struct unit *),
       error_callback, data, &units));
      if (pu == 
# 2163 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
               ((void *)0)
# 2163 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                   )
   goto fail;

      u = ((struct unit *)
    backtrace_alloc (state, sizeof *u, error_callback, data));
      if (u == 
# 2168 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
              ((void *)0)
# 2168 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                  )
 goto fail;

      *pu = u;
      ++units_count;

      if (version < 5)
 addrsize = 0;
      else
 addrsize = read_byte (&unit_buf);

      memset (&u->abbrevs, 0, sizeof u->abbrevs);
      abbrev_offset = read_offset (&unit_buf, is_dwarf64);
      if (!read_abbrevs (state, abbrev_offset,
    dwarf_sections->data[DEBUG_ABBREV],
    dwarf_sections->size[DEBUG_ABBREV],
    is_bigendian, error_callback, data, &u->abbrevs))
 goto fail;

      if (version < 5)
 addrsize = read_byte (&unit_buf);

      switch (unit_type)
 {
 case 0:
   break;
 case DW_UT_compile: case DW_UT_partial:
   break;
 case DW_UT_skeleton: case DW_UT_split_compile:
   read_uint64 (&unit_buf);
   break;
 default:
   break;
 }

      u->low_offset = unit_offset;
      unit_offset += len + (is_dwarf64 ? 12 : 4);
      u->high_offset = unit_offset;
      u->unit_data = unit_buf.buf;
      u->unit_data_len = unit_buf.left;
      u->unit_data_offset = unit_buf.buf - unit_data_start;
      u->version = version;
      u->is_dwarf64 = is_dwarf64;
      u->addrsize = addrsize;
      u->filename = 
# 2212 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                   ((void *)0)
# 2212 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                       ;
      u->comp_dir = 
# 2213 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                   ((void *)0)
# 2213 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                       ;
      u->abs_filename = 
# 2214 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                       ((void *)0)
# 2214 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                           ;
      u->lineoff = 0;


      u->lines = 
# 2218 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                ((void *)0)
# 2218 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                    ;
      u->lines_count = 0;
      u->function_addrs = 
# 2220 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                         ((void *)0)
# 2220 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                             ;
      u->function_addrs_count = 0;

      if (!find_address_ranges (state, base_address, &unit_buf, dwarf_sections,
    is_bigendian, altlink, error_callback, data,
    u, addrs, &unit_tag))
 goto fail;

      if (unit_buf.reported_underflow)
 goto fail;
    }
  if (info.reported_underflow)
    goto fail;

  unit_vec->vec = units;
  unit_vec->count = units_count;
  return 1;

 fail:
  if (units_count > 0)
    {
      pu = (struct unit **) units.base;
      for (i = 0; i < units_count; i++)
 {
   free_abbrevs (state, &pu[i]->abbrevs, error_callback, data);
   backtrace_free (state, pu[i], sizeof **pu, error_callback, data);
 }
      backtrace_vector_free (state, &units, error_callback, data);
    }
  if (addrs->count > 0)
    {
      backtrace_vector_free (state, &addrs->vec, error_callback, data);
      addrs->count = 0;
    }
  return 0;
}




static int
add_line (struct backtrace_state *state, struct dwarf_data *ddata,
   uintptr_t pc, const char *filename, int lineno,
   backtrace_error_callback error_callback, void *data,
   struct line_vector *vec)
{
  struct line *ln;



  if (vec->count > 0)
    {
      ln = (struct line *) vec->vec.base + (vec->count - 1);
      if (pc == ln->pc && filename == ln->filename && lineno == ln->lineno)
 return 1;
    }

  ln = ((struct line *)
 backtrace_vector_grow (state, sizeof (struct line), error_callback,
          data, &vec->vec));
  if (ln == 
# 2280 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
           ((void *)0)
# 2280 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
               )
    return 0;



  ln->pc = pc + ddata->base_address;

  ln->filename = filename;
  ln->lineno = lineno;
  ln->idx = vec->count;

  ++vec->count;

  return 1;
}



static void
free_line_header (struct backtrace_state *state, struct line_header *hdr,
    backtrace_error_callback error_callback, void *data)
{
  if (hdr->dirs_count != 0)
    backtrace_free (state, hdr->dirs, hdr->dirs_count * sizeof (const char *),
      error_callback, data);
  backtrace_free (state, hdr->filenames,
    hdr->filenames_count * sizeof (char *),
    error_callback, data);
}




static int
read_v2_paths (struct backtrace_state *state, struct unit *u,
        struct dwarf_buf *hdr_buf, struct line_header *hdr)
{
  const unsigned char *p;
  const unsigned char *pend;
  size_t i;


  hdr->dirs_count = 0;
  p = hdr_buf->buf;
  pend = p + hdr_buf->left;
  while (p < pend && *p != '\0')
    {
      p += strnlen((const char *) p, pend - p) + 1;
      ++hdr->dirs_count;
    }

  hdr->dirs = 
# 2331 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
             ((void *)0)
# 2331 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                 ;
  if (hdr->dirs_count != 0)
    {
      hdr->dirs = ((const char **)
     backtrace_alloc (state,
        hdr->dirs_count * sizeof (const char *),
        hdr_buf->error_callback,
        hdr_buf->data));
      if (hdr->dirs == 
# 2339 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                      ((void *)0)
# 2339 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                          )
 return 0;
    }

  i = 0;
  while (*hdr_buf->buf != '\0')
    {
      if (hdr_buf->reported_underflow)
 return 0;

      hdr->dirs[i] = read_string (hdr_buf);
      if (hdr->dirs[i] == 
# 2350 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                         ((void *)0)
# 2350 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                             )
 return 0;
      ++i;
    }
  if (!advance (hdr_buf, 1))
    return 0;


  hdr->filenames_count = 0;
  p = hdr_buf->buf;
  pend = p + hdr_buf->left;
  while (p < pend && *p != '\0')
    {
      p += strnlen ((const char *) p, pend - p) + 1;
      p += leb128_len (p);
      p += leb128_len (p);
      p += leb128_len (p);
      ++hdr->filenames_count;
    }

  hdr->filenames = ((const char **)
      backtrace_alloc (state,
         hdr->filenames_count * sizeof (char *),
         hdr_buf->error_callback,
         hdr_buf->data));
  if (hdr->filenames == 
# 2375 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                       ((void *)0)
# 2375 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                           )
    return 0;
  i = 0;
  while (*hdr_buf->buf != '\0')
    {
      const char *filename;
      uint64_t dir_index;

      if (hdr_buf->reported_underflow)
 return 0;

      filename = read_string (hdr_buf);
      if (filename == 
# 2387 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                     ((void *)0)
# 2387 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                         )
 return 0;
      dir_index = read_uleb128 (hdr_buf);
      if ((((((filename)[0]) == '/') || ((((filename)[0]) == '\\') && (0))) || ((filename)[0] && ((filename)[1] == ':') && (0)))
   || (dir_index == 0 && u->comp_dir == 
# 2391 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                                       ((void *)0)
# 2391 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                           ))
 hdr->filenames[i] = filename;
      else
 {
   const char *dir;
   size_t dir_len;
   size_t filename_len;
   char *s;

   if (dir_index == 0)
     dir = u->comp_dir;
   else if (dir_index - 1 < hdr->dirs_count)
     dir = hdr->dirs[dir_index - 1];
   else
     {
       dwarf_buf_error (hdr_buf,
          ("invalid directory index in "
    "line number program header"));
       return 0;
     }
   dir_len = strlen (dir);
   filename_len = strlen (filename);
   s = ((char *) backtrace_alloc (state, dir_len + filename_len + 2,
      hdr_buf->error_callback,
      hdr_buf->data));
   if (s == 
# 2416 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
           ((void *)0)
# 2416 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
               )
     return 0;
   memcpy (s, dir, dir_len);



   s[dir_len] = '/';
   memcpy (s + dir_len + 1, filename, filename_len + 1);
   hdr->filenames[i] = s;
 }


      read_uleb128 (hdr_buf);
      read_uleb128 (hdr_buf);

      ++i;
    }

  return 1;
}





static int
read_lnct (struct backtrace_state *state, struct dwarf_data *ddata,
    struct unit *u, struct dwarf_buf *hdr_buf,
    const struct line_header *hdr, size_t formats_count,
    const struct line_header_format *formats, const char **string)
{
  size_t i;
  const char *dir;
  const char *path;

  dir = 
# 2451 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
       ((void *)0)
# 2451 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
           ;
  path = 
# 2452 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
        ((void *)0)
# 2452 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
            ;
  for (i = 0; i < formats_count; i++)
    {
      struct attr_val val;

      if (!read_attribute (formats[i].form, 0, hdr_buf, u->is_dwarf64,
      u->version, hdr->addrsize, &ddata->dwarf_sections,
      ddata->altlink, &val))
 return 0;
      switch (formats[i].lnct)
 {
 case DW_LNCT_path:
   if (!resolve_string (&ddata->dwarf_sections, u->is_dwarf64,
          ddata->is_bigendian, u->str_offsets_base,
          &val, hdr_buf->error_callback, hdr_buf->data,
          &path))
     return 0;
   break;
 case DW_LNCT_directory_index:
   if (val.encoding == ATTR_VAL_UINT)
     {
       if (val.u.uint >= hdr->dirs_count)
  {
    dwarf_buf_error (hdr_buf,
       ("invalid directory index in "
        "line number program header"));
    return 0;
  }
       dir = hdr->dirs[val.u.uint];
     }
   break;
 default:

   break;
 }
    }

  if (path == 
# 2489 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
             ((void *)0)
# 2489 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                 )
    {
      dwarf_buf_error (hdr_buf,
         "missing file name in line number program header");
      return 0;
    }

  if (dir == 
# 2496 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
            ((void *)0)
# 2496 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                )
    *string = path;
  else
    {
      size_t dir_len;
      size_t path_len;
      char *s;

      dir_len = strlen (dir);
      path_len = strlen (path);
      s = (char *) backtrace_alloc (state, dir_len + path_len + 2,
        hdr_buf->error_callback, hdr_buf->data);
      if (s == 
# 2508 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
              ((void *)0)
# 2508 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                  )
 return 0;
      memcpy (s, dir, dir_len);



      s[dir_len] = '/';
      memcpy (s + dir_len + 1, path, path_len + 1);
      *string = s;
    }

  return 1;
}




static int
read_line_header_format_entries (struct backtrace_state *state,
     struct dwarf_data *ddata,
     struct unit *u,
     struct dwarf_buf *hdr_buf,
     struct line_header *hdr,
     size_t *pcount,
     const char ***ppaths)
{
  size_t formats_count;
  struct line_header_format *formats;
  size_t paths_count;
  const char **paths;
  size_t i;
  int ret;

  formats_count = read_byte (hdr_buf);
  if (formats_count == 0)
    formats = 
# 2543 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
             ((void *)0)
# 2543 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                 ;
  else
    {
      formats = ((struct line_header_format *)
   backtrace_alloc (state,
      (formats_count
       * sizeof (struct line_header_format)),
      hdr_buf->error_callback,
      hdr_buf->data));
      if (formats == 
# 2552 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                    ((void *)0)
# 2552 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                        )
 return 0;

      for (i = 0; i < formats_count; i++)
 {
   formats[i].lnct = (int) read_uleb128(hdr_buf);
   formats[i].form = (enum dwarf_form) read_uleb128 (hdr_buf);
 }
    }

  paths_count = read_uleb128 (hdr_buf);
  if (paths_count == 0)
    {
      *pcount = 0;
      *ppaths = 
# 2566 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
               ((void *)0)
# 2566 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                   ;
      ret = 1;
      goto exit;
    }

  paths = ((const char **)
    backtrace_alloc (state, paths_count * sizeof (const char *),
       hdr_buf->error_callback, hdr_buf->data));
  if (paths == 
# 2574 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
              ((void *)0)
# 2574 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                  )
    {
      ret = 0;
      goto exit;
    }
  for (i = 0; i < paths_count; i++)
    {
      if (!read_lnct (state, ddata, u, hdr_buf, hdr, formats_count,
        formats, &paths[i]))
 {
   backtrace_free (state, paths,
     paths_count * sizeof (const char *),
     hdr_buf->error_callback, hdr_buf->data);
   ret = 0;
   goto exit;
 }
    }

  *pcount = paths_count;
  *ppaths = paths;

  ret = 1;

 exit:
  if (formats != 
# 2598 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                ((void *)0)
# 2598 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                    )
    backtrace_free (state, formats,
      formats_count * sizeof (struct line_header_format),
      hdr_buf->error_callback, hdr_buf->data);

  return ret;
}



static int
read_line_header (struct backtrace_state *state, struct dwarf_data *ddata,
    struct unit *u, int is_dwarf64, struct dwarf_buf *line_buf,
    struct line_header *hdr)
{
  uint64_t hdrlen;
  struct dwarf_buf hdr_buf;

  hdr->version = read_uint16 (line_buf);
  if (hdr->version < 2 || hdr->version > 5)
    {
      dwarf_buf_error (line_buf, "unsupported line number version");
      return 0;
    }

  if (hdr->version < 5)
    hdr->addrsize = u->addrsize;
  else
    {
      hdr->addrsize = read_byte (line_buf);


      if (read_byte (line_buf) != 0)
 {
   dwarf_buf_error (line_buf,
      "non-zero segment_selector_size not supported");
   return 0;
 }
    }

  hdrlen = read_offset (line_buf, is_dwarf64);

  hdr_buf = *line_buf;
  hdr_buf.left = hdrlen;

  if (!advance (line_buf, hdrlen))
    return 0;

  hdr->min_insn_len = read_byte (&hdr_buf);
  if (hdr->version < 4)
    hdr->max_ops_per_insn = 1;
  else
    hdr->max_ops_per_insn = read_byte (&hdr_buf);


  read_byte (&hdr_buf);

  hdr->line_base = read_sbyte (&hdr_buf);
  hdr->line_range = read_byte (&hdr_buf);

  hdr->opcode_base = read_byte (&hdr_buf);
  hdr->opcode_lengths = hdr_buf.buf;
  if (!advance (&hdr_buf, hdr->opcode_base - 1))
    return 0;

  if (hdr->version < 5)
    {
      if (!read_v2_paths (state, u, &hdr_buf, hdr))
 return 0;
    }
  else
    {
      if (!read_line_header_format_entries (state, ddata, u, &hdr_buf, hdr,
         &hdr->dirs_count,
         &hdr->dirs))
 return 0;
      if (!read_line_header_format_entries (state, ddata, u, &hdr_buf, hdr,
         &hdr->filenames_count,
         &hdr->filenames))
 return 0;
    }

  if (hdr_buf.reported_underflow)
    return 0;

  return 1;
}




static int
read_line_program (struct backtrace_state *state, struct dwarf_data *ddata,
     struct unit *u, const struct line_header *hdr,
     struct dwarf_buf *line_buf, struct line_vector *vec)
{
  uint64_t address;
  unsigned int op_index;
  const char *reset_filename;
  const char *filename;
  int lineno;

  address = 0;
  op_index = 0;
  if (hdr->filenames_count > 0)
    reset_filename = hdr->filenames[0];
  else
    reset_filename = "";
  filename = reset_filename;
  lineno = 1;
  while (line_buf->left > 0)
    {
      unsigned int op;

      op = read_byte (line_buf);
      if (op >= hdr->opcode_base)
 {
   unsigned int advance;


   op -= hdr->opcode_base;
   advance = op / hdr->line_range;
   address += (hdr->min_insn_len * (op_index + advance)
        / hdr->max_ops_per_insn);
   op_index = (op_index + advance) % hdr->max_ops_per_insn;
   lineno += hdr->line_base + (int) (op % hdr->line_range);
   add_line (state, ddata, address, filename, lineno,
      line_buf->error_callback, line_buf->data, vec);
 }
      else if (op == DW_LNS_extended_op)
 {
   uint64_t len;

   len = read_uleb128 (line_buf);
   op = read_byte (line_buf);
   switch (op)
     {
     case DW_LNE_end_sequence:



       address = 0;
       op_index = 0;
       filename = reset_filename;
       lineno = 1;
       break;
     case DW_LNE_set_address:
       address = read_address (line_buf, hdr->addrsize);
       break;
     case DW_LNE_define_file:
       {
  const char *f;
  unsigned int dir_index;

  f = read_string (line_buf);
  if (f == 
# 2753 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 2753 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              )
    return 0;
  dir_index = read_uleb128 (line_buf);

  read_uleb128 (line_buf);
  read_uleb128 (line_buf);
  if ((((((f)[0]) == '/') || ((((f)[0]) == '\\') && (0))) || ((f)[0] && ((f)[1] == ':') && (0))))
    filename = f;
  else
    {
      const char *dir;
      size_t dir_len;
      size_t f_len;
      char *p;

      if (dir_index == 0 && hdr->version < 5)
        dir = u->comp_dir;
      else if (dir_index - 1 < hdr->dirs_count)
        dir = hdr->dirs[dir_index - 1];
      else
        {
   dwarf_buf_error (line_buf,
      ("invalid directory index "
       "in line number program"));
   return 0;
        }
      dir_len = strlen (dir);
      f_len = strlen (f);
      p = ((char *)
    backtrace_alloc (state, dir_len + f_len + 2,
       line_buf->error_callback,
       line_buf->data));
      if (p == 
# 2785 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
              ((void *)0)
# 2785 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                  )
        return 0;
      memcpy (p, dir, dir_len);




      p[dir_len] = '/';
      memcpy (p + dir_len + 1, f, f_len + 1);
      filename = p;
    }
       }
       break;
     case DW_LNE_set_discriminator:

       read_uleb128 (line_buf);
       break;
     default:
       if (!advance (line_buf, len - 1))
  return 0;
       break;
     }
 }
      else
 {
   switch (op)
     {
     case DW_LNS_copy:
       add_line (state, ddata, address, filename, lineno,
   line_buf->error_callback, line_buf->data, vec);
       break;
     case DW_LNS_advance_pc:
       {
  uint64_t advance;

  advance = read_uleb128 (line_buf);
  address += (hdr->min_insn_len * (op_index + advance)
       / hdr->max_ops_per_insn);
  op_index = (op_index + advance) % hdr->max_ops_per_insn;
       }
       break;
     case DW_LNS_advance_line:
       lineno += (int) read_sleb128 (line_buf);
       break;
     case DW_LNS_set_file:
       {
  uint64_t fileno;

  fileno = read_uleb128 (line_buf);
  if (fileno == 0)
    filename = "";
  else
    {
      if (fileno - 1 >= hdr->filenames_count)
        {
   dwarf_buf_error (line_buf,
      ("invalid file number in "
       "line number program"));
   return 0;
        }
      filename = hdr->filenames[fileno - 1];
    }
       }
       break;
     case DW_LNS_set_column:
       read_uleb128 (line_buf);
       break;
     case DW_LNS_negate_stmt:
       break;
     case DW_LNS_set_basic_block:
       break;
     case DW_LNS_const_add_pc:
       {
  unsigned int advance;

  op = 255 - hdr->opcode_base;
  advance = op / hdr->line_range;
  address += (hdr->min_insn_len * (op_index + advance)
       / hdr->max_ops_per_insn);
  op_index = (op_index + advance) % hdr->max_ops_per_insn;
       }
       break;
     case DW_LNS_fixed_advance_pc:
       address += read_uint16 (line_buf);
       op_index = 0;
       break;
     case DW_LNS_set_prologue_end:
       break;
     case DW_LNS_set_epilogue_begin:
       break;
     case DW_LNS_set_isa:
       read_uleb128 (line_buf);
       break;
     default:
       {
  unsigned int i;

  for (i = hdr->opcode_lengths[op - 1]; i > 0; --i)
    read_uleb128 (line_buf);
       }
       break;
     }
 }
    }

  return 1;
}




static int
read_line_info (struct backtrace_state *state, struct dwarf_data *ddata,
  backtrace_error_callback error_callback, void *data,
  struct unit *u, struct line_header *hdr, struct line **lines,
  size_t *lines_count)
{
  struct line_vector vec;
  struct dwarf_buf line_buf;
  uint64_t len;
  int is_dwarf64;
  struct line *ln;

  memset (&vec.vec, 0, sizeof vec.vec);
  vec.count = 0;

  memset (hdr, 0, sizeof *hdr);

  if (u->lineoff != (off_t) (size_t) u->lineoff
      || (size_t) u->lineoff >= ddata->dwarf_sections.size[DEBUG_LINE])
    {
      error_callback (data, "unit line offset out of range", 0);
      goto fail;
    }

  line_buf.name = ".debug_line";
  line_buf.start = ddata->dwarf_sections.data[DEBUG_LINE];
  line_buf.buf = ddata->dwarf_sections.data[DEBUG_LINE] + u->lineoff;
  line_buf.left = ddata->dwarf_sections.size[DEBUG_LINE] - u->lineoff;
  line_buf.is_bigendian = ddata->is_bigendian;
  line_buf.error_callback = error_callback;
  line_buf.data = data;
  line_buf.reported_underflow = 0;

  len = read_initial_length (&line_buf, &is_dwarf64);
  line_buf.left = len;

  if (!read_line_header (state, ddata, u, is_dwarf64, &line_buf, hdr))
    goto fail;

  if (!read_line_program (state, ddata, u, hdr, &line_buf, &vec))
    goto fail;

  if (line_buf.reported_underflow)
    goto fail;

  if (vec.count == 0)
    {



      goto fail;
    }


  ln = ((struct line *)
 backtrace_vector_grow (state, sizeof (struct line), error_callback,
          data, &vec.vec));
  if (ln == 
# 2953 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
           ((void *)0)
# 2953 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
               )
    goto fail;
  ln->pc = (uintptr_t) -1;
  ln->filename = 
# 2956 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                ((void *)0)
# 2956 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                    ;
  ln->lineno = 0;
  ln->idx = 0;

  if (!backtrace_vector_release (state, &vec.vec, error_callback, data))
    goto fail;

  ln = (struct line *) vec.vec.base;
  backtrace_qsort (ln, vec.count, sizeof (struct line), line_compare);

  *lines = ln;
  *lines_count = vec.count;

  return 1;

 fail:
  backtrace_vector_free (state, &vec.vec, error_callback, data);
  free_line_header (state, hdr, error_callback, data);
  *lines = (struct line *) (uintptr_t) -1;
  *lines_count = 0;
  return 0;
}

static const char *read_referenced_name (struct dwarf_data *, struct unit *,
      uint64_t, backtrace_error_callback,
      void *);



static const char *
read_referenced_name_from_attr (struct dwarf_data *ddata, struct unit *u,
    struct attr *attr, struct attr_val *val,
    backtrace_error_callback error_callback,
    void *data)
{
  switch (attr->name)
    {
    case DW_AT_abstract_origin:
    case DW_AT_specification:
      break;
    default:
      return 
# 2997 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
            ((void *)0)
# 2997 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                ;
    }

  if (attr->form == DW_FORM_ref_sig8)
    return 
# 3001 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 3001 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              ;

  if (val->encoding == ATTR_VAL_REF_INFO)
    {
      struct unit *unit
 = find_unit (ddata->units, ddata->units_count,
       val->u.uint);
      if (unit == 
# 3008 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                 ((void *)0)
# 3008 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                     )
 return 
# 3009 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
       ((void *)0)
# 3009 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
           ;

      uint64_t offset = val->u.uint - unit->low_offset;
      return read_referenced_name (ddata, unit, offset, error_callback, data);
    }

  if (val->encoding == ATTR_VAL_UINT
      || val->encoding == ATTR_VAL_REF_UNIT)
    return read_referenced_name (ddata, u, val->u.uint, error_callback, data);

  if (val->encoding == ATTR_VAL_REF_ALT_INFO)
    {
      struct unit *alt_unit
 = find_unit (ddata->altlink->units, ddata->altlink->units_count,
       val->u.uint);
      if (alt_unit == 
# 3024 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                     ((void *)0)
# 3024 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                         )
 return 
# 3025 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
       ((void *)0)
# 3025 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
           ;

      uint64_t offset = val->u.uint - alt_unit->low_offset;
      return read_referenced_name (ddata->altlink, alt_unit, offset,
       error_callback, data);
    }

  return 
# 3032 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
        ((void *)0)
# 3032 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
            ;
}





static const char *
read_referenced_name (struct dwarf_data *ddata, struct unit *u,
        uint64_t offset, backtrace_error_callback error_callback,
        void *data)
{
  struct dwarf_buf unit_buf;
  uint64_t code;
  const struct abbrev *abbrev;
  const char *ret;
  size_t i;





  if (offset < u->unit_data_offset
      || offset - u->unit_data_offset >= u->unit_data_len)
    {
      error_callback (data,
        "abstract origin or specification out of range",
        0);
      return 
# 3060 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
            ((void *)0)
# 3060 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                ;
    }

  offset -= u->unit_data_offset;

  unit_buf.name = ".debug_info";
  unit_buf.start = ddata->dwarf_sections.data[DEBUG_INFO];
  unit_buf.buf = u->unit_data + offset;
  unit_buf.left = u->unit_data_len - offset;
  unit_buf.is_bigendian = ddata->is_bigendian;
  unit_buf.error_callback = error_callback;
  unit_buf.data = data;
  unit_buf.reported_underflow = 0;

  code = read_uleb128 (&unit_buf);
  if (code == 0)
    {
      dwarf_buf_error (&unit_buf, "invalid abstract origin or specification");
      return 
# 3078 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
            ((void *)0)
# 3078 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                ;
    }

  abbrev = lookup_abbrev (&u->abbrevs, code, error_callback, data);
  if (abbrev == 
# 3082 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
               ((void *)0)
# 3082 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                   )
    return 
# 3083 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 3083 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              ;

  ret = 
# 3085 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
       ((void *)0)
# 3085 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
           ;
  for (i = 0; i < abbrev->num_attrs; ++i)
    {
      struct attr_val val;

      if (!read_attribute (abbrev->attrs[i].form, abbrev->attrs[i].val,
      &unit_buf, u->is_dwarf64, u->version, u->addrsize,
      &ddata->dwarf_sections, ddata->altlink, &val))
 return 
# 3093 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
       ((void *)0)
# 3093 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
           ;

      switch (abbrev->attrs[i].name)
 {
 case DW_AT_name:



   if (ret != 
# 3101 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
             ((void *)0)
# 3101 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                 )
     break;
   if (!resolve_string (&ddata->dwarf_sections, u->is_dwarf64,
          ddata->is_bigendian, u->str_offsets_base,
          &val, error_callback, data, &ret))
     return 
# 3106 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
           ((void *)0)
# 3106 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
               ;
   break;

 case DW_AT_linkage_name:
 case DW_AT_MIPS_linkage_name:

   {
     const char *s;

     s = 
# 3115 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
        ((void *)0)
# 3115 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
            ;
     if (!resolve_string (&ddata->dwarf_sections, u->is_dwarf64,
     ddata->is_bigendian, u->str_offsets_base,
     &val, error_callback, data, &s))
       return 
# 3119 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
             ((void *)0)
# 3119 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                 ;
     if (s != 
# 3120 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
             ((void *)0)
# 3120 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                 )
       return s;
   }
   break;

 case DW_AT_specification:


   {
     const char *name;

     name = read_referenced_name_from_attr (ddata, u, &abbrev->attrs[i],
         &val, error_callback, data);
     if (name != 
# 3133 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                ((void *)0)
# 3133 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                    )
       ret = name;
   }
   break;

 default:
   break;
 }
    }

  return ret;
}




static int
add_function_range (struct backtrace_state *state, void *rdata,
      uint64_t lowpc, uint64_t highpc,
      backtrace_error_callback error_callback, void *data,
      void *pvec)
{
  struct function *function = (struct function *) rdata;
  struct function_vector *vec = (struct function_vector *) pvec;
  struct function_addrs *p;

  if (vec->count > 0)
    {
      p = (struct function_addrs *) vec->vec.base + (vec->count - 1);
      if ((lowpc == p->high || lowpc == p->high + 1)
   && function == p->function)
 {
   if (highpc > p->high)
     p->high = highpc;
   return 1;
 }
    }

  p = ((struct function_addrs *)
       backtrace_vector_grow (state, sizeof (struct function_addrs),
         error_callback, data, &vec->vec));
  if (p == 
# 3174 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 3174 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              )
    return 0;

  p->low = lowpc;
  p->high = highpc;
  p->function = function;

  ++vec->count;

  return 1;
}




static int
read_function_entry (struct backtrace_state *state, struct dwarf_data *ddata,
       struct unit *u, uint64_t base, struct dwarf_buf *unit_buf,
       const struct line_header *lhdr,
       backtrace_error_callback error_callback, void *data,
       struct function_vector *vec_function,
       struct function_vector *vec_inlined)
{
  while (unit_buf->left > 0)
    {
      uint64_t code;
      const struct abbrev *abbrev;
      int is_function;
      struct function *function;
      struct function_vector *vec;
      size_t i;
      struct pcrange pcrange;
      int have_linkage_name;

      code = read_uleb128 (unit_buf);
      if (code == 0)
 return 1;

      abbrev = lookup_abbrev (&u->abbrevs, code, error_callback, data);
      if (abbrev == 
# 3213 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                   ((void *)0)
# 3213 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                       )
 return 0;

      is_function = (abbrev->tag == DW_TAG_subprogram
       || abbrev->tag == DW_TAG_entry_point
       || abbrev->tag == DW_TAG_inlined_subroutine);

      if (abbrev->tag == DW_TAG_inlined_subroutine)
 vec = vec_inlined;
      else
 vec = vec_function;

      function = 
# 3225 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                ((void *)0)
# 3225 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                    ;
      if (is_function)
 {
   function = ((struct function *)
        backtrace_alloc (state, sizeof *function,
           error_callback, data));
   if (function == 
# 3231 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                  ((void *)0)
# 3231 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                      )
     return 0;
   memset (function, 0, sizeof *function);
 }

      memset (&pcrange, 0, sizeof pcrange);
      have_linkage_name = 0;
      for (i = 0; i < abbrev->num_attrs; ++i)
 {
   struct attr_val val;

   if (!read_attribute (abbrev->attrs[i].form, abbrev->attrs[i].val,
          unit_buf, u->is_dwarf64, u->version,
          u->addrsize, &ddata->dwarf_sections,
          ddata->altlink, &val))
     return 0;



   if (abbrev->tag == DW_TAG_compile_unit
       && abbrev->attrs[i].name == DW_AT_low_pc)
     {
       if (val.encoding == ATTR_VAL_ADDRESS)
  base = val.u.uint;
       else if (val.encoding == ATTR_VAL_ADDRESS_INDEX)
  {
    if (!resolve_addr_index (&ddata->dwarf_sections,
        u->addr_base, u->addrsize,
        ddata->is_bigendian, val.u.uint,
        error_callback, data, &base))
      return 0;
  }
     }

   if (is_function)
     {
       switch (abbrev->attrs[i].name)
  {
  case DW_AT_call_file:
    if (val.encoding == ATTR_VAL_UINT)
      {
        if (val.u.uint == 0)
   function->caller_filename = "";
        else
   {
     if (val.u.uint - 1 >= lhdr->filenames_count)
       {
         dwarf_buf_error (unit_buf,
            ("invalid file number in "
      "DW_AT_call_file attribute"));
         return 0;
       }
     function->caller_filename =
       lhdr->filenames[val.u.uint - 1];
   }
      }
    break;

  case DW_AT_call_line:
    if (val.encoding == ATTR_VAL_UINT)
      function->caller_lineno = val.u.uint;
    break;

  case DW_AT_abstract_origin:
  case DW_AT_specification:


    if (have_linkage_name)
      break;
    {
      const char *name;

      name
        = read_referenced_name_from_attr (ddata, u,
       &abbrev->attrs[i], &val,
       error_callback, data);
      if (name != 
# 3307 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                 ((void *)0)
# 3307 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                     )
        function->name = name;
    }
    break;

  case DW_AT_name:

    if (function->name != 
# 3314 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                         ((void *)0)
# 3314 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                             )
      break;
    if (!resolve_string (&ddata->dwarf_sections, u->is_dwarf64,
           ddata->is_bigendian,
           u->str_offsets_base, &val,
           error_callback, data, &function->name))
      return 0;
    break;

  case DW_AT_linkage_name:
  case DW_AT_MIPS_linkage_name:

    {
      const char *s;

      s = 
# 3329 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
         ((void *)0)
# 3329 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
             ;
      if (!resolve_string (&ddata->dwarf_sections, u->is_dwarf64,
      ddata->is_bigendian,
      u->str_offsets_base, &val,
      error_callback, data, &s))
        return 0;
      if (s != 
# 3335 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
              ((void *)0)
# 3335 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                  )
        {
   function->name = s;
   have_linkage_name = 1;
        }
    }
    break;

  case DW_AT_low_pc: case DW_AT_high_pc: case DW_AT_ranges:
    update_pcrange (&abbrev->attrs[i], &val, &pcrange);
    break;

  default:
    break;
  }
     }
 }



      if (is_function && function->name == 
# 3355 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                                          ((void *)0)
# 3355 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                              )
 {
   backtrace_free (state, function, sizeof *function,
     error_callback, data);
   is_function = 0;
 }

      if (is_function)
 {
   if (pcrange.have_ranges
       || (pcrange.have_lowpc && pcrange.have_highpc))
     {
       if (!add_ranges (state, &ddata->dwarf_sections,
          ddata->base_address, ddata->is_bigendian,
          u, base, &pcrange, add_function_range,
          (void *) function, error_callback, data,
          (void *) vec))
  return 0;
     }
   else
     {
       backtrace_free (state, function, sizeof *function,
         error_callback, data);
       is_function = 0;
     }
 }

      if (abbrev->has_children)
 {
   if (!is_function)
     {
       if (!read_function_entry (state, ddata, u, base, unit_buf, lhdr,
     error_callback, data, vec_function,
     vec_inlined))
  return 0;
     }
   else
     {
       struct function_vector fvec;




       memset (&fvec, 0, sizeof fvec);

       if (!read_function_entry (state, ddata, u, base, unit_buf, lhdr,
     error_callback, data, vec_function,
     &fvec))
  return 0;

       if (fvec.count > 0)
  {
    struct function_addrs *faddrs;

    if (!backtrace_vector_release (state, &fvec.vec,
       error_callback, data))
      return 0;

    faddrs = (struct function_addrs *) fvec.vec.base;
    backtrace_qsort (faddrs, fvec.count,
       sizeof (struct function_addrs),
       function_addrs_compare);

    function->function_addrs = faddrs;
    function->function_addrs_count = fvec.count;
  }
     }
 }
    }

  return 1;
}




static void
read_function_info (struct backtrace_state *state, struct dwarf_data *ddata,
      const struct line_header *lhdr,
      backtrace_error_callback error_callback, void *data,
      struct unit *u, struct function_vector *fvec,
      struct function_addrs **ret_addrs,
      size_t *ret_addrs_count)
{
  struct function_vector lvec;
  struct function_vector *pfvec;
  struct dwarf_buf unit_buf;
  struct function_addrs *addrs;
  size_t addrs_count;


  if (fvec != 
# 3446 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
             ((void *)0)
# 3446 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                 )
    pfvec = fvec;
  else
    {
      memset (&lvec, 0, sizeof lvec);
      pfvec = &lvec;
    }

  unit_buf.name = ".debug_info";
  unit_buf.start = ddata->dwarf_sections.data[DEBUG_INFO];
  unit_buf.buf = u->unit_data;
  unit_buf.left = u->unit_data_len;
  unit_buf.is_bigendian = ddata->is_bigendian;
  unit_buf.error_callback = error_callback;
  unit_buf.data = data;
  unit_buf.reported_underflow = 0;

  while (unit_buf.left > 0)
    {
      if (!read_function_entry (state, ddata, u, 0, &unit_buf, lhdr,
    error_callback, data, pfvec, pfvec))
 return;
    }

  if (pfvec->count == 0)
    return;

  addrs_count = pfvec->count;

  if (fvec == 
# 3475 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
             ((void *)0)
# 3475 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                 )
    {
      if (!backtrace_vector_release (state, &lvec.vec, error_callback, data))
 return;
      addrs = (struct function_addrs *) pfvec->vec.base;
    }
  else
    {


      addrs = ((struct function_addrs *)
        backtrace_vector_finish (state, &fvec->vec,
     error_callback, data));
      if (addrs == 
# 3488 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                  ((void *)0)
# 3488 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                      )
 return;
      fvec->count = 0;
    }

  backtrace_qsort (addrs, addrs_count, sizeof (struct function_addrs),
     function_addrs_compare);

  *ret_addrs = addrs;
  *ret_addrs_count = addrs_count;
}





static int
report_inlined_functions (uintptr_t pc, struct function *function,
     backtrace_full_callback callback, void *data,
     const char **filename, int *lineno)
{
  struct function_addrs *function_addrs;
  struct function *inlined;
  int ret;

  if (function->function_addrs_count == 0)
    return 0;

  function_addrs = ((struct function_addrs *)
      bsearch (&pc, function->function_addrs,
        function->function_addrs_count,
        sizeof (struct function_addrs),
        function_addrs_search));
  if (function_addrs == 
# 3521 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                       ((void *)0)
# 3521 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                           )
    return 0;

  while (((size_t) (function_addrs - function->function_addrs) + 1
   < function->function_addrs_count)
  && pc >= (function_addrs + 1)->low
  && pc < (function_addrs + 1)->high)
    ++function_addrs;



  inlined = function_addrs->function;


  ret = report_inlined_functions (pc, inlined, callback, data,
      filename, lineno);
  if (ret != 0)
    return ret;


  ret = callback (data, pc, *filename, *lineno, inlined->name);
  if (ret != 0)
    return ret;



  *filename = inlined->caller_filename;
  *lineno = inlined->caller_lineno;

  return 0;
}






static int
dwarf_lookup_pc (struct backtrace_state *state, struct dwarf_data *ddata,
   uintptr_t pc, backtrace_full_callback callback,
   backtrace_error_callback error_callback, void *data,
   int *found)
{
  struct unit_addrs *entry;
  struct unit *u;
  int new_data;
  struct line *lines;
  struct line *ln;
  struct function_addrs *function_addrs;
  struct function *function;
  const char *filename;
  int lineno;
  int ret;

  *found = 1;


  entry = (ddata->addrs_count == 0
    ? 
# 3579 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
     ((void *)0)
    
# 3580 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
   : bsearch (&pc, ddata->addrs, ddata->addrs_count,
        sizeof (struct unit_addrs), unit_addrs_search));

  if (entry == 
# 3583 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
              ((void *)0)
# 3583 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                  )
    {
      *found = 0;
      return 0;
    }





  while ((size_t) (entry - ddata->addrs) + 1 < ddata->addrs_count
  && pc >= (entry + 1)->low
  && pc < (entry + 1)->high)
    ++entry;







  u = entry->u;
  lines = u->lines;




  while (entry > ddata->addrs
  && pc >= (entry - 1)->low
  && pc < (entry - 1)->high)
    {
      if (state->threaded)
 lines = (struct line *) __atomic_load_n ((&u->lines), 2);

      if (lines != (struct line *) (uintptr_t) -1)
 break;

      --entry;

      u = entry->u;
      lines = u->lines;
    }

  if (state->threaded)
    lines = __atomic_load_n ((&u->lines), 2);

  new_data = 0;
  if (lines == 
# 3630 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
              ((void *)0)
# 3630 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                  )
    {
      size_t function_addrs_count;
      struct line_header lhdr;
      size_t count;




      function_addrs = 
# 3639 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                      ((void *)0)
# 3639 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                          ;
      function_addrs_count = 0;
      if (read_line_info (state, ddata, error_callback, data, entry->u, &lhdr,
     &lines, &count))
 {
   struct function_vector *pfvec;



   if (state->threaded)
     pfvec = 
# 3649 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
            ((void *)0)
# 3649 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                ;
   else
     pfvec = &ddata->fvec;
   read_function_info (state, ddata, &lhdr, error_callback, data,
         entry->u, pfvec, &function_addrs,
         &function_addrs_count);
   free_line_header (state, &lhdr, error_callback, data);
   new_data = 1;
 }
# 3666 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
      if (!state->threaded)
 {
   u->lines_count = count;
   u->function_addrs = function_addrs;
   u->function_addrs_count = function_addrs_count;
   u->lines = lines;
 }
      else
 {
   __atomic_store_n ((&u->lines_count), (count), 3);
   __atomic_store_n ((&u->function_addrs), (function_addrs), 3);
   __atomic_store_n ((&u->function_addrs_count), (function_addrs_count), 3)
                           ;
   __atomic_store_n ((&u->lines), (lines), 3);
 }
    }



  if (lines == (struct line *) (uintptr_t) -1)
    {



      if (new_data)
 return dwarf_lookup_pc (state, ddata, pc, callback, error_callback,
    data, found);
      return callback (data, pc, 
# 3693 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                                ((void *)0)
# 3693 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                    , 0, 
# 3693 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                                         ((void *)0)
# 3693 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                             );
    }



  ln = (struct line *) bsearch (&pc, lines, entry->u->lines_count,
    sizeof (struct line), line_search);
  if (ln == 
# 3700 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
           ((void *)0)
# 3700 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
               )
    {





      if (entry->u->abs_filename == 
# 3707 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                                   ((void *)0)
# 3707 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                       )
 {
   const char *filename;

   filename = entry->u->filename;
   if (filename != 
# 3712 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                  ((void *)0)
       
# 3713 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
      && !(((((filename)[0]) == '/') || ((((filename)[0]) == '\\') && (0))) || ((filename)[0] && ((filename)[1] == ':') && (0)))
       && entry->u->comp_dir != 
# 3714 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                               ((void *)0)
# 3714 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                   )
     {
       size_t filename_len;
       const char *dir;
       size_t dir_len;
       char *s;

       filename_len = strlen (filename);
       dir = entry->u->comp_dir;
       dir_len = strlen (dir);
       s = (char *) backtrace_alloc (state, dir_len + filename_len + 2,
         error_callback, data);
       if (s == 
# 3726 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
               ((void *)0)
# 3726 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                   )
  {
    *found = 0;
    return 0;
  }
       memcpy (s, dir, dir_len);

       s[dir_len] = '/';
       memcpy (s + dir_len + 1, filename, filename_len + 1);
       filename = s;
     }
   entry->u->abs_filename = filename;
 }

      return callback (data, pc, entry->u->abs_filename, 0, 
# 3740 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                                                           ((void *)0)
# 3740 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                                               );
    }



  if (entry->u->function_addrs_count == 0)
    return callback (data, pc, ln->filename, ln->lineno, 
# 3746 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                                                        ((void *)0)
# 3746 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                                            );

  function_addrs = ((struct function_addrs *)
      bsearch (&pc, entry->u->function_addrs,
        entry->u->function_addrs_count,
        sizeof (struct function_addrs),
        function_addrs_search));
  if (function_addrs == 
# 3753 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                       ((void *)0)
# 3753 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                           )
    return callback (data, pc, ln->filename, ln->lineno, 
# 3754 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                                                        ((void *)0)
# 3754 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                                            );




  while (((size_t) (function_addrs - entry->u->function_addrs + 1)
   < entry->u->function_addrs_count)
  && pc >= (function_addrs + 1)->low
  && pc < (function_addrs + 1)->high)
    ++function_addrs;

  function = function_addrs->function;

  filename = ln->filename;
  lineno = ln->lineno;

  ret = report_inlined_functions (pc, function, callback, data,
      &filename, &lineno);
  if (ret != 0)
    return ret;

  return callback (data, pc, filename, lineno, function->name);
}





static int
dwarf_fileline (struct backtrace_state *state, uintptr_t pc,
  backtrace_full_callback callback,
  backtrace_error_callback error_callback, void *data)
{
  struct dwarf_data *ddata;
  int found;
  int ret;

  if (!state->threaded)
    {
      for (ddata = (struct dwarf_data *) state->fileline_data;
    ddata != 
# 3794 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
            ((void *)0)
# 3794 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                ;
    ddata = ddata->next)
 {
   ret = dwarf_lookup_pc (state, ddata, pc, callback, error_callback,
     data, &found);
   if (ret != 0 || found)
     return ret;
 }
    }
  else
    {
      struct dwarf_data **pp;

      pp = (struct dwarf_data **) (void *) &state->fileline_data;
      while (1)
 {
   ddata = __atomic_load_n ((pp), 2);
   if (ddata == 
# 3811 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
               ((void *)0)
# 3811 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                   )
     break;

   ret = dwarf_lookup_pc (state, ddata, pc, callback, error_callback,
     data, &found);
   if (ret != 0 || found)
     return ret;

   pp = &ddata->next;
 }
    }



  return callback (data, pc, 
# 3825 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                            ((void *)0)
# 3825 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                , 0, 
# 3825 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                                     ((void *)0)
# 3825 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                         );
}




static struct dwarf_data *
build_dwarf_data (struct backtrace_state *state,
    uintptr_t base_address,
    const struct dwarf_sections *dwarf_sections,
    int is_bigendian,
    struct dwarf_data *altlink,
    backtrace_error_callback error_callback,
    void *data)
{
  struct unit_addrs_vector addrs_vec;
  struct unit_addrs *addrs;
  size_t addrs_count;
  struct unit_vector units_vec;
  struct unit **units;
  size_t units_count;
  struct dwarf_data *fdata;

  if (!build_address_map (state, base_address, dwarf_sections, is_bigendian,
     altlink, error_callback, data, &addrs_vec,
     &units_vec))
    return 
# 3851 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 3851 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              ;

  if (!backtrace_vector_release (state, &addrs_vec.vec, error_callback, data))
    return 
# 3854 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 3854 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              ;
  if (!backtrace_vector_release (state, &units_vec.vec, error_callback, data))
    return 
# 3856 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 3856 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              ;
  addrs = (struct unit_addrs *) addrs_vec.vec.base;
  units = (struct unit **) units_vec.vec.base;
  addrs_count = addrs_vec.count;
  units_count = units_vec.count;
  backtrace_qsort (addrs, addrs_count, sizeof (struct unit_addrs),
     unit_addrs_compare);


  fdata = ((struct dwarf_data *)
    backtrace_alloc (state, sizeof (struct dwarf_data),
       error_callback, data));
  if (fdata == 
# 3868 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
              ((void *)0)
# 3868 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                  )
    return 
# 3869 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 3869 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              ;

  fdata->next = 
# 3871 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
               ((void *)0)
# 3871 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                   ;
  fdata->altlink = altlink;
  fdata->base_address = base_address;
  fdata->addrs = addrs;
  fdata->addrs_count = addrs_count;
  fdata->units = units;
  fdata->units_count = units_count;
  fdata->dwarf_sections = *dwarf_sections;
  fdata->is_bigendian = is_bigendian;
  memset (&fdata->fvec, 0, sizeof fdata->fvec);

  return fdata;
}





int
backtrace_dwarf_add (struct backtrace_state *state,
       uintptr_t base_address,
       const struct dwarf_sections *dwarf_sections,
       int is_bigendian,
       struct dwarf_data *fileline_altlink,
       backtrace_error_callback error_callback,
       void *data, fileline *fileline_fn,
       struct dwarf_data **fileline_entry)
{
  struct dwarf_data *fdata;

  fdata = build_dwarf_data (state, base_address, dwarf_sections, is_bigendian,
       fileline_altlink, error_callback, data);
  if (fdata == 
# 3903 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
              ((void *)0)
# 3903 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                  )
    return 0;

  if (fileline_entry != 
# 3906 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                       ((void *)0)
# 3906 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                           )
    *fileline_entry = fdata;

  if (!state->threaded)
    {
      struct dwarf_data **pp;

      for (pp = (struct dwarf_data **) (void *) &state->fileline_data;
    *pp != 
# 3914 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
          ((void *)0)
# 3914 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
              ;
    pp = &(*pp)->next)
 ;
      *pp = fdata;
    }
  else
    {
      while (1)
 {
   struct dwarf_data **pp;

   pp = (struct dwarf_data **) (void *) &state->fileline_data;

   while (1)
     {
       struct dwarf_data *p;

       p = __atomic_load_n ((pp), 2);

       if (p == 
# 3933 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
               ((void *)0)
# 3933 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                   )
  break;

       pp = &p->next;
     }

   if (__sync_bool_compare_and_swap (pp, 
# 3939 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c" 3 4
                                        ((void *)0)
# 3939 "/home/giulianob/gcc_git_gnu/gcc/libbacktrace/dwarf.c"
                                            , fdata))
     break;
 }
    }

  *fileline_fn = dwarf_fileline;

  return 1;
}
