#ifndef	_ifsock_user_
#define	_ifsock_user_

/* Module ifsock */

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

/* Routine ifsock_getsockaddr */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __ifsock_getsockaddr
(
	file_t file,
	mach_port_t *sockaddr
);


/* Module ifsock */

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

/* Routine ifsock_getsockaddr */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t ifsock_getsockaddr
(
	file_t file,
	mach_port_t *sockaddr
);

#endif	/* not defined(_ifsock_user_) */
