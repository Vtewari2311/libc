#ifndef	_tioctl_user_
#define	_tioctl_user_

/* Module tioctl */

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
#include <hurd/ioctl_types.h>

/* Routine tioctl_tiocmodg */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocmodg
(
	io_t reqport,
	int *state
);

/* Routine tioctl_tiocmods */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocmods
(
	io_t reqport,
	int state
);

/* Routine tioctl_tiocexcl */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocexcl
(
	io_t reqport
);

/* Routine tioctl_tiocnxcl */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocnxcl
(
	io_t reqport
);

/* Routine tioctl_tiocflush */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocflush
(
	io_t reqport,
	int queue_selector
);

/* Routine tioctl_tiocgeta */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocgeta
(
	io_t port,
	modes_t modes,
	ccs_t ccs,
	speeds_t speeds
);

/* Routine tioctl_tiocseta */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocseta
(
	io_t port,
	const modes_t modes,
	const ccs_t ccs,
	const speeds_t speeds
);

/* Routine tioctl_tiocsetaw */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocsetaw
(
	io_t port,
	const modes_t modes,
	const ccs_t ccs,
	const speeds_t speeds
);

/* Routine tioctl_tiocsetaf */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocsetaf
(
	io_t port,
	const modes_t modes,
	const ccs_t ccs,
	const speeds_t speeds
);

/* Routine tioctl_tiocgetd */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocgetd
(
	io_t port,
	int *discipline
);

/* Routine tioctl_tiocsetd */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocsetd
(
	io_t port,
	int discipline
);

/* Routine tioctl_tiocdrain */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocdrain
(
	io_t port
);

/* Routine tioctl_tiocsig */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocsig
(
	io_t port,
	int signal
);

/* Routine tioctl_tiocext */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocext
(
	io_t port,
	int mode
);

/* Routine tioctl_tiocucntl */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocucntl
(
	io_t port,
	int set_or_clear
);

/* Routine tioctl_tiocswinsz */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocswinsz
(
	io_t port,
	winsize_t sizes
);

/* Routine tioctl_tiocgwinsz */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocgwinsz
(
	io_t port,
	winsize_t *sizes
);

/* Routine tioctl_tiocremote */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocremote
(
	io_t port,
	int on_or_off
);

/* Routine tioctl_tiocmget */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocmget
(
	io_t port,
	int *bits
);

/* Routine tioctl_tiocmbic */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocmbic
(
	io_t port,
	int bits
);

/* Routine tioctl_tiocmbis */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocmbis
(
	io_t port,
	int bits
);

/* Routine tioctl_tiocmset */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocmset
(
	io_t port,
	int bits
);

/* Routine tioctl_tiocstart */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocstart
(
	io_t port
);

/* Routine tioctl_tiocstop */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocstop
(
	io_t port
);

/* Routine tioctl_tiocpkt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocpkt
(
	io_t port,
	int on_or_off
);

/* Routine tioctl_tiocsti */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocsti
(
	io_t port,
	char datum
);

/* Routine tioctl_tiocoutq */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocoutq
(
	io_t port,
	int *queue_size
);

/* Routine tioctl_tiocspgrp */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocspgrp
(
	io_t port,
	int pgrp
);

/* Routine tioctl_tiocgpgrp */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocgpgrp
(
	io_t port,
	int *pgrp
);

/* Routine tioctl_tioccdtr */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tioccdtr
(
	io_t port
);

/* Routine tioctl_tiocsdtr */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocsdtr
(
	io_t port
);

/* Routine tioctl_tioccbrk */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tioccbrk
(
	io_t port
);

/* Routine tioctl_tiocsbrk */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __tioctl_tiocsbrk
(
	io_t port
);


/* Module tioctl */

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
#include <hurd/ioctl_types.h>

/* Routine tioctl_tiocmodg */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocmodg
(
	io_t reqport,
	int *state
);

/* Routine tioctl_tiocmods */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocmods
(
	io_t reqport,
	int state
);

/* Routine tioctl_tiocexcl */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocexcl
(
	io_t reqport
);

/* Routine tioctl_tiocnxcl */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocnxcl
(
	io_t reqport
);

/* Routine tioctl_tiocflush */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocflush
(
	io_t reqport,
	int queue_selector
);

/* Routine tioctl_tiocgeta */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocgeta
(
	io_t port,
	modes_t modes,
	ccs_t ccs,
	speeds_t speeds
);

/* Routine tioctl_tiocseta */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocseta
(
	io_t port,
	const modes_t modes,
	const ccs_t ccs,
	const speeds_t speeds
);

/* Routine tioctl_tiocsetaw */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocsetaw
(
	io_t port,
	const modes_t modes,
	const ccs_t ccs,
	const speeds_t speeds
);

/* Routine tioctl_tiocsetaf */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocsetaf
(
	io_t port,
	const modes_t modes,
	const ccs_t ccs,
	const speeds_t speeds
);

/* Routine tioctl_tiocgetd */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocgetd
(
	io_t port,
	int *discipline
);

/* Routine tioctl_tiocsetd */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocsetd
(
	io_t port,
	int discipline
);

/* Routine tioctl_tiocdrain */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocdrain
(
	io_t port
);

/* Routine tioctl_tiocsig */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocsig
(
	io_t port,
	int signal
);

/* Routine tioctl_tiocext */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocext
(
	io_t port,
	int mode
);

/* Routine tioctl_tiocucntl */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocucntl
(
	io_t port,
	int set_or_clear
);

/* Routine tioctl_tiocswinsz */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocswinsz
(
	io_t port,
	winsize_t sizes
);

/* Routine tioctl_tiocgwinsz */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocgwinsz
(
	io_t port,
	winsize_t *sizes
);

/* Routine tioctl_tiocremote */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocremote
(
	io_t port,
	int on_or_off
);

/* Routine tioctl_tiocmget */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocmget
(
	io_t port,
	int *bits
);

/* Routine tioctl_tiocmbic */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocmbic
(
	io_t port,
	int bits
);

/* Routine tioctl_tiocmbis */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocmbis
(
	io_t port,
	int bits
);

/* Routine tioctl_tiocmset */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocmset
(
	io_t port,
	int bits
);

/* Routine tioctl_tiocstart */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocstart
(
	io_t port
);

/* Routine tioctl_tiocstop */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocstop
(
	io_t port
);

/* Routine tioctl_tiocpkt */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocpkt
(
	io_t port,
	int on_or_off
);

/* Routine tioctl_tiocsti */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocsti
(
	io_t port,
	char datum
);

/* Routine tioctl_tiocoutq */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocoutq
(
	io_t port,
	int *queue_size
);

/* Routine tioctl_tiocspgrp */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocspgrp
(
	io_t port,
	int pgrp
);

/* Routine tioctl_tiocgpgrp */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocgpgrp
(
	io_t port,
	int *pgrp
);

/* Routine tioctl_tioccdtr */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tioccdtr
(
	io_t port
);

/* Routine tioctl_tiocsdtr */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocsdtr
(
	io_t port
);

/* Routine tioctl_tioccbrk */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tioccbrk
(
	io_t port
);

/* Routine tioctl_tiocsbrk */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t tioctl_tiocsbrk
(
	io_t port
);

#endif	/* not defined(_tioctl_user_) */
