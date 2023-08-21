#ifndef	_login_user_
#define	_login_user_

/* Module login */

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

/* Routine login_message_user */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __login_message_user
(
	file_t login,
	const_data_t message,
	mach_msg_type_number_t messageCnt
);

/* Routine login_get_location */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __login_get_location
(
	file_t login,
	data_t *location,
	mach_msg_type_number_t *locationCnt
);

/* Routine login_get_idle_time */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __login_get_idle_time
(
	file_t login,
	time_value_t *idletime
);

/* Routine login_get_input_devices */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __login_get_input_devices
(
	file_t login,
	data_t *devices,
	mach_msg_type_number_t *devicesCnt
);

/* Routine login_get_login_collection */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __login_get_login_collection
(
	file_t login,
	pid_t *id
);


/* Module login */

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

/* Routine login_message_user */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t login_message_user
(
	file_t login,
	const_data_t message,
	mach_msg_type_number_t messageCnt
);

/* Routine login_get_location */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t login_get_location
(
	file_t login,
	data_t *location,
	mach_msg_type_number_t *locationCnt
);

/* Routine login_get_idle_time */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t login_get_idle_time
(
	file_t login,
	time_value_t *idletime
);

/* Routine login_get_input_devices */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t login_get_input_devices
(
	file_t login,
	data_t *devices,
	mach_msg_type_number_t *devicesCnt
);

/* Routine login_get_login_collection */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t login_get_login_collection
(
	file_t login,
	pid_t *id
);

#endif	/* not defined(_login_user_) */
