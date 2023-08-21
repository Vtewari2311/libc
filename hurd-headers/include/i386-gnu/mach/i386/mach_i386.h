#ifndef	_mach_i386_user_
#define	_mach_i386_user_

/* Module mach_i386 */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <mach/machine/mach_i386_types.h>

/* Routine i386_set_ldt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __i386_set_ldt
(
	mach_port_t target_thread,
	int first_selector,
	const_descriptor_list_t desc_list,
	mach_msg_type_number_t desc_listCnt
);

/* Routine i386_get_ldt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __i386_get_ldt
(
	mach_port_t target_thread,
	int first_selector,
	int selector_count,
	descriptor_list_t *desc_list,
	mach_msg_type_number_t *desc_listCnt
);

/* Routine i386_io_perm_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __i386_io_perm_create
(
	mach_port_t master_port,
	io_port_t from,
	io_port_t to,
	mach_port_t *io_perm
);

/* Routine i386_io_perm_modify */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __i386_io_perm_modify
(
	mach_port_t target_task,
	mach_port_t io_perm,
	boolean_t enable
);

/* Routine i386_set_gdt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __i386_set_gdt
(
	mach_port_t target_thread,
	int *selector,
	descriptor_t desc
);

/* Routine i386_get_gdt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __i386_get_gdt
(
	mach_port_t target_thread,
	int selector,
	descriptor_t *desc
);


/* Module mach_i386 */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <mach/machine/mach_i386_types.h>

/* Routine i386_set_ldt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t i386_set_ldt
(
	mach_port_t target_thread,
	int first_selector,
	const_descriptor_list_t desc_list,
	mach_msg_type_number_t desc_listCnt
);

/* Routine i386_get_ldt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t i386_get_ldt
(
	mach_port_t target_thread,
	int first_selector,
	int selector_count,
	descriptor_list_t *desc_list,
	mach_msg_type_number_t *desc_listCnt
);

/* Routine i386_io_perm_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t i386_io_perm_create
(
	mach_port_t master_port,
	io_port_t from,
	io_port_t to,
	mach_port_t *io_perm
);

/* Routine i386_io_perm_modify */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t i386_io_perm_modify
(
	mach_port_t target_task,
	mach_port_t io_perm,
	boolean_t enable
);

/* Routine i386_set_gdt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t i386_set_gdt
(
	mach_port_t target_thread,
	int *selector,
	descriptor_t desc
);

/* Routine i386_get_gdt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t i386_get_gdt
(
	mach_port_t target_thread,
	int selector,
	descriptor_t *desc
);

#endif	/* not defined(_mach_i386_user_) */
