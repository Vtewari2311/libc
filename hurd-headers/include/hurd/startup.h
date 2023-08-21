#ifndef	_startup_user_
#define	_startup_user_

/* Module startup */

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

/* Routine startup_essential_task */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __startup_essential_task
(
	startup_t server,
	mach_port_t task,
	mach_port_t excpt,
	const_string_t name,
	mach_port_t credential
);

/* Routine startup_request_notification */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __startup_request_notification
(
	startup_t server,
	mach_port_t notify_port,
	mach_msg_type_name_t notify_portPoly,
	const_string_t name
);

/* Routine startup_reboot */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __startup_reboot
(
	startup_t server,
	mach_port_t refport,
	int reboot_code
);

/* Routine startup_procinit */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __startup_procinit
(
	startup_t server,
	process_t startup_proc,
	mach_port_t *startup_task,
	auth_t *auth,
	mach_port_t *host_priv,
	mach_port_t *device_master
);

/* Routine startup_authinit */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __startup_authinit
(
	startup_t server,
	mach_port_t auth,
	mach_msg_type_name_t authPoly,
	mach_port_t *proc
);


/* Module startup */

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

/* Routine startup_essential_task */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t startup_essential_task
(
	startup_t server,
	mach_port_t task,
	mach_port_t excpt,
	const_string_t name,
	mach_port_t credential
);

/* Routine startup_request_notification */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t startup_request_notification
(
	startup_t server,
	mach_port_t notify_port,
	mach_msg_type_name_t notify_portPoly,
	const_string_t name
);

/* Routine startup_reboot */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t startup_reboot
(
	startup_t server,
	mach_port_t refport,
	int reboot_code
);

/* Routine startup_procinit */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t startup_procinit
(
	startup_t server,
	process_t startup_proc,
	mach_port_t *startup_task,
	auth_t *auth,
	mach_port_t *host_priv,
	mach_port_t *device_master
);

/* Routine startup_authinit */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t startup_authinit
(
	startup_t server,
	mach_port_t auth,
	mach_msg_type_name_t authPoly,
	mach_port_t *proc
);

#endif	/* not defined(_startup_user_) */
