#ifndef	_exc_server_
#define	_exc_server_

/* Module exc */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/mig_errors.h>
#include <mach/std_types.h>

/* Routine exception_raise */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t _hurdsig_fault_catch_exception_raise
(
	mach_port_t exception_port,
	mach_port_t thread,
	mach_port_t task,
	integer_t exception,
	integer_t code,
	rpc_long_integer_t subcode
);

extern mig_routine_t _hurdsig_fault_exc_server_routines[];
static __inline mig_routine_t _hurdsig_fault_exc_server_routine
	(const mach_msg_header_t *InHeadP)
{
	int msgh_id;

	msgh_id = InHeadP->msgh_id - 2400;

	if ((msgh_id > 0) || (msgh_id < 0))
		return 0;

	return _hurdsig_fault_exc_server_routines[msgh_id];
}

#endif	/* not defined(_exc_server_) */
