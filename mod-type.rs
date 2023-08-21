pub type c_char = i8;
pub type c_long = i32;
pub type c_ulong = u32;

pub type __u_char = ::c_uchar;
pub type __u_short = ::c_ushort;
pub type __u_int = ::c_uint;
pub type __u_long = ::c_ulong;
pub type __int8_t = ::c_schar;
pub type __uint8_t = ::c_uchar;
pub type __int16_t = ::c_short;
pub type __uint16_t = ::c_ushort;
pub type __int32_t = ::c_int;
pub type __uint32_t = ::c_uint;
pub type __int64_t = ::c_longlong;
pub type __uint64_t = ::c_ulonglong;
pub type __int_least8_t = __int8_t;
pub type __uint_least8_t = __uint8_t;
pub type __int_least16_t = __int16_t;
pub type __uint_least16_t = __uint16_t;
pub type __int_least32_t = __int32_t;
pub type __uint_least32_t = __uint32_t;
pub type __int_least64_t = __int64_t;
pub type __uint_least64_t = __uint64_t;
pub type __quad_t = ::c_longlong;
pub type __u_quad_t = ::c_ulonglong;
pub type __intmax_t = ::c_longlong;
pub type __uintmax_t = ::c_ulonglong;
pub type __dev_t = ::c_uint;
pub type __uid_t = ::c_uint;
pub type __gid_t = ::c_uint;
pub type __ino_t = ::c_ulong;
pub type __ino64_t = __uint64_t;
pub type __mode_t = ::c_uint;
pub type __nlink_t = ::c_uint;
pub type __off_t = ::c_long;
pub type __off64_t = __int64_t;
pub type __pid_t = ::c_int;
pub type __fsid_t = __uint64_t;
pub type __clock_t = ::c_long;
pub type __rlim_t = ::c_ulong;
pub type __rlim64_t = __uint64_t;
pub type __id_t = ::c_uint;
pub type __time_t = ::c_long;
pub type __useconds_t = ::c_uint;
pub type __suseconds_t = ::c_long;
pub type __suseconds64_t = __int64_t;
pub type __daddr_t = ::c_int;
pub type __key_t = ::c_int;
pub type __clockid_t = ::c_int;
pub type __timer_t = ::c_int;
pub type __blksize_t = ::c_long;
pub type __blkcnt_t = ::c_long;
pub type __blkcnt64_t = __int64_t;
pub type __fsblkcnt_t = ::c_ulong;
pub type __fsblkcnt64_t = __uint64_t;
pub type __fsfilcnt_t = ::c_ulong;
pub type __fsfilcnt64_t = __uint64_t;
pub type __fsword_t = ::c_int;
pub type __ssize_t = ::c_int;
pub type __syscall_slong_t = ::c_long;
pub type __syscall_ulong_t = ::c_ulong;
pub type __loff_t = __off64_t;
pub type __caddr_t = *mut ::c_char;
pub type __intptr_t = ::c_int;
pub type __socklen_t = ::c_uint;
pub type __sig_atomic_t = ::c_int;
pub type __time64_t = __int64_t;
pub type ssize_t = __ssize_t;
pub type size_t = ::c_uint;
pub type gid_t = __gid_t;
pub type uid_t = __uid_t;
pub type off_t = __off_t;
pub type off64_t = __off64_t;
pub type useconds_t = __useconds_t;
pub type pid_t = __pid_t;
pub type socklen_t = __socklen_t;

pub type _bindgen_ty_1 = ::c_uint;
pub type _bindgen_ty_2 = ::c_uint;
pub type _bindgen_ty_3 = ::c_uint;

pub type wchar_t = ::c_int;
pub type _Float32 = f32;
pub type _Float64 = f64;
pub type _Float32x = f64;
pub type _Float64x = f64;

pub type __locale_t = *mut __locale_struct;
pub type locale_t = __locale_t;

pub type u_char = __u_char;
pub type u_short = __u_short;
pub type u_int = __u_int;
pub type u_long = __u_long;
pub type quad_t = __quad_t;
pub type u_quad_t = __u_quad_t;
pub type fsid_t = __fsid_t;
pub type loff_t = __loff_t;
pub type ino_t = __ino_t;
pub type ino64_t = __ino64_t;
pub type dev_t = __dev_t;
pub type mode_t = __mode_t;
pub type nlink_t = __nlink_t;
pub type id_t = __id_t;
pub type daddr_t = __daddr_t;
pub type caddr_t = __caddr_t;
pub type key_t = __key_t;
pub type clock_t = __clock_t;
pub type clockid_t = __clockid_t;
pub type time_t = __time_t;
pub type timer_t = __timer_t;
pub type suseconds_t = __suseconds_t;
pub type ulong = ::c_ulong;
pub type ushort = ::c_ushort;
pub type uint = ::c_uint;
pub type u_int8_t = __uint8_t;
pub type u_int16_t = __uint16_t;
pub type u_int32_t = __uint32_t;
pub type u_int64_t = __uint64_t;
pub type register_t = ::c_int;
pub type __sigset_t = ::c_ulong;
pub type sigset_t = __sigset_t;

pub type __fd_mask = ::c_long;
pub type fd_mask = __fd_mask;
pub type blksize_t = __blksize_t;
pub type blkcnt_t = __blkcnt_t;
pub type fsblkcnt_t = __fsblkcnt_t;
pub type fsfilcnt_t = __fsfilcnt_t;
pub type blkcnt64_t = __blkcnt64_t;
pub type fsblkcnt64_t = __fsblkcnt64_t;
pub type fsfilcnt64_t = __fsfilcnt64_t;
pub type __pthread_spinlock_t = ::c_int;

pub type __tss_t = ::c_int;
pub type __thrd_t = ::c_int;
pub type __pthread_t = ::c_int;
pub type pthread_t = __pthread_t;
pub type __pthread_process_shared = ::c_uint;
pub type __pthread_inheritsched = ::c_uint;
pub type __pthread_contentionscope = ::c_uint;
pub type __pthread_detachstate = ::c_uint;

pub type pthread_attr_t = __pthread_attr;
pub type __pthread_mutex_protocol = ::c_uint;
pub type __pthread_mutex_type = ::c_uint;
pub type __pthread_mutex_robustness = ::c_uint;
pub type pthread_mutexattr_t = __pthread_mutexattr;
pub type pthread_mutex_t = __pthread_mutex;
pub type pthread_condattr_t = __pthread_condattr;
pub type pthread_cond_t = __pthread_cond;
pub type pthread_spinlock_t = __pthread_spinlock_t;
pub type pthread_rwlockattr_t = __pthread_rwlockattr;
pub type pthread_rwlock_t = __pthread_rwlock;
pub type pthread_barrierattr_t = __pthread_barrierattr;
pub type pthread_barrier_t = __pthread_barrier;
pub type __pthread_key = ::c_int;
pub type pthread_key_t = __pthread_key;
pub type pthread_once_t = __pthread_once;

pub type __rlimit_resource = ::c_uint;
pub type rlim_t = __rlim_t;
pub type rlim64_t = __rlim64_t;

pub type __rusage_who = ::c_int;

pub type __priority_which = ::c_uint;
pub type sa_family_t = ::c_uchar;

pub type _bindgen_ty_4 = ::c_uint;

pub type _bindgen_ty_5 = ::c_uint;

pub type _bindgen_ty_6 = ::c_uint;

pub type _bindgen_ty_7 = ::c_uint;

pub type _bindgen_ty_8 = ::c_uint;

pub type _bindgen_ty_9 = ::c_uint;
pub type in_port_t = u16;

pub type _bindgen_ty_10 = ::c_uint;

pub type _bindgen_ty_11 = ::c_uint;

pub type __sigval_t = sigval;

pub type sigevent_t = sigevent;

pub type nfds_t = ::c_ulong;

pub type _bindgen_ty_12 = ::c_uint;

pub type tcflag_t = ::c_ulong;
pub type cc_t = ::c_uchar;
pub type speed_t = ::c_long;

pub type _bindgen_ty_14 = ::c_uint;

pub type _bindgen_ty_15 = ::c_int;

pub type _bindgen_ty_16 = ::c_uint;

pub type _bindgen_ty_17 = ::c_uint;

pub type _bindgen_ty_18 = ::c_uint;

pub type _bindgen_ty_19 = ::c_uint;

pub type _bindgen_ty_20 = ::c_uint;

pub type _bindgen_ty_21 = ::c_uint;

pub type _bindgen_ty_22 = ::c_uint;
pub type sigval_t = __sigval_t;

pub type _bindgen_ty_23 = ::c_uint;

pub type greg_t = ::c_int;
pub type gregset_t = [greg_t; 19usize];

pub type _bindgen_ty_24 = ::c_uint;

pub type _bindgen_ty_25 = ::c_uint;

pub type __ioctl_dir = ::c_uint;

pub type __ioctl_datum = ::c_uint;

pub type __error_t_codes = ::c_int;

pub type __cpu_mask = ::c_ulong;

pub type int_least8_t = __int_least8_t;
pub type int_least16_t = __int_least16_t;
pub type int_least32_t = __int_least32_t;
pub type int_least64_t = __int_least64_t;
pub type uint_least8_t = __uint_least8_t;
pub type uint_least16_t = __uint_least16_t;
pub type uint_least32_t = __uint_least32_t;
pub type uint_least64_t = __uint_least64_t;
pub type int_fast8_t = ::c_schar;
pub type int_fast16_t = ::c_int;
pub type int_fast32_t = ::c_int;
pub type int_fast64_t = ::c_longlong;
pub type uint_fast8_t = ::c_uchar;
pub type uint_fast16_t = ::c_uint;
pub type uint_fast32_t = ::c_uint;
pub type uint_fast64_t = ::c_ulonglong;
pub type intmax_t = __intmax_t;
pub type uintmax_t = __uintmax_t;
pub type tcp_seq = u32;

pub type _bindgen_ty_26 = ::c_uint;

pub type tcp_ca_state = ::c_uint;

pub type _bindgen_ty_27 = ::c_uint;

pub type idtype_t = ::c_uint;