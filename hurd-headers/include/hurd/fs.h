#ifndef	_fs_user_
#define	_fs_user_

/* Module fs */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <device/device_types.h>
#include <device/net_status.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/statfs.h>
#include <sys/resource.h>
#include <sys/utsname.h>
#include <hurd/hurd_types.h>
#include <fcntl.h>

/* Routine file_exec */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_exec
(
	file_t exec_file,
	mach_port_t exec_task,
	int flags,
	const_data_t argv,
	mach_msg_type_number_t argvCnt,
	const_data_t envp,
	mach_msg_type_number_t envpCnt,
	const_portarray_t fdarray,
	mach_msg_type_name_t fdarrayPoly,
	mach_msg_type_number_t fdarrayCnt,
	const_portarray_t portarray,
	mach_msg_type_name_t portarrayPoly,
	mach_msg_type_number_t portarrayCnt,
	const_intarray_t intarray,
	mach_msg_type_number_t intarrayCnt,
	const_mach_port_name_array_t deallocnames,
	mach_msg_type_number_t deallocnamesCnt,
	const_mach_port_name_array_t destroynames,
	mach_msg_type_number_t destroynamesCnt
);

/* Routine file_chown */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_chown
(
	file_t chown_file,
	uid_t new_owner,
	gid_t new_group
);

/* Routine file_chauthor */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_chauthor
(
	file_t chauth_file,
	uid_t new_author
);

/* Routine file_chmod */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_chmod
(
	file_t chmod_file,
	mode_t new_mode
);

/* Routine file_chflags */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_chflags
(
	file_t chflags_file,
	int new_flags
);

/* Routine file_utimes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_utimes
(
	file_t utimes_file,
	time_value_t new_atime,
	time_value_t new_mtime
);

/* Routine file_set_size */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_set_size
(
	file_t trunc_file,
	__loff_t new_size
);

/* Routine file_lock */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_lock
(
	file_t lock_file,
	int flags
);

/* Routine file_lock_stat */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_lock_stat
(
	file_t lock_file,
	int *mystatus,
	int *otherstatus
);

/* Routine file_check_access */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_check_access
(
	file_t file,
	int *allowed
);

/* Routine file_notice_changes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_notice_changes
(
	file_t file,
	mach_port_t port,
	mach_msg_type_name_t portPoly
);

/* Routine file_getcontrol */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_getcontrol
(
	file_t file,
	mach_port_t *control
);

/* Routine file_statfs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_statfs
(
	file_t file,
	fsys_statfsbuf_t *info
);

/* Routine file_sync */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_sync
(
	file_t file,
	int wait,
	int omit_metadata
);

/* Routine file_syncfs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_syncfs
(
	file_t file,
	int wait,
	int do_children
);

/* Routine file_get_storage_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_get_storage_info
(
	file_t file,
	portarray_t *ports,
	mach_msg_type_number_t *portsCnt,
	intarray_t *ints,
	mach_msg_type_number_t *intsCnt,
	off_array_t *offsets,
	mach_msg_type_number_t *offsetsCnt,
	data_t *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine file_getlinknode */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_getlinknode
(
	file_t file,
	mach_port_t *linknode
);

/* Routine file_getfh */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_getfh
(
	file_t file,
	data_t *filehandle,
	mach_msg_type_number_t *filehandleCnt
);

/* Routine dir_lookup */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __dir_lookup
(
	file_t start_dir,
	const_string_t file_name,
	int flags,
	mode_t mode,
	retry_type *do_retry,
	string_t retry_name,
	mach_port_t *result
);

/* Routine dir_readdir */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __dir_readdir
(
	file_t dir,
	data_t *data,
	mach_msg_type_number_t *dataCnt,
	int entry,
	int nentries,
	vm_size_t bufsiz,
	int *amount
);

/* Routine dir_mkdir */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __dir_mkdir
(
	file_t directory,
	const_string_t name,
	mode_t mode
);

/* Routine dir_rmdir */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __dir_rmdir
(
	file_t directory,
	const_string_t name
);

/* Routine dir_unlink */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __dir_unlink
(
	file_t directory,
	const_string_t name
);

/* Routine dir_link */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __dir_link
(
	file_t dir,
	file_t file,
	const_string_t name,
	int excl
);

/* Routine dir_rename */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __dir_rename
(
	file_t olddirectory,
	const_string_t oldname,
	file_t newdirectory,
	const_string_t newname,
	int excl
);

/* Routine dir_mkfile */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __dir_mkfile
(
	file_t directory,
	int flags,
	mode_t mode,
	mach_port_t *newnode
);

/* Routine dir_notice_changes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __dir_notice_changes
(
	file_t directory,
	mach_port_t port,
	mach_msg_type_name_t portPoly
);

/* Routine file_set_translator */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_set_translator
(
	file_t file,
	int passive_flags,
	int active_flags,
	int oldtrans_flags,
	const_data_t passive,
	mach_msg_type_number_t passiveCnt,
	mach_port_t active,
	mach_msg_type_name_t activePoly
);

/* Routine file_get_translator */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_get_translator
(
	file_t file,
	data_t *translator,
	mach_msg_type_number_t *translatorCnt
);

/* Routine file_get_translator_cntl */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_get_translator_cntl
(
	file_t file,
	mach_port_t *translator_cntl
);

/* Routine file_get_fs_options */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_get_fs_options
(
	file_t file,
	data_t *options,
	mach_msg_type_number_t *optionsCnt
);

/* Routine file_reparent */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_reparent
(
	file_t file,
	mach_port_t parent,
	mach_port_t *new_file
);

/* Routine file_exec_paths */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_exec_paths
(
	file_t exec_file,
	mach_port_t exec_task,
	int flags,
	const_string_t path,
	const_string_t abspath,
	const_data_t argv,
	mach_msg_type_number_t argvCnt,
	const_data_t envp,
	mach_msg_type_number_t envpCnt,
	const_portarray_t fdarray,
	mach_msg_type_name_t fdarrayPoly,
	mach_msg_type_number_t fdarrayCnt,
	const_portarray_t portarray,
	mach_msg_type_name_t portarrayPoly,
	mach_msg_type_number_t portarrayCnt,
	const_intarray_t intarray,
	mach_msg_type_number_t intarrayCnt,
	const_mach_port_name_array_t deallocnames,
	mach_msg_type_number_t deallocnamesCnt,
	const_mach_port_name_array_t destroynames,
	mach_msg_type_number_t destroynamesCnt
);

/* Routine file_utimens */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_utimens
(
	file_t utimes_file,
	timespec_t new_atime,
	timespec_t new_mtime
);

/* Routine file_record_lock */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_record_lock
(
	file_t file,
	int cmd,
	flock_t *flock64,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly
);


/* Module fs */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <device/device_types.h>
#include <device/net_status.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/statfs.h>
#include <sys/resource.h>
#include <sys/utsname.h>
#include <hurd/hurd_types.h>
#include <fcntl.h>

/* Routine file_exec */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_exec
(
	file_t exec_file,
	mach_port_t exec_task,
	int flags,
	const_data_t argv,
	mach_msg_type_number_t argvCnt,
	const_data_t envp,
	mach_msg_type_number_t envpCnt,
	const_portarray_t fdarray,
	mach_msg_type_name_t fdarrayPoly,
	mach_msg_type_number_t fdarrayCnt,
	const_portarray_t portarray,
	mach_msg_type_name_t portarrayPoly,
	mach_msg_type_number_t portarrayCnt,
	const_intarray_t intarray,
	mach_msg_type_number_t intarrayCnt,
	const_mach_port_name_array_t deallocnames,
	mach_msg_type_number_t deallocnamesCnt,
	const_mach_port_name_array_t destroynames,
	mach_msg_type_number_t destroynamesCnt
);

/* Routine file_chown */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_chown
(
	file_t chown_file,
	uid_t new_owner,
	gid_t new_group
);

/* Routine file_chauthor */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_chauthor
(
	file_t chauth_file,
	uid_t new_author
);

/* Routine file_chmod */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_chmod
(
	file_t chmod_file,
	mode_t new_mode
);

/* Routine file_chflags */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_chflags
(
	file_t chflags_file,
	int new_flags
);

/* Routine file_utimes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_utimes
(
	file_t utimes_file,
	time_value_t new_atime,
	time_value_t new_mtime
);

/* Routine file_set_size */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_set_size
(
	file_t trunc_file,
	__loff_t new_size
);

/* Routine file_lock */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_lock
(
	file_t lock_file,
	int flags
);

/* Routine file_lock_stat */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_lock_stat
(
	file_t lock_file,
	int *mystatus,
	int *otherstatus
);

/* Routine file_check_access */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_check_access
(
	file_t file,
	int *allowed
);

/* Routine file_notice_changes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_notice_changes
(
	file_t file,
	mach_port_t port,
	mach_msg_type_name_t portPoly
);

/* Routine file_getcontrol */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_getcontrol
(
	file_t file,
	mach_port_t *control
);

/* Routine file_statfs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_statfs
(
	file_t file,
	fsys_statfsbuf_t *info
);

/* Routine file_sync */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_sync
(
	file_t file,
	int wait,
	int omit_metadata
);

/* Routine file_syncfs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_syncfs
(
	file_t file,
	int wait,
	int do_children
);

/* Routine file_get_storage_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_get_storage_info
(
	file_t file,
	portarray_t *ports,
	mach_msg_type_number_t *portsCnt,
	intarray_t *ints,
	mach_msg_type_number_t *intsCnt,
	off_array_t *offsets,
	mach_msg_type_number_t *offsetsCnt,
	data_t *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine file_getlinknode */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_getlinknode
(
	file_t file,
	mach_port_t *linknode
);

/* Routine file_getfh */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_getfh
(
	file_t file,
	data_t *filehandle,
	mach_msg_type_number_t *filehandleCnt
);

/* Routine dir_lookup */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t dir_lookup
(
	file_t start_dir,
	const_string_t file_name,
	int flags,
	mode_t mode,
	retry_type *do_retry,
	string_t retry_name,
	mach_port_t *result
);

/* Routine dir_readdir */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t dir_readdir
(
	file_t dir,
	data_t *data,
	mach_msg_type_number_t *dataCnt,
	int entry,
	int nentries,
	vm_size_t bufsiz,
	int *amount
);

/* Routine dir_mkdir */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t dir_mkdir
(
	file_t directory,
	const_string_t name,
	mode_t mode
);

/* Routine dir_rmdir */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t dir_rmdir
(
	file_t directory,
	const_string_t name
);

/* Routine dir_unlink */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t dir_unlink
(
	file_t directory,
	const_string_t name
);

/* Routine dir_link */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t dir_link
(
	file_t dir,
	file_t file,
	const_string_t name,
	int excl
);

/* Routine dir_rename */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t dir_rename
(
	file_t olddirectory,
	const_string_t oldname,
	file_t newdirectory,
	const_string_t newname,
	int excl
);

/* Routine dir_mkfile */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t dir_mkfile
(
	file_t directory,
	int flags,
	mode_t mode,
	mach_port_t *newnode
);

/* Routine dir_notice_changes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t dir_notice_changes
(
	file_t directory,
	mach_port_t port,
	mach_msg_type_name_t portPoly
);

/* Routine file_set_translator */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_set_translator
(
	file_t file,
	int passive_flags,
	int active_flags,
	int oldtrans_flags,
	const_data_t passive,
	mach_msg_type_number_t passiveCnt,
	mach_port_t active,
	mach_msg_type_name_t activePoly
);

/* Routine file_get_translator */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_get_translator
(
	file_t file,
	data_t *translator,
	mach_msg_type_number_t *translatorCnt
);

/* Routine file_get_translator_cntl */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_get_translator_cntl
(
	file_t file,
	mach_port_t *translator_cntl
);

/* Routine file_get_fs_options */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_get_fs_options
(
	file_t file,
	data_t *options,
	mach_msg_type_number_t *optionsCnt
);

/* Routine file_reparent */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_reparent
(
	file_t file,
	mach_port_t parent,
	mach_port_t *new_file
);

/* Routine file_exec_paths */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_exec_paths
(
	file_t exec_file,
	mach_port_t exec_task,
	int flags,
	const_string_t path,
	const_string_t abspath,
	const_data_t argv,
	mach_msg_type_number_t argvCnt,
	const_data_t envp,
	mach_msg_type_number_t envpCnt,
	const_portarray_t fdarray,
	mach_msg_type_name_t fdarrayPoly,
	mach_msg_type_number_t fdarrayCnt,
	const_portarray_t portarray,
	mach_msg_type_name_t portarrayPoly,
	mach_msg_type_number_t portarrayCnt,
	const_intarray_t intarray,
	mach_msg_type_number_t intarrayCnt,
	const_mach_port_name_array_t deallocnames,
	mach_msg_type_number_t deallocnamesCnt,
	const_mach_port_name_array_t destroynames,
	mach_msg_type_number_t destroynamesCnt
);

/* Routine file_utimens */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_utimens
(
	file_t utimes_file,
	timespec_t new_atime,
	timespec_t new_mtime
);

/* Routine file_record_lock */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_record_lock
(
	file_t file,
	int cmd,
	flock_t *flock64,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly
);

#endif	/* not defined(_fs_user_) */
