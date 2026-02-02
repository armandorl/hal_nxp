/*
** ###################################################################
**     Processor:           S32G274A_M7
**     Compiler:            Keil ARM C/C++ Compiler
**     Reference manual:    S32G274A RM Rev.5
**     Version:             rev. 2.1, 2022-06-27
**     Build:               b220627
**
**     Abstract:
**         Peripheral Access Layer for S32G274A_M7
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2022 NXP
**
**     NXP Confidential. This software is owned or controlled by NXP and may only be
**     used strictly in accordance with the applicable license terms. By expressly
**     accepting such terms or by downloading, installing, activating and/or otherwise
**     using the software, you are agreeing that you have read, and that you agree to
**     comply with and are bound by, such license terms. If you do not agree to be
**     bound by the applicable license terms, then you may not retain, install,
**     activate or otherwise use the software. The production use license in
**     Section 2.3 is expressly granted for this software.
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
** ###################################################################
*/

/*!
 * @file S32G274A_S32G_GPR.h
 * @version 2.1
 * @date 2022-06-27
 * @brief Peripheral Access Layer for S32G274A_S32G_GPR
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.3, local typedef not referenced
* The SoC header defines typedef for all modules.
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.5, local macro not referenced
* The SoC header defines macros for all modules and registers.
*
* @section [global]
* Violates MISRA 2012 Advisory Directive 4.9, Function-like macro
* These are generated macros used for accessing the bit-fields from registers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 21.1, defined macro '__I' is reserved to the compiler
* This type qualifier is needed to ensure correct I/O access and addressing.
*/

/* Prevention from multiple including the same memory map */
#if !defined(S32G274A_S32G_GPR_H_)  /* Check if memory map has not been already included */
#define S32G274A_S32G_GPR_H_

#include "S32G274A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- S32G_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup S32G_GPR_Peripheral_Access_Layer S32G_GPR Peripheral Access Layer
 * @{
 */

/** S32G_GPR - Register Layout Typedef */
typedef struct {
  __IO uint32_t PFE_COH_EN;                        /**< PFE Port Coherency Enable, offset: 0x0 */
  __IO uint32_t PFE_EMACX_INTF_SEL;                /**< PFE EMAC Interface Mode, offset: 0x4 */
  uint8_t RESERVED_0[24];
  __IO uint32_t PFE_PWR_CTRL;                      /**< PFE EMACX Power Control, offset: 0x20 */
  uint8_t RESERVED_1[28];
  __I  uint32_t LLCE_STAT;                         /**< LLCE Subsystem Status, offset: 0x40 */
  __IO uint32_t LLCE_CTRL;                         /**< LLCE Power Control, offset: 0x44 */
  __IO uint32_t DDR_URGENT_CTRL;                   /**< DDR Urgent Control, offset: 0x48 */
  __O  uint32_t FLXTIM_CTRL;                       /**< FlexTimer Global Load Control, offset: 0x4C */
  __I  uint32_t FLXTIM_STAT;                       /**< FlexTimer LDOK Status, offset: 0x50 */
  __IO uint32_t CMU_STAT;                          /**< Top CMU_FC Status, offset: 0x54 */
  __I  uint32_t NOC_NOPEND_TRANS;                  /**< Accelerator NoC NoPendingTrans Status, offset: 0x58 */
  uint8_t RESERVED_2[52];
  __IO uint32_t PCIE_TOGGLE;                       /**< SerDes RD/WD Toggle Control, offset: 0x90 */
  __I  uint32_t PCIE_TOGGLEDONE_STAT;              /**< SerDes Toggle Done Status, offset: 0x94 */
  uint8_t RESERVED_3[72];
  __IO uint32_t GENCTRL0;                          /**< Generic Control 0, offset: 0xE0 */
  __IO uint32_t GENCTRL1;                          /**< Generic Control 1, offset: 0xE4 */
  uint8_t RESERVED_4[8];
  __I  uint32_t GENSTAT0;                          /**< Generic Status 0, offset: 0xF0 */
} S32G_GPR_Type, *S32G_GPR_MemMapPtr;

/** Number of instances of the S32G_GPR module. */
#define S32G_GPR_INSTANCE_COUNT                  (1u)

/* S32G_GPR - Peripheral instance base addresses */
/** Peripheral S32G_GPR base address */
#define IP_S32G_GPR_BASE                         (0x4007CA00u)
/** Peripheral S32G_GPR base pointer */
#define IP_S32G_GPR                              ((S32G_GPR_Type *)IP_S32G_GPR_BASE)
/** Array initializer of S32G_GPR peripheral base addresses */
#define IP_S32G_GPR_BASE_ADDRS                   { IP_S32G_GPR_BASE }
/** Array initializer of S32G_GPR peripheral base pointers */
#define IP_S32G_GPR_BASE_PTRS                    { IP_S32G_GPR }

/* ----------------------------------------------------------------------------
   -- S32G_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup S32G_GPR_Register_Masks S32G_GPR Register Masks
 * @{
 */

/*! @name PFE_COH_EN - PFE Port Coherency Enable */
/*! @{ */

#define S32G_GPR_PFE_COH_EN_DDR_MASK             (0x1U)
#define S32G_GPR_PFE_COH_EN_DDR_SHIFT            (0U)
#define S32G_GPR_PFE_COH_EN_DDR_WIDTH            (1U)
#define S32G_GPR_PFE_COH_EN_DDR(x)               (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_COH_EN_DDR_SHIFT)) & S32G_GPR_PFE_COH_EN_DDR_MASK)

#define S32G_GPR_PFE_COH_EN_HIF0_MASK            (0x2U)
#define S32G_GPR_PFE_COH_EN_HIF0_SHIFT           (1U)
#define S32G_GPR_PFE_COH_EN_HIF0_WIDTH           (1U)
#define S32G_GPR_PFE_COH_EN_HIF0(x)              (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_COH_EN_HIF0_SHIFT)) & S32G_GPR_PFE_COH_EN_HIF0_MASK)

#define S32G_GPR_PFE_COH_EN_HIF1_MASK            (0x4U)
#define S32G_GPR_PFE_COH_EN_HIF1_SHIFT           (2U)
#define S32G_GPR_PFE_COH_EN_HIF1_WIDTH           (1U)
#define S32G_GPR_PFE_COH_EN_HIF1(x)              (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_COH_EN_HIF1_SHIFT)) & S32G_GPR_PFE_COH_EN_HIF1_MASK)

#define S32G_GPR_PFE_COH_EN_HIF2_MASK            (0x8U)
#define S32G_GPR_PFE_COH_EN_HIF2_SHIFT           (3U)
#define S32G_GPR_PFE_COH_EN_HIF2_WIDTH           (1U)
#define S32G_GPR_PFE_COH_EN_HIF2(x)              (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_COH_EN_HIF2_SHIFT)) & S32G_GPR_PFE_COH_EN_HIF2_MASK)

#define S32G_GPR_PFE_COH_EN_HIF3_MASK            (0x10U)
#define S32G_GPR_PFE_COH_EN_HIF3_SHIFT           (4U)
#define S32G_GPR_PFE_COH_EN_HIF3_WIDTH           (1U)
#define S32G_GPR_PFE_COH_EN_HIF3(x)              (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_COH_EN_HIF3_SHIFT)) & S32G_GPR_PFE_COH_EN_HIF3_MASK)

#define S32G_GPR_PFE_COH_EN_UTIL_MASK            (0x20U)
#define S32G_GPR_PFE_COH_EN_UTIL_SHIFT           (5U)
#define S32G_GPR_PFE_COH_EN_UTIL_WIDTH           (1U)
#define S32G_GPR_PFE_COH_EN_UTIL(x)              (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_COH_EN_UTIL_SHIFT)) & S32G_GPR_PFE_COH_EN_UTIL_MASK)
/*! @} */

/*! @name PFE_EMACX_INTF_SEL - PFE EMAC Interface Mode */
/*! @{ */

#define S32G_GPR_PFE_EMACX_INTF_SEL_EMAC0_MASK   (0xFU)
#define S32G_GPR_PFE_EMACX_INTF_SEL_EMAC0_SHIFT  (0U)
#define S32G_GPR_PFE_EMACX_INTF_SEL_EMAC0_WIDTH  (4U)
#define S32G_GPR_PFE_EMACX_INTF_SEL_EMAC0(x)     (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_EMACX_INTF_SEL_EMAC0_SHIFT)) & S32G_GPR_PFE_EMACX_INTF_SEL_EMAC0_MASK)

#define S32G_GPR_PFE_EMACX_INTF_SEL_EMAC1_MASK   (0xF0U)
#define S32G_GPR_PFE_EMACX_INTF_SEL_EMAC1_SHIFT  (4U)
#define S32G_GPR_PFE_EMACX_INTF_SEL_EMAC1_WIDTH  (4U)
#define S32G_GPR_PFE_EMACX_INTF_SEL_EMAC1(x)     (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_EMACX_INTF_SEL_EMAC1_SHIFT)) & S32G_GPR_PFE_EMACX_INTF_SEL_EMAC1_MASK)

#define S32G_GPR_PFE_EMACX_INTF_SEL_EMAC2_MASK   (0xF00U)
#define S32G_GPR_PFE_EMACX_INTF_SEL_EMAC2_SHIFT  (8U)
#define S32G_GPR_PFE_EMACX_INTF_SEL_EMAC2_WIDTH  (4U)
#define S32G_GPR_PFE_EMACX_INTF_SEL_EMAC2(x)     (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_EMACX_INTF_SEL_EMAC2_SHIFT)) & S32G_GPR_PFE_EMACX_INTF_SEL_EMAC2_MASK)
/*! @} */

/*! @name PFE_PWR_CTRL - PFE EMACX Power Control */
/*! @{ */

#define S32G_GPR_PFE_PWR_CTRL_PWRCLAMP_MASK      (0x7U)
#define S32G_GPR_PFE_PWR_CTRL_PWRCLAMP_SHIFT     (0U)
#define S32G_GPR_PFE_PWR_CTRL_PWRCLAMP_WIDTH     (3U)
#define S32G_GPR_PFE_PWR_CTRL_PWRCLAMP(x)        (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_PWR_CTRL_PWRCLAMP_SHIFT)) & S32G_GPR_PFE_PWR_CTRL_PWRCLAMP_MASK)

#define S32G_GPR_PFE_PWR_CTRL_PWRDWN_MASK        (0x38U)
#define S32G_GPR_PFE_PWR_CTRL_PWRDWN_SHIFT       (3U)
#define S32G_GPR_PFE_PWR_CTRL_PWRDWN_WIDTH       (3U)
#define S32G_GPR_PFE_PWR_CTRL_PWRDWN(x)          (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_PWR_CTRL_PWRDWN_SHIFT)) & S32G_GPR_PFE_PWR_CTRL_PWRDWN_MASK)

#define S32G_GPR_PFE_PWR_CTRL_PWRISO_MASK        (0x1C0U)
#define S32G_GPR_PFE_PWR_CTRL_PWRISO_SHIFT       (6U)
#define S32G_GPR_PFE_PWR_CTRL_PWRISO_WIDTH       (3U)
#define S32G_GPR_PFE_PWR_CTRL_PWRISO(x)          (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_PWR_CTRL_PWRISO_SHIFT)) & S32G_GPR_PFE_PWR_CTRL_PWRISO_MASK)

#define S32G_GPR_PFE_PWR_CTRL_PWRACK_MASK        (0xE00U)
#define S32G_GPR_PFE_PWR_CTRL_PWRACK_SHIFT       (9U)
#define S32G_GPR_PFE_PWR_CTRL_PWRACK_WIDTH       (3U)
#define S32G_GPR_PFE_PWR_CTRL_PWRACK(x)          (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PFE_PWR_CTRL_PWRACK_SHIFT)) & S32G_GPR_PFE_PWR_CTRL_PWRACK_MASK)
/*! @} */

/*! @name LLCE_STAT - LLCE Subsystem Status */
/*! @{ */

#define S32G_GPR_LLCE_STAT_SLEEPING_MASK         (0xFU)
#define S32G_GPR_LLCE_STAT_SLEEPING_SHIFT        (0U)
#define S32G_GPR_LLCE_STAT_SLEEPING_WIDTH        (4U)
#define S32G_GPR_LLCE_STAT_SLEEPING(x)           (((uint32_t)(((uint32_t)(x)) << S32G_GPR_LLCE_STAT_SLEEPING_SHIFT)) & S32G_GPR_LLCE_STAT_SLEEPING_MASK)

#define S32G_GPR_LLCE_STAT_SYSRESETREQ_MASK      (0xF0U)
#define S32G_GPR_LLCE_STAT_SYSRESETREQ_SHIFT     (4U)
#define S32G_GPR_LLCE_STAT_SYSRESETREQ_WIDTH     (4U)
#define S32G_GPR_LLCE_STAT_SYSRESETREQ(x)        (((uint32_t)(((uint32_t)(x)) << S32G_GPR_LLCE_STAT_SYSRESETREQ_SHIFT)) & S32G_GPR_LLCE_STAT_SYSRESETREQ_MASK)

#define S32G_GPR_LLCE_STAT_LLCE_LSPI_TRIG_RX_MASK (0xF00U)
#define S32G_GPR_LLCE_STAT_LLCE_LSPI_TRIG_RX_SHIFT (8U)
#define S32G_GPR_LLCE_STAT_LLCE_LSPI_TRIG_RX_WIDTH (4U)
#define S32G_GPR_LLCE_STAT_LLCE_LSPI_TRIG_RX(x)  (((uint32_t)(((uint32_t)(x)) << S32G_GPR_LLCE_STAT_LLCE_LSPI_TRIG_RX_SHIFT)) & S32G_GPR_LLCE_STAT_LLCE_LSPI_TRIG_RX_MASK)

#define S32G_GPR_LLCE_STAT_LLCE_LSPI_TRIG_FM_MASK (0xF000U)
#define S32G_GPR_LLCE_STAT_LLCE_LSPI_TRIG_FM_SHIFT (12U)
#define S32G_GPR_LLCE_STAT_LLCE_LSPI_TRIG_FM_WIDTH (4U)
#define S32G_GPR_LLCE_STAT_LLCE_LSPI_TRIG_FM(x)  (((uint32_t)(((uint32_t)(x)) << S32G_GPR_LLCE_STAT_LLCE_LSPI_TRIG_FM_SHIFT)) & S32G_GPR_LLCE_STAT_LLCE_LSPI_TRIG_FM_MASK)
/*! @} */

/*! @name LLCE_CTRL - LLCE Power Control */
/*! @{ */

#define S32G_GPR_LLCE_CTRL_EXEVENT_MASK          (0xFU)
#define S32G_GPR_LLCE_CTRL_EXEVENT_SHIFT         (0U)
#define S32G_GPR_LLCE_CTRL_EXEVENT_WIDTH         (4U)
#define S32G_GPR_LLCE_CTRL_EXEVENT(x)            (((uint32_t)(((uint32_t)(x)) << S32G_GPR_LLCE_CTRL_EXEVENT_SHIFT)) & S32G_GPR_LLCE_CTRL_EXEVENT_MASK)

#define S32G_GPR_LLCE_CTRL_LINDIVSEL_MASK        (0x10U)
#define S32G_GPR_LLCE_CTRL_LINDIVSEL_SHIFT       (4U)
#define S32G_GPR_LLCE_CTRL_LINDIVSEL_WIDTH       (1U)
#define S32G_GPR_LLCE_CTRL_LINDIVSEL(x)          (((uint32_t)(((uint32_t)(x)) << S32G_GPR_LLCE_CTRL_LINDIVSEL_SHIFT)) & S32G_GPR_LLCE_CTRL_LINDIVSEL_MASK)

#define S32G_GPR_LLCE_CTRL_LLCE_LSPI_TRIG_IN_MASK (0x1E0U)
#define S32G_GPR_LLCE_CTRL_LLCE_LSPI_TRIG_IN_SHIFT (5U)
#define S32G_GPR_LLCE_CTRL_LLCE_LSPI_TRIG_IN_WIDTH (4U)
#define S32G_GPR_LLCE_CTRL_LLCE_LSPI_TRIG_IN(x)  (((uint32_t)(((uint32_t)(x)) << S32G_GPR_LLCE_CTRL_LLCE_LSPI_TRIG_IN_SHIFT)) & S32G_GPR_LLCE_CTRL_LLCE_LSPI_TRIG_IN_MASK)

#define S32G_GPR_LLCE_CTRL_LLCE_HTM0_TRC_DIS_MASK (0x200U)
#define S32G_GPR_LLCE_CTRL_LLCE_HTM0_TRC_DIS_SHIFT (9U)
#define S32G_GPR_LLCE_CTRL_LLCE_HTM0_TRC_DIS_WIDTH (1U)
#define S32G_GPR_LLCE_CTRL_LLCE_HTM0_TRC_DIS(x)  (((uint32_t)(((uint32_t)(x)) << S32G_GPR_LLCE_CTRL_LLCE_HTM0_TRC_DIS_SHIFT)) & S32G_GPR_LLCE_CTRL_LLCE_HTM0_TRC_DIS_MASK)

#define S32G_GPR_LLCE_CTRL_LLCE_HTM1_TRC_DIS_MASK (0x400U)
#define S32G_GPR_LLCE_CTRL_LLCE_HTM1_TRC_DIS_SHIFT (10U)
#define S32G_GPR_LLCE_CTRL_LLCE_HTM1_TRC_DIS_WIDTH (1U)
#define S32G_GPR_LLCE_CTRL_LLCE_HTM1_TRC_DIS(x)  (((uint32_t)(((uint32_t)(x)) << S32G_GPR_LLCE_CTRL_LLCE_HTM1_TRC_DIS_SHIFT)) & S32G_GPR_LLCE_CTRL_LLCE_HTM1_TRC_DIS_MASK)

#define S32G_GPR_LLCE_CTRL_PFE_2_LLCE_INT_HS_BP_MASK (0x800U)
#define S32G_GPR_LLCE_CTRL_PFE_2_LLCE_INT_HS_BP_SHIFT (11U)
#define S32G_GPR_LLCE_CTRL_PFE_2_LLCE_INT_HS_BP_WIDTH (1U)
#define S32G_GPR_LLCE_CTRL_PFE_2_LLCE_INT_HS_BP(x) (((uint32_t)(((uint32_t)(x)) << S32G_GPR_LLCE_CTRL_PFE_2_LLCE_INT_HS_BP_SHIFT)) & S32G_GPR_LLCE_CTRL_PFE_2_LLCE_INT_HS_BP_MASK)
/*! @} */

/*! @name DDR_URGENT_CTRL - DDR Urgent Control */
/*! @{ */

#define S32G_GPR_DDR_URGENT_CTRL_ARURGENTB_MASK  (0x7U)
#define S32G_GPR_DDR_URGENT_CTRL_ARURGENTB_SHIFT (0U)
#define S32G_GPR_DDR_URGENT_CTRL_ARURGENTB_WIDTH (3U)
#define S32G_GPR_DDR_URGENT_CTRL_ARURGENTB(x)    (((uint32_t)(((uint32_t)(x)) << S32G_GPR_DDR_URGENT_CTRL_ARURGENTB_SHIFT)) & S32G_GPR_DDR_URGENT_CTRL_ARURGENTB_MASK)

#define S32G_GPR_DDR_URGENT_CTRL_ARURGENTR_MASK  (0x38U)
#define S32G_GPR_DDR_URGENT_CTRL_ARURGENTR_SHIFT (3U)
#define S32G_GPR_DDR_URGENT_CTRL_ARURGENTR_WIDTH (3U)
#define S32G_GPR_DDR_URGENT_CTRL_ARURGENTR(x)    (((uint32_t)(((uint32_t)(x)) << S32G_GPR_DDR_URGENT_CTRL_ARURGENTR_SHIFT)) & S32G_GPR_DDR_URGENT_CTRL_ARURGENTR_MASK)

#define S32G_GPR_DDR_URGENT_CTRL_AWURGENT_MASK   (0x1C0U)
#define S32G_GPR_DDR_URGENT_CTRL_AWURGENT_SHIFT  (6U)
#define S32G_GPR_DDR_URGENT_CTRL_AWURGENT_WIDTH  (3U)
#define S32G_GPR_DDR_URGENT_CTRL_AWURGENT(x)     (((uint32_t)(((uint32_t)(x)) << S32G_GPR_DDR_URGENT_CTRL_AWURGENT_SHIFT)) & S32G_GPR_DDR_URGENT_CTRL_AWURGENT_MASK)
/*! @} */

/*! @name FLXTIM_CTRL - FlexTimer Global Load Control */
/*! @{ */

#define S32G_GPR_FLXTIM_CTRL_GLOBAL_LDOK_IN0_MASK (0x1U)
#define S32G_GPR_FLXTIM_CTRL_GLOBAL_LDOK_IN0_SHIFT (0U)
#define S32G_GPR_FLXTIM_CTRL_GLOBAL_LDOK_IN0_WIDTH (1U)
#define S32G_GPR_FLXTIM_CTRL_GLOBAL_LDOK_IN0(x)  (((uint32_t)(((uint32_t)(x)) << S32G_GPR_FLXTIM_CTRL_GLOBAL_LDOK_IN0_SHIFT)) & S32G_GPR_FLXTIM_CTRL_GLOBAL_LDOK_IN0_MASK)

#define S32G_GPR_FLXTIM_CTRL_GLOBAL_LDOK_IN1_MASK (0x2U)
#define S32G_GPR_FLXTIM_CTRL_GLOBAL_LDOK_IN1_SHIFT (1U)
#define S32G_GPR_FLXTIM_CTRL_GLOBAL_LDOK_IN1_WIDTH (1U)
#define S32G_GPR_FLXTIM_CTRL_GLOBAL_LDOK_IN1(x)  (((uint32_t)(((uint32_t)(x)) << S32G_GPR_FLXTIM_CTRL_GLOBAL_LDOK_IN1_SHIFT)) & S32G_GPR_FLXTIM_CTRL_GLOBAL_LDOK_IN1_MASK)
/*! @} */

/*! @name FLXTIM_STAT - FlexTimer LDOK Status */
/*! @{ */

#define S32G_GPR_FLXTIM_STAT_GLB_LDOK_OUT0_MASK  (0x1U)
#define S32G_GPR_FLXTIM_STAT_GLB_LDOK_OUT0_SHIFT (0U)
#define S32G_GPR_FLXTIM_STAT_GLB_LDOK_OUT0_WIDTH (1U)
#define S32G_GPR_FLXTIM_STAT_GLB_LDOK_OUT0(x)    (((uint32_t)(((uint32_t)(x)) << S32G_GPR_FLXTIM_STAT_GLB_LDOK_OUT0_SHIFT)) & S32G_GPR_FLXTIM_STAT_GLB_LDOK_OUT0_MASK)

#define S32G_GPR_FLXTIM_STAT_GLB_LDOK_OUT1_MASK  (0x2U)
#define S32G_GPR_FLXTIM_STAT_GLB_LDOK_OUT1_SHIFT (1U)
#define S32G_GPR_FLXTIM_STAT_GLB_LDOK_OUT1_WIDTH (1U)
#define S32G_GPR_FLXTIM_STAT_GLB_LDOK_OUT1(x)    (((uint32_t)(((uint32_t)(x)) << S32G_GPR_FLXTIM_STAT_GLB_LDOK_OUT1_SHIFT)) & S32G_GPR_FLXTIM_STAT_GLB_LDOK_OUT1_MASK)
/*! @} */

/*! @name CMU_STAT - Top CMU_FC Status */
/*! @{ */

#define S32G_GPR_CMU_STAT_FLL_FHH_MASK           (0x3FFFU)
#define S32G_GPR_CMU_STAT_FLL_FHH_SHIFT          (0U)
#define S32G_GPR_CMU_STAT_FLL_FHH_WIDTH          (14U)
#define S32G_GPR_CMU_STAT_FLL_FHH(x)             (((uint32_t)(((uint32_t)(x)) << S32G_GPR_CMU_STAT_FLL_FHH_SHIFT)) & S32G_GPR_CMU_STAT_FLL_FHH_MASK)
/*! @} */

/*! @name NOC_NOPEND_TRANS - Accelerator NoC NoPendingTrans Status */
/*! @{ */

#define S32G_GPR_NOC_NOPEND_TRANS_STAT_MASK      (0xFFFFFFFFU)
#define S32G_GPR_NOC_NOPEND_TRANS_STAT_SHIFT     (0U)
#define S32G_GPR_NOC_NOPEND_TRANS_STAT_WIDTH     (32U)
#define S32G_GPR_NOC_NOPEND_TRANS_STAT(x)        (((uint32_t)(((uint32_t)(x)) << S32G_GPR_NOC_NOPEND_TRANS_STAT_SHIFT)) & S32G_GPR_NOC_NOPEND_TRANS_STAT_MASK)
/*! @} */

/*! @name PCIE_TOGGLE - SerDes RD/WD Toggle Control */
/*! @{ */

#define S32G_GPR_PCIE_TOGGLE_PCIE1_WD_TOGG_MASK  (0xFU)
#define S32G_GPR_PCIE_TOGGLE_PCIE1_WD_TOGG_SHIFT (0U)
#define S32G_GPR_PCIE_TOGGLE_PCIE1_WD_TOGG_WIDTH (4U)
#define S32G_GPR_PCIE_TOGGLE_PCIE1_WD_TOGG(x)    (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PCIE_TOGGLE_PCIE1_WD_TOGG_SHIFT)) & S32G_GPR_PCIE_TOGGLE_PCIE1_WD_TOGG_MASK)

#define S32G_GPR_PCIE_TOGGLE_PCIE1_RD_TOGG_MASK  (0xF0U)
#define S32G_GPR_PCIE_TOGGLE_PCIE1_RD_TOGG_SHIFT (4U)
#define S32G_GPR_PCIE_TOGGLE_PCIE1_RD_TOGG_WIDTH (4U)
#define S32G_GPR_PCIE_TOGGLE_PCIE1_RD_TOGG(x)    (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PCIE_TOGGLE_PCIE1_RD_TOGG_SHIFT)) & S32G_GPR_PCIE_TOGGLE_PCIE1_RD_TOGG_MASK)

#define S32G_GPR_PCIE_TOGGLE_PCIE0_WD_TOGG_MASK  (0xF00U)
#define S32G_GPR_PCIE_TOGGLE_PCIE0_WD_TOGG_SHIFT (8U)
#define S32G_GPR_PCIE_TOGGLE_PCIE0_WD_TOGG_WIDTH (4U)
#define S32G_GPR_PCIE_TOGGLE_PCIE0_WD_TOGG(x)    (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PCIE_TOGGLE_PCIE0_WD_TOGG_SHIFT)) & S32G_GPR_PCIE_TOGGLE_PCIE0_WD_TOGG_MASK)

#define S32G_GPR_PCIE_TOGGLE_PCIE0_RD_TOGG_MASK  (0xF000U)
#define S32G_GPR_PCIE_TOGGLE_PCIE0_RD_TOGG_SHIFT (12U)
#define S32G_GPR_PCIE_TOGGLE_PCIE0_RD_TOGG_WIDTH (4U)
#define S32G_GPR_PCIE_TOGGLE_PCIE0_RD_TOGG(x)    (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PCIE_TOGGLE_PCIE0_RD_TOGG_SHIFT)) & S32G_GPR_PCIE_TOGGLE_PCIE0_RD_TOGG_MASK)
/*! @} */

/*! @name PCIE_TOGGLEDONE_STAT - SerDes Toggle Done Status */
/*! @{ */

#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE1_WD_TOGG_DONE_STAT_MASK (0xFU)
#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE1_WD_TOGG_DONE_STAT_SHIFT (0U)
#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE1_WD_TOGG_DONE_STAT_WIDTH (4U)
#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE1_WD_TOGG_DONE_STAT(x) (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE1_WD_TOGG_DONE_STAT_SHIFT)) & S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE1_WD_TOGG_DONE_STAT_MASK)

#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE1_RD_TOGG_DONE_STAT_MASK (0xF0U)
#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE1_RD_TOGG_DONE_STAT_SHIFT (4U)
#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE1_RD_TOGG_DONE_STAT_WIDTH (4U)
#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE1_RD_TOGG_DONE_STAT(x) (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE1_RD_TOGG_DONE_STAT_SHIFT)) & S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE1_RD_TOGG_DONE_STAT_MASK)

#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE0_WD_TOGG_DONE_STAT_MASK (0xF00U)
#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE0_WD_TOGG_DONE_STAT_SHIFT (8U)
#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE0_WD_TOGG_DONE_STAT_WIDTH (4U)
#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE0_WD_TOGG_DONE_STAT(x) (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE0_WD_TOGG_DONE_STAT_SHIFT)) & S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE0_WD_TOGG_DONE_STAT_MASK)

#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE0_RD_TOGG_DONE_STAT_MASK (0xF000U)
#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE0_RD_TOGG_DONE_STAT_SHIFT (12U)
#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE0_RD_TOGG_DONE_STAT_WIDTH (4U)
#define S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE0_RD_TOGG_DONE_STAT(x) (((uint32_t)(((uint32_t)(x)) << S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE0_RD_TOGG_DONE_STAT_SHIFT)) & S32G_GPR_PCIE_TOGGLEDONE_STAT_PCIE0_RD_TOGG_DONE_STAT_MASK)
/*! @} */

/*! @name GENCTRL0 - Generic Control 0 */
/*! @{ */

#define S32G_GPR_GENCTRL0_USBPWRFLT_MASK         (0x1U)
#define S32G_GPR_GENCTRL0_USBPWRFLT_SHIFT        (0U)
#define S32G_GPR_GENCTRL0_USBPWRFLT_WIDTH        (1U)
#define S32G_GPR_GENCTRL0_USBPWRFLT(x)           (((uint32_t)(((uint32_t)(x)) << S32G_GPR_GENCTRL0_USBPWRFLT_SHIFT)) & S32G_GPR_GENCTRL0_USBPWRFLT_MASK)

#define S32G_GPR_GENCTRL0_ACCEL_FLXNC_REF_DIV_MASK (0x6U)
#define S32G_GPR_GENCTRL0_ACCEL_FLXNC_REF_DIV_SHIFT (1U)
#define S32G_GPR_GENCTRL0_ACCEL_FLXNC_REF_DIV_WIDTH (2U)
#define S32G_GPR_GENCTRL0_ACCEL_FLXNC_REF_DIV(x) (((uint32_t)(((uint32_t)(x)) << S32G_GPR_GENCTRL0_ACCEL_FLXNC_REF_DIV_SHIFT)) & S32G_GPR_GENCTRL0_ACCEL_FLXNC_REF_DIV_MASK)

#define S32G_GPR_GENCTRL0_ACCEL_FLXNC_RD0_IDLEREQ_MASK (0x8U)
#define S32G_GPR_GENCTRL0_ACCEL_FLXNC_RD0_IDLEREQ_SHIFT (3U)
#define S32G_GPR_GENCTRL0_ACCEL_FLXNC_RD0_IDLEREQ_WIDTH (1U)
#define S32G_GPR_GENCTRL0_ACCEL_FLXNC_RD0_IDLEREQ(x) (((uint32_t)(((uint32_t)(x)) << S32G_GPR_GENCTRL0_ACCEL_FLXNC_RD0_IDLEREQ_SHIFT)) & S32G_GPR_GENCTRL0_ACCEL_FLXNC_RD0_IDLEREQ_MASK)
/*! @} */

/*! @name GENCTRL1 - Generic Control 1 */
/*! @{ */

#define S32G_GPR_GENCTRL1_CTRL_MASK              (0xFFFFFFFFU)
#define S32G_GPR_GENCTRL1_CTRL_SHIFT             (0U)
#define S32G_GPR_GENCTRL1_CTRL_WIDTH             (32U)
#define S32G_GPR_GENCTRL1_CTRL(x)                (((uint32_t)(((uint32_t)(x)) << S32G_GPR_GENCTRL1_CTRL_SHIFT)) & S32G_GPR_GENCTRL1_CTRL_MASK)
/*! @} */

/*! @name GENSTAT0 - Generic Status 0 */
/*! @{ */

#define S32G_GPR_GENSTAT0_STAT_MASK              (0xFFFFFFFFU)
#define S32G_GPR_GENSTAT0_STAT_SHIFT             (0U)
#define S32G_GPR_GENSTAT0_STAT_WIDTH             (32U)
#define S32G_GPR_GENSTAT0_STAT(x)                (((uint32_t)(((uint32_t)(x)) << S32G_GPR_GENSTAT0_STAT_SHIFT)) & S32G_GPR_GENSTAT0_STAT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group S32G_GPR_Register_Masks */

/*!
 * @}
 */ /* end of group S32G_GPR_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G274A_S32G_GPR_H_) */
