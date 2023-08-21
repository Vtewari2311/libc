#ifndef	_mach_host_user_
#define	_mach_host_user_

/* Module mach_host */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* Routine host_processors */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_processors
(
	mach_port_t host_priv,
	processor_array_t *processor_list,
	mach_msg_type_number_t *processor_listCnt
);

/* Routine processor_start */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_start
(
	mach_port_t processor
);

/* Routine processor_exit */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_exit
(
	mach_port_t processor
);

/* Routine processor_set_default */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_set_default
(
	mach_port_t host,
	mach_port_t *default_set
);

/* Routine processor_set_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_set_create
(
	mach_port_t host,
	mach_port_t *new_set,
	mach_port_t *new_name
);

/* Routine processor_set_destroy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_set_destroy
(
	mach_port_t set
);

/* Routine processor_assign */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_assign
(
	mach_port_t processor,
	mach_port_t new_set,
	boolean_t wait
);

/* Routine processor_get_assignment */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_get_assignment
(
	mach_port_t processor,
	mach_port_t *assigned_set
);

/* Routine thread_assign */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_assign
(
	mach_port_t thread,
	mach_port_t new_set
);

/* Routine thread_assign_default */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_assign_default
(
	mach_port_t thread
);

/* Routine thread_get_assignment */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_get_assignment
(
	mach_port_t thread,
	mach_port_t *assigned_set
);

/* Routine task_assign */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_assign
(
	mach_port_t task,
	mach_port_t new_set,
	boolean_t assign_threads
);

/* Routine task_assign_default */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_assign_default
(
	mach_port_t task,
	boolean_t assign_threads
);

/* Routine task_get_assignment */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_get_assignment
(
	mach_port_t task,
	mach_port_t *assigned_set
);

/* Routine host_kernel_version */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_kernel_version
(
	mach_port_t host,
	kernel_version_t kernel_version
);

/* Routine thread_priority */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_priority
(
	mach_port_t thread,
	int priority,
	boolean_t set_max
);

/* Routine thread_max_priority */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_max_priority
(
	mach_port_t thread,
	mach_port_t processor_set,
	int max_priority
);

/* Routine task_priority */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_priority
(
	mach_port_t task,
	int priority,
	boolean_t change_threads
);

/* Routine processor_set_max_priority */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_set_max_priority
(
	mach_port_t processor_set,
	int max_priority,
	boolean_t change_threads
);

/* Routine thread_policy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_policy
(
	mach_port_t thread,
	int policy,
	int data
);

/* Routine processor_set_policy_enable */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_set_policy_enable
(
	mach_port_t processor_set,
	int policy
);

/* Routine processor_set_policy_disable */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_set_policy_disable
(
	mach_port_t processor_set,
	int policy,
	boolean_t change_threads
);

/* Routine processor_set_tasks */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_set_tasks
(
	mach_port_t processor_set,
	task_array_t *task_list,
	mach_msg_type_number_t *task_listCnt
);

/* Routine processor_set_threads */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_set_threads
(
	mach_port_t processor_set,
	thread_array_t *thread_list,
	mach_msg_type_number_t *thread_listCnt
);

/* Routine host_processor_sets */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_processor_sets
(
	mach_port_t host,
	processor_set_name_array_t *processor_sets,
	mach_msg_type_number_t *processor_setsCnt
);

/* Routine host_processor_set_priv */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_processor_set_priv
(
	mach_port_t host_priv,
	mach_port_t set_name,
	mach_port_t *set
);

/* Routine thread_depress_abort_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_depress_abort_rpc
(
	mach_port_t thread
);

/* Routine host_set_time */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_set_time
(
	mach_port_t host_priv,
	time_value_t new_time
);

/* Routine host_adjust_time */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_adjust_time
(
	mach_port_t host_priv,
	time_value_t new_adjustment,
	time_value_t *old_adjustment
);

/* Routine host_get_time */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_get_time
(
	mach_port_t host,
	time_value_t *current_time
);

/* Routine host_reboot */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_reboot
(
	mach_port_t host_priv,
	int options
);

/* Routine vm_wire */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_wire
(
	mach_port_t host,
	mach_port_t task,
	vm_address_t address,
	vm_size_t size,
	vm_prot_t access
);

/* Routine thread_wire */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_wire
(
	mach_port_t host_priv,
	mach_port_t thread,
	boolean_t wired
);

/* Routine host_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_info
(
	mach_port_t host,
	int flavor,
	host_info_t host_info_out,
	mach_msg_type_number_t *host_info_outCnt
);

/* Routine processor_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_info
(
	mach_port_t processor,
	int flavor,
	mach_port_t *host,
	processor_info_t processor_info_out,
	mach_msg_type_number_t *processor_info_outCnt
);

/* Routine processor_set_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_set_info
(
	mach_port_t set_name,
	int flavor,
	mach_port_t *host,
	processor_set_info_t info_out,
	mach_msg_type_number_t *info_outCnt
);

/* Routine processor_control */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __processor_control
(
	mach_port_t processor,
	const processor_info_t processor_cmd,
	mach_msg_type_number_t processor_cmdCnt
);

/* Routine host_get_time64 */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_get_time64
(
	mach_port_t host,
	time_value64_t *current_time
);

/* Routine host_set_time64 */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_set_time64
(
	mach_port_t host,
	time_value64_t new_time
);

/* Routine host_adjust_time64 */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_adjust_time64
(
	mach_port_t host_priv,
	time_value64_t new_adjustment,
	time_value64_t *old_adjustment
);

/* Routine host_get_kernel_version */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __host_get_kernel_version
(
	mach_port_t host,
	kernel_version_t kernel_version
);


/* Module mach_host */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* Routine host_processors */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_processors
(
	mach_port_t host_priv,
	processor_array_t *processor_list,
	mach_msg_type_number_t *processor_listCnt
);

/* Routine processor_start */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_start
(
	mach_port_t processor
);

/* Routine processor_exit */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_exit
(
	mach_port_t processor
);

/* Routine processor_set_default */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_set_default
(
	mach_port_t host,
	mach_port_t *default_set
);

/* Routine processor_set_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_set_create
(
	mach_port_t host,
	mach_port_t *new_set,
	mach_port_t *new_name
);

/* Routine processor_set_destroy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_set_destroy
(
	mach_port_t set
);

/* Routine processor_assign */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_assign
(
	mach_port_t processor,
	mach_port_t new_set,
	boolean_t wait
);

/* Routine processor_get_assignment */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_get_assignment
(
	mach_port_t processor,
	mach_port_t *assigned_set
);

/* Routine thread_assign */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_assign
(
	mach_port_t thread,
	mach_port_t new_set
);

/* Routine thread_assign_default */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_assign_default
(
	mach_port_t thread
);

/* Routine thread_get_assignment */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_get_assignment
(
	mach_port_t thread,
	mach_port_t *assigned_set
);

/* Routine task_assign */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_assign
(
	mach_port_t task,
	mach_port_t new_set,
	boolean_t assign_threads
);

/* Routine task_assign_default */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_assign_default
(
	mach_port_t task,
	boolean_t assign_threads
);

/* Routine task_get_assignment */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_get_assignment
(
	mach_port_t task,
	mach_port_t *assigned_set
);

/* Routine host_kernel_version */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_kernel_version
(
	mach_port_t host,
	kernel_version_t kernel_version
);

/* Routine thread_priority */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_priority
(
	mach_port_t thread,
	int priority,
	boolean_t set_max
);

/* Routine thread_max_priority */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_max_priority
(
	mach_port_t thread,
	mach_port_t processor_set,
	int max_priority
);

/* Routine task_priority */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_priority
(
	mach_port_t task,
	int priority,
	boolean_t change_threads
);

/* Routine processor_set_max_priority */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_set_max_priority
(
	mach_port_t processor_set,
	int max_priority,
	boolean_t change_threads
);

/* Routine thread_policy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_policy
(
	mach_port_t thread,
	int policy,
	int data
);

/* Routine processor_set_policy_enable */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_set_policy_enable
(
	mach_port_t processor_set,
	int policy
);

/* Routine processor_set_policy_disable */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_set_policy_disable
(
	mach_port_t processor_set,
	int policy,
	boolean_t change_threads
);

/* Routine processor_set_tasks */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_set_tasks
(
	mach_port_t processor_set,
	task_array_t *task_list,
	mach_msg_type_number_t *task_listCnt
);

/* Routine processor_set_threads */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_set_threads
(
	mach_port_t processor_set,
	thread_array_t *thread_list,
	mach_msg_type_number_t *thread_listCnt
);

/* Routine host_processor_sets */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_processor_sets
(
	mach_port_t host,
	processor_set_name_array_t *processor_sets,
	mach_msg_type_number_t *processor_setsCnt
);

/* Routine host_processor_set_priv */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_processor_set_priv
(
	mach_port_t host_priv,
	mach_port_t set_name,
	mach_port_t *set
);

/* Routine thread_depress_abort_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_depress_abort_rpc
(
	mach_port_t thread
);

/* Routine host_set_time */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_set_time
(
	mach_port_t host_priv,
	time_value_t new_time
);

/* Routine host_adjust_time */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_adjust_time
(
	mach_port_t host_priv,
	time_value_t new_adjustment,
	time_value_t *old_adjustment
);

/* Routine host_get_time */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_get_time
(
	mach_port_t host,
	time_value_t *current_time
);

/* Routine host_reboot */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_reboot
(
	mach_port_t host_priv,
	int options
);

/* Routine vm_wire */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_wire
(
	mach_port_t host,
	mach_port_t task,
	vm_address_t address,
	vm_size_t size,
	vm_prot_t access
);

/* Routine thread_wire */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_wire
(
	mach_port_t host_priv,
	mach_port_t thread,
	boolean_t wired
);

/* Routine host_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_info
(
	mach_port_t host,
	int flavor,
	host_info_t host_info_out,
	mach_msg_type_number_t *host_info_outCnt
);

/* Routine processor_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_info
(
	mach_port_t processor,
	int flavor,
	mach_port_t *host,
	processor_info_t processor_info_out,
	mach_msg_type_number_t *processor_info_outCnt
);

/* Routine processor_set_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_set_info
(
	mach_port_t set_name,
	int flavor,
	mach_port_t *host,
	processor_set_info_t info_out,
	mach_msg_type_number_t *info_outCnt
);

/* Routine processor_control */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t processor_control
(
	mach_port_t processor,
	const processor_info_t processor_cmd,
	mach_msg_type_number_t processor_cmdCnt
);

/* Routine host_get_time64 */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_get_time64
(
	mach_port_t host,
	time_value64_t *current_time
);

/* Routine host_set_time64 */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_set_time64
(
	mach_port_t host,
	time_value64_t new_time
);

/* Routine host_adjust_time64 */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_adjust_time64
(
	mach_port_t host_priv,
	time_value64_t new_adjustment,
	time_value64_t *old_adjustment
);

/* Routine host_get_kernel_version */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t host_get_kernel_version
(
	mach_port_t host,
	kernel_version_t kernel_version
);

#endif	/* not defined(_mach_host_user_) */
