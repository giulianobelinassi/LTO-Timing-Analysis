# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
# 1 "/home/giulianob/gcc_git_gnu/build_temp/build-x86_64-pc-linux-gnu/libiberty//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
# 38 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
# 1 "./config.h" 1
# 39 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 2



# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/ansidecl.h" 1
# 43 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 2




# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4

# 143 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 209 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 321 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef int wchar_t;
# 415 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
} max_align_t;
# 48 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 2
# 129 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
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
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
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

# 130 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 2
# 150 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
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

# 151 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 2
# 186 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/10/include/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/limits.h" 1 3 4
# 195 "/usr/lib/gcc/x86_64-linux-gnu/10/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 183 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 162 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 184 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 188 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uio_lim.h" 1 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 2 3 4
# 192 "/usr/include/limits.h" 2 3 4
# 196 "/usr/lib/gcc/x86_64-linux-gnu/10/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/10/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/10/include/limits.h" 2 3 4
# 187 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 2







# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex.h" 1
# 27 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex.h"
# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h" 1
# 45 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h"

# 45 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h"
typedef long int s_reg_t;
typedef unsigned long int active_reg_t;






typedef unsigned long int reg_syntax_t;
# 173 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h"
extern reg_syntax_t xre_syntax_options;
# 290 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h"
typedef enum
{

  REG_ENOSYS = -1,


  REG_NOERROR = 0,
  REG_NOMATCH,



  REG_BADPAT,
  REG_ECOLLATE,
  REG_ECTYPE,
  REG_EESCAPE,
  REG_ESUBREG,
  REG_EBRACK,
  REG_EPAREN,
  REG_EBRACE,
  REG_BADBR,
  REG_ERANGE,
  REG_ESPACE,
  REG_BADRPT,


  REG_EEND,
  REG_ESIZE,
  REG_ERPAREN
} reg_errcode_t;
# 330 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h"
struct re_pattern_buffer
{




  unsigned char *buffer;


  unsigned long int allocated;


  unsigned long int used;


  reg_syntax_t syntax;




  char *fastmap;





  char * translate;


  size_t re_nsub;






  unsigned can_be_null : 1;
# 375 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h"
  unsigned regs_allocated : 2;



  unsigned fastmap_accurate : 1;



  unsigned no_sub : 1;



  unsigned not_bol : 1;


  unsigned not_eol : 1;


  unsigned newline_anchor : 1;


};

typedef struct re_pattern_buffer regex_t;


typedef int xregoff_t;




struct re_registers
{
  unsigned num_regs;
  xregoff_t *start;
  xregoff_t *end;
};
# 425 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h"
typedef struct
{
  xregoff_t rm_so;
  xregoff_t rm_eo;
} regmatch_t;
# 441 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h"
extern reg_syntax_t xre_set_syntax (reg_syntax_t syntax);




extern const char *xre_compile_pattern (const char *pattern, size_t length,
                                       struct re_pattern_buffer *buffer);





extern int xre_compile_fastmap (struct re_pattern_buffer *buffer);







extern int xre_search (struct re_pattern_buffer *buffer, const char *string,
                      int length, int start, int range,
                      struct re_registers *regs);




extern int xre_search_2 (struct re_pattern_buffer *buffer, const char *string1,
                        int length1, const char *string2, int length2,
                        int start, int range, struct re_registers *regs,
                        int stop);




extern int xre_match (struct re_pattern_buffer *buffer, const char *string,
                     int length, int start, struct re_registers *regs);



extern int xre_match_2 (struct re_pattern_buffer *buffer, const char *string1,
                       int length1, const char *string2, int length2,
                       int start, struct re_registers *regs, int stop);
# 498 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h"
extern void xre_set_registers (struct re_pattern_buffer *buffer,
                              struct re_registers *regs,
                              unsigned num_regs, xregoff_t *starts,
                              xregoff_t *ends);




extern char *xre_comp (const char *);
extern int xre_exec (const char *);
# 534 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h"
extern int xregcomp (regex_t *__restrict __preg,
                    const char *__restrict __pattern,
                    int __cflags);


__extension__

extern int xregexec (const regex_t *__restrict __preg,
                    const char *__restrict __string, size_t __nmatch,
                    regmatch_t __pmatch[
# 543 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h" 3 4
                                       __restrict
# 543 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex2.h"
                                                     ],
                    int __eflags);

extern size_t xregerror (int __errcode, const regex_t *__preg,
                        char *__errbuf, size_t __errbuf_size);

extern void xregfree (regex_t *__preg);
# 28 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/xregex.h" 2
# 195 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 2


# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 108 "/usr/include/ctype.h" 3 4
extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));




extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));




extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__ , __leaf__));






extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 206 "/usr/include/ctype.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) tolower (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
}

extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) toupper (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_toupper_loc ())[__c] : __c;
}
# 251 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 327 "/usr/include/ctype.h" 3 4

# 198 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 2
# 273 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"

# 273 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static char re_syntax_table[256];

static void init_syntax_once (void);

static void
init_syntax_once (void)
{
   register int c;
   static int done = 0;

   if (done)
     return;
   ((void) memset (re_syntax_table, '\0', sizeof re_syntax_table));

   for (c = 0; c < 256; ++c)
     if ((1 && 
# 288 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
        ((*__ctype_b_loc ())[(int) ((
# 288 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
        c
# 288 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
        ))] & (unsigned short int) _ISalnum)
# 288 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
        ))
 re_syntax_table[c] = 1;

   re_syntax_table['_'] = 1;

   done = 1;
}
# 405 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
typedef char boolean;



static reg_errcode_t byte_regex_compile (const char *pattern, size_t size,
                                         reg_syntax_t syntax,
                                         struct re_pattern_buffer *bufp);

static int byte_re_match_2_internal (struct re_pattern_buffer *bufp,
                                     const char *string1, int size1,
                                     const char *string2, int size2,
                                     int pos,
                                     struct re_registers *regs,
                                     int stop);
static int byte_re_search_2 (struct re_pattern_buffer *bufp,
                             const char *string1, int size1,
                             const char *string2, int size2,
                             int startpos, int range,
                             struct re_registers *regs, int stop);
static int byte_re_compile_fastmap (struct re_pattern_buffer *bufp);
# 454 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
typedef enum
{
  no_op = 0,


  succeed,


  exactn,







  anychar,
# 485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  charset,



  charset_not,
# 498 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  start_memory,
# 507 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  stop_memory,



  duplicate,


  begline,


  endline,



  begbuf,


  endbuf,


  jump,


  jump_past_alt,




  on_failure_jump,



  on_failure_keep_string_jump,




  pop_failure_jump,
# 554 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  maybe_pop_jump,







  dummy_failure_jump,



  push_dummy_failure,




  succeed_n,




  jump_n,





  set_number_at,

  wordchar,
  notwordchar,

  wordbeg,
  wordend,

  wordbound,
  notwordbound
# 605 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
} re_opcode_t;
# 639 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 1
# 1460 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
int xre_max_failures = 4000;





union byte_fail_stack_elt
{
  unsigned char *pointer;
  int integer;
};

typedef union byte_fail_stack_elt byte_fail_stack_elt_t;

typedef struct
{
  byte_fail_stack_elt_t *stack;
  unsigned size;
  unsigned avail;
} byte_fail_stack_type;
# 1795 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
typedef union
{
  byte_fail_stack_elt_t word;
  struct
  {



    unsigned match_null_string_p : 2;
    unsigned is_active : 1;
    unsigned matched_something : 1;
    unsigned ever_matched_something : 1;
  } bits;
} byte_register_info_type;
# 1839 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static char byte_reg_unset_dummy;




static void byte_store_op1 (re_opcode_t op, unsigned char *loc, int arg);
static void byte_store_op2 (re_opcode_t op, unsigned char *loc,
                               int arg1, int arg2);
static void byte_insert_op1 (re_opcode_t op, unsigned char *loc,
                                int arg, unsigned char *end);
static void byte_insert_op2 (re_opcode_t op, unsigned char *loc,
                                int arg1, int arg2, unsigned char *end);
static boolean byte_at_begline_loc_p (const char *pattern,
                                         const char *p,
                                         reg_syntax_t syntax);
static boolean byte_at_endline_loc_p (const char *p,
                                         const char *pend,
                                         reg_syntax_t syntax);
# 1867 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static reg_errcode_t byte_compile_range (unsigned int range_start,
                                         const char **p_ptr,
                                         const char *pend,
                                         char *translate,
                                         reg_syntax_t syntax,
                                         unsigned char *b);
# 2108 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
typedef unsigned regnum_t;







typedef long pattern_offset_t;

typedef struct
{
  pattern_offset_t begalt_offset;
  pattern_offset_t fixup_alt_jump;
  pattern_offset_t inner_group_offset;
  pattern_offset_t laststart_offset;
  regnum_t regnum;
} compile_stack_elt_t;


typedef struct
{
  compile_stack_elt_t *stack;
  unsigned size;
  unsigned avail;
} compile_stack_type;
# 2251 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static boolean group_in_compile_stack (compile_stack_type compile_stack,
                                       regnum_t regnum);
# 2282 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static reg_errcode_t
byte_regex_compile (const char *pattern,
                       size_t size, reg_syntax_t syntax,
                       struct re_pattern_buffer *bufp)
{



  register unsigned char c, c1;
# 2305 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  const char *p1;


  register unsigned char *b;


  compile_stack_type compile_stack;






  const char *p = pattern;
  const char *pend = pattern + size;



  char * translate = bufp->translate;





  unsigned char *pending_exact = 0;




  unsigned char *laststart = 0;


  unsigned char *begalt;




  unsigned char *fixup_alt_jump = 0;




  regnum_t regnum = 0;
# 2386 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  compile_stack.stack = ((compile_stack_elt_t *) malloc ((32) * sizeof (compile_stack_elt_t)));
  if (compile_stack.stack == 
# 2387 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                            ((void *)0)
# 2387 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                )
    {





      return REG_ESPACE;
    }

  compile_stack.size = 32;
  compile_stack.avail = 0;


  bufp->syntax = syntax;
  bufp->fastmap_accurate = 0;
  bufp->not_bol = bufp->not_eol = 0;




  bufp->used = 0;


  bufp->re_nsub = 0;



   init_syntax_once ();


  if (bufp->allocated == 0)
    {
      if (bufp->buffer)
 {
# 2431 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
          ((bufp->buffer) = (unsigned char *) realloc (bufp->buffer, ((32 * sizeof(unsigned char))) * sizeof (unsigned char)));

        }
      else
        {
          bufp->buffer = ((unsigned char *) malloc (((32 * sizeof(unsigned char)) / sizeof(unsigned char)) * sizeof (unsigned char)))
             ;
        }

      if (!bufp->buffer) return (free (compile_stack.stack), REG_ESPACE);



      bufp->allocated = (32 * sizeof(unsigned char));
    }





  begalt = b = bufp->buffer;


  while (p != pend)
    {
      do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);

      switch (c)
        {
        case '^':
          {
            if (
                   p == pattern + 1

                || syntax & (((((unsigned long int) 1) << 1) << 1) << 1)

                || byte_at_begline_loc_p (pattern, p, syntax))
              do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 2468 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
             ((void *)0)
# 2468 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
             ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (begline); } while (0);
            else
              goto normal_char;
          }
          break;


        case '$':
          {
            if (
                   p == pend

                || syntax & (((((unsigned long int) 1) << 1) << 1) << 1)

                || byte_at_endline_loc_p (p, pend, syntax))
               do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 2483 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
              ((void *)0)
# 2483 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
              ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (endline); } while (0);
             else
               goto normal_char;
           }
           break;


 case '+':
        case '?':
          if ((syntax & (((unsigned long int) 1) << 1))
              || (syntax & ((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            goto normal_char;

        handle_plus:
        case '*':

          if (!laststart)
            {
              if (syntax & (((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1))
                return (free (compile_stack.stack), REG_BADRPT);
              else if (!(syntax & ((((((unsigned long int) 1) << 1) << 1) << 1) << 1)))
                goto normal_char;
            }

          {

            boolean keep_string_p = 0;


            char zero_times_ok = 0, many_times_ok = 0;






            for (;;)
              {
                zero_times_ok |= c != '+';
                many_times_ok |= c != '?';

                if (p == pend)
                  break;

                do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);

                if (c == '*'
                    || (!(syntax & (((unsigned long int) 1) << 1)) && (c == '+' || c == '?')))
                  ;

                else if (syntax & (((unsigned long int) 1) << 1) && c == '\\')
                  {
                    if (p == pend) return (free (compile_stack.stack), REG_EESCAPE);

                    do {if (p == pend) return REG_EEND; c1 = (unsigned char) *p++; if (translate) c1 = (unsigned char) translate[c1]; } while (0);
                    if (!(c1 == '+' || c1 == '?'))
                      {
                        p--;
                        p--;
                        break;
                      }

                    c = c1;
                  }
                else
                  {
                    p--;
                    break;
                  }


               }



            if (!laststart)
              break;



            if (many_times_ok)
              {
# 2574 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                ;


                while ((unsigned long) (b - bufp->buffer + (1 + 2)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 2577 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
               ((void *)0)
# 2577 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
               ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0);






                if ((translate ? (char) translate[(unsigned char) (*(p - 2))] : (char) (*(p - 2))) == (translate ? (char) translate[(unsigned char) ('.')] : (char) ('.'))
      && zero_times_ok
                    && p < pend && (translate ? (char) translate[(unsigned char) (*p)] : (char) (*p)) == (translate ? (char) translate[(unsigned char) ('\n')] : (char) ('\n'))
                    && !(syntax & ((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1)))
                  {
                    byte_store_op1 (jump, b, (int) ((laststart) - (b) - (1 + 2)));
                    keep_string_p = 1;
                  }
                else

                  byte_store_op1 (maybe_pop_jump, b, (int) ((laststart - (1 + 2)) - (b) - (1 + 2)))
                                   ;


                b += 1 + 2;
              }





            while ((unsigned long) (b - bufp->buffer + (1 + 2)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 2605 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
           ((void *)0)
# 2605 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
           ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0);
            byte_insert_op1 (keep_string_p ? on_failure_keep_string_jump : on_failure_jump, laststart, (int) ((b + 1 + 2) - (laststart) - (1 + 2)), b)

                                                                ;
            pending_exact = 0;
            b += 1 + 2;

            if (!zero_times_ok)
              {





                while ((unsigned long) (b - bufp->buffer + (1 + 2)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 2619 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
               ((void *)0)
# 2619 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
               ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0);
                byte_insert_op1 (dummy_failure_jump, laststart, (int) ((laststart + 2 + 2 * 2) - (laststart) - (1 + 2)), b)
                                    ;
                b += 1 + 2;
              }
            }
   break;


 case '.':
          laststart = b;
          do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 2630 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 2630 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (anychar); } while (0);
          break;


        case '[':
          {
            boolean had_char_class = 0;



     unsigned int range_start = 0xffffffff;

            if (p == pend) return (free (compile_stack.stack), REG_EBRACK);
# 3109 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     while ((unsigned long) (b - bufp->buffer + (34)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 3109 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
    ((void *)0)
# 3109 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
    ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0);

            laststart = b;



            do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 3115 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
           ((void *)0)
# 3115 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
           ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (*p == '^' ? charset_not : charset); } while (0);
            if (*p == '^')
              p++;


            p1 = p;


            do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 3123 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
           ((void *)0)
# 3123 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
           ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) ((1 << 8) / 8); } while (0);


            ((void) memset (b, '\0', (1 << 8) / 8));


            if ((re_opcode_t) b[-2] == charset_not
                && (syntax & ((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
              (b[((unsigned char) ('\n')) / 8] |= 1 << (((unsigned char) '\n') % 8));


            for (;;)
              {
                if (p == pend) return (free (compile_stack.stack), REG_EBRACK);

                do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);


                if ((syntax & ((unsigned long int) 1)) && c == '\\')
                  {
                    if (p == pend) return (free (compile_stack.stack), REG_EESCAPE);

                    do {if (p == pend) return REG_EEND; c1 = (unsigned char) *p++; if (translate) c1 = (unsigned char) translate[c1]; } while (0);
                    (b[((unsigned char) (c1)) / 8] |= 1 << (((unsigned char) c1) % 8));
      range_start = c1;
                    continue;
                  }




                if (c == ']' && p != p1 + 1)
                  break;



                if (had_char_class && c == '-' && *p != ']')
                  return (free (compile_stack.stack), REG_ERANGE);





                if (c == '-'
                    && !(p - 2 >= pattern && p[-2] == '[')
                    && !(p - 3 >= pattern && p[-3] == '[' && p[-2] == '^')
                    && *p != ']')
                  {
                    reg_errcode_t ret
                      = byte_compile_range (range_start, &p, pend, translate,
         syntax, b);
                    if (ret != REG_NOERROR) return (free (compile_stack.stack), ret);
      range_start = 0xffffffff;
                  }

                else if (p[0] == '-' && p[1] != ']')
                  {
                    reg_errcode_t ret;


                    do {if (p == pend) return REG_EEND; c1 = (unsigned char) *p++; if (translate) c1 = (unsigned char) translate[c1]; } while (0);

                    ret = byte_compile_range (c, &p, pend, translate, syntax, b);
                    if (ret != REG_NOERROR) return (free (compile_stack.stack), ret);
      range_start = 0xffffffff;
                  }




                else if (syntax & ((((unsigned long int) 1) << 1) << 1) && c == '[' && *p == ':')
                  {
                    char str[6 + 1];

                    do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);
                    c1 = 0;


                    if (p == pend) return (free (compile_stack.stack), REG_EBRACK);

                    for (;;)
                      {
                        do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);
                        if ((c == ':' && *p == ']') || p == pend)
                          break;
   if (c1 < 6)
     str[c1++] = c;
   else

     str[0] = '\0';
                      }
                    str[c1] = '\0';




                    if (c == ':' && *p == ']')
                      {
# 3254 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                        int ch;
                        boolean is_alnum = ((strcmp (str, "alnum") == 0));
                        boolean is_alpha = ((strcmp (str, "alpha") == 0));
                        boolean is_blank = ((strcmp (str, "blank") == 0));
                        boolean is_cntrl = ((strcmp (str, "cntrl") == 0));
                        boolean is_digit = ((strcmp (str, "digit") == 0));
                        boolean is_graph = ((strcmp (str, "graph") == 0));
                        boolean is_lower = ((strcmp (str, "lower") == 0));
                        boolean is_print = ((strcmp (str, "print") == 0));
                        boolean is_punct = ((strcmp (str, "punct") == 0));
                        boolean is_space = ((strcmp (str, "space") == 0));
                        boolean is_upper = ((strcmp (str, "upper") == 0));
                        boolean is_xdigit = ((strcmp (str, "xdigit") == 0));

                        if (!(((strcmp (str, "alpha") == 0)) || ((strcmp (str, "upper") == 0)) || ((strcmp (str, "lower") == 0)) || ((strcmp (str, "digit") == 0)) || ((strcmp (str, "alnum") == 0)) || ((strcmp (str, "xdigit") == 0)) || ((strcmp (str, "space") == 0)) || ((strcmp (str, "print") == 0)) || ((strcmp (str, "punct") == 0)) || ((strcmp (str, "graph") == 0)) || ((strcmp (str, "cntrl") == 0)) || ((strcmp (str, "blank") == 0))))
     return (free (compile_stack.stack), REG_ECTYPE);



                        do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);

                        if (p == pend) return (free (compile_stack.stack), REG_EBRACK);

                        for (ch = 0; ch < 1 << 8; ch++)
                          {


                            if ( (is_alnum && (1 && 
# 3281 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ((*__ctype_b_loc ())[(int) ((
# 3281 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ch
# 3281 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ))] & (unsigned short int) _ISalnum)
# 3281 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ))
                                || (is_alpha && (1 && 
# 3282 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ((*__ctype_b_loc ())[(int) ((
# 3282 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ch
# 3282 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ))] & (unsigned short int) _ISalpha)
# 3282 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ))
                                || (is_blank && (1 && 
# 3283 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ((*__ctype_b_loc ())[(int) ((
# 3283 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ch
# 3283 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ))] & (unsigned short int) _ISblank)
# 3283 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ))
                                || (is_cntrl && (1 && 
# 3284 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ((*__ctype_b_loc ())[(int) ((
# 3284 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ch
# 3284 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ))] & (unsigned short int) _IScntrl)
# 3284 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                )))
         (b[((unsigned char) (ch)) / 8] |= 1 << (((unsigned char) ch) % 8));
       if ( (is_digit && (1 && 
# 3286 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                           ((*__ctype_b_loc ())[(int) ((
# 3286 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                           ch
# 3286 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                           ))] & (unsigned short int) _ISdigit)
# 3286 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                           ))
                                || (is_graph && (1 && 
# 3287 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ((*__ctype_b_loc ())[(int) ((
# 3287 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ch
# 3287 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ))] & (unsigned short int) _ISgraph)
# 3287 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ))
                                || (is_lower && (1 && 
# 3288 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ((*__ctype_b_loc ())[(int) ((
# 3288 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ch
# 3288 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ))] & (unsigned short int) _ISlower)
# 3288 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ))
                                || (is_print && (1 && 
# 3289 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ((*__ctype_b_loc ())[(int) ((
# 3289 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ch
# 3289 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ))] & (unsigned short int) _ISprint)
# 3289 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                )))
         (b[((unsigned char) (ch)) / 8] |= 1 << (((unsigned char) ch) % 8));
       if ( (is_punct && (1 && 
# 3291 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                           ((*__ctype_b_loc ())[(int) ((
# 3291 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                           ch
# 3291 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                           ))] & (unsigned short int) _ISpunct)
# 3291 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                           ))
                                || (is_space && (1 && 
# 3292 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ((*__ctype_b_loc ())[(int) ((
# 3292 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ch
# 3292 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ))] & (unsigned short int) _ISspace)
# 3292 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ))
                                || (is_upper && (1 && 
# 3293 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ((*__ctype_b_loc ())[(int) ((
# 3293 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ch
# 3293 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ))] & (unsigned short int) _ISupper)
# 3293 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ))
                                || (is_xdigit && (1 && 
# 3294 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ((*__ctype_b_loc ())[(int) ((
# 3294 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ch
# 3294 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                ))] & (unsigned short int) _ISxdigit)
# 3294 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                )))
         (b[((unsigned char) (ch)) / 8] |= 1 << (((unsigned char) ch) % 8));
       if ( translate && (is_upper || is_lower)
    && ((1 && 
# 3297 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
       ((*__ctype_b_loc ())[(int) ((
# 3297 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       ch
# 3297 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
       ))] & (unsigned short int) _ISupper)
# 3297 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       ) || (1 && 
# 3297 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                       ((*__ctype_b_loc ())[(int) ((
# 3297 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                       ch
# 3297 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                       ))] & (unsigned short int) _ISlower)
# 3297 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                       )))
         (b[((unsigned char) (ch)) / 8] |= 1 << (((unsigned char) ch) % 8));
                          }
                        had_char_class = 1;

                      }
                    else
                      {
                        c1++;
                        while (c1--)
                          p--;
                        (b[((unsigned char) ('[')) / 8] |= 1 << (((unsigned char) '[') % 8));
                        (b[((unsigned char) (':')) / 8] |= 1 << (((unsigned char) ':') % 8));
   range_start = ':';
                        had_char_class = 0;
                      }
                  }
                else if (syntax & ((((unsigned long int) 1) << 1) << 1) && c == '[' && *p == '=')
    {
      unsigned char str[
# 3316 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                       16 
# 3316 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                  + 1];





      do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);
      c1 = 0;


      if (p == pend) return (free (compile_stack.stack), REG_EBRACK);

      for (;;)
        {
   do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);
   if ((c == '=' && *p == ']') || p == pend)
     break;
   if (c1 < 
# 3333 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
           16
# 3333 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                     )
     str[c1++] = c;
   else

     str[0] = '\0';
                      }
      str[c1] = '\0';

      if (c == '=' && *p == ']' && str[0] != '\0')
        {
# 3352 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     {
       if (c1 != 1)
         return (free (compile_stack.stack), REG_ECOLLATE);



       do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);


       (b[((unsigned char) (str[0])) / 8] |= 1 << (((unsigned char) str[0]) % 8));
     }
# 3435 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
   had_char_class = 1;
        }
                    else
                      {
                        c1++;
                        while (c1--)
                          p--;
                        (b[((unsigned char) ('[')) / 8] |= 1 << (((unsigned char) '[') % 8));
                        (b[((unsigned char) ('=')) / 8] |= 1 << (((unsigned char) '=') % 8));
   range_start = '=';
                        had_char_class = 0;
                      }
    }
                else if (syntax & ((((unsigned long int) 1) << 1) << 1) && c == '[' && *p == '.')
    {
      unsigned char str[128];





      do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);
      c1 = 0;


      if (p == pend) return (free (compile_stack.stack), REG_EBRACK);

      for (;;)
        {
   do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);
   if ((c == '.' && *p == ']') || p == pend)
     break;
   if (c1 < sizeof (str))
     str[c1++] = c;
   else

     str[0] = '\0';
                      }
      str[c1] = '\0';

      if (c == '.' && *p == ']' && str[0] != '\0')
        {
# 3487 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     {
       if (c1 != 1)
         return (free (compile_stack.stack), REG_ECOLLATE);



       do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);


       (b[((unsigned char) (str[0])) / 8] |= 1 << (((unsigned char) str[0]) % 8));
       range_start = ((const unsigned char *) str)[0];
     }
# 3578 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
   had_char_class = 0;
        }
                    else
                      {
                        c1++;
                        while (c1--)
                          p--;
                        (b[((unsigned char) ('[')) / 8] |= 1 << (((unsigned char) '[') % 8));
                        (b[((unsigned char) ('.')) / 8] |= 1 << (((unsigned char) '.') % 8));
   range_start = '.';
                        had_char_class = 0;
                      }
    }
                else
                  {
                    had_char_class = 0;
                    (b[((unsigned char) (c)) / 8] |= 1 << (((unsigned char) c) % 8));
      range_start = c;
                  }
              }



            while ((int) b[-1] > 0 && b[b[-1] - 1] == 0)
              b[-1]--;
            b += b[-1];

          }
          break;


 case '(':
          if (syntax & (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            goto handle_open;
          else
            goto normal_char;


        case ')':
          if (syntax & (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            goto handle_close;
          else
            goto normal_char;


        case '\n':
          if (syntax & (((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            goto handle_alt;
          else
            goto normal_char;


 case '|':
          if (syntax & (((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            goto handle_alt;
          else
            goto normal_char;


        case '{':
           if (syntax & (((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) && syntax & ((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
             goto handle_interval;
           else
             goto normal_char;


        case '\\':
          if (p == pend) return (free (compile_stack.stack), REG_EESCAPE);




          do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; } while (0);

          switch (c)
            {
            case '(':
              if (syntax & (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                goto normal_backslash;

            handle_open:
              bufp->re_nsub++;
              regnum++;

              if ((compile_stack.avail == compile_stack.size))
                {
                  ((compile_stack.stack) = (compile_stack_elt_t *) realloc (compile_stack.stack, (compile_stack.size << 1) * sizeof (compile_stack_elt_t)))
                                                ;
                  if (compile_stack.stack == 
# 3666 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                            ((void *)0)
# 3666 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                ) return REG_ESPACE;

                  compile_stack.size <<= 1;
                }





              (compile_stack.stack[compile_stack.avail]).begalt_offset = begalt - bufp->buffer;
              (compile_stack.stack[compile_stack.avail]).fixup_alt_jump
                = fixup_alt_jump ? fixup_alt_jump - bufp->buffer + 1 : 0;
              (compile_stack.stack[compile_stack.avail]).laststart_offset = b - bufp->buffer;
              (compile_stack.stack[compile_stack.avail]).regnum = regnum;





              if (regnum <= 255)
                {
                  (compile_stack.stack[compile_stack.avail]).inner_group_offset = b
      - bufp->buffer + 2;
                  do { while ((unsigned long) (b - bufp->buffer + (3)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 3689 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                 ((void *)0)
# 3689 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                 ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (start_memory); *b++ = (unsigned char) (regnum); *b++ = (unsigned char) (0); } while (0);
                }

              compile_stack.avail++;

              fixup_alt_jump = 0;
              laststart = 0;
              begalt = b;



       pending_exact = 0;
              break;


            case ')':
              if (syntax & (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) goto normal_backslash;

              if ((compile_stack.avail == 0))
  {
    if (syntax & (((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
      goto normal_backslash;
    else
      return (free (compile_stack.stack), REG_ERPAREN);
  }

            handle_close:
              if (fixup_alt_jump)
                {



                  do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 3721 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                 ((void *)0)
# 3721 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                 ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (push_dummy_failure); } while (0);



                  byte_store_op1 (jump_past_alt, fixup_alt_jump, (int) ((b - 1) - (fixup_alt_jump) - (1 + 2)));
                }


              if ((compile_stack.avail == 0))
  {
    if (syntax & (((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
      goto normal_char;
    else
      return (free (compile_stack.stack), REG_ERPAREN);
  }



              ;
              {



                regnum_t this_group_regnum;

                compile_stack.avail--;
                begalt = bufp->buffer + (compile_stack.stack[compile_stack.avail]).begalt_offset;
                fixup_alt_jump
                  = (compile_stack.stack[compile_stack.avail]).fixup_alt_jump
                    ? bufp->buffer + (compile_stack.stack[compile_stack.avail]).fixup_alt_jump - 1
                    : 0;
                laststart = bufp->buffer + (compile_stack.stack[compile_stack.avail]).laststart_offset;
                this_group_regnum = (compile_stack.stack[compile_stack.avail]).regnum;



  pending_exact = 0;



                if (this_group_regnum <= 255)
                  {
      unsigned char *inner_group_loc
                      = bufp->buffer + (compile_stack.stack[compile_stack.avail]).inner_group_offset;

                    *inner_group_loc = regnum - this_group_regnum;
                    do { while ((unsigned long) (b - bufp->buffer + (3)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 3767 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                   ((void *)0)
# 3767 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                   ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (stop_memory); *b++ = (unsigned char) (this_group_regnum); *b++ = (unsigned char) (regnum - this_group_regnum); } while (0)
                                                           ;
                  }
              }
              break;


            case '|':
              if (syntax & ((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) || syntax & (((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                goto normal_backslash;
            handle_alt:
              if (syntax & ((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                goto normal_char;



              while ((unsigned long) (b - bufp->buffer + (1 + 2)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 3783 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
             ((void *)0)
# 3783 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
             ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0);
              byte_insert_op1 (on_failure_jump, begalt, (int) ((b + 2 + 2 * 2) - (begalt) - (1 + 2)), b)
                                      ;
              pending_exact = 0;
              b += 1 + 2;
# 3805 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
              if (fixup_alt_jump)
                byte_store_op1 (jump_past_alt, fixup_alt_jump, (int) ((b) - (fixup_alt_jump) - (1 + 2)));




              fixup_alt_jump = b;
              while ((unsigned long) (b - bufp->buffer + (1 + 2)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 3812 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
             ((void *)0)
# 3812 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
             ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0);
              b += 1 + 2;

              laststart = 0;
              begalt = b;
              break;


            case '{':

              if (!(syntax & (((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))


    || (syntax & ((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
                goto normal_backslash;

            handle_interval:
              {



                int lower_bound = -1, upper_bound = -1;



  const char *beg_interval = p;

                if (p == pend)
    goto invalid_interval;

                { while (p != pend) { do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0); if (c < '0' || c > '9') break; if (lower_bound <= (0x7fff)) { if (lower_bound < 0) lower_bound = 0; lower_bound = lower_bound * 10 + c - '0'; } } };

                if (c == ',')
                  {
                    { while (p != pend) { do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0); if (c < '0' || c > '9') break; if (upper_bound <= (0x7fff)) { if (upper_bound < 0) upper_bound = 0; upper_bound = upper_bound * 10 + c - '0'; } } };
      if (upper_bound < 0)
        upper_bound = (0x7fff);
                  }
                else

                  upper_bound = lower_bound;

                if (! (0 <= lower_bound && lower_bound <= upper_bound))
    goto invalid_interval;

                if (!(syntax & ((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
                  {
      if (c != '\\' || p == pend)
        goto invalid_interval;
                    do {if (p == pend) return REG_EEND; c = (unsigned char) *p++; if (translate) c = (unsigned char) translate[c]; } while (0);
                  }

                if (c != '}')
    goto invalid_interval;


                if (!laststart)
                  {
      if (syntax & (((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1)
   && !(syntax & (((((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
                      return (free (compile_stack.stack), REG_BADRPT);
                    else if (syntax & ((((((unsigned long int) 1) << 1) << 1) << 1) << 1))
                      laststart = b;
                    else
                      goto unfetch_interval;
                  }



                if ((0x7fff) < upper_bound)
    return (free (compile_stack.stack), REG_BADBR);






                 if (upper_bound == 0)
                   {
                     while ((unsigned long) (b - bufp->buffer + (1 + 2)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 3891 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                    ((void *)0)
# 3891 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                    ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0);
                     byte_insert_op1 (jump, laststart, (int) ((b + 1 + 2) - (laststart) - (1 + 2)), b)
                            ;
                     b += 1 + 2;
                   }
# 3906 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                 else
                   {

                     unsigned nbytes = 2 + 4 * 2 +
         (upper_bound > 1) * (2 + 4 * 2);

                     while ((unsigned long) (b - bufp->buffer + (nbytes)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 3912 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                    ((void *)0)
# 3912 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                    ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0);






                     byte_insert_op2 (succeed_n, laststart, (int) ((b + 1 + 2 * 2 + (upper_bound > 1) * (1 + 2 * 2)) - (laststart) - (1 + 2)), lower_bound, b)


                     ;
                     b += 1 + 2 * 2;
# 3932 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                     byte_insert_op2 (set_number_at, laststart, 1
     + 2 * 2, lower_bound, b);
                     b += 1 + 2 * 2;

                     if (upper_bound > 1)
                       {






                         byte_store_op2 (jump_n, b, (int) ((laststart + 2 * 2 + 1) - (b) - (1 + 2)), upper_bound - 1)

                                                      ;
                         b += 1 + 2 * 2;
# 3963 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                         byte_insert_op2 (set_number_at, laststart,
          b - laststart,
          upper_bound - 1, b);
                         b += 1 + 2 * 2;
                       }
                   }
                pending_exact = 0;
  break;

       invalid_interval:
  if (!(syntax & (((((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
    return (free (compile_stack.stack), p == pend ? REG_EBRACE : REG_BADBR);
       unfetch_interval:

  p = beg_interval;
  c = '{';
  if (syntax & ((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
    goto normal_char;
  else
    goto normal_backslash;
       }
# 4006 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
            case 'w':
       if (syntax & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
  goto normal_char;
              laststart = b;
              do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 4010 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
             ((void *)0)
# 4010 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
             ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (wordchar); } while (0);
              break;


            case 'W':
       if (syntax & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
  goto normal_char;
              laststart = b;
              do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 4018 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
             ((void *)0)
# 4018 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
             ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (notwordchar); } while (0);
              break;


            case '<':
       if (syntax & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
  goto normal_char;
              do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 4025 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
             ((void *)0)
# 4025 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
             ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (wordbeg); } while (0);
              break;

            case '>':
       if (syntax & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
  goto normal_char;
              do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 4031 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
             ((void *)0)
# 4031 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
             ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (wordend); } while (0);
              break;

            case 'b':
       if (syntax & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
  goto normal_char;
              do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 4037 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
             ((void *)0)
# 4037 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
             ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (wordbound); } while (0);
              break;

            case 'B':
       if (syntax & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
  goto normal_char;
              do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 4043 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
             ((void *)0)
# 4043 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
             ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (notwordbound); } while (0);
              break;

            case '`':
       if (syntax & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
  goto normal_char;
              do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 4049 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
             ((void *)0)
# 4049 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
             ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (begbuf); } while (0);
              break;

            case '\'':
       if (syntax & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
  goto normal_char;
              do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 4055 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
             ((void *)0)
# 4055 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
             ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (endbuf); } while (0);
              break;

            case '1': case '2': case '3': case '4': case '5':
            case '6': case '7': case '8': case '9':
              if (syntax & ((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                goto normal_char;

              c1 = c - '0';

              if (c1 > regnum)
                return (free (compile_stack.stack), REG_ESUBREG);


              if (group_in_compile_stack (compile_stack, (regnum_t) c1))
                goto normal_char;

              laststart = b;
              do { while ((unsigned long) (b - bufp->buffer + (2)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 4073 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
             ((void *)0)
# 4073 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
             ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (duplicate); *b++ = (unsigned char) (c1); } while (0);
              break;


            case '+':
            case '?':
              if (syntax & (((unsigned long int) 1) << 1))
                goto handle_plus;
              else
                goto normal_backslash;

            default:
            normal_backslash:



              c = (translate ? (char) translate[(unsigned char) (c)] : (char) (c));
              goto normal_char;
            }
          break;


 default:

 normal_char:

          if (!pending_exact







              || pending_exact + *pending_exact + 1 != b


       || *pending_exact == (1 << 8) - 1


              || *p == '*' || *p == '^'
       || ((syntax & (((unsigned long int) 1) << 1))
    ? *p == '\\' && (p[1] == '+' || p[1] == '?')
    : (*p == '+' || *p == '?'))
       || ((syntax & (((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                  && ((syntax & ((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        ? *p == '{'
                      : (p[0] == '\\' && p[1] == '{'))))
     {


              laststart = b;
# 4134 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       do { while ((unsigned long) (b - bufp->buffer + (2)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 4134 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
      ((void *)0)
# 4134 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
      ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (exactn); *b++ = (unsigned char) (0); } while (0);

       pending_exact = b - 1;
            }

   do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 4139 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
  ((void *)0)
# 4139 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (c); } while (0);
          (*pending_exact)++;
   break;
        }
    }




  if (fixup_alt_jump)
    byte_store_op1 (jump_past_alt, fixup_alt_jump, (int) ((b) - (fixup_alt_jump) - (1 + 2)));

  if (!(compile_stack.avail == 0))
    return (free (compile_stack.stack), REG_EPAREN);



  if (syntax & ((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
    do { while ((unsigned long) (b - bufp->buffer + (1)) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; bufp->allocated <<= 1; if (bufp->allocated > (1L << 16)) bufp->allocated = (1L << 16); bufp->buffer = (unsigned char *) realloc ((bufp->buffer), (bufp->allocated)); if (bufp->buffer == 
# 4157 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
   ((void *)0)
# 4157 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
   ) return REG_ESPACE; if (old_buffer != bufp->buffer) { ptrdiff_t incr = bufp->buffer - old_buffer; (b) += incr; (begalt) += incr; if (fixup_alt_jump) (fixup_alt_jump) += incr; if (laststart) (laststart) += incr; if (pending_exact) (pending_exact) += incr; } } while (0); *b++ = (unsigned char) (succeed); } while (0);






  free (compile_stack.stack);





  bufp->used = b - bufp->buffer;
# 4222 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  return REG_NOERROR;
}






static void
byte_store_op1 (re_opcode_t op, unsigned char *loc, int arg)
{
  *loc = (unsigned char) op;
  do { (loc + 1)[0] = (arg) & 0377; (loc + 1)[1] = (arg) >> 8; } while (0);
}





static void
byte_store_op2 (re_opcode_t op, unsigned char *loc, int arg1, int arg2)
{
  *loc = (unsigned char) op;
  do { (loc + 1)[0] = (arg1) & 0377; (loc + 1)[1] = (arg1) >> 8; } while (0);
  do { (loc + 1 + 2)[0] = (arg2) & 0377; (loc + 1 + 2)[1] = (arg2) >> 8; } while (0);
}






static void
byte_insert_op1 (re_opcode_t op, unsigned char *loc, int arg, unsigned char *end)
{
  register unsigned char *pfrom = end;
  register unsigned char *pto = end + 1 + 2;

  while (pfrom != loc)
    *--pto = *--pfrom;

  byte_store_op1 (op, loc, arg);
}





static void
byte_insert_op2 (re_opcode_t op, unsigned char *loc, int arg1,
                    int arg2, unsigned char *end)
{
  register unsigned char *pfrom = end;
  register unsigned char *pto = end + 1 + 2 * 2;

  while (pfrom != loc)
    *--pto = *--pfrom;

  byte_store_op2 (op, loc, arg1, arg2);
}






static boolean
byte_at_begline_loc_p (const char *pattern, const char *p,
                          reg_syntax_t syntax)
{
  const char *prev = p - 2;
  boolean prev_prev_backslash = prev > pattern && prev[-1] == '\\';

  return

       (*prev == '(' && (syntax & (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) || prev_prev_backslash))

    || (*prev == '|' && (syntax & (((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) || prev_prev_backslash));
}





static boolean
byte_at_endline_loc_p (const char *p, const char *pend,
                          reg_syntax_t syntax)
{
  const char *next = p;
  boolean next_backslash = *next == '\\';
  const char *next_next = p + 1 < pend ? p + 1 : 0;

  return

       (syntax & (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) ? *next == ')'
        : next_backslash && next_next && *next_next == ')')

    || (syntax & (((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) ? *next == '|'
        : next_backslash && next_next && *next_next == '|');
}
# 4443 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static reg_errcode_t
byte_compile_range (unsigned int range_start_char, const char **p_ptr,
                    const char *pend, char * translate,
                    reg_syntax_t syntax, unsigned char *b)
{
  unsigned this_char;
  const char *p = *p_ptr;
  reg_errcode_t ret;





  unsigned end_char;


  if (p == pend)
    return REG_ERANGE;



  (*p_ptr)++;


  ret = syntax & ((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) ? REG_ERANGE : REG_NOERROR;
# 4489 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  range_start_char = (translate ? (char) translate[(unsigned char) (range_start_char)] : (char) (range_start_char));





  end_char = ((unsigned)(translate ? (char) translate[(unsigned char) (p[0])] : (char) (p[0])) & ((1 << 8) - 1));

  for (this_char = range_start_char; this_char <= end_char; ++this_char)
    {
      (b[((unsigned char) ((translate ? (char) translate[(unsigned char) (this_char)] : (char) (this_char)))) / 8] |= 1 << (((unsigned char) (translate ? (char) translate[(unsigned char) (this_char)] : (char) (this_char))) % 8));
      ret = REG_NOERROR;
    }


  return ret;
}
# 4542 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static int
byte_re_compile_fastmap (struct re_pattern_buffer *bufp)
{
  int j, k;

  byte_fail_stack_type fail_stack;


  char *destination;


  register char *fastmap = bufp->fastmap;







  unsigned char *pattern = bufp->buffer;
  register unsigned char *pend = pattern + bufp->used;

  unsigned char *p = pattern;
# 4576 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  boolean path_can_be_null = 1;


  boolean succeed_n_p = 0;

  ;

  do { fail_stack.stack = (byte_fail_stack_elt_t *) 
# 4583 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 __builtin_alloca (
# 4583 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 5 * sizeof (byte_fail_stack_elt_t)
# 4583 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 )
# 4583 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ; if (fail_stack.stack == 
# 4583 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 ((void *)0)
# 4583 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ) return -2; fail_stack.size = 5; fail_stack.avail = 0; } while (0);
  ((void) memset (fastmap, '\0', 1 << 8));
  bufp->fastmap_accurate = 1;
  bufp->can_be_null = 0;

  while (1)
    {
      if (p == pend || *p == (unsigned char) succeed)
 {

   if (!(fail_stack.avail == 0))
     {
       bufp->can_be_null |= path_can_be_null;


       path_can_be_null = 1;

       p = fail_stack.stack[--fail_stack.avail].pointer;

       continue;
     }
   else
     break;
 }


      ;

      switch (((re_opcode_t) *p++))
 {






 case duplicate:
   bufp->can_be_null = 1;
          goto done;
# 4632 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 case exactn:
          fastmap[p[1]] = 1;
   break;
# 4652 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
        case charset:
          for (j = *p++ * 8 - 1; j >= 0; j--)
     if (p[j / 8] & (1 << (j % 8)))
              fastmap[j] = 1;
   break;


 case charset_not:

   for (j = *p * 8; j < (1 << 8); j++)
            fastmap[j] = 1;

   for (j = *p++ * 8 - 1; j >= 0; j--)
     if (!(p[j / 8] & (1 << (j % 8))))
              fastmap[j] = 1;
          break;


 case wordchar:
   for (j = 0; j < (1 << 8); j++)
     if (re_syntax_table[(unsigned char) (j)] == 1)
       fastmap[j] = 1;
   break;


 case notwordchar:
   for (j = 0; j < (1 << 8); j++)
     if (re_syntax_table[(unsigned char) (j)] != 1)
       fastmap[j] = 1;
   break;


        case anychar:
   {
     int fastmap_newline = fastmap['\n'];


     for (j = 0; j < (1 << 8); j++)
       fastmap[j] = 1;


     if (!(bufp->syntax & ((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1)))
       fastmap['\n'] = fastmap_newline;



     else if (bufp->can_be_null)
       goto done;


     break;
   }
# 4733 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
        case no_op:
        case begline:
        case endline:
 case begbuf:
 case endbuf:
 case wordbound:
 case notwordbound:
 case wordbeg:
 case wordend:
        case push_dummy_failure:
          continue;


 case jump_n:
        case pop_failure_jump:
 case maybe_pop_jump:
 case jump:
        case jump_past_alt:
 case dummy_failure_jump:
          do { do { (j) = *(p) & 0377; (j) += ((unsigned) ((signed char) (*((p) + 1)))) << 8; } while (0); (p) += 2; } while (0);
   p += j;
   if (j > 0)
     continue;






          if ((re_opcode_t) *p != on_failure_jump
       && (re_opcode_t) *p != succeed_n)
     continue;

          p++;
          do { do { (j) = *(p) & 0377; (j) += ((unsigned) ((signed char) (*((p) + 1)))) << 8; } while (0); (p) += 2; } while (0);
          p += j;


          if (!(fail_stack.avail == 0)
       && fail_stack.stack[fail_stack.avail - 1].pointer == p)
            fail_stack.avail--;

          continue;


        case on_failure_jump:
        case on_failure_keep_string_jump:
 handle_on_failure_jump:
          do { do { (j) = *(p) & 0377; (j) += ((unsigned) ((signed char) (*((p) + 1)))) << 8; } while (0); (p) += 2; } while (0);
# 4790 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
          if (p + j < pend)
            {
              if (!(((fail_stack.avail == fail_stack.size) && !((fail_stack).size > (unsigned) (xre_max_failures * (5 * 3 + 4)) ? 0 : ((fail_stack).stack = (byte_fail_stack_elt_t *) (destination = (char *) 
# 4792 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                  __builtin_alloca (
# 4792 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                  ((fail_stack).size << 1) * sizeof (byte_fail_stack_elt_t)
# 4792 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                  )
# 4792 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                  , memcpy (destination, (fail_stack).stack, (fail_stack).size * sizeof (byte_fail_stack_elt_t))), (fail_stack).stack == 
# 4792 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                  ((void *)0) 
# 4792 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                  ? 0 : ((fail_stack).size <<= 1, 1)))) ? 0 : ((fail_stack).stack[(fail_stack).avail++].pointer = p + j, 1)))
  {
    ;
    return -2;
  }
            }
          else
            bufp->can_be_null = 1;

          if (succeed_n_p)
            {
              do { do { (k) = *(p) & 0377; (k) += ((unsigned) ((signed char) (*((p) + 1)))) << 8; } while (0); (p) += 2; } while (0);
              succeed_n_p = 0;
     }

          continue;


 case succeed_n:

          p += 2;


          do { do { (k) = *(p) & 0377; (k) += ((unsigned) ((signed char) (*((p) + 1)))) << 8; } while (0); (p) += 2; } while (0);
          if (k == 0)
     {
              p -= 2 * 2;
         succeed_n_p = 1;
              goto handle_on_failure_jump;
            }
          continue;


 case set_number_at:
          p += 2 * 2;
          continue;


 case start_memory:
        case stop_memory:
   p += 2;
   continue;


 default:
          abort ();
        }







      path_can_be_null = 0;
      p = pend;
    }



  bufp->can_be_null |= path_can_be_null;

 done:
  ;
  return 0;
}
# 5008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static int
byte_re_search_2 (struct re_pattern_buffer *bufp, const char *string1,
                     int size1, const char *string2, int size2,
                     int startpos, int range,
                     struct re_registers *regs, int stop)
{
  int val;
  register char *fastmap = bufp->fastmap;
  register char * translate = bufp->translate;
  int total_size = size1 + size2;
  int endpos = startpos + range;
# 5031 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  if (startpos < 0 || startpos > total_size)
    return -1;




  if (endpos < 0)
    range = 0 - startpos;
  else if (endpos > total_size)
    range = total_size - startpos;



  if (bufp->used > 0 && range > 0
      && ((re_opcode_t) bufp->buffer[0] == begbuf

   || ((re_opcode_t) bufp->buffer[0] == begline
       && !bufp->newline_anchor)))
    {
      if (startpos > 0)
 return -1;
      else
 range = 1;
    }
# 5068 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  if (fastmap && !bufp->fastmap_accurate)
    if (xre_compile_fastmap (bufp) == -2)
      return -2;
# 5148 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  for (;;)
    {




      if (fastmap && startpos < total_size && !bufp->can_be_null)
 {
   if (range > 0)
     {
       register const char *d;
       register int lim = 0;
       int irange = range;

              if (startpos < size1 && startpos + range >= size1)
                lim = range - (size1 - startpos);

       d = (startpos >= size1 ? string2 - size1 : string1) + startpos;



       if (translate)
                while (range > lim
                       && !fastmap[(unsigned char)
       translate[(unsigned char) *d++]])
                  range--;
       else
                while (range > lim && !fastmap[(unsigned char) *d++])
                  range--;

       startpos += irange - range;
     }
   else
     {
       register char c = (size1 == 0 || startpos >= size1
          ? string2[startpos - size1]
          : string1[startpos]);

       if (!fastmap[(unsigned char) (translate ? (char) translate[(unsigned char) (c)] : (char) (c))])
  goto advance;
     }
 }


      if (range >= 0 && startpos == total_size && fastmap
          && !bufp->can_be_null)
       {



         return -1;
       }
# 5208 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
      val = byte_re_match_2_internal (bufp, string1, size1, string2,
          size2, startpos, regs, stop);
# 5218 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
      if (val >= 0)
 {



   return startpos;
 }

      if (val == -2)
 {



   return -2;
 }

    advance:
      if (!range)
        break;
      else if (range > 0)
        {
          range--;
          startpos++;
        }
      else
        {
          range++;
          startpos--;
        }
    }



  return -1;
}
# 5423 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static boolean byte_group_match_null_string_p (unsigned char **p,
                                                  unsigned char *end,
     byte_register_info_type *reg_info);
static boolean byte_alt_match_null_string_p (unsigned char *p,
                                                unsigned char *end,
     byte_register_info_type *reg_info);
static boolean byte_common_op_match_null_string_p (unsigned char **p,
                                                      unsigned char *end,
     byte_register_info_type *reg_info);
static int byte_bcmp_translate (const char *s1, const char *s2,
                                   int len, char *translate);
# 5544 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static int
byte_re_match_2_internal (struct re_pattern_buffer *bufp,
                          const char *string1, int size1,
                          const char *string2, int size2,
                          int pos,
     struct re_registers *regs, int stop)

{

  int mcnt;
  unsigned char *p1;
# 5563 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  const char *end1, *end2;



  const char *end_match_1, *end_match_2;


  const char *d, *dend;






  unsigned char *p = bufp->buffer;
  register unsigned char *pend = p + bufp->used;




  unsigned char *just_past_start_mem = 0;


  char * translate = bufp->translate;
# 5598 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  byte_fail_stack_type fail_stack;
# 5614 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  size_t num_regs = bufp->re_nsub + 1;


  active_reg_t lowest_active_reg = ((1 << 8) + 1);
  active_reg_t highest_active_reg = (1 << 8);
# 5628 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  const char **regstart, **regend;
# 5637 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  const char **old_regstart, **old_regend;
# 5647 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  byte_register_info_type *reg_info;






  unsigned best_regs_set = 0;

  const char **best_regstart, **best_regend;
# 5667 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  const char *match_end = 
# 5667 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                           ((void *)0)
# 5667 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                               ;


  int set_regs_matched_done = 0;



  const char **reg_dummy;
  byte_register_info_type *reg_info_dummy;







  ;

  do { fail_stack.stack = (byte_fail_stack_elt_t *) 
# 5685 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 __builtin_alloca (
# 5685 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 5 * sizeof (byte_fail_stack_elt_t)
# 5685 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 )
# 5685 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ; if (fail_stack.stack == 
# 5685 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 ((void *)0)
# 5685 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ) return -2; fail_stack.size = 5; fail_stack.avail = 0; } while (0);







  if (bufp->re_nsub)
    {
      regstart = ((const char * *) 
# 5695 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                __builtin_alloca (
# 5695 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                (num_regs) * sizeof (const char *)
# 5695 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                )
# 5695 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                );
      regend = ((const char * *) 
# 5696 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
              __builtin_alloca (
# 5696 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
              (num_regs) * sizeof (const char *)
# 5696 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
              )
# 5696 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
              );
      old_regstart = ((const char * *) 
# 5697 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                    __builtin_alloca (
# 5697 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                    (num_regs) * sizeof (const char *)
# 5697 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                    )
# 5697 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                    );
      old_regend = ((const char * *) 
# 5698 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                  __builtin_alloca (
# 5698 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                  (num_regs) * sizeof (const char *)
# 5698 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                  )
# 5698 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                  );
      best_regstart = ((const char * *) 
# 5699 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                     __builtin_alloca (
# 5699 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                     (num_regs) * sizeof (const char *)
# 5699 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                     )
# 5699 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                     );
      best_regend = ((const char * *) 
# 5700 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                   __builtin_alloca (
# 5700 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                   (num_regs) * sizeof (const char *)
# 5700 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                   )
# 5700 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                   );
      reg_info = ((byte_register_info_type *) 
# 5701 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                __builtin_alloca (
# 5701 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                (num_regs) * sizeof (byte_register_info_type)
# 5701 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                )
# 5701 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                );
      reg_dummy = ((const char * *) 
# 5702 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                 __builtin_alloca (
# 5702 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                 (num_regs) * sizeof (const char *)
# 5702 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                 )
# 5702 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                 );
      reg_info_dummy = ((byte_register_info_type *) 
# 5703 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                      __builtin_alloca (
# 5703 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                      (num_regs) * sizeof (byte_register_info_type)
# 5703 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                      )
# 5703 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                      );

      if (!(regstart && regend && old_regstart && old_regend && reg_info
            && best_regstart && best_regend && reg_dummy && reg_info_dummy))
        {
          do { ; if (regstart) ((void)0); regstart = 
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (regend) ((void)0); regend = 
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (old_regstart) ((void)0); old_regstart = 
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (old_regend) ((void)0); old_regend = 
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (best_regstart) ((void)0); best_regstart = 
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (best_regend) ((void)0); best_regend = 
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (reg_info) ((void)0); reg_info = 
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (reg_dummy) ((void)0); reg_dummy = 
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (reg_info_dummy) ((void)0); reg_info_dummy = 
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 5708 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; } while (0);
          return -2;
        }
    }
  else
    {


      regstart = regend = old_regstart = old_regend = best_regstart
        = best_regend = reg_dummy = 
# 5717 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                   ((void *)0)
# 5717 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                       ;
      reg_info = reg_info_dummy = (byte_register_info_type *) 
# 5718 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                                ((void *)0)
# 5718 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                                    ;
    }






  if (pos < 0 || pos > size1 + size2)

    {
      do { ; if (regstart) ((void)0); regstart = 
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
     ((void *)0)
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     ; if (regend) ((void)0); regend = 
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
     ((void *)0)
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     ; if (old_regstart) ((void)0); old_regstart = 
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
     ((void *)0)
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     ; if (old_regend) ((void)0); old_regend = 
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
     ((void *)0)
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     ; if (best_regstart) ((void)0); best_regstart = 
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
     ((void *)0)
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     ; if (best_regend) ((void)0); best_regend = 
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
     ((void *)0)
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     ; if (reg_info) ((void)0); reg_info = 
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
     ((void *)0)
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     ; if (reg_dummy) ((void)0); reg_dummy = 
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
     ((void *)0)
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     ; if (reg_info_dummy) ((void)0); reg_info_dummy = 
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
     ((void *)0)
# 5729 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     ; } while (0);
      return -1;
    }
# 5787 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  for (mcnt = 1; (unsigned) mcnt < num_regs; mcnt++)
    {
      regstart[mcnt] = regend[mcnt]
        = old_regstart[mcnt] = old_regend[mcnt] = (&byte_reg_unset_dummy);

      ((reg_info[mcnt]).bits.match_null_string_p) = 3;
      ((reg_info[mcnt]).bits.is_active) = 0;
      ((reg_info[mcnt]).bits.matched_something) = 0;
      ((reg_info[mcnt]).bits.ever_matched_something) = 0;
    }



  if (size2 == 0 && string1 != 
# 5800 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                              ((void *)0)
# 5800 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                  )
    {
      string2 = string1;
      size2 = size1;
      string1 = 0;
      size1 = 0;






    }
  end1 = string1 + size1;
  end2 = string2 + size2;
# 5838 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  if (stop <= size1)
    {
      end_match_1 = string1 + stop;
      end_match_2 = string2;
    }
  else
    {
      end_match_1 = end1;
      end_match_2 = string2 + stop - size1;
    }
# 5876 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
  if (size1 > 0 && pos <= size1)
    {
      d = string1 + pos;
      dend = end_match_1;
    }
  else
    {
      d = string2 + pos - size1;
      dend = end_match_2;
    }


  ;
  ;
  ;
  ;
  ;




  for (;;)
    {



      ;


      if (p == pend)
 {
          ;



          if (d != end_match_2)
     {


       boolean same_str_p;


       boolean best_match_p;

              same_str_p = ((size1 && string1 <= (match_end) && (match_end) <= string1 + size1)
                            == (dend == end_match_1));



       if (same_str_p)
  best_match_p = d > match_end;
       else
  best_match_p = !(dend == end_match_1);

              ;

              if (!(fail_stack.avail == 0))
                {


                  if (!best_regs_set || best_match_p)
                    {
                      best_regs_set = 1;
                      match_end = d;

                      ;

                      for (mcnt = 1; (unsigned) mcnt < num_regs; mcnt++)
                        {
                          best_regstart[mcnt] = regstart[mcnt];
                          best_regend[mcnt] = regend[mcnt];
                        }
                    }
                  goto fail;
                }




              else if (best_regs_set && !best_match_p)
                {
           restore_best_regs:





                  ;

                  d = match_end;
                  dend = ((d >= string1 && d <= end1)
             ? end_match_1 : end_match_2);

    for (mcnt = 1; (unsigned) mcnt < num_regs; mcnt++)
      {
        regstart[mcnt] = best_regstart[mcnt];
        regend[mcnt] = best_regend[mcnt];
      }
                }
            }

 succeed_label:
          ;

          if (regs && !bufp->no_sub)
     {

              if (bufp->regs_allocated == 0)
                {


                  regs->num_regs = ((30) > (num_regs + 1) ? (30) : (num_regs + 1));
                  regs->start = ((xregoff_t *) malloc ((regs->num_regs) * sizeof (xregoff_t)));
                  regs->end = ((xregoff_t *) malloc ((regs->num_regs) * sizeof (xregoff_t)));
                  if (regs->start == 
# 5990 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                    ((void *)0) 
# 5990 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                         || regs->end == 
# 5990 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                         ((void *)0)
# 5990 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                             )
      {
        do { ; if (regstart) ((void)0); regstart = 
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
       ((void *)0)
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       ; if (regend) ((void)0); regend = 
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
       ((void *)0)
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       ; if (old_regstart) ((void)0); old_regstart = 
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
       ((void *)0)
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       ; if (old_regend) ((void)0); old_regend = 
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
       ((void *)0)
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       ; if (best_regstart) ((void)0); best_regstart = 
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
       ((void *)0)
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       ; if (best_regend) ((void)0); best_regend = 
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
       ((void *)0)
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       ; if (reg_info) ((void)0); reg_info = 
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
       ((void *)0)
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       ; if (reg_dummy) ((void)0); reg_dummy = 
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
       ((void *)0)
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       ; if (reg_info_dummy) ((void)0); reg_info_dummy = 
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
       ((void *)0)
# 5992 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       ; } while (0);
        return -2;
      }
                  bufp->regs_allocated = 1;
                }
              else if (bufp->regs_allocated == 1)
                {


                  if (regs->num_regs < num_regs + 1)
                    {
                      regs->num_regs = num_regs + 1;
                      ((regs->start) = (xregoff_t *) realloc (regs->start, (regs->num_regs) * sizeof (xregoff_t)));
                      ((regs->end) = (xregoff_t *) realloc (regs->end, (regs->num_regs) * sizeof (xregoff_t)));
                      if (regs->start == 
# 6006 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                        ((void *)0) 
# 6006 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                             || regs->end == 
# 6006 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                             ((void *)0)
# 6006 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                                 )
   {
     do { ; if (regstart) ((void)0); regstart = 
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
    ((void *)0)
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
    ; if (regend) ((void)0); regend = 
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
    ((void *)0)
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
    ; if (old_regstart) ((void)0); old_regstart = 
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
    ((void *)0)
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
    ; if (old_regend) ((void)0); old_regend = 
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
    ((void *)0)
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
    ; if (best_regstart) ((void)0); best_regstart = 
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
    ((void *)0)
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
    ; if (best_regend) ((void)0); best_regend = 
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
    ((void *)0)
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
    ; if (reg_info) ((void)0); reg_info = 
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
    ((void *)0)
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
    ; if (reg_dummy) ((void)0); reg_dummy = 
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
    ((void *)0)
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
    ; if (reg_info_dummy) ((void)0); reg_info_dummy = 
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
    ((void *)0)
# 6008 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
    ; } while (0);
     return -2;
   }
                    }
                }
              else
  {


    ;
  }




              if (regs->num_regs > 0)
                {
                  regs->start[0] = pos;
# 6034 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                  regs->end[0] = ((dend == end_match_1)
      ? ((xregoff_t) (d - string1))
             : ((xregoff_t) (d - string2 + size1)));

                }



       for (mcnt = 1; (unsigned) mcnt < ((num_regs) < (regs->num_regs) ? (num_regs) : (regs->num_regs));
     mcnt++)
  {
                  if (((regstart[mcnt]) == (&byte_reg_unset_dummy)) || ((regend[mcnt]) == (&byte_reg_unset_dummy)))
                    regs->start[mcnt] = regs->end[mcnt] = -1;
                  else
                    {
        regs->start[mcnt]
   = (xregoff_t) ((size1 && string1 <= (regstart[mcnt]) && (regstart[mcnt]) <= string1 + size1) ? ((xregoff_t) ((regstart[mcnt]) - string1)) : ((xregoff_t) ((regstart[mcnt]) - string2 + size1)));
                      regs->end[mcnt]
   = (xregoff_t) ((size1 && string1 <= (regend[mcnt]) && (regend[mcnt]) <= string1 + size1) ? ((xregoff_t) ((regend[mcnt]) - string1)) : ((xregoff_t) ((regend[mcnt]) - string2 + size1)));
                    }
  }






              for (mcnt = num_regs; (unsigned) mcnt < regs->num_regs; mcnt++)
                regs->start[mcnt] = regs->end[mcnt] = -1;
     }

         

                                                                        ;
          ;
# 6078 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
          mcnt = d - pos - ((dend == end_match_1)
       ? string1
       : string2 - size1);


          ;

          do { ; if (regstart) ((void)0); regstart = 
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (regend) ((void)0); regend = 
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (old_regstart) ((void)0); old_regstart = 
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (old_regend) ((void)0); old_regend = 
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (best_regstart) ((void)0); best_regstart = 
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (best_regend) ((void)0); best_regend = 
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (reg_info) ((void)0); reg_info = 
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (reg_dummy) ((void)0); reg_dummy = 
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; if (reg_info_dummy) ((void)0); reg_info_dummy = 
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 6085 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ; } while (0);
          return mcnt;
        }


      switch (((re_opcode_t) *p++))
 {


        case no_op:
          ;
          break;

 case succeed:
          ;
   goto succeed_label;




 case exactn:



   mcnt = *p++;
          ;



          if (translate)
     {
       do
  {
    while (d == dend) { if (dend == end_match_2) goto fail; d = string2; dend = end_match_2; };
# 6132 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
    if ((unsigned char) translate[(unsigned char) *d++]
        != (unsigned char) *p++)
                    goto fail;

  }
       while (--mcnt);
     }
   else
     {
       do
  {
    while (d == dend) { if (dend == end_match_2) goto fail; d = string2; dend = end_match_2; };
    if (*d++ != (char) *p++) goto fail;
  }
       while (--mcnt);
     }
   do { if (!set_regs_matched_done) { active_reg_t r; set_regs_matched_done = 1; for (r = lowest_active_reg; r <= highest_active_reg; r++) { ((reg_info[r]).bits.matched_something) = ((reg_info[r]).bits.ever_matched_something) = 1; } } } while (0);
          break;



 case anychar:
          ;

          while (d == dend) { if (dend == end_match_2) goto fail; d = string2; dend = end_match_2; };

          if ((!(bufp->syntax & ((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1)) && (translate ? (char) translate[(unsigned char) (*d)] : (char) (*d)) == '\n')
              || (bufp->syntax & (((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) && (translate ? (char) translate[(unsigned char) (*d)] : (char) (*d)) == '\000'))
     goto fail;

          do { if (!set_regs_matched_done) { active_reg_t r; set_regs_matched_done = 1; for (r = lowest_active_reg; r <= highest_active_reg; r++) { ((reg_info[r]).bits.matched_something) = ((reg_info[r]).bits.ever_matched_something) = 1; } } } while (0);
          ;
          d++;
   break;


 case charset:
 case charset_not:
   {
     register unsigned char c;
# 6182 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     boolean negate = (re_opcode_t) *(p - 1) == charset_not;

            ;
     while (d == dend) { if (dend == end_match_2) goto fail; d = string2; dend = end_match_2; };
     c = (translate ? (char) translate[(unsigned char) (*d)] : (char) (*d));
# 6558 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     if (c < (unsigned) (*p * 8)
  && p[1 + c / 8] & (1 << (c % 8)))
       negate = !negate;

     p += 1 + *p;

     if (!negate) goto fail;


     do { if (!set_regs_matched_done) { active_reg_t r; set_regs_matched_done = 1; for (r = lowest_active_reg; r <= highest_active_reg; r++) { ((reg_info[r]).bits.matched_something) = ((reg_info[r]).bits.ever_matched_something) = 1; } } } while (0);
            d++;
     break;
   }







        case start_memory:
  
                                  ;


   p1 = p;

          if (((reg_info[*p]).bits.match_null_string_p) == 3)
            ((reg_info[*p]).bits.match_null_string_p)
              = byte_group_match_null_string_p (&p1, pend, reg_info);






          old_regstart[*p] = ((reg_info[*p]).bits.match_null_string_p)
                             ? ((regstart[*p]) == (&byte_reg_unset_dummy)) ? d : regstart[*p]
                             : regstart[*p];
  
                                         ;

          regstart[*p] = d;
   ;

          ((reg_info[*p]).bits.is_active) = 1;
          ((reg_info[*p]).bits.matched_something) = 0;


   set_regs_matched_done = 0;


          highest_active_reg = *p;



          if (lowest_active_reg == ((1 << 8) + 1))
            lowest_active_reg = *p;


          p += 2;
   just_past_start_mem = p;

          break;





 case stop_memory:
  
                                  ;






          old_regend[*p] = ((reg_info[*p]).bits.match_null_string_p)
                           ? ((regend[*p]) == (&byte_reg_unset_dummy)) ? d : regend[*p]
      : regend[*p];
  
                                       ;

          regend[*p] = d;
   ;


          ((reg_info[*p]).bits.is_active) = 0;


   set_regs_matched_done = 0;



          if (lowest_active_reg == highest_active_reg)
            {
              lowest_active_reg = ((1 << 8) + 1);
              highest_active_reg = (1 << 8);
            }
          else
            {



              unsigned char r = *p - 1;
              while (r > 0 && !((reg_info[r]).bits.is_active))
                r--;
# 6674 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
       if (r == 0)
                {
                  lowest_active_reg = ((1 << 8) + 1);
                  highest_active_reg = (1 << 8);
                }
              else
                highest_active_reg = r;
            }






          if ((!((reg_info[*p]).bits.matched_something)
               || just_past_start_mem == p - 1)
       && (p + 2) < pend)
            {
              boolean is_a_jump_n = 0;

              p1 = p + 2;
              mcnt = 0;
              switch ((re_opcode_t) *p1++)
                {
                  case jump_n:
      is_a_jump_n = 1;

                  case pop_failure_jump:
    case maybe_pop_jump:
    case jump:
    case dummy_failure_jump:
                    do { do { (mcnt) = *(p1) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p1) + 1)))) << 8; } while (0); (p1) += 2; } while (0);
      if (is_a_jump_n)
        p1 += 2;
                    break;

                  default:
                                     ;
                }
       p1 += mcnt;






              if (mcnt < 0 && (re_opcode_t) *p1 == on_failure_jump
                  && (re_opcode_t) p1[1+2] == start_memory
    && p1[2+2] == *p)
  {
# 6734 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                  if (((reg_info[*p]).bits.ever_matched_something))
      {
        unsigned r;

                      ((reg_info[*p]).bits.ever_matched_something) = 0;


                      for (r = *p; r < (unsigned) *p + (unsigned) *(p + 1);
      r++)
                        {
                          regstart[r] = old_regstart[r];


                          if (old_regend[r] >= regstart[r])
                            regend[r] = old_regend[r];
                        }
                    }
    p1++;
                  do { do { (mcnt) = *(p1) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p1) + 1)))) << 8; } while (0); (p1) += 2; } while (0);
                  do { char *destination; active_reg_t this_reg; ; ; ; ; ; ; ; while (((fail_stack).size - (fail_stack).avail) < (((0 ? 0 : highest_active_reg - lowest_active_reg + 1) * 3) + 4)) { if (!((fail_stack).size > (unsigned) (xre_max_failures * (5 * 3 + 4)) ? 0 : ((fail_stack).stack = (byte_fail_stack_elt_t *) (destination = (char *) 
# 6753 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                 __builtin_alloca (
# 6753 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                 ((fail_stack).size << 1) * sizeof (byte_fail_stack_elt_t)
# 6753 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                 )
# 6753 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                 , memcpy (destination, (fail_stack).stack, (fail_stack).size * sizeof (byte_fail_stack_elt_t))), (fail_stack).stack == 
# 6753 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                 ((void *)0) 
# 6753 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                 ? 0 : ((fail_stack).size <<= 1, 1)))) return -2; ; ; } ; if (1) for (this_reg = lowest_active_reg; this_reg <= highest_active_reg; this_reg++) { ; ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (regstart[this_reg]); ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (regend[this_reg]); ; ; ; ; ; ; fail_stack.stack[fail_stack.avail++] = (reg_info[this_reg].word); } ; fail_stack.stack[fail_stack.avail++].integer = (lowest_active_reg); ; fail_stack.stack[fail_stack.avail++].integer = (highest_active_reg); ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (p1 + mcnt); ; ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (d); ; ; } while (0);

                  goto fail;
                }
            }


          p += 2;
          break;




        case duplicate:
   {
     register const char *d2, *dend2;
     int regno = *p++;
     ;


            if (((regstart[regno]) == (&byte_reg_unset_dummy)) || ((regend[regno]) == (&byte_reg_unset_dummy)))
              goto fail;


            d2 = regstart[regno];






            dend2 = (((size1 && string1 <= (regstart[regno]) && (regstart[regno]) <= string1 + size1)
        == (size1 && string1 <= (regend[regno]) && (regend[regno]) <= string1 + size1))
       ? regend[regno] : end_match_1);
     for (;;)
       {


  while (d2 == dend2)
    {
      if (dend2 == end_match_2) break;
      if (dend2 == regend[regno]) break;


                    d2 = string2;
                    dend2 = regend[regno];
    }

  if (d2 == dend2) break;


  while (d == dend) { if (dend == end_match_2) goto fail; d = string2; dend = end_match_2; };


  mcnt = dend - d;



                if (mcnt > dend2 - d2)
    mcnt = dend2 - d2;



  if (translate
                    ? byte_bcmp_translate (d, d2, mcnt, translate)
                    : memcmp (d, d2, mcnt*sizeof(unsigned char)))
    goto fail;
  d += mcnt, d2 += mcnt;


  do { if (!set_regs_matched_done) { active_reg_t r; set_regs_matched_done = 1; for (r = lowest_active_reg; r <= highest_active_reg; r++) { ((reg_info[r]).bits.matched_something) = ((reg_info[r]).bits.ever_matched_something) = 1; } } } while (0);
       }
   }
   break;





 case begline:
          ;

          if (((d) == (size1 ? string1 : string2) || !size2))
            {
              if (!bufp->not_bol) break;
            }
          else if (d[-1] == '\n' && bufp->newline_anchor)
            {
              break;
            }

          goto fail;



 case endline:
          ;

          if (((d) == end2))
            {
              if (!bufp->not_eol) break;
            }


          else if ((d == end1 ? *string2 : *d) == '\n'
                   && bufp->newline_anchor)
            {
              break;
            }
          goto fail;



        case begbuf:
          ;
          if (((d) == (size1 ? string1 : string2) || !size2))
            break;
          goto fail;



        case endbuf:
          ;
   if (((d) == end2))
     break;
          goto fail;
# 6897 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
        case on_failure_keep_string_jump:
          ;

          do { do { (mcnt) = *(p) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p) + 1)))) << 8; } while (0); (p) += 2; } while (0);



          ;


          do { char *destination; active_reg_t this_reg; ; ; ; ; ; ; ; while (((fail_stack).size - (fail_stack).avail) < (((0 ? 0 : highest_active_reg - lowest_active_reg + 1) * 3) + 4)) { if (!((fail_stack).size > (unsigned) (xre_max_failures * (5 * 3 + 4)) ? 0 : ((fail_stack).stack = (byte_fail_stack_elt_t *) (destination = (char *) 
# 6907 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         __builtin_alloca (
# 6907 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ((fail_stack).size << 1) * sizeof (byte_fail_stack_elt_t)
# 6907 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         )
# 6907 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         , memcpy (destination, (fail_stack).stack, (fail_stack).size * sizeof (byte_fail_stack_elt_t))), (fail_stack).stack == 
# 6907 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0) 
# 6907 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ? 0 : ((fail_stack).size <<= 1, 1)))) return -2; ; ; } ; if (1) for (this_reg = lowest_active_reg; this_reg <= highest_active_reg; this_reg++) { ; ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (regstart[this_reg]); ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (regend[this_reg]); ; ; ; ; ; ; fail_stack.stack[fail_stack.avail++] = (reg_info[this_reg].word); } ; fail_stack.stack[fail_stack.avail++].integer = (lowest_active_reg); ; fail_stack.stack[fail_stack.avail++].integer = (highest_active_reg); ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (p + mcnt); ; ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (
# 6907 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 6907 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ); ; ; } while (0);
          break;
# 6923 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 case on_failure_jump:
        on_failure:
          ;

          do { do { (mcnt) = *(p) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p) + 1)))) << 8; } while (0); (p) += 2; } while (0);



          ;
# 6943 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
          p1 = p;





          while (p1 < pend && (re_opcode_t) *p1 == no_op)
            p1++;

          if (p1 < pend && (re_opcode_t) *p1 == start_memory)
            {




              highest_active_reg = *(p1 + 1) + *(p1 + 2);
              if (lowest_active_reg == ((1 << 8) + 1))
                lowest_active_reg = *(p1 + 1);
            }

          ;
          do { char *destination; active_reg_t this_reg; ; ; ; ; ; ; ; while (((fail_stack).size - (fail_stack).avail) < (((0 ? 0 : highest_active_reg - lowest_active_reg + 1) * 3) + 4)) { if (!((fail_stack).size > (unsigned) (xre_max_failures * (5 * 3 + 4)) ? 0 : ((fail_stack).stack = (byte_fail_stack_elt_t *) (destination = (char *) 
# 6964 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         __builtin_alloca (
# 6964 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ((fail_stack).size << 1) * sizeof (byte_fail_stack_elt_t)
# 6964 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         )
# 6964 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         , memcpy (destination, (fail_stack).stack, (fail_stack).size * sizeof (byte_fail_stack_elt_t))), (fail_stack).stack == 
# 6964 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0) 
# 6964 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ? 0 : ((fail_stack).size <<= 1, 1)))) return -2; ; ; } ; if (1) for (this_reg = lowest_active_reg; this_reg <= highest_active_reg; this_reg++) { ; ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (regstart[this_reg]); ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (regend[this_reg]); ; ; ; ; ; ; fail_stack.stack[fail_stack.avail++] = (reg_info[this_reg].word); } ; fail_stack.stack[fail_stack.avail++].integer = (lowest_active_reg); ; fail_stack.stack[fail_stack.avail++].integer = (highest_active_reg); ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (p + mcnt); ; ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (d); ; ; } while (0);
          break;




        case maybe_pop_jump:
          do { do { (mcnt) = *(p) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p) + 1)))) << 8; } while (0); (p) += 2; } while (0);
          ;
          {
     register unsigned char *p2 = p;
# 6993 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
     while (1)
       {
  if (p2 + 2 < pend
      && ((re_opcode_t) *p2 == stop_memory
   || (re_opcode_t) *p2 == start_memory))
    p2 += 3;
  else if (p2 + 2 + 2 * 2 < pend
    && (re_opcode_t) *p2 == dummy_failure_jump)
    p2 += 2 + 2 * 2;
  else
    break;
       }

     p1 = p + mcnt;





            if (p2 == pend)
       {



           p[-(1+2)] = (unsigned char)
    pop_failure_jump;
               
                                                                       ;
              }

            else if ((re_opcode_t) *p2 == exactn



       || (bufp->newline_anchor && (re_opcode_t) *p2 == endline))
       {
  register unsigned char c
                  = *p2 == (unsigned char) endline ? '\n' : p2[2];

                if (((re_opcode_t) p1[1+2] == exactn



      ) && p1[3+2] != c)
                  {
        p[-(1+2)] = (unsigned char)
        pop_failure_jump;





       

                                         ;

                  }


  else if ((re_opcode_t) p1[3] == charset
    || (re_opcode_t) p1[3] == charset_not)
    {
      int negate = (re_opcode_t) p1[3] == charset_not;

      if (c < (unsigned) (p1[4] * 8)
   && p1[5 + c / 8] & (1 << (c % 8)))
        negate = !negate;



      if (!negate)
                      {
            p[-3] = (unsigned char) pop_failure_jump;
                        ;
                      }
    }

       }

            else if ((re_opcode_t) *p2 == charset)
       {


                if ((re_opcode_t) p1[3] == exactn
       && ! ((int) p2[1] * 8 > (int) p1[5]
      && (p2[2 + p1[5] / 8]
          & (1 << (p1[5] % 8)))))
    {
      p[-3] = (unsigned char) pop_failure_jump;
      ;
                  }

  else if ((re_opcode_t) p1[3] == charset_not)
    {
      int idx;


      for (idx = 0; idx < (int) p2[1]; idx++)
        if (! (p2[2 + idx] == 0
        || (idx < (int) p1[4]
     && ((p2[2 + idx] & ~ p1[5 + idx]) == 0))))
   break;

      if (idx == p2[1])
                      {
            p[-3] = (unsigned char) pop_failure_jump;
                        ;
                      }
    }
  else if ((re_opcode_t) p1[3] == charset)
    {
      int idx;


      for (idx = 0;
    idx < (int) p2[1] && idx < (int) p1[4];
    idx++)
        if ((p2[2 + idx] & p1[5 + idx]) != 0)
   break;

      if (idx == p2[1] || idx == p1[4])
                      {
            p[-3] = (unsigned char) pop_failure_jump;
                        ;
                      }
    }
       }

   }
   p -= 2;
   if ((re_opcode_t) p[-1] != pop_failure_jump)
     {
       p[-1] = (unsigned char) jump;
              ;
       goto unconditional_jump;
     }
# 7138 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
        case pop_failure_jump:
          {





            active_reg_t dummy_low_reg, dummy_high_reg;
            unsigned char *pdummy __attribute__ ((__unused__)) = 
# 7146 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                              ((void *)0)
# 7146 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                  ;
            const char *sdummy __attribute__ ((__unused__)) = 
# 7147 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                                   ((void *)0)
# 7147 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                       ;

            ;
            { active_reg_t this_reg; const unsigned char *string_temp; ; ; ; ; ; ; ; string_temp = fail_stack.stack[--fail_stack.avail].pointer; if (string_temp != 
# 7150 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
           ((void *)0)
# 7150 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
           ) sdummy = (const char *) string_temp; ; ; ; pdummy = (unsigned char *) fail_stack.stack[--fail_stack.avail].pointer; ; ; dummy_high_reg = (active_reg_t) fail_stack.stack[--fail_stack.avail].integer; ; dummy_low_reg = (active_reg_t) fail_stack.stack[--fail_stack.avail].integer; ; if (1) for (this_reg = dummy_high_reg; this_reg >= dummy_low_reg; this_reg--) { ; reg_info_dummy[this_reg].word = fail_stack.stack[--fail_stack.avail]; ; reg_dummy[this_reg] = (const char *) fail_stack.stack[--fail_stack.avail].pointer; ; reg_dummy[this_reg] = (const char *) fail_stack.stack[--fail_stack.avail].pointer; ; } else { for (this_reg = highest_active_reg; this_reg > dummy_high_reg; this_reg--) { reg_info_dummy[this_reg].word.integer = 0; reg_dummy[this_reg] = 0; reg_dummy[this_reg] = 0; } highest_active_reg = dummy_high_reg; } set_regs_matched_done = 0; ; }

                                                                    ;
          }


 unconditional_jump:



   ;




        case jump:
   do { do { (mcnt) = *(p) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p) + 1)))) << 8; } while (0); (p) += 2; } while (0);
          ;
   p += mcnt;



          ;

   break;




        case jump_past_alt:
          ;
          goto unconditional_jump;







        case dummy_failure_jump:
          ;


          do { char *destination; active_reg_t this_reg; ; ; ; ; ; ; ; while (((fail_stack).size - (fail_stack).avail) < (((0 ? 0 : highest_active_reg - lowest_active_reg + 1) * 3) + 4)) { if (!((fail_stack).size > (unsigned) (xre_max_failures * (5 * 3 + 4)) ? 0 : ((fail_stack).stack = (byte_fail_stack_elt_t *) (destination = (char *) 
# 7193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         __builtin_alloca (
# 7193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ((fail_stack).size << 1) * sizeof (byte_fail_stack_elt_t)
# 7193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         )
# 7193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         , memcpy (destination, (fail_stack).stack, (fail_stack).size * sizeof (byte_fail_stack_elt_t))), (fail_stack).stack == 
# 7193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0) 
# 7193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ? 0 : ((fail_stack).size <<= 1, 1)))) return -2; ; ; } ; if (1) for (this_reg = lowest_active_reg; this_reg <= highest_active_reg; this_reg++) { ; ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (regstart[this_reg]); ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (regend[this_reg]); ; ; ; ; ; ; fail_stack.stack[fail_stack.avail++] = (reg_info[this_reg].word); } ; fail_stack.stack[fail_stack.avail++].integer = (lowest_active_reg); ; fail_stack.stack[fail_stack.avail++].integer = (highest_active_reg); ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (
# 7193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 7193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ); ; ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (
# 7193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 7193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ); ; ; } while (0);
          goto unconditional_jump;







        case push_dummy_failure:
          ;


          do { char *destination; active_reg_t this_reg; ; ; ; ; ; ; ; while (((fail_stack).size - (fail_stack).avail) < (((0 ? 0 : highest_active_reg - lowest_active_reg + 1) * 3) + 4)) { if (!((fail_stack).size > (unsigned) (xre_max_failures * (5 * 3 + 4)) ? 0 : ((fail_stack).stack = (byte_fail_stack_elt_t *) (destination = (char *) 
# 7206 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         __builtin_alloca (
# 7206 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ((fail_stack).size << 1) * sizeof (byte_fail_stack_elt_t)
# 7206 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         )
# 7206 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         , memcpy (destination, (fail_stack).stack, (fail_stack).size * sizeof (byte_fail_stack_elt_t))), (fail_stack).stack == 
# 7206 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0) 
# 7206 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ? 0 : ((fail_stack).size <<= 1, 1)))) return -2; ; ; } ; if (1) for (this_reg = lowest_active_reg; this_reg <= highest_active_reg; this_reg++) { ; ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (regstart[this_reg]); ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (regend[this_reg]); ; ; ; ; ; ; fail_stack.stack[fail_stack.avail++] = (reg_info[this_reg].word); } ; fail_stack.stack[fail_stack.avail++].integer = (lowest_active_reg); ; fail_stack.stack[fail_stack.avail++].integer = (highest_active_reg); ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (
# 7206 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 7206 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ); ; ; ; fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (
# 7206 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 7206 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ); ; ; } while (0);
          break;



        case succeed_n:
          do { (mcnt) = *(p + 2) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p + 2) + 1)))) << 8; } while (0);
          ;

          ;

          if (mcnt > 0)
            {
               mcnt--;
        p += 2;
               do { do { (p)[0] = (mcnt) & 0377; (p)[1] = (mcnt) >> 8; } while (0); (p) += 2; } while (0);




              
               ;

            }
   else if (mcnt == 0)
            {




             
                               ;





       p[2] = (unsigned char) no_op;
              p[3] = (unsigned char) no_op;

              goto on_failure;
            }
          break;

        case jump_n:
          do { (mcnt) = *(p + 2) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p + 2) + 1)))) << 8; } while (0);
          ;


          if (mcnt)
            {
               mcnt--;
               do { (p + 2)[0] = (mcnt) & 0377; (p + 2)[1] = (mcnt) >> 8; } while (0);





              
             ;

        goto unconditional_jump;
            }

   else
     p += 2 * 2;
          break;

 case set_number_at:
   {
            ;

            do { do { (mcnt) = *(p) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p) + 1)))) << 8; } while (0); (p) += 2; } while (0);
            p1 = p + mcnt;
            do { do { (mcnt) = *(p) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p) + 1)))) << 8; } while (0); (p) += 2; } while (0);



            ;

     do { (p1)[0] = (mcnt) & 0377; (p1)[1] = (mcnt) >> 8; } while (0);
            break;
          }
# 7308 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 case wordbound:
 {
   boolean prevchar, thischar;

   ;
   if (((d) == (size1 ? string1 : string2) || !size2) || ((d) == end2))
     break;

   prevchar = (re_syntax_table[(unsigned char) ((d - 1) == end1 ? *string2 : (d - 1) == string2 - 1 ? *(end1 - 1) : *(d - 1))] == 1);
   thischar = (re_syntax_table[(unsigned char) ((d) == end1 ? *string2 : (d) == string2 - 1 ? *(end1 - 1) : *(d))] == 1);
   if (prevchar != thischar)
     break;
   goto fail;
 }

      case notwordbound:
 {
   boolean prevchar, thischar;

   ;
   if (((d) == (size1 ? string1 : string2) || !size2) || ((d) == end2))
     goto fail;

   prevchar = (re_syntax_table[(unsigned char) ((d - 1) == end1 ? *string2 : (d - 1) == string2 - 1 ? *(end1 - 1) : *(d - 1))] == 1);
   thischar = (re_syntax_table[(unsigned char) ((d) == end1 ? *string2 : (d) == string2 - 1 ? *(end1 - 1) : *(d))] == 1);
   if (prevchar != thischar)
     goto fail;
   break;
 }


 case wordbeg:
          ;
   if (!((d) == end2) && (re_syntax_table[(unsigned char) ((d) == end1 ? *string2 : (d) == string2 - 1 ? *(end1 - 1) : *(d))] == 1)
       && (((d) == (size1 ? string1 : string2) || !size2) || !(re_syntax_table[(unsigned char) ((d - 1) == end1 ? *string2 : (d - 1) == string2 - 1 ? *(end1 - 1) : *(d - 1))] == 1)))
     break;
          goto fail;

 case wordend:
          ;
   if (!((d) == (size1 ? string1 : string2) || !size2) && (re_syntax_table[(unsigned char) ((d - 1) == end1 ? *string2 : (d - 1) == string2 - 1 ? *(end1 - 1) : *(d - 1))] == 1)
              && (((d) == end2) || !(re_syntax_table[(unsigned char) ((d) == end1 ? *string2 : (d) == string2 - 1 ? *(end1 - 1) : *(d))] == 1)))
     break;
          goto fail;
# 7407 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 case wordchar:
          ;
   while (d == dend) { if (dend == end_match_2) goto fail; d = string2; dend = end_match_2; };
          if (!(re_syntax_table[(unsigned char) ((d) == end1 ? *string2 : (d) == string2 - 1 ? *(end1 - 1) : *(d))] == 1))
            goto fail;
   do { if (!set_regs_matched_done) { active_reg_t r; set_regs_matched_done = 1; for (r = lowest_active_reg; r <= highest_active_reg; r++) { ((reg_info[r]).bits.matched_something) = ((reg_info[r]).bits.ever_matched_something) = 1; } } } while (0);
          d++;
   break;

 case notwordchar:
          ;
   while (d == dend) { if (dend == end_match_2) goto fail; d = string2; dend = end_match_2; };
   if ((re_syntax_table[(unsigned char) ((d) == end1 ? *string2 : (d) == string2 - 1 ? *(end1 - 1) : *(d))] == 1))
            goto fail;
          do { if (!set_regs_matched_done) { active_reg_t r; set_regs_matched_done = 1; for (r = lowest_active_reg; r <= highest_active_reg; r++) { ((reg_info[r]).bits.matched_something) = ((reg_info[r]).bits.ever_matched_something) = 1; } } } while (0);
          d++;
   break;


        default:
          abort ();
 }
      continue;



    fail:
      if (!(fail_stack.avail == 0))
 {
          ;
          { active_reg_t this_reg; const unsigned char *string_temp; ; ; ; ; ; ; ; string_temp = fail_stack.stack[--fail_stack.avail].pointer; if (string_temp != 
# 7437 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
         ((void *)0)
# 7437 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
         ) d = (const char *) string_temp; ; ; ; p = (unsigned char *) fail_stack.stack[--fail_stack.avail].pointer; ; ; highest_active_reg = (active_reg_t) fail_stack.stack[--fail_stack.avail].integer; ; lowest_active_reg = (active_reg_t) fail_stack.stack[--fail_stack.avail].integer; ; if (1) for (this_reg = highest_active_reg; this_reg >= lowest_active_reg; this_reg--) { ; reg_info[this_reg].word = fail_stack.stack[--fail_stack.avail]; ; regend[this_reg] = (const char *) fail_stack.stack[--fail_stack.avail].pointer; ; regstart[this_reg] = (const char *) fail_stack.stack[--fail_stack.avail].pointer; ; } else { for (this_reg = highest_active_reg; this_reg > highest_active_reg; this_reg--) { reg_info[this_reg].word.integer = 0; regend[this_reg] = 0; regstart[this_reg] = 0; } highest_active_reg = highest_active_reg; } set_regs_matched_done = 0; ; }

                                                        ;


          if (!p)
     goto fail;


   ;
          if (p < pend)
            {
              boolean is_a_jump_n = 0;



              switch ((re_opcode_t) *p)
                {
                case jump_n:
                  is_a_jump_n = 1;

                case maybe_pop_jump:
                case pop_failure_jump:
                case jump:
                  p1 = p + 1;
                  do { do { (mcnt) = *(p1) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p1) + 1)))) << 8; } while (0); (p1) += 2; } while (0);
                  p1 += mcnt;

                  if ((is_a_jump_n && (re_opcode_t) *p1 == succeed_n)
                      || (!is_a_jump_n
                          && (re_opcode_t) *p1 == on_failure_jump))
                    goto fail;
                  break;
                default:
                                   ;
                }
            }

          if (d >= string1 && d <= end1)
     dend = end_match_1;
        }
      else
        break;
    }

  if (best_regs_set)
    goto restore_best_regs;

  do { ; if (regstart) ((void)0); regstart = 
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 ((void *)0)
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ; if (regend) ((void)0); regend = 
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 ((void *)0)
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ; if (old_regstart) ((void)0); old_regstart = 
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 ((void *)0)
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ; if (old_regend) ((void)0); old_regend = 
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 ((void *)0)
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ; if (best_regstart) ((void)0); best_regstart = 
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 ((void *)0)
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ; if (best_regend) ((void)0); best_regend = 
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 ((void *)0)
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ; if (reg_info) ((void)0); reg_info = 
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 ((void *)0)
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ; if (reg_dummy) ((void)0); reg_dummy = 
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 ((void *)0)
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ; if (reg_info_dummy) ((void)0); reg_info_dummy = 
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
 ((void *)0)
# 7485 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
 ; } while (0);

  return -1;
}
# 7503 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static boolean
byte_group_match_null_string_p (unsigned char **p, unsigned char *end,
                                   byte_register_info_type *reg_info)
{
  int mcnt;

  unsigned char *p1 = *p + 2;

  while (p1 < end)
    {




      switch ((re_opcode_t) *p1)
        {

        case on_failure_jump:
          p1++;
          do { do { (mcnt) = *(p1) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p1) + 1)))) << 8; } while (0); (p1) += 2; } while (0);




   if (mcnt >= 0)
     {
# 7547 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
              while ((re_opcode_t) p1[mcnt-(1+2)] ==
       jump_past_alt)
                {




                  if (!byte_alt_match_null_string_p (p1, p1 + mcnt -
      (1 + 2),
      reg_info))
                    return 0;



                  p1 += mcnt;



                  if ((re_opcode_t) *p1 != on_failure_jump)
                    break;



    p1++;
                  do { do { (mcnt) = *(p1) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p1) + 1)))) << 8; } while (0); (p1) += 2; } while (0);
                  if ((re_opcode_t) p1[mcnt-(1+2)] !=
        jump_past_alt)
                    {

                      p1 -= 1 + 2;
                      break;
                    }
                }




              do { (mcnt) = *(p1 - 2) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p1 - 2) + 1)))) << 8; } while (0);

              if (!byte_alt_match_null_string_p (p1, p1 + mcnt, reg_info))
                return 0;

              p1 += mcnt;
            }
          break;


        case stop_memory:
   ;
          *p = p1 + 2;
          return 1;


        default:
          if (!byte_common_op_match_null_string_p (&p1, end, reg_info))
            return 0;
        }
    }

  return 0;
}






static boolean
byte_alt_match_null_string_p (unsigned char *p, unsigned char *end,
                                 byte_register_info_type *reg_info)
{
  int mcnt;
  unsigned char *p1 = p;

  while (p1 < end)
    {



      switch ((re_opcode_t) *p1)
        {

        case on_failure_jump:
          p1++;
          do { do { (mcnt) = *(p1) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p1) + 1)))) << 8; } while (0); (p1) += 2; } while (0);
          p1 += mcnt;
          break;

 default:
          if (!byte_common_op_match_null_string_p (&p1, end, reg_info))
            return 0;
        }
    }

  return 1;
}







static boolean
byte_common_op_match_null_string_p (unsigned char **p, unsigned char *end,
                                       byte_register_info_type *reg_info)
{
  int mcnt;
  boolean ret;
  int reg_no;
  unsigned char *p1 = *p;

  switch ((re_opcode_t) *p1++)
    {
    case no_op:
    case begline:
    case endline:
    case begbuf:
    case endbuf:
    case wordbeg:
    case wordend:
    case wordbound:
    case notwordbound:





      break;

    case start_memory:
      reg_no = *p1;
      ;
      ret = byte_group_match_null_string_p (&p1, end, reg_info);




      if (((reg_info[reg_no]).bits.match_null_string_p) == 3)
        ((reg_info[reg_no]).bits.match_null_string_p) = ret;

      if (!ret)
        return 0;
      break;


    case jump:
      do { do { (mcnt) = *(p1) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p1) + 1)))) << 8; } while (0); (p1) += 2; } while (0);
      if (mcnt >= 0)
        p1 += mcnt;
      else
        return 0;
      break;

    case succeed_n:

      p1 += 2;
      do { do { (mcnt) = *(p1) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p1) + 1)))) << 8; } while (0); (p1) += 2; } while (0);

      if (mcnt == 0)
        {
          p1 -= 2 * 2;
          do { do { (mcnt) = *(p1) & 0377; (mcnt) += ((unsigned) ((signed char) (*((p1) + 1)))) << 8; } while (0); (p1) += 2; } while (0);
          p1 += mcnt;
        }
      else
        return 0;
      break;

    case duplicate:
      if (!((reg_info[*p1]).bits.match_null_string_p))
        return 0;
      break;

    case set_number_at:
      p1 += 2 * 2;
      return 0;

    default:

      return 0;
  }

  *p = p1;
  return 1;
}





static int
byte_bcmp_translate (const char *s1, const char *s2, register int len,
                        char * translate)
{
  register const unsigned char *p1 = (const unsigned char *) s1;
  register const unsigned char *p2 = (const unsigned char *) s2;
  while (len)
    {





      if (translate[*p1++] != translate[*p2++]) return 1;

      len--;
    }
  return 0;
}
# 640 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 2
# 1314 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
reg_syntax_t xre_syntax_options;
# 1324 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
reg_syntax_t
xre_set_syntax (reg_syntax_t syntax)
{
  reg_syntax_t ret = xre_syntax_options;

  xre_syntax_options = syntax;






  return ret;
}
# 1347 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static const char *re_error_msgid[] =
  {
    "Success",
    "No match",
    "Invalid regular expression",
    "Invalid collation character",
    "Invalid character class name",
    "Trailing backslash",
    "Invalid back reference",
    "Unmatched [ or [^",
    "Unmatched ( or \\(",
    "Unmatched \\{",
    "Invalid content of \\{\\}",
    "Invalid range end",
    "Memory exhausted",
    "Invalid preceding regular expression",
    "Premature end of regular expression",
    "Regular expression too big",
    "Unmatched ) or \\)"
  };
# 4328 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static boolean
group_in_compile_stack (compile_stack_type compile_stack, regnum_t regnum)
{
  int this_element;

  for (this_element = compile_stack.avail - 1;
       this_element >= 0;
       this_element--)
    if (compile_stack.stack[this_element].regnum == regnum)
      return 1;

  return 0;
}
# 4861 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
int
xre_compile_fastmap (struct re_pattern_buffer *bufp)
{





    return byte_re_compile_fastmap(bufp);
}
# 4889 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
void
xre_set_registers (struct re_pattern_buffer *bufp,
                  struct re_registers *regs, unsigned num_regs,
                  xregoff_t *starts, xregoff_t *ends)
{
  if (num_regs)
    {
      bufp->regs_allocated = 1;
      regs->num_regs = num_regs;
      regs->start = starts;
      regs->end = ends;
    }
  else
    {
      bufp->regs_allocated = 0;
      regs->num_regs = 0;
      regs->start = regs->end = (xregoff_t *) 0;
    }
}
# 4917 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
int
xre_search (struct re_pattern_buffer *bufp, const char *string, int size,
           int startpos, int range, struct re_registers *regs)
{
  return xre_search_2 (bufp, 
# 4921 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                           ((void *)0)
# 4921 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                               , 0, string, size, startpos, range,
        regs, size);
}
# 4950 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
int
xre_search_2 (struct re_pattern_buffer *bufp, const char *string1, int size1,
             const char *string2, int size2, int startpos, int range,
             struct re_registers *regs, int stop)
{






    return byte_re_search_2 (bufp, string1, size1, string2, size2, startpos,
        range, regs, stop);
}
# 5394 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
int
xre_match (struct re_pattern_buffer *bufp, const char *string,
          int size, int pos, struct re_registers *regs)
{
  int result;







    result = byte_re_match_2_internal (bufp, 
# 5406 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                            ((void *)0)
# 5406 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                , 0, string, size,
      pos, regs, size);





  return result;
}
# 5449 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
int
xre_match_2 (struct re_pattern_buffer *bufp, const char *string1, int size1,
            const char *string2, int size2, int pos,
            struct re_registers *regs, int stop)
{
  int result;







    result = byte_re_match_2_internal (bufp, string1, size1, string2, size2,
      pos, regs, stop);






  return result;
}
# 7772 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
const char *
xre_compile_pattern (const char *pattern, size_t length,
                    struct re_pattern_buffer *bufp)
{
  reg_errcode_t ret;



  bufp->regs_allocated = 0;




  bufp->no_sub = 0;


  bufp->newline_anchor = 1;






    ret = byte_regex_compile (pattern, length, xre_syntax_options, bufp);

  if (!ret)
    return 
# 7798 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
          ((void *)0)
# 7798 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
              ;
  return (re_error_msgid[(int) ret]);
}
# 7811 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
static struct re_pattern_buffer re_comp_buf;

char *






xre_comp (const char *s)
{
  reg_errcode_t ret;

  if (!s)
    {
      if (!re_comp_buf.buffer)
 return (char *) ("No previous regular expression");
      return 0;
    }

  if (!re_comp_buf.buffer)
    {
      re_comp_buf.buffer = (unsigned char *) malloc (200);
      if (re_comp_buf.buffer == 
# 7834 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                               ((void *)0)
# 7834 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                   )
        return (char *) (re_error_msgid[(int) REG_ESPACE]);
      re_comp_buf.allocated = 200;

      re_comp_buf.fastmap = (char *) malloc (1 << 8);
      if (re_comp_buf.fastmap == 
# 7839 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                ((void *)0)
# 7839 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                    )
 return (char *) (re_error_msgid[(int) REG_ESPACE]);
    }





  re_comp_buf.newline_anchor = 1;






    ret = byte_regex_compile (s, strlen (s), xre_syntax_options, &re_comp_buf);

  if (!ret)
    return 
# 7857 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
          ((void *)0)
# 7857 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
              ;


  return (char *) (re_error_msgid[(int) ret]);
}


int



xre_exec (const char *s)
{
  const int len = strlen (s);
  return
    0 <= xre_search (&re_comp_buf, s, len, 0, len, (struct re_registers *) 0);
}
# 7916 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
int
xregcomp (regex_t *preg, const char *pattern, int cflags)
{
  reg_errcode_t ret;
  reg_syntax_t syntax
    = (cflags & 1) ?
      ((((((unsigned long int) 1) << 1) << 1) | ((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((unsigned long int) 1) << 1) << 1) << 1) | ((((((unsigned long int) 1) << 1) << 1) << 1) << 1) | ((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) : ((((((unsigned long int) 1) << 1) << 1) | ((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((unsigned long int) 1) << 1));


  preg->buffer = 0;
  preg->allocated = 0;
  preg->used = 0;


  preg->fastmap = (char *) malloc (1 << 8);

  if (cflags & (1 << 1))
    {
      int i;

      preg->translate
 = (char *) malloc (256
          * sizeof (*(char *)0));
      if (preg->translate == 
# 7939 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                            ((void *)0)
# 7939 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                )
        return (int) REG_ESPACE;


      for (i = 0; i < 256; i++)
        preg->translate[i] = (1 && 
# 7944 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                            ((*__ctype_b_loc ())[(int) ((
# 7944 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                            i
# 7944 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                            ))] & (unsigned short int) _ISupper)
# 7944 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                            ) ? 
# 7944 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                          ((int) (*__ctype_tolower_loc ())[(int) (
# 7944 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                          i
# 7944 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                                          )]) 
# 7944 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                                                      : i;
    }
  else
    preg->translate = 
# 7947 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                     ((void *)0)
# 7947 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                         ;


  if (cflags & ((1 << 1) << 1))
    {
      syntax &= ~((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1);
      syntax |= ((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1);

      preg->newline_anchor = 1;
    }
  else
    preg->newline_anchor = 0;

  preg->no_sub = !!(cflags & (((1 << 1) << 1) << 1));
# 7969 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
    ret = byte_regex_compile (pattern, strlen (pattern), syntax, preg);



  if (ret == REG_ERPAREN) ret = REG_EPAREN;

  if (ret == REG_NOERROR && preg->fastmap)
    {


      if (xre_compile_fastmap (preg) == -2)
 {


   free (preg->fastmap);
   preg->fastmap = 
# 7984 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                  ((void *)0)
# 7984 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                      ;
 }
    }

  return (int) ret;
}
# 8009 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
int
xregexec (const regex_t *preg, const char *string, size_t nmatch,
         regmatch_t pmatch[], int eflags)
{
  int ret;
  struct re_registers regs;
  regex_t private_preg;
  int len = strlen (string);
  boolean want_reg_info = !preg->no_sub && nmatch > 0;

  private_preg = *preg;

  private_preg.not_bol = !!(eflags & 1);
  private_preg.not_eol = !!(eflags & (1 << 1));




  private_preg.regs_allocated = 2;

  if (want_reg_info)
    {
      regs.num_regs = nmatch;
      regs.start = ((xregoff_t *) malloc ((nmatch * 2) * sizeof (xregoff_t)));
      if (regs.start == 
# 8033 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                       ((void *)0)
# 8033 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                           )
        return (int) REG_NOMATCH;
      regs.end = regs.start + nmatch;
    }


  ret = xre_search (&private_preg, string, len,
                                0, len,
                   want_reg_info ? &regs : (struct re_registers *) 0);


  if (want_reg_info)
    {
      if (ret >= 0)
        {
          unsigned r;

          for (r = 0; r < nmatch; r++)
            {
              pmatch[r].rm_so = regs.start[r];
              pmatch[r].rm_eo = regs.end[r];
            }
        }


      free (regs.start);
    }


  return ret >= 0 ? (int) REG_NOERROR : (int) REG_NOMATCH;
}
# 8072 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
size_t
xregerror (int errcode, const regex_t *preg __attribute__ ((__unused__)),
          char *errbuf, size_t errbuf_size)
{
  const char *msg;
  size_t msg_size;

  if (errcode < 0
      || errcode >= (int) (sizeof (re_error_msgid)
      / sizeof (re_error_msgid[0])))




    abort ();

  msg = (re_error_msgid[errcode]);

  msg_size = strlen (msg) + 1;

  if (errbuf_size != 0)
    {
      if (msg_size > errbuf_size)
        {



          (void) memcpy (errbuf, msg, errbuf_size - 1);
          errbuf[errbuf_size - 1] = 0;

        }
      else
        (void) memcpy (errbuf, msg, msg_size);
    }

  return msg_size;
}







void
xregfree (regex_t *preg)
{
  free (preg->buffer);
  preg->buffer = 
# 8120 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                ((void *)0)
# 8120 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                    ;

  preg->allocated = 0;
  preg->used = 0;

  free (preg->fastmap);
  preg->fastmap = 
# 8126 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                 ((void *)0)
# 8126 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                     ;
  preg->fastmap_accurate = 0;

  free (preg->translate);
  preg->translate = 
# 8130 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c" 3 4
                   ((void *)0)
# 8130 "/home/giulianob/gcc_git_gnu/gcc/libiberty/regex.c"
                       ;
}
