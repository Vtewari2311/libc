#ifndef	_fsys_user_
#define	_fsys_user_

/* Module fsys */

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

/* Routine fsys_startup */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __fsys_startup
(
	mach_port_t bootstrap,
	int openflags,
	mach_port_t control_port,
	mach_msg_type_name_t control_portPoly,
	mach_port_t *realnode
);

/* Routine fsys_goaway */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __fsys_goaway
(
	fsys_t fsys,
	int flags
);

/* Routine fsys_getroot */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __fsys_getroot
(
	fsys_t fsys,
	mach_port_t dotdot_node,
	mach_msg_type_name_t dotdot_nodePoly,
	const_idarray_t gen_uids,
	mach_msg_type_number_t gen_uidsCnt,
	const_idarray_t gen_gids,
	mach_msg_type_number_t gen_gidsCnt,
	int flags,
	retry_type *do_retry,
	string_t retry_name,
	mach_port_t *file
);

/* Routine fsys_getfile */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __fsys_getfile
(
	fsys_t fsys,
	const_idarray_t gen_uids,
	mach_msg_type_number_t gen_uidsCnt,
	const_idarray_t gen_gids,
	mach_msg_type_number_t gen_gidsCnt,
	const_data_t filehandle,
	mach_msg_type_number_t filehandleCnt,
	mach_port_t *file
);

/* Routine fsys_syncfs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __fsys_syncfs
(
	fsys_t fsys,
	int wait,
	int do_children
);

/* Routine fsys_set_options */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __fsys_set_options
(
	fsys_t fsys,
	const_data_t options,
	mach_msg_type_number_t optionsCnt,
	int do_children
);

/* Routine fsys_getpriv */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __fsys_getpriv
(
	fsys_t fsys,
	mach_port_t *host_priv,
	mach_port_t *device_master,
	mach_port_t *fstask
);

/* Routine fsys_init */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __fsys_init
(
	fsys_t fsys,
	mach_port_t proc_server,
	mach_msg_type_name_t proc_serverPoly,
	auth_t auth_handle
);

/* Routine fsys_forward */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __fsys_forward
(
	mach_port_t server,
	mach_port_t requestor,
	mach_msg_type_name_t requestorPoly,
	const_data_t argv,
	mach_msg_type_number_t argvCnt
);

/* Routine fsys_get_options */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __fsys_get_options
(
	fsys_t server,
	data_t *options,
	mach_msg_type_number_t *optionsCnt
);

/* Routine fsys_get_children */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __fsys_get_children
(
	fsys_t server,
	data_t *names,
	mach_msg_type_number_t *namesCnt,
	portarray_t *controls,
	mach_msg_type_number_t *controlsCnt
);

/* Routine fsys_get_source */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __fsys_get_source
(
	fsys_t server,
	string_t source
);


/* Module fsys */

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

/* Routine fsys_startup */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t fsys_startup
(
	mach_port_t bootstrap,
	int openflags,
	mach_port_t control_port,
	mach_msg_type_name_t control_portPoly,
	mach_port_t *realnode
);

/* Routine fsys_goaway */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t fsys_goaway
(
	fsys_t fsys,
	int flags
);

/* Routine fsys_getroot */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t fsys_getroot
(
	fsys_t fsys,
	mach_port_t dotdot_node,
	mach_msg_type_name_t dotdot_nodePoly,
	const_idarray_t gen_uids,
	mach_msg_type_number_t gen_uidsCnt,
	const_idarray_t gen_gids,
	mach_msg_type_number_t gen_gidsCnt,
	int flags,
	retry_type *do_retry,
	string_t retry_name,
	mach_port_t *file
);

/* Routine fsys_getfile */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t fsys_getfile
(
	fsys_t fsys,
	const_idarray_t gen_uids,
	mach_msg_type_number_t gen_uidsCnt,
	const_idarray_t gen_gids,
	mach_msg_type_number_t gen_gidsCnt,
	const_data_t filehandle,
	mach_msg_type_number_t filehandleCnt,
	mach_port_t *file
);

/* Routine fsys_syncfs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t fsys_syncfs
(
	fsys_t fsys,
	int wait,
	int do_children
);

/* Routine fsys_set_options */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t fsys_set_options
(
	fsys_t fsys,
	const_data_t options,
	mach_msg_type_number_t optionsCnt,
	int do_children
);

/* Routine fsys_getpriv */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t fsys_getpriv
(
	fsys_t fsys,
	mach_port_t *host_priv,
	mach_port_t *device_master,
	mach_port_t *fstask
);

/* Routine fsys_init */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t fsys_init
(
	fsys_t fsys,
	mach_port_t proc_server,
	mach_msg_type_name_t proc_serverPoly,
	auth_t auth_handle
);

/* Routine fsys_forward */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t fsys_forward
(
	mach_port_t server,
	mach_port_t requestor,
	mach_msg_type_name_t requestorPoly,
	const_data_t argv,
	mach_msg_type_number_t argvCnt
);

/* Routine fsys_get_options */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t fsys_get_options
(
	fsys_t server,
	data_t *options,
	mach_msg_type_number_t *optionsCnt
);

/* Routine fsys_get_children */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t fsys_get_children
(
	fsys_t server,
	data_t *names,
	mach_msg_type_number_t *namesCnt,
	portarray_t *controls,
	mach_msg_type_number_t *controlsCnt
);

/* Routine fsys_get_source */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t fsys_get_source
(
	fsys_t server,
	string_t source
);

#endif	/* not defined(_fsys_user_) */
