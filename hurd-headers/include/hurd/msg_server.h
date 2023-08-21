#ifndef	_msg_server_
#define	_msg_server_

/* Module msg */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/mig_errors.h>
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

/* Routine msg_sig_post */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_sig_post
(
	mach_port_t process,
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	int signal,
	natural_t sigcode,
	mach_port_t refport
);

/* Routine msg_proc_newids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_proc_newids
(
	mach_port_t process,
	mach_port_t task,
	pid_t ppid,
	pid_t pgrp,
	int orphaned
);

/* Routine msg_add_auth */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_add_auth
(
	mach_port_t process,
	auth_t auth
);

/* Routine msg_del_auth */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_del_auth
(
	mach_port_t process,
	mach_port_t task,
	const_intarray_t uids,
	mach_msg_type_number_t uidsCnt,
	const_intarray_t gids,
	mach_msg_type_number_t gidsCnt
);

/* Routine msg_get_init_port */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_get_init_port
(
	mach_port_t process,
	mach_port_t refport,
	int which,
	mach_port_t *port,
	mach_msg_type_name_t *portPoly
);

/* Routine msg_set_init_port */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_set_init_port
(
	mach_port_t process,
	mach_port_t refport,
	int which,
	mach_port_t port
);

/* Routine msg_get_init_ports */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_get_init_ports
(
	mach_port_t process,
	mach_port_t refport,
	portarray_t *ports,
	mach_msg_type_name_t *portsPoly,
	mach_msg_type_number_t *portsCnt
);

/* Routine msg_set_init_ports */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_set_init_ports
(
	mach_port_t process,
	mach_port_t refport,
	const_portarray_t ports,
	mach_msg_type_number_t portsCnt
);

/* Routine msg_get_init_int */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_get_init_int
(
	mach_port_t process,
	mach_port_t refport,
	int which,
	int *value
);

/* Routine msg_set_init_int */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_set_init_int
(
	mach_port_t process,
	mach_port_t refport,
	int which,
	int value
);

/* Routine msg_get_init_ints */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_get_init_ints
(
	mach_port_t process,
	mach_port_t refport,
	intarray_t *values,
	mach_msg_type_number_t *valuesCnt
);

/* Routine msg_set_init_ints */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_set_init_ints
(
	mach_port_t process,
	mach_port_t refport,
	const_intarray_t values,
	mach_msg_type_number_t valuesCnt
);

/* Routine msg_get_dtable */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_get_dtable
(
	mach_port_t process,
	mach_port_t refport,
	portarray_t *dtable,
	mach_msg_type_name_t *dtablePoly,
	mach_msg_type_number_t *dtableCnt
);

/* Routine msg_set_dtable */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_set_dtable
(
	mach_port_t process,
	mach_port_t refport,
	const_portarray_t dtable,
	mach_msg_type_number_t dtableCnt
);

/* Routine msg_get_fd */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_get_fd
(
	mach_port_t process,
	mach_port_t refport,
	int fd,
	mach_port_t *port,
	mach_msg_type_name_t *portPoly
);

/* Routine msg_set_fd */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_set_fd
(
	mach_port_t process,
	mach_port_t refport,
	int fd,
	mach_port_t port
);

/* Routine msg_get_environment */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_get_environment
(
	mach_port_t process,
	data_t *value,
	mach_msg_type_number_t *valueCnt
);

/* Routine msg_set_environment */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_set_environment
(
	mach_port_t process,
	mach_port_t refport,
	const_data_t value,
	mach_msg_type_number_t valueCnt
);

/* Routine msg_get_env_variable */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_get_env_variable
(
	mach_port_t process,
	const_string_t variable,
	data_t *value,
	mach_msg_type_number_t *valueCnt
);

/* Routine msg_set_env_variable */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_set_env_variable
(
	mach_port_t process,
	mach_port_t refport,
	const_string_t variable,
	const_string_t value,
	boolean_t replace
);

/* Routine msg_sig_post_untraced */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_sig_post_untraced
(
	mach_port_t process,
	mach_port_t reply_port,
	mach_msg_type_name_t reply_portPoly,
	int signal,
	natural_t sigcode,
	mach_port_t refport
);

/* Routine msg_report_wait */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_report_wait
(
	mach_port_t process,
	mach_port_t thread,
	string_t wait_desc,
	mach_msg_id_t *wait_rpc
);

/* Routine msg_describe_ports */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _S_msg_describe_ports
(
	mach_port_t process,
	mach_port_t refport,
	const_mach_port_name_array_t names,
	mach_msg_type_number_t namesCnt,
	data_t *descriptions,
	mach_msg_type_number_t *descriptionsCnt
);

extern mig_routine_t _S_msg_server_routines[];
static __inline mig_routine_t _S_msg_server_routine
	(const mach_msg_header_t *InHeadP)
{
	int msgh_id;

	msgh_id = InHeadP->msgh_id - 23000;

	if ((msgh_id > 24) || (msgh_id < 0))
		return 0;

	return _S_msg_server_routines[msgh_id];
}

#endif	/* not defined(_msg_server_) */
