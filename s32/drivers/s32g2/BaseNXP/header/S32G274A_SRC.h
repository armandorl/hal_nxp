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
 * @file S32G274A_SRC.h
 * @version 2.1
 * @date 2022-06-27
 * @brief Peripheral Access Layer for S32G274A_SRC
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
#if !defined(S32G274A_SRC_H_)  /* Check if memory map has not been already included */
#define S32G274A_SRC_H_

#include "S32G274A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SRC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SRC_Peripheral_Access_Layer SRC Peripheral Access Layer
 * @{
 */

/** SRC - Register Layout Typedef */
typedef struct {
  __IO uint32_t SW_NCF;                            /**< Software-Triggered Faults, offset: 0x0 */
  __IO uint32_t GMAC_0_CTRL_STS;                   /**< GMAC Control, offset: 0x4 */
  uint8_t RESERVED_0[32];
  __IO uint32_t CMU_STATUS_REG1;                   /**< CMU Status 1, offset: 0x28 */
  __IO uint32_t CMU_STATUS_REG2;                   /**< CMUs Status 2, offset: 0x2C */
  __IO uint32_t FCCU_EOUT_OVERRIDE_CLEAR_REG;      /**< FCCU EOUT Override Clear, offset: 0x30 */
  uint8_t RESERVED_1[4];
  __IO uint32_t SRC_POR_CTRL_REG;                  /**< SRC POR Control, offset: 0x38 */
  uint8_t RESERVED_2[24];
  __IO uint32_t GPR21;                             /**< GPR21, offset: 0x54 */
  uint8_t RESERVED_3[116];
  __IO uint32_t DEBUG_CONTROL;                     /**< Debug Control, offset: 0xCC */
  uint8_t RESERVED_4[32];
  __IO uint32_t TIMESTAMP_CONTROL_REGISTER;        /**< Timestamp Control, offset: 0xF0 */
  __IO uint32_t FLEXRAY_OS_TICK_INPUT_SELECT_REG;  /**< FlexRay OS Tick Input Select, offset: 0xF4 */
} SRC_Type, *SRC_MemMapPtr;

/** Number of instances of the SRC module. */
#define SRC_INSTANCE_COUNT                       (1u)

/* SRC - Peripheral instance base addresses */
/** Peripheral SRC base address */
#define IP_SRC_BASE                              (0x4007C000u)
/** Peripheral SRC base pointer */
#define IP_SRC                                   ((SRC_Type *)IP_SRC_BASE)
/** Array initializer of SRC peripheral base addresses */
#define IP_SRC_BASE_ADDRS                        { IP_SRC_BASE }
/** Array initializer of SRC peripheral base pointers */
#define IP_SRC_BASE_PTRS                         { IP_SRC }

/* ----------------------------------------------------------------------------
   -- SRC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SRC_Register_Masks SRC Register Masks
 * @{
 */

/*! @name SW_NCF - Software-Triggered Faults */
/*! @{ */

#define SRC_SW_NCF_SW_NCF1_MASK                  (0x1U)
#define SRC_SW_NCF_SW_NCF1_SHIFT                 (0U)
#define SRC_SW_NCF_SW_NCF1_WIDTH                 (1U)
#define SRC_SW_NCF_SW_NCF1(x)                    (((uint32_t)(((uint32_t)(x)) << SRC_SW_NCF_SW_NCF1_SHIFT)) & SRC_SW_NCF_SW_NCF1_MASK)

#define SRC_SW_NCF_SW_NCF2_MASK                  (0x2U)
#define SRC_SW_NCF_SW_NCF2_SHIFT                 (1U)
#define SRC_SW_NCF_SW_NCF2_WIDTH                 (1U)
#define SRC_SW_NCF_SW_NCF2(x)                    (((uint32_t)(((uint32_t)(x)) << SRC_SW_NCF_SW_NCF2_SHIFT)) & SRC_SW_NCF_SW_NCF2_MASK)

#define SRC_SW_NCF_SW_NCF3_MASK                  (0x4U)
#define SRC_SW_NCF_SW_NCF3_SHIFT                 (2U)
#define SRC_SW_NCF_SW_NCF3_WIDTH                 (1U)
#define SRC_SW_NCF_SW_NCF3(x)                    (((uint32_t)(((uint32_t)(x)) << SRC_SW_NCF_SW_NCF3_SHIFT)) & SRC_SW_NCF_SW_NCF3_MASK)

#define SRC_SW_NCF_SW_NCF4_MASK                  (0x8U)
#define SRC_SW_NCF_SW_NCF4_SHIFT                 (3U)
#define SRC_SW_NCF_SW_NCF4_WIDTH                 (1U)
#define SRC_SW_NCF_SW_NCF4(x)                    (((uint32_t)(((uint32_t)(x)) << SRC_SW_NCF_SW_NCF4_SHIFT)) & SRC_SW_NCF_SW_NCF4_MASK)

#define SRC_SW_NCF_SW_NCF5_MASK                  (0x10U)
#define SRC_SW_NCF_SW_NCF5_SHIFT                 (4U)
#define SRC_SW_NCF_SW_NCF5_WIDTH                 (1U)
#define SRC_SW_NCF_SW_NCF5(x)                    (((uint32_t)(((uint32_t)(x)) << SRC_SW_NCF_SW_NCF5_SHIFT)) & SRC_SW_NCF_SW_NCF5_MASK)
/*! @} */

/*! @name GMAC_0_CTRL_STS - GMAC Control */
/*! @{ */

#define SRC_GMAC_0_CTRL_STS_PHY_MODE_MASK        (0x1U)
#define SRC_GMAC_0_CTRL_STS_PHY_MODE_SHIFT       (0U)
#define SRC_GMAC_0_CTRL_STS_PHY_MODE_WIDTH       (1U)
#define SRC_GMAC_0_CTRL_STS_PHY_MODE(x)          (((uint32_t)(((uint32_t)(x)) << SRC_GMAC_0_CTRL_STS_PHY_MODE_SHIFT)) & SRC_GMAC_0_CTRL_STS_PHY_MODE_MASK)

#define SRC_GMAC_0_CTRL_STS_PHY_INTF_SEL_MASK    (0xEU)
#define SRC_GMAC_0_CTRL_STS_PHY_INTF_SEL_SHIFT   (1U)
#define SRC_GMAC_0_CTRL_STS_PHY_INTF_SEL_WIDTH   (3U)
#define SRC_GMAC_0_CTRL_STS_PHY_INTF_SEL(x)      (((uint32_t)(((uint32_t)(x)) << SRC_GMAC_0_CTRL_STS_PHY_INTF_SEL_SHIFT)) & SRC_GMAC_0_CTRL_STS_PHY_INTF_SEL_MASK)

#define SRC_GMAC_0_CTRL_STS_FTM0_SEL_MASK        (0x400U)
#define SRC_GMAC_0_CTRL_STS_FTM0_SEL_SHIFT       (10U)
#define SRC_GMAC_0_CTRL_STS_FTM0_SEL_WIDTH       (1U)
#define SRC_GMAC_0_CTRL_STS_FTM0_SEL(x)          (((uint32_t)(((uint32_t)(x)) << SRC_GMAC_0_CTRL_STS_FTM0_SEL_SHIFT)) & SRC_GMAC_0_CTRL_STS_FTM0_SEL_MASK)

#define SRC_GMAC_0_CTRL_STS_FTM1_SEL_MASK        (0x800U)
#define SRC_GMAC_0_CTRL_STS_FTM1_SEL_SHIFT       (11U)
#define SRC_GMAC_0_CTRL_STS_FTM1_SEL_WIDTH       (1U)
#define SRC_GMAC_0_CTRL_STS_FTM1_SEL(x)          (((uint32_t)(((uint32_t)(x)) << SRC_GMAC_0_CTRL_STS_FTM1_SEL_SHIFT)) & SRC_GMAC_0_CTRL_STS_FTM1_SEL_MASK)
/*! @} */

/*! @name CMU_STATUS_REG1 - CMU Status 1 */
/*! @{ */

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_0_MASK  (0x1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_0_SHIFT (0U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_0_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_0(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_0_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_0_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_1_MASK  (0x2U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_1_SHIFT (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_1_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_1(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_1_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_1_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_2_MASK  (0x4U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_2_SHIFT (2U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_2_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_2(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_2_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_2_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_3_MASK  (0x8U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_3_SHIFT (3U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_3_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_3(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_3_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_3_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_4_MASK  (0x10U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_4_SHIFT (4U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_4_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_4(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_4_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_4_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_5_MASK  (0x20U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_5_SHIFT (5U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_5_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_5(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_5_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_5_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_6_MASK  (0x40U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_6_SHIFT (6U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_6_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_6(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_6_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_6_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_7_MASK  (0x80U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_7_SHIFT (7U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_7_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_7(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_7_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_7_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_8_MASK  (0x100U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_8_SHIFT (8U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_8_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_8(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_8_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_8_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_9_MASK  (0x200U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_9_SHIFT (9U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_9_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_9(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_9_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_9_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_10_MASK (0x400U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_10_SHIFT (10U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_10_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_10(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_10_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_10_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_11_MASK (0x800U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_11_SHIFT (11U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_11_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_11(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_11_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_11_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_12_MASK (0x1000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_12_SHIFT (12U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_12_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_12(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_12_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_12_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_13_MASK (0x2000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_13_SHIFT (13U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_13_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_13(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_13_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_13_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_14_MASK (0x4000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_14_SHIFT (14U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_14_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_14(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_14_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_14_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_15_MASK (0x8000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_15_SHIFT (15U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_15_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_15(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_15_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_15_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_16_MASK (0x10000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_16_SHIFT (16U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_16_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_16(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_16_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_16_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_17_MASK (0x20000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_17_SHIFT (17U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_17_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_17(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_17_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_17_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_18_MASK (0x40000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_18_SHIFT (18U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_18_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_18(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_18_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_18_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_19_MASK (0x80000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_19_SHIFT (19U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_19_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_19(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_19_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_19_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_22_MASK (0x400000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_22_SHIFT (22U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_22_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_22(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_22_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_22_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_23_MASK (0x800000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_23_SHIFT (23U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_23_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_23(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_23_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_23_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_24_MASK (0x1000000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_24_SHIFT (24U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_24_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_24(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_24_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_24_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_25_MASK (0x2000000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_25_SHIFT (25U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_25_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_25(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_25_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_25_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_26_MASK (0x4000000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_26_SHIFT (26U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_26_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_26(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_26_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_26_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_27_MASK (0x8000000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_27_SHIFT (27U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_27_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_27(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_27_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_27_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_28_MASK (0x10000000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_28_SHIFT (28U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_28_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_28(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_28_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_28_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_29_MASK (0x20000000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_29_SHIFT (29U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_29_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_29(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_29_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_29_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_30_MASK (0x40000000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_30_SHIFT (30U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_30_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_30(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_30_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_30_MASK)

#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_31_MASK (0x80000000U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_31_SHIFT (31U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_31_WIDTH (1U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_31(x)   (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_31_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_31_MASK)
/*! @} */

/*! @name CMU_STATUS_REG2 - CMUs Status 2 */
/*! @{ */

#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_0_MASK  (0x1U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_0_SHIFT (0U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_0_WIDTH (1U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_0(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG2_FLL_FHH_STAT_0_SHIFT)) & SRC_CMU_STATUS_REG2_FLL_FHH_STAT_0_MASK)

#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_1_MASK  (0x2U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_1_SHIFT (1U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_1_WIDTH (1U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_1(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG2_FLL_FHH_STAT_1_SHIFT)) & SRC_CMU_STATUS_REG2_FLL_FHH_STAT_1_MASK)

#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_2_MASK  (0x4U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_2_SHIFT (2U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_2_WIDTH (1U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_2(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG2_FLL_FHH_STAT_2_SHIFT)) & SRC_CMU_STATUS_REG2_FLL_FHH_STAT_2_MASK)

#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_3_MASK  (0x8U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_3_SHIFT (3U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_3_WIDTH (1U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_3(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG2_FLL_FHH_STAT_3_SHIFT)) & SRC_CMU_STATUS_REG2_FLL_FHH_STAT_3_MASK)

#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_4_MASK  (0x10U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_4_SHIFT (4U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_4_WIDTH (1U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_4(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG2_FLL_FHH_STAT_4_SHIFT)) & SRC_CMU_STATUS_REG2_FLL_FHH_STAT_4_MASK)

#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_5_MASK  (0x20U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_5_SHIFT (5U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_5_WIDTH (1U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_5(x)    (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG2_FLL_FHH_STAT_5_SHIFT)) & SRC_CMU_STATUS_REG2_FLL_FHH_STAT_5_MASK)
/*! @} */

/*! @name FCCU_EOUT_OVERRIDE_CLEAR_REG - FCCU EOUT Override Clear */
/*! @{ */

#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_CLEAR_MASK (0x1U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_CLEAR_SHIFT (0U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_CLEAR_WIDTH (1U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_CLEAR_SHIFT)) & SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_CLEAR_MASK)

#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_DISABLE_DURING_SELFTEST_MASK (0x2U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_DISABLE_DURING_SELFTEST_SHIFT (1U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_DISABLE_DURING_SELFTEST_WIDTH (1U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_DISABLE_DURING_SELFTEST(x) (((uint32_t)(((uint32_t)(x)) << SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_DISABLE_DURING_SELFTEST_SHIFT)) & SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_DISABLE_DURING_SELFTEST_MASK)
/*! @} */

/*! @name SRC_POR_CTRL_REG - SRC POR Control */
/*! @{ */

#define SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_A_MASK (0xFFU)
#define SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_A_SHIFT (0U)
#define SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_A_WIDTH (8U)
#define SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_A(x) (((uint32_t)(((uint32_t)(x)) << SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_A_SHIFT)) & SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_A_MASK)

#define SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_B_MASK (0xFF00U)
#define SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_B_SHIFT (8U)
#define SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_B_WIDTH (8U)
#define SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_B(x) (((uint32_t)(((uint32_t)(x)) << SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_B_SHIFT)) & SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_B_MASK)

#define SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_MARKER_MASK (0xFFFF0000U)
#define SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_MARKER_SHIFT (16U)
#define SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_MARKER_WIDTH (16U)
#define SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_MARKER(x) (((uint32_t)(((uint32_t)(x)) << SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_MARKER_SHIFT)) & SRC_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_MARKER_MASK)
/*! @} */

/*! @name GPR21 - GPR21 */
/*! @{ */

#define SRC_GPR21_PCIE_PARITY_MODE_data_MASK     (0xFFFFFU)
#define SRC_GPR21_PCIE_PARITY_MODE_data_SHIFT    (0U)
#define SRC_GPR21_PCIE_PARITY_MODE_data_WIDTH    (20U)
#define SRC_GPR21_PCIE_PARITY_MODE_data(x)       (((uint32_t)(((uint32_t)(x)) << SRC_GPR21_PCIE_PARITY_MODE_data_SHIFT)) & SRC_GPR21_PCIE_PARITY_MODE_data_MASK)
/*! @} */

/*! @name DEBUG_CONTROL - Debug Control */
/*! @{ */

#define SRC_DEBUG_CONTROL_DEBUG_CLK_DISABLE_MASK (0x1U)
#define SRC_DEBUG_CONTROL_DEBUG_CLK_DISABLE_SHIFT (0U)
#define SRC_DEBUG_CONTROL_DEBUG_CLK_DISABLE_WIDTH (1U)
#define SRC_DEBUG_CONTROL_DEBUG_CLK_DISABLE(x)   (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_DEBUG_CLK_DISABLE_SHIFT)) & SRC_DEBUG_CONTROL_DEBUG_CLK_DISABLE_MASK)

#define SRC_DEBUG_CONTROL_CA53_0_DBGL1RSTDISABLE_MASK (0x2U)
#define SRC_DEBUG_CONTROL_CA53_0_DBGL1RSTDISABLE_SHIFT (1U)
#define SRC_DEBUG_CONTROL_CA53_0_DBGL1RSTDISABLE_WIDTH (1U)
#define SRC_DEBUG_CONTROL_CA53_0_DBGL1RSTDISABLE(x) (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_CA53_0_DBGL1RSTDISABLE_SHIFT)) & SRC_DEBUG_CONTROL_CA53_0_DBGL1RSTDISABLE_MASK)

#define SRC_DEBUG_CONTROL_CA53_1_DBGL1RSTDISABLE_MASK (0x4U)
#define SRC_DEBUG_CONTROL_CA53_1_DBGL1RSTDISABLE_SHIFT (2U)
#define SRC_DEBUG_CONTROL_CA53_1_DBGL1RSTDISABLE_WIDTH (1U)
#define SRC_DEBUG_CONTROL_CA53_1_DBGL1RSTDISABLE(x) (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_CA53_1_DBGL1RSTDISABLE_SHIFT)) & SRC_DEBUG_CONTROL_CA53_1_DBGL1RSTDISABLE_MASK)

#define SRC_DEBUG_CONTROL_DBG_SETUP_DONE_MASK    (0x8U)
#define SRC_DEBUG_CONTROL_DBG_SETUP_DONE_SHIFT   (3U)
#define SRC_DEBUG_CONTROL_DBG_SETUP_DONE_WIDTH   (1U)
#define SRC_DEBUG_CONTROL_DBG_SETUP_DONE(x)      (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_DBG_SETUP_DONE_SHIFT)) & SRC_DEBUG_CONTROL_DBG_SETUP_DONE_MASK)

#define SRC_DEBUG_CONTROL_JTAG_ACTIVE_MASK       (0x10U)
#define SRC_DEBUG_CONTROL_JTAG_ACTIVE_SHIFT      (4U)
#define SRC_DEBUG_CONTROL_JTAG_ACTIVE_WIDTH      (1U)
#define SRC_DEBUG_CONTROL_JTAG_ACTIVE(x)         (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_JTAG_ACTIVE_SHIFT)) & SRC_DEBUG_CONTROL_JTAG_ACTIVE_MASK)

#define SRC_DEBUG_CONTROL_CA53_0_L2RSTDISABLE_MASK (0x20U)
#define SRC_DEBUG_CONTROL_CA53_0_L2RSTDISABLE_SHIFT (5U)
#define SRC_DEBUG_CONTROL_CA53_0_L2RSTDISABLE_WIDTH (1U)
#define SRC_DEBUG_CONTROL_CA53_0_L2RSTDISABLE(x) (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_CA53_0_L2RSTDISABLE_SHIFT)) & SRC_DEBUG_CONTROL_CA53_0_L2RSTDISABLE_MASK)

#define SRC_DEBUG_CONTROL_CA53_1_L2RSTDISABLE_MASK (0x40U)
#define SRC_DEBUG_CONTROL_CA53_1_L2RSTDISABLE_SHIFT (6U)
#define SRC_DEBUG_CONTROL_CA53_1_L2RSTDISABLE_WIDTH (1U)
#define SRC_DEBUG_CONTROL_CA53_1_L2RSTDISABLE(x) (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_CA53_1_L2RSTDISABLE_SHIFT)) & SRC_DEBUG_CONTROL_CA53_1_L2RSTDISABLE_MASK)

#define SRC_DEBUG_CONTROL_DBG_RST_MSK_0a_MASK    (0x80U)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_0a_SHIFT   (7U)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_0a_WIDTH   (1U)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_0a(x)      (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_DBG_RST_MSK_0a_SHIFT)) & SRC_DEBUG_CONTROL_DBG_RST_MSK_0a_MASK)

#define SRC_DEBUG_CONTROL_DBG_RST_MSK_1a_MASK    (0x100U)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_1a_SHIFT   (8U)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_1a_WIDTH   (1U)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_1a(x)      (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_DBG_RST_MSK_1a_SHIFT)) & SRC_DEBUG_CONTROL_DBG_RST_MSK_1a_MASK)

#define SRC_DEBUG_CONTROL_READY_FOR_DEBUG_MASK   (0x200U)
#define SRC_DEBUG_CONTROL_READY_FOR_DEBUG_SHIFT  (9U)
#define SRC_DEBUG_CONTROL_READY_FOR_DEBUG_WIDTH  (1U)
#define SRC_DEBUG_CONTROL_READY_FOR_DEBUG(x)     (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_READY_FOR_DEBUG_SHIFT)) & SRC_DEBUG_CONTROL_READY_FOR_DEBUG_MASK)
/*! @} */

/*! @name TIMESTAMP_CONTROL_REGISTER - Timestamp Control */
/*! @{ */

#define SRC_TIMESTAMP_CONTROL_REGISTER_CAN_TS_CNT_SEL_MASK (0x3U)
#define SRC_TIMESTAMP_CONTROL_REGISTER_CAN_TS_CNT_SEL_SHIFT (0U)
#define SRC_TIMESTAMP_CONTROL_REGISTER_CAN_TS_CNT_SEL_WIDTH (2U)
#define SRC_TIMESTAMP_CONTROL_REGISTER_CAN_TS_CNT_SEL(x) (((uint32_t)(((uint32_t)(x)) << SRC_TIMESTAMP_CONTROL_REGISTER_CAN_TS_CNT_SEL_SHIFT)) & SRC_TIMESTAMP_CONTROL_REGISTER_CAN_TS_CNT_SEL_MASK)

#define SRC_TIMESTAMP_CONTROL_REGISTER_TS_ENABLE_MASK (0x4U)
#define SRC_TIMESTAMP_CONTROL_REGISTER_TS_ENABLE_SHIFT (2U)
#define SRC_TIMESTAMP_CONTROL_REGISTER_TS_ENABLE_WIDTH (1U)
#define SRC_TIMESTAMP_CONTROL_REGISTER_TS_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SRC_TIMESTAMP_CONTROL_REGISTER_TS_ENABLE_SHIFT)) & SRC_TIMESTAMP_CONTROL_REGISTER_TS_ENABLE_MASK)
/*! @} */

/*! @name FLEXRAY_OS_TICK_INPUT_SELECT_REG - FlexRay OS Tick Input Select */
/*! @{ */

#define SRC_FLEXRAY_OS_TICK_INPUT_SELECT_REG_FLEXRAY_0_STOPWATCH_MUX_SELECT_MASK (0x3U)
#define SRC_FLEXRAY_OS_TICK_INPUT_SELECT_REG_FLEXRAY_0_STOPWATCH_MUX_SELECT_SHIFT (0U)
#define SRC_FLEXRAY_OS_TICK_INPUT_SELECT_REG_FLEXRAY_0_STOPWATCH_MUX_SELECT_WIDTH (2U)
#define SRC_FLEXRAY_OS_TICK_INPUT_SELECT_REG_FLEXRAY_0_STOPWATCH_MUX_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SRC_FLEXRAY_OS_TICK_INPUT_SELECT_REG_FLEXRAY_0_STOPWATCH_MUX_SELECT_SHIFT)) & SRC_FLEXRAY_OS_TICK_INPUT_SELECT_REG_FLEXRAY_0_STOPWATCH_MUX_SELECT_MASK)

#define SRC_FLEXRAY_OS_TICK_INPUT_SELECT_REG_FLEXRAY_1_STOPWATCH_MUX_SELECT_MASK (0xCU)
#define SRC_FLEXRAY_OS_TICK_INPUT_SELECT_REG_FLEXRAY_1_STOPWATCH_MUX_SELECT_SHIFT (2U)
#define SRC_FLEXRAY_OS_TICK_INPUT_SELECT_REG_FLEXRAY_1_STOPWATCH_MUX_SELECT_WIDTH (2U)
#define SRC_FLEXRAY_OS_TICK_INPUT_SELECT_REG_FLEXRAY_1_STOPWATCH_MUX_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SRC_FLEXRAY_OS_TICK_INPUT_SELECT_REG_FLEXRAY_1_STOPWATCH_MUX_SELECT_SHIFT)) & SRC_FLEXRAY_OS_TICK_INPUT_SELECT_REG_FLEXRAY_1_STOPWATCH_MUX_SELECT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SRC_Register_Masks */

/*!
 * @}
 */ /* end of group SRC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G274A_SRC_H_) */
