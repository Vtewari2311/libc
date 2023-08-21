#ifndef	_memory_object_default_user_
#define	_memory_object_default_user_

/* Module memory_object_default */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* SimpleRoutine memory_object_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_create
(
	mach_port_t old_memory_object,
	mach_port_t new_memory_object,
	vm_size_t new_object_size,
	mach_port_t new_control_port,
	mach_port_t new_name,
	vm_size_t new_page_size
);

/* SimpleRoutine memory_object_data_initialize */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_data_initialize
(
	mach_port_t memory_object,
	mach_port_t memory_control_port,
	vm_offset_t offset,
	vm_offset_t data,
	mach_msg_type_number_t dataCnt
);


/* Module memory_object_default */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* SimpleRoutine memory_object_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_create
(
	mach_port_t old_memory_object,
	mach_port_t new_memory_object,
	vm_size_t new_object_size,
	mach_port_t new_control_port,
	mach_port_t new_name,
	vm_size_t new_page_size
);

/* SimpleRoutine memory_object_data_initialize */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_data_initialize
(
	mach_port_t memory_object,
	mach_port_t memory_control_port,
	vm_offset_t offset,
	vm_offset_t data,
	mach_msg_type_number_t dataCnt
);

#endif	/* not defined(_memory_object_default_user_) */
