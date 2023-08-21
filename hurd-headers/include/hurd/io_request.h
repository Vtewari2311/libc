#ifndef	_io_request_user_
#define	_io_request_user_

/* Module io_request */

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

/* SimpleRoutine io_write_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_write_request
(
	io_t io_object,
	mach_port_t reply,
	const_data_t data,
	mach_msg_type_number_t dataCnt,
	__loff_t offset
);

/* SimpleRoutine io_read_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_read_request
(
	io_t io_object,
	mach_port_t reply,
	__loff_t offset,
	vm_size_t amount
);

/* SimpleRoutine io_seek_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_seek_request
(
	io_t io_object,
	mach_port_t reply,
	__loff_t offset,
	int whence
);

/* SimpleRoutine io_readable_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_readable_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_set_all_openmodes_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_set_all_openmodes_request
(
	io_t io_object,
	mach_port_t reply,
	int newbits
);

/* SimpleRoutine io_get_openmodes_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_get_openmodes_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_set_some_openmodes_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_set_some_openmodes_request
(
	io_t io_object,
	mach_port_t reply,
	int bits_to_set
);

/* SimpleRoutine io_clear_some_openmodes_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_clear_some_openmodes_request
(
	io_t io_object,
	mach_port_t reply,
	int bits_to_clear
);

/* SimpleRoutine io_async_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_async_request
(
	io_t io_object,
	mach_port_t reply,
	mach_port_t notify_port,
	mach_msg_type_name_t notify_portPoly
);

/* SimpleRoutine io_mod_owner_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_mod_owner_request
(
	io_t io_object,
	mach_port_t reply,
	pid_t owner
);

/* SimpleRoutine io_get_owner_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_get_owner_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_get_icky_async_id_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_get_icky_async_id_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_select_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_select_request
(
	io_t io_object,
	mach_port_t reply,
	int select_type
);

/* SimpleRoutine io_stat_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_stat_request
(
	io_t stat_object,
	mach_port_t reply
);

/* SimpleRoutine io_restrict_auth_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_restrict_auth_request
(
	io_t io_object,
	mach_port_t reply,
	const_idarray_t uids,
	mach_msg_type_number_t uidsCnt,
	const_idarray_t gids,
	mach_msg_type_number_t gidsCnt
);

/* SimpleRoutine io_duplicate_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_duplicate_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_server_version_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_server_version_request
(
	io_t vers_object,
	mach_port_t reply
);

/* SimpleRoutine io_map_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_map_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_map_cntl_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_map_cntl_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_get_conch_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_get_conch_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_release_conch_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_release_conch_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_eofnotify_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_eofnotify_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_prenotify_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_prenotify_request
(
	io_t io_object,
	mach_port_t reply,
	vm_offset_t write_start,
	vm_offset_t write_end
);

/* SimpleRoutine io_postnotify_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_postnotify_request
(
	io_t io_object,
	mach_port_t reply,
	vm_offset_t write_start,
	vm_offset_t write_end
);

/* SimpleRoutine io_readnotify_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_readnotify_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_readsleep_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_readsleep_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_sigio_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_sigio_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_pathconf_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_pathconf_request
(
	io_t io_object,
	mach_port_t reply,
	int name
);

/* SimpleRoutine io_identity_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_identity_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_revoke_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_revoke_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_select_timeout_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_select_timeout_request
(
	io_t io_object,
	mach_port_t reply,
	timespec_t timeout,
	int select_type
);


/* Module io_request */

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

/* SimpleRoutine io_write_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_write_request
(
	io_t io_object,
	mach_port_t reply,
	const_data_t data,
	mach_msg_type_number_t dataCnt,
	__loff_t offset
);

/* SimpleRoutine io_read_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_read_request
(
	io_t io_object,
	mach_port_t reply,
	__loff_t offset,
	vm_size_t amount
);

/* SimpleRoutine io_seek_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_seek_request
(
	io_t io_object,
	mach_port_t reply,
	__loff_t offset,
	int whence
);

/* SimpleRoutine io_readable_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_readable_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_set_all_openmodes_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_set_all_openmodes_request
(
	io_t io_object,
	mach_port_t reply,
	int newbits
);

/* SimpleRoutine io_get_openmodes_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_get_openmodes_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_set_some_openmodes_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_set_some_openmodes_request
(
	io_t io_object,
	mach_port_t reply,
	int bits_to_set
);

/* SimpleRoutine io_clear_some_openmodes_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_clear_some_openmodes_request
(
	io_t io_object,
	mach_port_t reply,
	int bits_to_clear
);

/* SimpleRoutine io_async_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_async_request
(
	io_t io_object,
	mach_port_t reply,
	mach_port_t notify_port,
	mach_msg_type_name_t notify_portPoly
);

/* SimpleRoutine io_mod_owner_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_mod_owner_request
(
	io_t io_object,
	mach_port_t reply,
	pid_t owner
);

/* SimpleRoutine io_get_owner_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_get_owner_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_get_icky_async_id_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_get_icky_async_id_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_select_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_select_request
(
	io_t io_object,
	mach_port_t reply,
	int select_type
);

/* SimpleRoutine io_stat_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_stat_request
(
	io_t stat_object,
	mach_port_t reply
);

/* SimpleRoutine io_restrict_auth_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_restrict_auth_request
(
	io_t io_object,
	mach_port_t reply,
	const_idarray_t uids,
	mach_msg_type_number_t uidsCnt,
	const_idarray_t gids,
	mach_msg_type_number_t gidsCnt
);

/* SimpleRoutine io_duplicate_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_duplicate_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_server_version_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_server_version_request
(
	io_t vers_object,
	mach_port_t reply
);

/* SimpleRoutine io_map_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_map_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_map_cntl_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_map_cntl_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_get_conch_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_get_conch_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_release_conch_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_release_conch_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_eofnotify_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_eofnotify_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_prenotify_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_prenotify_request
(
	io_t io_object,
	mach_port_t reply,
	vm_offset_t write_start,
	vm_offset_t write_end
);

/* SimpleRoutine io_postnotify_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_postnotify_request
(
	io_t io_object,
	mach_port_t reply,
	vm_offset_t write_start,
	vm_offset_t write_end
);

/* SimpleRoutine io_readnotify_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_readnotify_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_readsleep_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_readsleep_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_sigio_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_sigio_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_pathconf_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_pathconf_request
(
	io_t io_object,
	mach_port_t reply,
	int name
);

/* SimpleRoutine io_identity_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_identity_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_revoke_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_revoke_request
(
	io_t io_object,
	mach_port_t reply
);

/* SimpleRoutine io_select_timeout_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_select_timeout_request
(
	io_t io_object,
	mach_port_t reply,
	timespec_t timeout,
	int select_type
);

#endif	/* not defined(_io_request_user_) */
