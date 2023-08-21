#ifndef	_task_notify_user_
#define	_task_notify_user_

/* Module task_notify */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* SimpleRoutine mach_notify_new_task */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __mach_notify_new_task
(
	mach_port_t notify,
	mach_port_t task,
	mach_port_t parent
);


/* Module task_notify */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>

/* SimpleRoutine mach_notify_new_task */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t mach_notify_new_task
(
	mach_port_t notify,
	mach_port_t task,
	mach_port_t parent
);

#endif	/* not defined(_task_notify_user_) */
