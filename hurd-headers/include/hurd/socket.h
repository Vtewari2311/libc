#ifndef	_socket_user_
#define	_socket_user_

/* Module socket */

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

/* Routine socket_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_create
(
	pf_t server,
	int sock_type,
	int protocol,
	mach_port_t *sock
);

/* Routine socket_listen */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_listen
(
	socket_t sock,
	int queue_limit
);

/* Routine socket_accept */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_accept
(
	socket_t sock,
	mach_port_t *conn_sock,
	mach_port_t *peer_addr
);

/* Routine socket_connect */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_connect
(
	socket_t sock,
	addr_port_t addr
);

/* Routine socket_bind */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_bind
(
	socket_t sock,
	addr_port_t addr
);

/* Routine socket_name */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_name
(
	socket_t sock,
	mach_port_t *addr
);

/* Routine socket_peername */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_peername
(
	socket_t sock,
	mach_port_t *addr
);

/* Routine socket_connect2 */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_connect2
(
	socket_t sock1,
	socket_t sock2
);

/* Routine socket_create_address */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_create_address
(
	mach_port_t server,
	int sockaddr_type,
	const_data_t sockaddr,
	mach_msg_type_number_t sockaddrCnt,
	mach_port_t *addr
);

/* Routine socket_fabricate_address */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_fabricate_address
(
	mach_port_t server,
	int sockaddr_type,
	mach_port_t *addr
);

/* Routine socket_whatis_address */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_whatis_address
(
	addr_port_t addr,
	int *sockaddr_type,
	data_t *sockaddr,
	mach_msg_type_number_t *sockaddrCnt
);

/* Routine socket_shutdown */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_shutdown
(
	socket_t sock,
	int direction
);

/* Routine socket_getopt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_getopt
(
	socket_t sock,
	int level,
	int option,
	data_t *optval,
	mach_msg_type_number_t *optvalCnt
);

/* Routine socket_setopt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_setopt
(
	socket_t sock,
	int level,
	int option,
	const_data_t optval,
	mach_msg_type_number_t optvalCnt
);

/* Routine socket_send */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_send
(
	socket_t sock,
	addr_port_t addr,
	int flags,
	const_data_t data,
	mach_msg_type_number_t dataCnt,
	const_portarray_t ports,
	mach_msg_type_name_t portsPoly,
	mach_msg_type_number_t portsCnt,
	const_data_t control,
	mach_msg_type_number_t controlCnt,
	vm_size_t *amount
);

/* Routine socket_recv */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __socket_recv
(
	socket_t sock,
	mach_port_t *addr,
	int flags,
	data_t *data,
	mach_msg_type_number_t *dataCnt,
	portarray_t *ports,
	mach_msg_type_number_t *portsCnt,
	data_t *control,
	mach_msg_type_number_t *controlCnt,
	int *outflags,
	vm_size_t amount
);


/* Module socket */

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

/* Routine socket_create */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_create
(
	pf_t server,
	int sock_type,
	int protocol,
	mach_port_t *sock
);

/* Routine socket_listen */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_listen
(
	socket_t sock,
	int queue_limit
);

/* Routine socket_accept */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_accept
(
	socket_t sock,
	mach_port_t *conn_sock,
	mach_port_t *peer_addr
);

/* Routine socket_connect */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_connect
(
	socket_t sock,
	addr_port_t addr
);

/* Routine socket_bind */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_bind
(
	socket_t sock,
	addr_port_t addr
);

/* Routine socket_name */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_name
(
	socket_t sock,
	mach_port_t *addr
);

/* Routine socket_peername */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_peername
(
	socket_t sock,
	mach_port_t *addr
);

/* Routine socket_connect2 */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_connect2
(
	socket_t sock1,
	socket_t sock2
);

/* Routine socket_create_address */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_create_address
(
	mach_port_t server,
	int sockaddr_type,
	const_data_t sockaddr,
	mach_msg_type_number_t sockaddrCnt,
	mach_port_t *addr
);

/* Routine socket_fabricate_address */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_fabricate_address
(
	mach_port_t server,
	int sockaddr_type,
	mach_port_t *addr
);

/* Routine socket_whatis_address */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_whatis_address
(
	addr_port_t addr,
	int *sockaddr_type,
	data_t *sockaddr,
	mach_msg_type_number_t *sockaddrCnt
);

/* Routine socket_shutdown */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_shutdown
(
	socket_t sock,
	int direction
);

/* Routine socket_getopt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_getopt
(
	socket_t sock,
	int level,
	int option,
	data_t *optval,
	mach_msg_type_number_t *optvalCnt
);

/* Routine socket_setopt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_setopt
(
	socket_t sock,
	int level,
	int option,
	const_data_t optval,
	mach_msg_type_number_t optvalCnt
);

/* Routine socket_send */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_send
(
	socket_t sock,
	addr_port_t addr,
	int flags,
	const_data_t data,
	mach_msg_type_number_t dataCnt,
	const_portarray_t ports,
	mach_msg_type_name_t portsPoly,
	mach_msg_type_number_t portsCnt,
	const_data_t control,
	mach_msg_type_number_t controlCnt,
	vm_size_t *amount
);

/* Routine socket_recv */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t socket_recv
(
	socket_t sock,
	mach_port_t *addr,
	int flags,
	data_t *data,
	mach_msg_type_number_t *dataCnt,
	portarray_t *ports,
	mach_msg_type_number_t *portsCnt,
	data_t *control,
	mach_msg_type_number_t *controlCnt,
	int *outflags,
	vm_size_t amount
);

#endif	/* not defined(_socket_user_) */
