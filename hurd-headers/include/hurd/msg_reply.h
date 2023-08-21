#ifndef	_msg_reply_user_
#define	_msg_reply_user_

/* Module msg_reply */

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

/* SimpleRoutine msg_sig_post_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __msg_sig_post_reply
(
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	kern_return_t return_code
);

/* SimpleRoutine msg_sig_post_untraced_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __msg_sig_post_untraced_reply
(
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	kern_return_t return_code
);


/* Module msg_reply */

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

/* SimpleRoutine msg_sig_post_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t msg_sig_post_reply
(
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	kern_return_t return_code
);

/* SimpleRoutine msg_sig_post_untraced_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t msg_sig_post_untraced_reply
(
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	kern_return_t return_code
);

#endif	/* not defined(_msg_reply_user_) */
