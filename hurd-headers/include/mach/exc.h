#ifndef	_exc_user_
#define	_exc_user_

/* Module exc */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>

/* Routine exception_raise */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __exception_raise
(
	mach_port_t exception_port,
	mach_port_t thread,
	mach_port_t task,
	integer_t exception,
	integer_t code,
	rpc_long_integer_t subcode
);


/* Module exc */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>

/* Routine exception_raise */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t exception_raise
(
	mach_port_t exception_port,
	mach_port_t thread,
	mach_port_t task,
	integer_t exception,
	integer_t code,
	rpc_long_integer_t subcode
);

#endif	/* not defined(_exc_user_) */
