#ifndef	_interrupt_user_
#define	_interrupt_user_

/* Module interrupt */

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

/* Routine interrupt_operation */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __interrupt_operation
(
	interrupt_t object,
	natural_t timeout
);


/* Module interrupt */

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

/* Routine interrupt_operation */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t interrupt_operation
(
	interrupt_t object,
	natural_t timeout
);

#endif	/* not defined(_interrupt_user_) */
