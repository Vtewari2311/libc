#ifndef	_process_request_user_
#define	_process_request_user_

/* Module process_request */

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

/* SimpleRoutine proc_getprivports_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getprivports_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_getallpids_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getallpids_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_setexecdata_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_setexecdata_request
(
	process_t process,
	mach_port_t reply,
	const_portarray_t ports,
	mach_msg_type_name_t portsPoly,
	mach_msg_type_number_t portsCnt,
	const_intarray_t ints,
	mach_msg_type_number_t intsCnt
);

/* SimpleRoutine proc_getexecdata_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getexecdata_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_execdata_notify_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_execdata_notify_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t notify,
	mach_msg_type_name_t notifyPoly
);

/* SimpleRoutine proc_uname_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_uname_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_register_version_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_register_version_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t credential,
	const_string_t name,
	const_string_t release,
	const_string_t version
);

/* SimpleRoutine proc_reauthenticate_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_reauthenticate_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly
);

/* SimpleRoutine proc_child_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_child_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t child
);

/* SimpleRoutine proc_setmsgport_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_setmsgport_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t newmsgport
);

/* SimpleRoutine proc_reassign_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_reassign_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t newtask
);

/* SimpleRoutine proc_setowner_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_setowner_request
(
	process_t process,
	mach_port_t reply,
	uid_t owner,
	int clear
);

/* SimpleRoutine proc_getpids_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getpids_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_set_arg_locations_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_set_arg_locations_request
(
	process_t process,
	mach_port_t reply,
	vm_address_t argv,
	vm_address_t envp
);

/* SimpleRoutine proc_get_arg_locations_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_get_arg_locations_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_getmsgport_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getmsgport_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_wait_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_wait_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid,
	int options
);

/* SimpleRoutine proc_dostop_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_dostop_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t contthread
);

/* SimpleRoutine proc_handle_exceptions_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_handle_exceptions_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t msgport,
	mach_port_t forwardport,
	mach_msg_type_name_t forwardportPoly,
	int flavor,
	const thread_state_t new_state,
	mach_msg_type_number_t new_stateCnt
);

/* SimpleRoutine proc_mark_stop_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mark_stop_request
(
	process_t process,
	mach_port_t reply,
	int signo,
	int sigcode
);

/* SimpleRoutine proc_mark_cont_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mark_cont_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_mark_exit_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mark_exit_request
(
	process_t process,
	mach_port_t reply,
	int status,
	int sigcode
);

/* SimpleRoutine proc_mark_exec_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mark_exec_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_mark_traced_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mark_traced_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_mod_stopchild_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mod_stopchild_request
(
	process_t process,
	mach_port_t reply,
	int doit
);

/* SimpleRoutine proc_pid2task_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_pid2task_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_task2pid_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_task2pid_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t task
);

/* SimpleRoutine proc_task2proc_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_task2proc_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t task
);

/* SimpleRoutine proc_proc2task_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_proc2task_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_pid2proc_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_pid2proc_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_getprocinfo_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getprocinfo_request
(
	process_t process,
	mach_port_t reply,
	pid_t which,
	int flags
);

/* SimpleRoutine proc_getprocargs_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getprocargs_request
(
	process_t process,
	mach_port_t reply,
	pid_t which
);

/* SimpleRoutine proc_getprocenv_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getprocenv_request
(
	process_t process,
	mach_port_t reply,
	pid_t which
);

/* SimpleRoutine proc_make_login_coll_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_make_login_coll_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_getloginid_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getloginid_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_getloginpids_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getloginpids_request
(
	process_t process,
	mach_port_t reply,
	pid_t id
);

/* SimpleRoutine proc_setlogin_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_setlogin_request
(
	process_t process,
	mach_port_t reply,
	const_string_t logname
);

/* SimpleRoutine proc_getlogin_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getlogin_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_setsid_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_setsid_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_getsid_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getsid_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_getsessionpgids_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getsessionpgids_request
(
	process_t process,
	mach_port_t reply,
	pid_t sid
);

/* SimpleRoutine proc_getsessionpids_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getsessionpids_request
(
	process_t process,
	mach_port_t reply,
	pid_t sid
);

/* SimpleRoutine proc_getsidport_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getsidport_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_setpgrp_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_setpgrp_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid,
	pid_t pgrp
);

/* SimpleRoutine proc_getpgrp_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getpgrp_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_getpgrppids_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getpgrppids_request
(
	process_t process,
	mach_port_t reply,
	pid_t pgrp
);

/* SimpleRoutine proc_get_tty_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_get_tty_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_getnports_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getnports_request
(
	process_t process,
	mach_port_t reply,
	pid_t which
);

/* SimpleRoutine proc_set_init_task_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_set_init_task_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t task
);

/* SimpleRoutine proc_mark_important_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mark_important_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_is_important_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_is_important_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_set_code_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_set_code_request
(
	process_t process,
	mach_port_t reply,
	vm_address_t start_code,
	vm_address_t end_code
);

/* SimpleRoutine proc_get_code_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_get_code_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_make_task_namespace_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_make_task_namespace_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t notify,
	mach_msg_type_name_t notifyPoly
);


/* Module process_request */

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

/* SimpleRoutine proc_getprivports_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getprivports_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_getallpids_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getallpids_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_setexecdata_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_setexecdata_request
(
	process_t process,
	mach_port_t reply,
	const_portarray_t ports,
	mach_msg_type_name_t portsPoly,
	mach_msg_type_number_t portsCnt,
	const_intarray_t ints,
	mach_msg_type_number_t intsCnt
);

/* SimpleRoutine proc_getexecdata_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getexecdata_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_execdata_notify_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_execdata_notify_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t notify,
	mach_msg_type_name_t notifyPoly
);

/* SimpleRoutine proc_uname_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_uname_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_register_version_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_register_version_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t credential,
	const_string_t name,
	const_string_t release,
	const_string_t version
);

/* SimpleRoutine proc_reauthenticate_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_reauthenticate_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly
);

/* SimpleRoutine proc_child_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_child_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t child
);

/* SimpleRoutine proc_setmsgport_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_setmsgport_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t newmsgport
);

/* SimpleRoutine proc_reassign_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_reassign_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t newtask
);

/* SimpleRoutine proc_setowner_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_setowner_request
(
	process_t process,
	mach_port_t reply,
	uid_t owner,
	int clear
);

/* SimpleRoutine proc_getpids_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getpids_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_set_arg_locations_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_set_arg_locations_request
(
	process_t process,
	mach_port_t reply,
	vm_address_t argv,
	vm_address_t envp
);

/* SimpleRoutine proc_get_arg_locations_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_get_arg_locations_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_getmsgport_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getmsgport_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_wait_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_wait_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid,
	int options
);

/* SimpleRoutine proc_dostop_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_dostop_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t contthread
);

/* SimpleRoutine proc_handle_exceptions_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_handle_exceptions_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t msgport,
	mach_port_t forwardport,
	mach_msg_type_name_t forwardportPoly,
	int flavor,
	const thread_state_t new_state,
	mach_msg_type_number_t new_stateCnt
);

/* SimpleRoutine proc_mark_stop_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mark_stop_request
(
	process_t process,
	mach_port_t reply,
	int signo,
	int sigcode
);

/* SimpleRoutine proc_mark_cont_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mark_cont_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_mark_exit_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mark_exit_request
(
	process_t process,
	mach_port_t reply,
	int status,
	int sigcode
);

/* SimpleRoutine proc_mark_exec_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mark_exec_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_mark_traced_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mark_traced_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_mod_stopchild_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mod_stopchild_request
(
	process_t process,
	mach_port_t reply,
	int doit
);

/* SimpleRoutine proc_pid2task_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_pid2task_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_task2pid_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_task2pid_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t task
);

/* SimpleRoutine proc_task2proc_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_task2proc_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t task
);

/* SimpleRoutine proc_proc2task_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_proc2task_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_pid2proc_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_pid2proc_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_getprocinfo_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getprocinfo_request
(
	process_t process,
	mach_port_t reply,
	pid_t which,
	int flags
);

/* SimpleRoutine proc_getprocargs_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getprocargs_request
(
	process_t process,
	mach_port_t reply,
	pid_t which
);

/* SimpleRoutine proc_getprocenv_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getprocenv_request
(
	process_t process,
	mach_port_t reply,
	pid_t which
);

/* SimpleRoutine proc_make_login_coll_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_make_login_coll_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_getloginid_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getloginid_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_getloginpids_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getloginpids_request
(
	process_t process,
	mach_port_t reply,
	pid_t id
);

/* SimpleRoutine proc_setlogin_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_setlogin_request
(
	process_t process,
	mach_port_t reply,
	const_string_t logname
);

/* SimpleRoutine proc_getlogin_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getlogin_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_setsid_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_setsid_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_getsid_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getsid_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_getsessionpgids_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getsessionpgids_request
(
	process_t process,
	mach_port_t reply,
	pid_t sid
);

/* SimpleRoutine proc_getsessionpids_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getsessionpids_request
(
	process_t process,
	mach_port_t reply,
	pid_t sid
);

/* SimpleRoutine proc_getsidport_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getsidport_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_setpgrp_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_setpgrp_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid,
	pid_t pgrp
);

/* SimpleRoutine proc_getpgrp_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getpgrp_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_getpgrppids_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getpgrppids_request
(
	process_t process,
	mach_port_t reply,
	pid_t pgrp
);

/* SimpleRoutine proc_get_tty_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_get_tty_request
(
	process_t process,
	mach_port_t reply,
	pid_t pid
);

/* SimpleRoutine proc_getnports_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getnports_request
(
	process_t process,
	mach_port_t reply,
	pid_t which
);

/* SimpleRoutine proc_set_init_task_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_set_init_task_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t task
);

/* SimpleRoutine proc_mark_important_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mark_important_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_is_important_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_is_important_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_set_code_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_set_code_request
(
	process_t process,
	mach_port_t reply,
	vm_address_t start_code,
	vm_address_t end_code
);

/* SimpleRoutine proc_get_code_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_get_code_request
(
	process_t process,
	mach_port_t reply
);

/* SimpleRoutine proc_make_task_namespace_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_make_task_namespace_request
(
	process_t process,
	mach_port_t reply,
	mach_port_t notify,
	mach_msg_type_name_t notifyPoly
);

#endif	/* not defined(_process_request_user_) */
