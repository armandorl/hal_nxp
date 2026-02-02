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
 * @file S32G274A_LLCE_Core_to_core.h
 * @version 2.1
 * @date 2022-06-27
 * @brief Peripheral Access Layer for S32G274A_LLCE_Core_to_core
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
#if !defined(S32G274A_LLCE_Core_to_core_H_)  /* Check if memory map has not been already included */
#define S32G274A_LLCE_Core_to_core_H_

#include "S32G274A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- LLCE_Core_to_core Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LLCE_Core_to_core_Peripheral_Access_Layer LLCE_Core_to_core Peripheral Access Layer
 * @{
 */

/** LLCE_Core_to_core - Register Layout Typedef */
typedef struct {
  __IO uint32_t HINTC0R;                           /**< HOST interrupt from Core 0 Register, offset: 0x0 */
  __IO uint32_t HINTC1R;                           /**< HOST Interrupt from Core 1 Register, offset: 0x4 */
  __IO uint32_t HINTC2R;                           /**< HOST Interrupt from Core 2 Register, offset: 0x8 */
  __IO uint32_t HINTC3R;                           /**< HOST Interrupt from Core 3 Register, offset: 0xC */
  uint8_t RESERVED_0[16];
  __IO uint32_t C0INTHR;                           /**< Core 0 Interrupt from HOST, offset: 0x20 */
  __IO uint32_t C1INTHR;                           /**< Core 1 Interrupt From HOST Register, offset: 0x24 */
  __IO uint32_t C2INTHR;                           /**< Core 2 Interrupt from HOST Register, offset: 0x28 */
  __IO uint32_t C3INTHR;                           /**< Core 3 Interrupt from HOST Register, offset: 0x2C */
  uint8_t RESERVED_1[48];
  __IO uint32_t HINTC0ER;                          /**< HOST Interrupt from Core 0 Enable Register, offset: 0x60 */
  __IO uint32_t HINTC1ER;                          /**< HOST Interrupt from Core 1 Enable Register, offset: 0x64 */
  __IO uint32_t HINTC2ER;                          /**< HOST Interrupt from Core 2 Enable Register, offset: 0x68 */
  __IO uint32_t HINTC3ER;                          /**< HOST Interrupt from Core 3 Enable Register, offset: 0x6C */
  uint8_t RESERVED_2[16];
  __IO uint32_t C0INTHER;                          /**< Core 0 Interrupt from Host Enable Register, offset: 0x80 */
  __IO uint32_t C1INTHER;                          /**< Core 1 Interrupt from HOST Enable Register, offset: 0x84 */
  __IO uint32_t C2INTHER;                          /**< Core 2 Interrupt from HOST Enable Register, offset: 0x88 */
  __IO uint32_t C3INTHER;                          /**< Core 3 Interrupt from HOST Enable Register, offset: 0x8C */
} LLCE_Core_to_core_Type, *LLCE_Core_to_core_MemMapPtr;

/** Number of instances of the LLCE_Core_to_core module. */
#define LLCE_Core_to_core_INSTANCE_COUNT         (1u)

/* LLCE_Core_to_core - Peripheral instance base addresses */
/** Peripheral LLCE_CORE_TO_CORE base address */
#define IP_LLCE_CORE_TO_CORE_BASE                (0x43C26000u)
/** Peripheral LLCE_CORE_TO_CORE base pointer */
#define IP_LLCE_CORE_TO_CORE                     ((LLCE_Core_to_core_Type *)IP_LLCE_CORE_TO_CORE_BASE)
/** Array initializer of LLCE_Core_to_core peripheral base addresses */
#define IP_LLCE_Core_to_core_BASE_ADDRS          { IP_LLCE_CORE_TO_CORE_BASE }
/** Array initializer of LLCE_Core_to_core peripheral base pointers */
#define IP_LLCE_Core_to_core_BASE_PTRS           { IP_LLCE_CORE_TO_CORE }

/* ----------------------------------------------------------------------------
   -- LLCE_Core_to_core Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LLCE_Core_to_core_Register_Masks LLCE_Core_to_core Register Masks
 * @{
 */

/*! @name HINTC0R - HOST interrupt from Core 0 Register */
/*! @{ */

#define LLCE_Core_to_core_HINTC0R_FLG0_MASK      (0x1U)
#define LLCE_Core_to_core_HINTC0R_FLG0_SHIFT     (0U)
#define LLCE_Core_to_core_HINTC0R_FLG0_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC0R_FLG0(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG0_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG0_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG1_MASK      (0x2U)
#define LLCE_Core_to_core_HINTC0R_FLG1_SHIFT     (1U)
#define LLCE_Core_to_core_HINTC0R_FLG1_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC0R_FLG1(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG1_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG1_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG2_MASK      (0x4U)
#define LLCE_Core_to_core_HINTC0R_FLG2_SHIFT     (2U)
#define LLCE_Core_to_core_HINTC0R_FLG2_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC0R_FLG2(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG2_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG2_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG3_MASK      (0x8U)
#define LLCE_Core_to_core_HINTC0R_FLG3_SHIFT     (3U)
#define LLCE_Core_to_core_HINTC0R_FLG3_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC0R_FLG3(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG3_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG3_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG4_MASK      (0x10U)
#define LLCE_Core_to_core_HINTC0R_FLG4_SHIFT     (4U)
#define LLCE_Core_to_core_HINTC0R_FLG4_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC0R_FLG4(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG4_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG4_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG5_MASK      (0x20U)
#define LLCE_Core_to_core_HINTC0R_FLG5_SHIFT     (5U)
#define LLCE_Core_to_core_HINTC0R_FLG5_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC0R_FLG5(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG5_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG5_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG6_MASK      (0x40U)
#define LLCE_Core_to_core_HINTC0R_FLG6_SHIFT     (6U)
#define LLCE_Core_to_core_HINTC0R_FLG6_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC0R_FLG6(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG6_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG6_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG7_MASK      (0x80U)
#define LLCE_Core_to_core_HINTC0R_FLG7_SHIFT     (7U)
#define LLCE_Core_to_core_HINTC0R_FLG7_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC0R_FLG7(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG7_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG7_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG8_MASK      (0x100U)
#define LLCE_Core_to_core_HINTC0R_FLG8_SHIFT     (8U)
#define LLCE_Core_to_core_HINTC0R_FLG8_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC0R_FLG8(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG8_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG8_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG9_MASK      (0x200U)
#define LLCE_Core_to_core_HINTC0R_FLG9_SHIFT     (9U)
#define LLCE_Core_to_core_HINTC0R_FLG9_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC0R_FLG9(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG9_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG9_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG10_MASK     (0x400U)
#define LLCE_Core_to_core_HINTC0R_FLG10_SHIFT    (10U)
#define LLCE_Core_to_core_HINTC0R_FLG10_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0R_FLG10(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG10_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG10_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG11_MASK     (0x800U)
#define LLCE_Core_to_core_HINTC0R_FLG11_SHIFT    (11U)
#define LLCE_Core_to_core_HINTC0R_FLG11_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0R_FLG11(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG11_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG11_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG12_MASK     (0x1000U)
#define LLCE_Core_to_core_HINTC0R_FLG12_SHIFT    (12U)
#define LLCE_Core_to_core_HINTC0R_FLG12_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0R_FLG12(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG12_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG12_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG13_MASK     (0x2000U)
#define LLCE_Core_to_core_HINTC0R_FLG13_SHIFT    (13U)
#define LLCE_Core_to_core_HINTC0R_FLG13_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0R_FLG13(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG13_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG13_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG14_MASK     (0x4000U)
#define LLCE_Core_to_core_HINTC0R_FLG14_SHIFT    (14U)
#define LLCE_Core_to_core_HINTC0R_FLG14_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0R_FLG14(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG14_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG14_MASK)

#define LLCE_Core_to_core_HINTC0R_FLG15_MASK     (0x8000U)
#define LLCE_Core_to_core_HINTC0R_FLG15_SHIFT    (15U)
#define LLCE_Core_to_core_HINTC0R_FLG15_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0R_FLG15(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0R_FLG15_SHIFT)) & LLCE_Core_to_core_HINTC0R_FLG15_MASK)
/*! @} */

/*! @name HINTC1R - HOST Interrupt from Core 1 Register */
/*! @{ */

#define LLCE_Core_to_core_HINTC1R_FLG0_MASK      (0x1U)
#define LLCE_Core_to_core_HINTC1R_FLG0_SHIFT     (0U)
#define LLCE_Core_to_core_HINTC1R_FLG0_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC1R_FLG0(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG0_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG0_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG1_MASK      (0x2U)
#define LLCE_Core_to_core_HINTC1R_FLG1_SHIFT     (1U)
#define LLCE_Core_to_core_HINTC1R_FLG1_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC1R_FLG1(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG1_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG1_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG2_MASK      (0x4U)
#define LLCE_Core_to_core_HINTC1R_FLG2_SHIFT     (2U)
#define LLCE_Core_to_core_HINTC1R_FLG2_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC1R_FLG2(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG2_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG2_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG3_MASK      (0x8U)
#define LLCE_Core_to_core_HINTC1R_FLG3_SHIFT     (3U)
#define LLCE_Core_to_core_HINTC1R_FLG3_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC1R_FLG3(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG3_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG3_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG4_MASK      (0x10U)
#define LLCE_Core_to_core_HINTC1R_FLG4_SHIFT     (4U)
#define LLCE_Core_to_core_HINTC1R_FLG4_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC1R_FLG4(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG4_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG4_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG5_MASK      (0x20U)
#define LLCE_Core_to_core_HINTC1R_FLG5_SHIFT     (5U)
#define LLCE_Core_to_core_HINTC1R_FLG5_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC1R_FLG5(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG5_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG5_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG6_MASK      (0x40U)
#define LLCE_Core_to_core_HINTC1R_FLG6_SHIFT     (6U)
#define LLCE_Core_to_core_HINTC1R_FLG6_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC1R_FLG6(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG6_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG6_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG7_MASK      (0x80U)
#define LLCE_Core_to_core_HINTC1R_FLG7_SHIFT     (7U)
#define LLCE_Core_to_core_HINTC1R_FLG7_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC1R_FLG7(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG7_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG7_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG8_MASK      (0x100U)
#define LLCE_Core_to_core_HINTC1R_FLG8_SHIFT     (8U)
#define LLCE_Core_to_core_HINTC1R_FLG8_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC1R_FLG8(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG8_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG8_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG9_MASK      (0x200U)
#define LLCE_Core_to_core_HINTC1R_FLG9_SHIFT     (9U)
#define LLCE_Core_to_core_HINTC1R_FLG9_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC1R_FLG9(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG9_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG9_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG10_MASK     (0x400U)
#define LLCE_Core_to_core_HINTC1R_FLG10_SHIFT    (10U)
#define LLCE_Core_to_core_HINTC1R_FLG10_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1R_FLG10(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG10_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG10_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG11_MASK     (0x800U)
#define LLCE_Core_to_core_HINTC1R_FLG11_SHIFT    (11U)
#define LLCE_Core_to_core_HINTC1R_FLG11_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1R_FLG11(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG11_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG11_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG12_MASK     (0x1000U)
#define LLCE_Core_to_core_HINTC1R_FLG12_SHIFT    (12U)
#define LLCE_Core_to_core_HINTC1R_FLG12_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1R_FLG12(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG12_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG12_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG13_MASK     (0x2000U)
#define LLCE_Core_to_core_HINTC1R_FLG13_SHIFT    (13U)
#define LLCE_Core_to_core_HINTC1R_FLG13_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1R_FLG13(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG13_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG13_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG14_MASK     (0x4000U)
#define LLCE_Core_to_core_HINTC1R_FLG14_SHIFT    (14U)
#define LLCE_Core_to_core_HINTC1R_FLG14_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1R_FLG14(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG14_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG14_MASK)

#define LLCE_Core_to_core_HINTC1R_FLG15_MASK     (0x8000U)
#define LLCE_Core_to_core_HINTC1R_FLG15_SHIFT    (15U)
#define LLCE_Core_to_core_HINTC1R_FLG15_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1R_FLG15(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1R_FLG15_SHIFT)) & LLCE_Core_to_core_HINTC1R_FLG15_MASK)
/*! @} */

/*! @name HINTC2R - HOST Interrupt from Core 2 Register */
/*! @{ */

#define LLCE_Core_to_core_HINTC2R_FLG0_MASK      (0x1U)
#define LLCE_Core_to_core_HINTC2R_FLG0_SHIFT     (0U)
#define LLCE_Core_to_core_HINTC2R_FLG0_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC2R_FLG0(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG0_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG0_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG1_MASK      (0x2U)
#define LLCE_Core_to_core_HINTC2R_FLG1_SHIFT     (1U)
#define LLCE_Core_to_core_HINTC2R_FLG1_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC2R_FLG1(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG1_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG1_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG2_MASK      (0x4U)
#define LLCE_Core_to_core_HINTC2R_FLG2_SHIFT     (2U)
#define LLCE_Core_to_core_HINTC2R_FLG2_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC2R_FLG2(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG2_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG2_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG3_MASK      (0x8U)
#define LLCE_Core_to_core_HINTC2R_FLG3_SHIFT     (3U)
#define LLCE_Core_to_core_HINTC2R_FLG3_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC2R_FLG3(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG3_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG3_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG4_MASK      (0x10U)
#define LLCE_Core_to_core_HINTC2R_FLG4_SHIFT     (4U)
#define LLCE_Core_to_core_HINTC2R_FLG4_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC2R_FLG4(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG4_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG4_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG5_MASK      (0x20U)
#define LLCE_Core_to_core_HINTC2R_FLG5_SHIFT     (5U)
#define LLCE_Core_to_core_HINTC2R_FLG5_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC2R_FLG5(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG5_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG5_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG6_MASK      (0x40U)
#define LLCE_Core_to_core_HINTC2R_FLG6_SHIFT     (6U)
#define LLCE_Core_to_core_HINTC2R_FLG6_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC2R_FLG6(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG6_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG6_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG7_MASK      (0x80U)
#define LLCE_Core_to_core_HINTC2R_FLG7_SHIFT     (7U)
#define LLCE_Core_to_core_HINTC2R_FLG7_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC2R_FLG7(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG7_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG7_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG8_MASK      (0x100U)
#define LLCE_Core_to_core_HINTC2R_FLG8_SHIFT     (8U)
#define LLCE_Core_to_core_HINTC2R_FLG8_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC2R_FLG8(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG8_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG8_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG9_MASK      (0x200U)
#define LLCE_Core_to_core_HINTC2R_FLG9_SHIFT     (9U)
#define LLCE_Core_to_core_HINTC2R_FLG9_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC2R_FLG9(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG9_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG9_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG10_MASK     (0x400U)
#define LLCE_Core_to_core_HINTC2R_FLG10_SHIFT    (10U)
#define LLCE_Core_to_core_HINTC2R_FLG10_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2R_FLG10(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG10_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG10_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG11_MASK     (0x800U)
#define LLCE_Core_to_core_HINTC2R_FLG11_SHIFT    (11U)
#define LLCE_Core_to_core_HINTC2R_FLG11_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2R_FLG11(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG11_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG11_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG12_MASK     (0x1000U)
#define LLCE_Core_to_core_HINTC2R_FLG12_SHIFT    (12U)
#define LLCE_Core_to_core_HINTC2R_FLG12_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2R_FLG12(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG12_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG12_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG13_MASK     (0x2000U)
#define LLCE_Core_to_core_HINTC2R_FLG13_SHIFT    (13U)
#define LLCE_Core_to_core_HINTC2R_FLG13_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2R_FLG13(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG13_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG13_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG14_MASK     (0x4000U)
#define LLCE_Core_to_core_HINTC2R_FLG14_SHIFT    (14U)
#define LLCE_Core_to_core_HINTC2R_FLG14_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2R_FLG14(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG14_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG14_MASK)

#define LLCE_Core_to_core_HINTC2R_FLG15_MASK     (0x8000U)
#define LLCE_Core_to_core_HINTC2R_FLG15_SHIFT    (15U)
#define LLCE_Core_to_core_HINTC2R_FLG15_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2R_FLG15(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2R_FLG15_SHIFT)) & LLCE_Core_to_core_HINTC2R_FLG15_MASK)
/*! @} */

/*! @name HINTC3R - HOST Interrupt from Core 3 Register */
/*! @{ */

#define LLCE_Core_to_core_HINTC3R_FLG0_MASK      (0x1U)
#define LLCE_Core_to_core_HINTC3R_FLG0_SHIFT     (0U)
#define LLCE_Core_to_core_HINTC3R_FLG0_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC3R_FLG0(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG0_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG0_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG1_MASK      (0x2U)
#define LLCE_Core_to_core_HINTC3R_FLG1_SHIFT     (1U)
#define LLCE_Core_to_core_HINTC3R_FLG1_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC3R_FLG1(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG1_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG1_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG2_MASK      (0x4U)
#define LLCE_Core_to_core_HINTC3R_FLG2_SHIFT     (2U)
#define LLCE_Core_to_core_HINTC3R_FLG2_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC3R_FLG2(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG2_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG2_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG3_MASK      (0x8U)
#define LLCE_Core_to_core_HINTC3R_FLG3_SHIFT     (3U)
#define LLCE_Core_to_core_HINTC3R_FLG3_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC3R_FLG3(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG3_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG3_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG4_MASK      (0x10U)
#define LLCE_Core_to_core_HINTC3R_FLG4_SHIFT     (4U)
#define LLCE_Core_to_core_HINTC3R_FLG4_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC3R_FLG4(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG4_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG4_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG5_MASK      (0x20U)
#define LLCE_Core_to_core_HINTC3R_FLG5_SHIFT     (5U)
#define LLCE_Core_to_core_HINTC3R_FLG5_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC3R_FLG5(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG5_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG5_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG6_MASK      (0x40U)
#define LLCE_Core_to_core_HINTC3R_FLG6_SHIFT     (6U)
#define LLCE_Core_to_core_HINTC3R_FLG6_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC3R_FLG6(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG6_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG6_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG7_MASK      (0x80U)
#define LLCE_Core_to_core_HINTC3R_FLG7_SHIFT     (7U)
#define LLCE_Core_to_core_HINTC3R_FLG7_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC3R_FLG7(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG7_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG7_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG8_MASK      (0x100U)
#define LLCE_Core_to_core_HINTC3R_FLG8_SHIFT     (8U)
#define LLCE_Core_to_core_HINTC3R_FLG8_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC3R_FLG8(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG8_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG8_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG9_MASK      (0x200U)
#define LLCE_Core_to_core_HINTC3R_FLG9_SHIFT     (9U)
#define LLCE_Core_to_core_HINTC3R_FLG9_WIDTH     (1U)
#define LLCE_Core_to_core_HINTC3R_FLG9(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG9_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG9_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG10_MASK     (0x400U)
#define LLCE_Core_to_core_HINTC3R_FLG10_SHIFT    (10U)
#define LLCE_Core_to_core_HINTC3R_FLG10_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3R_FLG10(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG10_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG10_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG11_MASK     (0x800U)
#define LLCE_Core_to_core_HINTC3R_FLG11_SHIFT    (11U)
#define LLCE_Core_to_core_HINTC3R_FLG11_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3R_FLG11(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG11_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG11_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG12_MASK     (0x1000U)
#define LLCE_Core_to_core_HINTC3R_FLG12_SHIFT    (12U)
#define LLCE_Core_to_core_HINTC3R_FLG12_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3R_FLG12(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG12_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG12_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG13_MASK     (0x2000U)
#define LLCE_Core_to_core_HINTC3R_FLG13_SHIFT    (13U)
#define LLCE_Core_to_core_HINTC3R_FLG13_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3R_FLG13(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG13_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG13_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG14_MASK     (0x4000U)
#define LLCE_Core_to_core_HINTC3R_FLG14_SHIFT    (14U)
#define LLCE_Core_to_core_HINTC3R_FLG14_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3R_FLG14(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG14_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG14_MASK)

#define LLCE_Core_to_core_HINTC3R_FLG15_MASK     (0x8000U)
#define LLCE_Core_to_core_HINTC3R_FLG15_SHIFT    (15U)
#define LLCE_Core_to_core_HINTC3R_FLG15_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3R_FLG15(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3R_FLG15_SHIFT)) & LLCE_Core_to_core_HINTC3R_FLG15_MASK)
/*! @} */

/*! @name C0INTHR - Core 0 Interrupt from HOST */
/*! @{ */

#define LLCE_Core_to_core_C0INTHR_FLG0_MASK      (0x1U)
#define LLCE_Core_to_core_C0INTHR_FLG0_SHIFT     (0U)
#define LLCE_Core_to_core_C0INTHR_FLG0_WIDTH     (1U)
#define LLCE_Core_to_core_C0INTHR_FLG0(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG0_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG0_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG1_MASK      (0x2U)
#define LLCE_Core_to_core_C0INTHR_FLG1_SHIFT     (1U)
#define LLCE_Core_to_core_C0INTHR_FLG1_WIDTH     (1U)
#define LLCE_Core_to_core_C0INTHR_FLG1(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG1_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG1_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG2_MASK      (0x4U)
#define LLCE_Core_to_core_C0INTHR_FLG2_SHIFT     (2U)
#define LLCE_Core_to_core_C0INTHR_FLG2_WIDTH     (1U)
#define LLCE_Core_to_core_C0INTHR_FLG2(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG2_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG2_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG3_MASK      (0x8U)
#define LLCE_Core_to_core_C0INTHR_FLG3_SHIFT     (3U)
#define LLCE_Core_to_core_C0INTHR_FLG3_WIDTH     (1U)
#define LLCE_Core_to_core_C0INTHR_FLG3(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG3_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG3_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG4_MASK      (0x10U)
#define LLCE_Core_to_core_C0INTHR_FLG4_SHIFT     (4U)
#define LLCE_Core_to_core_C0INTHR_FLG4_WIDTH     (1U)
#define LLCE_Core_to_core_C0INTHR_FLG4(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG4_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG4_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG5_MASK      (0x20U)
#define LLCE_Core_to_core_C0INTHR_FLG5_SHIFT     (5U)
#define LLCE_Core_to_core_C0INTHR_FLG5_WIDTH     (1U)
#define LLCE_Core_to_core_C0INTHR_FLG5(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG5_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG5_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG6_MASK      (0x40U)
#define LLCE_Core_to_core_C0INTHR_FLG6_SHIFT     (6U)
#define LLCE_Core_to_core_C0INTHR_FLG6_WIDTH     (1U)
#define LLCE_Core_to_core_C0INTHR_FLG6(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG6_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG6_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG7_MASK      (0x80U)
#define LLCE_Core_to_core_C0INTHR_FLG7_SHIFT     (7U)
#define LLCE_Core_to_core_C0INTHR_FLG7_WIDTH     (1U)
#define LLCE_Core_to_core_C0INTHR_FLG7(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG7_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG7_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG8_MASK      (0x100U)
#define LLCE_Core_to_core_C0INTHR_FLG8_SHIFT     (8U)
#define LLCE_Core_to_core_C0INTHR_FLG8_WIDTH     (1U)
#define LLCE_Core_to_core_C0INTHR_FLG8(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG8_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG8_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG9_MASK      (0x200U)
#define LLCE_Core_to_core_C0INTHR_FLG9_SHIFT     (9U)
#define LLCE_Core_to_core_C0INTHR_FLG9_WIDTH     (1U)
#define LLCE_Core_to_core_C0INTHR_FLG9(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG9_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG9_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG10_MASK     (0x400U)
#define LLCE_Core_to_core_C0INTHR_FLG10_SHIFT    (10U)
#define LLCE_Core_to_core_C0INTHR_FLG10_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHR_FLG10(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG10_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG10_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG11_MASK     (0x800U)
#define LLCE_Core_to_core_C0INTHR_FLG11_SHIFT    (11U)
#define LLCE_Core_to_core_C0INTHR_FLG11_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHR_FLG11(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG11_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG11_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG12_MASK     (0x1000U)
#define LLCE_Core_to_core_C0INTHR_FLG12_SHIFT    (12U)
#define LLCE_Core_to_core_C0INTHR_FLG12_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHR_FLG12(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG12_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG12_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG13_MASK     (0x2000U)
#define LLCE_Core_to_core_C0INTHR_FLG13_SHIFT    (13U)
#define LLCE_Core_to_core_C0INTHR_FLG13_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHR_FLG13(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG13_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG13_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG14_MASK     (0x4000U)
#define LLCE_Core_to_core_C0INTHR_FLG14_SHIFT    (14U)
#define LLCE_Core_to_core_C0INTHR_FLG14_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHR_FLG14(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG14_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG14_MASK)

#define LLCE_Core_to_core_C0INTHR_FLG15_MASK     (0x8000U)
#define LLCE_Core_to_core_C0INTHR_FLG15_SHIFT    (15U)
#define LLCE_Core_to_core_C0INTHR_FLG15_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHR_FLG15(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHR_FLG15_SHIFT)) & LLCE_Core_to_core_C0INTHR_FLG15_MASK)
/*! @} */

/*! @name C1INTHR - Core 1 Interrupt From HOST Register */
/*! @{ */

#define LLCE_Core_to_core_C1INTHR_FLG0_MASK      (0x1U)
#define LLCE_Core_to_core_C1INTHR_FLG0_SHIFT     (0U)
#define LLCE_Core_to_core_C1INTHR_FLG0_WIDTH     (1U)
#define LLCE_Core_to_core_C1INTHR_FLG0(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG0_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG0_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG1_MASK      (0x2U)
#define LLCE_Core_to_core_C1INTHR_FLG1_SHIFT     (1U)
#define LLCE_Core_to_core_C1INTHR_FLG1_WIDTH     (1U)
#define LLCE_Core_to_core_C1INTHR_FLG1(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG1_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG1_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG2_MASK      (0x4U)
#define LLCE_Core_to_core_C1INTHR_FLG2_SHIFT     (2U)
#define LLCE_Core_to_core_C1INTHR_FLG2_WIDTH     (1U)
#define LLCE_Core_to_core_C1INTHR_FLG2(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG2_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG2_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG3_MASK      (0x8U)
#define LLCE_Core_to_core_C1INTHR_FLG3_SHIFT     (3U)
#define LLCE_Core_to_core_C1INTHR_FLG3_WIDTH     (1U)
#define LLCE_Core_to_core_C1INTHR_FLG3(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG3_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG3_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG4_MASK      (0x10U)
#define LLCE_Core_to_core_C1INTHR_FLG4_SHIFT     (4U)
#define LLCE_Core_to_core_C1INTHR_FLG4_WIDTH     (1U)
#define LLCE_Core_to_core_C1INTHR_FLG4(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG4_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG4_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG5_MASK      (0x20U)
#define LLCE_Core_to_core_C1INTHR_FLG5_SHIFT     (5U)
#define LLCE_Core_to_core_C1INTHR_FLG5_WIDTH     (1U)
#define LLCE_Core_to_core_C1INTHR_FLG5(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG5_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG5_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG6_MASK      (0x40U)
#define LLCE_Core_to_core_C1INTHR_FLG6_SHIFT     (6U)
#define LLCE_Core_to_core_C1INTHR_FLG6_WIDTH     (1U)
#define LLCE_Core_to_core_C1INTHR_FLG6(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG6_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG6_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG7_MASK      (0x80U)
#define LLCE_Core_to_core_C1INTHR_FLG7_SHIFT     (7U)
#define LLCE_Core_to_core_C1INTHR_FLG7_WIDTH     (1U)
#define LLCE_Core_to_core_C1INTHR_FLG7(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG7_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG7_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG8_MASK      (0x100U)
#define LLCE_Core_to_core_C1INTHR_FLG8_SHIFT     (8U)
#define LLCE_Core_to_core_C1INTHR_FLG8_WIDTH     (1U)
#define LLCE_Core_to_core_C1INTHR_FLG8(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG8_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG8_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG9_MASK      (0x200U)
#define LLCE_Core_to_core_C1INTHR_FLG9_SHIFT     (9U)
#define LLCE_Core_to_core_C1INTHR_FLG9_WIDTH     (1U)
#define LLCE_Core_to_core_C1INTHR_FLG9(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG9_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG9_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG10_MASK     (0x400U)
#define LLCE_Core_to_core_C1INTHR_FLG10_SHIFT    (10U)
#define LLCE_Core_to_core_C1INTHR_FLG10_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHR_FLG10(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG10_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG10_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG11_MASK     (0x800U)
#define LLCE_Core_to_core_C1INTHR_FLG11_SHIFT    (11U)
#define LLCE_Core_to_core_C1INTHR_FLG11_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHR_FLG11(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG11_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG11_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG12_MASK     (0x1000U)
#define LLCE_Core_to_core_C1INTHR_FLG12_SHIFT    (12U)
#define LLCE_Core_to_core_C1INTHR_FLG12_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHR_FLG12(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG12_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG12_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG13_MASK     (0x2000U)
#define LLCE_Core_to_core_C1INTHR_FLG13_SHIFT    (13U)
#define LLCE_Core_to_core_C1INTHR_FLG13_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHR_FLG13(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG13_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG13_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG14_MASK     (0x4000U)
#define LLCE_Core_to_core_C1INTHR_FLG14_SHIFT    (14U)
#define LLCE_Core_to_core_C1INTHR_FLG14_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHR_FLG14(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG14_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG14_MASK)

#define LLCE_Core_to_core_C1INTHR_FLG15_MASK     (0x8000U)
#define LLCE_Core_to_core_C1INTHR_FLG15_SHIFT    (15U)
#define LLCE_Core_to_core_C1INTHR_FLG15_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHR_FLG15(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHR_FLG15_SHIFT)) & LLCE_Core_to_core_C1INTHR_FLG15_MASK)
/*! @} */

/*! @name C2INTHR - Core 2 Interrupt from HOST Register */
/*! @{ */

#define LLCE_Core_to_core_C2INTHR_FLG0_MASK      (0x1U)
#define LLCE_Core_to_core_C2INTHR_FLG0_SHIFT     (0U)
#define LLCE_Core_to_core_C2INTHR_FLG0_WIDTH     (1U)
#define LLCE_Core_to_core_C2INTHR_FLG0(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG0_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG0_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG1_MASK      (0x2U)
#define LLCE_Core_to_core_C2INTHR_FLG1_SHIFT     (1U)
#define LLCE_Core_to_core_C2INTHR_FLG1_WIDTH     (1U)
#define LLCE_Core_to_core_C2INTHR_FLG1(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG1_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG1_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG2_MASK      (0x4U)
#define LLCE_Core_to_core_C2INTHR_FLG2_SHIFT     (2U)
#define LLCE_Core_to_core_C2INTHR_FLG2_WIDTH     (1U)
#define LLCE_Core_to_core_C2INTHR_FLG2(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG2_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG2_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG3_MASK      (0x8U)
#define LLCE_Core_to_core_C2INTHR_FLG3_SHIFT     (3U)
#define LLCE_Core_to_core_C2INTHR_FLG3_WIDTH     (1U)
#define LLCE_Core_to_core_C2INTHR_FLG3(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG3_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG3_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG4_MASK      (0x10U)
#define LLCE_Core_to_core_C2INTHR_FLG4_SHIFT     (4U)
#define LLCE_Core_to_core_C2INTHR_FLG4_WIDTH     (1U)
#define LLCE_Core_to_core_C2INTHR_FLG4(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG4_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG4_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG5_MASK      (0x20U)
#define LLCE_Core_to_core_C2INTHR_FLG5_SHIFT     (5U)
#define LLCE_Core_to_core_C2INTHR_FLG5_WIDTH     (1U)
#define LLCE_Core_to_core_C2INTHR_FLG5(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG5_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG5_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG6_MASK      (0x40U)
#define LLCE_Core_to_core_C2INTHR_FLG6_SHIFT     (6U)
#define LLCE_Core_to_core_C2INTHR_FLG6_WIDTH     (1U)
#define LLCE_Core_to_core_C2INTHR_FLG6(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG6_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG6_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG7_MASK      (0x80U)
#define LLCE_Core_to_core_C2INTHR_FLG7_SHIFT     (7U)
#define LLCE_Core_to_core_C2INTHR_FLG7_WIDTH     (1U)
#define LLCE_Core_to_core_C2INTHR_FLG7(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG7_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG7_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG8_MASK      (0x100U)
#define LLCE_Core_to_core_C2INTHR_FLG8_SHIFT     (8U)
#define LLCE_Core_to_core_C2INTHR_FLG8_WIDTH     (1U)
#define LLCE_Core_to_core_C2INTHR_FLG8(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG8_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG8_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG9_MASK      (0x200U)
#define LLCE_Core_to_core_C2INTHR_FLG9_SHIFT     (9U)
#define LLCE_Core_to_core_C2INTHR_FLG9_WIDTH     (1U)
#define LLCE_Core_to_core_C2INTHR_FLG9(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG9_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG9_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG10_MASK     (0x400U)
#define LLCE_Core_to_core_C2INTHR_FLG10_SHIFT    (10U)
#define LLCE_Core_to_core_C2INTHR_FLG10_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHR_FLG10(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG10_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG10_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG11_MASK     (0x800U)
#define LLCE_Core_to_core_C2INTHR_FLG11_SHIFT    (11U)
#define LLCE_Core_to_core_C2INTHR_FLG11_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHR_FLG11(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG11_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG11_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG12_MASK     (0x1000U)
#define LLCE_Core_to_core_C2INTHR_FLG12_SHIFT    (12U)
#define LLCE_Core_to_core_C2INTHR_FLG12_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHR_FLG12(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG12_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG12_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG13_MASK     (0x2000U)
#define LLCE_Core_to_core_C2INTHR_FLG13_SHIFT    (13U)
#define LLCE_Core_to_core_C2INTHR_FLG13_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHR_FLG13(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG13_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG13_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG14_MASK     (0x4000U)
#define LLCE_Core_to_core_C2INTHR_FLG14_SHIFT    (14U)
#define LLCE_Core_to_core_C2INTHR_FLG14_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHR_FLG14(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG14_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG14_MASK)

#define LLCE_Core_to_core_C2INTHR_FLG15_MASK     (0x8000U)
#define LLCE_Core_to_core_C2INTHR_FLG15_SHIFT    (15U)
#define LLCE_Core_to_core_C2INTHR_FLG15_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHR_FLG15(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHR_FLG15_SHIFT)) & LLCE_Core_to_core_C2INTHR_FLG15_MASK)
/*! @} */

/*! @name C3INTHR - Core 3 Interrupt from HOST Register */
/*! @{ */

#define LLCE_Core_to_core_C3INTHR_FLG0_MASK      (0x1U)
#define LLCE_Core_to_core_C3INTHR_FLG0_SHIFT     (0U)
#define LLCE_Core_to_core_C3INTHR_FLG0_WIDTH     (1U)
#define LLCE_Core_to_core_C3INTHR_FLG0(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG0_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG0_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG1_MASK      (0x2U)
#define LLCE_Core_to_core_C3INTHR_FLG1_SHIFT     (1U)
#define LLCE_Core_to_core_C3INTHR_FLG1_WIDTH     (1U)
#define LLCE_Core_to_core_C3INTHR_FLG1(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG1_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG1_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG2_MASK      (0x4U)
#define LLCE_Core_to_core_C3INTHR_FLG2_SHIFT     (2U)
#define LLCE_Core_to_core_C3INTHR_FLG2_WIDTH     (1U)
#define LLCE_Core_to_core_C3INTHR_FLG2(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG2_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG2_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG3_MASK      (0x8U)
#define LLCE_Core_to_core_C3INTHR_FLG3_SHIFT     (3U)
#define LLCE_Core_to_core_C3INTHR_FLG3_WIDTH     (1U)
#define LLCE_Core_to_core_C3INTHR_FLG3(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG3_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG3_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG4_MASK      (0x10U)
#define LLCE_Core_to_core_C3INTHR_FLG4_SHIFT     (4U)
#define LLCE_Core_to_core_C3INTHR_FLG4_WIDTH     (1U)
#define LLCE_Core_to_core_C3INTHR_FLG4(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG4_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG4_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG5_MASK      (0x20U)
#define LLCE_Core_to_core_C3INTHR_FLG5_SHIFT     (5U)
#define LLCE_Core_to_core_C3INTHR_FLG5_WIDTH     (1U)
#define LLCE_Core_to_core_C3INTHR_FLG5(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG5_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG5_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG6_MASK      (0x40U)
#define LLCE_Core_to_core_C3INTHR_FLG6_SHIFT     (6U)
#define LLCE_Core_to_core_C3INTHR_FLG6_WIDTH     (1U)
#define LLCE_Core_to_core_C3INTHR_FLG6(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG6_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG6_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG7_MASK      (0x80U)
#define LLCE_Core_to_core_C3INTHR_FLG7_SHIFT     (7U)
#define LLCE_Core_to_core_C3INTHR_FLG7_WIDTH     (1U)
#define LLCE_Core_to_core_C3INTHR_FLG7(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG7_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG7_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG8_MASK      (0x100U)
#define LLCE_Core_to_core_C3INTHR_FLG8_SHIFT     (8U)
#define LLCE_Core_to_core_C3INTHR_FLG8_WIDTH     (1U)
#define LLCE_Core_to_core_C3INTHR_FLG8(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG8_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG8_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG9_MASK      (0x200U)
#define LLCE_Core_to_core_C3INTHR_FLG9_SHIFT     (9U)
#define LLCE_Core_to_core_C3INTHR_FLG9_WIDTH     (1U)
#define LLCE_Core_to_core_C3INTHR_FLG9(x)        (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG9_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG9_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG10_MASK     (0x400U)
#define LLCE_Core_to_core_C3INTHR_FLG10_SHIFT    (10U)
#define LLCE_Core_to_core_C3INTHR_FLG10_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHR_FLG10(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG10_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG10_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG11_MASK     (0x800U)
#define LLCE_Core_to_core_C3INTHR_FLG11_SHIFT    (11U)
#define LLCE_Core_to_core_C3INTHR_FLG11_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHR_FLG11(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG11_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG11_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG12_MASK     (0x1000U)
#define LLCE_Core_to_core_C3INTHR_FLG12_SHIFT    (12U)
#define LLCE_Core_to_core_C3INTHR_FLG12_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHR_FLG12(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG12_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG12_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG13_MASK     (0x2000U)
#define LLCE_Core_to_core_C3INTHR_FLG13_SHIFT    (13U)
#define LLCE_Core_to_core_C3INTHR_FLG13_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHR_FLG13(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG13_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG13_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG14_MASK     (0x4000U)
#define LLCE_Core_to_core_C3INTHR_FLG14_SHIFT    (14U)
#define LLCE_Core_to_core_C3INTHR_FLG14_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHR_FLG14(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG14_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG14_MASK)

#define LLCE_Core_to_core_C3INTHR_FLG15_MASK     (0x8000U)
#define LLCE_Core_to_core_C3INTHR_FLG15_SHIFT    (15U)
#define LLCE_Core_to_core_C3INTHR_FLG15_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHR_FLG15(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHR_FLG15_SHIFT)) & LLCE_Core_to_core_C3INTHR_FLG15_MASK)
/*! @} */

/*! @name HINTC0ER - HOST Interrupt from Core 0 Enable Register */
/*! @{ */

#define LLCE_Core_to_core_HINTC0ER_IEN0_MASK     (0x1U)
#define LLCE_Core_to_core_HINTC0ER_IEN0_SHIFT    (0U)
#define LLCE_Core_to_core_HINTC0ER_IEN0_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN0(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN0_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN0_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN1_MASK     (0x2U)
#define LLCE_Core_to_core_HINTC0ER_IEN1_SHIFT    (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN1_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN1(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN1_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN1_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN2_MASK     (0x4U)
#define LLCE_Core_to_core_HINTC0ER_IEN2_SHIFT    (2U)
#define LLCE_Core_to_core_HINTC0ER_IEN2_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN2(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN2_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN2_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN3_MASK     (0x8U)
#define LLCE_Core_to_core_HINTC0ER_IEN3_SHIFT    (3U)
#define LLCE_Core_to_core_HINTC0ER_IEN3_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN3(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN3_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN3_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN4_MASK     (0x10U)
#define LLCE_Core_to_core_HINTC0ER_IEN4_SHIFT    (4U)
#define LLCE_Core_to_core_HINTC0ER_IEN4_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN4(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN4_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN4_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN5_MASK     (0x20U)
#define LLCE_Core_to_core_HINTC0ER_IEN5_SHIFT    (5U)
#define LLCE_Core_to_core_HINTC0ER_IEN5_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN5(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN5_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN5_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN6_MASK     (0x40U)
#define LLCE_Core_to_core_HINTC0ER_IEN6_SHIFT    (6U)
#define LLCE_Core_to_core_HINTC0ER_IEN6_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN6(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN6_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN6_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN7_MASK     (0x80U)
#define LLCE_Core_to_core_HINTC0ER_IEN7_SHIFT    (7U)
#define LLCE_Core_to_core_HINTC0ER_IEN7_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN7(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN7_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN7_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN8_MASK     (0x100U)
#define LLCE_Core_to_core_HINTC0ER_IEN8_SHIFT    (8U)
#define LLCE_Core_to_core_HINTC0ER_IEN8_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN8(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN8_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN8_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN9_MASK     (0x200U)
#define LLCE_Core_to_core_HINTC0ER_IEN9_SHIFT    (9U)
#define LLCE_Core_to_core_HINTC0ER_IEN9_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN9(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN9_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN9_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN10_MASK    (0x400U)
#define LLCE_Core_to_core_HINTC0ER_IEN10_SHIFT   (10U)
#define LLCE_Core_to_core_HINTC0ER_IEN10_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN10(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN10_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN10_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN11_MASK    (0x800U)
#define LLCE_Core_to_core_HINTC0ER_IEN11_SHIFT   (11U)
#define LLCE_Core_to_core_HINTC0ER_IEN11_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN11(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN11_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN11_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN12_MASK    (0x1000U)
#define LLCE_Core_to_core_HINTC0ER_IEN12_SHIFT   (12U)
#define LLCE_Core_to_core_HINTC0ER_IEN12_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN12(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN12_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN12_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN13_MASK    (0x2000U)
#define LLCE_Core_to_core_HINTC0ER_IEN13_SHIFT   (13U)
#define LLCE_Core_to_core_HINTC0ER_IEN13_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN13(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN13_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN13_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN14_MASK    (0x4000U)
#define LLCE_Core_to_core_HINTC0ER_IEN14_SHIFT   (14U)
#define LLCE_Core_to_core_HINTC0ER_IEN14_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN14(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN14_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN14_MASK)

#define LLCE_Core_to_core_HINTC0ER_IEN15_MASK    (0x8000U)
#define LLCE_Core_to_core_HINTC0ER_IEN15_SHIFT   (15U)
#define LLCE_Core_to_core_HINTC0ER_IEN15_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC0ER_IEN15(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC0ER_IEN15_SHIFT)) & LLCE_Core_to_core_HINTC0ER_IEN15_MASK)
/*! @} */

/*! @name HINTC1ER - HOST Interrupt from Core 1 Enable Register */
/*! @{ */

#define LLCE_Core_to_core_HINTC1ER_IEN0_MASK     (0x1U)
#define LLCE_Core_to_core_HINTC1ER_IEN0_SHIFT    (0U)
#define LLCE_Core_to_core_HINTC1ER_IEN0_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN0(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN0_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN0_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN1_MASK     (0x2U)
#define LLCE_Core_to_core_HINTC1ER_IEN1_SHIFT    (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN1_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN1(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN1_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN1_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN2_MASK     (0x4U)
#define LLCE_Core_to_core_HINTC1ER_IEN2_SHIFT    (2U)
#define LLCE_Core_to_core_HINTC1ER_IEN2_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN2(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN2_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN2_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN3_MASK     (0x8U)
#define LLCE_Core_to_core_HINTC1ER_IEN3_SHIFT    (3U)
#define LLCE_Core_to_core_HINTC1ER_IEN3_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN3(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN3_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN3_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN4_MASK     (0x10U)
#define LLCE_Core_to_core_HINTC1ER_IEN4_SHIFT    (4U)
#define LLCE_Core_to_core_HINTC1ER_IEN4_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN4(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN4_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN4_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN5_MASK     (0x20U)
#define LLCE_Core_to_core_HINTC1ER_IEN5_SHIFT    (5U)
#define LLCE_Core_to_core_HINTC1ER_IEN5_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN5(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN5_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN5_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN6_MASK     (0x40U)
#define LLCE_Core_to_core_HINTC1ER_IEN6_SHIFT    (6U)
#define LLCE_Core_to_core_HINTC1ER_IEN6_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN6(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN6_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN6_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN7_MASK     (0x80U)
#define LLCE_Core_to_core_HINTC1ER_IEN7_SHIFT    (7U)
#define LLCE_Core_to_core_HINTC1ER_IEN7_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN7(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN7_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN7_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN8_MASK     (0x100U)
#define LLCE_Core_to_core_HINTC1ER_IEN8_SHIFT    (8U)
#define LLCE_Core_to_core_HINTC1ER_IEN8_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN8(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN8_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN8_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN9_MASK     (0x200U)
#define LLCE_Core_to_core_HINTC1ER_IEN9_SHIFT    (9U)
#define LLCE_Core_to_core_HINTC1ER_IEN9_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN9(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN9_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN9_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN10_MASK    (0x400U)
#define LLCE_Core_to_core_HINTC1ER_IEN10_SHIFT   (10U)
#define LLCE_Core_to_core_HINTC1ER_IEN10_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN10(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN10_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN10_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN11_MASK    (0x800U)
#define LLCE_Core_to_core_HINTC1ER_IEN11_SHIFT   (11U)
#define LLCE_Core_to_core_HINTC1ER_IEN11_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN11(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN11_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN11_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN12_MASK    (0x1000U)
#define LLCE_Core_to_core_HINTC1ER_IEN12_SHIFT   (12U)
#define LLCE_Core_to_core_HINTC1ER_IEN12_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN12(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN12_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN12_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN13_MASK    (0x2000U)
#define LLCE_Core_to_core_HINTC1ER_IEN13_SHIFT   (13U)
#define LLCE_Core_to_core_HINTC1ER_IEN13_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN13(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN13_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN13_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN14_MASK    (0x4000U)
#define LLCE_Core_to_core_HINTC1ER_IEN14_SHIFT   (14U)
#define LLCE_Core_to_core_HINTC1ER_IEN14_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN14(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN14_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN14_MASK)

#define LLCE_Core_to_core_HINTC1ER_IEN15_MASK    (0x8000U)
#define LLCE_Core_to_core_HINTC1ER_IEN15_SHIFT   (15U)
#define LLCE_Core_to_core_HINTC1ER_IEN15_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC1ER_IEN15(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC1ER_IEN15_SHIFT)) & LLCE_Core_to_core_HINTC1ER_IEN15_MASK)
/*! @} */

/*! @name HINTC2ER - HOST Interrupt from Core 2 Enable Register */
/*! @{ */

#define LLCE_Core_to_core_HINTC2ER_IEN0_MASK     (0x1U)
#define LLCE_Core_to_core_HINTC2ER_IEN0_SHIFT    (0U)
#define LLCE_Core_to_core_HINTC2ER_IEN0_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN0(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN0_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN0_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN1_MASK     (0x2U)
#define LLCE_Core_to_core_HINTC2ER_IEN1_SHIFT    (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN1_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN1(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN1_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN1_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN2_MASK     (0x4U)
#define LLCE_Core_to_core_HINTC2ER_IEN2_SHIFT    (2U)
#define LLCE_Core_to_core_HINTC2ER_IEN2_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN2(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN2_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN2_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN3_MASK     (0x8U)
#define LLCE_Core_to_core_HINTC2ER_IEN3_SHIFT    (3U)
#define LLCE_Core_to_core_HINTC2ER_IEN3_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN3(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN3_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN3_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN4_MASK     (0x10U)
#define LLCE_Core_to_core_HINTC2ER_IEN4_SHIFT    (4U)
#define LLCE_Core_to_core_HINTC2ER_IEN4_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN4(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN4_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN4_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN5_MASK     (0x20U)
#define LLCE_Core_to_core_HINTC2ER_IEN5_SHIFT    (5U)
#define LLCE_Core_to_core_HINTC2ER_IEN5_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN5(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN5_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN5_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN6_MASK     (0x40U)
#define LLCE_Core_to_core_HINTC2ER_IEN6_SHIFT    (6U)
#define LLCE_Core_to_core_HINTC2ER_IEN6_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN6(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN6_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN6_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN7_MASK     (0x80U)
#define LLCE_Core_to_core_HINTC2ER_IEN7_SHIFT    (7U)
#define LLCE_Core_to_core_HINTC2ER_IEN7_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN7(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN7_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN7_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN8_MASK     (0x100U)
#define LLCE_Core_to_core_HINTC2ER_IEN8_SHIFT    (8U)
#define LLCE_Core_to_core_HINTC2ER_IEN8_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN8(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN8_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN8_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN9_MASK     (0x200U)
#define LLCE_Core_to_core_HINTC2ER_IEN9_SHIFT    (9U)
#define LLCE_Core_to_core_HINTC2ER_IEN9_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN9(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN9_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN9_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN10_MASK    (0x400U)
#define LLCE_Core_to_core_HINTC2ER_IEN10_SHIFT   (10U)
#define LLCE_Core_to_core_HINTC2ER_IEN10_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN10(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN10_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN10_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN11_MASK    (0x800U)
#define LLCE_Core_to_core_HINTC2ER_IEN11_SHIFT   (11U)
#define LLCE_Core_to_core_HINTC2ER_IEN11_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN11(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN11_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN11_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN12_MASK    (0x1000U)
#define LLCE_Core_to_core_HINTC2ER_IEN12_SHIFT   (12U)
#define LLCE_Core_to_core_HINTC2ER_IEN12_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN12(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN12_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN12_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN13_MASK    (0x2000U)
#define LLCE_Core_to_core_HINTC2ER_IEN13_SHIFT   (13U)
#define LLCE_Core_to_core_HINTC2ER_IEN13_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN13(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN13_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN13_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN14_MASK    (0x4000U)
#define LLCE_Core_to_core_HINTC2ER_IEN14_SHIFT   (14U)
#define LLCE_Core_to_core_HINTC2ER_IEN14_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN14(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN14_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN14_MASK)

#define LLCE_Core_to_core_HINTC2ER_IEN15_MASK    (0x8000U)
#define LLCE_Core_to_core_HINTC2ER_IEN15_SHIFT   (15U)
#define LLCE_Core_to_core_HINTC2ER_IEN15_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC2ER_IEN15(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC2ER_IEN15_SHIFT)) & LLCE_Core_to_core_HINTC2ER_IEN15_MASK)
/*! @} */

/*! @name HINTC3ER - HOST Interrupt from Core 3 Enable Register */
/*! @{ */

#define LLCE_Core_to_core_HINTC3ER_IEN0_MASK     (0x1U)
#define LLCE_Core_to_core_HINTC3ER_IEN0_SHIFT    (0U)
#define LLCE_Core_to_core_HINTC3ER_IEN0_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN0(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN0_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN0_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN1_MASK     (0x2U)
#define LLCE_Core_to_core_HINTC3ER_IEN1_SHIFT    (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN1_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN1(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN1_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN1_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN2_MASK     (0x4U)
#define LLCE_Core_to_core_HINTC3ER_IEN2_SHIFT    (2U)
#define LLCE_Core_to_core_HINTC3ER_IEN2_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN2(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN2_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN2_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN3_MASK     (0x8U)
#define LLCE_Core_to_core_HINTC3ER_IEN3_SHIFT    (3U)
#define LLCE_Core_to_core_HINTC3ER_IEN3_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN3(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN3_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN3_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN4_MASK     (0x10U)
#define LLCE_Core_to_core_HINTC3ER_IEN4_SHIFT    (4U)
#define LLCE_Core_to_core_HINTC3ER_IEN4_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN4(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN4_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN4_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN5_MASK     (0x20U)
#define LLCE_Core_to_core_HINTC3ER_IEN5_SHIFT    (5U)
#define LLCE_Core_to_core_HINTC3ER_IEN5_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN5(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN5_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN5_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN6_MASK     (0x40U)
#define LLCE_Core_to_core_HINTC3ER_IEN6_SHIFT    (6U)
#define LLCE_Core_to_core_HINTC3ER_IEN6_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN6(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN6_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN6_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN7_MASK     (0x80U)
#define LLCE_Core_to_core_HINTC3ER_IEN7_SHIFT    (7U)
#define LLCE_Core_to_core_HINTC3ER_IEN7_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN7(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN7_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN7_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN8_MASK     (0x100U)
#define LLCE_Core_to_core_HINTC3ER_IEN8_SHIFT    (8U)
#define LLCE_Core_to_core_HINTC3ER_IEN8_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN8(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN8_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN8_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN9_MASK     (0x200U)
#define LLCE_Core_to_core_HINTC3ER_IEN9_SHIFT    (9U)
#define LLCE_Core_to_core_HINTC3ER_IEN9_WIDTH    (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN9(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN9_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN9_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN10_MASK    (0x400U)
#define LLCE_Core_to_core_HINTC3ER_IEN10_SHIFT   (10U)
#define LLCE_Core_to_core_HINTC3ER_IEN10_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN10(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN10_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN10_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN11_MASK    (0x800U)
#define LLCE_Core_to_core_HINTC3ER_IEN11_SHIFT   (11U)
#define LLCE_Core_to_core_HINTC3ER_IEN11_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN11(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN11_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN11_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN12_MASK    (0x1000U)
#define LLCE_Core_to_core_HINTC3ER_IEN12_SHIFT   (12U)
#define LLCE_Core_to_core_HINTC3ER_IEN12_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN12(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN12_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN12_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN13_MASK    (0x2000U)
#define LLCE_Core_to_core_HINTC3ER_IEN13_SHIFT   (13U)
#define LLCE_Core_to_core_HINTC3ER_IEN13_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN13(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN13_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN13_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN14_MASK    (0x4000U)
#define LLCE_Core_to_core_HINTC3ER_IEN14_SHIFT   (14U)
#define LLCE_Core_to_core_HINTC3ER_IEN14_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN14(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN14_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN14_MASK)

#define LLCE_Core_to_core_HINTC3ER_IEN15_MASK    (0x8000U)
#define LLCE_Core_to_core_HINTC3ER_IEN15_SHIFT   (15U)
#define LLCE_Core_to_core_HINTC3ER_IEN15_WIDTH   (1U)
#define LLCE_Core_to_core_HINTC3ER_IEN15(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_HINTC3ER_IEN15_SHIFT)) & LLCE_Core_to_core_HINTC3ER_IEN15_MASK)
/*! @} */

/*! @name C0INTHER - Core 0 Interrupt from Host Enable Register */
/*! @{ */

#define LLCE_Core_to_core_C0INTHER_IEN0_MASK     (0x1U)
#define LLCE_Core_to_core_C0INTHER_IEN0_SHIFT    (0U)
#define LLCE_Core_to_core_C0INTHER_IEN0_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHER_IEN0(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN0_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN0_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN1_MASK     (0x2U)
#define LLCE_Core_to_core_C0INTHER_IEN1_SHIFT    (1U)
#define LLCE_Core_to_core_C0INTHER_IEN1_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHER_IEN1(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN1_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN1_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN2_MASK     (0x4U)
#define LLCE_Core_to_core_C0INTHER_IEN2_SHIFT    (2U)
#define LLCE_Core_to_core_C0INTHER_IEN2_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHER_IEN2(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN2_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN2_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN3_MASK     (0x8U)
#define LLCE_Core_to_core_C0INTHER_IEN3_SHIFT    (3U)
#define LLCE_Core_to_core_C0INTHER_IEN3_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHER_IEN3(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN3_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN3_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN4_MASK     (0x10U)
#define LLCE_Core_to_core_C0INTHER_IEN4_SHIFT    (4U)
#define LLCE_Core_to_core_C0INTHER_IEN4_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHER_IEN4(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN4_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN4_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN5_MASK     (0x20U)
#define LLCE_Core_to_core_C0INTHER_IEN5_SHIFT    (5U)
#define LLCE_Core_to_core_C0INTHER_IEN5_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHER_IEN5(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN5_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN5_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN6_MASK     (0x40U)
#define LLCE_Core_to_core_C0INTHER_IEN6_SHIFT    (6U)
#define LLCE_Core_to_core_C0INTHER_IEN6_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHER_IEN6(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN6_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN6_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN7_MASK     (0x80U)
#define LLCE_Core_to_core_C0INTHER_IEN7_SHIFT    (7U)
#define LLCE_Core_to_core_C0INTHER_IEN7_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHER_IEN7(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN7_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN7_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN8_MASK     (0x100U)
#define LLCE_Core_to_core_C0INTHER_IEN8_SHIFT    (8U)
#define LLCE_Core_to_core_C0INTHER_IEN8_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHER_IEN8(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN8_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN8_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN9_MASK     (0x200U)
#define LLCE_Core_to_core_C0INTHER_IEN9_SHIFT    (9U)
#define LLCE_Core_to_core_C0INTHER_IEN9_WIDTH    (1U)
#define LLCE_Core_to_core_C0INTHER_IEN9(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN9_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN9_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN10_MASK    (0x400U)
#define LLCE_Core_to_core_C0INTHER_IEN10_SHIFT   (10U)
#define LLCE_Core_to_core_C0INTHER_IEN10_WIDTH   (1U)
#define LLCE_Core_to_core_C0INTHER_IEN10(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN10_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN10_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN11_MASK    (0x800U)
#define LLCE_Core_to_core_C0INTHER_IEN11_SHIFT   (11U)
#define LLCE_Core_to_core_C0INTHER_IEN11_WIDTH   (1U)
#define LLCE_Core_to_core_C0INTHER_IEN11(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN11_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN11_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN12_MASK    (0x1000U)
#define LLCE_Core_to_core_C0INTHER_IEN12_SHIFT   (12U)
#define LLCE_Core_to_core_C0INTHER_IEN12_WIDTH   (1U)
#define LLCE_Core_to_core_C0INTHER_IEN12(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN12_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN12_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN13_MASK    (0x2000U)
#define LLCE_Core_to_core_C0INTHER_IEN13_SHIFT   (13U)
#define LLCE_Core_to_core_C0INTHER_IEN13_WIDTH   (1U)
#define LLCE_Core_to_core_C0INTHER_IEN13(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN13_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN13_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN14_MASK    (0x4000U)
#define LLCE_Core_to_core_C0INTHER_IEN14_SHIFT   (14U)
#define LLCE_Core_to_core_C0INTHER_IEN14_WIDTH   (1U)
#define LLCE_Core_to_core_C0INTHER_IEN14(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN14_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN14_MASK)

#define LLCE_Core_to_core_C0INTHER_IEN15_MASK    (0x8000U)
#define LLCE_Core_to_core_C0INTHER_IEN15_SHIFT   (15U)
#define LLCE_Core_to_core_C0INTHER_IEN15_WIDTH   (1U)
#define LLCE_Core_to_core_C0INTHER_IEN15(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C0INTHER_IEN15_SHIFT)) & LLCE_Core_to_core_C0INTHER_IEN15_MASK)
/*! @} */

/*! @name C1INTHER - Core 1 Interrupt from HOST Enable Register */
/*! @{ */

#define LLCE_Core_to_core_C1INTHER_IEN0_MASK     (0x1U)
#define LLCE_Core_to_core_C1INTHER_IEN0_SHIFT    (0U)
#define LLCE_Core_to_core_C1INTHER_IEN0_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHER_IEN0(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN0_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN0_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN1_MASK     (0x2U)
#define LLCE_Core_to_core_C1INTHER_IEN1_SHIFT    (1U)
#define LLCE_Core_to_core_C1INTHER_IEN1_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHER_IEN1(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN1_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN1_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN2_MASK     (0x4U)
#define LLCE_Core_to_core_C1INTHER_IEN2_SHIFT    (2U)
#define LLCE_Core_to_core_C1INTHER_IEN2_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHER_IEN2(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN2_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN2_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN3_MASK     (0x8U)
#define LLCE_Core_to_core_C1INTHER_IEN3_SHIFT    (3U)
#define LLCE_Core_to_core_C1INTHER_IEN3_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHER_IEN3(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN3_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN3_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN4_MASK     (0x10U)
#define LLCE_Core_to_core_C1INTHER_IEN4_SHIFT    (4U)
#define LLCE_Core_to_core_C1INTHER_IEN4_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHER_IEN4(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN4_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN4_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN5_MASK     (0x20U)
#define LLCE_Core_to_core_C1INTHER_IEN5_SHIFT    (5U)
#define LLCE_Core_to_core_C1INTHER_IEN5_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHER_IEN5(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN5_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN5_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN6_MASK     (0x40U)
#define LLCE_Core_to_core_C1INTHER_IEN6_SHIFT    (6U)
#define LLCE_Core_to_core_C1INTHER_IEN6_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHER_IEN6(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN6_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN6_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN7_MASK     (0x80U)
#define LLCE_Core_to_core_C1INTHER_IEN7_SHIFT    (7U)
#define LLCE_Core_to_core_C1INTHER_IEN7_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHER_IEN7(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN7_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN7_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN8_MASK     (0x100U)
#define LLCE_Core_to_core_C1INTHER_IEN8_SHIFT    (8U)
#define LLCE_Core_to_core_C1INTHER_IEN8_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHER_IEN8(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN8_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN8_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN9_MASK     (0x200U)
#define LLCE_Core_to_core_C1INTHER_IEN9_SHIFT    (9U)
#define LLCE_Core_to_core_C1INTHER_IEN9_WIDTH    (1U)
#define LLCE_Core_to_core_C1INTHER_IEN9(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN9_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN9_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN10_MASK    (0x400U)
#define LLCE_Core_to_core_C1INTHER_IEN10_SHIFT   (10U)
#define LLCE_Core_to_core_C1INTHER_IEN10_WIDTH   (1U)
#define LLCE_Core_to_core_C1INTHER_IEN10(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN10_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN10_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN11_MASK    (0x800U)
#define LLCE_Core_to_core_C1INTHER_IEN11_SHIFT   (11U)
#define LLCE_Core_to_core_C1INTHER_IEN11_WIDTH   (1U)
#define LLCE_Core_to_core_C1INTHER_IEN11(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN11_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN11_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN12_MASK    (0x1000U)
#define LLCE_Core_to_core_C1INTHER_IEN12_SHIFT   (12U)
#define LLCE_Core_to_core_C1INTHER_IEN12_WIDTH   (1U)
#define LLCE_Core_to_core_C1INTHER_IEN12(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN12_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN12_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN13_MASK    (0x2000U)
#define LLCE_Core_to_core_C1INTHER_IEN13_SHIFT   (13U)
#define LLCE_Core_to_core_C1INTHER_IEN13_WIDTH   (1U)
#define LLCE_Core_to_core_C1INTHER_IEN13(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN13_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN13_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN14_MASK    (0x4000U)
#define LLCE_Core_to_core_C1INTHER_IEN14_SHIFT   (14U)
#define LLCE_Core_to_core_C1INTHER_IEN14_WIDTH   (1U)
#define LLCE_Core_to_core_C1INTHER_IEN14(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN14_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN14_MASK)

#define LLCE_Core_to_core_C1INTHER_IEN15_MASK    (0x8000U)
#define LLCE_Core_to_core_C1INTHER_IEN15_SHIFT   (15U)
#define LLCE_Core_to_core_C1INTHER_IEN15_WIDTH   (1U)
#define LLCE_Core_to_core_C1INTHER_IEN15(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C1INTHER_IEN15_SHIFT)) & LLCE_Core_to_core_C1INTHER_IEN15_MASK)
/*! @} */

/*! @name C2INTHER - Core 2 Interrupt from HOST Enable Register */
/*! @{ */

#define LLCE_Core_to_core_C2INTHER_IEN0_MASK     (0x1U)
#define LLCE_Core_to_core_C2INTHER_IEN0_SHIFT    (0U)
#define LLCE_Core_to_core_C2INTHER_IEN0_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHER_IEN0(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN0_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN0_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN1_MASK     (0x2U)
#define LLCE_Core_to_core_C2INTHER_IEN1_SHIFT    (1U)
#define LLCE_Core_to_core_C2INTHER_IEN1_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHER_IEN1(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN1_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN1_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN2_MASK     (0x4U)
#define LLCE_Core_to_core_C2INTHER_IEN2_SHIFT    (2U)
#define LLCE_Core_to_core_C2INTHER_IEN2_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHER_IEN2(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN2_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN2_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN3_MASK     (0x8U)
#define LLCE_Core_to_core_C2INTHER_IEN3_SHIFT    (3U)
#define LLCE_Core_to_core_C2INTHER_IEN3_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHER_IEN3(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN3_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN3_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN4_MASK     (0x10U)
#define LLCE_Core_to_core_C2INTHER_IEN4_SHIFT    (4U)
#define LLCE_Core_to_core_C2INTHER_IEN4_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHER_IEN4(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN4_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN4_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN5_MASK     (0x20U)
#define LLCE_Core_to_core_C2INTHER_IEN5_SHIFT    (5U)
#define LLCE_Core_to_core_C2INTHER_IEN5_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHER_IEN5(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN5_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN5_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN6_MASK     (0x40U)
#define LLCE_Core_to_core_C2INTHER_IEN6_SHIFT    (6U)
#define LLCE_Core_to_core_C2INTHER_IEN6_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHER_IEN6(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN6_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN6_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN7_MASK     (0x80U)
#define LLCE_Core_to_core_C2INTHER_IEN7_SHIFT    (7U)
#define LLCE_Core_to_core_C2INTHER_IEN7_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHER_IEN7(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN7_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN7_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN8_MASK     (0x100U)
#define LLCE_Core_to_core_C2INTHER_IEN8_SHIFT    (8U)
#define LLCE_Core_to_core_C2INTHER_IEN8_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHER_IEN8(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN8_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN8_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN9_MASK     (0x200U)
#define LLCE_Core_to_core_C2INTHER_IEN9_SHIFT    (9U)
#define LLCE_Core_to_core_C2INTHER_IEN9_WIDTH    (1U)
#define LLCE_Core_to_core_C2INTHER_IEN9(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN9_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN9_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN10_MASK    (0x400U)
#define LLCE_Core_to_core_C2INTHER_IEN10_SHIFT   (10U)
#define LLCE_Core_to_core_C2INTHER_IEN10_WIDTH   (1U)
#define LLCE_Core_to_core_C2INTHER_IEN10(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN10_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN10_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN11_MASK    (0x800U)
#define LLCE_Core_to_core_C2INTHER_IEN11_SHIFT   (11U)
#define LLCE_Core_to_core_C2INTHER_IEN11_WIDTH   (1U)
#define LLCE_Core_to_core_C2INTHER_IEN11(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN11_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN11_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN12_MASK    (0x1000U)
#define LLCE_Core_to_core_C2INTHER_IEN12_SHIFT   (12U)
#define LLCE_Core_to_core_C2INTHER_IEN12_WIDTH   (1U)
#define LLCE_Core_to_core_C2INTHER_IEN12(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN12_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN12_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN13_MASK    (0x2000U)
#define LLCE_Core_to_core_C2INTHER_IEN13_SHIFT   (13U)
#define LLCE_Core_to_core_C2INTHER_IEN13_WIDTH   (1U)
#define LLCE_Core_to_core_C2INTHER_IEN13(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN13_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN13_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN14_MASK    (0x4000U)
#define LLCE_Core_to_core_C2INTHER_IEN14_SHIFT   (14U)
#define LLCE_Core_to_core_C2INTHER_IEN14_WIDTH   (1U)
#define LLCE_Core_to_core_C2INTHER_IEN14(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN14_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN14_MASK)

#define LLCE_Core_to_core_C2INTHER_IEN15_MASK    (0x8000U)
#define LLCE_Core_to_core_C2INTHER_IEN15_SHIFT   (15U)
#define LLCE_Core_to_core_C2INTHER_IEN15_WIDTH   (1U)
#define LLCE_Core_to_core_C2INTHER_IEN15(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C2INTHER_IEN15_SHIFT)) & LLCE_Core_to_core_C2INTHER_IEN15_MASK)
/*! @} */

/*! @name C3INTHER - Core 3 Interrupt from HOST Enable Register */
/*! @{ */

#define LLCE_Core_to_core_C3INTHER_IEN0_MASK     (0x1U)
#define LLCE_Core_to_core_C3INTHER_IEN0_SHIFT    (0U)
#define LLCE_Core_to_core_C3INTHER_IEN0_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHER_IEN0(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN0_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN0_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN1_MASK     (0x2U)
#define LLCE_Core_to_core_C3INTHER_IEN1_SHIFT    (1U)
#define LLCE_Core_to_core_C3INTHER_IEN1_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHER_IEN1(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN1_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN1_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN2_MASK     (0x4U)
#define LLCE_Core_to_core_C3INTHER_IEN2_SHIFT    (2U)
#define LLCE_Core_to_core_C3INTHER_IEN2_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHER_IEN2(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN2_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN2_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN3_MASK     (0x8U)
#define LLCE_Core_to_core_C3INTHER_IEN3_SHIFT    (3U)
#define LLCE_Core_to_core_C3INTHER_IEN3_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHER_IEN3(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN3_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN3_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN4_MASK     (0x10U)
#define LLCE_Core_to_core_C3INTHER_IEN4_SHIFT    (4U)
#define LLCE_Core_to_core_C3INTHER_IEN4_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHER_IEN4(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN4_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN4_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN5_MASK     (0x20U)
#define LLCE_Core_to_core_C3INTHER_IEN5_SHIFT    (5U)
#define LLCE_Core_to_core_C3INTHER_IEN5_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHER_IEN5(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN5_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN5_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN6_MASK     (0x40U)
#define LLCE_Core_to_core_C3INTHER_IEN6_SHIFT    (6U)
#define LLCE_Core_to_core_C3INTHER_IEN6_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHER_IEN6(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN6_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN6_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN7_MASK     (0x80U)
#define LLCE_Core_to_core_C3INTHER_IEN7_SHIFT    (7U)
#define LLCE_Core_to_core_C3INTHER_IEN7_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHER_IEN7(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN7_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN7_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN8_MASK     (0x100U)
#define LLCE_Core_to_core_C3INTHER_IEN8_SHIFT    (8U)
#define LLCE_Core_to_core_C3INTHER_IEN8_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHER_IEN8(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN8_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN8_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN9_MASK     (0x200U)
#define LLCE_Core_to_core_C3INTHER_IEN9_SHIFT    (9U)
#define LLCE_Core_to_core_C3INTHER_IEN9_WIDTH    (1U)
#define LLCE_Core_to_core_C3INTHER_IEN9(x)       (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN9_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN9_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN10_MASK    (0x400U)
#define LLCE_Core_to_core_C3INTHER_IEN10_SHIFT   (10U)
#define LLCE_Core_to_core_C3INTHER_IEN10_WIDTH   (1U)
#define LLCE_Core_to_core_C3INTHER_IEN10(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN10_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN10_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN11_MASK    (0x800U)
#define LLCE_Core_to_core_C3INTHER_IEN11_SHIFT   (11U)
#define LLCE_Core_to_core_C3INTHER_IEN11_WIDTH   (1U)
#define LLCE_Core_to_core_C3INTHER_IEN11(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN11_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN11_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN12_MASK    (0x1000U)
#define LLCE_Core_to_core_C3INTHER_IEN12_SHIFT   (12U)
#define LLCE_Core_to_core_C3INTHER_IEN12_WIDTH   (1U)
#define LLCE_Core_to_core_C3INTHER_IEN12(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN12_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN12_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN13_MASK    (0x2000U)
#define LLCE_Core_to_core_C3INTHER_IEN13_SHIFT   (13U)
#define LLCE_Core_to_core_C3INTHER_IEN13_WIDTH   (1U)
#define LLCE_Core_to_core_C3INTHER_IEN13(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN13_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN13_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN14_MASK    (0x4000U)
#define LLCE_Core_to_core_C3INTHER_IEN14_SHIFT   (14U)
#define LLCE_Core_to_core_C3INTHER_IEN14_WIDTH   (1U)
#define LLCE_Core_to_core_C3INTHER_IEN14(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN14_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN14_MASK)

#define LLCE_Core_to_core_C3INTHER_IEN15_MASK    (0x8000U)
#define LLCE_Core_to_core_C3INTHER_IEN15_SHIFT   (15U)
#define LLCE_Core_to_core_C3INTHER_IEN15_WIDTH   (1U)
#define LLCE_Core_to_core_C3INTHER_IEN15(x)      (((uint32_t)(((uint32_t)(x)) << LLCE_Core_to_core_C3INTHER_IEN15_SHIFT)) & LLCE_Core_to_core_C3INTHER_IEN15_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group LLCE_Core_to_core_Register_Masks */

/*!
 * @}
 */ /* end of group LLCE_Core_to_core_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G274A_LLCE_Core_to_core_H_) */
