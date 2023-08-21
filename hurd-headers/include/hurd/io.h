#ifndef	_io_user_
#define	_io_user_

/* Module io */

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

/* Routine io_write */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_write
(
	io_t io_object,
	const_data_t data,
	mach_msg_type_number_t dataCnt,
	__loff_t offset,
	vm_size_t *amount
);

/* Routine io_read */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_read
(
	io_t io_object,
	data_t *data,
	mach_msg_type_number_t *dataCnt,
	__loff_t offset,
	vm_size_t amount
);

/* Routine io_seek */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_seek
(
	io_t io_object,
	__loff_t offset,
	int whence,
	__loff_t *newp
);

/* Routine io_readable */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_readable
(
	io_t io_object,
	vm_size_t *amount
);

/* Routine io_set_all_openmodes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_set_all_openmodes
(
	io_t io_object,
	int newbits
);

/* Routine io_get_openmodes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_get_openmodes
(
	io_t io_object,
	int *bits
);

/* Routine io_set_some_openmodes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_set_some_openmodes
(
	io_t io_object,
	int bits_to_set
);

/* Routine io_clear_some_openmodes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_clear_some_openmodes
(
	io_t io_object,
	int bits_to_clear
);

/* Routine io_async */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_async
(
	io_t io_object,
	mach_port_t notify_port,
	mach_msg_type_name_t notify_portPoly,
	mach_port_t *async_id_port
);

/* Routine io_mod_owner */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_mod_owner
(
	io_t io_object,
	pid_t owner
);

/* Routine io_get_owner */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_get_owner
(
	io_t io_object,
	pid_t *owner
);

/* Routine io_get_icky_async_id */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_get_icky_async_id
(
	io_t io_object,
	mach_port_t *icky_async_id_port
);

/* Routine io_select */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_select
(
	io_t io_object,
	mach_port_t reply,
	natural_t timeout,
	int *select_type
);

/* Routine io_stat */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_stat
(
	io_t stat_object,
	io_statbuf_t *stat_info
);

/* SimpleRoutine io_reauthenticate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_reauthenticate
(
	io_t auth_object,
	mach_port_t rendezvous2,
	mach_msg_type_name_t rendezvous2Poly
);

/* Routine io_restrict_auth */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_restrict_auth
(
	io_t io_object,
	mach_port_t *new_object,
	const_idarray_t uids,
	mach_msg_type_number_t uidsCnt,
	const_idarray_t gids,
	mach_msg_type_number_t gidsCnt
);

/* Routine io_duplicate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_duplicate
(
	io_t io_object,
	mach_port_t *newport
);

/* Routine io_server_version */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_server_version
(
	io_t vers_object,
	string_t server_name,
	int *server_major_version,
	int *server_minor_version,
	int *server_edit_level
);

/* Routine io_map */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_map
(
	io_t io_object,
	mach_port_t *memobjrd,
	mach_port_t *memobjwt
);

/* Routine io_map_cntl */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_map_cntl
(
	io_t io_object,
	mach_port_t *memobj
);

/* Routine io_get_conch */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_get_conch
(
	io_t io_object
);

/* Routine io_release_conch */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_release_conch
(
	io_t io_object
);

/* Routine io_eofnotify */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_eofnotify
(
	io_t io_object
);

/* Routine io_prenotify */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_prenotify
(
	io_t io_object,
	vm_offset_t write_start,
	vm_offset_t write_end
);

/* Routine io_postnotify */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_postnotify
(
	io_t io_object,
	vm_offset_t write_start,
	vm_offset_t write_end
);

/* Routine io_readnotify */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_readnotify
(
	io_t io_object
);

/* Routine io_readsleep */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_readsleep
(
	io_t io_object
);

/* Routine io_sigio */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_sigio
(
	io_t io_object
);

/* Routine io_pathconf */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_pathconf
(
	io_t io_object,
	int name,
	int *value
);

/* Routine io_identity */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_identity
(
	io_t io_object,
	mach_port_t *idport,
	mach_port_t *fsidport,
	__ino64_t *fileno
);

/* Routine io_revoke */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_revoke
(
	io_t io_object
);

/* Routine io_select_timeout */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __io_select_timeout
(
	io_t io_object,
	mach_port_t reply,
	timespec_t timeout,
	int *select_type
);


/* Module io */

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

/* Routine io_write */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_write
(
	io_t io_object,
	const_data_t data,
	mach_msg_type_number_t dataCnt,
	__loff_t offset,
	vm_size_t *amount
);

/* Routine io_read */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_read
(
	io_t io_object,
	data_t *data,
	mach_msg_type_number_t *dataCnt,
	__loff_t offset,
	vm_size_t amount
);

/* Routine io_seek */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_seek
(
	io_t io_object,
	__loff_t offset,
	int whence,
	__loff_t *newp
);

/* Routine io_readable */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_readable
(
	io_t io_object,
	vm_size_t *amount
);

/* Routine io_set_all_openmodes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_set_all_openmodes
(
	io_t io_object,
	int newbits
);

/* Routine io_get_openmodes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_get_openmodes
(
	io_t io_object,
	int *bits
);

/* Routine io_set_some_openmodes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_set_some_openmodes
(
	io_t io_object,
	int bits_to_set
);

/* Routine io_clear_some_openmodes */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_clear_some_openmodes
(
	io_t io_object,
	int bits_to_clear
);

/* Routine io_async */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_async
(
	io_t io_object,
	mach_port_t notify_port,
	mach_msg_type_name_t notify_portPoly,
	mach_port_t *async_id_port
);

/* Routine io_mod_owner */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_mod_owner
(
	io_t io_object,
	pid_t owner
);

/* Routine io_get_owner */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_get_owner
(
	io_t io_object,
	pid_t *owner
);

/* Routine io_get_icky_async_id */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_get_icky_async_id
(
	io_t io_object,
	mach_port_t *icky_async_id_port
);

/* Routine io_select */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_select
(
	io_t io_object,
	mach_port_t reply,
	natural_t timeout,
	int *select_type
);

/* Routine io_stat */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_stat
(
	io_t stat_object,
	io_statbuf_t *stat_info
);

/* SimpleRoutine io_reauthenticate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_reauthenticate
(
	io_t auth_object,
	mach_port_t rendezvous2,
	mach_msg_type_name_t rendezvous2Poly
);

/* Routine io_restrict_auth */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_restrict_auth
(
	io_t io_object,
	mach_port_t *new_object,
	const_idarray_t uids,
	mach_msg_type_number_t uidsCnt,
	const_idarray_t gids,
	mach_msg_type_number_t gidsCnt
);

/* Routine io_duplicate */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_duplicate
(
	io_t io_object,
	mach_port_t *newport
);

/* Routine io_server_version */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_server_version
(
	io_t vers_object,
	string_t server_name,
	int *server_major_version,
	int *server_minor_version,
	int *server_edit_level
);

/* Routine io_map */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_map
(
	io_t io_object,
	mach_port_t *memobjrd,
	mach_port_t *memobjwt
);

/* Routine io_map_cntl */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_map_cntl
(
	io_t io_object,
	mach_port_t *memobj
);

/* Routine io_get_conch */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_get_conch
(
	io_t io_object
);

/* Routine io_release_conch */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_release_conch
(
	io_t io_object
);

/* Routine io_eofnotify */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_eofnotify
(
	io_t io_object
);

/* Routine io_prenotify */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_prenotify
(
	io_t io_object,
	vm_offset_t write_start,
	vm_offset_t write_end
);

/* Routine io_postnotify */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_postnotify
(
	io_t io_object,
	vm_offset_t write_start,
	vm_offset_t write_end
);

/* Routine io_readnotify */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_readnotify
(
	io_t io_object
);

/* Routine io_readsleep */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_readsleep
(
	io_t io_object
);

/* Routine io_sigio */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_sigio
(
	io_t io_object
);

/* Routine io_pathconf */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_pathconf
(
	io_t io_object,
	int name,
	int *value
);

/* Routine io_identity */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_identity
(
	io_t io_object,
	mach_port_t *idport,
	mach_port_t *fsidport,
	__ino64_t *fileno
);

/* Routine io_revoke */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_revoke
(
	io_t io_object
);

/* Routine io_select_timeout */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t io_select_timeout
(
	io_t io_object,
	mach_port_t reply,
	timespec_t timeout,
	int *select_type
);

#endif	/* not defined(_io_user_) */
