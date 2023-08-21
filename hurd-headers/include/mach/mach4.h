#ifndef	_mach4_user_
#define	_mach4_user_

/* Module mach4 */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* Routine task_enable_pc_sampling */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_enable_pc_sampling
(
	mach_port_t host,
	int *tick,
	sampled_pc_flavor_t flavor
);

/* Routine task_disable_pc_sampling */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_disable_pc_sampling
(
	mach_port_t host,
	int *samplecnt
);

/* Routine task_get_sampled_pcs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __task_get_sampled_pcs
(
	mach_port_t host,
	sampled_pc_seqno_t *seqno,
	sampled_pc_array_t sampled_pcs,
	mach_msg_type_number_t *sampled_pcsCnt
);

/* Routine thread_enable_pc_sampling */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_enable_pc_sampling
(
	mach_port_t host,
	int *tick,
	sampled_pc_flavor_t flavor
);

/* Routine thread_disable_pc_sampling */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_disable_pc_sampling
(
	mach_port_t host,
	int *samplecnt
);

/* Routine thread_get_sampled_pcs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __thread_get_sampled_pcs
(
	mach_port_t host,
	sampled_pc_seqno_t *seqno,
	sampled_pc_array_t sampled_pcs,
	mach_msg_type_number_t *sampled_pcsCnt
);

/* Routine memory_object_create_proxy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __memory_object_create_proxy
(
	mach_port_t task,
	vm_prot_t max_protection,
	const memory_object_array_t object,
	mach_msg_type_name_t objectPoly,
	mach_msg_type_number_t objectCnt,
	const rpc_vm_offset_array_t offset,
	mach_msg_type_number_t offsetCnt,
	const rpc_vm_offset_array_t start,
	mach_msg_type_number_t startCnt,
	const rpc_vm_size_array_t len,
	mach_msg_type_number_t lenCnt,
	mach_port_t *proxy
);

/* Routine vm_region_create_proxy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __vm_region_create_proxy
(
	mach_port_t task,
	vm_address_t address,
	vm_prot_t max_protection,
	vm_size_t len,
	mach_port_t *proxy
);


/* Module mach4 */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* Routine task_enable_pc_sampling */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_enable_pc_sampling
(
	mach_port_t host,
	int *tick,
	sampled_pc_flavor_t flavor
);

/* Routine task_disable_pc_sampling */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_disable_pc_sampling
(
	mach_port_t host,
	int *samplecnt
);

/* Routine task_get_sampled_pcs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t task_get_sampled_pcs
(
	mach_port_t host,
	sampled_pc_seqno_t *seqno,
	sampled_pc_array_t sampled_pcs,
	mach_msg_type_number_t *sampled_pcsCnt
);

/* Routine thread_enable_pc_sampling */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_enable_pc_sampling
(
	mach_port_t host,
	int *tick,
	sampled_pc_flavor_t flavor
);

/* Routine thread_disable_pc_sampling */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_disable_pc_sampling
(
	mach_port_t host,
	int *samplecnt
);

/* Routine thread_get_sampled_pcs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t thread_get_sampled_pcs
(
	mach_port_t host,
	sampled_pc_seqno_t *seqno,
	sampled_pc_array_t sampled_pcs,
	mach_msg_type_number_t *sampled_pcsCnt
);

/* Routine memory_object_create_proxy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t memory_object_create_proxy
(
	mach_port_t task,
	vm_prot_t max_protection,
	const memory_object_array_t object,
	mach_msg_type_name_t objectPoly,
	mach_msg_type_number_t objectCnt,
	const rpc_vm_offset_array_t offset,
	mach_msg_type_number_t offsetCnt,
	const rpc_vm_offset_array_t start,
	mach_msg_type_number_t startCnt,
	const rpc_vm_size_array_t len,
	mach_msg_type_number_t lenCnt,
	mach_port_t *proxy
);

/* Routine vm_region_create_proxy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t vm_region_create_proxy
(
	mach_port_t task,
	vm_address_t address,
	vm_prot_t max_protection,
	vm_size_t len,
	mach_port_t *proxy
);

#endif	/* not defined(_mach4_user_) */
