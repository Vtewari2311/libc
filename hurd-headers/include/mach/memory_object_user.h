#ifndef	_memory_object_user_
#define	_memory_object_user_

/* Module memory_object */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* SimpleRoutine memory_object_init */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_init
(
	mach_port_t memory_object,
	mach_port_t memory_control,
	mach_port_t memory_object_name,
	vm_size_t memory_object_page_size
);

/* SimpleRoutine memory_object_terminate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_terminate
(
	mach_port_t memory_object,
	mach_port_t memory_control,
	mach_port_t memory_object_name
);

/* SimpleRoutine memory_object_copy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_copy
(
	mach_port_t old_memory_object,
	mach_port_t old_memory_control,
	vm_offset_t offset,
	vm_size_t length,
	mach_port_t new_memory_object
);

/* SimpleRoutine memory_object_data_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_data_request
(
	mach_port_t memory_object,
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t length,
	vm_prot_t desired_access
);

/* SimpleRoutine memory_object_data_unlock */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_data_unlock
(
	mach_port_t memory_object,
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t length,
	vm_prot_t desired_access
);

/* SimpleRoutine memory_object_lock_completed */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_lock_completed
(
	mach_port_t memory_object,
	mach_msg_type_name_t memory_objectPoly,
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t length
);

/* SimpleRoutine memory_object_supply_completed */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_supply_completed
(
	mach_port_t memory_object,
	mach_msg_type_name_t memory_objectPoly,
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t length,
	kern_return_t result,
	vm_offset_t error_offset
);

/* SimpleRoutine memory_object_data_return */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_data_return
(
	mach_port_t memory_object,
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_offset_t data,
	mach_msg_type_number_t dataCnt,
	boolean_t dirty,
	boolean_t kernel_copy
);

/* SimpleRoutine memory_object_change_completed */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_change_completed
(
	mach_port_t memory_object,
	mach_msg_type_name_t memory_objectPoly,
	boolean_t may_cache,
	memory_object_copy_strategy_t copy_strategy
);


/* Module memory_object */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* SimpleRoutine memory_object_init */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_init
(
	mach_port_t memory_object,
	mach_port_t memory_control,
	mach_port_t memory_object_name,
	vm_size_t memory_object_page_size
);

/* SimpleRoutine memory_object_terminate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_terminate
(
	mach_port_t memory_object,
	mach_port_t memory_control,
	mach_port_t memory_object_name
);

/* SimpleRoutine memory_object_copy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_copy
(
	mach_port_t old_memory_object,
	mach_port_t old_memory_control,
	vm_offset_t offset,
	vm_size_t length,
	mach_port_t new_memory_object
);

/* SimpleRoutine memory_object_data_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_data_request
(
	mach_port_t memory_object,
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t length,
	vm_prot_t desired_access
);

/* SimpleRoutine memory_object_data_unlock */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_data_unlock
(
	mach_port_t memory_object,
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t length,
	vm_prot_t desired_access
);

/* SimpleRoutine memory_object_lock_completed */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_lock_completed
(
	mach_port_t memory_object,
	mach_msg_type_name_t memory_objectPoly,
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t length
);

/* SimpleRoutine memory_object_supply_completed */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_supply_completed
(
	mach_port_t memory_object,
	mach_msg_type_name_t memory_objectPoly,
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_size_t length,
	kern_return_t result,
	vm_offset_t error_offset
);

/* SimpleRoutine memory_object_data_return */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_data_return
(
	mach_port_t memory_object,
	mach_port_t memory_control,
	vm_offset_t offset,
	vm_offset_t data,
	mach_msg_type_number_t dataCnt,
	boolean_t dirty,
	boolean_t kernel_copy
);

/* SimpleRoutine memory_object_change_completed */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_change_completed
(
	mach_port_t memory_object,
	mach_msg_type_name_t memory_objectPoly,
	boolean_t may_cache,
	memory_object_copy_strategy_t copy_strategy
);

#endif	/* not defined(_memory_object_user_) */
