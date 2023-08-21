#ifndef	_auth_reply_user_
#define	_auth_reply_user_

/* Module auth_reply */

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

/* SimpleRoutine auth_user_authenticate_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __auth_user_authenticate_reply
(
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	kern_return_t return_code,
	mach_port_t newhandle,
	mach_msg_type_name_t newhandlePoly
);

/* SimpleRoutine auth_server_authenticate_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __auth_server_authenticate_reply
(
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	kern_return_t return_code,
	const_idarray_t gen_uids,
	mach_msg_type_number_t gen_uidsCnt,
	const_idarray_t aux_uids,
	mach_msg_type_number_t aux_uidsCnt,
	const_idarray_t gen_gids,
	mach_msg_type_number_t gen_gidsCnt,
	const_idarray_t aux_gids,
	mach_msg_type_number_t aux_gidsCnt
);


/* Module auth_reply */

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

/* SimpleRoutine auth_user_authenticate_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t auth_user_authenticate_reply
(
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	kern_return_t return_code,
	mach_port_t newhandle,
	mach_msg_type_name_t newhandlePoly
);

/* SimpleRoutine auth_server_authenticate_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t auth_server_authenticate_reply
(
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	kern_return_t return_code,
	const_idarray_t gen_uids,
	mach_msg_type_number_t gen_uidsCnt,
	const_idarray_t aux_uids,
	mach_msg_type_number_t aux_uidsCnt,
	const_idarray_t gen_gids,
	mach_msg_type_number_t gen_gidsCnt,
	const_idarray_t aux_gids,
	mach_msg_type_number_t aux_gidsCnt
);

#endif	/* not defined(_auth_reply_user_) */
