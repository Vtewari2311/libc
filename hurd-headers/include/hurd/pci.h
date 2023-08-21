#ifndef	_pci_user_
#define	_pci_user_

/* Module pci */

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

/* Routine pci_conf_read */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __pci_conf_read
(
	pci_t master,
	int reg,
	data_t *data,
	mach_msg_type_number_t *dataCnt,
	vm_size_t amount
);

/* Routine pci_conf_write */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __pci_conf_write
(
	pci_t master,
	int reg,
	const_data_t data,
	mach_msg_type_number_t dataCnt,
	vm_size_t *amount
);

/* Routine pci_get_ndevs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __pci_get_ndevs
(
	pci_t master,
	mach_msg_type_number_t *ndevs
);

/* Routine pci_get_dev_regions */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __pci_get_dev_regions
(
	pci_t master,
	data_t *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine pci_get_dev_rom */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t __pci_get_dev_rom
(
	pci_t master,
	data_t *data,
	mach_msg_type_number_t *dataCnt
);


/* Module pci */

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

/* Routine pci_conf_read */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t pci_conf_read
(
	pci_t master,
	int reg,
	data_t *data,
	mach_msg_type_number_t *dataCnt,
	vm_size_t amount
);

/* Routine pci_conf_write */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t pci_conf_write
(
	pci_t master,
	int reg,
	const_data_t data,
	mach_msg_type_number_t dataCnt,
	vm_size_t *amount
);

/* Routine pci_get_ndevs */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t pci_get_ndevs
(
	pci_t master,
	mach_msg_type_number_t *ndevs
);

/* Routine pci_get_dev_regions */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t pci_get_dev_regions
(
	pci_t master,
	data_t *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine pci_get_dev_rom */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t pci_get_dev_rom
(
	pci_t master,
	data_t *data,
	mach_msg_type_number_t *dataCnt
);

#endif	/* not defined(_pci_user_) */
