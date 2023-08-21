#ifndef	_auth_user_
#define	_auth_user_

/* Module auth */

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

/* Routine auth_getids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __auth_getids
(
	auth_t handle,
	idarray_t *euids,
	mach_msg_type_number_t *euidsCnt,
	idarray_t *auids,
	mach_msg_type_number_t *auidsCnt,
	idarray_t *egids,
	mach_msg_type_number_t *egidsCnt,
	idarray_t *agids,
	mach_msg_type_number_t *agidsCnt
);

/* Routine auth_makeauth */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __auth_makeauth
(
	auth_t handle,
	const_portarray_t other_handles,
	mach_msg_type_name_t other_handlesPoly,
	mach_msg_type_number_t other_handlesCnt,
	const_idarray_t euids,
	mach_msg_type_number_t euidsCnt,
	const_idarray_t auids,
	mach_msg_type_number_t auidsCnt,
	const_idarray_t egids,
	mach_msg_type_number_t egidsCnt,
	const_idarray_t agids,
	mach_msg_type_number_t agidsCnt,
	mach_port_t *newhandle
);

/* Routine auth_user_authenticate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __auth_user_authenticate
(
	auth_t handle,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly,
	mach_port_t *newport
);

/* Routine auth_server_authenticate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __auth_server_authenticate
(
	auth_t handle,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly,
	mach_port_t newport,
	mach_msg_type_name_t newportPoly,
	idarray_t *euids,
	mach_msg_type_number_t *euidsCnt,
	idarray_t *auids,
	mach_msg_type_number_t *auidsCnt,
	idarray_t *egids,
	mach_msg_type_number_t *egidsCnt,
	idarray_t *agids,
	mach_msg_type_number_t *agidsCnt
);


/* Module auth */

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

/* Routine auth_getids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t auth_getids
(
	auth_t handle,
	idarray_t *euids,
	mach_msg_type_number_t *euidsCnt,
	idarray_t *auids,
	mach_msg_type_number_t *auidsCnt,
	idarray_t *egids,
	mach_msg_type_number_t *egidsCnt,
	idarray_t *agids,
	mach_msg_type_number_t *agidsCnt
);

/* Routine auth_makeauth */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t auth_makeauth
(
	auth_t handle,
	const_portarray_t other_handles,
	mach_msg_type_name_t other_handlesPoly,
	mach_msg_type_number_t other_handlesCnt,
	const_idarray_t euids,
	mach_msg_type_number_t euidsCnt,
	const_idarray_t auids,
	mach_msg_type_number_t auidsCnt,
	const_idarray_t egids,
	mach_msg_type_number_t egidsCnt,
	const_idarray_t agids,
	mach_msg_type_number_t agidsCnt,
	mach_port_t *newhandle
);

/* Routine auth_user_authenticate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t auth_user_authenticate
(
	auth_t handle,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly,
	mach_port_t *newport
);

/* Routine auth_server_authenticate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t auth_server_authenticate
(
	auth_t handle,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly,
	mach_port_t newport,
	mach_msg_type_name_t newportPoly,
	idarray_t *euids,
	mach_msg_type_number_t *euidsCnt,
	idarray_t *auids,
	mach_msg_type_number_t *auidsCnt,
	idarray_t *egids,
	mach_msg_type_number_t *egidsCnt,
	idarray_t *agids,
	mach_msg_type_number_t *agidsCnt
);

#endif	/* not defined(_auth_user_) */
