#ifndef	_io_reply_user_
#define	_io_reply_user_

/* Module io_reply */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <device/device_types.h>
#include <device/net_status.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/statfs.h>
#include <sys/resource.h>
#include <sys/utsname.h>
#include <hurd/hurd_types.h>
#include <fcntl.h>

/* SimpleRoutine io_write_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_write_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	vm_size_t amount
);

/* SimpleRoutine io_read_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_read_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	const_data_t data,
	mach_msg_type_number_t dataCnt
);

/* SimpleRoutine io_seek_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_seek_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	__loff_t newp
);

/* SimpleRoutine io_readable_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_readable_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	vm_size_t amount
);

/* SimpleRoutine io_set_all_openmodes_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_set_all_openmodes_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_get_openmodes_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_get_openmodes_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	int bits
);

/* SimpleRoutine io_set_some_openmodes_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_set_some_openmodes_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_clear_some_openmodes_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_clear_some_openmodes_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_async_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_async_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t async_id_port,
	mach_msg_type_name_t async_id_portPoly
);

/* SimpleRoutine io_mod_owner_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_mod_owner_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_get_owner_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_get_owner_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	pid_t owner
);

/* SimpleRoutine io_get_icky_async_id_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_get_icky_async_id_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t id_port,
	mach_msg_type_name_t id_portPoly
);

/* SimpleRoutine io_select_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_select_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	int select_result
);

/* SimpleRoutine io_stat_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_stat_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	io_statbuf_t stat_info
);

/* SimpleRoutine io_restrict_auth_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_restrict_auth_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t new_object,
	mach_msg_type_name_t new_objectPoly
);

/* SimpleRoutine io_duplicate_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_duplicate_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t newport,
	mach_msg_type_name_t newportPoly
);

/* SimpleRoutine io_server_version_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_server_version_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	const_string_t server_name,
	int server_major_version,
	int server_minor_version,
	int server_edit_level
);

/* SimpleRoutine io_map_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_map_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t rdobject,
	mach_msg_type_name_t rdobjectPoly,
	mach_port_t wrobject,
	mach_msg_type_name_t wrobjectPoly
);

/* SimpleRoutine io_map_cntl_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_map_cntl_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t memobj,
	mach_msg_type_name_t memobjPoly
);

/* SimpleRoutine io_get_conch_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_get_conch_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_release_conch_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_release_conch_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_eofnotify_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_eofnotify_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_prenotify_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_prenotify_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_postnotify_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_postnotify_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_readnotify_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_readnotify_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_readsleep_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_readsleep_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_sigio_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_sigio_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_pathconf_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_pathconf_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	int value
);

/* SimpleRoutine io_identity_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_identity_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t idport,
	mach_msg_type_name_t idportPoly,
	mach_port_t fsidport,
	mach_msg_type_name_t fsidportPoly,
	__ino64_t fileno
);

/* SimpleRoutine io_revoke_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_revoke_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_select_timeout_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_select_timeout_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	int select_result
);


/* Module io_reply */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <device/device_types.h>
#include <device/net_status.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/statfs.h>
#include <sys/resource.h>
#include <sys/utsname.h>
#include <hurd/hurd_types.h>
#include <fcntl.h>

/* SimpleRoutine io_write_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_write_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	vm_size_t amount
);

/* SimpleRoutine io_read_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_read_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	const_data_t data,
	mach_msg_type_number_t dataCnt
);

/* SimpleRoutine io_seek_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_seek_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	__loff_t newp
);

/* SimpleRoutine io_readable_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_readable_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	vm_size_t amount
);

/* SimpleRoutine io_set_all_openmodes_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_set_all_openmodes_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_get_openmodes_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_get_openmodes_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	int bits
);

/* SimpleRoutine io_set_some_openmodes_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_set_some_openmodes_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_clear_some_openmodes_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_clear_some_openmodes_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_async_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_async_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t async_id_port,
	mach_msg_type_name_t async_id_portPoly
);

/* SimpleRoutine io_mod_owner_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_mod_owner_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_get_owner_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_get_owner_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	pid_t owner
);

/* SimpleRoutine io_get_icky_async_id_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_get_icky_async_id_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t id_port,
	mach_msg_type_name_t id_portPoly
);

/* SimpleRoutine io_select_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_select_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	int select_result
);

/* SimpleRoutine io_stat_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_stat_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	io_statbuf_t stat_info
);

/* SimpleRoutine io_restrict_auth_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_restrict_auth_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t new_object,
	mach_msg_type_name_t new_objectPoly
);

/* SimpleRoutine io_duplicate_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_duplicate_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t newport,
	mach_msg_type_name_t newportPoly
);

/* SimpleRoutine io_server_version_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_server_version_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	const_string_t server_name,
	int server_major_version,
	int server_minor_version,
	int server_edit_level
);

/* SimpleRoutine io_map_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_map_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t rdobject,
	mach_msg_type_name_t rdobjectPoly,
	mach_port_t wrobject,
	mach_msg_type_name_t wrobjectPoly
);

/* SimpleRoutine io_map_cntl_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_map_cntl_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t memobj,
	mach_msg_type_name_t memobjPoly
);

/* SimpleRoutine io_get_conch_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_get_conch_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_release_conch_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_release_conch_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_eofnotify_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_eofnotify_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_prenotify_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_prenotify_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_postnotify_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_postnotify_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_readnotify_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_readnotify_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_readsleep_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_readsleep_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_sigio_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_sigio_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_pathconf_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_pathconf_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	int value
);

/* SimpleRoutine io_identity_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_identity_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	mach_port_t idport,
	mach_msg_type_name_t idportPoly,
	mach_port_t fsidport,
	mach_msg_type_name_t fsidportPoly,
	__ino64_t fileno
);

/* SimpleRoutine io_revoke_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_revoke_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code
);

/* SimpleRoutine io_select_timeout_reply */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_select_timeout_reply
(
	mach_port_t reply,
	mach_msg_type_name_t replyPoly,
	kern_return_t return_code,
	int select_result
);

#endif	/* not defined(_io_reply_user_) */
