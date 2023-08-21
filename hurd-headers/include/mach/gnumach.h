#ifndef	_gnumach_user_
#define	_gnumach_user_

/* Module gnumach */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <mach_debug/mach_debug_types.h>

/* Routine vm_cache_statistics */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_cache_statistics
(
	mach_port_t target_task,
	vm_cache_statistics_data_t *vm_cache_stats
);

/* SimpleRoutine thread_terminate_release */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_terminate_release
(
	mach_port_t thread,
	mach_port_t task,
	mach_port_name_t thread_name,
	mach_port_name_t reply_port,
	vm_address_t address,
	vm_size_t size
);

/* SimpleRoutine task_set_name */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_set_name
(
	mach_port_t task,
	const_kernel_debug_name_t name
);

/* Routine register_new_task_notification */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __register_new_task_notification
(
	mach_port_t host_priv,
	mach_port_t notification,
	mach_msg_type_name_t notificationPoly
);

/* Routine gsync_wait */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __gsync_wait
(
	mach_port_t task,
	vm_address_t addr,
	unsigned val1,
	unsigned val2,
	natural_t msec,
	int flags
);

/* SimpleRoutine gsync_wake */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __gsync_wake
(
	mach_port_t task,
	vm_address_t addr,
	unsigned val,
	int flags
);

/* SimpleRoutine gsync_requeue */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __gsync_requeue
(
	mach_port_t task,
	vm_address_t src_addr,
	vm_address_t dst_addr,
	boolean_t wake_one,
	int flags
);

/* Routine vm_wire_all */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_wire_all
(
	mach_port_t host,
	mach_port_t task,
	vm_wire_t flags
);

/* Routine vm_object_sync */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_object_sync
(
	mach_port_t object,
	vm_offset_t offset,
	vm_size_t size,
	boolean_t should_flush,
	boolean_t should_return,
	boolean_t should_iosync
);

/* Routine vm_msync */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_msync
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_sync_t sync_flags
);

/* Routine vm_allocate_contiguous */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_allocate_contiguous
(
	mach_port_t host_priv,
	mach_port_t target_task,
	vm_address_t *vaddr,
	rpc_phys_addr_t *paddr,
	vm_size_t size,
	rpc_phys_addr_t pmin,
	rpc_phys_addr_t pmax,
	rpc_phys_addr_t palign
);

/* SimpleRoutine task_set_essential */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_set_essential
(
	mach_port_t task,
	boolean_t essential
);


/* Module gnumach */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <mach_debug/mach_debug_types.h>

/* Routine vm_cache_statistics */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_cache_statistics
(
	mach_port_t target_task,
	vm_cache_statistics_data_t *vm_cache_stats
);

/* SimpleRoutine thread_terminate_release */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_terminate_release
(
	mach_port_t thread,
	mach_port_t task,
	mach_port_name_t thread_name,
	mach_port_name_t reply_port,
	vm_address_t address,
	vm_size_t size
);

/* SimpleRoutine task_set_name */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_set_name
(
	mach_port_t task,
	const_kernel_debug_name_t name
);

/* Routine register_new_task_notification */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t register_new_task_notification
(
	mach_port_t host_priv,
	mach_port_t notification,
	mach_msg_type_name_t notificationPoly
);

/* Routine gsync_wait */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t gsync_wait
(
	mach_port_t task,
	vm_address_t addr,
	unsigned val1,
	unsigned val2,
	natural_t msec,
	int flags
);

/* SimpleRoutine gsync_wake */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t gsync_wake
(
	mach_port_t task,
	vm_address_t addr,
	unsigned val,
	int flags
);

/* SimpleRoutine gsync_requeue */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t gsync_requeue
(
	mach_port_t task,
	vm_address_t src_addr,
	vm_address_t dst_addr,
	boolean_t wake_one,
	int flags
);

/* Routine vm_wire_all */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_wire_all
(
	mach_port_t host,
	mach_port_t task,
	vm_wire_t flags
);

/* Routine vm_object_sync */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_object_sync
(
	mach_port_t object,
	vm_offset_t offset,
	vm_size_t size,
	boolean_t should_flush,
	boolean_t should_return,
	boolean_t should_iosync
);

/* Routine vm_msync */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_msync
(
	mach_port_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_sync_t sync_flags
);

/* Routine vm_allocate_contiguous */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_allocate_contiguous
(
	mach_port_t host_priv,
	mach_port_t target_task,
	vm_address_t *vaddr,
	rpc_phys_addr_t *paddr,
	vm_size_t size,
	rpc_phys_addr_t pmin,
	rpc_phys_addr_t pmax,
	rpc_phys_addr_t palign
);

/* SimpleRoutine task_set_essential */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_set_essential
(
	mach_port_t task,
	boolean_t essential
);

#endif	/* not defined(_gnumach_user_) */
