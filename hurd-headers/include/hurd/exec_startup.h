#ifndef	_exec_startup_user_
#define	_exec_startup_user_

/* Module exec_startup */

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

/* Routine exec_startup_get_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __exec_startup_get_info
(
	exec_startup_t bootstrap,
	vm_address_t *user_entry,
	vm_address_t *phdr_data,
	vm_size_t *phdr_size,
	vm_address_t *stack_base,
	vm_size_t *stack_size,
	int *flags,
	data_t *argv,
	mach_msg_type_number_t *argvCnt,
	data_t *envp,
	mach_msg_type_number_t *envpCnt,
	portarray_t *dtable,
	mach_msg_type_number_t *dtableCnt,
	portarray_t *portarray,
	mach_msg_type_number_t *portarrayCnt,
	intarray_t *intarray,
	mach_msg_type_number_t *intarrayCnt
);


/* Module exec_startup */

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

/* Routine exec_startup_get_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t exec_startup_get_info
(
	exec_startup_t bootstrap,
	vm_address_t *user_entry,
	vm_address_t *phdr_data,
	vm_size_t *phdr_size,
	vm_address_t *stack_base,
	vm_size_t *stack_size,
	int *flags,
	data_t *argv,
	mach_msg_type_number_t *argvCnt,
	data_t *envp,
	mach_msg_type_number_t *envpCnt,
	portarray_t *dtable,
	mach_msg_type_number_t *dtableCnt,
	portarray_t *portarray,
	mach_msg_type_number_t *portarrayCnt,
	intarray_t *intarray,
	mach_msg_type_number_t *intarrayCnt
);

#endif	/* not defined(_exec_startup_user_) */
