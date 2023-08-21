#ifndef	_mach_user_
#define	_mach_user_

/* Module mach */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* Routine task_create_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_create_rpc
(
	mach_port_t target_task,
	boolean_t inherit_memory,
	mach_port_t *child_task
);

/* Routine task_terminate_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_terminate_rpc
(
	mach_port_t target_task
);

/* Routine task_get_emulation_vector */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_get_emulation_vector
(
	mach_port_t task,
	int *vector_start,
	emulation_vector_t *emulation_vector,
	mach_msg_type_number_t *emulation_vectorCnt
);

/* Routine task_set_emulation_vector */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_set_emulation_vector
(
	mach_port_t task,
	int vector_start,
	emulation_vector_t emulation_vector,
	mach_msg_type_number_t emulation_vectorCnt
);

/* Routine task_threads */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_threads
(
	mach_port_t target_task,
	thread_array_t *thread_list,
	mach_msg_type_number_t *thread_listCnt
);

/* Routine task_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_info
(
	mach_port_t target_task,
	int flavor,
	task_info_t task_info_out,
	mach_msg_type_number_t *task_info_outCnt
);

/* Routine thread_terminate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_terminate
(
	mach_port_t target_thread
);

/* Routine thread_get_state */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_get_state
(
	mach_port_t target_thread,
	int flavor,
	thread_state_t old_state,
	mach_msg_type_number_t *old_stateCnt
);

/* Routine thread_set_state */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_set_state
(
	mach_port_t target_thread,
	int flavor,
	const thread_state_t new_state,
	mach_msg_type_number_t new_stateCnt
);

/* Routine thread_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_info
(
	mach_port_t target_thread,
	int flavor,
	thread_info_t thread_info_out,
	mach_msg_type_number_t *thread_info_outCnt
);

/* Routine vm_allocate_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_allocate_rpc
(
	mach_port_t target_task,
	vm_address_t *address,
	vm_size_t size,
	boolean_t anywhere
);

/* Routine vm_deallocate_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_deallocate_rpc
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size
);

/* Routine vm_protect */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_protect
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size,
	boolean_t set_maximum,
	vm_prot_t new_protection
);

/* Routine vm_inherit */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_inherit
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_inherit_t new_inheritance
);

/* Routine vm_read */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_read
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_offset_t *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine vm_write */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_write
(
	mach_port_t target_task,
	vm_address_t address,
	vm_offset_t data,
	mach_msg_type_number_t dataCnt
);

/* Routine vm_copy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_copy
(
	mach_port_t target_task,
	vm_address_t source_address,
	vm_size_t size,
	vm_address_t dest_address
);

/* Routine vm_region */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_region
(
	mach_port_t target_task,
	vm_address_t *address,
	vm_size_t *size,
	vm_prot_t *protection,
	vm_prot_t *max_protection,
	vm_inherit_t *inheritance,
	boolean_t *is_shared,
	mach_port_t *object_name,
	vm_offset_t *offset
);

/* Routine vm_statistics */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_statistics
(
	mach_port_t target_task,
	vm_statistics_data_t *vm_stats
);

/* Routine mach_ports_register */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_ports_register
(
	mach_port_t target_task,
	mach_port_array_t init_port_set,
	mach_msg_type_number_t init_port_setCnt
);

/* Routine mach_ports_lookup */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_ports_lookup
(
	mach_port_t target_task,
	mach_port_array_t *init_port_set,
	mach_msg_type_number_t *init_port_setCnt
);

/* SimpleRoutine memory_object_data_unavailable */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_data_unavailable
(
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t size
);

/* Routine memory_object_get_attributes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_get_attributes
(
	mach_port_t memory_control,
	boolean_t *object_ready,
	boolean_t *may_cache,
	memory_object_copy_strategy_t *copy_strategy
);

/* Routine vm_set_default_memory_manager */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_set_default_memory_manager
(
	mach_port_t host_priv,
	mach_port_t *default_manager
);

/* SimpleRoutine memory_object_lock_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_lock_request
(
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t size,
	memory_object_return_t should_return,
	boolean_t should_flush,
	vm_prot_t lock_value,
	mach_port_t reply_to
);

/* Routine task_suspend_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_suspend_rpc
(
	mach_port_t target_task
);

/* Routine task_resume */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_resume
(
	mach_port_t target_task
);

/* Routine task_get_special_port */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_get_special_port
(
	mach_port_t task,
	int which_port,
	mach_port_t *special_port
);

/* Routine task_set_special_port_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_set_special_port_rpc
(
	mach_port_t task,
	int which_port,
	mach_port_t special_port
);

/* Routine thread_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_create
(
	mach_port_t parent_task,
	mach_port_t *child_thread
);

/* Routine thread_suspend */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_suspend
(
	mach_port_t target_thread
);

/* Routine thread_resume */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_resume
(
	mach_port_t target_thread
);

/* Routine thread_abort */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_abort
(
	mach_port_t target_thread
);

/* Routine thread_get_special_port */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_get_special_port
(
	mach_port_t thread,
	int which_port,
	mach_port_t *special_port
);

/* Routine thread_set_special_port */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_set_special_port
(
	mach_port_t thread,
	int which_port,
	mach_port_t special_port
);

/* Routine task_set_emulation */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_set_emulation
(
	mach_port_t target_port,
	vm_address_t routine_entry_pt,
	int routine_number
);

/* Routine task_ras_control */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_ras_control
(
	mach_port_t target_task,
	vm_address_t basepc,
	vm_address_t boundspc,
	int flavor
);

/* Routine vm_map_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_map_rpc
(
	mach_port_t target_task,
	vm_address_t *address,
	vm_size_t size,
	vm_address_t mask,
	boolean_t anywhere,
	mach_port_t memory_object,
	vm_offset_t offset,
	boolean_t copy,
	vm_prot_t cur_protection,
	vm_prot_t max_protection,
	vm_inherit_t inheritance
);

/* SimpleRoutine memory_object_data_error */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_data_error
(
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t size,
	kern_return_t error_value
);

/* SimpleRoutine memory_object_destroy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_destroy
(
	mach_port_t memory_control,
	kern_return_t reason
);

/* SimpleRoutine memory_object_data_supply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_data_supply
(
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_offset_t data,
	mach_msg_type_number_t dataCnt,
	boolean_t dataDealloc,
	vm_prot_t lock_value,
	boolean_t precious,
	mach_port_t reply_to
);

/* SimpleRoutine memory_object_ready */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_ready
(
	mach_port_t memory_control,
	boolean_t may_cache,
	memory_object_copy_strategy_t copy_strategy
);

/* SimpleRoutine memory_object_change_attributes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_change_attributes
(
	mach_port_t memory_control,
	boolean_t may_cache,
	memory_object_copy_strategy_t copy_strategy,
	mach_port_t reply_to
);

/* Routine vm_machine_attribute */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_machine_attribute
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_machine_attribute_t attribute,
	vm_machine_attribute_val_t *value
);


/* Module mach */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* Routine task_create_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_create_rpc
(
	mach_port_t target_task,
	boolean_t inherit_memory,
	mach_port_t *child_task
);

/* Routine task_terminate_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_terminate_rpc
(
	mach_port_t target_task
);

/* Routine task_get_emulation_vector */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_get_emulation_vector
(
	mach_port_t task,
	int *vector_start,
	emulation_vector_t *emulation_vector,
	mach_msg_type_number_t *emulation_vectorCnt
);

/* Routine task_set_emulation_vector */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_set_emulation_vector
(
	mach_port_t task,
	int vector_start,
	emulation_vector_t emulation_vector,
	mach_msg_type_number_t emulation_vectorCnt
);

/* Routine task_threads */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_threads
(
	mach_port_t target_task,
	thread_array_t *thread_list,
	mach_msg_type_number_t *thread_listCnt
);

/* Routine task_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_info
(
	mach_port_t target_task,
	int flavor,
	task_info_t task_info_out,
	mach_msg_type_number_t *task_info_outCnt
);

/* Routine thread_terminate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_terminate
(
	mach_port_t target_thread
);

/* Routine thread_get_state */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_get_state
(
	mach_port_t target_thread,
	int flavor,
	thread_state_t old_state,
	mach_msg_type_number_t *old_stateCnt
);

/* Routine thread_set_state */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_set_state
(
	mach_port_t target_thread,
	int flavor,
	const thread_state_t new_state,
	mach_msg_type_number_t new_stateCnt
);

/* Routine thread_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_info
(
	mach_port_t target_thread,
	int flavor,
	thread_info_t thread_info_out,
	mach_msg_type_number_t *thread_info_outCnt
);

/* Routine vm_allocate_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_allocate_rpc
(
	mach_port_t target_task,
	vm_address_t *address,
	vm_size_t size,
	boolean_t anywhere
);

/* Routine vm_deallocate_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_deallocate_rpc
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size
);

/* Routine vm_protect */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_protect
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size,
	boolean_t set_maximum,
	vm_prot_t new_protection
);

/* Routine vm_inherit */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_inherit
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_inherit_t new_inheritance
);

/* Routine vm_read */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_read
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_offset_t *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine vm_write */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_write
(
	mach_port_t target_task,
	vm_address_t address,
	vm_offset_t data,
	mach_msg_type_number_t dataCnt
);

/* Routine vm_copy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_copy
(
	mach_port_t target_task,
	vm_address_t source_address,
	vm_size_t size,
	vm_address_t dest_address
);

/* Routine vm_region */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_region
(
	mach_port_t target_task,
	vm_address_t *address,
	vm_size_t *size,
	vm_prot_t *protection,
	vm_prot_t *max_protection,
	vm_inherit_t *inheritance,
	boolean_t *is_shared,
	mach_port_t *object_name,
	vm_offset_t *offset
);

/* Routine vm_statistics */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_statistics
(
	mach_port_t target_task,
	vm_statistics_data_t *vm_stats
);

/* Routine mach_ports_register */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_ports_register
(
	mach_port_t target_task,
	mach_port_array_t init_port_set,
	mach_msg_type_number_t init_port_setCnt
);

/* Routine mach_ports_lookup */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_ports_lookup
(
	mach_port_t target_task,
	mach_port_array_t *init_port_set,
	mach_msg_type_number_t *init_port_setCnt
);

/* SimpleRoutine memory_object_data_unavailable */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_data_unavailable
(
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t size
);

/* Routine memory_object_get_attributes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_get_attributes
(
	mach_port_t memory_control,
	boolean_t *object_ready,
	boolean_t *may_cache,
	memory_object_copy_strategy_t *copy_strategy
);

/* Routine vm_set_default_memory_manager */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_set_default_memory_manager
(
	mach_port_t host_priv,
	mach_port_t *default_manager
);

/* SimpleRoutine memory_object_lock_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_lock_request
(
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t size,
	memory_object_return_t should_return,
	boolean_t should_flush,
	vm_prot_t lock_value,
	mach_port_t reply_to
);

/* Routine task_suspend_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_suspend_rpc
(
	mach_port_t target_task
);

/* Routine task_resume */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_resume
(
	mach_port_t target_task
);

/* Routine task_get_special_port */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_get_special_port
(
	mach_port_t task,
	int which_port,
	mach_port_t *special_port
);

/* Routine task_set_special_port_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_set_special_port_rpc
(
	mach_port_t task,
	int which_port,
	mach_port_t special_port
);

/* Routine thread_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_create
(
	mach_port_t parent_task,
	mach_port_t *child_thread
);

/* Routine thread_suspend */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_suspend
(
	mach_port_t target_thread
);

/* Routine thread_resume */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_resume
(
	mach_port_t target_thread
);

/* Routine thread_abort */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_abort
(
	mach_port_t target_thread
);

/* Routine thread_get_special_port */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_get_special_port
(
	mach_port_t thread,
	int which_port,
	mach_port_t *special_port
);

/* Routine thread_set_special_port */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_set_special_port
(
	mach_port_t thread,
	int which_port,
	mach_port_t special_port
);

/* Routine task_set_emulation */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_set_emulation
(
	mach_port_t target_port,
	vm_address_t routine_entry_pt,
	int routine_number
);

/* Routine task_ras_control */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_ras_control
(
	mach_port_t target_task,
	vm_address_t basepc,
	vm_address_t boundspc,
	int flavor
);

/* Routine vm_map_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_map_rpc
(
	mach_port_t target_task,
	vm_address_t *address,
	vm_size_t size,
	vm_address_t mask,
	boolean_t anywhere,
	mach_port_t memory_object,
	vm_offset_t offset,
	boolean_t copy,
	vm_prot_t cur_protection,
	vm_prot_t max_protection,
	vm_inherit_t inheritance
);

/* SimpleRoutine memory_object_data_error */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_data_error
(
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t size,
	kern_return_t error_value
);

/* SimpleRoutine memory_object_destroy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_destroy
(
	mach_port_t memory_control,
	kern_return_t reason
);

/* SimpleRoutine memory_object_data_supply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_data_supply
(
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_offset_t data,
	mach_msg_type_number_t dataCnt,
	boolean_t dataDealloc,
	vm_prot_t lock_value,
	boolean_t precious,
	mach_port_t reply_to
);

/* SimpleRoutine memory_object_ready */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_ready
(
	mach_port_t memory_control,
	boolean_t may_cache,
	memory_object_copy_strategy_t copy_strategy
);

/* SimpleRoutine memory_object_change_attributes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_change_attributes
(
	mach_port_t memory_control,
	boolean_t may_cache,
	memory_object_copy_strategy_t copy_strategy,
	mach_port_t reply_to
);

/* Routine vm_machine_attribute */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_machine_attribute
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_machine_attribute_t attribute,
	vm_machine_attribute_val_t *value
);

#endif	/* not defined(_mach_user_) */
