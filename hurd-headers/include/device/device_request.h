#ifndef	_device_request_user_
#define	_device_request_user_

/* Module device_request */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <device/device_types.h>
#include <device/net_status.h>

/* SimpleRoutine device_open_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_open_request
(
	mach_port_t device_server_port,
	mach_port_t reply_port,
	dev_mode_t mode,
	const_dev_name_t name
);

/* SimpleRoutine device_write_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_write_request
(
	mach_port_t device,
	mach_port_t reply_port,
	dev_mode_t mode,
	recnum_t recnum,
	io_buf_ptr_t data,
	mach_msg_type_number_t dataCnt
);

/* SimpleRoutine device_write_request_inband */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_write_request_inband
(
	mach_port_t device,
	mach_port_t reply_port,
	dev_mode_t mode,
	recnum_t recnum,
	const io_buf_ptr_inband_t data,
	mach_msg_type_number_t dataCnt
);

/* SimpleRoutine device_read_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_read_request
(
	mach_port_t device,
	mach_port_t reply_port,
	dev_mode_t mode,
	recnum_t recnum,
	int bytes_wanted
);

/* SimpleRoutine device_read_request_inband */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_read_request_inband
(
	mach_port_t device,
	mach_port_t reply_port,
	dev_mode_t mode,
	recnum_t recnum,
	int bytes_wanted
);

/* SimpleRoutine device_open_new_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_open_new_request
(
	mach_port_t device_server_port,
	mach_port_t reply_port,
	dev_mode_t mode,
	const_dev_name_t name
);


/* Module device_request */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <device/device_types.h>
#include <device/net_status.h>

/* SimpleRoutine device_open_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_open_request
(
	mach_port_t device_server_port,
	mach_port_t reply_port,
	dev_mode_t mode,
	const_dev_name_t name
);

/* SimpleRoutine device_write_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_write_request
(
	mach_port_t device,
	mach_port_t reply_port,
	dev_mode_t mode,
	recnum_t recnum,
	io_buf_ptr_t data,
	mach_msg_type_number_t dataCnt
);

/* SimpleRoutine device_write_request_inband */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_write_request_inband
(
	mach_port_t device,
	mach_port_t reply_port,
	dev_mode_t mode,
	recnum_t recnum,
	const io_buf_ptr_inband_t data,
	mach_msg_type_number_t dataCnt
);

/* SimpleRoutine device_read_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_read_request
(
	mach_port_t device,
	mach_port_t reply_port,
	dev_mode_t mode,
	recnum_t recnum,
	int bytes_wanted
);

/* SimpleRoutine device_read_request_inband */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_read_request_inband
(
	mach_port_t device,
	mach_port_t reply_port,
	dev_mode_t mode,
	recnum_t recnum,
	int bytes_wanted
);

/* SimpleRoutine device_open_new_request */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_open_new_request
(
	mach_port_t device_server_port,
	mach_port_t reply_port,
	dev_mode_t mode,
	const_dev_name_t name
);

#endif	/* not defined(_device_request_user_) */
