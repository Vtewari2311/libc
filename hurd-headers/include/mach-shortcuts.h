#include <mach/mach_types.h>
#include <mach/message.h>

/* Routine task_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_create
(
	mach_port_t target_task,
	boolean_t inherit_memory,
	mach_port_t *child_task
);

/* Routine task_terminate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_terminate
(
	mach_port_t target_task
);

/* Routine vm_allocate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_allocate
(
	mach_port_t target_task,
	vm_address_t *address,
	vm_size_t size,
	boolean_t anywhere
);

/* Routine vm_deallocate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_deallocate
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size
);

/* Routine task_suspend */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_suspend
(
	mach_port_t target_task
);

/* Routine task_set_special_port */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_set_special_port
(
	mach_port_t task,
	int which_port,
	mach_port_t special_port
);

/* Routine vm_map */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_map
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

/* Routine task_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_create
(
	mach_port_t target_task,
	boolean_t inherit_memory,
	mach_port_t *child_task
);

/* Routine task_terminate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_terminate
(
	mach_port_t target_task
);

/* Routine vm_allocate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_allocate
(
	mach_port_t target_task,
	vm_address_t *address,
	vm_size_t size,
	boolean_t anywhere
);

/* Routine vm_deallocate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_deallocate
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size
);

/* Routine task_suspend */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_suspend
(
	mach_port_t target_task
);

/* Routine task_set_special_port */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_set_special_port
(
	mach_port_t task,
	int which_port,
	mach_port_t special_port
);

/* Routine vm_map */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_map
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

/* Routine thread_depress_abort */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_depress_abort
(
	mach_port_t thread
);

/* Routine thread_depress_abort */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_depress_abort
(
	mach_port_t thread
);

/* Routine mach_port_allocate_name */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_allocate_name
(
	mach_port_t task,
	mach_port_right_t right,
	mach_port_name_t name
);

/* Routine mach_port_allocate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_allocate
(
	mach_port_t task,
	mach_port_right_t right,
	mach_port_name_t *name
);

/* Routine mach_port_deallocate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_deallocate
(
	mach_port_t task,
	mach_port_name_t name
);

/* Routine mach_port_insert_right */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_insert_right
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_t poly,
	mach_msg_type_name_t polyPoly
);

/* Routine mach_port_allocate_name */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_allocate_name
(
	mach_port_t task,
	mach_port_right_t right,
	mach_port_name_t name
);

/* Routine mach_port_allocate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_allocate
(
	mach_port_t task,
	mach_port_right_t right,
	mach_port_name_t *name
);

/* Routine mach_port_deallocate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_deallocate
(
	mach_port_t task,
	mach_port_name_t name
);

/* Routine mach_port_insert_right */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_insert_right
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_t poly,
	mach_msg_type_name_t polyPoly
);

