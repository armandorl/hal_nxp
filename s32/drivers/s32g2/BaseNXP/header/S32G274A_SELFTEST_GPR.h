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
 * @file S32G274A_SELFTEST_GPR.h
 * @version 2.1
 * @date 2022-06-27
 * @brief Peripheral Access Layer for S32G274A_SELFTEST_GPR
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
#if !defined(S32G274A_SELFTEST_GPR_H_)  /* Check if memory map has not been already included */
#define S32G274A_SELFTEST_GPR_H_

#include "S32G274A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SELFTEST_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SELFTEST_GPR_Peripheral_Access_Layer SELFTEST_GPR Peripheral Access Layer
 * @{
 */

/** SELFTEST_GPR - Register Layout Typedef */
typedef struct {
  __IO uint32_t GENERIC_REG0;                      /**< Generic 0, offset: 0x0 */
  __IO uint32_t GENERIC_REG1;                      /**< Generic 1, offset: 0x4 */
  uint8_t RESERVED_0[12];
  __IO uint32_t LBIST_PROG_REG;                    /**< LBIST Program, offset: 0x14 */
} SELFTEST_GPR_Type, *SELFTEST_GPR_MemMapPtr;

/** Number of instances of the SELFTEST_GPR module. */
#define SELFTEST_GPR_INSTANCE_COUNT              (9u)

/* SELFTEST_GPR - Peripheral instance base addresses */
/** Peripheral SELFTEST_GPR base address */
#define IP_SELFTEST_GPR_BASE                     (0x4001C000u)
/** Peripheral SELFTEST_GPR base pointer */
#define IP_SELFTEST_GPR                          ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_BASE)
/** Peripheral SELFTEST_GPR_CHIPTOP base address */
#define IP_SELFTEST_GPR_CHIPTOP_BASE             (0x4001C560u)
/** Peripheral SELFTEST_GPR_CHIPTOP base pointer */
#define IP_SELFTEST_GPR_CHIPTOP                  ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CHIPTOP_BASE)
/** Peripheral SELFTEST_GPR_MEM_NOC_0 base address */
#define IP_SELFTEST_GPR_MEM_NOC_0_BASE           (0x4001C520u)
/** Peripheral SELFTEST_GPR_MEM_NOC_0 base pointer */
#define IP_SELFTEST_GPR_MEM_NOC_0                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_MEM_NOC_0_BASE)
/** Peripheral SELFTEST_GPR_MEM_NOC_1 base address */
#define IP_SELFTEST_GPR_MEM_NOC_1_BASE           (0x4001C540u)
/** Peripheral SELFTEST_GPR_MEM_NOC_1 base pointer */
#define IP_SELFTEST_GPR_MEM_NOC_1                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_MEM_NOC_1_BASE)
/** Peripheral SELFTEST_GPR_MISC base address */
#define IP_SELFTEST_GPR_MISC_BASE                (0x4001C500u)
/** Peripheral SELFTEST_GPR_MISC base pointer */
#define IP_SELFTEST_GPR_MISC                     ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_MISC_BASE)
/** Peripheral SELFTEST_GPR_NOC_PART1 base address */
#define IP_SELFTEST_GPR_NOC_PART1_BASE           (0x4001C480u)
/** Peripheral SELFTEST_GPR_NOC_PART1 base pointer */
#define IP_SELFTEST_GPR_NOC_PART1                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC_PART1_BASE)
/** Peripheral SELFTEST_GPR_NOC_PART2 base address */
#define IP_SELFTEST_GPR_NOC_PART2_BASE           (0x4001C4A0u)
/** Peripheral SELFTEST_GPR_NOC_PART2 base pointer */
#define IP_SELFTEST_GPR_NOC_PART2                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC_PART2_BASE)
/** Peripheral SELFTEST_GPR_NOC_PART3 base address */
#define IP_SELFTEST_GPR_NOC_PART3_BASE           (0x4001C4C0u)
/** Peripheral SELFTEST_GPR_NOC_PART3 base pointer */
#define IP_SELFTEST_GPR_NOC_PART3                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC_PART3_BASE)
/** Peripheral SELFTEST_GPR_NOC_PART4 base address */
#define IP_SELFTEST_GPR_NOC_PART4_BASE           (0x4001C4E0u)
/** Peripheral SELFTEST_GPR_NOC_PART4 base pointer */
#define IP_SELFTEST_GPR_NOC_PART4                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC_PART4_BASE)
/** Array initializer of SELFTEST_GPR peripheral base addresses */
#define IP_SELFTEST_GPR_BASE_ADDRS               { IP_SELFTEST_GPR_BASE, IP_SELFTEST_GPR_CHIPTOP_BASE, IP_SELFTEST_GPR_MEM_NOC_0_BASE, IP_SELFTEST_GPR_MEM_NOC_1_BASE, IP_SELFTEST_GPR_MISC_BASE, IP_SELFTEST_GPR_NOC_PART1_BASE, IP_SELFTEST_GPR_NOC_PART2_BASE, IP_SELFTEST_GPR_NOC_PART3_BASE, IP_SELFTEST_GPR_NOC_PART4_BASE }
/** Array initializer of SELFTEST_GPR peripheral base pointers */
#define IP_SELFTEST_GPR_BASE_PTRS                { IP_SELFTEST_GPR, IP_SELFTEST_GPR_CHIPTOP, IP_SELFTEST_GPR_MEM_NOC_0, IP_SELFTEST_GPR_MEM_NOC_1, IP_SELFTEST_GPR_MISC, IP_SELFTEST_GPR_NOC_PART1, IP_SELFTEST_GPR_NOC_PART2, IP_SELFTEST_GPR_NOC_PART3, IP_SELFTEST_GPR_NOC_PART4 }

/* ----------------------------------------------------------------------------
   -- SELFTEST_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SELFTEST_GPR_Register_Masks SELFTEST_GPR Register Masks
 * @{
 */

/*! @name GENERIC_REG0 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG_LBIST_shift_count_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SELFTEST_GPR_Register_Masks */

/*!
 * @}
 */ /* end of group SELFTEST_GPR_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G274A_SELFTEST_GPR_H_) */
