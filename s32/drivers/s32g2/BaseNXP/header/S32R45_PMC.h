/*
** ###################################################################
**     Processor:           S32R45_M7
**     Reference manual:    S32R45 RM Rev.3
**     Version:             rev. 2.4, 2022-02-14
**     Build:               b220214
**
**     Abstract:
**         Peripheral Access Layer for S32R45_M7
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
 * @file S32R45_PMC.h
 * @version 2.4
 * @date 2022-02-14
 * @brief Peripheral Access Layer for S32R45_PMC
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
#if !defined(S32R45_PMC_H_)  /* Check if memory map has not been already included */
#define S32R45_PMC_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- PMC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PMC_Peripheral_Access_Layer PMC Peripheral Access Layer
 * @{
 */

/** PMC - Size of Registers Arrays */
#define PMC_POR_WDOG_EVENT_CAPTURE_COUNT          3u

/** PMC - Register Layout Typedef */
typedef struct {
  __IO uint32_t SSR;                               /**< Source of System Reset, offset: 0x0 */
  __IO uint32_t NCSPD_CTL;                         /**< Non-Critical Supply Presence Detector Control, offset: 0x4 */
  uint8_t RESERVED_0[4];
  __I  uint32_t NCSPD_STAT;                        /**< NCSPD Status Register, offset: 0xC */
  __IO uint32_t CSPD_EVENT_CAPTURE;                /**< CSPD Event Capture (CSPDEF), offset: 0x10 */
  __IO uint32_t NCSPD_EVENT_CAPTURE;               /**< NCSPD Event Flag (NCSPDEF), offset: 0x14 */
  uint8_t RESERVED_1[4];
  __IO uint32_t POR_WDOG_EVENT_CAPTURE[PMC_POR_WDOG_EVENT_CAPTURE_COUNT]; /**< Device Status Flag (DSF0)..Device Status Flag (DSF2), array offset: 0x1C, array step: 0x4 */
} PMC_Type, *PMC_MemMapPtr;

/** Number of instances of the PMC module. */
#define PMC_INSTANCE_COUNT                       (1u)

/* PMC - Peripheral instance base addresses */
/** Peripheral PMC base address */
#define IP_PMC_BASE                              (0x4008C000u)
/** Peripheral PMC base pointer */
#define IP_PMC                                   ((PMC_Type *)IP_PMC_BASE)
/** Array initializer of PMC peripheral base addresses */
#define IP_PMC_BASE_ADDRS                        { IP_PMC_BASE }
/** Array initializer of PMC peripheral base pointers */
#define IP_PMC_BASE_PTRS                         { IP_PMC }

/* ----------------------------------------------------------------------------
   -- PMC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PMC_Register_Masks PMC Register Masks
 * @{
 */

/*! @name SSR - Source of System Reset */
/*! @{ */

#define PMC_SSR_POR_SUP_MASK                     (0x1U)
#define PMC_SSR_POR_SUP_SHIFT                    (0U)
#define PMC_SSR_POR_SUP_WIDTH                    (1U)
#define PMC_SSR_POR_SUP(x)                       (((uint32_t)(((uint32_t)(x)) << PMC_SSR_POR_SUP_SHIFT)) & PMC_SSR_POR_SUP_MASK)

#define PMC_SSR_CSPD_EVENT_MASK                  (0x2U)
#define PMC_SSR_CSPD_EVENT_SHIFT                 (1U)
#define PMC_SSR_CSPD_EVENT_WIDTH                 (1U)
#define PMC_SSR_CSPD_EVENT(x)                    (((uint32_t)(((uint32_t)(x)) << PMC_SSR_CSPD_EVENT_SHIFT)) & PMC_SSR_CSPD_EVENT_MASK)

#define PMC_SSR_POR_WDOG_EVENT_MASK              (0x4U)
#define PMC_SSR_POR_WDOG_EVENT_SHIFT             (2U)
#define PMC_SSR_POR_WDOG_EVENT_WIDTH             (1U)
#define PMC_SSR_POR_WDOG_EVENT(x)                (((uint32_t)(((uint32_t)(x)) << PMC_SSR_POR_WDOG_EVENT_SHIFT)) & PMC_SSR_POR_WDOG_EVENT_MASK)
/*! @} */

/*! @name NCSPD_CTL - Non-Critical Supply Presence Detector Control */
/*! @{ */

#define PMC_NCSPD_CTL_NCSPD_CTL0_MASK            (0x1U)
#define PMC_NCSPD_CTL_NCSPD_CTL0_SHIFT           (0U)
#define PMC_NCSPD_CTL_NCSPD_CTL0_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL0(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL0_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL0_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL1_MASK            (0x2U)
#define PMC_NCSPD_CTL_NCSPD_CTL1_SHIFT           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL1_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL1(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL1_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL1_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL2_MASK            (0x4U)
#define PMC_NCSPD_CTL_NCSPD_CTL2_SHIFT           (2U)
#define PMC_NCSPD_CTL_NCSPD_CTL2_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL2(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL2_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL2_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL3_MASK            (0x8U)
#define PMC_NCSPD_CTL_NCSPD_CTL3_SHIFT           (3U)
#define PMC_NCSPD_CTL_NCSPD_CTL3_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL3(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL3_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL3_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL4_MASK            (0x10U)
#define PMC_NCSPD_CTL_NCSPD_CTL4_SHIFT           (4U)
#define PMC_NCSPD_CTL_NCSPD_CTL4_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL4(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL4_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL4_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL5_MASK            (0x20U)
#define PMC_NCSPD_CTL_NCSPD_CTL5_SHIFT           (5U)
#define PMC_NCSPD_CTL_NCSPD_CTL5_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL5(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL5_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL5_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL6_MASK            (0x40U)
#define PMC_NCSPD_CTL_NCSPD_CTL6_SHIFT           (6U)
#define PMC_NCSPD_CTL_NCSPD_CTL6_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL6(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL6_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL6_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL7_MASK            (0x80U)
#define PMC_NCSPD_CTL_NCSPD_CTL7_SHIFT           (7U)
#define PMC_NCSPD_CTL_NCSPD_CTL7_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL7(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL7_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL7_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL8_MASK            (0x100U)
#define PMC_NCSPD_CTL_NCSPD_CTL8_SHIFT           (8U)
#define PMC_NCSPD_CTL_NCSPD_CTL8_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL8(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL8_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL8_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL9_MASK            (0x200U)
#define PMC_NCSPD_CTL_NCSPD_CTL9_SHIFT           (9U)
#define PMC_NCSPD_CTL_NCSPD_CTL9_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL9(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL9_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL9_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL10_MASK           (0x400U)
#define PMC_NCSPD_CTL_NCSPD_CTL10_SHIFT          (10U)
#define PMC_NCSPD_CTL_NCSPD_CTL10_WIDTH          (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL10(x)             (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL10_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL10_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL11_MASK           (0x800U)
#define PMC_NCSPD_CTL_NCSPD_CTL11_SHIFT          (11U)
#define PMC_NCSPD_CTL_NCSPD_CTL11_WIDTH          (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL11(x)             (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL11_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL11_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL12_MASK           (0x1000U)
#define PMC_NCSPD_CTL_NCSPD_CTL12_SHIFT          (12U)
#define PMC_NCSPD_CTL_NCSPD_CTL12_WIDTH          (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL12(x)             (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL12_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL12_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL23_MASK           (0x800000U)
#define PMC_NCSPD_CTL_NCSPD_CTL23_SHIFT          (23U)
#define PMC_NCSPD_CTL_NCSPD_CTL23_WIDTH          (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL23(x)             (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL23_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL23_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL24_MASK           (0x1000000U)
#define PMC_NCSPD_CTL_NCSPD_CTL24_SHIFT          (24U)
#define PMC_NCSPD_CTL_NCSPD_CTL24_WIDTH          (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL24(x)             (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL24_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL24_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL25_MASK           (0x2000000U)
#define PMC_NCSPD_CTL_NCSPD_CTL25_SHIFT          (25U)
#define PMC_NCSPD_CTL_NCSPD_CTL25_WIDTH          (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL25(x)             (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL25_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL25_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL26_MASK           (0x4000000U)
#define PMC_NCSPD_CTL_NCSPD_CTL26_SHIFT          (26U)
#define PMC_NCSPD_CTL_NCSPD_CTL26_WIDTH          (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL26(x)             (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL26_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL26_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL27_MASK           (0x8000000U)
#define PMC_NCSPD_CTL_NCSPD_CTL27_SHIFT          (27U)
#define PMC_NCSPD_CTL_NCSPD_CTL27_WIDTH          (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL27(x)             (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL27_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL27_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL28_MASK           (0x10000000U)
#define PMC_NCSPD_CTL_NCSPD_CTL28_SHIFT          (28U)
#define PMC_NCSPD_CTL_NCSPD_CTL28_WIDTH          (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL28(x)             (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL28_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL28_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL29_MASK           (0x20000000U)
#define PMC_NCSPD_CTL_NCSPD_CTL29_SHIFT          (29U)
#define PMC_NCSPD_CTL_NCSPD_CTL29_WIDTH          (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL29(x)             (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL29_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL29_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL30_MASK           (0x40000000U)
#define PMC_NCSPD_CTL_NCSPD_CTL30_SHIFT          (30U)
#define PMC_NCSPD_CTL_NCSPD_CTL30_WIDTH          (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL30(x)             (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL30_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL30_MASK)

#define PMC_NCSPD_CTL_NCSPD_CTL31_MASK           (0x80000000U)
#define PMC_NCSPD_CTL_NCSPD_CTL31_SHIFT          (31U)
#define PMC_NCSPD_CTL_NCSPD_CTL31_WIDTH          (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL31(x)             (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL31_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL31_MASK)
/*! @} */

/*! @name NCSPD_STAT - NCSPD Status Register */
/*! @{ */

#define PMC_NCSPD_STAT_NCSPD_STAT0_MASK          (0x1U)
#define PMC_NCSPD_STAT_NCSPD_STAT0_SHIFT         (0U)
#define PMC_NCSPD_STAT_NCSPD_STAT0_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT0(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT0_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT0_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT1_MASK          (0x2U)
#define PMC_NCSPD_STAT_NCSPD_STAT1_SHIFT         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT1_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT1(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT1_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT1_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT2_MASK          (0x4U)
#define PMC_NCSPD_STAT_NCSPD_STAT2_SHIFT         (2U)
#define PMC_NCSPD_STAT_NCSPD_STAT2_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT2(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT2_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT2_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT3_MASK          (0x8U)
#define PMC_NCSPD_STAT_NCSPD_STAT3_SHIFT         (3U)
#define PMC_NCSPD_STAT_NCSPD_STAT3_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT3(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT3_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT3_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT4_MASK          (0x10U)
#define PMC_NCSPD_STAT_NCSPD_STAT4_SHIFT         (4U)
#define PMC_NCSPD_STAT_NCSPD_STAT4_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT4(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT4_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT4_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT5_MASK          (0x20U)
#define PMC_NCSPD_STAT_NCSPD_STAT5_SHIFT         (5U)
#define PMC_NCSPD_STAT_NCSPD_STAT5_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT5(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT5_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT5_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT6_MASK          (0x40U)
#define PMC_NCSPD_STAT_NCSPD_STAT6_SHIFT         (6U)
#define PMC_NCSPD_STAT_NCSPD_STAT6_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT6(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT6_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT6_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT7_MASK          (0x80U)
#define PMC_NCSPD_STAT_NCSPD_STAT7_SHIFT         (7U)
#define PMC_NCSPD_STAT_NCSPD_STAT7_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT7(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT7_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT7_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT8_MASK          (0x100U)
#define PMC_NCSPD_STAT_NCSPD_STAT8_SHIFT         (8U)
#define PMC_NCSPD_STAT_NCSPD_STAT8_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT8(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT8_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT8_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT9_MASK          (0x200U)
#define PMC_NCSPD_STAT_NCSPD_STAT9_SHIFT         (9U)
#define PMC_NCSPD_STAT_NCSPD_STAT9_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT9(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT9_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT9_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT10_MASK         (0x400U)
#define PMC_NCSPD_STAT_NCSPD_STAT10_SHIFT        (10U)
#define PMC_NCSPD_STAT_NCSPD_STAT10_WIDTH        (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT10(x)           (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT10_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT10_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT11_MASK         (0x800U)
#define PMC_NCSPD_STAT_NCSPD_STAT11_SHIFT        (11U)
#define PMC_NCSPD_STAT_NCSPD_STAT11_WIDTH        (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT11(x)           (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT11_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT11_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT12_MASK         (0x1000U)
#define PMC_NCSPD_STAT_NCSPD_STAT12_SHIFT        (12U)
#define PMC_NCSPD_STAT_NCSPD_STAT12_WIDTH        (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT12(x)           (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT12_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT12_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT23_MASK         (0x800000U)
#define PMC_NCSPD_STAT_NCSPD_STAT23_SHIFT        (23U)
#define PMC_NCSPD_STAT_NCSPD_STAT23_WIDTH        (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT23(x)           (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT23_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT23_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT24_MASK         (0x1000000U)
#define PMC_NCSPD_STAT_NCSPD_STAT24_SHIFT        (24U)
#define PMC_NCSPD_STAT_NCSPD_STAT24_WIDTH        (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT24(x)           (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT24_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT24_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT25_MASK         (0x2000000U)
#define PMC_NCSPD_STAT_NCSPD_STAT25_SHIFT        (25U)
#define PMC_NCSPD_STAT_NCSPD_STAT25_WIDTH        (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT25(x)           (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT25_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT25_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT26_MASK         (0x4000000U)
#define PMC_NCSPD_STAT_NCSPD_STAT26_SHIFT        (26U)
#define PMC_NCSPD_STAT_NCSPD_STAT26_WIDTH        (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT26(x)           (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT26_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT26_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT27_MASK         (0x8000000U)
#define PMC_NCSPD_STAT_NCSPD_STAT27_SHIFT        (27U)
#define PMC_NCSPD_STAT_NCSPD_STAT27_WIDTH        (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT27(x)           (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT27_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT27_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT28_MASK         (0x10000000U)
#define PMC_NCSPD_STAT_NCSPD_STAT28_SHIFT        (28U)
#define PMC_NCSPD_STAT_NCSPD_STAT28_WIDTH        (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT28(x)           (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT28_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT28_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT29_MASK         (0x20000000U)
#define PMC_NCSPD_STAT_NCSPD_STAT29_SHIFT        (29U)
#define PMC_NCSPD_STAT_NCSPD_STAT29_WIDTH        (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT29(x)           (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT29_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT29_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT30_MASK         (0x40000000U)
#define PMC_NCSPD_STAT_NCSPD_STAT30_SHIFT        (30U)
#define PMC_NCSPD_STAT_NCSPD_STAT30_WIDTH        (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT30(x)           (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT30_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT30_MASK)

#define PMC_NCSPD_STAT_NCSPD_STAT31_MASK         (0x80000000U)
#define PMC_NCSPD_STAT_NCSPD_STAT31_SHIFT        (31U)
#define PMC_NCSPD_STAT_NCSPD_STAT31_WIDTH        (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT31(x)           (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT31_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT31_MASK)
/*! @} */

/*! @name CSPD_EVENT_CAPTURE - CSPD Event Capture (CSPDEF) */
/*! @{ */

#define PMC_CSPD_EVENT_CAPTURE_HVCPOREF_MASK     (0x1U)
#define PMC_CSPD_EVENT_CAPTURE_HVCPOREF_SHIFT    (0U)
#define PMC_CSPD_EVENT_CAPTURE_HVCPOREF_WIDTH    (1U)
#define PMC_CSPD_EVENT_CAPTURE_HVCPOREF(x)       (((uint32_t)(((uint32_t)(x)) << PMC_CSPD_EVENT_CAPTURE_HVCPOREF_SHIFT)) & PMC_CSPD_EVENT_CAPTURE_HVCPOREF_MASK)

#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE0_MASK (0x2U)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE0_SHIFT (1U)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE0_WIDTH (1U)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE0(x) (((uint32_t)(((uint32_t)(x)) << PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE0_SHIFT)) & PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE0_MASK)

#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE1_MASK (0x4U)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE1_SHIFT (2U)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE1_WIDTH (1U)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE1(x) (((uint32_t)(((uint32_t)(x)) << PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE1_SHIFT)) & PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE1_MASK)
/*! @} */

/*! @name NCSPD_EVENT_CAPTURE - NCSPD Event Flag (NCSPDEF) */
/*! @{ */

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE0_MASK (0x1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE0_SHIFT (0U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE0_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE0(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE0_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE0_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE1_MASK (0x2U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE1_SHIFT (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE1_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE1(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE1_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE1_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE2_MASK (0x4U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE2_SHIFT (2U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE2_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE2(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE2_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE2_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE3_MASK (0x8U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE3_SHIFT (3U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE3_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE3(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE3_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE3_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE4_MASK (0x10U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE4_SHIFT (4U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE4_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE4(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE4_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE4_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE5_MASK (0x20U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE5_SHIFT (5U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE5_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE5(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE5_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE5_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE6_MASK (0x40U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE6_SHIFT (6U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE6_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE6(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE6_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE6_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE7_MASK (0x80U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE7_SHIFT (7U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE7_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE7(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE7_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE7_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE8_MASK (0x100U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE8_SHIFT (8U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE8_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE8(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE8_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE8_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE9_MASK (0x200U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE9_SHIFT (9U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE9_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE9(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE9_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE9_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE10_MASK (0x400U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE10_SHIFT (10U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE10_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE10(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE10_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE10_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE11_MASK (0x800U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE11_SHIFT (11U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE11_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE11(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE11_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE11_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE12_MASK (0x1000U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE12_SHIFT (12U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE12_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE12(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE12_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE12_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE23_MASK (0x800000U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE23_SHIFT (23U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE23_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE23(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE23_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE23_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE24_MASK (0x1000000U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE24_SHIFT (24U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE24_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE24(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE24_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE24_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE25_MASK (0x2000000U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE25_SHIFT (25U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE25_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE25(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE25_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE25_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE26_MASK (0x4000000U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE26_SHIFT (26U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE26_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE26(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE26_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE26_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE27_MASK (0x8000000U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE27_SHIFT (27U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE27_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE27(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE27_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE27_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE28_MASK (0x10000000U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE28_SHIFT (28U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE28_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE28(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE28_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE28_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE29_MASK (0x20000000U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE29_SHIFT (29U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE29_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE29(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE29_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE29_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE30_MASK (0x40000000U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE30_SHIFT (30U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE30_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE30(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE30_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE30_MASK)

#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE31_MASK (0x80000000U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE31_SHIFT (31U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE31_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE31(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE31_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE31_MASK)
/*! @} */

/*! @name POR_WDOG_EVENT_CAPTURE - Device Status Flag (DSF0)..Device Status Flag (DSF2) */
/*! @{ */

#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT0_MASK  (0xFFFFFFFFU)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT0_SHIFT (0U)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT0_WIDTH (32U)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT0(x)    (((uint32_t)(((uint32_t)(x)) << PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT0_SHIFT)) & PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT0_MASK)

#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT1_MASK  (0xFFFFFFFFU)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT1_SHIFT (0U)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT1_WIDTH (32U)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT1(x)    (((uint32_t)(((uint32_t)(x)) << PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT1_SHIFT)) & PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT1_MASK)

#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT2_MASK  (0xFFFFFFFFU)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT2_SHIFT (0U)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT2_WIDTH (32U)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT2(x)    (((uint32_t)(((uint32_t)(x)) << PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT2_SHIFT)) & PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT2_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group PMC_Register_Masks */

/*!
 * @}
 */ /* end of group PMC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_PMC_H_) */
