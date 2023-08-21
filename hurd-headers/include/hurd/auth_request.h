#ifndef	_auth_request_user_
#define	_auth_request_user_

/* Module auth_request */

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

/* SimpleRoutine auth_user_authenticate_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __auth_user_authenticate_request
(
	auth_t handle,
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly
);

/* SimpleRoutine auth_server_authenticate_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __auth_server_authenticate_request
(
	auth_t handle,
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly,
	mach_port_t newport,
	mach_msg_type_name_t newportPoly
);


/* Module auth_request */

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

/* SimpleRoutine auth_user_authenticate_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t auth_user_authenticate_request
(
	auth_t handle,
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly
);

/* SimpleRoutine auth_server_authenticate_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t auth_server_authenticate_request
(
	auth_t handle,
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly,
	mach_port_t newport,
	mach_msg_type_name_t newportPoly
);

#endif	/* not defined(_auth_request_user_) */
