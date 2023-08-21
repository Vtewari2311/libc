#ifndef	_crash_user_
#define	_crash_user_

/* Module crash */

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

/* Routine crash_dump_task */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __crash_dump_task
(
	mach_port_t crashserver,
	mach_port_t task,
	file_t file,
	int signo,
	integer_t sigcode,
	int sigerror,
	natural_t exc,
	natural_t code,
	long_natural_t subcode,
	mach_port_t cttyid_port,
	mach_msg_type_name_t cttyid_portPoly
);


/* Module crash */

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

/* Routine crash_dump_task */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t crash_dump_task
(
	mach_port_t crashserver,
	mach_port_t task,
	file_t file,
	int signo,
	integer_t sigcode,
	int sigerror,
	natural_t exc,
	natural_t code,
	long_natural_t subcode,
	mach_port_t cttyid_port,
	mach_msg_type_name_t cttyid_portPoly
);

#endif	/* not defined(_crash_user_) */
