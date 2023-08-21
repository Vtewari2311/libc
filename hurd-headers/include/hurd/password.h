#ifndef	_password_user_
#define	_password_user_

/* Module password */

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

/* Routine password_check_user */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __password_check_user
(
	io_t server,
	uid_t user,
	const_string_t pw,
	mach_port_t *auth
);

/* Routine password_check_group */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __password_check_group
(
	io_t server,
	uid_t group,
	const_string_t pw,
	mach_port_t *auth
);


/* Module password */

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

/* Routine password_check_user */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t password_check_user
(
	io_t server,
	uid_t user,
	const_string_t pw,
	mach_port_t *auth
);

/* Routine password_check_group */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t password_check_group
(
	io_t server,
	uid_t group,
	const_string_t pw,
	mach_port_t *auth
);

#endif	/* not defined(_password_user_) */
