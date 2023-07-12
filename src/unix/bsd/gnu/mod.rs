pub type clock_t = ::c_long;
pub type ino_t = ::c_ulong;
pub type ino64_t = u64;
pub type off64_t = i64;
pub type nlink_t = ::c_uint;
pub type blksize_t = ::c_long;
pub type blkcnt64_t = i64;
pub type clockid_t = i32;
pub type sem_t = _sem;

pub type fsblkcnt_t = ::c_ulong;
pub type fsfilcnt_t = ::c_ulong;

pub type time_t = ::c_long;
pub type suseconds_t = ::c_long;
pub type fsid_t = u64;

s! {
    pub struct exit_status {
        pub e_termination: ::c_short,
        pub e_exit: ::c_short,
    }

    pub struct utmpx {
        pub ut_type: ::c_short,
        pub ut_pid: ::pid_t,
        pub ut_line: [::c_char; 32],
        pub ut_id: [::c_char; 4],
        pub ut_user: [::c_char; 32],
        pub ut_host: [::c_char; 256],
        pub ut_exit: ::exit_status,
        pub ut_session: ::c_long,
        pub ut_tv: ::timeval,
        pub ut_addr_v6: ::int32_t,
        pub __glibc_reserved: [::c_char; 20],
    }

    pub struct aiocb {
        pub aio_fildes: ::c_int,
        pub aio_lio_opcode: ::c_int,
        pub aio_reqprio: ::c_int,
        pub aio_buf: *mut ::c_void,
        pub aio_nbytes: ::size_t,
        pub aio_sigevent: sigevent,
        pub __next_prio: *mut aiocb,
        pub __abs_prio: ::c_int,
        pub __policy: ::c_int,
        pub __error_code: ::c_int,
        pub __return_value: ::ssize_t,
        pub aio_offset: ::off_t,
        #[cfg(all(not(target_arch = "x86_64"), target_pointer_width = "32"))]
        __pad: [::c_char; 4],
        __glibc_reserved: [::c_char; 32],
    }

    pub struct dirent {
        pub d_ino: ino_t,
        pub d_reclen: ::c_ushort,
        pub d_type: u8,
        pub d_namlen: u8,
        pub d_name: [::c_char; 256],
    }

    pub struct mq_attr {
        pub mq_flags: ::c_long,
        pub mq_maxmsg: ::c_long,
        pub mq_msgsize: ::c_long,
        pub mq_curmsgs: ::c_long,
    }

    pub struct sigevent {
        pub sigev_value: ::sigval,
        pub sigev_signo: ::c_int,
        pub sigev_notify: ::c_int,
        pub sigev_notify_function: *mut ::c_void,
        pub sigev_notify_attributes: *mut ::c_void,
    }

    pub struct stat {
        pub st_fstype: ::c_int,
        pub st_dev: u64,
        pub st_ino: ::ino_t,
        pub st_gen: ::c_uint,
        pub st_rdev: ::dev_t,
        pub st_mode: ::mode_t,
        pub st_nlink: ::nlink_t,
        pub st_uid: ::uid_t,
        pub st_gid: ::gid_t,
        pub st_size: ::off_t,
        pub st_atime: ::time_t,
        pub st_atime_nsec: ::c_ulong,
        pub st_mtime: ::time_t,
        pub st_mtime_nsec: ::c_ulong,
        pub st_ctime: ::time_t,
        pub st_ctime_nsec: ::c_ulong,
        pub st_blksize: ::blksize_t,
        pub st_blocks: ::blkcnt_t,
        pub st_author: ::uid_t,
        pub st_flags: ::c_uint,
        __st_spare: [u8; 11],
    }

    pub struct stat64 {
        pub st_fstype: ::c_int,
        pub st_dev: u64,
        pub st_ino: ::ino64_t,
        pub st_gen: ::c_uint,
        pub st_rdev: ::dev_t,
        pub st_mode: ::mode_t,
        pub st_nlink: ::nlink_t,
        pub st_uid: ::uid_t,
        pub st_gid: ::gid_t,
        pub st_size: ::off64_t,
        pub st_atime: ::time_t,
        pub st_atime_nsec: ::c_ulong,
        pub st_mtime: ::time_t,
        pub st_mtime_nsec: ::c_ulong,
        pub st_ctime: ::time_t,
        pub st_ctime_nsec: ::c_ulong,
        pub st_blksize: ::blksize_t,
        pub st_blocks: ::blkcnt64_t,
        pub st_author: ::uid_t,
        pub st_flags: ::c_uint,
        __st_spare: [u8; 8],
    }

    pub struct statvfs {
        pub __f_type: ::c_uint,
        pub f_bsize: ::c_ulong,
        pub f_blocks: ::fsblkcnt_t,
        pub f_bfree: ::fsblkcnt_t,
        pub f_bavail: ::fsblkcnt_t,
        pub f_files: ::fsfilcnt_t,
        pub f_ffree: ::fsfilcnt_t,
        pub f_fsid: ::fsid_t,
        pub f_namemax: ::c_ulong,
        pub f_favail: ::fsfilcnt_t,
        pub f_frsize: ::c_ulong,
        pub f_flag: ::c_ulong,
        pub f_spare: [::c_uint; 3],
    }

    pub struct _sem {
        __lock: ::c_int,
        __queue: *mut ::c_void,
        __pshared: ::c_int,
        __value: ::c_int,
        __data: *mut ::c_void,
    }
}

pub const O_CLOEXEC: ::c_int = 0x00400000;

pub const CLOCK_REALTIME: ::clockid_t = 0;
pub const CLOCK_MONOTONIC: ::clockid_t = 1;

extern {
    pub fn clock_gettime(clk_id: ::clockid_t, tp: *mut ::timespec) -> ::c_int;
}

cfg_if! {
    if #[cfg(target_arch = "x86")] {
        mod x86;
        pub use self::x86::*;
    } else {
        // Unknown target_arch
    }
}