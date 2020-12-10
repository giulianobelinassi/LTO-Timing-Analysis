# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
# 1 "/home/giulianob/gcc_git_gnu/build_temp/build-x86_64-pc-linux-gnu/libiberty//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
# 32 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
# 1 "./config.h" 1
# 33 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 2


# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/safe-ctype.h" 1
# 57 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/safe-ctype.h"
enum {

  _sch_isblank = 0x0001,
  _sch_iscntrl = 0x0002,
  _sch_isdigit = 0x0004,
  _sch_islower = 0x0008,
  _sch_isprint = 0x0010,
  _sch_ispunct = 0x0020,
  _sch_isspace = 0x0040,
  _sch_isupper = 0x0080,
  _sch_isxdigit = 0x0100,


  _sch_isidst = 0x0200,
  _sch_isvsp = 0x0400,
  _sch_isnvsp = 0x0800,


  _sch_isalpha = _sch_isupper|_sch_islower,
  _sch_isalnum = _sch_isalpha|_sch_isdigit,
  _sch_isidnum = _sch_isidst|_sch_isdigit,
  _sch_isgraph = _sch_isalnum|_sch_ispunct,
  _sch_iscppsp = _sch_isvsp|_sch_isnvsp,
  _sch_isbasic = _sch_isprint|_sch_iscppsp

};


extern const unsigned short _sch_istable[256];
# 110 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/safe-ctype.h"
extern const unsigned char _sch_toupper[256];
extern const unsigned char _sch_tolower[256];
# 122 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/safe-ctype.h"
# 1 "/usr/include/ctype.h" 1 3 4
# 25 "/usr/include/ctype.h" 3 4
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
# 26 "/usr/include/ctype.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4



# 31 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
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
# 27 "/usr/include/ctype.h" 2 3 4


# 39 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/endian.h" 2 3 4
# 40 "/usr/include/ctype.h" 2 3 4






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
# 237 "/usr/include/ctype.h" 3 4
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
# 238 "/usr/include/ctype.h" 2 3 4
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

# 123 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/safe-ctype.h" 2
# 36 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 2

# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






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
# 209 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef long unsigned int size_t;
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



# 38 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 2
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

# 39 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 2
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

# 40 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 2


# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
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
# 274 "/usr/include/stdlib.h" 3 4
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
# 401 "/usr/include/stdlib.h" 3 4
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

# 43 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 2


# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/demangle.h" 1
# 32 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/demangle.h"
# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h" 1
# 42 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/ansidecl.h" 1
# 43 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h" 2


# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
} max_align_t;
# 46 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h" 2

# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stdarg.h" 1 3 4
# 48 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h" 2








# 55 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern void unlock_stream (FILE *);





extern void unlock_std_streams (void);





extern FILE *fopen_unlocked (const char *, const char *);
extern FILE *fdopen_unlocked (int, const char *);
extern FILE *freopen_unlocked (const char *, const char *, FILE *);




extern char **buildargv (const char *) __attribute__ ((__malloc__));



extern void freeargv (char **);




extern char **dupargv (char * const *) __attribute__ ((__malloc__));



extern void expandargv (int *, char ***);



extern int writeargv (char * const *, FILE *);



extern int countargv (char * const *);
# 123 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern const char *lbasename (const char *) __attribute__ ((__returns_nonnull__)) __attribute__ ((__nonnull__ (1)));




extern const char *dos_lbasename (const char *) __attribute__ ((__returns_nonnull__)) __attribute__ ((__nonnull__ (1)));





extern const char *unix_lbasename (const char *) __attribute__ ((__returns_nonnull__)) __attribute__ ((__nonnull__ (1)));



extern char *lrealpath (const char *);



extern int is_valid_fd (int fd);





extern char *concat (const char *, ...) __attribute__ ((__malloc__)) __attribute__ ((__returns_nonnull__)) __attribute__ ((__sentinel__));
# 157 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern char *reconcat (char *, const char *, ...) __attribute__ ((__malloc__)) __attribute__ ((__returns_nonnull__)) __attribute__ ((__sentinel__));





extern unsigned long concat_length (const char *, ...) __attribute__ ((__sentinel__));






extern char *concat_copy (char *, const char *, ...) __attribute__ ((__returns_nonnull__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__sentinel__));






extern char *concat_copy2 (const char *, ...) __attribute__ ((__returns_nonnull__)) __attribute__ ((__sentinel__));



extern char *libiberty_concat_ptr;
# 193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern int fdmatch (int fd1, int fd2);
# 205 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern char * getpwd (void);
# 218 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern long get_run_time (void);




extern char *make_relative_prefix (const char *, const char *,
                                   const char *) __attribute__ ((__malloc__));





extern char *make_relative_prefix_ignore_links (const char *, const char *,
      const char *) __attribute__ ((__malloc__));




extern const char *choose_tmpdir (void) __attribute__ ((__returns_nonnull__));



extern char *choose_temp_base (void) __attribute__ ((__malloc__)) __attribute__ ((__returns_nonnull__));



extern char *make_temp_file (const char *) __attribute__ ((__malloc__));




extern char *make_temp_file_with_prefix (const char *, const char *) __attribute__ ((__malloc__));



extern int unlink_if_ordinary (const char *);



extern const char *spaces (int count);




extern int errno_max (void);




extern const char *strerrno (int);



extern int strtoerrno (const char *);



extern char *xstrerror (int) __attribute__ ((__returns_nonnull__));




extern int signo_max (void);
# 292 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern const char *strsigno (int);



extern int strtosigno (const char *);



extern int xatexit (void (*fn) (void));



extern void xexit (int status) __attribute__ ((__noreturn__));



extern void xmalloc_set_program_name (const char *);


extern void xmalloc_failed (size_t) __attribute__ ((__noreturn__));





extern void *xmalloc (size_t) __attribute__ ((__malloc__)) __attribute__ ((__returns_nonnull__)) __attribute__ ((alloc_size (1))) __attribute__ ((warn_unused_result));





extern void *xrealloc (void *, size_t) __attribute__ ((__returns_nonnull__)) __attribute__ ((alloc_size (2))) __attribute__ ((warn_unused_result));




extern void *xcalloc (size_t, size_t) __attribute__ ((__malloc__)) __attribute__ ((__returns_nonnull__)) __attribute__ ((alloc_size (1, 2))) __attribute__ ((warn_unused_result));



extern char *xstrdup (const char *) __attribute__ ((__malloc__)) __attribute__ ((__returns_nonnull__)) __attribute__ ((warn_unused_result));



extern char *xstrndup (const char *, size_t) __attribute__ ((__malloc__)) __attribute__ ((__returns_nonnull__)) __attribute__ ((warn_unused_result));



extern void *xmemdup (const void *, size_t, size_t) __attribute__ ((__malloc__)) __attribute__ ((__returns_nonnull__)) __attribute__ ((warn_unused_result));


extern double physmem_total (void);
extern double physmem_available (void);


extern unsigned int xcrc32 (const unsigned char *, int, unsigned int);
# 391 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern const unsigned char _hex_value[256];
extern void hex_init (void);
# 428 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern struct pex_obj *pex_init (int flags, const char *pname,
     const char *tempbase) __attribute__ ((__returns_nonnull__));
# 528 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern const char *pex_run (struct pex_obj *obj, int flags,
       const char *executable, char * const *argv,
       const char *outname, const char *errname,
       int *err);
# 543 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern const char *pex_run_in_environment (struct pex_obj *obj, int flags,
                      const char *executable,
                                           char * const *argv,
                                           char * const *env,
                              const char *outname,
        const char *errname, int *err);





extern FILE *pex_input_file (struct pex_obj *obj, int flags,
                             const char *in_name);






extern FILE *pex_input_pipe (struct pex_obj *obj, int binary);







extern FILE *pex_read_output (struct pex_obj *, int binary);







extern FILE *pex_read_err (struct pex_obj *, int binary);





extern int pex_get_status (struct pex_obj *, int count, int *vector);






struct pex_time
{
  unsigned long user_seconds;
  unsigned long user_microseconds;
  unsigned long system_seconds;
  unsigned long system_microseconds;
};

extern int pex_get_times (struct pex_obj *, int count,
     struct pex_time *vector);




extern void pex_free (struct pex_obj *);
# 618 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern const char *pex_one (int flags, const char *executable,
       char * const *argv, const char *pname,
       const char *outname, const char *errname,
       int *status, int *err);
# 637 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern int pexecute (const char *, char * const *, const char *,
                     const char *, char **, char **, int);



extern int pwait (int, int *, int);



extern void *bsearch_r (const void *, const void *,
   size_t, size_t,
   int (*)(const void *, const void *, void *),
   void *);
# 661 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern char *xasprintf (const char *, ...) __attribute__ ((__malloc__)) __attribute__ ((__format__ (__printf__, 1, 2))) __attribute__ ((__nonnull__ (1)));
# 673 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern char *xvasprintf (const char *, va_list) __attribute__ ((__malloc__)) __attribute__ ((__format__ (__printf__, 1, 0))) __attribute__ ((__nonnull__ (1)));
# 722 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern void setproctitle (const char *name, ...);


extern void stack_limit_increase (unsigned long);
# 735 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h"
extern void *C_alloca (size_t) __attribute__ ((__malloc__));
# 33 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/demangle.h" 2
# 83 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/demangle.h"
extern enum demangling_styles
{
  no_demangling = -1,
  unknown_demangling = 0,
  auto_demangling = (1 << 8),
  gnu_v3_demangling = (1 << 14),
  java_demangling = (1 << 2),
  gnat_demangling = (1 << 15),
  dlang_demangling = (1 << 16),
  rust_demangling = (1 << 17)
} current_demangling_style;
# 118 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/demangle.h"
extern const struct demangler_engine
{
  const char *const demangling_style_name;
  const enum demangling_styles demangling_style;
  const char *const demangling_style_doc;
} libiberty_demanglers[];

extern char *
cplus_demangle (const char *mangled, int options);



extern enum demangling_styles
cplus_demangle_set_style (enum demangling_styles style);

extern enum demangling_styles
cplus_demangle_name_to_style (const char *name);


typedef void (*demangle_callbackref) (const char *, size_t, void *);




extern int
cplus_demangle_v3_callback (const char *mangled, int options,
                            demangle_callbackref callback, void *opaque);

extern char*
cplus_demangle_v3 (const char *mangled, int options);

extern int
java_demangle_v3_callback (const char *mangled,
                           demangle_callbackref callback, void *opaque);

extern char*
java_demangle_v3 (const char *mangled);

char *
ada_demangle (const char *mangled, int options);

extern char *
dlang_demangle (const char *mangled, int options);

extern int
rust_demangle_callback (const char *mangled, int options,
                        demangle_callbackref callback, void *opaque);


extern char *
rust_demangle (const char *mangled, int options);

enum gnu_v3_ctor_kinds {
  gnu_v3_complete_object_ctor = 1,
  gnu_v3_base_object_ctor,
  gnu_v3_complete_object_allocating_ctor,



  gnu_v3_unified_ctor,
  gnu_v3_object_ctor_group
};





extern enum gnu_v3_ctor_kinds
 is_gnu_v3_mangled_ctor (const char *name);


enum gnu_v3_dtor_kinds {
  gnu_v3_deleting_dtor = 1,
  gnu_v3_complete_object_dtor,
  gnu_v3_base_object_dtor,



  gnu_v3_unified_dtor,
  gnu_v3_object_dtor_group
};





extern enum gnu_v3_dtor_kinds
 is_gnu_v3_mangled_dtor (const char *name);
# 221 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/demangle.h"
enum demangle_component_type
{

  DEMANGLE_COMPONENT_NAME,



  DEMANGLE_COMPONENT_QUAL_NAME,


  DEMANGLE_COMPONENT_LOCAL_NAME,


  DEMANGLE_COMPONENT_TYPED_NAME,


  DEMANGLE_COMPONENT_TEMPLATE,


  DEMANGLE_COMPONENT_TEMPLATE_PARAM,

  DEMANGLE_COMPONENT_FUNCTION_PARAM,


  DEMANGLE_COMPONENT_CTOR,

  DEMANGLE_COMPONENT_DTOR,


  DEMANGLE_COMPONENT_VTABLE,


  DEMANGLE_COMPONENT_VTT,



  DEMANGLE_COMPONENT_CONSTRUCTION_VTABLE,


  DEMANGLE_COMPONENT_TYPEINFO,


  DEMANGLE_COMPONENT_TYPEINFO_NAME,


  DEMANGLE_COMPONENT_TYPEINFO_FN,


  DEMANGLE_COMPONENT_THUNK,


  DEMANGLE_COMPONENT_VIRTUAL_THUNK,


  DEMANGLE_COMPONENT_COVARIANT_THUNK,

  DEMANGLE_COMPONENT_JAVA_CLASS,


  DEMANGLE_COMPONENT_GUARD,

  DEMANGLE_COMPONENT_TLS_INIT,
  DEMANGLE_COMPONENT_TLS_WRAPPER,


  DEMANGLE_COMPONENT_REFTEMP,


  DEMANGLE_COMPONENT_HIDDEN_ALIAS,


  DEMANGLE_COMPONENT_SUB_STD,


  DEMANGLE_COMPONENT_RESTRICT,


  DEMANGLE_COMPONENT_VOLATILE,


  DEMANGLE_COMPONENT_CONST,


  DEMANGLE_COMPONENT_RESTRICT_THIS,


  DEMANGLE_COMPONENT_VOLATILE_THIS,


  DEMANGLE_COMPONENT_CONST_THIS,


  DEMANGLE_COMPONENT_REFERENCE_THIS,


  DEMANGLE_COMPONENT_RVALUE_REFERENCE_THIS,



  DEMANGLE_COMPONENT_VENDOR_TYPE_QUAL,


  DEMANGLE_COMPONENT_POINTER,


  DEMANGLE_COMPONENT_REFERENCE,


  DEMANGLE_COMPONENT_RVALUE_REFERENCE,

  DEMANGLE_COMPONENT_COMPLEX,

  DEMANGLE_COMPONENT_IMAGINARY,

  DEMANGLE_COMPONENT_BUILTIN_TYPE,

  DEMANGLE_COMPONENT_VENDOR_TYPE,



  DEMANGLE_COMPONENT_FUNCTION_TYPE,



  DEMANGLE_COMPONENT_ARRAY_TYPE,



  DEMANGLE_COMPONENT_PTRMEM_TYPE,

  DEMANGLE_COMPONENT_FIXED_TYPE,


  DEMANGLE_COMPONENT_VECTOR_TYPE,


  DEMANGLE_COMPONENT_ARGLIST,



  DEMANGLE_COMPONENT_TEMPLATE_ARGLIST,


  DEMANGLE_COMPONENT_TPARM_OBJ,


  DEMANGLE_COMPONENT_INITIALIZER_LIST,


  DEMANGLE_COMPONENT_OPERATOR,


  DEMANGLE_COMPONENT_EXTENDED_OPERATOR,


  DEMANGLE_COMPONENT_CAST,



  DEMANGLE_COMPONENT_CONVERSION,

  DEMANGLE_COMPONENT_NULLARY,


  DEMANGLE_COMPONENT_UNARY,


  DEMANGLE_COMPONENT_BINARY,


  DEMANGLE_COMPONENT_BINARY_ARGS,


  DEMANGLE_COMPONENT_TRINARY,


  DEMANGLE_COMPONENT_TRINARY_ARG1,


  DEMANGLE_COMPONENT_TRINARY_ARG2,


  DEMANGLE_COMPONENT_LITERAL,






  DEMANGLE_COMPONENT_LITERAL_NEG,


  DEMANGLE_COMPONENT_JAVA_RESOURCE,


  DEMANGLE_COMPONENT_COMPOUND_NAME,

  DEMANGLE_COMPONENT_CHARACTER,

  DEMANGLE_COMPONENT_NUMBER,

  DEMANGLE_COMPONENT_DECLTYPE,

  DEMANGLE_COMPONENT_GLOBAL_CONSTRUCTORS,

  DEMANGLE_COMPONENT_GLOBAL_DESTRUCTORS,

  DEMANGLE_COMPONENT_LAMBDA,

  DEMANGLE_COMPONENT_DEFAULT_ARG,

  DEMANGLE_COMPONENT_UNNAMED_TYPE,


  DEMANGLE_COMPONENT_TRANSACTION_CLONE,



  DEMANGLE_COMPONENT_NONTRANSACTION_CLONE,

  DEMANGLE_COMPONENT_PACK_EXPANSION,

  DEMANGLE_COMPONENT_TAGGED_NAME,

  DEMANGLE_COMPONENT_TRANSACTION_SAFE,

  DEMANGLE_COMPONENT_CLONE,
  DEMANGLE_COMPONENT_NOEXCEPT,
  DEMANGLE_COMPONENT_THROW_SPEC
};



struct demangle_operator_info;
struct demangle_builtin_type_info;






struct demangle_component
{

  enum demangle_component_type type;




  int d_printing;
  int d_counting;

  union
  {

    struct
    {


      const char *s;
      int len;
    } s_name;


    struct
    {

      const struct demangle_operator_info *op;
    } s_operator;


    struct
    {

      int args;

      struct demangle_component *name;
    } s_extended_operator;


    struct
    {

      struct demangle_component *length;

      short accum;

      short sat;
    } s_fixed;


    struct
    {

      enum gnu_v3_ctor_kinds kind;

      struct demangle_component *name;
    } s_ctor;


    struct
    {

      enum gnu_v3_dtor_kinds kind;

      struct demangle_component *name;
    } s_dtor;


    struct
    {

      const struct demangle_builtin_type_info *type;
    } s_builtin;


    struct
    {

      const char* string;

      int len;
    } s_string;


    struct
    {

      long number;
    } s_number;


    struct
    {
      int character;
    } s_character;


    struct
    {

      struct demangle_component *left;

      struct demangle_component *right;
    } s_binary;

    struct
    {

      struct demangle_component *sub;

      int num;
    } s_unary_num;

  } u;
};
# 586 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/demangle.h"
extern int
cplus_demangle_fill_component (struct demangle_component *fill,
                               enum demangle_component_type,
                               struct demangle_component *left,
                               struct demangle_component *right);




extern int
cplus_demangle_fill_name (struct demangle_component *fill,
                          const char *, int);





extern int
cplus_demangle_fill_builtin_type (struct demangle_component *fill,
                                  const char *type_name);







extern int
cplus_demangle_fill_operator (struct demangle_component *fill,
                              const char *opname, int args);





extern int
cplus_demangle_fill_extended_operator (struct demangle_component *fill,
                                       int numargs,
                                       struct demangle_component *nm);




extern int
cplus_demangle_fill_ctor (struct demangle_component *fill,
                          enum gnu_v3_ctor_kinds kind,
                          struct demangle_component *name);




extern int
cplus_demangle_fill_dtor (struct demangle_component *fill,
                          enum gnu_v3_dtor_kinds kind,
                          struct demangle_component *name);
# 650 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/demangle.h"
extern struct demangle_component *
cplus_demangle_v3_components (const char *mangled, int options, void **mem);
# 665 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/demangle.h"
extern char *
cplus_demangle_print (int options,
                      struct demangle_component *tree,
                      int estimated_length,
                      size_t *p_allocated_size);
# 685 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/demangle.h"
extern int
cplus_demangle_print_callback (int options,
                               struct demangle_component *tree,
                               demangle_callbackref callback, void *opaque);
# 46 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 2
# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/libiberty.h" 1
# 47 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 2



typedef struct string
{
  char *b;
  char *p;
  char *e;
} string;

static void
string_need (string *s, int n)
{
  int tem;

  if (s->b == 
# 62 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
             ((void *)0)
# 62 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                 )
    {
      if (n < 32)
 {
   n = 32;
 }
      s->p = s->b = ((char *) xmalloc (sizeof (char) * (n)));
      s->e = s->b + n;
    }
  else if (s->e - s->p < n)
    {
      tem = s->p - s->b;
      n += tem;
      n *= 2;
      s->b = ((char *) xrealloc ((void *) (s->b), sizeof (char) * (n)));
      s->p = s->b + tem;
      s->e = s->b + n;
    }
}

static void
string_delete (string *s)
{
  if (s->b != 
# 85 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
             ((void *)0)
# 85 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                 )
    {
      free ((void*) (s->b));
      s->b = s->e = s->p = 
# 88 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                          ((void *)0)
# 88 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                              ;
    }
}

static void
string_init (string *s)
{
  s->b = s->p = s->e = 
# 95 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                      ((void *)0)
# 95 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                          ;
}

static int
string_length (string *s)
{
  if (s->p == s->b)
    {
      return 0;
    }
  return s->p - s->b;
}

static void
string_setlength (string *s, int n)
{
  if (n - string_length (s) < 0)
    {
      s->p = s->b + n;
    }
}

static void
string_append (string *p, const char *s)
{
  int n = strlen (s);
  string_need (p, n);
  memcpy (p->p, s, n);
  p->p += n;
}

static void
string_appendn (string *p, const char *s, int n)
{
  if (n != 0)
    {
      string_need (p, n);
      memcpy (p->p, s, n);
      p->p += n;
    }
}

static void
string_prependn (string *p, const char *s, int n)
{
  char *q;

  if (n != 0)
    {
      string_need (p, n);
      for (q = p->p - 1; q >= p->b; q--)
 {
   q[n] = q[0];
 }
      memcpy (p->b, s, n);
      p->p += n;
    }
}

static void
string_prepend (string *p, const char *s)
{
  if (s != 
# 157 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0) 
# 157 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
               && *s != '\0')
    {
      string_prependn (p, s, strlen (s));
    }
}


struct dlang_info
{

  const char *s;

  int last_backref;
};


enum { TEMPLATE_LENGTH_UNKNOWN = -1 };


static const char *dlang_function_type (string *, const char *,
     struct dlang_info *);

static const char *dlang_function_args (string *, const char *,
     struct dlang_info *);

static const char *dlang_type (string *, const char *, struct dlang_info *);

static const char *dlang_value (string *, const char *, const char *, char);

static const char *dlang_parse_qualified (string *, const char *,
       struct dlang_info *, int);

static const char *dlang_parse_mangle (string *, const char *,
           struct dlang_info *);

static const char *dlang_parse_tuple (string *, const char *,
          struct dlang_info *);

static const char *dlang_parse_template (string *, const char *,
      struct dlang_info *, long);

static const char *dlang_lname (string *, const char *, long);




static const char *
dlang_number (const char *mangled, long *ret)
{

  if (mangled == 
# 207 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 207 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || !(_sch_istable[(*mangled) & 0xff] & (unsigned short)(_sch_isdigit)))
    return 
# 208 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 208 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  (*ret) = 0;

  while ((_sch_istable[(*mangled) & 0xff] & (unsigned short)(_sch_isdigit)))
    {
      (*ret) *= 10;



      if ((*ret % 10) != 0)
 return 
# 219 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 219 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;

      (*ret) += mangled[0] - '0';
      mangled++;
    }

  if (*mangled == '\0' || *ret < 0)
    return 
# 226 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 226 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  return mangled;
}



static const char *
dlang_hexdigit (const char *mangled, char *ret)
{
  char c;


  if (mangled == 
# 239 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 239 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || !(_sch_istable[(mangled[0]) & 0xff] & (unsigned short)(_sch_isxdigit)) || !(_sch_istable[(mangled[1]) & 0xff] & (unsigned short)(_sch_isxdigit)))
    return 
# 240 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 240 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  c = mangled[0];
  if (!(_sch_istable[(c) & 0xff] & (unsigned short)(_sch_isdigit)))
    (*ret) = (c - ((_sch_istable[(c) & 0xff] & (unsigned short)(_sch_isupper)) ? 'A' : 'a') + 10);
  else
    (*ret) = (c - '0');

  c = mangled[1];
  if (!(_sch_istable[(c) & 0xff] & (unsigned short)(_sch_isdigit)))
    (*ret) = (*ret << 4) | (c - ((_sch_istable[(c) & 0xff] & (unsigned short)(_sch_isupper)) ? 'A' : 'a') + 10);
  else
    (*ret) = (*ret << 4) | (c - '0');

  mangled += 2;

  return mangled;
}



static int
dlang_call_convention_p (const char *mangled)
{
  switch (*mangled)
    {
    case 'F': case 'U': case 'V':
    case 'W': case 'R': case 'Y':
      return 1;

    default:
      return 0;
    }
}



static const char *
dlang_decode_backref (const char *mangled, long *ret)
{

  if (mangled == 
# 281 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 281 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || !(_sch_istable[(*mangled) & 0xff] & (unsigned short)(_sch_isalpha)))
    return 
# 282 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 282 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;
# 297 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
  (*ret) = 0;

  while ((_sch_istable[(*mangled) & 0xff] & (unsigned short)(_sch_isalpha)))
    {
      (*ret) *= 26;



      if ((*ret % 26) != 0)
 return 
# 306 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 306 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;

      if (mangled[0] >= 'a' && mangled[0] <= 'z')
 {
   (*ret) += mangled[0] - 'a';
   return mangled + 1;
 }

      (*ret) += mangled[0] - 'A';
      mangled++;
    }

  return 
# 318 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
        ((void *)0)
# 318 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
            ;
}



static const char *
dlang_backref (const char *mangled, const char **ret, struct dlang_info *info)
{
  (*ret) = 
# 326 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 326 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  if (mangled == 
# 328 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 328 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || *mangled != 'Q')
    return 
# 329 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 329 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;


  const char *qpos = mangled;
  long refpos;
  mangled++;

  mangled = dlang_decode_backref (mangled, &refpos);
  if (mangled == 
# 337 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0)
# 337 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                    )
    return 
# 338 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 338 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  if (refpos <= 0 || refpos > qpos - info->s)
    return 
# 341 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 341 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;


  (*ret) = qpos - refpos;

  return mangled;
}



static const char *
dlang_symbol_backref (string *decl, const char *mangled,
        struct dlang_info *info)
{






  const char *backref;
  long len;


  mangled = dlang_backref (mangled, &backref, info);


  backref = dlang_number (backref, &len);
  if (backref == 
# 369 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0)
# 369 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                    )
    return 
# 370 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 370 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  backref = dlang_lname (decl, backref, len);
  if (backref == 
# 373 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0)
# 373 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                    )
    return 
# 374 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 374 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  return mangled;
}




static const char *
dlang_type_backref (string *decl, const char *mangled, struct dlang_info *info,
      int is_function)
{






  const char *backref;



  if (mangled - info->s >= info->last_backref)
    return 
# 397 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 397 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  int save_refpos = info->last_backref;
  info->last_backref = mangled - info->s;


  mangled = dlang_backref (mangled, &backref, info);


  if (is_function)
    backref = dlang_function_type (decl, backref, info);
  else
    backref = dlang_type (decl, backref, info);

  info->last_backref = save_refpos;

  if (backref == 
# 413 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0)
# 413 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                    )
    return 
# 414 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 414 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  return mangled;
}



static int
dlang_symbol_name_p (const char *mangled, struct dlang_info *info)
{
  long ret;
  const char *qref = mangled;

  if ((_sch_istable[(*mangled) & 0xff] & (unsigned short)(_sch_isdigit)))
    return 1;

  if (mangled[0] == '_' && mangled[1] == '_'
      && (mangled[2] == 'T' || mangled[2] == 'U'))
    return 1;

  if (*mangled != 'Q')
    return 0;

  mangled = dlang_decode_backref (mangled + 1, &ret);
  if (mangled == 
# 438 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 438 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || ret <= 0 || ret > qref - info->s)
    return 0;

  return (_sch_istable[(qref[-ret]) & 0xff] & (unsigned short)(_sch_isdigit));
}



static const char *
dlang_call_convention (string *decl, const char *mangled)
{
  if (mangled == 
# 449 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 449 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || *mangled == '\0')
    return 
# 450 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 450 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  switch (*mangled)
    {
    case 'F':
      mangled++;
      break;
    case 'U':
      mangled++;
      string_append (decl, "extern(C) ");
      break;
    case 'W':
      mangled++;
      string_append (decl, "extern(Windows) ");
      break;
    case 'V':
      mangled++;
      string_append (decl, "extern(Pascal) ");
      break;
    case 'R':
      mangled++;
      string_append (decl, "extern(C++) ");
      break;
    case 'Y':
      mangled++;
      string_append (decl, "extern(Objective-C) ");
      break;
    default:
      return 
# 478 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
            ((void *)0)
# 478 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                ;
    }

  return mangled;
}



static const char *
dlang_type_modifiers (string *decl, const char *mangled)
{
  if (mangled == 
# 489 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 489 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || *mangled == '\0')
    return 
# 490 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 490 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  switch (*mangled)
    {
    case 'x':
      mangled++;
      string_append (decl, " const");
      return mangled;
    case 'y':
      mangled++;
      string_append (decl, " immutable");
      return mangled;
    case 'O':
      mangled++;
      string_append (decl, " shared");
      return dlang_type_modifiers (decl, mangled);
    case 'N':
      mangled++;
      if (*mangled == 'g')
 {
   mangled++;
   string_append (decl, " inout");
   return dlang_type_modifiers (decl, mangled);
 }
      else
 return 
# 515 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 515 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;

    default:
      return mangled;
    }
}



static const char *
dlang_attributes (string *decl, const char *mangled)
{
  if (mangled == 
# 527 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 527 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || *mangled == '\0')
    return 
# 528 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 528 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  while (*mangled == 'N')
    {
      mangled++;
      switch (*mangled)
 {
 case 'a':
   mangled++;
   string_append (decl, "pure ");
   continue;
 case 'b':
   mangled++;
   string_append (decl, "nothrow ");
   continue;
 case 'c':
   mangled++;
   string_append (decl, "ref ");
   continue;
 case 'd':
   mangled++;
   string_append (decl, "@property ");
   continue;
 case 'e':
   mangled++;
   string_append (decl, "@trusted ");
   continue;
 case 'f':
   mangled++;
   string_append (decl, "@safe ");
   continue;
 case 'g':
 case 'h':
 case 'k':





   mangled--;
   break;
 case 'i':
   mangled++;
   string_append (decl, "@nogc ");
   continue;
 case 'j':
   mangled++;
   string_append (decl, "return ");
   continue;
 case 'l':
   mangled++;
   string_append (decl, "scope ");
   continue;
 case 'm':
   mangled++;
   string_append (decl, "@live ");
   continue;

 default:
   return 
# 587 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
         ((void *)0)
# 587 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
             ;
 }
      break;
    }

  return mangled;
}






static const char *
dlang_function_type_noreturn (string *args, string *call, string *attr,
         const char *mangled, struct dlang_info *info)
{
  string dump;
  string_init (&dump);


  mangled = dlang_call_convention (call ? call : &dump, mangled);
  mangled = dlang_attributes (attr ? attr : &dump, mangled);

  if (args)
    string_append (args, "(");

  mangled = dlang_function_args (args ? args : &dump, mangled, info);
  if (args)
    string_append (args, ")");

  string_delete (&dump);
  return mangled;
}



static const char *
dlang_function_type (string *decl, const char *mangled, struct dlang_info *info)
{
  string attr, args, type;

  if (mangled == 
# 629 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 629 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || *mangled == '\0')
    return 
# 630 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 630 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;







  string_init (&attr);
  string_init (&args);
  string_init (&type);

  mangled = dlang_function_type_noreturn (&args, decl, &attr, mangled, info);


  mangled = dlang_type (&type, mangled, info);


  string_appendn (decl, type.b, string_length (&type));
  string_appendn (decl, args.b, string_length (&args));
  string_append (decl, " ");
  string_appendn (decl, attr.b, string_length (&attr));

  string_delete (&attr);
  string_delete (&args);
  string_delete (&type);
  return mangled;
}



static const char *
dlang_function_args (string *decl, const char *mangled, struct dlang_info *info)
{
  size_t n = 0;

  while (mangled && *mangled != '\0')
    {
      switch (*mangled)
 {
 case 'X':
   mangled++;
   string_append (decl, "...");
   return mangled;
 case 'Y':
   mangled++;
   if (n != 0)
     string_append (decl, ", ");
   string_append (decl, "...");
   return mangled;
 case 'Z':
   mangled++;
   return mangled;
 }

      if (n++)
 string_append (decl, ", ");

      if (*mangled == 'M')
 {
   mangled++;
   string_append (decl, "scope ");
 }

      if (mangled[0] == 'N' && mangled[1] == 'k')
 {
   mangled += 2;
   string_append (decl, "return ");
 }

      switch (*mangled)
 {
 case 'J':
   mangled++;
   string_append (decl, "out ");
   break;
 case 'K':
   mangled++;
   string_append (decl, "ref ");
   break;
 case 'L':
   mangled++;
   string_append (decl, "lazy ");
   break;
 }
      mangled = dlang_type (decl, mangled, info);
    }

  return mangled;
}



static const char *
dlang_type (string *decl, const char *mangled, struct dlang_info *info)
{
  if (mangled == 
# 726 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 726 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || *mangled == '\0')
    return 
# 727 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 727 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  switch (*mangled)
    {
    case 'O':
      mangled++;
      string_append (decl, "shared(");
      mangled = dlang_type (decl, mangled, info);
      string_append (decl, ")");
      return mangled;
    case 'x':
      mangled++;
      string_append (decl, "const(");
      mangled = dlang_type (decl, mangled, info);
      string_append (decl, ")");
      return mangled;
    case 'y':
      mangled++;
      string_append (decl, "immutable(");
      mangled = dlang_type (decl, mangled, info);
      string_append (decl, ")");
      return mangled;
    case 'N':
      mangled++;
      if (*mangled == 'g')
 {
   mangled++;
   string_append (decl, "inout(");
   mangled = dlang_type (decl, mangled, info);
   string_append (decl, ")");
   return mangled;
 }
      else if (*mangled == 'h')
 {
   mangled++;
   string_append (decl, "__vector(");
   mangled = dlang_type (decl, mangled, info);
   string_append (decl, ")");
   return mangled;
 }
      else
 return 
# 768 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 768 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;
    case 'A':
      mangled++;
      mangled = dlang_type (decl, mangled, info);
      string_append (decl, "[]");
      return mangled;
    case 'G':
    {
      const char *numptr;
      size_t num = 0;
      mangled++;

      numptr = mangled;
      while ((_sch_istable[(*mangled) & 0xff] & (unsigned short)(_sch_isdigit)))
 {
   num++;
   mangled++;
 }
      mangled = dlang_type (decl, mangled, info);
      string_append (decl, "[");
      string_appendn (decl, numptr, num);
      string_append (decl, "]");
      return mangled;
    }
    case 'H':
    {
      string type;
      size_t sztype;
      mangled++;

      string_init (&type);
      mangled = dlang_type (&type, mangled, info);
      sztype = string_length (&type);

      mangled = dlang_type (decl, mangled, info);
      string_append (decl, "[");
      string_appendn (decl, type.b, sztype);
      string_append (decl, "]");

      string_delete (&type);
      return mangled;
    }
    case 'P':
      mangled++;
      if (!dlang_call_convention_p (mangled))
 {
   mangled = dlang_type (decl, mangled, info);
   string_append (decl, "*");
   return mangled;
 }

    case 'F':
    case 'U':
    case 'W':
    case 'V':
    case 'R':
    case 'Y':

      mangled = dlang_function_type (decl, mangled, info);
      string_append (decl, "function");
      return mangled;
    case 'I':
    case 'C':
    case 'S':
    case 'E':
    case 'T':
      mangled++;
      return dlang_parse_qualified (decl, mangled, info, 0);
    case 'D':
    {
      string mods;
      size_t szmods;
      mangled++;

      string_init (&mods);
      mangled = dlang_type_modifiers (&mods, mangled);
      szmods = string_length (&mods);


      if (*mangled == 'Q')
 mangled = dlang_type_backref (decl, mangled, info, 1);
      else
 mangled = dlang_function_type (decl, mangled, info);

      string_append (decl, "delegate");
      string_appendn (decl, mods.b, szmods);

      string_delete (&mods);
      return mangled;
    }
    case 'B':
      mangled++;
      return dlang_parse_tuple (decl, mangled, info);


    case 'n':
      mangled++;
      string_append (decl, "none");
      return mangled;
    case 'v':
      mangled++;
      string_append (decl, "void");
      return mangled;
    case 'g':
      mangled++;
      string_append (decl, "byte");
      return mangled;
    case 'h':
      mangled++;
      string_append (decl, "ubyte");
      return mangled;
    case 's':
      mangled++;
      string_append (decl, "short");
      return mangled;
    case 't':
      mangled++;
      string_append (decl, "ushort");
      return mangled;
    case 'i':
      mangled++;
      string_append (decl, "int");
      return mangled;
    case 'k':
      mangled++;
      string_append (decl, "uint");
      return mangled;
    case 'l':
      mangled++;
      string_append (decl, "long");
      return mangled;
    case 'm':
      mangled++;
      string_append (decl, "ulong");
      return mangled;
    case 'f':
      mangled++;
      string_append (decl, "float");
      return mangled;
    case 'd':
      mangled++;
      string_append (decl, "double");
      return mangled;
    case 'e':
      mangled++;
      string_append (decl, "real");
      return mangled;


    case 'o':
      mangled++;
      string_append (decl, "ifloat");
      return mangled;
    case 'p':
      mangled++;
      string_append (decl, "idouble");
      return mangled;
    case 'j':
      mangled++;
      string_append (decl, "ireal");
      return mangled;
    case 'q':
      mangled++;
      string_append (decl, "cfloat");
      return mangled;
    case 'r':
      mangled++;
      string_append (decl, "cdouble");
      return mangled;
    case 'c':
      mangled++;
      string_append (decl, "creal");
      return mangled;


    case 'b':
      mangled++;
      string_append (decl, "bool");
      return mangled;
    case 'a':
      mangled++;
      string_append (decl, "char");
      return mangled;
    case 'u':
      mangled++;
      string_append (decl, "wchar");
      return mangled;
    case 'w':
      mangled++;
      string_append (decl, "dchar");
      return mangled;
    case 'z':
      mangled++;
      switch (*mangled)
 {
 case 'i':
   mangled++;
   string_append (decl, "cent");
   return mangled;
 case 'k':
   mangled++;
   string_append (decl, "ucent");
   return mangled;
 }
      return 
# 972 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
            ((void *)0)
# 972 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                ;


    case 'Q':
      return dlang_type_backref (decl, mangled, info, 0);

    default:
      return 
# 979 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
            ((void *)0)
# 979 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                ;
    }
}



static const char *
dlang_identifier (string *decl, const char *mangled, struct dlang_info *info)
{
  long len;

  if (mangled == 
# 990 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 990 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || *mangled == '\0')
    return 
# 991 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 991 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  if (*mangled == 'Q')
    return dlang_symbol_backref (decl, mangled, info);


  if (mangled[0] == '_' && mangled[1] == '_'
      && (mangled[2] == 'T' || mangled[2] == 'U'))
    return dlang_parse_template (decl, mangled, info, TEMPLATE_LENGTH_UNKNOWN);

  const char *endptr = dlang_number (mangled, &len);

  if (endptr == 
# 1003 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
               ((void *)0) 
# 1003 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                    || len == 0)
    return 
# 1004 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1004 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  if (strlen (endptr) < (size_t) len)
    return 
# 1007 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1007 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  mangled = endptr;


  if (len >= 5 && mangled[0] == '_' && mangled[1] == '_'
      && (mangled[2] == 'T' || mangled[2] == 'U'))
    return dlang_parse_template (decl, mangled, info, len);

  return dlang_lname (decl, mangled, len);
}




static const char *
dlang_lname (string *decl, const char *mangled, long len)
{
  switch (len)
    {
    case 6:
      if (strncmp (mangled, "__ctor", len) == 0)
 {

   string_append (decl, "this");
   mangled += len;
   return mangled;
 }
      else if (strncmp (mangled, "__dtor", len) == 0)
 {

   string_append (decl, "~this");
   mangled += len;
   return mangled;
 }
      else if (strncmp (mangled, "__initZ", len + 1) == 0)
 {

   string_prepend (decl, "initializer for ");
   string_setlength (decl, string_length (decl) - 1);
   mangled += len;
   return mangled;
 }
      else if (strncmp (mangled, "__vtblZ", len + 1) == 0)
 {

   string_prepend (decl, "vtable for ");
   string_setlength (decl, string_length (decl) - 1);
   mangled += len;
   return mangled;
 }
      break;

    case 7:
      if (strncmp (mangled, "__ClassZ", len + 1) == 0)
 {

   string_prepend (decl, "ClassInfo for ");
   string_setlength (decl, string_length (decl) - 1);
   mangled += len;
   return mangled;
 }
      break;

    case 10:
      if (strncmp (mangled, "__postblitMFZ", len + 3) == 0)
 {

   string_append (decl, "this(this)");
   mangled += len + 3;
   return mangled;
 }
      break;

    case 11:
      if (strncmp (mangled, "__InterfaceZ", len + 1) == 0)
 {

   string_prepend (decl, "Interface for ");
   string_setlength (decl, string_length (decl) - 1);
   mangled += len;
   return mangled;
 }
      break;

    case 12:
      if (strncmp (mangled, "__ModuleInfoZ", len + 1) == 0)
 {

   string_prepend (decl, "ModuleInfo for ");
   string_setlength (decl, string_length (decl) - 1);
   mangled += len;
   return mangled;
 }
      break;
    }

  string_appendn (decl, mangled, len);
  mangled += len;

  return mangled;
}




static const char *
dlang_parse_integer (string *decl, const char *mangled, char type)
{
  if (type == 'a' || type == 'u' || type == 'w')
    {

      char value[20];
      int pos = sizeof(value);
      int width = 0;
      long val;

      mangled = dlang_number (mangled, &val);
      if (mangled == 
# 1125 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                    ((void *)0)
# 1125 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                        )
 return 
# 1126 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 1126 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;

      string_append (decl, "'");

      if (type == 'a' && val >= 0x20 && val < 0x7F)
 {

   char c = (char) val;
   string_appendn (decl, &c, 1);
 }
      else
 {

   switch (type)
     {
     case 'a':
       string_append (decl, "\\x");
       width = 2;
       break;
     case 'u':
       string_append (decl, "\\u");
       width = 4;
       break;
     case 'w':
       string_append (decl, "\\U");
       width = 8;
       break;
     }

   while (val > 0)
     {
       int digit = val % 16;

       if (digit < 10)
  value[--pos] = (char)(digit + '0');
       else
  value[--pos] = (char)((digit - 10) + 'a');

       val /= 16;
       width--;
     }

   for (; width > 0; width--)
     value[--pos] = '0';

   string_appendn (decl, &(value[pos]), sizeof(value) - pos);
 }
      string_append (decl, "'");
    }
  else if (type == 'b')
    {

      long val;

      mangled = dlang_number (mangled, &val);
      if (mangled == 
# 1181 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                    ((void *)0)
# 1181 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                        )
 return 
# 1182 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 1182 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;

      string_append (decl, val ? "true" : "false");
    }
  else
    {

      const char *numptr = mangled;
      size_t num = 0;

      if (! (_sch_istable[(*mangled) & 0xff] & (unsigned short)(_sch_isdigit)))
 return 
# 1193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 1193 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;

      while ((_sch_istable[(*mangled) & 0xff] & (unsigned short)(_sch_isdigit)))
 {
   num++;
   mangled++;
 }
      string_appendn (decl, numptr, num);


      switch (type)
 {
 case 'h':
 case 't':
 case 'k':
   string_append (decl, "u");
   break;
 case 'l':
   string_append (decl, "L");
   break;
 case 'm':
   string_append (decl, "uL");
   break;
 }
    }

  return mangled;
}



static const char *
dlang_parse_real (string *decl, const char *mangled)
{

  if (strncmp (mangled, "NAN", 3) == 0)
    {
      string_append (decl, "NaN");
      mangled += 3;
      return mangled;
    }
  else if (strncmp (mangled, "INF", 3) == 0)
    {
      string_append (decl, "Inf");
      mangled += 3;
      return mangled;
    }
  else if (strncmp (mangled, "NINF", 4) == 0)
    {
      string_append (decl, "-Inf");
      mangled += 4;
      return mangled;
    }


  if (*mangled == 'N')
    {
      string_append (decl, "-");
      mangled++;
    }

  if (!(_sch_istable[(*mangled) & 0xff] & (unsigned short)(_sch_isxdigit)))
    return 
# 1255 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1255 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  string_append (decl, "0x");
  string_appendn (decl, mangled, 1);
  string_append (decl, ".");
  mangled++;


  while ((_sch_istable[(*mangled) & 0xff] & (unsigned short)(_sch_isxdigit)))
    {
      string_appendn (decl, mangled, 1);
      mangled++;
    }


  if (*mangled != 'P')
    return 
# 1271 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1271 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  string_append (decl, "p");
  mangled++;

  if (*mangled == 'N')
    {
      string_append (decl, "-");
      mangled++;
    }

  while ((_sch_istable[(*mangled) & 0xff] & (unsigned short)(_sch_isdigit)))
    {
      string_appendn (decl, mangled, 1);
      mangled++;
    }

  return mangled;
}



static const char *
dlang_parse_string (string *decl, const char *mangled)
{
  char type = *mangled;
  long len;

  mangled++;
  mangled = dlang_number (mangled, &len);
  if (mangled == 
# 1301 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 1301 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || *mangled != '_')
    return 
# 1302 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1302 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  mangled++;
  string_append (decl, "\"");
  while (len--)
    {
      char val;
      const char *endptr = dlang_hexdigit (mangled, &val);

      if (endptr == 
# 1311 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                   ((void *)0)
# 1311 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                       )
 return 
# 1312 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 1312 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;


      switch (val)
 {
 case ' ':
   string_append (decl, " ");
   break;
 case '\t':
   string_append (decl, "\\t");
   break;
 case '\n':
   string_append (decl, "\\n");
   break;
 case '\r':
   string_append (decl, "\\r");
   break;
 case '\f':
   string_append (decl, "\\f");
   break;
 case '\v':
   string_append (decl, "\\v");
   break;

 default:
   if ((_sch_istable[(val) & 0xff] & (unsigned short)(_sch_isprint)))
     string_appendn (decl, &val, 1);
   else
     {
       string_append (decl, "\\x");
       string_appendn (decl, mangled, 2);
     }
 }

      mangled = endptr;
    }
  string_append (decl, "\"");

  if (type != 'a')
    string_appendn (decl, &type, 1);

  return mangled;
}



static const char *
dlang_parse_arrayliteral (string *decl, const char *mangled)
{
  long elements;

  mangled = dlang_number (mangled, &elements);
  if (mangled == 
# 1364 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0)
# 1364 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                    )
    return 
# 1365 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1365 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  string_append (decl, "[");
  while (elements--)
    {
      mangled = dlang_value (decl, mangled, 
# 1370 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                                           ((void *)0)
# 1370 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                                               , '\0');
      if (mangled == 
# 1371 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                    ((void *)0)
# 1371 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                        )
 return 
# 1372 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 1372 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;

      if (elements != 0)
 string_append (decl, ", ");
    }

  string_append (decl, "]");
  return mangled;
}



static const char *
dlang_parse_assocarray (string *decl, const char *mangled)
{
  long elements;

  mangled = dlang_number (mangled, &elements);
  if (mangled == 
# 1390 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0)
# 1390 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                    )
    return 
# 1391 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1391 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  string_append (decl, "[");
  while (elements--)
    {
      mangled = dlang_value (decl, mangled, 
# 1396 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                                           ((void *)0)
# 1396 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                                               , '\0');
      if (mangled == 
# 1397 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                    ((void *)0)
# 1397 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                        )
 return 
# 1398 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 1398 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;

      string_append (decl, ":");
      mangled = dlang_value (decl, mangled, 
# 1401 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                                           ((void *)0)
# 1401 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                                               , '\0');
      if (mangled == 
# 1402 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                    ((void *)0)
# 1402 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                        )
 return 
# 1403 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 1403 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;

      if (elements != 0)
 string_append (decl, ", ");
    }

  string_append (decl, "]");
  return mangled;
}



static const char *
dlang_parse_structlit (string *decl, const char *mangled, const char *name)
{
  long args;

  mangled = dlang_number (mangled, &args);
  if (mangled == 
# 1421 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0)
# 1421 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                    )
    return 
# 1422 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1422 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  if (name != 
# 1424 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
             ((void *)0)
# 1424 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                 )
    string_append (decl, name);

  string_append (decl, "(");
  while (args--)
    {
      mangled = dlang_value (decl, mangled, 
# 1430 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                                           ((void *)0)
# 1430 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                                               , '\0');
      if (mangled == 
# 1431 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                    ((void *)0)
# 1431 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                        )
 return 
# 1432 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 1432 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;

      if (args != 0)
 string_append (decl, ", ");
    }

  string_append (decl, ")");
  return mangled;
}



static const char *
dlang_value (string *decl, const char *mangled, const char *name, char type)
{
  if (mangled == 
# 1447 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 1447 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || *mangled == '\0')
    return 
# 1448 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1448 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  switch (*mangled)
    {

    case 'n':
      mangled++;
      string_append (decl, "null");
      break;


    case 'N':
      mangled++;
      string_append (decl, "-");
      mangled = dlang_parse_integer (decl, mangled, type);
      break;

    case 'i':
      mangled++;





    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
      mangled = dlang_parse_integer (decl, mangled, type);
      break;


    case 'e':
      mangled++;
      mangled = dlang_parse_real (decl, mangled);
      break;


    case 'c':
      mangled++;
      mangled = dlang_parse_real (decl, mangled);
      string_append (decl, "+");
      if (mangled == 
# 1488 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                    ((void *)0) 
# 1488 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                         || *mangled != 'c')
 return 
# 1489 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 1489 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;
      mangled++;
      mangled = dlang_parse_real (decl, mangled);
      string_append (decl, "i");
      break;


    case 'a':
    case 'w':
    case 'd':
      mangled = dlang_parse_string (decl, mangled);
      break;


    case 'A':
      mangled++;
      if (type == 'H')
 mangled = dlang_parse_assocarray (decl, mangled);
      else
 mangled = dlang_parse_arrayliteral (decl, mangled);
      break;


    case 'S':
      mangled++;
      mangled = dlang_parse_structlit (decl, mangled, name);
      break;

    default:
      return 
# 1518 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
            ((void *)0)
# 1518 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                ;
    }

  return mangled;
}



static const char *
dlang_parse_mangle (string *decl, const char *mangled, struct dlang_info *info)
{
# 1540 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
  mangled += 2;

  mangled = dlang_parse_qualified (decl, mangled, info, 1);

  if (mangled != 
# 1544 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0)
# 1544 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                    )
    {

      if (*mangled == 'Z')
 mangled++;
      else
 {

   string type;

   string_init (&type);
   mangled = dlang_type (&type, mangled, info);
   string_delete (&type);
 }
    }

  return mangled;
}




static const char *
dlang_parse_qualified (string *decl, const char *mangled,
         struct dlang_info *info, int suffix_modifiers)
{
# 1587 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
  size_t n = 0;
  do
    {
      if (n++)
 string_append (decl, ".");


      while (*mangled == '0')
 mangled++;

      mangled = dlang_identifier (decl, mangled, info);





      if (mangled && (*mangled == 'M' || dlang_call_convention_p (mangled)))
 {
   string mods;
   const char *start = mangled;
   int saved = string_length (decl);


   string_init (&mods);


   if (*mangled == 'M')
     {
       mangled++;
       mangled = dlang_type_modifiers (&mods, mangled);
       string_setlength (decl, saved);
     }

   mangled = dlang_function_type_noreturn (decl, 
# 1620 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                                                ((void *)0)
# 1620 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                                                    , 
# 1620 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                                                      ((void *)0)
# 1620 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                                                          ,
        mangled, info);
   if (suffix_modifiers)
     string_appendn (decl, mods.b, string_length (&mods));

   if (mangled == 
# 1625 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                 ((void *)0) 
# 1625 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                      || *mangled == '\0')
     {

       mangled = start;
       string_setlength (decl, saved);
     }

   string_delete (&mods);
 }
    }
  while (mangled && dlang_symbol_name_p (mangled, info));

  return mangled;
}



static const char *
dlang_parse_tuple (string *decl, const char *mangled, struct dlang_info *info)
{
  long elements;

  mangled = dlang_number (mangled, &elements);
  if (mangled == 
# 1648 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0)
# 1648 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                    )
    return 
# 1649 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1649 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  string_append (decl, "Tuple!(");

  while (elements--)
    {
      mangled = dlang_type (decl, mangled, info);
      if (mangled == 
# 1656 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                    ((void *)0)
# 1656 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                        )
 return 
# 1657 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
       ((void *)0)
# 1657 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
           ;

      if (elements != 0)
 string_append (decl, ", ");
    }

  string_append (decl, ")");
  return mangled;
}



static const char *
dlang_template_symbol_param (string *decl, const char *mangled,
        struct dlang_info *info)
{
  if (strncmp (mangled, "_D", 2) == 0
      && dlang_symbol_name_p (mangled + 2, info))
    return dlang_parse_mangle (decl, mangled, info);

  if (*mangled == 'Q')
    return dlang_parse_qualified (decl, mangled, info, 0);

  long len;
  const char *endptr = dlang_number (mangled, &len);

  if (endptr == 
# 1683 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
               ((void *)0) 
# 1683 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                    || len == 0)
    return 
# 1684 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1684 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;





  long psize = len;
  const char *pend;
  int saved = string_length (decl);


  for (pend = endptr; endptr != 
# 1695 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                               ((void *)0)
# 1695 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                                   ; pend--)
    {
      mangled = pend;



      if (psize == 0)
 {
   psize = len;
   pend = endptr;
   endptr = 
# 1705 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
           ((void *)0)
# 1705 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
               ;
 }



      if (dlang_symbol_name_p (mangled, info))
 mangled = dlang_parse_qualified (decl, mangled, info, 0);
      else if (strncmp (mangled, "_D", 2) == 0
        && dlang_symbol_name_p (mangled + 2, info))
 mangled = dlang_parse_mangle (decl, mangled, info);


      if (mangled && (endptr == 
# 1717 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                               ((void *)0) 
# 1717 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                                    || (mangled - pend) == psize))
 return mangled;

      psize /= 10;
      string_setlength (decl, saved);
    }


  return 
# 1725 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
        ((void *)0)
# 1725 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
            ;
}



static const char *
dlang_template_args (string *decl, const char *mangled, struct dlang_info *info)
{
  size_t n = 0;

  while (mangled && *mangled != '\0')
    {
      switch (*mangled)
 {
 case 'Z':
   mangled++;
   return mangled;
 }

      if (n++)
 string_append (decl, ", ");


      if (*mangled == 'H')
 mangled++;

      switch (*mangled)
 {
 case 'S':
   mangled++;
   mangled = dlang_template_symbol_param (decl, mangled, info);
   break;
 case 'T':
   mangled++;
   mangled = dlang_type (decl, mangled, info);
   break;
 case 'V':
 {
   string name;
   char type;


   mangled++;
   type = *mangled;

   if (type == 'Q')
     {

       const char *backref;
       if (dlang_backref (mangled, &backref, info) == 
# 1774 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                                                     ((void *)0)
# 1774 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                                                         )
  return 
# 1775 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
        ((void *)0)
# 1775 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
            ;

       type = *backref;
     }



   string_init (&name);
   mangled = dlang_type (&name, mangled, info);
   string_need (&name, 1);
   *(name.p) = '\0';

   mangled = dlang_value (decl, mangled, name.b, type);
   string_delete (&name);
   break;
 }
 case 'X':
 {
   long len;
   const char *endptr;

   mangled++;
   endptr = dlang_number (mangled, &len);
   if (endptr == 
# 1798 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 1798 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || strlen (endptr) < (size_t) len)
     return 
# 1799 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
           ((void *)0)
# 1799 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
               ;

   string_appendn (decl, endptr, len);
   mangled = endptr + len;
   break;
 }
 default:
   return 
# 1806 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
         ((void *)0)
# 1806 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
             ;
 }
    }

  return mangled;
}




static const char *
dlang_parse_template (string *decl, const char *mangled,
        struct dlang_info *info, long len)
{
  const char *start = mangled;
  string args;
# 1835 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
  if (!dlang_symbol_name_p (mangled + 3, info) || mangled[3] == '0')
    return 
# 1836 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1836 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  mangled += 3;


  mangled = dlang_identifier (decl, mangled, info);


  string_init (&args);
  mangled = dlang_template_args (&args, mangled, info);

  string_append (decl, "!(");
  string_appendn (decl, args.b, string_length (&args));
  string_append (decl, ")");

  string_delete (&args);


  if (len != TEMPLATE_LENGTH_UNKNOWN && mangled && (mangled - start) != len)
    return 
# 1855 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1855 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  return mangled;
}


static void
dlang_demangle_init_info (const char *mangled, int last_backref,
     struct dlang_info *info)
{
  info->s = mangled;
  info->last_backref = last_backref;
}




char *
dlang_demangle (const char *mangled, int option __attribute__ ((__unused__)))
{
  string decl;
  char *demangled = 
# 1876 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                   ((void *)0)
# 1876 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                       ;

  if (mangled == 
# 1878 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                ((void *)0) 
# 1878 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                     || *mangled == '\0')
    return 
# 1879 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1879 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  if (strncmp (mangled, "_D", 2) != 0)
    return 
# 1882 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
          ((void *)0)
# 1882 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
              ;

  string_init (&decl);

  if (strcmp (mangled, "_Dmain") == 0)
    {
      string_append (&decl, "D main");
    }
  else
    {
      struct dlang_info info;

      dlang_demangle_init_info (mangled, strlen (mangled), &info);
      mangled = dlang_parse_mangle (&decl, mangled, &info);


      if (mangled == 
# 1898 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c" 3 4
                    ((void *)0) 
# 1898 "/home/giulianob/gcc_git_gnu/gcc/libiberty/d-demangle.c"
                         || *mangled != '\0')
 string_delete (&decl);
    }

  if (string_length (&decl) > 0)
    {
      string_need (&decl, 1);
      *(decl.p) = '\0';
      demangled = decl.b;
    }

  return demangled;
}
