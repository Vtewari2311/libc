#ifndef	_msg_request_user_
#define	_msg_request_user_

/* Module msg_request */

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

/* SimpleRoutine msg_sig_post_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __msg_sig_post_request
(
	mach_port_t process,
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	int signal,
	natural_t sigcode,
	mach_port_t refport
);

/* SimpleRoutine msg_sig_post_untraced_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __msg_sig_post_untraced_request
(
	mach_port_t process,
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	int signal,
	natural_t sigcode,
	mach_port_t refport
);


/* Module msg_request */

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

/* SimpleRoutine msg_sig_post_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t msg_sig_post_request
(
	mach_port_t process,
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	int signal,
	natural_t sigcode,
	mach_port_t refport
);

/* SimpleRoutine msg_sig_post_untraced_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t msg_sig_post_untraced_request
(
	mach_port_t process,
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	int signal,
	natural_t sigcode,
	mach_port_t refport
);

#endif	/* not defined(_msg_request_user_) */
