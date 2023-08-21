#ifndef	_mach_port_user_
#define	_mach_port_user_

/* Module mach_port */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* Routine mach_port_names */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_names
(
	mach_port_t task,
	mach_port_name_array_t *names,
	mach_msg_type_number_t *namesCnt,
	mach_port_type_array_t *types,
	mach_msg_type_number_t *typesCnt
);

/* Routine mach_port_type */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_type
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_type_t *ptype
);

/* Routine mach_port_rename */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_rename
(
	mach_port_t task,
	mach_port_name_t old_name,
	mach_port_name_t new_name
);

/* Routine mach_port_allocate_name_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_allocate_name_rpc
(
	mach_port_t task,
	mach_port_right_t right,
	mach_port_name_t name
);

/* Routine mach_port_allocate_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_allocate_rpc
(
	mach_port_t task,
	mach_port_right_t right,
	mach_port_name_t *name
);

/* Routine mach_port_destroy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_destroy
(
	mach_port_t task,
	mach_port_name_t name
);

/* Routine mach_port_deallocate_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_deallocate_rpc
(
	mach_port_t task,
	mach_port_name_t name
);

/* Routine mach_port_get_refs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_get_refs
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_right_t right,
	mach_port_urefs_t *refs
);

/* Routine mach_port_mod_refs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_mod_refs
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_right_t right,
	mach_port_delta_t delta
);

/* Routine mach_port_set_qlimit */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_set_qlimit
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_msgcount_t qlimit
);

/* Routine mach_port_set_mscount */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_set_mscount
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_mscount_t mscount
);

/* Routine mach_port_get_set_status */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_get_set_status
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_name_array_t *members,
	mach_msg_type_number_t *membersCnt
);

/* Routine mach_port_move_member */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_move_member
(
	mach_port_t task,
	mach_port_name_t member,
	mach_port_name_t after
);

/* Routine mach_port_request_notification */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_request_notification
(
	mach_port_t task,
	mach_port_name_t name,
	mach_msg_id_t id,
	mach_port_mscount_t sync,
	mach_port_t notify,
	mach_msg_type_name_t notifyPoly,
	mach_port_t *previous
);

/* Routine mach_port_insert_right_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_insert_right_rpc
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_t poly,
	mach_msg_type_name_t polyPoly
);

/* Routine mach_port_extract_right */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_extract_right
(
	mach_port_t task,
	mach_port_name_t name,
	mach_msg_type_name_t msgt_name,
	mach_port_t *poly,
	mach_msg_type_name_t *polyPoly
);

/* Routine mach_port_get_receive_status */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_get_receive_status
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_status_t *status
);

/* Routine mach_port_set_seqno */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_set_seqno
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_seqno_t seqno
);

/* Routine mach_port_set_protected_payload */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_set_protected_payload
(
	mach_port_t task,
	mach_port_name_t name,
	rpc_uintptr_t payload
);

/* Routine mach_port_clear_protected_payload */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_port_clear_protected_payload
(
	mach_port_t task,
	mach_port_name_t name
);


/* Module mach_port */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* Routine mach_port_names */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_names
(
	mach_port_t task,
	mach_port_name_array_t *names,
	mach_msg_type_number_t *namesCnt,
	mach_port_type_array_t *types,
	mach_msg_type_number_t *typesCnt
);

/* Routine mach_port_type */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_type
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_type_t *ptype
);

/* Routine mach_port_rename */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_rename
(
	mach_port_t task,
	mach_port_name_t old_name,
	mach_port_name_t new_name
);

/* Routine mach_port_allocate_name_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_allocate_name_rpc
(
	mach_port_t task,
	mach_port_right_t right,
	mach_port_name_t name
);

/* Routine mach_port_allocate_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_allocate_rpc
(
	mach_port_t task,
	mach_port_right_t right,
	mach_port_name_t *name
);

/* Routine mach_port_destroy */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_destroy
(
	mach_port_t task,
	mach_port_name_t name
);

/* Routine mach_port_deallocate_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_deallocate_rpc
(
	mach_port_t task,
	mach_port_name_t name
);

/* Routine mach_port_get_refs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_get_refs
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_right_t right,
	mach_port_urefs_t *refs
);

/* Routine mach_port_mod_refs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_mod_refs
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_right_t right,
	mach_port_delta_t delta
);

/* Routine mach_port_set_qlimit */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_set_qlimit
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_msgcount_t qlimit
);

/* Routine mach_port_set_mscount */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_set_mscount
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_mscount_t mscount
);

/* Routine mach_port_get_set_status */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_get_set_status
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_name_array_t *members,
	mach_msg_type_number_t *membersCnt
);

/* Routine mach_port_move_member */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_move_member
(
	mach_port_t task,
	mach_port_name_t member,
	mach_port_name_t after
);

/* Routine mach_port_request_notification */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_request_notification
(
	mach_port_t task,
	mach_port_name_t name,
	mach_msg_id_t id,
	mach_port_mscount_t sync,
	mach_port_t notify,
	mach_msg_type_name_t notifyPoly,
	mach_port_t *previous
);

/* Routine mach_port_insert_right_rpc */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_insert_right_rpc
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_t poly,
	mach_msg_type_name_t polyPoly
);

/* Routine mach_port_extract_right */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_extract_right
(
	mach_port_t task,
	mach_port_name_t name,
	mach_msg_type_name_t msgt_name,
	mach_port_t *poly,
	mach_msg_type_name_t *polyPoly
);

/* Routine mach_port_get_receive_status */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_get_receive_status
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_status_t *status
);

/* Routine mach_port_set_seqno */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_set_seqno
(
	mach_port_t task,
	mach_port_name_t name,
	mach_port_seqno_t seqno
);

/* Routine mach_port_set_protected_payload */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_set_protected_payload
(
	mach_port_t task,
	mach_port_name_t name,
	rpc_uintptr_t payload
);

/* Routine mach_port_clear_protected_payload */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_port_clear_protected_payload
(
	mach_port_t task,
	mach_port_name_t name
);

#endif	/* not defined(_mach_port_user_) */
