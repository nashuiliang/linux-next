/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * AM43x PRCM defines
 *
 * Copyright (C) 2013 Texas Instruments Incorporated - https://www.ti.com/
 */

#ifndef __ARCH_ARM_MACH_OMAP2_PRCM_43XX_H
#define __ARCH_ARM_MACH_OMAP2_PRCM_43XX_H

#define AM43XX_PRM_PARTITION				1
#define AM43XX_CM_PARTITION				1

/* PRM instances */
#define AM43XX_PRM_OCP_SOCKET_INST			0x0000
#define AM43XX_PRM_MPU_INST				0x0300
#define AM43XX_PRM_GFX_INST				0x0400
#define AM43XX_PRM_RTC_INST				0x0500
#define AM43XX_PRM_TAMPER_INST				0x0600
#define AM43XX_PRM_CEFUSE_INST				0x0700
#define AM43XX_PRM_PER_INST				0x0800
#define AM43XX_PRM_WKUP_INST				0x2000
#define AM43XX_PRM_DEVICE_INST				0x4000

/* PRM_IRQ offsets */
#define AM43XX_PRM_IRQSTATUS_MPU_OFFSET			0x0004
#define AM43XX_PRM_IRQENABLE_MPU_OFFSET			0x0008

/* Other PRM offsets */
#define AM43XX_PRM_IO_PMCTRL_OFFSET			0x0024

/* CM instances */
#define AM43XX_CM_WKUP_INST				0x2800
#define AM43XX_CM_MPU_INST				0x8300
#define AM43XX_CM_GFX_INST				0x8400
#define AM43XX_CM_RTC_INST				0x8500
#define AM43XX_CM_TAMPER_INST				0x8600
#define AM43XX_CM_CEFUSE_INST				0x8700
#define AM43XX_CM_PER_INST				0x8800

/* CD offsets */
#define AM43XX_CM_WKUP_L3_AON_CDOFFS			0x0000
#define AM43XX_CM_WKUP_L3S_TSC_CDOFFS			0x0100
#define AM43XX_CM_WKUP_L4_WKUP_AON_CDOFFS		0x0200
#define AM43XX_CM_WKUP_WKUP_CDOFFS			0x0300
#define AM43XX_CM_MPU_MPU_CDOFFS			0x0000
#define AM43XX_CM_GFX_GFX_L3_CDOFFS			0x0000
#define AM43XX_CM_RTC_RTC_CDOFFS			0x0000
#define AM43XX_CM_TAMPER_TAMPER_CDOFFS			0x0000
#define AM43XX_CM_CEFUSE_CEFUSE_CDOFFS			0x0000
#define AM43XX_CM_PER_L3_CDOFFS				0x0000
#define AM43XX_CM_PER_L3S_CDOFFS			0x0200
#define AM43XX_CM_PER_ICSS_CDOFFS			0x0300
#define AM43XX_CM_PER_L4LS_CDOFFS			0x0400
#define AM43XX_CM_PER_EMIF_CDOFFS			0x0700
#define AM43XX_CM_PER_LCDC_CDOFFS			0x0800
#define AM43XX_CM_PER_DSS_CDOFFS			0x0a00
#define AM43XX_CM_PER_CPSW_CDOFFS			0x0b00
#define AM43XX_CM_PER_OCPWP_L3_CDOFFS			0x0c00

/* CLK CTRL offsets */
#define AM43XX_CM_MPU_MPU_CLKCTRL_OFFSET		0x0020
#define AM43XX_CM_PER_EMIF_CLKCTRL_OFFSET		0x0720

#endif
