#ifndef	_term_user_
#define	_term_user_

/* Module term */

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

/* Routine term_getctty */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __term_getctty
(
	io_t terminal,
	mach_port_t *ctty
);

/* Routine term_open_ctty */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __term_open_ctty
(
	io_t terminal,
	pid_t pid,
	pid_t pgrp,
	mach_port_t *newtty
);

/* Routine term_set_nodename */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __term_set_nodename
(
	io_t terminal,
	const_string_t name
);

/* Routine term_get_nodename */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __term_get_nodename
(
	io_t terminal,
	string_t name
);

/* Routine term_set_filenode */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __term_set_filenode
(
	io_t terminal,
	file_t filenode
);

/* Routine term_get_bottom_type */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __term_get_bottom_type
(
	io_t terminal,
	int *ttype
);

/* Routine term_on_machdev */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __term_on_machdev
(
	io_t terminal,
	mach_port_t machdev
);

/* Routine term_on_hurddev */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __term_on_hurddev
(
	io_t terminal,
	io_t hurddev
);

/* Routine term_on_pty */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __term_on_pty
(
	io_t terminal,
	io_t *ptymaster
);

/* Routine termctty_open_terminal */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __termctty_open_terminal
(
	ctty_t ctty,
	int flags,
	mach_port_t *terminal
);

/* Routine term_get_peername */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __term_get_peername
(
	io_t terminal,
	string_t name
);


/* Module term */

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

/* Routine term_getctty */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t term_getctty
(
	io_t terminal,
	mach_port_t *ctty
);

/* Routine term_open_ctty */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t term_open_ctty
(
	io_t terminal,
	pid_t pid,
	pid_t pgrp,
	mach_port_t *newtty
);

/* Routine term_set_nodename */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t term_set_nodename
(
	io_t terminal,
	const_string_t name
);

/* Routine term_get_nodename */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t term_get_nodename
(
	io_t terminal,
	string_t name
);

/* Routine term_set_filenode */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t term_set_filenode
(
	io_t terminal,
	file_t filenode
);

/* Routine term_get_bottom_type */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t term_get_bottom_type
(
	io_t terminal,
	int *ttype
);

/* Routine term_on_machdev */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t term_on_machdev
(
	io_t terminal,
	mach_port_t machdev
);

/* Routine term_on_hurddev */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t term_on_hurddev
(
	io_t terminal,
	io_t hurddev
);

/* Routine term_on_pty */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t term_on_pty
(
	io_t terminal,
	io_t *ptymaster
);

/* Routine termctty_open_terminal */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t termctty_open_terminal
(
	ctty_t ctty,
	int flags,
	mach_port_t *terminal
);

/* Routine term_get_peername */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t term_get_peername
(
	io_t terminal,
	string_t name
);

#endif	/* not defined(_term_user_) */
