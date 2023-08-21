#ifndef	_default_pager_user_
#define	_default_pager_user_

/* Module default_pager */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <mach/default_pager_types.h>

/* Routine default_pager_object_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __default_pager_object_create
(
	mach_port_t default_pager,
	memory_object_t *memory_object,
	vm_size_t object_size
);

/* Routine default_pager_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __default_pager_info
(
	mach_port_t default_pager,
	default_pager_info_t *info
);

/* Routine default_pager_objects */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __default_pager_objects
(
	mach_port_t default_pager,
	default_pager_object_array_t *objects,
	mach_msg_type_number_t *objectsCnt,
	mach_port_array_t *ports,
	mach_msg_type_number_t *portsCnt
);

/* Routine default_pager_object_pages */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __default_pager_object_pages
(
	mach_port_t default_pager,
	mach_port_t memory_object,
	default_pager_page_array_t *pages,
	mach_msg_type_number_t *pagesCnt
);

/* Routine default_pager_paging_file */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __default_pager_paging_file
(
	mach_port_t default_pager,
	mach_port_t master_device_port,
	const_default_pager_filename_t filename,
	boolean_t add
);

/* Routine default_pager_register_fileserver */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __default_pager_register_fileserver
(
	mach_port_t default_pager,
	mach_port_t fileserver_port
);


/* Module default_pager */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <mach/default_pager_types.h>

/* Routine default_pager_object_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t default_pager_object_create
(
	mach_port_t default_pager,
	memory_object_t *memory_object,
	vm_size_t object_size
);

/* Routine default_pager_info */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t default_pager_info
(
	mach_port_t default_pager,
	default_pager_info_t *info
);

/* Routine default_pager_objects */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t default_pager_objects
(
	mach_port_t default_pager,
	default_pager_object_array_t *objects,
	mach_msg_type_number_t *objectsCnt,
	mach_port_array_t *ports,
	mach_msg_type_number_t *portsCnt
);

/* Routine default_pager_object_pages */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t default_pager_object_pages
(
	mach_port_t default_pager,
	mach_port_t memory_object,
	default_pager_page_array_t *pages,
	mach_msg_type_number_t *pagesCnt
);

/* Routine default_pager_paging_file */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t default_pager_paging_file
(
	mach_port_t default_pager,
	mach_port_t master_device_port,
	const_default_pager_filename_t filename,
	boolean_t add
);

/* Routine default_pager_register_fileserver */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t default_pager_register_fileserver
(
	mach_port_t default_pager,
	mach_port_t fileserver_port
);

#endif	/* not defined(_default_pager_user_) */
