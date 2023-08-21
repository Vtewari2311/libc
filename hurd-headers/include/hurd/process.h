#ifndef	_process_user_
#define	_process_user_

/* Module process */

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

/* Routine proc_getprivports */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getprivports
(
	process_t process,
	mach_port_t *host_priv,
	mach_port_t *device_master
);

/* Routine proc_getallpids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getallpids
(
	process_t process,
	pidarray_t *pidarray,
	mach_msg_type_number_t *pidarrayCnt
);

/* Routine proc_setexecdata */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_setexecdata
(
	process_t process,
	const_portarray_t ports,
	mach_msg_type_name_t portsPoly,
	mach_msg_type_number_t portsCnt,
	const_intarray_t ints,
	mach_msg_type_number_t intsCnt
);

/* Routine proc_getexecdata */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getexecdata
(
	process_t process,
	portarray_t *ports,
	mach_msg_type_number_t *portsCnt,
	intarray_t *ints,
	mach_msg_type_number_t *intsCnt
);

/* Routine proc_execdata_notify */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_execdata_notify
(
	process_t process,
	mach_port_t notify,
	mach_msg_type_name_t notifyPoly
);

/* Routine proc_uname */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_uname
(
	process_t process,
	utsname_t *uname
);

/* Routine proc_register_version */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_register_version
(
	process_t process,
	mach_port_t credential,
	const_string_t name,
	const_string_t release,
	const_string_t version
);

/* SimpleRoutine proc_reauthenticate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_reauthenticate
(
	process_t process,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly
);

/* Routine proc_child */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_child
(
	process_t process,
	mach_port_t child
);

/* Routine proc_setmsgport */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_setmsgport
(
	process_t process,
	mach_port_t newmsgport,
	mach_port_t *oldmsgport
);

/* Routine proc_reassign */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_reassign
(
	process_t process,
	mach_port_t newtask
);

/* Routine proc_setowner */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_setowner
(
	process_t process,
	uid_t owner,
	int clear
);

/* Routine proc_getpids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getpids
(
	process_t process,
	pid_t *pid,
	pid_t *ppid,
	int *orphaned
);

/* Routine proc_set_arg_locations */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_set_arg_locations
(
	process_t process,
	vm_address_t argv,
	vm_address_t envp
);

/* Routine proc_get_arg_locations */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_get_arg_locations
(
	process_t process,
	vm_address_t *argv,
	vm_address_t *envp
);

/* Routine proc_getmsgport */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getmsgport
(
	process_t process,
	pid_t pid,
	mach_port_t *msgport
);

/* Routine proc_wait */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_wait
(
	process_t process,
	pid_t pid,
	int options,
	int *status,
	int *sigcode,
	rusage_t *rusage,
	pid_t *pid_status
);

/* Routine proc_dostop */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_dostop
(
	process_t process,
	mach_port_t contthread
);

/* Routine proc_handle_exceptions */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_handle_exceptions
(
	process_t process,
	mach_port_t msgport,
	mach_port_t forwardport,
	mach_msg_type_name_t forwardportPoly,
	int flavor,
	const thread_state_t new_state,
	mach_msg_type_number_t new_stateCnt
);

/* Routine proc_mark_stop */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mark_stop
(
	process_t process,
	int signo,
	int sigcode
);

/* Routine proc_mark_cont */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mark_cont
(
	process_t process
);

/* Routine proc_mark_exit */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mark_exit
(
	process_t process,
	int status,
	int sigcode
);

/* Routine proc_mark_exec */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mark_exec
(
	process_t process
);

/* Routine proc_mark_traced */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mark_traced
(
	process_t process
);

/* Routine proc_mod_stopchild */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mod_stopchild
(
	process_t process,
	int doit
);

/* Routine proc_pid2task */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_pid2task
(
	process_t process,
	pid_t pid,
	mach_port_t *task
);

/* Routine proc_task2pid */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_task2pid
(
	process_t process,
	mach_port_t task,
	pid_t *pid
);

/* Routine proc_task2proc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_task2proc
(
	process_t process,
	mach_port_t task,
	mach_port_t *proc
);

/* Routine proc_proc2task */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_proc2task
(
	process_t process,
	mach_port_t *task
);

/* Routine proc_pid2proc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_pid2proc
(
	process_t process,
	pid_t pid,
	mach_port_t *proc
);

/* Routine proc_getprocinfo */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getprocinfo
(
	process_t process,
	pid_t which,
	int *flags,
	procinfo_t *procinfo,
	mach_msg_type_number_t *procinfoCnt,
	data_t *threadwaits,
	mach_msg_type_number_t *threadwaitsCnt
);

/* Routine proc_getprocargs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getprocargs
(
	process_t process,
	pid_t which,
	data_t *procargs,
	mach_msg_type_number_t *procargsCnt
);

/* Routine proc_getprocenv */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getprocenv
(
	process_t process,
	pid_t which,
	data_t *procenv,
	mach_msg_type_number_t *procenvCnt
);

/* Routine proc_make_login_coll */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_make_login_coll
(
	process_t process
);

/* Routine proc_getloginid */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getloginid
(
	process_t process,
	pid_t pid,
	pid_t *login_id
);

/* Routine proc_getloginpids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getloginpids
(
	process_t process,
	pid_t id,
	pidarray_t *pids,
	mach_msg_type_number_t *pidsCnt
);

/* Routine proc_setlogin */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_setlogin
(
	process_t process,
	const_string_t logname
);

/* Routine proc_getlogin */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getlogin
(
	process_t process,
	string_t logname
);

/* Routine proc_setsid */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_setsid
(
	process_t process
);

/* Routine proc_getsid */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getsid
(
	process_t process,
	pid_t pid,
	pid_t *sid
);

/* Routine proc_getsessionpgids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getsessionpgids
(
	process_t process,
	pid_t sid,
	pidarray_t *pgidset,
	mach_msg_type_number_t *pgidsetCnt
);

/* Routine proc_getsessionpids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getsessionpids
(
	process_t process,
	pid_t sid,
	pidarray_t *pidset,
	mach_msg_type_number_t *pidsetCnt
);

/* Routine proc_getsidport */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getsidport
(
	process_t process,
	mach_port_t *sessport
);

/* Routine proc_setpgrp */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_setpgrp
(
	process_t process,
	pid_t pid,
	pid_t pgrp
);

/* Routine proc_getpgrp */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getpgrp
(
	process_t process,
	pid_t pid,
	pid_t *pgrp
);

/* Routine proc_getpgrppids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getpgrppids
(
	process_t process,
	pid_t pgrp,
	pidarray_t *pidset,
	mach_msg_type_number_t *pidsetCnt
);

/* Routine proc_get_tty */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_get_tty
(
	process_t calling_process,
	pid_t target_process,
	mach_port_t *tty
);

/* Routine proc_getnports */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_getnports
(
	process_t process,
	pid_t which,
	mach_msg_type_number_t *nports
);

/* Routine proc_set_init_task */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_set_init_task
(
	process_t process,
	mach_port_t task
);

/* Routine proc_mark_important */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_mark_important
(
	process_t process
);

/* Routine proc_is_important */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_is_important
(
	process_t process,
	boolean_t *essential
);

/* Routine proc_set_code */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_set_code
(
	process_t process,
	vm_address_t start_code,
	vm_address_t end_code
);

/* Routine proc_get_code */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_get_code
(
	process_t process,
	vm_address_t *start_code,
	vm_address_t *end_code
);

/* Routine proc_make_task_namespace */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_make_task_namespace
(
	process_t process,
	mach_port_t notify,
	mach_msg_type_name_t notifyPoly
);

/* Routine proc_set_exe */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_set_exe
(
	process_t process,
	const_string_t path
);

/* Routine proc_get_exe */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_get_exe
(
	process_t process,
	pid_t which,
	string_t path
);

/* Routine proc_set_entry */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_set_entry
(
	process_t process,
	vm_address_t entry
);

/* Routine proc_get_entry */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_get_entry
(
	process_t process,
	vm_address_t *entry
);

/* Routine proc_waitid */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_waitid
(
	process_t process,
	pid_t pid,
	int options,
	int *status,
	int *sigcode,
	rusage_t *rusage,
	pid_t *pid_status
);

/* SimpleRoutine proc_reauthenticate_reassign */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_reauthenticate_reassign
(
	process_t old_process,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly,
	mach_port_t new_task
);

/* SimpleRoutine proc_reauthenticate_complete */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __proc_reauthenticate_complete
(
	process_t process
);


/* Module process */

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

/* Routine proc_getprivports */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getprivports
(
	process_t process,
	mach_port_t *host_priv,
	mach_port_t *device_master
);

/* Routine proc_getallpids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getallpids
(
	process_t process,
	pidarray_t *pidarray,
	mach_msg_type_number_t *pidarrayCnt
);

/* Routine proc_setexecdata */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_setexecdata
(
	process_t process,
	const_portarray_t ports,
	mach_msg_type_name_t portsPoly,
	mach_msg_type_number_t portsCnt,
	const_intarray_t ints,
	mach_msg_type_number_t intsCnt
);

/* Routine proc_getexecdata */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getexecdata
(
	process_t process,
	portarray_t *ports,
	mach_msg_type_number_t *portsCnt,
	intarray_t *ints,
	mach_msg_type_number_t *intsCnt
);

/* Routine proc_execdata_notify */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_execdata_notify
(
	process_t process,
	mach_port_t notify,
	mach_msg_type_name_t notifyPoly
);

/* Routine proc_uname */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_uname
(
	process_t process,
	utsname_t *uname
);

/* Routine proc_register_version */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_register_version
(
	process_t process,
	mach_port_t credential,
	const_string_t name,
	const_string_t release,
	const_string_t version
);

/* SimpleRoutine proc_reauthenticate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_reauthenticate
(
	process_t process,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly
);

/* Routine proc_child */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_child
(
	process_t process,
	mach_port_t child
);

/* Routine proc_setmsgport */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_setmsgport
(
	process_t process,
	mach_port_t newmsgport,
	mach_port_t *oldmsgport
);

/* Routine proc_reassign */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_reassign
(
	process_t process,
	mach_port_t newtask
);

/* Routine proc_setowner */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_setowner
(
	process_t process,
	uid_t owner,
	int clear
);

/* Routine proc_getpids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getpids
(
	process_t process,
	pid_t *pid,
	pid_t *ppid,
	int *orphaned
);

/* Routine proc_set_arg_locations */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_set_arg_locations
(
	process_t process,
	vm_address_t argv,
	vm_address_t envp
);

/* Routine proc_get_arg_locations */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_get_arg_locations
(
	process_t process,
	vm_address_t *argv,
	vm_address_t *envp
);

/* Routine proc_getmsgport */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getmsgport
(
	process_t process,
	pid_t pid,
	mach_port_t *msgport
);

/* Routine proc_wait */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_wait
(
	process_t process,
	pid_t pid,
	int options,
	int *status,
	int *sigcode,
	rusage_t *rusage,
	pid_t *pid_status
);

/* Routine proc_dostop */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_dostop
(
	process_t process,
	mach_port_t contthread
);

/* Routine proc_handle_exceptions */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_handle_exceptions
(
	process_t process,
	mach_port_t msgport,
	mach_port_t forwardport,
	mach_msg_type_name_t forwardportPoly,
	int flavor,
	const thread_state_t new_state,
	mach_msg_type_number_t new_stateCnt
);

/* Routine proc_mark_stop */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mark_stop
(
	process_t process,
	int signo,
	int sigcode
);

/* Routine proc_mark_cont */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mark_cont
(
	process_t process
);

/* Routine proc_mark_exit */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mark_exit
(
	process_t process,
	int status,
	int sigcode
);

/* Routine proc_mark_exec */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mark_exec
(
	process_t process
);

/* Routine proc_mark_traced */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mark_traced
(
	process_t process
);

/* Routine proc_mod_stopchild */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mod_stopchild
(
	process_t process,
	int doit
);

/* Routine proc_pid2task */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_pid2task
(
	process_t process,
	pid_t pid,
	mach_port_t *task
);

/* Routine proc_task2pid */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_task2pid
(
	process_t process,
	mach_port_t task,
	pid_t *pid
);

/* Routine proc_task2proc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_task2proc
(
	process_t process,
	mach_port_t task,
	mach_port_t *proc
);

/* Routine proc_proc2task */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_proc2task
(
	process_t process,
	mach_port_t *task
);

/* Routine proc_pid2proc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_pid2proc
(
	process_t process,
	pid_t pid,
	mach_port_t *proc
);

/* Routine proc_getprocinfo */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getprocinfo
(
	process_t process,
	pid_t which,
	int *flags,
	procinfo_t *procinfo,
	mach_msg_type_number_t *procinfoCnt,
	data_t *threadwaits,
	mach_msg_type_number_t *threadwaitsCnt
);

/* Routine proc_getprocargs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getprocargs
(
	process_t process,
	pid_t which,
	data_t *procargs,
	mach_msg_type_number_t *procargsCnt
);

/* Routine proc_getprocenv */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getprocenv
(
	process_t process,
	pid_t which,
	data_t *procenv,
	mach_msg_type_number_t *procenvCnt
);

/* Routine proc_make_login_coll */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_make_login_coll
(
	process_t process
);

/* Routine proc_getloginid */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getloginid
(
	process_t process,
	pid_t pid,
	pid_t *login_id
);

/* Routine proc_getloginpids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getloginpids
(
	process_t process,
	pid_t id,
	pidarray_t *pids,
	mach_msg_type_number_t *pidsCnt
);

/* Routine proc_setlogin */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_setlogin
(
	process_t process,
	const_string_t logname
);

/* Routine proc_getlogin */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getlogin
(
	process_t process,
	string_t logname
);

/* Routine proc_setsid */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_setsid
(
	process_t process
);

/* Routine proc_getsid */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getsid
(
	process_t process,
	pid_t pid,
	pid_t *sid
);

/* Routine proc_getsessionpgids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getsessionpgids
(
	process_t process,
	pid_t sid,
	pidarray_t *pgidset,
	mach_msg_type_number_t *pgidsetCnt
);

/* Routine proc_getsessionpids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getsessionpids
(
	process_t process,
	pid_t sid,
	pidarray_t *pidset,
	mach_msg_type_number_t *pidsetCnt
);

/* Routine proc_getsidport */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getsidport
(
	process_t process,
	mach_port_t *sessport
);

/* Routine proc_setpgrp */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_setpgrp
(
	process_t process,
	pid_t pid,
	pid_t pgrp
);

/* Routine proc_getpgrp */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getpgrp
(
	process_t process,
	pid_t pid,
	pid_t *pgrp
);

/* Routine proc_getpgrppids */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getpgrppids
(
	process_t process,
	pid_t pgrp,
	pidarray_t *pidset,
	mach_msg_type_number_t *pidsetCnt
);

/* Routine proc_get_tty */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_get_tty
(
	process_t calling_process,
	pid_t target_process,
	mach_port_t *tty
);

/* Routine proc_getnports */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_getnports
(
	process_t process,
	pid_t which,
	mach_msg_type_number_t *nports
);

/* Routine proc_set_init_task */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_set_init_task
(
	process_t process,
	mach_port_t task
);

/* Routine proc_mark_important */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_mark_important
(
	process_t process
);

/* Routine proc_is_important */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_is_important
(
	process_t process,
	boolean_t *essential
);

/* Routine proc_set_code */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_set_code
(
	process_t process,
	vm_address_t start_code,
	vm_address_t end_code
);

/* Routine proc_get_code */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_get_code
(
	process_t process,
	vm_address_t *start_code,
	vm_address_t *end_code
);

/* Routine proc_make_task_namespace */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_make_task_namespace
(
	process_t process,
	mach_port_t notify,
	mach_msg_type_name_t notifyPoly
);

/* Routine proc_set_exe */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_set_exe
(
	process_t process,
	const_string_t path
);

/* Routine proc_get_exe */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_get_exe
(
	process_t process,
	pid_t which,
	string_t path
);

/* Routine proc_set_entry */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_set_entry
(
	process_t process,
	vm_address_t entry
);

/* Routine proc_get_entry */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_get_entry
(
	process_t process,
	vm_address_t *entry
);

/* Routine proc_waitid */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_waitid
(
	process_t process,
	pid_t pid,
	int options,
	int *status,
	int *sigcode,
	rusage_t *rusage,
	pid_t *pid_status
);

/* SimpleRoutine proc_reauthenticate_reassign */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_reauthenticate_reassign
(
	process_t old_process,
	mach_port_t rendezvous,
	mach_msg_type_name_t rendezvousPoly,
	mach_port_t new_task
);

/* SimpleRoutine proc_reauthenticate_complete */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t proc_reauthenticate_complete
(
	process_t process
);

#endif	/* not defined(_process_user_) */
