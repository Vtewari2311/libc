#![allow(dead_code)]
// use core::assert_eq
pub type c_char = i8;
pub type c_long = i32;
pub type c_ulong = usize;

// structs

/*
pub struct pthread_attr_t {
    pta_magic: ::c_uint,
    pta_flags: ::c_int,
    pta_private: *mut ::c_void,
}


*/

pub struct iovec {
    pub iov_base: *mut ::c_void,
    pub iov_len: size_t,
}

extern "C" {
    pub fn futimens(__fd: ::c_int, __times: *const ::timespec)
        -> ::c_int;
}

extern "C" {
    pub fn __libc_current_sigrtmin() -> ::c_int;
}

extern "C" {
    pub fn __libc_current_sigrtmax() -> ::c_int;
}

extern "C" {
    pub fn ioctl(
        __fd: ::c_int,
        __request: ::c_ulong,
        ...
    ) -> ::c_int;
}

extern "C" {
    /*
    pub fn recvfrom(
        __fd: ::c_int,
        __buf: *mut ::c_void,
        __n: usize,
        __flags: ::c_int,
        __addr: *mut ::c_void,
        __addr_len: *mut socklen_t,
    ) -> ssize_t;
    */
    pub fn recvfrom(
        socket: ::c_int,
        buf: *mut ::c_void,
        len: ::size_t,
        flags: ::c_int,
        addr: *mut ::sockaddr,
        addrlen: *mut ::socklen_t,
    ) -> ::ssize_t;
}

extern "C" {
    pub fn shutdown(
        __fd: ::c_int,
        __how: ::c_long,
    ) -> ::c_int;
}

extern "C" {
    pub fn readv(
        __fd: ::c_int,
        __iovec: *const ::iovec,
        __count: ::c_int,
    ) -> ssize_t;
}

extern "C" {
    pub fn writev(
        __fd: ::c_int,
        __iovec: *const ::iovec,
        __count: ::c_int,
    ) -> ssize_t;
}

extern "C" {
    pub fn lseek64(
        __fd: ::c_int,
        __offset: __off64_t,
        __whence: ::size_t,
    ) -> __off64_t;
}

extern "C" {
    pub fn lseek(
        __fd: ::c_int,
        __offset: __off_t,
        __whence: ::c_int,
    ) -> __off_t;
}

extern "C" {
    pub fn pthread_condattr_setclock(
        __attr: *mut pthread_condattr_t,
        __clock_id: __clockid_t,
    ) -> ::c_int;
}

extern "C" {
    pub fn accept4(
        fd: ::c_int,
        addr: *mut ::sockaddr,
        len: *mut ::socklen_t,
        flg: ::c_int,
    ) -> ::c_int;
}

/*
extern "C" {
    pub fn accept(
        __fd: ::c_int,
        //__addr: __SOCKADDR_ARG,
        __addr_len: *mut socklen_t,
    ) -> ::c_int;
}
*/

extern "C" {
    pub fn recvmsg(
        __fd: ::c_int,
        __message: *mut msghdr,
        __flags: ::c_int,
    ) -> ssize_t;
}

extern "C" {
    /*
    pub fn getpwuid_r(
        __uid: __uid_t,
        __resultbuf: *mut passwd,
        __buffer: *mut ::c_char,
        __buflen: usize,
        __result: *mut *mut passwd,
    ) -> ::c_int;
    */
    pub fn getpwuid_r(
        uid: ::uid_t,
        pwd: *mut passwd,
        buf: *mut ::c_char,
        buflen: ::size_t,
        result: *mut *mut passwd,
    ) -> ::c_int;
}

extern "C" {
    pub fn setgroups(ngroups: ::size_t, ptr: *const ::gid_t) -> ::c_int;
}

extern "C" {
    /*
    pub fn pthread_create(
        __threadp: *mut pthread_t,
        __attr: *const pthread_attr_t,
        /*
        __start_routine: ::std::option::Option<
            unsafe extern "C" fn(arg1: *mut ::c_void) -> *mut ::c_void,
        >,
        */
        __arg: *mut ::c_void,
    ) -> ::c_int;
    */
    pub fn pthread_create(
        native: *mut ::pthread_t,
        attr: *const ::pthread_attr_t,
        f: extern "C" fn(*mut ::c_void) -> *mut ::c_void,
        value: *mut ::c_void,
    ) -> ::c_int;
}

/*
extern "C" {
    pub fn fcntl(
        __fd: ::c_int,
        __cmd: ::size_t,
        ...
    ) -> ::c_int;
}
*/

extern "C" {
    pub fn clock_getres(__clock_id: clockid_t, __res: *mut ::timespec) -> ::c_int;
}
extern "C" {
    pub fn clock_gettime(__clock_id: clockid_t, __tp: *mut ::timespec) -> ::c_int;
}
extern "C" {
    pub fn clock_settime(__clock_id: clockid_t, __tp: *const ::timespec) -> ::c_int;
}

extern "C" {
    pub fn fstat(__fd: ::c_int, __buf: *mut stat) -> ::c_int;
}

extern "C" {
    pub fn fstat64(__fd: ::c_int, __buf: *mut stat64) -> ::c_int;
}

extern "C" {
    pub fn ftruncate(__fd: ::c_int, __length: __off_t) -> ::c_int;
}

extern "C" {
    pub fn ftruncate64(__fd: ::c_int, __length: __off64_t) -> ::c_int;
}

extern "C" {
    pub fn truncate64(
        __file: *const ::c_char,
        __length: __off64_t,
    ) -> ::c_int;
}

extern "C" {
    pub fn lstat(__file: *const ::c_char, __buf: *mut stat) -> ::c_int;
}

extern "C" {
    pub fn lstat64(
        __file: *const ::c_char,
        __buf: *mut stat64,
    ) -> ::c_int;
}

extern "C" {
    pub fn open(
        __file: *const ::c_char,
        __oflag: ::c_int,
        ...
    ) -> ::c_int;
}

extern "C" {
    pub fn open64(
        __file: *const ::c_char,
        __oflag: ::c_int,
        ...
    ) -> ::c_int;
}

extern "C" {
    pub fn stat(__file: *const ::c_char, __buf: *mut stat) -> ::c_int;
}

extern "C" {
    pub fn stat64(
        __file: *const ::c_char,
        __buf: *mut stat64,
    ) -> ::c_int;
}


extern "C" {
    pub fn readdir(dirp: *mut ::DIR) -> *mut ::dirent;
}
extern "C" {
    pub fn readdir64(dirp: *mut DIR) -> *mut dirent64;
}
extern "C" {
    pub fn readdir_r(
        dirp: *mut ::DIR,
        entry: *mut dirent,
        result: *mut *mut ::dirent,
    ) -> ::c_int;
}

extern "C" {
    pub fn readdir64_r(
        dirp: *mut DIR,
        entry: *mut dirent64,
        result: *mut *mut dirent64,
    ) -> ::c_int;
}

safe_f! {
    pub fn SIGRTMAX() -> ::c_int {
        unsafe { __libc_current_sigrtmax() }
    }

    pub fn SIGRTMIN() -> ::c_int {
        unsafe { __libc_current_sigrtmin() }
    }

    pub {const} fn WIFSTOPPED(status: ::c_int) -> bool {
        (status & 0xff) == 0x7f
    }

    pub {const} fn WSTOPSIG(status: ::c_int) -> ::c_int {
        (status >> 8) & 0xff
    }

    pub {const} fn WIFCONTINUED(status: ::c_int) -> bool {
        status == 0xffff
    }

    pub {const} fn WIFSIGNALED(status: ::c_int) -> bool {
        ((status & 0x7f) + 1) as i8 >= 2
    }

    pub {const} fn WTERMSIG(status: ::c_int) -> ::c_int {
        status & 0x7f
    }

    pub {const} fn WIFEXITED(status: ::c_int) -> bool {
        (status & 0x7f) == 0
    }

    pub {const} fn WEXITSTATUS(status: ::c_int) -> ::c_int {
        (status >> 8) & 0xff
    }

    pub {const} fn WCOREDUMP(status: ::c_int) -> bool {
        (status & 0x80) != 0
    }

    pub {const} fn W_EXITCODE(ret: ::c_int, sig: ::c_int) -> ::c_int {
        (ret << 8) | sig
    }

    pub {const} fn W_STOPCODE(sig: ::c_int) -> ::c_int {
        (sig << 8) | 0x7f
    }

    pub {const} fn QCMD(cmd: ::c_int, type_: ::c_int) -> ::c_int {
        (cmd << 8) | (type_ & 0x00ff)
    }

    pub {const} fn IPOPT_COPIED(o: u8) -> u8 {
        o & IPOPT_COPY
    }

    pub {const} fn IPOPT_CLASS(o: u8) -> u8 {
        o & IPOPT_CLASS_MASK
    }

    pub {const} fn IPOPT_NUMBER(o: u8) -> u8 {
        o & IPOPT_NUMBER_MASK
    }

    pub {const} fn IPTOS_ECN(x: u8) -> u8 {
        x & ::IPTOS_ECN_MASK
    }

    #[allow(ellipsis_inclusive_range_patterns)]
    pub {const} fn KERNEL_VERSION(a: usize, b: usize, c: usize) -> usize {
        ((a << 16) + (b << 8)) + match c {
            0 ... 255 => c,
            _ => 255,
        }
    }
}

cfg_if! {
    if #[cfg(libc_align)] {
        mod align;
        pub use self::align::*;
    } else {
        mod no_align;
        pub use self::no_align::*;
    }
}

pub union __CONST_SOCKADDR_ARG {
    pub __sockaddr__: *const sockaddr,
    pub __sockaddr_at__: *const sockaddr_at,
    pub __sockaddr_ax25__: *const sockaddr_ax25,
    pub __sockaddr_dl__: *const sockaddr_dl,
    pub __sockaddr_eon__: *const sockaddr_eon,
    pub __sockaddr_in__: *const sockaddr_in,
    pub __sockaddr_in6__: *const sockaddr_in6,
    pub __sockaddr_inarp__: *const sockaddr_inarp,
    pub __sockaddr_ipx__: *const sockaddr_ipx,
    pub __sockaddr_iso__: *const sockaddr_iso,
    pub __sockaddr_ns__: *const sockaddr_ns,
    pub __sockaddr_un__: *const sockaddr_un,
    pub __sockaddr_x25__: *const sockaddr_x25,
}



extern "C" {
    pub fn bind(
        __fd: ::c_int,
        // __addr: *const ::c_void,
        // __addr: __CONST_SOCKADDR_ARG,
        __addr: *const sockaddr,
        __len: socklen_t,
    ) -> ::c_int;
}

s_no_extra_traits! {
    pub union __SOCKADDR_ARG {
        pub __sockaddr__: *mut sockaddr,
        pub __sockaddr_at__: *mut sockaddr_at,
        pub __sockaddr_ax25__: *mut sockaddr_ax25,
        pub __sockaddr_dl__: *mut sockaddr_dl,
        pub __sockaddr_eon__: *mut sockaddr_eon,
        pub __sockaddr_in__: *mut sockaddr_in,
        pub __sockaddr_in6__: *mut sockaddr_in6,
        pub __sockaddr_inarp__: *mut sockaddr_inarp,
        pub __sockaddr_ipx__: *mut sockaddr_ipx,
        pub __sockaddr_iso__: *mut sockaddr_iso,
        pub __sockaddr_ns__: *mut sockaddr_ns,
        pub __sockaddr_un__: *mut sockaddr_un,
        pub __sockaddr_x25__: *mut sockaddr_x25,
    }
}

    

/*
s_no_extra_traits! {
    pub struct in6_addr {
        pub __in6_u: in6_addr__bindgen_ty_1,
    }
}
*/

/*
pub union in6_addr__bindgen_ty_1 {
    pub __u6_addr8: [u8; 16usize],
    pub __u6_addr16: [u16; 8usize],
    pub __u6_addr32: [usize; 4usize],
}
*/


pub struct passwd {
    pub pw_name: *mut ::c_char,
    pub pw_passwd: *mut ::c_char,
    pub pw_uid: __uid_t,
    pub pw_gid: __gid_t,
    pub pw_gecos: *mut ::c_char,
    pub pw_dir: *mut ::c_char,
    pub pw_shell: *mut ::c_char,
}

s! {
    pub struct sockaddr {
        pub sa_len: ::c_uchar,
        pub sa_family: sa_family_t,
        pub sa_data: [::c_char; 14usize],
    }
}

s! {
    pub struct ip_mreq {
        pub imr_multiaddr: in_addr,
        pub imr_interface: in_addr,
    }
}

s! {
    pub struct sockaddr_in6 {
        pub sin6_len: ::c_uchar,
        pub sin6_family: sa_family_t,
        pub sin6_port: in_port_t,
        pub sin6_flowinfo: u32,
        pub sin6_addr: ::in6_addr,
        pub sin6_scope_id: u32,
    }
}

s! {
    pub struct sockaddr_storage {
        pub ss_len: ::c_uchar,
        pub ss_family: sa_family_t,
        pub __ss_padding: [::c_char; 122usize],
        pub __ss_align: __uint32_t,
    }
}

s! {
    pub struct msghdr {
        pub msg_name: *mut ::c_void,
        pub msg_namelen: socklen_t,
        pub msg_iov: *mut iovec,
        pub msg_iovlen: ::c_int,
        pub msg_control: *mut ::c_void,
        pub msg_controllen: socklen_t,
        pub msg_flags: ::c_int,
    }
}

s! {
    pub struct sockaddr_in {
        pub sin_len: ::c_uchar,
        pub sin_family: sa_family_t,
        pub sin_port: in_port_t,
        pub sin_addr: ::in_addr,
        pub sin_zero: [::c_uchar; 8usize],
    }
}

s! {
    pub struct sockaddr_un {
        pub sun_len: ::c_uchar,
        pub sun_family: sa_family_t,
        pub sun_path: [::c_char; 108usize],
    }
}

s! {
    pub struct dirent {
        pub d_ino: __ino_t,
        pub d_reclen: ::c_ushort,
        pub d_type: ::c_uchar,
        pub d_namlen: ::c_uchar,
        pub d_name: [::c_char; 1usize],
    }
}

pub struct addrinfo {
    pub ai_flags: ::c_int,
    pub ai_family: ::c_int,
    pub ai_socktype: ::c_int,
    pub ai_protocol: ::c_int,
    pub ai_addrlen: socklen_t,
    pub ai_addr: *mut sockaddr,
    pub ai_canonname: *mut ::c_char,
    pub ai_next: *mut addrinfo,
}
pub struct tm {
    pub tm_sec: ::c_int,
    pub tm_min: ::c_int,
    pub tm_hour: ::c_int,
    pub tm_mday: ::c_int,
    pub tm_mon: ::c_int,
    pub tm_year: ::c_int,
    pub tm_wday: ::c_int,
    pub tm_yday: ::c_int,
    pub tm_isdst: ::c_int,
    pub tm_gmtoff: ::c_long,
    pub tm_zone: *const ::c_char,
}

s! {
    pub struct fd_set {
        pub fds_bits: [__fd_mask; 8usize],
    }
}
pub struct lconv {
    pub decimal_point: *mut ::c_char,
    pub thousands_sep: *mut ::c_char,
    pub grouping: *mut ::c_char,
    pub int_curr_symbol: *mut ::c_char,
    pub currency_symbol: *mut ::c_char,
    pub mon_decimal_point: *mut ::c_char,
    pub mon_thousands_sep: *mut ::c_char,
    pub mon_grouping: *mut ::c_char,
    pub positive_sign: *mut ::c_char,
    pub negative_sign: *mut ::c_char,
    pub int_frac_digits: ::c_char,
    pub frac_digits: ::c_char,
    pub p_cs_precedes: ::c_char,
    pub p_sep_by_space: ::c_char,
    pub n_cs_precedes: ::c_char,
    pub n_sep_by_space: ::c_char,
    pub p_sign_posn: ::c_char,
    pub n_sign_posn: ::c_char,
    pub int_p_cs_precedes: ::c_char,
    pub int_p_sep_by_space: ::c_char,
    pub int_n_cs_precedes: ::c_char,
    pub int_n_sep_by_space: ::c_char,
    pub int_p_sign_posn: ::c_char,
    pub int_n_sign_posn: ::c_char,
}

s_no_extra_traits! {
    pub union sem_t {
        pub __size: [::c_char; 20usize],
        pub __align: ::c_long,
    }
}

s! {
    pub struct statvfs {
        pub __f_type: ::c_uint,
        pub f_bsize: ::c_ulong,
        pub f_blocks: __fsblkcnt_t,
        pub f_bfree: __fsblkcnt_t,
        pub f_bavail: __fsblkcnt_t,
        pub f_files: __fsfilcnt_t,
        pub f_ffree: __fsfilcnt_t,
        pub f_fsid: __fsid_t,
        pub f_namemax: ::c_ulong,
        pub f_favail: __fsfilcnt_t,
        pub f_frsize: ::c_ulong,
        pub f_flag: ::c_ulong,
        pub f_spare: [::c_uint; 3usize],
    }
}

s! {
    pub struct termios {
        pub c_iflag: tcflag_t,
        pub c_oflag: tcflag_t,
        pub c_cflag: tcflag_t,
        pub c_lflag: tcflag_t,
        pub c_cc: [cc_t; 20usize],
        pub __ispeed: speed_t,
        pub __ospeed: speed_t,
    }
}
pub struct Dl_info {
    pub dli_fname: *const ::c_char,
    pub dli_fbase: *mut ::c_void,
    pub dli_sname: *const ::c_char,
    pub dli_saddr: *mut ::c_void,
}

s! {
    pub struct in_addr {
        pub s_addr: in_addr_t,
    }
}


/*
pub struct sockaddr {
    pub sa_len: ::c_uchar,
    pub sa_family: sa_family_t,
    pub sa_data: [::c_char; 14usize],
}
*/
/*
pub union in6_addr__bindgen_ty_1 {
    pub __u6_addr8: [u8; 16usize],
    pub __u6_addr16: [u16; 8usize],
    pub __u6_addr32: [usize; 4usize],
}
*/

s! {
    pub struct sigaction {
        pub __sigaction_handler: sigaction__bindgen_ty_1,
        pub sa_mask: __sigset_t,
        pub sa_flags: ::c_int,
    }
}
pub struct __locale_struct {
    pub __locales: [*mut __locale_data; 13usize],
    pub __ctype_b: *const ::c_ushort,
    pub __ctype_tolower: *const ::c_int,
    pub __ctype_toupper: *const ::c_int,
    pub __names: [*const ::c_char; 13usize],
}

s! {
    pub struct __pthread {
        pub _address: u8,
    }
}

s! {
    pub struct sockaddr_at {
        pub _address: u8,
    }
    
    
    pub struct sockaddr_ax25 {
        pub _address: u8,
    }
    
    
    pub struct sockaddr_x25 {
        pub _address: u8,
    }
    
    
    pub struct sockaddr_dl {
        pub _address: u8,
    }
    pub struct sockaddr_eon {
        pub _address: u8,
    }
    pub struct sockaddr_inarp {
        pub _address: u8,
    }
    
    pub struct sockaddr_ipx {
        pub _address: u8,
    }
    pub struct sockaddr_iso {
        pub _address: u8,
    }
    
    pub struct sockaddr_ns {
        pub _address: u8,
    }
}

extern "C" {
    pub fn __pthread_equal(__t1: __pthread_t, __t2: __pthread_t) -> ::c_int;
}
pub struct __pthread_attr {
    pub __schedparam: __sched_param,
    pub __stackaddr: *mut ::c_void,
    pub __stacksize: size_t,
    pub __guardsize: size_t,
    pub __detachstate: __pthread_detachstate,
    pub __inheritsched: __pthread_inheritsched,
    pub __contentionscope: __pthread_contentionscope,
    pub __schedpolicy: ::c_int,
}
s! {
    pub struct __pthread_mutexattr {
        pub __prioceiling: ::c_int,
        pub __protocol: __pthread_mutex_protocol,
        pub __pshared: __pthread_process_shared,
        pub __mutex_type: __pthread_mutex_type,
    }
}
s! {
    pub struct __pthread_mutex {
        pub __lock: ::c_uint,
        pub __owner_id: ::c_uint,
        pub __cnt: ::c_uint,
        pub __shpid: ::c_int,
        pub __type: ::c_int,
        pub __flags: ::c_int,
        pub __reserved1: ::c_uint,
        pub __reserved2: ::c_uint,
        pub size: ::c_uint,
    }
}
s! {
    pub struct __pthread_condattr {
        pub __pshared: __pthread_process_shared,
        pub __clock: __clockid_t,
    }
}
pub struct __pthread_cond {
    pub __lock: __pthread_spinlock_t,
    pub __queue: *mut __pthread,
    pub __attr: *mut __pthread_condattr,
    pub __wrefs: ::c_uint,
    pub __data: *mut ::c_void,
}

s! {
    pub struct __pthread_rwlockattr {
        pub __pshared: __pthread_process_shared,
    }
}
pub struct __pthread_rwlock {
    pub __held: __pthread_spinlock_t,
    pub __lock: __pthread_spinlock_t,
    pub __readers: ::c_int,
    pub __readerqueue: *mut __pthread,
    pub __writerqueue: *mut __pthread,
    pub __attr: *mut __pthread_rwlockattr,
    pub __data: *mut ::c_void,
    pub size: ::c_uint
}

s! {
    pub struct __pthread_barrierattr {
        pub __pshared: __pthread_process_shared,
    }
}
pub struct __pthread_barrier {
    pub __lock: __pthread_spinlock_t,
    pub __queue: *mut __pthread,
    pub __pending: ::c_uint,
    pub __count: ::c_uint,
    pub __attr: *mut __pthread_barrierattr,
    pub __data: *mut ::c_void,
}

s! {
    pub struct __pthread_once {
        pub __run: ::c_int,
        pub __lock: __pthread_spinlock_t,
    }
}

s! {
    pub struct _IO_FILE {
        _unused: [u8; 0],
    }
}

s! {
    pub struct __dirstream {
        _unused: [u8; 0],
    }
}
pub union sigval {
    pub sival_int: ::c_int,
    pub sival_ptr: *mut ::c_void,
}
s_no_extra_traits! {
    pub union sigaction__bindgen_ty_1 {
        pub sa_handler: ::sighandler_t,
        /*
        pub sa_sigaction: ::std::option::Option<
            unsafe extern "C" fn(
                arg1: ::c_int,
                arg2: *mut siginfo_t,
                arg3: *mut ::c_void,
            ),
        >,
        */
        pub sa_sigaction: ::sighandler_t,
    }
}

s! {
    pub struct __sched_param {
        pub __sched_priority: ::c_int,
    }
}
pub struct sigevent {
    pub sigev_value: __sigval_t,
    pub sigev_signo: ::c_int,
    pub sigev_notify: ::c_int,
    //pub sigev_notify_function: ::std::option::Option<unsafe extern "C" fn(arg1: __sigval_t)>,
    pub sigev_notify_attributes: *mut pthread_attr_t,
}

s! {
    pub struct stat {
        pub st_fstype: ::c_int,
        pub st_fsid: __fsid_t,
        pub st_ino: __ino_t,
        pub st_gen: ::c_uint,
        pub st_rdev: __dev_t,
        pub st_mode: __mode_t,
        pub st_nlink: __nlink_t,
        pub st_uid: __uid_t,
        pub st_gid: __gid_t,
        pub st_size: __off_t,
        pub st_atim: ::timespec,
        pub st_mtim: ::timespec,
        pub st_ctim: ::timespec,
        pub st_blksize: __blksize_t,
        pub st_blocks: __blkcnt_t,
        pub st_author: __uid_t,
        pub st_flags: ::c_uint,
        pub st_spare: [::c_int; 11usize],
    }
}

pub struct siginfo_t {
    pub si_signo: ::c_int,
    pub si_errno: ::c_int,
    pub si_code: ::c_int,
    pub si_pid: __pid_t,
    pub si_uid: __uid_t,
    pub si_addr: *mut ::c_void,
    pub si_status: ::c_int,
    pub si_band: ::c_long,
    pub si_value: __sigval_t,
}

s! {
    pub struct timespec {
        pub tv_sec: __time_t,
        pub tv_nsec: __syscall_slong_t,
    }
}

s! {
    pub struct __locale_data {
        pub _address: u8,
    }
}

s! {
    pub struct dirent64 {
        pub d_ino: __ino64_t,
        pub d_reclen: ::c_ushort,
        pub d_type: ::c_uchar,
        pub d_namlen: ::c_uchar,
        pub d_name: [::c_char; 1usize],
    }
}

s! {
    pub struct stat64 {
        pub st_fstype: ::c_int,
        pub st_fsid: __fsid_t,
        pub st_ino: __ino64_t,
        pub st_gen: ::c_uint,
        pub st_rdev: __dev_t,
        pub st_mode: __mode_t,
        pub st_nlink: __nlink_t,
        pub st_uid: __uid_t,
        pub st_gid: __gid_t,
        pub st_size: __off64_t,
        pub st_atim: timespec,
        pub st_mtim: timespec,
        pub st_ctim: timespec,
        pub st_blksize: __blksize_t,
        pub st_blocks: __blkcnt64_t,
        pub st_author: __uid_t,
        pub st_flags: ::c_uint,
        pub st_spare: [::c_int; 8usize],
    }
}

/*
pub type __sighandler_t = ::std::option::Option<unsafe extern "C" fn(arg1: ::c_int)>;
extern "C" {
    pub fn __sysv_signal(__sig: ::c_int, __handler: __sighandler_t)
        -> __sighandler_t;
}
*/

// const
pub const IPOPT_COPY: u8 = 0x80;
pub const IPOPT_NUMBER_MASK: u8 = 0x1f;
pub const IPOPT_CLASS_MASK: u8 = 0x60;
pub const IPTOS_ECN_MASK: u8 = 0x03;
pub const MSG_CMSG_CLOEXEC: ::c_int = 0x40000000;
pub const _UNISTD_H: usize = 1;
pub const _FEATURES_H: usize = 1;
pub const _ISOC95_SOURCE: usize = 1;
pub const _ISOC99_SOURCE: usize = 1;
pub const _ISOC11_SOURCE: usize = 1;
pub const _ISOC2X_SOURCE: usize = 1;
pub const _POSIX_SOURCE: usize = 1;
pub const _POSIX_C_SOURCE: usize = 200809;
pub const _XOPEN_SOURCE: usize = 700;
pub const _XOPEN_SOURCE_EXTENDED: usize = 1;
pub const _LARGEFILE64_SOURCE: usize = 1;
pub const _DEFAULT_SOURCE: usize = 1;
pub const _ATFILE_SOURCE: usize = 1;
pub const _DYNAMIC_STACK_SIZE_SOURCE: usize = 1;
pub const __GLIBC_USE_ISOC2X: usize = 1;
pub const __USE_ISOC11: usize = 1;
pub const __USE_ISOC99: usize = 1;
pub const __USE_ISOC95: usize = 1;
pub const __USE_POSIX: usize = 1;
pub const __USE_POSIX2: usize = 1;
pub const __USE_POSIX199309: usize = 1;
pub const __USE_POSIX199506: usize = 1;
pub const __USE_XOPEN2K: usize = 1;
pub const __USE_XOPEN2K8: usize = 1;
pub const __USE_XOPEN: usize = 1;
pub const __USE_XOPEN_EXTENDED: usize = 1;
pub const __USE_UNIX98: usize = 1;
pub const _LARGEFILE_SOURCE: usize = 1;
pub const __USE_XOPEN2K8XSI: usize = 1;
pub const __USE_XOPEN2KXSI: usize = 1;
pub const __USE_LARGEFILE: usize = 1;
pub const __USE_LARGEFILE64: usize = 1;
pub const __USE_MISC: usize = 1;
pub const __USE_ATFILE: usize = 1;
pub const __USE_DYNAMIC_STACK_SIZE: usize = 1;
pub const __USE_GNU: usize = 1;
pub const __USE_FORTIFY_LEVEL: usize = 0;
pub const __GLIBC_USE_DEPRECATED_GETS: usize = 0;
pub const __GLIBC_USE_DEPRECATED_SCANF: usize = 0;
pub const _STDC_PREDEF_H: usize = 1;
pub const __STDC_IEC_559__: usize = 1;
pub const __STDC_IEC_60559_BFP__: usize = 201404;
pub const __STDC_IEC_559_COMPLEX__: usize = 1;
pub const __STDC_IEC_60559_COMPLEX__: usize = 201404;
pub const __STDC_ISO_10646__: usize = 201706;
pub const __GNU_LIBRARY__: usize = 6;
pub const __GLIBC__: usize = 2;
pub const __GLIBC_MINOR__: usize = 37;
pub const _SYS_CDEFS_H: usize = 1;
pub const __glibc_c99_flexarr_available: usize = 1;
pub const __WORDSIZE: usize = 32;
pub const __WORDSIZE32_SIZE_ULONG: usize = 0;
pub const __WORDSIZE32_PTRDIFF_LONG: usize = 0;
pub const __WORDSIZE_TIME64_COMPAT32: usize = 0;
pub const __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI: usize = 0;
pub const __HAVE_GENERIC_SELECTION: usize = 1;
pub const _POSIX_VERSION: usize = 200809;
pub const __POSIX2_THIS_VERSION: usize = 200809;
pub const _POSIX2_VERSION: usize = 200809;
pub const _POSIX2_C_VERSION: usize = 200809;
pub const _POSIX2_C_BIND: usize = 200809;
pub const _POSIX2_C_DEV: usize = 200809;
pub const _POSIX2_SW_DEV: usize = 200809;
pub const _POSIX2_LOCALEDEF: usize = 200809;
pub const _XOPEN_VERSION: usize = 700;
pub const _XOPEN_XCU_VERSION: usize = 4;
pub const _XOPEN_XPG2: usize = 1;
pub const _XOPEN_XPG3: usize = 1;
pub const _XOPEN_XPG4: usize = 1;
pub const _XOPEN_UNIX: usize = 1;
pub const _XOPEN_ENH_I18N: usize = 1;
pub const _XOPEN_LEGACY: usize = 1;
pub const _BITS_POSIX_OPT_H: usize = 1;
pub const _POSIX_JOB_CONTROL: usize = 1;
pub const _POSIX_SAVED_IDS: usize = 1;
pub const _POSIX_FSYNC: usize = 200809;
pub const _POSIX_MAPPED_FILES: usize = 200809;
pub const _POSIX_MEMLOCK: usize = 200809;
pub const _POSIX_MEMLOCK_RANGE: usize = 200809;
pub const _POSIX_MEMORY_PROTECTION: usize = 200809;
pub const _POSIX_VDISABLE: u8 = 0u8;
pub const _POSIX_CHOWN_RESTRICTED: usize = 0;
pub const _POSIX_NO_TRUNC: usize = 0;
pub const _XOPEN_SHM: usize = 1;
pub const _POSIX_THREADS: usize = 200809;
pub const _POSIX_REENTRANT_FUNCTIONS: usize = 1;
pub const _POSIX_THREAD_SAFE_FUNCTIONS: usize = 200809;
pub const _POSIX_THREAD_PRIORITY_SCHEDULING: i32 = -1;
pub const _POSIX_THREAD_ATTR_STACKSIZE: usize = 200809;
pub const _POSIX_THREAD_ATTR_STACKADDR: usize = 200809;
pub const _POSIX_THREAD_PRIO_INHERIT: i32 = -1;
pub const _POSIX_THREAD_PRIO_PROTECT: i32 = -1;
pub const _POSIX_THREAD_ROBUST_PRIO_INHERIT: i32 = -1;
pub const _POSIX_THREAD_ROBUST_PRIO_PROTECT: i32 = -1;
pub const _POSIX_SEMAPHORES: usize = 200809;
pub const _POSIX_REALTIME_SIGNALS: i32 = -1;
pub const _POSIX_ASYNCHRONOUS_IO: usize = 0;
pub const _LFS_ASYNCHRONOUS_IO: usize = 0;
pub const _LFS64_ASYNCHRONOUS_IO: usize = 0;
pub const _LFS_LARGEFILE: usize = 1;
pub const _LFS64_LARGEFILE: usize = 1;
pub const _LFS64_STDIO: usize = 1;
pub const _POSIX_SHARED_MEMORY_OBJECTS: usize = 200809;
pub const _POSIX_CPUTIME: usize = 0;
pub const _POSIX_THREAD_CPUTIME: usize = 0;
pub const _POSIX_REGEXP: usize = 1;
pub const _POSIX_READER_WRITER_LOCKS: usize = 200809;
pub const _POSIX_SHELL: usize = 1;
pub const _POSIX_TIMEOUTS: usize = 200809;
pub const _POSIX_SPIN_LOCKS: usize = 200809;
pub const _POSIX_SPAWN: usize = 200809;
pub const _POSIX_TIMERS: usize = 0;
pub const _POSIX_BARRIERS: usize = 200809;
pub const _POSIX_MESSAGE_PASSING: usize = 0;
pub const _POSIX_THREAD_PROCESS_SHARED: i32 = -1;
pub const _POSIX_MONOTONIC_CLOCK: usize = 200809;
pub const _POSIX_CLOCK_SELECTION: i32 = -1;
pub const _POSIX_ADVISORY_INFO: usize = 0;
pub const _POSIX_IPV6: usize = 200809;
pub const _POSIX_RAW_SOCKETS: usize = 200809;
pub const _POSIX2_CHAR_TERM: usize = 200809;
pub const _POSIX_SPORADIC_SERVER: i32 = -1;
pub const _POSIX_THREAD_SPORADIC_SERVER: i32 = -1;
pub const _POSIX_TRACE: i32 = -1;
pub const _POSIX_TRACE_EVENT_FILTER: i32 = -1;
pub const _POSIX_TRACE_INHERIT: i32 = -1;
pub const _POSIX_TRACE_LOG: i32 = -1;
pub const _POSIX_TYPED_MEMORY_OBJECTS: i32 = -1;
pub const _POSIX_V7_ILP32_OFF32: usize = 1;
pub const _POSIX_V7_ILP32_OFFBIG: usize = 1;
pub const _POSIX_V6_ILP32_OFF32: usize = 1;
pub const _POSIX_V6_ILP32_OFFBIG: usize = 1;
pub const _XBS5_ILP32_OFF32: usize = 1;
pub const _XBS5_ILP32_OFFBIG: usize = 1;
pub const _POSIX_V7_LP64_OFF64: i32 = -1;
pub const _POSIX_V7_LPBIG_OFFBIG: i32 = -1;
pub const _POSIX_V6_LP64_OFF64: i32 = -1;
pub const _POSIX_V6_LPBIG_OFFBIG: i32 = -1;
pub const _XBS5_LP64_OFF64: i32 = -1;
pub const _XBS5_LPBIG_OFFBIG: i32 = -1;
pub const __ILP32_OFFBIG_CFLAGS: &'static [u8; 43usize] =
    b"-D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64\0";
pub const STDIN_FILENO: c_long = 0;
pub const STDOUT_FILENO: c_long = 1;
pub const STDERR_FILENO: c_long = 2;
pub const _BITS_TYPES_H: usize = 1;
pub const __TIMESIZE: usize = 32;
pub const _BITS_TYPESIZES_H: usize = 1;
pub const __FD_SETSIZE: usize = 256;
pub const __STATFS_MATCHES_STATFS64: usize = 0;
pub const _BITS_TIME64_H: usize = 1;
pub const R_OK: usize = 4;
pub const W_OK: usize = 2;
pub const X_OK: usize = 1;
pub const F_OK: usize = 0;
pub const SEEK_SET: usize = 0;
pub const SEEK_CUR: usize = 1;
pub const SEEK_END: usize = 2;
pub const SEEK_DATA: usize = 3;
pub const SEEK_HOLE: usize = 4;
pub const L_SET: usize = 0;
pub const L_INCR: usize = 1;
pub const L_XTND: usize = 2;
pub const _GETOPT_POSIX_H: usize = 1;
pub const _GETOPT_CORE_H: usize = 1;
pub const F_ULOCK: usize = 0;
pub const F_LOCK: usize = 1;
pub const F_TLOCK: usize = 2;
pub const F_TEST: usize = 3;
pub const CLOSE_RANGE_CLOEXEC: usize = 4;
pub const __GLIBC_USE_LIB_EXT2: usize = 1;
pub const __GLIBC_USE_IEC_60559_BFP_EXT: usize = 1;
pub const __GLIBC_USE_IEC_60559_BFP_EXT_C2X: usize = 1;
pub const __GLIBC_USE_IEC_60559_EXT: usize = 1;
pub const __GLIBC_USE_IEC_60559_FUNCS_EXT: usize = 1;
pub const __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X: usize = 1;
pub const __GLIBC_USE_IEC_60559_TYPES_EXT: usize = 1;
pub const _STDLIB_H: usize = 1;
pub const WNOHANG: c_long = 1;
pub const WUNTRACED: usize = 2;
pub const WSTOPPED: usize = 2;
pub const WCONTINUED: usize = 4;
pub const WNOWAIT: usize = 8;
pub const WEXITED: usize = 16;
pub const __W_CONTINUED: usize = 65535;
pub const __WCOREFLAG: usize = 128;
pub const __HAVE_FLOAT128: usize = 0;
pub const __HAVE_DISTINCT_FLOAT128: usize = 0;
pub const __HAVE_FLOAT64X: usize = 1;
pub const __HAVE_FLOAT64X_LONG_DOUBLE: usize = 1;
pub const __HAVE_FLOAT16: usize = 0;
pub const __HAVE_FLOAT32: usize = 1;
pub const __HAVE_FLOAT64: usize = 1;
pub const __HAVE_FLOAT32X: usize = 1;
pub const __HAVE_FLOAT128X: usize = 0;
pub const __HAVE_DISTINCT_FLOAT16: usize = 0;
pub const __HAVE_DISTINCT_FLOAT32: usize = 0;
pub const __HAVE_DISTINCT_FLOAT64: usize = 0;
pub const __HAVE_DISTINCT_FLOAT32X: usize = 0;
pub const __HAVE_DISTINCT_FLOAT64X: usize = 0;
pub const __HAVE_DISTINCT_FLOAT128X: usize = 0;
pub const __HAVE_FLOATN_NOT_TYPEDEF: usize = 0;
pub const __ldiv_t_defined: usize = 1;
pub const __lldiv_t_defined: usize = 1;
pub const RAND_MAX: usize = 2147483647;
pub const EXIT_FAILURE: usize = 1;
pub const EXIT_SUCCESS: usize = 0;
pub const _BITS_TYPES_LOCALE_T_H: usize = 1;
pub const _BITS_TYPES___LOCALE_T_H: usize = 1;
pub const _SYS_TYPES_H: usize = 1;
pub const __clock_t_defined: usize = 1;
pub const __clockid_t_defined: usize = 1;
pub const __time_t_defined: usize = 1;
pub const __timer_t_defined: usize = 1;
pub const _BITS_STDINT_INTN_H: usize = 1;
pub const __BIT_TYPES_DEFINED__: usize = 1;
pub const _ENDIAN_H: usize = 1;
pub const _BITS_ENDIAN_H: usize = 1;
pub const __LITTLE_ENDIAN: usize = 1234;
pub const __BIG_ENDIAN: usize = 4321;
pub const __PDP_ENDIAN: usize = 3412;
pub const _BITS_ENDIANNESS_H: usize = 1;
pub const __BYTE_ORDER: usize = 1234;
pub const __FLOAT_WORD_ORDER: usize = 1234;
pub const LITTLE_ENDIAN: usize = 1234;
pub const BIG_ENDIAN: usize = 4321;
pub const PDP_ENDIAN: usize = 3412;
pub const BYTE_ORDER: usize = 1234;
pub const _BITS_BYTESWAP_H: usize = 1;
pub const _BITS_UINTN_IDENTITY_H: usize = 1;
pub const _SYS_SELECT_H: usize = 1;
pub const __sigset_t_defined: usize = 1;
pub const ____sigset_t_defined: usize = 1;
pub const __timeval_defined: usize = 1;
pub const _STRUCT_TIMESPEC: usize = 1;
pub const FD_SETSIZE: usize = 256;
pub const _BITS_PTHREADTYPES_H: usize = 1;
pub const _THREAD_SHARED_TYPES_H: usize = 1;
pub const _BITS_PTHREADTYPES_ARCH_H: usize = 1;
pub const __SIZEOF_PTHREAD_MUTEX_T: usize = 32;
pub const __SIZEOF_PTHREAD_ATTR_T: usize = 32;
pub const __SIZEOF_PTHREAD_RWLOCK_T: usize = 28;
pub const __SIZEOF_PTHREAD_BARRIER_T: usize = 24;
pub const __SIZEOF_PTHREAD_MUTEXATTR_T: usize = 16;
pub const __SIZEOF_PTHREAD_COND_T: usize = 20;
pub const __SIZEOF_PTHREAD_CONDATTR_T: usize = 8;
pub const __SIZEOF_PTHREAD_RWLOCKATTR_T: usize = 4;
pub const __SIZEOF_PTHREAD_BARRIERATTR_T: usize = 4;
pub const __SIZEOF_PTHREAD_ONCE_T: usize = 8;
pub const _BITS_TYPES_STRUCT___PTHREAD_ONCE_H: usize = 1;
pub const _BITS_TYPES___PTHREAD_SPINLOCK_T_H: usize = 1;
pub const __PTHREAD_SPIN_LOCK_INITIALIZER: usize = 0;
pub const PTHREAD_MUTEX_NORMAL: ::c_int = 0;
pub const _BITS_PTHREAD_H: usize = 1;
pub const _BITS_TYPES_STRUCT___PTHREAD_ATTR: usize = 1;
pub const _BITS_TYPES_STRUCT___PTHREAD_MUTEXATTR_H: usize = 1;
pub const _BITS_TYPES_STRUCT___PTHREAD_MUTEX_H: usize = 1;
pub const _BITS_TYPES_STRUCT___PTHREAD_CONDATTR: usize = 1;
pub const _BITS_TYPES_STRUCT___PTHREAD_COND_H: usize = 1;
pub const _BITS_TYPES_STRUCT___PTHREAD_RWLOCKATTR_H: usize = 1;
pub const _BITS_TYPES_STRUCT___PTHREAD_BARRIERATTR_H: usize = 1;
pub const _BITS_TYPES_STRUCT___PTHREAD_BARRIER_H: usize = 1;
pub const _BITS_TYPES___PTHREAD_KEY_H: usize = 1;
pub const _ALLOCA_H: usize = 1;
pub const _SYS_RESOURCE_H: usize = 1;
pub const RLIM_INFINITY: usize = 2147483647;
pub const RLIM64_INFINITY: u64 = 9223372036854775807;
pub const RLIM_SAVED_MAX: usize = 2147483647;
pub const RLIM_SAVED_CUR: usize = 2147483647;
pub const __rusage_defined: usize = 1;
pub const PRIO_MIN: i32 = -20;
pub const PRIO_MAX: usize = 20;
pub const _PWD_H: usize = 1;
pub const __FILE_defined: usize = 1;
pub const NSS_BUFLEN_PASSWD: usize = 1024;
pub const _SYS_SOCKET_H: usize = 1;
pub const __iovec_defined: usize = 1;
pub const __BITS_SOCKET_H: usize = 1;
pub const SOCK_TYPE_MASK: usize = 15;
pub const PF_UNSPEC: usize = 0;
pub const PF_LOCAL: usize = 1;
pub const PF_UNIX: usize = 1;
pub const PF_FILE: usize = 1;
pub const PF_INET: usize = 2;
pub const PF_IMPLINK: usize = 3;
pub const PF_PUP: usize = 4;
pub const PF_CHAOS: usize = 5;
pub const PF_NS: usize = 6;
pub const PF_ISO: usize = 7;
pub const PF_OSI: usize = 7;
pub const PF_ECMA: usize = 8;
pub const PF_DATAKIT: usize = 9;
pub const PF_CCITT: usize = 10;
pub const PF_SNA: usize = 11;
pub const PF_DECnet: usize = 12;
pub const PF_DLI: usize = 13;
pub const PF_LAT: usize = 14;
pub const PF_HYLINK: usize = 15;
pub const PF_APPLETALK: usize = 16;
pub const PF_ROUTE: usize = 17;
pub const PF_XTP: usize = 19;
pub const PF_COIP: usize = 20;
pub const PF_CNT: usize = 21;
pub const PF_RTIP: usize = 22;
pub const PF_IPX: usize = 23;
pub const PF_SIP: usize = 24;
pub const PF_PIP: usize = 25;
pub const PF_INET6: usize = 26;
pub const PF_MAX: usize = 27;
pub const AF_UNSPEC: usize = 0;
pub const AF_LOCAL: usize = 1;
pub const AF_UNIX: i32 = 1;
pub const AF_FILE: usize = 1;
pub const AF_INET: c_long = 2;
pub const AF_IMPLINK: usize = 3;
pub const AF_PUP: usize = 4;
pub const AF_CHAOS: usize = 5;
pub const AF_NS: usize = 6;
pub const AF_ISO: usize = 7;
pub const AF_OSI: usize = 7;
pub const AF_ECMA: usize = 8;
pub const AF_DATAKIT: usize = 9;
pub const AF_CCITT: usize = 10;
pub const AF_SNA: usize = 11;
pub const AF_DECnet: usize = 12;
pub const AF_DLI: usize = 13;
pub const AF_LAT: usize = 14;
pub const AF_HYLINK: usize = 15;
pub const AF_APPLETALK: usize = 16;
pub const AF_ROUTE: usize = 17;
pub const pseudo_AF_XTP: usize = 19;
pub const AF_COIP: usize = 20;
pub const AF_CNT: usize = 21;
pub const pseudo_AF_RTIP: usize = 22;
pub const AF_IPX: usize = 23;
pub const AF_SIP: usize = 24;
pub const pseudo_AF_PIP: usize = 25;
pub const AF_INET6: c_long = 26;
pub const AF_MAX: usize = 27;
pub const SOMAXCONN: usize = 4096;
pub const _BITS_SOCKADDR_H: usize = 1;
pub const _HAVE_SA_LEN: usize = 1;
pub const _SS_SIZE: usize = 128;
pub const CMGROUP_MAX: usize = 16;
pub const SOL_SOCKET: c_long = 65535;
pub const __osockaddr_defined: usize = 1;
pub const _NETINET_IN_H: usize = 1;
pub const _BITS_STDINT_UINTN_H: usize = 1;
pub const __USE_KERNEL_IPV6_DEFS: usize = 0;
pub const SOL_IP: usize = 0;
pub const IP_OPTIONS: usize = 1;
pub const IP_HDRINCL: usize = 2;
pub const IP_TOS: usize = 3;
pub const IP_TTL: c_long = 4;
pub const IP_RECVOPTS: usize = 5;
pub const IP_RECVRETOPTS: usize = 6;
pub const IP_RECVDSTADDR: usize = 7;
pub const IP_RETOPTS: usize = 8;
pub const IP_MULTICAST_IF: usize = 9;
pub const IP_MULTICAST_TTL: c_long = 10;
pub const IP_MULTICAST_LOOP: c_long = 11;
pub const IP_ADD_MEMBERSHIP: c_long = 12;
pub const IP_DROP_MEMBERSHIP: c_long = 13;
pub const SOL_IPV6: usize = 41;
pub const SOL_ICMPV6: usize = 58;
pub const IPV6_ADDRFORM: usize = 1;
pub const IPV6_2292PKTINFO: usize = 2;
pub const IPV6_2292HOPOPTS: usize = 3;
pub const IPV6_2292DSTOPTS: usize = 4;
pub const IPV6_2292RTHDR: usize = 5;
pub const IPV6_2292PKTOPTIONS: usize = 6;
pub const IPV6_CHECKSUM: usize = 7;
pub const IPV6_2292HOPLIMIT: usize = 8;
pub const IPV6_RXINFO: usize = 2;
pub const IPV6_TXINFO: usize = 2;
pub const SCM_SRCINFO: usize = 2;
pub const IPV6_UNICAST_HOPS: usize = 16;
pub const IPV6_MULTICAST_IF: usize = 17;
pub const IPV6_MULTICAST_HOPS: usize = 18;
pub const IPV6_MULTICAST_LOOP: c_long = 19;
pub const IPV6_JOIN_GROUP: usize = 20;
pub const IPV6_LEAVE_GROUP: usize = 21;
pub const IPV6_ROUTER_ALERT: usize = 22;
pub const IPV6_MTU_DISCOVER: usize = 23;
pub const IPV6_MTU: usize = 24;
pub const IPV6_RECVERR: usize = 25;
pub const IPV6_V6ONLY: c_long = 26;
pub const IPV6_JOIN_ANYCAST: usize = 27;
pub const IPV6_LEAVE_ANYCAST: usize = 28;
pub const IPV6_RECVPKTINFO: usize = 49;
pub const IPV6_PKTINFO: usize = 50;
pub const IPV6_RECVHOPLIMIT: usize = 51;
pub const IPV6_HOPLIMIT: usize = 52;
pub const IPV6_RECVHOPOPTS: usize = 53;
pub const IPV6_HOPOPTS: usize = 54;
pub const IPV6_RTHDRDSTOPTS: usize = 55;
pub const IPV6_RECVRTHDR: usize = 56;
pub const IPV6_RTHDR: usize = 57;
pub const IPV6_RECVDSTOPTS: usize = 58;
pub const IPV6_DSTOPTS: usize = 59;
pub const IPV6_RECVPATHMTU: usize = 60;
pub const IPV6_PATHMTU: usize = 61;
pub const IPV6_DONTFRAG: usize = 62;
pub const IPV6_RECVTCLASS: usize = 66;
pub const IPV6_TCLASS: usize = 67;
pub const IPV6_ADDR_PREFERENCES: usize = 72;
pub const IPV6_MINHOPCOUNT: usize = 73;
pub const IPV6_ADD_MEMBERSHIP: c_long = 20;
pub const IPV6_DROP_MEMBERSHIP: c_long = 21;
pub const IPV6_RXHOPOPTS: usize = 3;
pub const IPV6_RXDSTOPTS: usize = 4;
pub const IPV6_RTHDR_LOOSE: usize = 0;
pub const IPV6_RTHDR_STRICT: usize = 1;
pub const IPV6_RTHDR_TYPE_0: usize = 0;
pub const IN_CLASSA_NET: usize = 4278190080;
pub const IN_CLASSA_NSHIFT: usize = 24;
pub const IN_CLASSA_HOST: usize = 16777215;
pub const IN_CLASSA_MAX: usize = 128;
pub const IN_CLASSB_NET: usize = 4294901760;
pub const IN_CLASSB_NSHIFT: usize = 16;
pub const IN_CLASSB_HOST: usize = 65535;
pub const IN_CLASSB_MAX: usize = 65536;
pub const IN_CLASSC_NET: usize = 4294967040;
pub const IN_CLASSC_NSHIFT: usize = 8;
pub const IN_CLASSC_HOST: usize = 255;
pub const IN_LOOPBACKNET: usize = 127;
pub const INET_ADDRSTRLEN: usize = 16;
pub const INET6_ADDRSTRLEN: usize = 46;
pub const _DIRENT_H: usize = 1;
pub const _DIRENT_HAVE_D_RECLEN: usize = 1;
pub const _DIRENT_HAVE_D_NAMLEN: usize = 1;
pub const _DIRENT_HAVE_D_TYPE: usize = 1;
pub const _DIRENT_MATCHES_DIRENT64: usize = 0;
pub const _BITS_POSIX1_LIM_H: usize = 1;
pub const _POSIX_AIO_LISTIO_MAX: usize = 2;
pub const _POSIX_AIO_MAX: usize = 1;
pub const _POSIX_ARG_MAX: usize = 4096;
pub const _POSIX_CHILD_MAX: usize = 25;
pub const _POSIX_DELAYTIMER_MAX: usize = 32;
pub const _POSIX_HOST_NAME_MAX: usize = 255;
pub const _POSIX_LINK_MAX: usize = 8;
pub const _POSIX_LOGIN_NAME_MAX: usize = 9;
pub const _POSIX_MAX_CANON: usize = 255;
pub const _POSIX_MAX_INPUT: usize = 255;
pub const _POSIX_MQ_OPEN_MAX: usize = 8;
pub const _POSIX_MQ_PRIO_MAX: usize = 32;
pub const _POSIX_NAME_MAX: usize = 14;
pub const _POSIX_NGROUPS_MAX: usize = 8;
pub const _POSIX_OPEN_MAX: usize = 20;
pub const _POSIX_FD_SETSIZE: usize = 20;
pub const _POSIX_PATH_MAX: usize = 256;
pub const _POSIX_PIPE_BUF: usize = 512;
pub const _POSIX_RE_DUP_MAX: usize = 255;
pub const _POSIX_RTSIG_MAX: usize = 8;
pub const _POSIX_SEM_NSEMS_MAX: usize = 256;
pub const _POSIX_SEM_VALUE_MAX: usize = 32767;
pub const _POSIX_SIGQUEUE_MAX: usize = 32;
pub const _POSIX_SSIZE_MAX: usize = 32767;
pub const _POSIX_STREAM_MAX: usize = 8;
pub const _POSIX_SYMLINK_MAX: usize = 255;
pub const _POSIX_SYMLOOP_MAX: usize = 8;
pub const _POSIX_TIMER_MAX: usize = 32;
pub const _POSIX_TTY_NAME_MAX: usize = 9;
pub const _POSIX_TZNAME_MAX: usize = 6;
pub const _POSIX_QLIMIT: usize = 1;
pub const _POSIX_HIWAT: usize = 512;
pub const _POSIX_UIO_MAXIOV: usize = 16;
pub const _POSIX_CLOCKRES_MIN: usize = 20000000;
pub const NAME_MAX: usize = 255;
pub const NGROUPS_MAX: usize = 256;
pub const _POSIX_THREAD_KEYS_MAX: usize = 128;
pub const _POSIX_THREAD_DESTRUCTOR_ITERATIONS: usize = 4;
pub const _POSIX_THREAD_THREADS_MAX: usize = 64;
pub const SEM_VALUE_MAX: usize = 2147483647;
pub const MAXNAMLEN: usize = 255;
pub const _NETDB_H: usize = 1;
pub const _RPC_NETDB_H: usize = 1;
pub const __sigevent_t_defined: usize = 1;
pub const _PATH_HEQUIV: &'static [u8; 17usize] = b"/etc/hosts.equiv\0";
pub const _PATH_HOSTS: &'static [u8; 11usize] = b"/etc/hosts\0";
pub const _PATH_NETWORKS: &'static [u8; 14usize] = b"/etc/networks\0";
pub const _PATH_NSSWITCH_CONF: &'static [u8; 19usize] = b"/etc/nsswitch.conf\0";
pub const _PATH_PROTOCOLS: &'static [u8; 15usize] = b"/etc/protocols\0";
pub const _PATH_SERVICES: &'static [u8; 14usize] = b"/etc/services\0";
pub const HOST_NOT_FOUND: usize = 1;
pub const TRY_AGAIN: usize = 2;
pub const NO_RECOVERY: usize = 3;
pub const NO_DATA: usize = 4;
pub const NETDB_INTERNAL: i32 = -1;
pub const NETDB_SUCCESS: usize = 0;
pub const NO_ADDRESS: usize = 4;
pub const IPPORT_RESERVED: usize = 1024;
pub const SCOPE_DELIMITER: u8 = 37u8;
pub const GAI_WAIT: usize = 0;
pub const GAI_NOWAIT: usize = 1;
pub const AI_PASSIVE: usize = 1;
pub const AI_CANONNAME: usize = 2;
pub const AI_NUMERICHOST: usize = 4;
pub const AI_V4MAPPED: usize = 8;
pub const AI_ALL: usize = 16;
pub const AI_ADDRCONFIG: usize = 32;
pub const AI_IDN: usize = 64;
pub const AI_CANONIDN: usize = 128;
pub const AI_NUMERICSERV: usize = 1024;
pub const EAI_BADFLAGS: i32 = -1;
pub const EAI_NONAME: i32 = -2;
pub const EAI_AGAIN: i32 = -3;
pub const EAI_FAIL: i32 = -4;
pub const EAI_FAMILY: i32 = -6;
pub const EAI_SOCKTYPE: i32 = -7;
pub const EAI_SERVICE: i32 = -8;
pub const EAI_MEMORY: i32 = -10;
pub const EAI_SYSTEM: i32 = -11;
pub const EAI_OVERFLOW: i32 = -12;
pub const EAI_NODATA: i32 = -5;
pub const EAI_ADDRFAMILY: i32 = -9;
pub const EAI_INPROGRESS: i32 = -100;
pub const EAI_CANCELED: i32 = -101;
pub const EAI_NOTCANCELED: i32 = -102;
pub const EAI_ALLDONE: i32 = -103;
pub const EAI_INTR: i32 = -104;
pub const EAI_IDN_ENCODE: i32 = -105;
pub const NI_MAXHOST: usize = 1025;
pub const NI_MAXSERV: usize = 32;
pub const NI_NUMERICHOST: usize = 1;
pub const NI_NUMERICSERV: usize = 2;
pub const NI_NOFQDN: usize = 4;
pub const NI_NAMEREQD: usize = 8;
pub const NI_DGRAM: usize = 16;
pub const NI_IDN: usize = 32;
pub const _TIME_H: usize = 1;
pub const _BITS_TIME_H: usize = 1;
pub const CLOCK_REALTIME: c_long = 0;
pub const CLOCK_MONOTONIC: i32 = 1;
pub const CLOCK_PROCESS_CPUTIME_ID: usize = 2;
pub const CLOCK_THREAD_CPUTIME_ID: usize = 3;
pub const CLOCK_MONOTONIC_RAW: usize = 4;
pub const CLOCK_REALTIME_COARSE: usize = 5;
pub const CLOCK_MONOTONIC_COARSE: usize = 6;
pub const TIMER_ABSTIME: usize = 1;
pub const __struct_tm_defined: usize = 1;
pub const __itimerspec_defined: usize = 1;
pub const TIME_UTC: usize = 1;
pub const _SYS_POLL_H: usize = 1;
pub const POLLIN: i16 = 1;
pub const POLLPRI: usize = 2;
pub const POLLOUT: i16 = 4;
pub const POLLRDNORM: usize = 1;
pub const POLLRDBAND: usize = 2;
pub const POLLWRNORM: usize = 4;
pub const POLLWRBAND: usize = 4;
pub const POLLERR: usize = 8;
pub const POLLHUP: i16 = 16;
pub const POLLNVAL: i16 = 32;
pub const _LOCALE_H: usize = 1;
pub const _BITS_LOCALE_H: usize = 1;
pub const __LC_CTYPE: usize = 0;
pub const __LC_NUMERIC: usize = 1;
pub const __LC_TIME: usize = 2;
pub const __LC_COLLATE: usize = 3;
pub const __LC_MONETARY: usize = 4;
pub const __LC_MESSAGES: usize = 5;
pub const __LC_ALL: usize = 6;
pub const __LC_PAPER: usize = 7;
pub const __LC_NAME: usize = 8;
pub const __LC_ADDRESS: usize = 9;
pub const __LC_TELEPHONE: usize = 10;
pub const __LC_MEASUREMENT: usize = 11;
pub const __LC_IDENTIFICATION: usize = 12;
pub const LC_CTYPE: usize = 0;
pub const LC_NUMERIC: usize = 1;
pub const LC_TIME: usize = 2;
pub const LC_COLLATE: usize = 3;
pub const LC_MONETARY: usize = 4;
pub const LC_MESSAGES: usize = 5;
pub const LC_ALL: usize = 6;
pub const LC_PAPER: usize = 7;
pub const LC_NAME: usize = 8;
pub const LC_ADDRESS: usize = 9;
pub const LC_TELEPHONE: usize = 10;
pub const LC_MEASUREMENT: usize = 11;
pub const LC_IDENTIFICATION: usize = 12;
pub const LC_CTYPE_MASK: usize = 1;
pub const LC_NUMERIC_MASK: usize = 2;
pub const LC_TIME_MASK: usize = 4;
pub const LC_COLLATE_MASK: usize = 8;
pub const LC_MONETARY_MASK: usize = 16;
pub const LC_MESSAGES_MASK: usize = 32;
pub const LC_PAPER_MASK: usize = 128;
pub const LC_NAME_MASK: usize = 256;
pub const LC_ADDRESS_MASK: usize = 512;
pub const LC_TELEPHONE_MASK: usize = 1024;
pub const LC_MEASUREMENT_MASK: usize = 2048;
pub const LC_IDENTIFICATION_MASK: usize = 4096;
pub const LC_ALL_MASK: usize = 8127;
pub const _SEMAPHORE_H: usize = 1;
pub const _BITS_SEMAPHORE_H: usize = 1;
pub const __SIZEOF_SEM_T: usize = 20;
pub const _SYS_STATVFS_H: usize = 1;
pub const _TERMIOS_H: usize = 1;
pub const IGNBRK: usize = 1;
pub const BRKINT: usize = 2;
pub const IGNPAR: usize = 4;
pub const PARMRK: usize = 8;
pub const INPCK: usize = 16;
pub const ISTRIP: usize = 32;
pub const INLCR: usize = 64;
pub const IGNCR: usize = 128;
pub const ICRNL: usize = 256;
pub const IXON: usize = 512;
pub const IXOFF: usize = 1024;
pub const IXANY: usize = 2048;
pub const IMAXBEL: usize = 8192;
pub const IUCLC: usize = 16384;
pub const OPOST: usize = 1;
pub const ONLCR: usize = 2;
pub const ONOEOT: usize = 8;
pub const OCRNL: usize = 16;
pub const ONOCR: usize = 32;
pub const ONLRET: usize = 64;
pub const NLDLY: usize = 768;
pub const NL0: usize = 0;
pub const NL1: usize = 256;
pub const TABDLY: usize = 3076;
pub const TAB0: usize = 0;
pub const TAB1: usize = 1024;
pub const TAB2: usize = 2048;
pub const TAB3: usize = 4;
pub const CRDLY: usize = 12288;
pub const CR0: usize = 0;
pub const CR1: usize = 4096;
pub const CR2: usize = 8192;
pub const CR3: usize = 12288;
pub const FFDLY: usize = 16384;
pub const FF0: usize = 0;
pub const FF1: usize = 16384;
pub const BSDLY: usize = 32768;
pub const BS0: usize = 0;
pub const BS1: usize = 32768;
pub const VTDLY: usize = 65536;
pub const VT0: usize = 0;
pub const VT1: usize = 65536;
pub const OLCUC: usize = 131072;
pub const OFILL: usize = 262144;
pub const OFDEL: usize = 524288;
pub const CIGNORE: usize = 1;
pub const CS5: usize = 0;
pub const CS6: usize = 256;
pub const CS7: usize = 512;
pub const CS8: usize = 768;
pub const CSTOPB: usize = 1024;
pub const CREAD: usize = 2048;
pub const PARENB: usize = 4096;
pub const PARODD: usize = 8192;
pub const HUPCL: usize = 16384;
pub const CLOCAL: usize = 32768;
pub const CRTSCTS: usize = 65536;
pub const CRTS_IFLOW: usize = 65536;
pub const CCTS_OFLOW: usize = 65536;
pub const CDTRCTS: usize = 131072;
pub const MDMBUF: usize = 1048576;
pub const CHWFLOW: usize = 1245184;
pub const ECHOKE: usize = 1;
pub const _ECHOE: usize = 2;
pub const ECHOE: usize = 2;
pub const _ECHOK: usize = 4;
pub const ECHOK: usize = 4;
pub const _ECHO: usize = 8;
pub const ECHO: usize = 8;
pub const _ECHONL: usize = 16;
pub const ECHONL: usize = 16;
pub const ECHOPRT: usize = 32;
pub const ECHOCTL: usize = 64;
pub const _ISIG: usize = 128;
pub const ISIG: usize = 128;
pub const _ICANON: usize = 256;
pub const ICANON: usize = 256;
pub const ALTWERASE: usize = 512;
pub const _IEXTEN: usize = 1024;
pub const IEXTEN: usize = 1024;
pub const EXTPROC: usize = 2048;
pub const _TOSTOP: usize = 4194304;
pub const TOSTOP: usize = 4194304;
pub const FLUSHO: usize = 8388608;
pub const NOKERNINFO: usize = 33554432;
pub const PENDIN: usize = 536870912;
pub const _NOFLSH: usize = 2147483648;
pub const NOFLSH: usize = 2147483648;
pub const VEOF: usize = 0;
pub const VEOL: usize = 1;
pub const VEOL2: usize = 2;
pub const VERASE: usize = 3;
pub const VWERASE: usize = 4;
pub const VKILL: usize = 5;
pub const VREPRINT: usize = 6;
pub const VINTR: usize = 8;
pub const VQUIT: usize = 9;
pub const VSUSP: usize = 10;
pub const VDSUSP: usize = 11;
pub const VSTART: usize = 12;
pub const VSTOP: usize = 13;
pub const VLNEXT: usize = 14;
pub const VDISCARD: usize = 15;
pub const VMIN: usize = 16;
pub const VTIME: usize = 17;
pub const VSTATUS: usize = 18;
pub const NCCS: usize = 20;
pub const B0: usize = 0;
pub const B50: usize = 50;
pub const B75: usize = 75;
pub const B110: usize = 110;
pub const B134: usize = 134;
pub const B150: usize = 150;
pub const B200: usize = 200;
pub const B300: usize = 300;
pub const B600: usize = 600;
pub const B1200: usize = 1200;
pub const B1800: usize = 1800;
pub const B2400: usize = 2400;
pub const B4800: usize = 4800;
pub const B9600: usize = 9600;
pub const B7200: usize = 7200;
pub const B14400: usize = 14400;
pub const B19200: usize = 19200;
pub const B28800: usize = 28800;
pub const B38400: usize = 38400;
pub const EXTA: usize = 19200;
pub const EXTB: usize = 38400;
pub const B57600: usize = 57600;
pub const B76800: usize = 76800;
pub const B115200: usize = 115200;
pub const B230400: usize = 230400;
pub const B460800: usize = 460800;
pub const B500000: usize = 500000;
pub const B576000: usize = 576000;
pub const B921600: usize = 921600;
pub const B1000000: usize = 1000000;
pub const B1152000: usize = 1152000;
pub const B1500000: usize = 1500000;
pub const B2000000: usize = 2000000;
pub const B2500000: usize = 2500000;
pub const B3000000: usize = 3000000;
pub const B3500000: usize = 3500000;
pub const B4000000: usize = 4000000;
pub const TCSANOW: usize = 0;
pub const TCSADRAIN: usize = 1;
pub const TCSAFLUSH: usize = 2;
pub const TCSASOFT: usize = 16;
pub const TCIFLUSH: usize = 1;
pub const TCOFLUSH: usize = 2;
pub const TCIOFLUSH: usize = 3;
pub const TCOOFF: usize = 1;
pub const TCOON: usize = 2;
pub const TCIOFF: usize = 3;
pub const TCION: usize = 4;
pub const TTYDEF_IFLAG: usize = 11042;
pub const TTYDEF_LFLAG: usize = 1483;
pub const TTYDEF_CFLAG: usize = 23040;
pub const TTYDEF_SPEED: usize = 9600;
pub const CEOL: u8 = 0u8;
pub const CERASE: usize = 127;
pub const CMIN: usize = 1;
pub const CQUIT: usize = 28;
pub const CTIME: usize = 0;
pub const CBRK: u8 = 0u8;
pub const _DLFCN_H: usize = 1;
pub const RTLD_LAZY: usize = 1;
pub const RTLD_NOW: usize = 2;
pub const RTLD_BINDING_MASK: usize = 3;
pub const RTLD_NOLOAD: usize = 4;
pub const RTLD_DEEPBIND: usize = 8;
pub const RTLD_GLOBAL: usize = 256;
pub const RTLD_LOCAL: usize = 0;
pub const RTLD_NODELETE: usize = 4096;
pub const DLFO_STRUCT_HAS_EH_DBASE: usize = 1;
pub const DLFO_STRUCT_HAS_EH_COUNT: usize = 0;
pub const LM_ID_BASE: usize = 0;
pub const LM_ID_NEWLM: i32 = -1;
pub const _BITS_SIGNUM_GENERIC_H: usize = 1;
pub const SIGINT: c_long = 2;
pub const SIGILL: c_long = 4;
pub const SIGABRT: c_long = 6;
pub const SIGFPE: c_long = 8;
pub const SIGSEGV: c_long = 11;
pub const SIGTERM: c_long = 15;
pub const SIGHUP: c_long = 1;
pub const SIGQUIT: c_long = 3;
pub const SIGTRAP: c_long = 5;
pub const SIGKILL: c_long = 9;
pub const SIGPIPE: c_long = 13;
pub const SIGALRM: c_long = 14;
pub const SIGIOT: usize = 6;
pub const _BITS_SIGNUM_ARCH_H: usize = 1;
pub const SIGBUS: c_long = 10;
pub const SIGSYS: c_long = 12;
pub const SIGEMT: usize = 7;
pub const SIGINFO: usize = 29;
pub const SIGLOST: usize = 32;
pub const SIGURG: c_long = 16;
pub const SIGSTOP: c_long = 17;
pub const SIGTSTP: c_long = 18;
pub const SIGCONT: c_long = 19;
pub const SIGCHLD: c_long = 20;
pub const SIGTTIN: c_long = 21;
pub const SIGTTOU: c_long = 22;
pub const SIGPOLL: usize = 23;
pub const SIGXCPU: c_long = 24;
pub const SIGVTALRM: c_long = 26;
pub const SIGPROF: c_long = 27;
pub const SIGXFSZ: c_long = 25;
pub const SIGUSR1: c_long = 30;
pub const SIGUSR2: c_long = 31;
pub const SIGWINCH: c_long = 28;
pub const SIGIO: c_long = 23;
pub const SIGCLD: c_long = 20;
pub const __SIGRTMIN: usize = 32;
pub const __SIGRTMAX: usize = 32;
pub const _NSIG: usize = 33;
pub const __sig_atomic_t_defined: usize = 1;
pub const __siginfo_t_defined: usize = 1;
pub const _BITS_SIGINFO_CONSTS_H: usize = 1;
pub const _BITS_SIGEVENT_CONSTS_H: usize = 1;
pub const NSIG: usize = 33;
pub const _BITS_SIGACTION_H: usize = 1;
pub const SA_ONSTACK: usize = 1;
pub const SA_RESTART: usize = 2;
pub const SA_NODEFER: usize = 16;
pub const SA_RESETHAND: usize = 4;
pub const SA_NOCLDSTOP: usize = 8;
pub const SA_SIGINFO: usize = 64;
pub const SA_INTERRUPT: usize = 0;
pub const SA_NOMASK: usize = 16;
pub const SA_ONESHOT: usize = 4;
pub const SA_STACK: usize = 1;
pub const SIG_BLOCK: usize = 1;
pub const SIG_UNBLOCK: usize = 2;
pub const SIG_SETMASK: usize = 3;
pub const _BITS_SIGCONTEXT_H: usize = 1;
pub const FPC_IE: usize = 1;
pub const FPC_IM: usize = 1;
pub const FPC_DE: usize = 2;
pub const FPC_DM: usize = 2;
pub const FPC_ZE: usize = 4;
pub const FPC_ZM: usize = 4;
pub const FPC_OE: usize = 8;
pub const FPC_OM: usize = 8;
pub const FPC_UE: usize = 16;
pub const FPC_PE: usize = 32;
pub const FPC_PC: usize = 768;
pub const FPC_PC_24: usize = 0;
pub const FPC_PC_53: usize = 512;
pub const FPC_PC_64: usize = 768;
pub const FPC_RC: usize = 3072;
pub const FPC_RC_RN: usize = 0;
pub const FPC_RC_RD: usize = 1024;
pub const FPC_RC_RU: usize = 2048;
pub const FPC_RC_CHOP: usize = 3072;
pub const FPC_IC: usize = 4096;
pub const FPC_IC_PROJ: usize = 0;
pub const FPC_IC_AFF: usize = 4096;
pub const FPS_IE: usize = 1;
pub const FPS_DE: usize = 2;
pub const FPS_ZE: usize = 4;
pub const FPS_OE: usize = 8;
pub const FPS_UE: usize = 16;
pub const FPS_PE: usize = 32;
pub const FPS_SF: usize = 64;
pub const FPS_ES: usize = 128;
pub const FPS_C0: usize = 256;
pub const FPS_C1: usize = 512;
pub const FPS_C2: usize = 1024;
pub const FPS_TOS: usize = 14336;
pub const FPS_TOS_SHIFT: usize = 11;
pub const FPS_C3: usize = 16384;
pub const FPS_BUSY: usize = 32768;
pub const FPE_INTOVF_TRAP: usize = 1;
pub const FPE_INTDIV_FAULT: usize = 2;
pub const FPE_FLTOVF_FAULT: usize = 3;
pub const FPE_FLTDIV_FAULT: usize = 4;
pub const FPE_FLTUND_FAULT: usize = 5;
pub const FPE_SUBRNG_FAULT: usize = 7;
pub const FPE_FLTDNR_FAULT: usize = 8;
pub const FPE_FLTINX_FAULT: usize = 9;
pub const FPE_EMERR_FAULT: usize = 10;
pub const FPE_EMBND_FAULT: usize = 11;
pub const ILL_INVOPR_FAULT: usize = 1;
pub const ILL_STACK_FAULT: usize = 2;
pub const ILL_FPEOPR_FAULT: usize = 3;
pub const DBG_SINGLE_TRAP: usize = 1;
pub const DBG_BRKPNT_FAULT: usize = 2;
pub const __stack_t_defined: usize = 1;
pub const _SYS_UCONTEXT_H: usize = 1;
pub const __NGREG: usize = 19;
pub const NGREG: usize = 19;
pub const _BITS_SIGSTACK_H: usize = 1;
pub const MINSIGSTKSZ: usize = 8192;
pub const SIGSTKSZ: usize = 40960;
pub const _BITS_SS_FLAGS_H: usize = 1;
pub const __sigstack_defined: usize = 1;
pub const _BITS_SIGTHREAD_H: usize = 1;
pub const _SYS_STAT_H: usize = 1;
pub const _BITS_STAT_H: usize = 1;
pub const __S_IFMT: usize = 61440;
pub const __S_IFDIR: u32 = 16384;
pub const __S_IFCHR: u32 = 8192;
pub const __S_IFBLK: usize = 24576;
pub const __S_IFREG: usize = 32768;
pub const __S_IFLNK: u32 = 40960;
pub const __S_IFSOCK: u32 = 49152;
pub const __S_IFIFO: u32 = 4096;
pub const __S_ISUID: usize = 2048;
pub const __S_ISGID: usize = 1024;
pub const __S_ISVTX: usize = 512;
pub const __S_IREAD: usize = 256;
pub const __S_IWRITE: usize = 128;
pub const __S_IEXEC: usize = 64;
pub const S_INOCACHE: usize = 65536;
pub const S_IUSEUNK: usize = 131072;
pub const S_IUNKNOWN: usize = 1835008;
pub const S_IUNKSHIFT: usize = 12;
pub const S_IPTRANS: usize = 2097152;
pub const S_IATRANS: usize = 4194304;
pub const S_IROOT: usize = 8388608;
pub const S_ITRANS: usize = 14680064;
pub const S_IMMAP0: usize = 16777216;
pub const CMASK: usize = 18;
pub const UF_SETTABLE: usize = 65535;
pub const UF_NODUMP: usize = 1;
pub const UF_IMMUTABLE: usize = 2;
pub const UF_APPEND: usize = 4;
pub const UF_OPAQUE: usize = 8;
pub const UF_NOUNLINK: usize = 16;
pub const SF_SETTABLE: usize = 4294901760;
pub const SF_ARCHIVED: usize = 65536;
pub const SF_IMMUTABLE: usize = 131072;
pub const SF_APPEND: usize = 262144;
pub const SF_NOUNLINK: usize = 1048576;
pub const SF_SNAPSHOT: usize = 2097152;
pub const UTIME_NOW: i32 = -1;
pub const UTIME_OMIT: i32 = -2;
pub const S_IFMT: u32 = 61440;
pub const S_IFDIR: u32 = 16384;
pub const S_IFCHR: u32 = 8192;
pub const S_IFBLK: u32 = 24576;
pub const S_IFREG: u32 = 32768;
pub const S_IFIFO: u32 = 4096;
pub const S_IFLNK: u32 = 40960;
pub const S_IFSOCK: u32 = 49152;
pub const S_ISUID: usize = 2048;
pub const S_ISGID: usize = 1024;
pub const S_ISVTX: usize = 512;
pub const S_IRUSR: usize = 256;
pub const S_IWUSR: usize = 128;
pub const S_IXUSR: usize = 64;
pub const S_IRWXU: usize = 448;
pub const S_IREAD: usize = 256;
pub const S_IWRITE: usize = 128;
pub const S_IEXEC: usize = 64;
pub const S_IRGRP: usize = 32;
pub const S_IWGRP: usize = 16;
pub const S_IXGRP: usize = 8;
pub const S_IRWXG: usize = 56;
pub const S_IROTH: usize = 4;
pub const S_IWOTH: usize = 2;
pub const S_IXOTH: usize = 1;
pub const S_IRWXO: usize = 7;
pub const ACCESSPERMS: usize = 511;
pub const ALLPERMS: usize = 4095;
pub const DEFFILEMODE: usize = 438;
pub const S_BLKSIZE: usize = 512;
pub const __statx_timestamp_defined: usize = 1;
pub const __statx_defined: usize = 1;
pub const STATX_TYPE: usize = 1;
pub const STATX_MODE: usize = 2;
pub const STATX_NLINK: usize = 4;
pub const STATX_UID: usize = 8;
pub const STATX_GID: usize = 16;
pub const STATX_ATIME: usize = 32;
pub const STATX_MTIME: usize = 64;
pub const STATX_CTIME: usize = 128;
pub const STATX_INO: usize = 256;
pub const STATX_SIZE: usize = 512;
pub const STATX_BLOCKS: usize = 1024;
pub const STATX_BASIC_STATS: usize = 2047;
pub const STATX_ALL: usize = 4095;
pub const STATX_BTIME: usize = 2048;
pub const STATX_MNT_ID: usize = 4096;
pub const STATX_DIOALIGN: usize = 8192;
pub const STATX__RESERVED: usize = 2147483648;
pub const STATX_ATTR_COMPRESSED: usize = 4;
pub const STATX_ATTR_IMMUTABLE: usize = 16;
pub const STATX_ATTR_APPEND: usize = 32;
pub const STATX_ATTR_NODUMP: usize = 64;
pub const STATX_ATTR_ENCRYPTED: usize = 2048;
pub const STATX_ATTR_AUTOMOUNT: usize = 4096;
pub const STATX_ATTR_MOUNT_ROOT: usize = 8192;
pub const STATX_ATTR_VERITY: usize = 1048576;
pub const STATX_ATTR_DAX: usize = 2097152;
pub const _SYS_UN_H: usize = 1;
pub const _STRING_H: usize = 1;
pub const _STRINGS_H: usize = 1;
pub const _SYS_IOCTL_H: usize = 1;
pub const __BITS_IOCTLS_H: usize = 1;
pub const TIOCM_LE: usize = 1;
pub const TIOCM_DTR: usize = 2;
pub const TIOCM_RTS: usize = 4;
pub const TIOCM_ST: usize = 8;
pub const TIOCM_SR: usize = 16;
pub const TIOCM_CTS: usize = 32;
pub const TIOCM_CAR: usize = 64;
pub const TIOCM_CD: usize = 64;
pub const TIOCM_RNG: usize = 128;
pub const TIOCM_RI: usize = 128;
pub const TIOCM_DSR: usize = 256;
pub const TIOCPKT_DATA: usize = 0;
pub const TIOCPKT_FLUSHREAD: usize = 1;
pub const TIOCPKT_FLUSHWRITE: usize = 2;
pub const TIOCPKT_STOP: usize = 4;
pub const TIOCPKT_START: usize = 8;
pub const TIOCPKT_NOSTOP: usize = 16;
pub const TIOCPKT_DOSTOP: usize = 32;
pub const TIOCPKT_IOCTL: usize = 64;
pub const TTYDISC: usize = 0;
pub const TABLDISC: usize = 3;
pub const SLIPDISC: usize = 4;
pub const TANDEM: usize = 1;
pub const CBREAK: usize = 2;
pub const LCASE: usize = 4;
pub const CRMOD: usize = 16;
pub const RAW: usize = 32;
pub const ODDP: usize = 64;
pub const EVENP: usize = 128;
pub const ANYP: usize = 192;
pub const NLDELAY: usize = 768;
pub const NL2: usize = 512;
pub const NL3: usize = 768;
pub const TBDELAY: usize = 3072;
pub const XTABS: usize = 3072;
pub const CRDELAY: usize = 12288;
pub const VTDELAY: usize = 16384;
pub const BSDELAY: usize = 32768;
pub const ALLDELAY: usize = 65280;
pub const CRTBS: usize = 65536;
pub const PRTERA: usize = 131072;
pub const CRTERA: usize = 262144;
pub const TILDE: usize = 524288;
pub const LITOUT: usize = 2097152;
pub const NOHANG: usize = 16777216;
pub const L001000: usize = 33554432;
pub const CRTKIL: usize = 67108864;
pub const PASS8: usize = 134217728;
pub const CTLECH: usize = 268435456;
pub const DECCTQ: usize = 1073741824;
pub const _FCNTL_H: usize = 1;
pub const O_EXEC: usize = 4;
pub const O_NORW: usize = 0;
pub const O_RDONLY: c_long = 1;
pub const O_WRONLY: c_long = 2;
pub const O_RDWR: c_long = 3;
pub const O_ACCMODE: c_long = 3;
pub const O_LARGEFILE: usize = 0;
pub const O_CREAT: c_long = 16;
pub const O_EXCL: c_long = 32;
pub const O_NOLINK: usize = 64;
pub const O_NOTRANS: usize = 128;
pub const O_NOFOLLOW: c_long = 1048576;
pub const O_DIRECTORY: c_long = 2097152;
pub const O_APPEND: c_long = 256;
pub const O_ASYNC: usize = 512;
pub const O_FSYNC: usize = 1024;
pub const O_SYNC: usize = 1024;
pub const O_NOATIME: usize = 2048;
pub const O_SHLOCK: usize = 131072;
pub const O_EXLOCK: usize = 262144;
pub const O_DSYNC: usize = 1024;
pub const O_RSYNC: usize = 1024;
pub const O_NONBLOCK: c_long = 8;
pub const O_NDELAY: usize = 8;
pub const O_HURD: usize = 458751;
pub const O_TRUNC: c_long = 65536;
pub const O_CLOEXEC: c_long = 4194304;
pub const O_IGNORE_CTTY: usize = 524288;
pub const O_NOCTTY: usize = 0;
pub const FREAD: usize = 1;
pub const FWRITE: usize = 2;
pub const FASYNC: usize = 512;
pub const FCREAT: usize = 16;
pub const FEXCL: usize = 32;
pub const FTRUNC: usize = 65536;
pub const FNOCTTY: usize = 0;
pub const FFSYNC: usize = 1024;
pub const FSYNC: usize = 1024;
pub const FAPPEND: usize = 256;
pub const FNONBLOCK: usize = 8;
pub const FNDELAY: usize = 8;
pub const F_DUPFD: ::c_int = 0;
pub const F_GETFD: c_long = 1;
pub const F_SETFD: usize = 2;
pub const F_GETFL: c_long = 3;
pub const F_SETFL: c_long = 4;
pub const F_GETOWN: usize = 5;
pub const F_SETOWN: usize = 6;
pub const F_GETLK: usize = 7;
pub const F_SETLK: usize = 8;
pub const F_SETLKW: usize = 9;
pub const F_GETLK64: usize = 10;
pub const F_SETLK64: usize = 11;
pub const F_SETLKW64: usize = 12;
pub const F_DUPFD_CLOEXEC: ::c_int = 1030;
pub const FD_CLOEXEC: usize = 1;
pub const F_RDLCK: usize = 1;
pub const F_WRLCK: usize = 2;
pub const F_UNLCK: usize = 3;
pub const POSIX_FADV_NORMAL: usize = 0;
pub const POSIX_FADV_RANDOM: usize = 1;
pub const POSIX_FADV_SEQUENTIAL: usize = 2;
pub const POSIX_FADV_WILLNEED: usize = 3;
pub const POSIX_FADV_DONTNEED: usize = 4;
pub const POSIX_FADV_NOREUSE: usize = 5;
pub const AT_FDCWD: i32 = -100;
pub const AT_SYMLINK_NOFOLLOW: usize = 256;
pub const AT_REMOVEDIR: c_long = 512;
pub const AT_SYMLINK_FOLLOW: usize = 1024;
pub const AT_NO_AUTOMOUNT: usize = 2048;
pub const AT_EMPTY_PATH: usize = 4096;
pub const AT_STATX_SYNC_TYPE: usize = 24576;
pub const AT_STATX_SYNC_AS_STAT: usize = 0;
pub const AT_STATX_FORCE_SYNC: usize = 8192;
pub const AT_STATX_DONT_SYNC: usize = 16384;
pub const AT_RECURSIVE: usize = 32768;
pub const AT_EACCESS: usize = 512;
pub const _SYS_UIO_H: usize = 1;
pub const _BITS_UIO_LIM_H: usize = 1;
pub const _BITS_UIO_EXT_H: usize = 1;
pub const RWF_HIPRI: usize = 1;
pub const RWF_DSYNC: usize = 2;
pub const RWF_SYNC: usize = 4;
pub const RWF_NOWAIT: usize = 8;
pub const RWF_APPEND: usize = 16;
pub const _ERRNO_H: usize = 1;
pub const _BITS_ERRNO_H: usize = 1;
pub const EPERM: c_long = 1073741825;
pub const ENOENT: c_long = 1073741826;
pub const ESRCH: usize = 1073741827;
pub const EINTR: c_long = 1073741828;
pub const EIO: usize = 1073741829;
pub const ENXIO: usize = 1073741830;
pub const E2BIG: c_long = 1073741831;
pub const ENOEXEC: usize = 1073741832;
pub const EBADF: c_long = 1073741833;
pub const ECHILD: usize = 1073741834;
pub const EDEADLK: c_long = 1073741835;
pub const ENOMEM: c_long = 1073741836;
pub const EACCES: c_long = 1073741837;
pub const EFAULT: usize = 1073741838;
pub const ENOTBLK: usize = 1073741839;
pub const EBUSY: c_long = 1073741840;
pub const EEXIST: c_long = 1073741841;
pub const EXDEV: c_long = 1073741842;
pub const ENODEV: usize = 1073741843;
pub const ENOTDIR: c_long = 1073741844;
pub const EISDIR: c_long = 1073741845;
pub const EINVAL: c_long = 1073741846;
pub const EMFILE: usize = 1073741848;
pub const ENFILE: usize = 1073741847;
pub const ENOTTY: usize = 1073741849;
pub const ETXTBSY: c_long = 1073741850;
pub const EFBIG: c_long = 1073741851;
pub const ENOSPC: c_long = 1073741852;
pub const ESPIPE: c_long = 1073741853;
pub const EROFS: c_long = 1073741854;
pub const EMLINK: c_long = 1073741855;
pub const EPIPE: c_long = 1073741856;
pub const EDOM: usize = 1073741857;
pub const ERANGE: c_long = 1073741858;
pub const EAGAIN: c_long = 1073741859;
pub const EWOULDBLOCK: c_long = 1073741859;
pub const EINPROGRESS: c_long = 1073741860;
pub const EALREADY: usize = 1073741861;
pub const ENOTSOCK: usize = 1073741862;
pub const EMSGSIZE: usize = 1073741864;
pub const EPROTOTYPE: usize = 1073741865;
pub const ENOPROTOOPT: usize = 1073741866;
pub const EPROTONOSUPPORT: usize = 1073741867;
pub const ESOCKTNOSUPPORT: usize = 1073741868;
pub const EOPNOTSUPP: usize = 1073741869;
pub const EPFNOSUPPORT: usize = 1073741870;
pub const EAFNOSUPPORT: usize = 1073741871;
pub const EADDRINUSE: c_long = 1073741872;
pub const EADDRNOTAVAIL: c_long = 1073741873;
pub const ENETDOWN: c_long = 1073741874;
pub const ENETUNREACH: c_long = 1073741875;
pub const ENETRESET: usize = 1073741876;
pub const ECONNABORTED: c_long = 1073741877;
pub const ECONNRESET: c_long = 1073741878;
pub const ENOBUFS: usize = 1073741879;
pub const EISCONN: usize = 1073741880;
pub const ENOTCONN: c_long = 1073741881;
pub const EDESTADDRREQ: usize = 1073741863;
pub const ESHUTDOWN: usize = 1073741882;
pub const ETOOMANYREFS: usize = 1073741883;
pub const ETIMEDOUT: c_long = 1073741884;
pub const ECONNREFUSED: c_long = 1073741885;
pub const ELOOP: c_long = 1073741886;
pub const ENAMETOOLONG: c_long = 1073741887;
pub const EHOSTDOWN: usize = 1073741888;
pub const EHOSTUNREACH: c_long = 1073741889;
pub const ENOTEMPTY: c_long = 1073741890;
pub const EPROCLIM: usize = 1073741891;
pub const EUSERS: usize = 1073741892;
pub const EDQUOT: c_long = 1073741893;
pub const ESTALE: c_long = 1073741894;
pub const EREMOTE: usize = 1073741895;
pub const EBADRPC: usize = 1073741896;
pub const ERPCMISMATCH: usize = 1073741897;
pub const EPROGUNAVAIL: usize = 1073741898;
pub const EPROGMISMATCH: usize = 1073741899;
pub const EPROCUNAVAIL: usize = 1073741900;
pub const ENOLCK: usize = 1073741901;
pub const EFTYPE: usize = 1073741903;
pub const EAUTH: usize = 1073741904;
pub const ENEEDAUTH: usize = 1073741905;
pub const ENOSYS: c_long = 1073741902;
pub const ELIBEXEC: usize = 1073741907;
pub const ENOTSUP: usize = 1073741942;
pub const EILSEQ: usize = 1073741930;
pub const EBACKGROUND: usize = 1073741924;
pub const EDIED: usize = 1073741925;
pub const EGREGIOUS: usize = 1073741927;
pub const EIEIO: usize = 1073741928;
pub const EGRATUITOUS: usize = 1073741929;
pub const EBADMSG: usize = 1073741931;
pub const EIDRM: usize = 1073741932;
pub const EMULTIHOP: usize = 1073741933;
pub const ENODATA: usize = 1073741934;
pub const ENOLINK: usize = 1073741935;
pub const ENOMSG: usize = 1073741936;
pub const ENOSR: usize = 1073741937;
pub const ENOSTR: usize = 1073741938;
pub const EOVERFLOW: usize = 1073741939;
pub const EPROTO: usize = 1073741940;
pub const ETIME: usize = 1073741941;
pub const ECANCELED: usize = 1073741943;
pub const EOWNERDEAD: usize = 1073741944;
pub const ENOTRECOVERABLE: usize = 1073741945;
pub const EMACH_SEND_IN_PROGRESS: usize = 268435457;
pub const EMACH_SEND_INVALID_DATA: usize = 268435458;
pub const EMACH_SEND_INVALID_DEST: usize = 268435459;
pub const EMACH_SEND_TIMED_OUT: usize = 268435460;
pub const EMACH_SEND_WILL_NOTIFY: usize = 268435461;
pub const EMACH_SEND_NOTIFY_IN_PROGRESS: usize = 268435462;
pub const EMACH_SEND_INTERRUPTED: usize = 268435463;
pub const EMACH_SEND_MSG_TOO_SMALL: usize = 268435464;
pub const EMACH_SEND_INVALID_REPLY: usize = 268435465;
pub const EMACH_SEND_INVALID_RIGHT: usize = 268435466;
pub const EMACH_SEND_INVALID_NOTIFY: usize = 268435467;
pub const EMACH_SEND_INVALID_MEMORY: usize = 268435468;
pub const EMACH_SEND_NO_BUFFER: usize = 268435469;
pub const EMACH_SEND_NO_NOTIFY: usize = 268435470;
pub const EMACH_SEND_INVALID_TYPE: usize = 268435471;
pub const EMACH_SEND_INVALID_HEADER: usize = 268435472;
pub const EMACH_RCV_IN_PROGRESS: usize = 268451841;
pub const EMACH_RCV_INVALID_NAME: usize = 268451842;
pub const EMACH_RCV_TIMED_OUT: usize = 268451843;
pub const EMACH_RCV_TOO_LARGE: usize = 268451844;
pub const EMACH_RCV_INTERRUPTED: usize = 268451845;
pub const EMACH_RCV_PORT_CHANGED: usize = 268451846;
pub const EMACH_RCV_INVALID_NOTIFY: usize = 268451847;
pub const EMACH_RCV_INVALID_DATA: usize = 268451848;
pub const EMACH_RCV_PORT_DIED: usize = 268451849;
pub const EMACH_RCV_IN_SET: usize = 268451850;
pub const EMACH_RCV_HEADER_ERROR: usize = 268451851;
pub const EMACH_RCV_BODY_ERROR: usize = 268451852;
pub const EKERN_INVALID_ADDRESS: usize = 1;
pub const EKERN_PROTECTION_FAILURE: usize = 2;
pub const EKERN_NO_SPACE: usize = 3;
pub const EKERN_INVALID_ARGUMENT: usize = 4;
pub const EKERN_FAILURE: usize = 5;
pub const EKERN_RESOURCE_SHORTAGE: usize = 6;
pub const EKERN_NOT_RECEIVER: usize = 7;
pub const EKERN_NO_ACCESS: usize = 8;
pub const EKERN_MEMORY_FAILURE: usize = 9;
pub const EKERN_MEMORY_ERROR: usize = 10;
pub const EKERN_NOT_IN_SET: usize = 12;
pub const EKERN_NAME_EXISTS: usize = 13;
pub const EKERN_ABORTED: usize = 14;
pub const EKERN_INVALID_NAME: usize = 15;
pub const EKERN_INVALID_TASK: usize = 16;
pub const EKERN_INVALID_RIGHT: usize = 17;
pub const EKERN_INVALID_VALUE: usize = 18;
pub const EKERN_UREFS_OVERFLOW: usize = 19;
pub const EKERN_INVALID_CAPABILITY: usize = 20;
pub const EKERN_RIGHT_EXISTS: usize = 21;
pub const EKERN_INVALID_HOST: usize = 22;
pub const EKERN_MEMORY_PRESENT: usize = 23;
pub const EKERN_WRITE_PROTECTION_FAILURE: usize = 24;
pub const EKERN_TERMINATED: usize = 26;
pub const EKERN_TIMEDOUT: usize = 27;
pub const EKERN_INTERRUPTED: usize = 28;
pub const EMIG_TYPE_ERROR: i32 = -300;
pub const EMIG_REPLY_MISMATCH: i32 = -301;
pub const EMIG_REMOTE_ERROR: i32 = -302;
pub const EMIG_BAD_ID: i32 = -303;
pub const EMIG_BAD_ARGUMENTS: i32 = -304;
pub const EMIG_NO_REPLY: i32 = -305;
pub const EMIG_EXCEPTION: i32 = -306;
pub const EMIG_ARRAY_TOO_LARGE: i32 = -307;
pub const EMIG_SERVER_DIED: i32 = -308;
pub const EMIG_DESTROY_REQUEST: i32 = -309;
pub const ED_IO_ERROR: usize = 2500;
pub const ED_WOULD_BLOCK: usize = 2501;
pub const ED_NO_SUCH_DEVICE: usize = 2502;
pub const ED_ALREADY_OPEN: usize = 2503;
pub const ED_DEVICE_DOWN: usize = 2504;
pub const ED_INVALID_OPERATION: usize = 2505;
pub const ED_INVALID_RECNUM: usize = 2506;
pub const ED_INVALID_SIZE: usize = 2507;
pub const ED_NO_MEMORY: usize = 2508;
pub const ED_READ_ONLY: usize = 2509;
pub const _HURD_ERRNOS: usize = 122;
pub const __error_t_defined: usize = 1;
pub const _PTHREAD_H: usize = 1;
pub const _SCHED_H: usize = 1;
pub const _BITS_SCHED_H: usize = 1;
pub const SCHED_OTHER: usize = 0;
pub const SCHED_FIFO: usize = 1;
pub const SCHED_RR: usize = 2;
pub const _BITS_TYPES_STRUCT_SCHED_PARAM: usize = 1;
pub const _BITS_CPU_SET_H: usize = 1;
pub const __CPU_SETSIZE: usize = 1024;
pub const CPU_SETSIZE: usize = 1024;
pub const PTHREAD_SPINLOCK_INITIALIZER: usize = 0;
pub const _BITS_CANCELATION_H: usize = 1;
pub const PTHREAD_CANCEL_DISABLE: usize = 0;
pub const PTHREAD_CANCEL_ENABLE: usize = 1;
pub const PTHREAD_CANCEL_DEFERRED: usize = 0;
pub const PTHREAD_CANCEL_ASYNCHRONOUS: usize = 1;
pub const PTHREAD_BARRIER_SERIAL_THREAD: i32 = -1;
pub const _BITS_PTHREAD_NP_H: usize = 1;
pub const _NETINET_TCP_H: usize = 1;
pub const TCP_NODELAY: c_long = 1;
pub const TCP_MAXSEG: usize = 2;
pub const TCP_CORK: usize = 3;
pub const TCP_KEEPIDLE: usize = 4;
pub const TCP_KEEPINTVL: usize = 5;
pub const TCP_KEEPCNT: usize = 6;
pub const TCP_SYNCNT: usize = 7;
pub const TCP_LINGER2: usize = 8;
pub const TCP_DEFER_ACCEPT: usize = 9;
pub const TCP_WINDOW_CLAMP: usize = 10;
pub const TCP_INFO: usize = 11;
pub const TCP_QUICKACK: usize = 12;
pub const TCP_CONGESTION: usize = 13;
pub const TCP_MD5SIG: usize = 14;
pub const TCP_COOKIE_TRANSACTIONS: usize = 15;
pub const TCP_THIN_LINEAR_TIMEOUTS: usize = 16;
pub const TCP_THIN_DUPACK: usize = 17;
pub const TCP_USER_TIMEOUT: usize = 18;
pub const TCP_REPAIR: usize = 19;
pub const TCP_REPAIR_QUEUE: usize = 20;
pub const TCP_QUEUE_SEQ: usize = 21;
pub const TCP_REPAIR_OPTIONS: usize = 22;
pub const TCP_FASTOPEN: usize = 23;
pub const TCP_TIMESTAMP: usize = 24;
pub const TCP_NOTSENT_LOWAT: usize = 25;
pub const TCP_CC_INFO: usize = 26;
pub const TCP_SAVE_SYN: usize = 27;
pub const TCP_SAVED_SYN: usize = 28;
pub const TCP_REPAIR_WINDOW: usize = 29;
pub const TCP_FASTOPEN_CONNECT: usize = 30;
pub const TCP_ULP: usize = 31;
pub const TCP_MD5SIG_EXT: usize = 32;
pub const TCP_FASTOPEN_KEY: usize = 33;
pub const TCP_FASTOPEN_NO_COOKIE: usize = 34;
pub const TCP_ZEROCOPY_RECEIVE: usize = 35;
pub const TCP_INQ: usize = 36;
pub const TCP_CM_INQ: usize = 36;
pub const TCP_TX_DELAY: usize = 37;
pub const TCP_REPAIR_ON: usize = 1;
pub const TCP_REPAIR_OFF: usize = 0;
pub const TCP_REPAIR_OFF_NO_WP: i32 = -1;
pub const _STDINT_H: usize = 1;
pub const _BITS_WCHAR_H: usize = 1;
pub const INT8_MIN: i32 = -128;
pub const INT16_MIN: i32 = -32768;
pub const INT32_MIN: i32 = -2147483648;
pub const INT8_MAX: usize = 127;
pub const INT16_MAX: usize = 32767;
pub const INT32_MAX: usize = 2147483647;
pub const UINT8_MAX: usize = 255;
pub const UINT16_MAX: usize = 65535;
pub const UINT32_MAX: usize = 4294967295;
pub const INT_LEAST8_MIN: i32 = -128;
pub const INT_LEAST16_MIN: i32 = -32768;
pub const INT_LEAST32_MIN: i32 = -2147483648;
pub const INT_LEAST8_MAX: usize = 127;
pub const INT_LEAST16_MAX: usize = 32767;
pub const INT_LEAST32_MAX: usize = 2147483647;
pub const UINT_LEAST8_MAX: usize = 255;
pub const UINT_LEAST16_MAX: usize = 65535;
pub const UINT_LEAST32_MAX: usize = 4294967295;
pub const INT_FAST8_MIN: i32 = -128;
pub const INT_FAST16_MIN: i32 = -2147483648;
pub const INT_FAST32_MIN: i32 = -2147483648;
pub const INT_FAST8_MAX: usize = 127;
pub const INT_FAST16_MAX: usize = 2147483647;
pub const INT_FAST32_MAX: usize = 2147483647;
pub const UINT_FAST8_MAX: usize = 255;
pub const UINT_FAST16_MAX: usize = 4294967295;
pub const UINT_FAST32_MAX: usize = 4294967295;
pub const INTPTR_MIN: i32 = -2147483648;
pub const INTPTR_MAX: usize = 2147483647;
pub const UINTPTR_MAX: usize = 4294967295;
pub const PTRDIFF_MIN: i32 = -2147483648;
pub const PTRDIFF_MAX: usize = 2147483647;
pub const SIG_ATOMIC_MIN: i32 = -2147483648;
pub const SIG_ATOMIC_MAX: usize = 2147483647;
pub const SIZE_MAX: usize = 4294967295;
pub const WINT_MIN: usize = 0;
pub const WINT_MAX: usize = 4294967295;
pub const INT8_WIDTH: usize = 8;
pub const UINT8_WIDTH: usize = 8;
pub const INT16_WIDTH: usize = 16;
pub const UINT16_WIDTH: usize = 16;
pub const INT32_WIDTH: usize = 32;
pub const UINT32_WIDTH: usize = 32;
pub const INT64_WIDTH: usize = 64;
pub const UINT64_WIDTH: usize = 64;
pub const INT_LEAST8_WIDTH: usize = 8;
pub const UINT_LEAST8_WIDTH: usize = 8;
pub const INT_LEAST16_WIDTH: usize = 16;
pub const UINT_LEAST16_WIDTH: usize = 16;
pub const INT_LEAST32_WIDTH: usize = 32;
pub const UINT_LEAST32_WIDTH: usize = 32;
pub const INT_LEAST64_WIDTH: usize = 64;
pub const UINT_LEAST64_WIDTH: usize = 64;
pub const INT_FAST8_WIDTH: usize = 8;
pub const UINT_FAST8_WIDTH: usize = 8;
pub const INT_FAST16_WIDTH: usize = 32;
pub const UINT_FAST16_WIDTH: usize = 32;
pub const INT_FAST32_WIDTH: usize = 32;
pub const UINT_FAST32_WIDTH: usize = 32;
pub const INT_FAST64_WIDTH: usize = 64;
pub const UINT_FAST64_WIDTH: usize = 64;
pub const INTPTR_WIDTH: usize = 32;
pub const UINTPTR_WIDTH: usize = 32;
pub const INTMAX_WIDTH: usize = 64;
pub const UINTMAX_WIDTH: usize = 64;
pub const PTRDIFF_WIDTH: usize = 32;
pub const SIG_ATOMIC_WIDTH: usize = 32;
pub const SIZE_WIDTH: usize = 32;
pub const WCHAR_WIDTH: usize = 32;
pub const WINT_WIDTH: usize = 32;
pub const TH_FIN: usize = 1;
pub const TH_SYN: usize = 2;
pub const TH_RST: usize = 4;
pub const TH_PUSH: usize = 8;
pub const TH_ACK: usize = 16;
pub const TH_URG: usize = 32;
pub const TCPOPT_EOL: usize = 0;
pub const TCPOPT_NOP: usize = 1;
pub const TCPOPT_MAXSEG: usize = 2;
pub const TCPOLEN_MAXSEG: usize = 4;
pub const TCPOPT_WINDOW: usize = 3;
pub const TCPOLEN_WINDOW: usize = 3;
pub const TCPOPT_SACK_PERMITTED: usize = 4;
pub const TCPOLEN_SACK_PERMITTED: usize = 2;
pub const TCPOPT_SACK: usize = 5;
pub const TCPOPT_TIMESTAMP: usize = 8;
pub const TCPOLEN_TIMESTAMP: usize = 10;
pub const TCPOLEN_TSTAMP_APPA: usize = 12;
pub const TCPOPT_TSTAMP_HDR: usize = 16844810;
pub const TCP_MSS: usize = 512;
pub const TCP_MAXWIN: usize = 65535;
pub const TCP_MAX_WINSHIFT: usize = 14;
pub const SOL_TCP: usize = 6;
pub const TCPI_OPT_TIMESTAMPS: usize = 1;
pub const TCPI_OPT_SACK: usize = 2;
pub const TCPI_OPT_WSCALE: usize = 4;
pub const TCPI_OPT_ECN: usize = 8;
pub const TCPI_OPT_ECN_SEEN: usize = 16;
pub const TCPI_OPT_SYN_DATA: usize = 32;
pub const TCP_MD5SIG_MAXKEYLEN: usize = 80;
pub const TCP_MD5SIG_FLAG_PREFIX: usize = 1;
pub const TCP_COOKIE_MIN: usize = 8;
pub const TCP_COOKIE_MAX: usize = 16;
pub const TCP_COOKIE_PAIR_SIZE: usize = 32;
pub const TCP_COOKIE_IN_ALWAYS: usize = 1;
pub const TCP_COOKIE_OUT_NEVER: usize = 2;
pub const TCP_S_DATA_IN: usize = 4;
pub const TCP_S_DATA_OUT: usize = 8;
pub const TCP_MSS_DEFAULT: usize = 536;
pub const TCP_MSS_DESIRED: usize = 1220;
pub const _SYS_WAIT_H: usize = 1;
pub const WCOREFLAG: usize = 128;
pub const WAIT_ANY: i32 = -1;
pub const WAIT_MYPGRP: usize = 0;

pub const _PC_LINK_MAX: ::c_uint = 0;
pub const _PC_MAX_CANON: ::c_uint = 1;
pub const _PC_MAX_INPUT: ::c_uint = 2;
pub const _PC_NAME_MAX: ::c_uint = 3;
pub const _PC_PATH_MAX: ::c_uint = 4;
pub const _PC_PIPE_BUF: ::c_uint = 5;
pub const _PC_CHOWN_RESTRICTED: ::c_uint = 6;
pub const _PC_NO_TRUNC: ::c_uint = 7;
pub const _PC_VDISABLE: ::c_uint = 8;
pub const _PC_SYNC_IO: ::c_uint = 9;
pub const _PC_ASYNC_IO: ::c_uint = 10;
pub const _PC_PRIO_IO: ::c_uint = 11;
pub const _PC_SOCK_MAXBUF: ::c_uint = 12;
pub const _PC_FILESIZEBITS: ::c_uint = 13;
pub const _PC_REC_INCR_XFER_SIZE: ::c_uint = 14;
pub const _PC_REC_MAX_XFER_SIZE: ::c_uint = 15;
pub const _PC_REC_MIN_XFER_SIZE: ::c_uint = 16;
pub const _PC_REC_XFER_ALIGN: ::c_uint = 17;
pub const _PC_ALLOC_SIZE_MIN: ::c_uint = 18;
pub const _PC_SYMLINK_MAX: ::c_uint = 19;
pub const _PC_2_SYMLINKS: ::c_uint = 20;
pub const _SC_ARG_MAX: ::c_uint = 0;
pub const _SC_CHILD_MAX: ::c_uint = 1;
pub const _SC_CLK_TCK: ::c_uint = 2;
pub const _SC_NGROUPS_MAX: ::c_uint = 3;
pub const _SC_OPEN_MAX: ::c_uint = 4;
pub const _SC_STREAM_MAX: ::c_uint = 5;
pub const _SC_TZNAME_MAX: ::c_uint = 6;
pub const _SC_JOB_CONTROL: ::c_uint = 7;
pub const _SC_SAVED_IDS: ::c_uint = 8;
pub const _SC_REALTIME_SIGNALS: ::c_uint = 9;
pub const _SC_PRIORITY_SCHEDULING: ::c_uint = 10;
pub const _SC_TIMERS: ::c_uint = 11;
pub const _SC_ASYNCHRONOUS_IO: ::c_uint = 12;
pub const _SC_PRIORITIZED_IO: ::c_uint = 13;
pub const _SC_SYNCHRONIZED_IO: ::c_uint = 14;
pub const _SC_FSYNC: ::c_uint = 15;
pub const _SC_MAPPED_FILES: ::c_uint = 16;
pub const _SC_MEMLOCK: ::c_uint = 17;
pub const _SC_MEMLOCK_RANGE: ::c_uint = 18;
pub const _SC_MEMORY_PROTECTION: ::c_uint = 19;
pub const _SC_MESSAGE_PASSING: ::c_uint = 20;
pub const _SC_SEMAPHORES: ::c_uint = 21;
pub const _SC_SHARED_MEMORY_OBJECTS: ::c_uint = 22;
pub const _SC_AIO_LISTIO_MAX: ::c_uint = 23;
pub const _SC_AIO_MAX: ::c_uint = 24;
pub const _SC_AIO_PRIO_DELTA_MAX: ::c_uint = 25;
pub const _SC_DELAYTIMER_MAX: ::c_uint = 26;
pub const _SC_MQ_OPEN_MAX: ::c_uint = 27;
pub const _SC_MQ_PRIO_MAX: ::c_uint = 28;
pub const _SC_VERSION: ::c_uint = 29;
pub const _SC_PAGESIZE: ::c_long = 30;
pub const _SC_RTSIG_MAX: ::c_uint = 31;
pub const _SC_SEM_NSEMS_MAX: ::c_uint = 32;
pub const _SC_SEM_VALUE_MAX: ::c_uint = 33;
pub const _SC_SIGQUEUE_MAX: ::c_uint = 34;
pub const _SC_TIMER_MAX: ::c_uint = 35;
pub const _SC_BC_BASE_MAX: ::c_uint = 36;
pub const _SC_BC_DIM_MAX: ::c_uint = 37;
pub const _SC_BC_SCALE_MAX: ::c_uint = 38;
pub const _SC_BC_STRING_MAX: ::c_uint = 39;
pub const _SC_COLL_WEIGHTS_MAX: ::c_uint = 40;
pub const _SC_EQUIV_CLASS_MAX: ::c_uint = 41;
pub const _SC_EXPR_NEST_MAX: ::c_uint = 42;
pub const _SC_LINE_MAX: ::c_uint = 43;
pub const _SC_RE_DUP_MAX: ::c_uint = 44;
pub const _SC_CHARCLASS_NAME_MAX: ::c_uint = 45;
pub const _SC_2_VERSION: ::c_uint = 46;
pub const _SC_2_C_BIND: ::c_uint = 47;
pub const _SC_2_C_DEV: ::c_uint = 48;
pub const _SC_2_FORT_DEV: ::c_uint = 49;
pub const _SC_2_FORT_RUN: ::c_uint = 50;
pub const _SC_2_SW_DEV: ::c_uint = 51;
pub const _SC_2_LOCALEDEF: ::c_uint = 52;
pub const _SC_PII: ::c_uint = 53;
pub const _SC_PII_XTI: ::c_uint = 54;
pub const _SC_PII_SOCKET: ::c_uint = 55;
pub const _SC_PII_INTERNET: ::c_uint = 56;
pub const _SC_PII_OSI: ::c_uint = 57;
pub const _SC_POLL: ::c_uint = 58;
pub const _SC_SELECT: ::c_uint = 59;
pub const _SC_UIO_MAXIOV: ::c_uint = 60;
pub const _SC_IOV_MAX: ::c_uint = 60;
pub const _SC_PII_INTERNET_STREAM: ::c_uint = 61;
pub const _SC_PII_INTERNET_DGRAM: ::c_uint = 62;
pub const _SC_PII_OSI_COTS: ::c_uint = 63;
pub const _SC_PII_OSI_CLTS: ::c_uint = 64;
pub const _SC_PII_OSI_M: ::c_uint = 65;
pub const _SC_T_IOV_MAX: ::c_uint = 66;
pub const _SC_THREADS: ::c_uint = 67;
pub const _SC_THREAD_SAFE_FUNCTIONS: ::c_uint = 68;
pub const _SC_GETGR_R_SIZE_MAX: ::c_uint = 69;
pub const _SC_GETPW_R_SIZE_MAX: ::c_long = 70;
pub const _SC_LOGIN_NAME_MAX: ::c_uint = 71;
pub const _SC_TTY_NAME_MAX: ::c_uint = 72;
pub const _SC_THREAD_DESTRUCTOR_ITERATIONS: ::c_uint = 73;
pub const _SC_THREAD_KEYS_MAX: ::c_uint = 74;
pub const _SC_THREAD_STACK_MIN: ::c_uint = 75;
pub const _SC_THREAD_THREADS_MAX: ::c_uint = 76;
pub const _SC_THREAD_ATTR_STACKADDR: ::c_uint = 77;
pub const _SC_THREAD_ATTR_STACKSIZE: ::c_uint = 78;
pub const _SC_THREAD_PRIORITY_SCHEDULING: ::c_uint = 79;
pub const _SC_THREAD_PRIO_INHERIT: ::c_uint = 80;
pub const _SC_THREAD_PRIO_PROTECT: ::c_uint = 81;
pub const _SC_THREAD_PROCESS_SHARED: ::c_uint = 82;
pub const _SC_NPROCESSORS_CONF: ::c_uint = 83;
pub const _SC_NPROCESSORS_ONLN: ::c_uint = 84;
pub const _SC_PHYS_PAGES: ::c_uint = 85;
pub const _SC_AVPHYS_PAGES: ::c_uint = 86;
pub const _SC_ATEXIT_MAX: ::c_uint = 87;
pub const _SC_PASS_MAX: ::c_uint = 88;
pub const _SC_XOPEN_VERSION: ::c_uint = 89;
pub const _SC_XOPEN_XCU_VERSION: ::c_uint = 90;
pub const _SC_XOPEN_UNIX: ::c_uint = 91;
pub const _SC_XOPEN_CRYPT: ::c_uint = 92;
pub const _SC_XOPEN_ENH_I18N: ::c_uint = 93;
pub const _SC_XOPEN_SHM: ::c_uint = 94;
pub const _SC_2_CHAR_TERM: ::c_uint = 95;
pub const _SC_2_C_VERSION: ::c_uint = 96;
pub const _SC_2_UPE: ::c_uint = 97;
pub const _SC_XOPEN_XPG2: ::c_uint = 98;
pub const _SC_XOPEN_XPG3: ::c_uint = 99;
pub const _SC_XOPEN_XPG4: ::c_uint = 100;
pub const _SC_CHAR_BIT: ::c_uint = 101;
pub const _SC_CHAR_MAX: ::c_uint = 102;
pub const _SC_CHAR_MIN: ::c_uint = 103;
pub const _SC_INT_MAX: ::c_uint = 104;
pub const _SC_INT_MIN: ::c_uint = 105;
pub const _SC_LONG_BIT: ::c_uint = 106;
pub const _SC_WORD_BIT: ::c_uint = 107;
pub const _SC_MB_LEN_MAX: ::c_uint = 108;
pub const _SC_NZERO: ::c_uint = 109;
pub const _SC_SSIZE_MAX: ::c_uint = 110;
pub const _SC_SCHAR_MAX: ::c_uint = 111;
pub const _SC_SCHAR_MIN: ::c_uint = 112;
pub const _SC_SHRT_MAX: ::c_uint = 113;
pub const _SC_SHRT_MIN: ::c_uint = 114;
pub const _SC_UCHAR_MAX: ::c_uint = 115;
pub const _SC_UINT_MAX: ::c_uint = 116;
pub const _SC_ULONG_MAX: ::c_uint = 117;
pub const _SC_USHRT_MAX: ::c_uint = 118;
pub const _SC_NL_ARGMAX: ::c_uint = 119;
pub const _SC_NL_LANGMAX: ::c_uint = 120;
pub const _SC_NL_MSGMAX: ::c_uint = 121;
pub const _SC_NL_NMAX: ::c_uint = 122;
pub const _SC_NL_SETMAX: ::c_uint = 123;
pub const _SC_NL_TEXTMAX: ::c_uint = 124;
pub const _SC_XBS5_ILP32_OFF32: ::c_uint = 125;
pub const _SC_XBS5_ILP32_OFFBIG: ::c_uint = 126;
pub const _SC_XBS5_LP64_OFF64: ::c_uint = 127;
pub const _SC_XBS5_LPBIG_OFFBIG: ::c_uint = 128;
pub const _SC_XOPEN_LEGACY: ::c_uint = 129;
pub const _SC_XOPEN_REALTIME: ::c_uint = 130;
pub const _SC_XOPEN_REALTIME_THREADS: ::c_uint = 131;
pub const _SC_ADVISORY_INFO: ::c_uint = 132;
pub const _SC_BARRIERS: ::c_uint = 133;
pub const _SC_BASE: ::c_uint = 134;
pub const _SC_C_LANG_SUPPORT: ::c_uint = 135;
pub const _SC_C_LANG_SUPPORT_R: ::c_uint = 136;
pub const _SC_CLOCK_SELECTION: ::c_uint = 137;
pub const _SC_CPUTIME: ::c_uint = 138;
pub const _SC_THREAD_CPUTIME: ::c_uint = 139;
pub const _SC_DEVICE_IO: ::c_uint = 140;
pub const _SC_DEVICE_SPECIFIC: ::c_uint = 141;
pub const _SC_DEVICE_SPECIFIC_R: ::c_uint = 142;
pub const _SC_FD_MGMT: ::c_uint = 143;
pub const _SC_FIFO: ::c_uint = 144;
pub const _SC_PIPE: ::c_uint = 145;
pub const _SC_FILE_ATTRIBUTES: ::c_uint = 146;
pub const _SC_FILE_LOCKING: ::c_uint = 147;
pub const _SC_FILE_SYSTEM: ::c_uint = 148;
pub const _SC_MONOTONIC_CLOCK: ::c_uint = 149;
pub const _SC_MULTI_PROCESS: ::c_uint = 150;
pub const _SC_SINGLE_PROCESS: ::c_uint = 151;
pub const _SC_NETWORKING: ::c_uint = 152;
pub const _SC_READER_WRITER_LOCKS: ::c_uint = 153;
pub const _SC_SPIN_LOCKS: ::c_uint = 154;
pub const _SC_REGEXP: ::c_uint = 155;
pub const _SC_REGEX_VERSION: ::c_uint = 156;
pub const _SC_SHELL: ::c_uint = 157;
pub const _SC_SIGNALS: ::c_uint = 158;
pub const _SC_SPAWN: ::c_uint = 159;
pub const _SC_SPORADIC_SERVER: ::c_uint = 160;
pub const _SC_THREAD_SPORADIC_SERVER: ::c_uint = 161;
pub const _SC_SYSTEM_DATABASE: ::c_uint = 162;
pub const _SC_SYSTEM_DATABASE_R: ::c_uint = 163;
pub const _SC_TIMEOUTS: ::c_uint = 164;
pub const _SC_TYPED_MEMORY_OBJECTS: ::c_uint = 165;
pub const _SC_USER_GROUPS: ::c_uint = 166;
pub const _SC_USER_GROUPS_R: ::c_uint = 167;
pub const _SC_2_PBS: ::c_uint = 168;
pub const _SC_2_PBS_ACCOUNTING: ::c_uint = 169;
pub const _SC_2_PBS_LOCATE: ::c_uint = 170;
pub const _SC_2_PBS_MESSAGE: ::c_uint = 171;
pub const _SC_2_PBS_TRACK: ::c_uint = 172;
pub const _SC_SYMLOOP_MAX: ::c_uint = 173;
pub const _SC_STREAMS: ::c_uint = 174;
pub const _SC_2_PBS_CHECKPOINT: ::c_uint = 175;
pub const _SC_V6_ILP32_OFF32: ::c_uint = 176;
pub const _SC_V6_ILP32_OFFBIG: ::c_uint = 177;
pub const _SC_V6_LP64_OFF64: ::c_uint = 178;
pub const _SC_V6_LPBIG_OFFBIG: ::c_uint = 179;
pub const _SC_HOST_NAME_MAX: ::c_uint = 180;
pub const _SC_TRACE: ::c_uint = 181;
pub const _SC_TRACE_EVENT_FILTER: ::c_uint = 182;
pub const _SC_TRACE_INHERIT: ::c_uint = 183;
pub const _SC_TRACE_LOG: ::c_uint = 184;
pub const _SC_LEVEL1_ICACHE_SIZE: ::c_uint = 185;
pub const _SC_LEVEL1_ICACHE_ASSOC: ::c_uint = 186;
pub const _SC_LEVEL1_ICACHE_LINESIZE: ::c_uint = 187;
pub const _SC_LEVEL1_DCACHE_SIZE: ::c_uint = 188;
pub const _SC_LEVEL1_DCACHE_ASSOC: ::c_uint = 189;
pub const _SC_LEVEL1_DCACHE_LINESIZE: ::c_uint = 190;
pub const _SC_LEVEL2_CACHE_SIZE: ::c_uint = 191;
pub const _SC_LEVEL2_CACHE_ASSOC: ::c_uint = 192;
pub const _SC_LEVEL2_CACHE_LINESIZE: ::c_uint = 193;
pub const _SC_LEVEL3_CACHE_SIZE: ::c_uint = 194;
pub const _SC_LEVEL3_CACHE_ASSOC: ::c_uint = 195;
pub const _SC_LEVEL3_CACHE_LINESIZE: ::c_uint = 196;
pub const _SC_LEVEL4_CACHE_SIZE: ::c_uint = 197;
pub const _SC_LEVEL4_CACHE_ASSOC: ::c_uint = 198;
pub const _SC_LEVEL4_CACHE_LINESIZE: ::c_uint = 199;
pub const _SC_IPV6: ::c_uint = 235;
pub const _SC_RAW_SOCKETS: ::c_uint = 236;
pub const _SC_V7_ILP32_OFF32: ::c_uint = 237;
pub const _SC_V7_ILP32_OFFBIG: ::c_uint = 238;
pub const _SC_V7_LP64_OFF64: ::c_uint = 239;
pub const _SC_V7_LPBIG_OFFBIG: ::c_uint = 240;
pub const _SC_SS_REPL_MAX: ::c_uint = 241;
pub const _SC_TRACE_EVENT_NAME_MAX: ::c_uint = 242;
pub const _SC_TRACE_NAME_MAX: ::c_uint = 243;
pub const _SC_TRACE_SYS_MAX: ::c_uint = 244;
pub const _SC_TRACE_USER_EVENT_MAX: ::c_uint = 245;
pub const _SC_XOPEN_STREAMS: ::c_uint = 246;
pub const _SC_THREAD_ROBUST_PRIO_INHERIT: ::c_uint = 247;
pub const _SC_THREAD_ROBUST_PRIO_PROTECT: ::c_uint = 248;
pub const _SC_MINSIGSTKSZ: ::c_uint = 249;
pub const _SC_SIGSTKSZ: ::c_uint = 250;

pub const _CS_PATH: ::c_uint = 0;
pub const _CS_V6_WIDTH_RESTRICTED_ENVS: ::c_uint = 1;
pub const _CS_GNU_LIBC_VERSION: ::c_uint = 2;
pub const _CS_GNU_LIBPTHREAD_VERSION: ::c_uint = 3;
pub const _CS_V5_WIDTH_RESTRICTED_ENVS: ::c_uint = 4;
pub const _CS_V7_WIDTH_RESTRICTED_ENVS: ::c_uint = 5;
pub const _CS_LFS_CFLAGS: ::c_uint = 1000;
pub const _CS_LFS_LDFLAGS: ::c_uint = 1001;
pub const _CS_LFS_LIBS: ::c_uint = 1002;
pub const _CS_LFS_LINTFLAGS: ::c_uint = 1003;
pub const _CS_LFS64_CFLAGS: ::c_uint = 1004;
pub const _CS_LFS64_LDFLAGS: ::c_uint = 1005;
pub const _CS_LFS64_LIBS: ::c_uint = 1006;
pub const _CS_LFS64_LINTFLAGS: ::c_uint = 1007;
pub const _CS_XBS5_ILP32_OFF32_CFLAGS: ::c_uint = 1100;
pub const _CS_XBS5_ILP32_OFF32_LDFLAGS: ::c_uint = 1101;
pub const _CS_XBS5_ILP32_OFF32_LIBS: ::c_uint = 1102;
pub const _CS_XBS5_ILP32_OFF32_LINTFLAGS: ::c_uint = 1103;
pub const _CS_XBS5_ILP32_OFFBIG_CFLAGS: ::c_uint = 1104;
pub const _CS_XBS5_ILP32_OFFBIG_LDFLAGS: ::c_uint = 1105;
pub const _CS_XBS5_ILP32_OFFBIG_LIBS: ::c_uint = 1106;
pub const _CS_XBS5_ILP32_OFFBIG_LINTFLAGS: ::c_uint = 1107;
pub const _CS_XBS5_LP64_OFF64_CFLAGS: ::c_uint = 1108;
pub const _CS_XBS5_LP64_OFF64_LDFLAGS: ::c_uint = 1109;
pub const _CS_XBS5_LP64_OFF64_LIBS: ::c_uint = 1110;
pub const _CS_XBS5_LP64_OFF64_LINTFLAGS: ::c_uint = 1111;
pub const _CS_XBS5_LPBIG_OFFBIG_CFLAGS: ::c_uint = 1112;
pub const _CS_XBS5_LPBIG_OFFBIG_LDFLAGS: ::c_uint = 1113;
pub const _CS_XBS5_LPBIG_OFFBIG_LIBS: ::c_uint = 1114;
pub const _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS: ::c_uint = 1115;
pub const _CS_POSIX_V6_ILP32_OFF32_CFLAGS: ::c_uint = 1116;
pub const _CS_POSIX_V6_ILP32_OFF32_LDFLAGS: ::c_uint = 1117;
pub const _CS_POSIX_V6_ILP32_OFF32_LIBS: ::c_uint = 1118;
pub const _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS: ::c_uint = 1119;
pub const _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS: ::c_uint = 1120;
pub const _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS: ::c_uint = 1121;
pub const _CS_POSIX_V6_ILP32_OFFBIG_LIBS: ::c_uint = 1122;
pub const _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS: ::c_uint = 1123;
pub const _CS_POSIX_V6_LP64_OFF64_CFLAGS: ::c_uint = 1124;
pub const _CS_POSIX_V6_LP64_OFF64_LDFLAGS: ::c_uint = 1125;
pub const _CS_POSIX_V6_LP64_OFF64_LIBS: ::c_uint = 1126;
pub const _CS_POSIX_V6_LP64_OFF64_LINTFLAGS: ::c_uint = 1127;
pub const _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS: ::c_uint = 1128;
pub const _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS: ::c_uint = 1129;
pub const _CS_POSIX_V6_LPBIG_OFFBIG_LIBS: ::c_uint = 1130;
pub const _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS: ::c_uint = 1131;
pub const _CS_POSIX_V7_ILP32_OFF32_CFLAGS: ::c_uint = 1132;
pub const _CS_POSIX_V7_ILP32_OFF32_LDFLAGS: ::c_uint = 1133;
pub const _CS_POSIX_V7_ILP32_OFF32_LIBS: ::c_uint = 1134;
pub const _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS: ::c_uint = 1135;
pub const _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS: ::c_uint = 1136;
pub const _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS: ::c_uint = 1137;
pub const _CS_POSIX_V7_ILP32_OFFBIG_LIBS: ::c_uint = 1138;
pub const _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS: ::c_uint = 1139;
pub const _CS_POSIX_V7_LP64_OFF64_CFLAGS: ::c_uint = 1140;
pub const _CS_POSIX_V7_LP64_OFF64_LDFLAGS: ::c_uint = 1141;
pub const _CS_POSIX_V7_LP64_OFF64_LIBS: ::c_uint = 1142;
pub const _CS_POSIX_V7_LP64_OFF64_LINTFLAGS: ::c_uint = 1143;
pub const _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS: ::c_uint = 1144;
pub const _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS: ::c_uint = 1145;
pub const _CS_POSIX_V7_LPBIG_OFFBIG_LIBS: ::c_uint = 1146;
pub const _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS: ::c_uint = 1147;
pub const _CS_V6_ENV: ::c_uint = 1148;
pub const _CS_V7_ENV: ::c_uint = 1149;

pub const __pthread_process_shared___PTHREAD_PROCESS_PRIVATE: __pthread_process_shared = 0;
pub const __pthread_process_shared___PTHREAD_PROCESS_SHARED: __pthread_process_shared = 1;

pub const __pthread_inheritsched___PTHREAD_EXPLICIT_SCHED: __pthread_inheritsched = 0;
pub const __pthread_inheritsched___PTHREAD_INHERIT_SCHED: __pthread_inheritsched = 1;

pub const __pthread_contentionscope___PTHREAD_SCOPE_SYSTEM: __pthread_contentionscope = 0;
pub const __pthread_contentionscope___PTHREAD_SCOPE_PROCESS: __pthread_contentionscope = 1;

pub const __pthread_detachstate___PTHREAD_CREATE_JOINABLE: __pthread_detachstate = 0;
pub const __pthread_detachstate___PTHREAD_CREATE_DETACHED: __pthread_detachstate = 1;

pub const __pthread_mutex_protocol___PTHREAD_PRIO_NONE: __pthread_mutex_protocol = 0;
pub const __pthread_mutex_protocol___PTHREAD_PRIO_INHERIT: __pthread_mutex_protocol = 1;
pub const __pthread_mutex_protocol___PTHREAD_PRIO_PROTECT: __pthread_mutex_protocol = 2;

pub const __pthread_mutex_type___PTHREAD_MUTEX_TIMED: __pthread_mutex_type = 0;
pub const __pthread_mutex_type___PTHREAD_MUTEX_ERRORCHECK: __pthread_mutex_type = 1;
pub const __pthread_mutex_type___PTHREAD_MUTEX_RECURSIVE: __pthread_mutex_type = 2;

pub const __pthread_mutex_robustness___PTHREAD_MUTEX_STALLED: __pthread_mutex_robustness = 0;
pub const __pthread_mutex_robustness___PTHREAD_MUTEX_ROBUST: __pthread_mutex_robustness = 256;

pub const __rlimit_resource_RLIMIT_CPU: __rlimit_resource = 0;
pub const __rlimit_resource_RLIMIT_FSIZE: __rlimit_resource = 1;
pub const __rlimit_resource_RLIMIT_DATA: __rlimit_resource = 2;
pub const __rlimit_resource_RLIMIT_STACK: __rlimit_resource = 3;
pub const __rlimit_resource_RLIMIT_CORE: __rlimit_resource = 4;
pub const __rlimit_resource_RLIMIT_RSS: __rlimit_resource = 5;
pub const __rlimit_resource_RLIMIT_MEMLOCK: __rlimit_resource = 6;
pub const __rlimit_resource_RLIMIT_NPROC: __rlimit_resource = 7;
pub const __rlimit_resource_RLIMIT_OFILE: __rlimit_resource = 8;
pub const __rlimit_resource_RLIMIT_NOFILE: __rlimit_resource = 8;
pub const __rlimit_resource_RLIMIT_SBSIZE: __rlimit_resource = 9;
pub const __rlimit_resource_RLIMIT_AS: __rlimit_resource = 10;
pub const __rlimit_resource_RLIMIT_VMEM: __rlimit_resource = 10;
pub const __rlimit_resource_RLIMIT_NLIMITS: __rlimit_resource = 11;
pub const __rlimit_resource_RLIM_NLIMITS: __rlimit_resource = 11;

pub const __rusage_who_RUSAGE_SELF: __rusage_who = 0;
pub const __rusage_who_RUSAGE_CHILDREN: __rusage_who = -1;

pub const __priority_which_PRIO_PROCESS: __priority_which = 0;
pub const __priority_which_PRIO_PGRP: __priority_which = 1;
pub const __priority_which_PRIO_USER: __priority_which = 2;

pub const SOCK_STREAM: ::c_long  = 1;
pub const SOCK_DGRAM: ::c_long  = 2;
pub const SOCK_RAW: ::c_uint  = 3;
pub const SOCK_RDM: ::c_uint   = 4;
pub const SOCK_SEQPACKET: ::c_uint   = 5;
pub const SOCK_CLOEXEC: c_long   = 4194304;
pub const SOCK_NONBLOCK: ::c_uint   = 2048;

pub const MSG_OOB: ::c_uint = 1;
pub const MSG_PEEK: c_long = 2;
pub const MSG_DONTROUTE: ::c_uint = 4;
pub const MSG_EOR: ::c_uint = 8;
pub const MSG_TRUNC: ::c_uint = 16;
pub const MSG_CTRUNC: ::c_uint = 32;
pub const MSG_WAITALL: ::c_uint = 64;
pub const MSG_DONTWAIT: ::c_uint = 128;
pub const MSG_NOSIGNAL: ::c_long = 1024;

pub const SCM_RIGHTS: ::c_uint = 1;
pub const SCM_TIMESTAMP: ::c_uint = 2;
pub const SCM_CREDS: ::c_uint = 3;

pub const SO_DEBUG: ::c_uint = 1;
pub const SO_ACCEPTCONN: ::c_uint = 2;
pub const SO_REUSEADDR: ::c_long = 4;
pub const SO_KEEPALIVE: ::c_uint = 8;
pub const SO_DONTROUTE: ::c_uint = 16;
pub const SO_BROADCAST: ::c_long = 32;
pub const SO_USELOOPBACK: ::c_uint = 64;
pub const SO_LINGER: c_long = 128;
pub const SO_OOBINLINE: ::c_uint = 256;
pub const SO_REUSEPORT: ::c_uint = 512;
pub const SO_SNDBUF: ::c_uint = 4097;
pub const SO_RCVBUF: ::c_uint = 4098;
pub const SO_SNDLOWAT: ::c_uint = 4099;
pub const SO_RCVLOWAT: ::c_uint = 4100;
pub const SO_SNDTIMEO: ::c_long = 4101;
pub const SO_RCVTIMEO: ::c_long = 4102;
pub const SO_ERROR: c_long = 4103;
pub const SO_STYLE: ::c_uint = 4104;
pub const SO_TYPE: ::c_uint = 4104;

pub const IPPROTO_IP: ::c_uint = 0;
pub const IPPROTO_ICMP: ::c_uint = 1;
pub const IPPROTO_IGMP: ::c_uint = 2;
pub const IPPROTO_IPIP: ::c_uint = 4;
pub const IPPROTO_TCP: ::c_uint = 6;
pub const IPPROTO_EGP: ::c_uint = 8;
pub const IPPROTO_PUP: ::c_uint = 12;
pub const IPPROTO_UDP: ::c_uint = 17;
pub const IPPROTO_IDP: ::c_uint = 22;
pub const IPPROTO_TP: ::c_uint = 29;
pub const IPPROTO_DCCP: ::c_uint = 33;
pub const IPPROTO_IPV6: ::c_uint = 41;
pub const IPPROTO_RSVP: ::c_uint = 46;
pub const IPPROTO_GRE: ::c_uint = 47;
pub const IPPROTO_ESP: ::c_uint = 50;
pub const IPPROTO_AH: ::c_uint = 51;
pub const IPPROTO_MTP: ::c_uint = 92;
pub const IPPROTO_BEETPH: ::c_uint = 94;
pub const IPPROTO_ENCAP: ::c_uint = 98;
pub const IPPROTO_PIM: ::c_uint = 103;
pub const IPPROTO_COMP: ::c_uint = 108;
pub const IPPROTO_L2TP: ::c_uint = 115;
pub const IPPROTO_SCTP: ::c_uint = 132;
pub const IPPROTO_UDPLITE: ::c_uint = 136;
pub const IPPROTO_MPLS: ::c_uint = 137;
pub const IPPROTO_ETHERNET: ::c_uint = 143;
pub const IPPROTO_RAW: ::c_uint = 255;
pub const IPPROTO_MPTCP: ::c_uint = 262;
pub const IPPROTO_MAX: ::c_uint = 263;

pub const IPPROTO_HOPOPTS: ::c_uint = 0;
pub const IPPROTO_ROUTING: ::c_uint = 43;
pub const IPPROTO_FRAGMENT: ::c_uint = 44;
pub const IPPROTO_ICMPV6: ::c_uint = 58;
pub const IPPROTO_NONE: ::c_uint = 59;
pub const IPPROTO_DSTOPTS: ::c_uint = 60;
pub const IPPROTO_MH: ::c_uint = 135;

pub const IPPORT_ECHO: ::c_uint = 7;
pub const IPPORT_DISCARD: ::c_uint = 9;
pub const IPPORT_SYSTAT: ::c_uint = 11;
pub const IPPORT_DAYTIME: ::c_uint = 13;
pub const IPPORT_NETSTAT: ::c_uint = 15;
pub const IPPORT_FTP: ::c_uint = 21;
pub const IPPORT_TELNET: ::c_uint = 23;
pub const IPPORT_SMTP: ::c_uint = 25;
pub const IPPORT_TIMESERVER: ::c_uint = 37;
pub const IPPORT_NAMESERVER: ::c_uint = 42;
pub const IPPORT_WHOIS: ::c_uint = 43;
pub const IPPORT_MTP: ::c_uint = 57;
pub const IPPORT_TFTP: ::c_uint = 69;
pub const IPPORT_RJE: ::c_uint = 77;
pub const IPPORT_FINGER: ::c_uint = 79;
pub const IPPORT_TTYLINK: ::c_uint = 87;
pub const IPPORT_SUPDUP: ::c_uint = 95;
pub const IPPORT_EXECSERVER: ::c_uint = 512;
pub const IPPORT_LOGINSERVER: ::c_uint = 513;
pub const IPPORT_CMDSERVER: ::c_uint = 514;
pub const IPPORT_EFSSERVER: ::c_uint = 520;
pub const IPPORT_BIFFUDP: ::c_uint = 512;
pub const IPPORT_WHOSERVER: ::c_uint = 513;
pub const IPPORT_ROUTESERVER: ::c_uint = 520;
// pub const IPPORT_RESERVED: ::c_uint = 1024;
pub const IPPORT_USERRESERVED: ::c_uint = 5000;

pub const DT_UNKNOWN: ::c_uint = 0;
pub const DT_FIFO: ::c_uint = 1;
pub const DT_CHR: ::c_uint = 2;
pub const DT_DIR: ::c_uint = 4;
pub const DT_BLK: ::c_uint = 6;
pub const DT_REG: ::c_uint = 8;
pub const DT_LNK: ::c_uint = 10;
pub const DT_SOCK: ::c_uint = 12;
pub const DT_WHT: ::c_uint = 14;

pub const ST_RDONLY: ::c_uint = 1;
pub const ST_NOSUID: ::c_uint = 2;
pub const ST_NOEXEC: ::c_uint = 8;
pub const ST_SYNCHRONOUS: ::c_uint = 16;
pub const ST_NOATIME: ::c_uint = 32;
pub const ST_RELATIME: ::c_uint = 64;

pub const RTLD_DI_LMID: ::c_uint = 1;
pub const RTLD_DI_LINKMAP: ::c_uint = 2;
pub const RTLD_DI_CONFIGADDR: ::c_uint = 3;
pub const RTLD_DI_SERINFO: ::c_uint = 4;
pub const RTLD_DI_SERINFOSIZE: ::c_uint = 5;
pub const RTLD_DI_ORIGIN: ::c_uint = 6;
pub const RTLD_DI_PROFILENAME: ::c_uint = 7;
pub const RTLD_DI_PROFILEOUT: ::c_uint = 8;
pub const RTLD_DI_TLS_MODID: ::c_uint = 9;
pub const RTLD_DI_TLS_DATA: ::c_uint = 10;
pub const RTLD_DI_PHDR: ::c_uint = 11;
pub const RTLD_DI_MAX: ::c_uint = 11;

pub const SI_ASYNCIO: ::c_int = -4;
pub const SI_MESGQ: ::c_int = -3;
pub const SI_TIMER: ::c_int = -2;
pub const SI_QUEUE: ::c_int = -1;
pub const SI_USER: ::c_int = 0;

pub const ILL_ILLOPC: ::c_uint = 1;
pub const ILL_ILLOPN: ::c_uint = 2;
pub const ILL_ILLADR: ::c_uint = 3;
pub const ILL_ILLTRP: ::c_uint = 4;
pub const ILL_PRVOPC: ::c_uint = 5;
pub const ILL_PRVREG: ::c_uint = 6;
pub const ILL_COPROC: ::c_uint = 7;
pub const ILL_BADSTK: ::c_uint = 8;

pub const FPE_INTDIV: ::c_uint = 1;
pub const FPE_INTOVF: ::c_uint = 2;
pub const FPE_FLTDIV: ::c_uint = 3;
pub const FPE_FLTOVF: ::c_uint = 4;
pub const FPE_FLTUND: ::c_uint = 5;
pub const FPE_FLTRES: ::c_uint = 6;
pub const FPE_FLTINV: ::c_uint = 7;
pub const FPE_FLTSUB: ::c_uint = 8;

pub const SEGV_MAPERR: ::c_uint = 1;
pub const SEGV_ACCERR: ::c_uint = 2;

pub const BUS_ADRALN: ::c_uint = 1;
pub const BUS_ADRERR: ::c_uint = 2;
pub const BUS_OBJERR: ::c_uint = 3;

pub const TRAP_BRKPT: ::c_uint = 1;
pub const TRAP_TRACE: ::c_uint = 2;

pub const CLD_EXITED: ::c_uint = 1;
pub const CLD_KILLED: ::c_uint = 2;
pub const CLD_DUMPED: ::c_uint = 3;
pub const CLD_TRAPPED: ::c_uint = 4;
pub const CLD_STOPPED: ::c_uint = 5;
pub const CLD_CONTINUED: ::c_uint = 6;

pub const POLL_IN: ::c_uint = 1;
pub const POLL_OUT: ::c_uint = 2;
pub const POLL_MSG: ::c_uint = 3;
pub const POLL_ERR: ::c_uint = 4;
pub const POLL_PRI: ::c_uint = 5;
pub const POLL_HUP: ::c_uint = 6;

pub const SIGEV_SIGNAL: ::c_uint = 0;
pub const SIGEV_NONE: ::c_uint = 1;
pub const SIGEV_THREAD: ::c_uint = 2;

pub const REG_GS: ::c_uint = 0;
pub const REG_FS: ::c_uint = 1;
pub const REG_ES: ::c_uint = 2;
pub const REG_DS: ::c_uint = 3;
pub const REG_EDI: ::c_uint = 4;
pub const REG_ESI: ::c_uint = 5;
pub const REG_EBP: ::c_uint = 6;
pub const REG_ESP: ::c_uint = 7;
pub const REG_EBX: ::c_uint = 8;
pub const REG_EDX: ::c_uint = 9;
pub const REG_ECX: ::c_uint = 10;
pub const REG_EAX: ::c_uint = 11;
pub const REG_TRAPNO: ::c_uint = 12;
pub const REG_ERR: ::c_uint = 13;
pub const REG_EIP: ::c_uint = 14;
pub const REG_CS: ::c_uint = 15;
pub const REG_EFL: ::c_uint = 16;
pub const REG_UESP: ::c_uint = 17;
pub const REG_SS: ::c_uint = 18;

pub const __ioctl_dir_IOC_VOID: __ioctl_dir = 0;
pub const __ioctl_dir_IOC_OUT: __ioctl_dir = 1;
pub const __ioctl_dir_IOC_IN: __ioctl_dir = 2;
pub const __ioctl_dir_IOC_INOUT: __ioctl_dir = 3;

pub const __ioctl_datum_IOC_8: __ioctl_datum = 0;
pub const __ioctl_datum_IOC_16: __ioctl_datum = 1;
pub const __ioctl_datum_IOC_32: __ioctl_datum = 2;
pub const __ioctl_datum_IOC_64: __ioctl_datum = 3;

pub const TCP_ESTABLISHED: ::c_uint = 1;
pub const TCP_SYN_SENT: ::c_uint = 2;
pub const TCP_SYN_RECV: ::c_uint = 3;
pub const TCP_FIN_WAIT1: ::c_uint = 4;
pub const TCP_FIN_WAIT2: ::c_uint = 5;
pub const TCP_TIME_WAIT: ::c_uint = 6;
pub const TCP_CLOSE: ::c_uint = 7;
pub const TCP_CLOSE_WAIT: ::c_uint = 8;
pub const TCP_LAST_ACK: ::c_uint = 9;
pub const TCP_LISTEN: ::c_uint = 10;
pub const TCP_CLOSING: ::c_uint = 11;

pub const tcp_ca_state_TCP_CA_Open: tcp_ca_state = 0;
pub const tcp_ca_state_TCP_CA_Disorder: tcp_ca_state = 1;
pub const tcp_ca_state_TCP_CA_CWR: tcp_ca_state = 2;
pub const tcp_ca_state_TCP_CA_Recovery: tcp_ca_state = 3;
pub const tcp_ca_state_TCP_CA_Loss: tcp_ca_state = 4;

pub const TCP_NO_QUEUE: ::c_uint = 0;
pub const TCP_RECV_QUEUE: ::c_uint = 1;
pub const TCP_SEND_QUEUE: ::c_uint = 2;
pub const TCP_QUEUES_NR: ::c_uint = 3;

pub const idtype_t_P_ALL: idtype_t = 0;
pub const idtype_t_P_PID: idtype_t = 1;
pub const idtype_t_P_PGID: idtype_t = 2;

pub const SS_ONSTACK: ::c_uint = 1;
pub const SS_DISABLE: ::c_uint = 4;

pub const SHUT_RD: ::c_int = 0;
pub const SHUT_WR: ::c_int = 1;
pub const SHUT_RDWR: ::c_int = 2;


// types
pub type DIR = __dirstream;
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

pub type in_addr_t = u32;

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
//pub type pthread_mutex_t = __pthread_mutex;
pub type pthread_condattr_t = __pthread_condattr;
//pub type pthread_cond_t = __pthread_cond;
pub type pthread_spinlock_t = __pthread_spinlock_t;
pub type pthread_rwlockattr_t = __pthread_rwlockattr;
//pub type pthread_rwlock_t = __pthread_rwlock;
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
pub type tcp_seq = usize;

pub type _bindgen_ty_26 = ::c_uint;

pub type tcp_ca_state = ::c_uint;

pub type _bindgen_ty_27 = ::c_uint;

pub type idtype_t = ::c_uint;
pub const RTLD_DEFAULT: *mut ::c_void = 0i64 as *mut ::c_void;
pub const FIOCLEX: usize = 26113;
pub type pthread_mutex_t = *mut ::c_void;
pub type pthread_cond_t = *mut ::c_void;
pub type pthread_rwlock_t = *mut ::c_void;
pub const PTHREAD_MUTEX_INITIALIZER: pthread_mutex_t = 0 as *mut _;
pub const PTHREAD_COND_INITIALIZER: pthread_cond_t = 0 as *mut _;
pub const PTHREAD_RWLOCK_INITIALIZER: pthread_rwlock_t = 0 as *mut _;

pub const PTHREAD_STACK_MIN: ::size_t = 0;

pub const FIONBIO: usize = 0x5421;