#ifndef	_device_user_
#define	_device_user_

/* Module device */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <device/device_types.h>
#include <device/net_status.h>

/* Routine device_open */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_open
(
	mach_port_t master_port,
	dev_mode_t mode,
	const_dev_name_t name,
	mach_port_t *device
);

/* Routine device_close */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_close
(
	mach_port_t device
);

/* Routine device_write */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_write
(
	mach_port_t device,
	dev_mode_t mode,
	recnum_t recnum,
	io_buf_ptr_t data,
	mach_msg_type_number_t dataCnt,
	int *bytes_written
);

/* Routine device_write_inband */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_write_inband
(
	mach_port_t device,
	dev_mode_t mode,
	recnum_t recnum,
	const io_buf_ptr_inband_t data,
	mach_msg_type_number_t dataCnt,
	int *bytes_written
);

/* Routine device_read */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_read
(
	mach_port_t device,
	dev_mode_t mode,
	recnum_t recnum,
	int bytes_wanted,
	io_buf_ptr_t *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine device_read_inband */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_read_inband
(
	mach_port_t device,
	dev_mode_t mode,
	recnum_t recnum,
	int bytes_wanted,
	io_buf_ptr_inband_t data,
	mach_msg_type_number_t *dataCnt
);

/* Routine device_map */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_map
(
	mach_port_t device,
	vm_prot_t prot,
	vm_offset_t offset,
	vm_size_t size,
	mach_port_t *pager,
	int unmap
);

/* Routine device_set_status */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_set_status
(
	mach_port_t device,
	dev_flavor_t flavor,
	const dev_status_t status,
	mach_msg_type_number_t statusCnt
);

/* Routine device_get_status */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_get_status
(
	mach_port_t device,
	dev_flavor_t flavor,
	dev_status_t status,
	mach_msg_type_number_t *statusCnt
);

/* Routine device_set_filter */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_set_filter
(
	mach_port_t device,
	mach_port_t receive_port,
	mach_msg_type_name_t receive_portPoly,
	int priority,
	const filter_array_t filter,
	mach_msg_type_number_t filterCnt
);

/* Routine device_intr_register */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_intr_register
(
	mach_port_t device,
	int id,
	int flags,
	mach_port_t receive_port,
	mach_msg_type_name_t receive_portPoly
);

/* Routine device_intr_ack */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __device_intr_ack
(
	mach_port_t device,
	mach_port_t receive_port,
	mach_msg_type_name_t receive_portPoly
);


/* Module device */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <device/device_types.h>
#include <device/net_status.h>

/* Routine device_open */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_open
(
	mach_port_t master_port,
	dev_mode_t mode,
	const_dev_name_t name,
	mach_port_t *device
);

/* Routine device_close */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_close
(
	mach_port_t device
);

/* Routine device_write */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_write
(
	mach_port_t device,
	dev_mode_t mode,
	recnum_t recnum,
	io_buf_ptr_t data,
	mach_msg_type_number_t dataCnt,
	int *bytes_written
);

/* Routine device_write_inband */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_write_inband
(
	mach_port_t device,
	dev_mode_t mode,
	recnum_t recnum,
	const io_buf_ptr_inband_t data,
	mach_msg_type_number_t dataCnt,
	int *bytes_written
);

/* Routine device_read */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_read
(
	mach_port_t device,
	dev_mode_t mode,
	recnum_t recnum,
	int bytes_wanted,
	io_buf_ptr_t *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine device_read_inband */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_read_inband
(
	mach_port_t device,
	dev_mode_t mode,
	recnum_t recnum,
	int bytes_wanted,
	io_buf_ptr_inband_t data,
	mach_msg_type_number_t *dataCnt
);

/* Routine device_map */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_map
(
	mach_port_t device,
	vm_prot_t prot,
	vm_offset_t offset,
	vm_size_t size,
	mach_port_t *pager,
	int unmap
);

/* Routine device_set_status */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_set_status
(
	mach_port_t device,
	dev_flavor_t flavor,
	const dev_status_t status,
	mach_msg_type_number_t statusCnt
);

/* Routine device_get_status */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_get_status
(
	mach_port_t device,
	dev_flavor_t flavor,
	dev_status_t status,
	mach_msg_type_number_t *statusCnt
);

/* Routine device_set_filter */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_set_filter
(
	mach_port_t device,
	mach_port_t receive_port,
	mach_msg_type_name_t receive_portPoly,
	int priority,
	const filter_array_t filter,
	mach_msg_type_number_t filterCnt
);

/* Routine device_intr_register */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_intr_register
(
	mach_port_t device,
	int id,
	int flags,
	mach_port_t receive_port,
	mach_msg_type_name_t receive_portPoly
);

/* Routine device_intr_ack */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t device_intr_ack
(
	mach_port_t device,
	mach_port_t receive_port,
	mach_msg_type_name_t receive_portPoly
);

#endif	/* not defined(_device_user_) */
