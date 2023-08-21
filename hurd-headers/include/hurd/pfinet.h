#ifndef	_pfinet_user_
#define	_pfinet_user_

/* Module pfinet */

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

/* Routine pfinet_siocgifconf */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __pfinet_siocgifconf
(
	io_t port,
	vm_size_t amount,
	data_t *buf,
	mach_msg_type_number_t *bufCnt
);

/* Routine pfinet_getroutes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __pfinet_getroutes
(
	io_t port,
	vm_size_t amount,
	data_t *routes,
	mach_msg_type_number_t *routesCnt
);


/* Module pfinet */

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

/* Routine pfinet_siocgifconf */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t pfinet_siocgifconf
(
	io_t port,
	vm_size_t amount,
	data_t *buf,
	mach_msg_type_number_t *bufCnt
);

/* Routine pfinet_getroutes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t pfinet_getroutes
(
	io_t port,
	vm_size_t amount,
	data_t *routes,
	mach_msg_type_number_t *routesCnt
);

#endif	/* not defined(_pfinet_user_) */
