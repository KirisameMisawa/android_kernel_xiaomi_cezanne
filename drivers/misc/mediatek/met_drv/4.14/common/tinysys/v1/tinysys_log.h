/*  SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */
#ifndef __TINYSYS_LOG_H__
#define __TINYSYS_LOG_H__
/*****************************************************************************
 * headers
 *****************************************************************************/
#include <linux/device.h>


/*****************************************************************************
 * define declaration
 *****************************************************************************/


/*****************************************************************************
 * struct & enum declaration
 *****************************************************************************/


/*****************************************************************************
 * external function declaration
 *****************************************************************************/
int tinysys_log_manager_init(struct device *dev);
int tinysys_log_manager_uninit(struct device *dev);
int tinysys_log_manager_start(void);
int tinysys_log_manager_stop(void);


/*****************************************************************************
 * external variable declaration
 *****************************************************************************/


#endif /* __TINYSYS_LOG_H__ */
