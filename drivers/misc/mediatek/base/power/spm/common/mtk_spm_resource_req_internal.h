/*
 * Copyright (C) 2016 MediaTek Inc.
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

#ifndef __MTK_SPM_RESOURCE_REQ_INTERNAL_H__
#define __MTK_SPM_RESOURCE_REQ_INTERNAL_H__

enum {
	SPM_RESOURCE_CONSOLE_REQ,
	SPM_RESOURCE_CONSOLE_RELEASE,
};

enum {
	MTK_SPM_RES_EX_DRAM_S0 = 0,
	MTK_SPM_RES_EX_DRAM_S1,
	MTK_SPM_RES_EX_MAINPLL,
	MTK_SPM_RES_EX_AXI_BUS,
	MTK_SPM_RES_EX_26M,
	MTK_SPM_RES_EX_MAX,
};
#define _RES_MASK(x)	(1<<x)

/* SPM resource request APIs: for internal use */
void spm_resource_req_dump(void);
void spm_resource_req_block_dump(void);
unsigned int spm_get_resource_usage(void);
unsigned int spm_get_resource_usage_by_user(unsigned int user);
bool spm_resource_req_init(void);
void spm_resource_req_debugfs_init(void);

struct spm_resource_console_req {
	const char *name;
	unsigned int bit_number;
};

unsigned int spm_resource_console_dts_required(
	struct spm_resource_console_req *plat_req, int count);

/* Compulsory method for spm resource requirement.
 * This function's implementation depend on platform
 * File: mtk_spm_reource_req_console.c
 */
int spm_resource_req_console(unsigned int req, unsigned int res_bitmask);
int spm_resource_req_console_by_id(
		int id, unsigned int req, unsigned int res_bitmask);

/* Method for spm resource requirement status.
 * This function's implementation depend on platform
 * File: mtk_spm_reource_req_console.c
 */
int spm_get_resource_req_console_status(unsigned int *res_bitmask);
#endif /* __MTK_SPM_RESOURCE_REQ_INTERNAL_H__ */
