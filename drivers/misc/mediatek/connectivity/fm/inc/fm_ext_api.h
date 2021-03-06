/*
 * Copyright (C) 2019 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef FM_EXT_API_H
#define FM_EXT_API_H

#include <linux/platform_device.h>

struct fm_ext_interface {
	void (*eint_handler)(void);
	void (*eint_cb)(void);
	void (*enable_eint)(void);
	void (*disable_eint)(void);
	int (*stp_send_data)(unsigned char *buf, unsigned int len);
	int (*stp_recv_data)(unsigned char *buf, unsigned int len);
	int (*stp_register_event_cb)(void *cb);
	int (*wmt_msgcb_reg)(void *data);
	int (*wmt_func_on)(void);
	int (*wmt_func_off)(void);
	int (*wmt_ic_info_get)(void);
	int (*wmt_chipid_query)(void);
	unsigned char (*get_top_index)(void);
	int (*spi_clock_switch)(void);

	struct platform_driver *drv;
	unsigned int irq_id;
};

#endif /* FM_EXT_API_H */
