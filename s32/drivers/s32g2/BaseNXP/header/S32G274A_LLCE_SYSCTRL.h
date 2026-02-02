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
 * @file S32G274A_LLCE_SYSCTRL.h
 * @version 2.1
 * @date 2022-06-27
 * @brief Peripheral Access Layer for S32G274A_LLCE_SYSCTRL
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
#if !defined(S32G274A_LLCE_SYSCTRL_H_)  /* Check if memory map has not been already included */
#define S32G274A_LLCE_SYSCTRL_H_

#include "S32G274A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- LLCE_SYSCTRL Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LLCE_SYSCTRL_Peripheral_Access_Layer LLCE_SYSCTRL Peripheral Access Layer
 * @{
 */

/** LLCE_SYSCTRL - Register Layout Typedef */
typedef struct {
  __IO uint32_t LLCE_SYSRSTR;                      /**< System Reset Control, offset: 0x0 */
} LLCE_SYSCTRL_Type, *LLCE_SYSCTRL_MemMapPtr;

/** Number of instances of the LLCE_SYSCTRL module. */
#define LLCE_SYSCTRL_INSTANCE_COUNT              (1u)

/* LLCE_SYSCTRL - Peripheral instance base addresses */
/** Peripheral LLCE_SYSCTRL base address */
#define IP_LLCE_SYSCTRL_BASE                     (0x43FF8000u)
/** Peripheral LLCE_SYSCTRL base pointer */
#define IP_LLCE_SYSCTRL                          ((LLCE_SYSCTRL_Type *)IP_LLCE_SYSCTRL_BASE)
/** Array initializer of LLCE_SYSCTRL peripheral base addresses */
#define IP_LLCE_SYSCTRL_BASE_ADDRS               { IP_LLCE_SYSCTRL_BASE }
/** Array initializer of LLCE_SYSCTRL peripheral base pointers */
#define IP_LLCE_SYSCTRL_BASE_PTRS                { IP_LLCE_SYSCTRL }

/* ----------------------------------------------------------------------------
   -- LLCE_SYSCTRL Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LLCE_SYSCTRL_Register_Masks LLCE_SYSCTRL Register Masks
 * @{
 */

/*! @name LLCE_SYSRSTR - System Reset Control */
/*! @{ */

#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST0_MASK  (0x1U)
#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST0_SHIFT (0U)
#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST0_WIDTH (1U)
#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST0(x)    (((uint32_t)(((uint32_t)(x)) << LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST0_SHIFT)) & LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST0_MASK)

#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST1_MASK  (0x2U)
#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST1_SHIFT (1U)
#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST1_WIDTH (1U)
#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST1(x)    (((uint32_t)(((uint32_t)(x)) << LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST1_SHIFT)) & LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST1_MASK)

#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST2_MASK  (0x4U)
#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST2_SHIFT (2U)
#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST2_WIDTH (1U)
#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST2(x)    (((uint32_t)(((uint32_t)(x)) << LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST2_SHIFT)) & LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST2_MASK)

#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST3_MASK  (0x8U)
#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST3_SHIFT (3U)
#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST3_WIDTH (1U)
#define LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST3(x)    (((uint32_t)(((uint32_t)(x)) << LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST3_SHIFT)) & LLCE_SYSCTRL_LLCE_SYSRSTR_CPU_RST3_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group LLCE_SYSCTRL_Register_Masks */

/*!
 * @}
 */ /* end of group LLCE_SYSCTRL_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G274A_LLCE_SYSCTRL_H_) */
