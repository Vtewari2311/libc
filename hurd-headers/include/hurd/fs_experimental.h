#ifndef	_fs_experimental_user_
#define	_fs_experimental_user_

/* Module fs_experimental */

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

/* Routine file_exec_file_name */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __file_exec_file_name
(
	file_t exec_file,
	mach_port_t exec_task,
	int flags,
	const_string_t filename,
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


/* Module fs_experimental */

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

/* Routine file_exec_file_name */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t file_exec_file_name
(
	file_t exec_file,
	mach_port_t exec_task,
	int flags,
	const_string_t filename,
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

#endif	/* not defined(_fs_experimental_user_) */
