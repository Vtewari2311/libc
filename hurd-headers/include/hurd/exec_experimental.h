#ifndef	_exec_experimental_user_
#define	_exec_experimental_user_

/* Module exec_experimental */

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

/* Routine exec_exec_file_name */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __exec_exec_file_name
(
	file_t execserver,
	mach_port_t file,
	mach_msg_type_name_t filePoly,
	mach_port_t oldtask,
	int flags,
	const_string_t filename,
	const_data_t argv,
	mach_msg_type_number_t argvCnt,
	const_data_t envp,
	mach_msg_type_number_t envpCnt,
	const_portarray_t dtable,
	mach_msg_type_name_t dtablePoly,
	mach_msg_type_number_t dtableCnt,
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


/* Module exec_experimental */

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

/* Routine exec_exec_file_name */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t exec_exec_file_name
(
	file_t execserver,
	mach_port_t file,
	mach_msg_type_name_t filePoly,
	mach_port_t oldtask,
	int flags,
	const_string_t filename,
	const_data_t argv,
	mach_msg_type_number_t argvCnt,
	const_data_t envp,
	mach_msg_type_number_t envpCnt,
	const_portarray_t dtable,
	mach_msg_type_name_t dtablePoly,
	mach_msg_type_number_t dtableCnt,
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

#endif	/* not defined(_exec_experimental_user_) */
