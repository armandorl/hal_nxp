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
 * @file S32G274A_CM7_GPR.h
 * @version 2.1
 * @date 2022-06-27
 * @brief Peripheral Access Layer for S32G274A_CM7_GPR
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
#if !defined(S32G274A_CM7_GPR_H_)  /* Check if memory map has not been already included */
#define S32G274A_CM7_GPR_H_

#include "S32G274A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- CM7_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CM7_GPR_Peripheral_Access_Layer CM7_GPR Peripheral Access Layer
 * @{
 */

/** CM7_GPR - Register Layout Typedef */
typedef struct {
  __IO uint32_t CORTEXM7_GPR0;                     /**< Cortex-M7 GPR0, offset: 0x0 */
} CM7_GPR_Type, *CM7_GPR_MemMapPtr;

/** Number of instances of the CM7_GPR module. */
#define CM7_GPR_INSTANCE_COUNT                   (3u)

/* CM7_GPR - Peripheral instance base addresses */
/** Peripheral CM7_GPR_0 base address */
#define IP_CM7_GPR_0_BASE                        (0x4007C100u)
/** Peripheral CM7_GPR_0 base pointer */
#define IP_CM7_GPR_0                             ((CM7_GPR_Type *)IP_CM7_GPR_0_BASE)
/** Peripheral CM7_GPR_1 base address */
#define IP_CM7_GPR_1_BASE                        (0x4007C200u)
/** Peripheral CM7_GPR_1 base pointer */
#define IP_CM7_GPR_1                             ((CM7_GPR_Type *)IP_CM7_GPR_1_BASE)
/** Peripheral CM7_GPR_2 base address */
#define IP_CM7_GPR_2_BASE                        (0x4007C300u)
/** Peripheral CM7_GPR_2 base pointer */
#define IP_CM7_GPR_2                             ((CM7_GPR_Type *)IP_CM7_GPR_2_BASE)
/** Array initializer of CM7_GPR peripheral base addresses */
#define IP_CM7_GPR_BASE_ADDRS                    { IP_CM7_GPR_0_BASE, IP_CM7_GPR_1_BASE, IP_CM7_GPR_2_BASE }
/** Array initializer of CM7_GPR peripheral base pointers */
#define IP_CM7_GPR_BASE_PTRS                     { IP_CM7_GPR_0, IP_CM7_GPR_1, IP_CM7_GPR_2 }

/* ----------------------------------------------------------------------------
   -- CM7_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CM7_GPR_Register_Masks CM7_GPR Register Masks
 * @{
 */

/*! @name CORTEXM7_GPR0 - Cortex-M7 GPR0 */
/*! @{ */

#define CM7_GPR_CORTEXM7_GPR0_CM7_CPU_WAIT_MASK  (0x1U)
#define CM7_GPR_CORTEXM7_GPR0_CM7_CPU_WAIT_SHIFT (0U)
#define CM7_GPR_CORTEXM7_GPR0_CM7_CPU_WAIT_WIDTH (1U)
#define CM7_GPR_CORTEXM7_GPR0_CM7_CPU_WAIT(x)    (((uint32_t)(((uint32_t)(x)) << CM7_GPR_CORTEXM7_GPR0_CM7_CPU_WAIT_SHIFT)) & CM7_GPR_CORTEXM7_GPR0_CM7_CPU_WAIT_MASK)

#define CM7_GPR_CORTEXM7_GPR0_CM7_CPU_EVENT_GENERATE_MASK (0x2U)
#define CM7_GPR_CORTEXM7_GPR0_CM7_CPU_EVENT_GENERATE_SHIFT (1U)
#define CM7_GPR_CORTEXM7_GPR0_CM7_CPU_EVENT_GENERATE_WIDTH (1U)
#define CM7_GPR_CORTEXM7_GPR0_CM7_CPU_EVENT_GENERATE(x) (((uint32_t)(((uint32_t)(x)) << CM7_GPR_CORTEXM7_GPR0_CM7_CPU_EVENT_GENERATE_SHIFT)) & CM7_GPR_CORTEXM7_GPR0_CM7_CPU_EVENT_GENERATE_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group CM7_GPR_Register_Masks */

/*!
 * @}
 */ /* end of group CM7_GPR_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G274A_CM7_GPR_H_) */
