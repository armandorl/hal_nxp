/*
** ###################################################################
**     Processor:           S32G399A_M7
**     Compiler:            Keil ARM C/C++ Compiler
**     Reference manual:    S32G3xx RM Rev.2 Draft C
**     Version:             rev. 2.7, 2022-07-21
**     Build:               b220721
**
**     Abstract:
**         Peripheral Access Layer for S32G399A_M7
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
 * @file S32G399A_S32G_STDBY_GPR.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_S32G_STDBY_GPR
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
#if !defined(S32G399A_S32G_STDBY_GPR_H_)  /* Check if memory map has not been already included */
#define S32G399A_S32G_STDBY_GPR_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- S32G_STDBY_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup S32G_STDBY_GPR_Peripheral_Access_Layer S32G_STDBY_GPR Peripheral Access Layer
 * @{
 */

/** S32G_STDBY_GPR - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[4];
  __IO uint32_t WKUP_PUS;                          /**< WKUP Pad Pullup/Pulldown Select, offset: 0x4 */
} S32G_STDBY_GPR_Type, *S32G_STDBY_GPR_MemMapPtr;

/** Number of instances of the S32G_STDBY_GPR module. */
#define S32G_STDBY_GPR_INSTANCE_COUNT            (1u)

/* S32G_STDBY_GPR - Peripheral instance base addresses */
/** Peripheral S32G_STDBY_GPR base address */
#define IP_S32G_STDBY_GPR_BASE                   (0x4007CB00u)
/** Peripheral S32G_STDBY_GPR base pointer */
#define IP_S32G_STDBY_GPR                        ((S32G_STDBY_GPR_Type *)IP_S32G_STDBY_GPR_BASE)
/** Array initializer of S32G_STDBY_GPR peripheral base addresses */
#define IP_S32G_STDBY_GPR_BASE_ADDRS             { IP_S32G_STDBY_GPR_BASE }
/** Array initializer of S32G_STDBY_GPR peripheral base pointers */
#define IP_S32G_STDBY_GPR_BASE_PTRS              { IP_S32G_STDBY_GPR }

/* ----------------------------------------------------------------------------
   -- S32G_STDBY_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup S32G_STDBY_GPR_Register_Masks S32G_STDBY_GPR Register Masks
 * @{
 */

/*! @name WKUP_PUS - WKUP Pad Pullup/Pulldown Select */
/*! @{ */

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS_MASK    (0x7FFFFFU)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS_SHIFT   (0U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS_WIDTH   (23U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS(x)      (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PU_OVERRIDE_MASK (0x80000000U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PU_OVERRIDE_SHIFT (31U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PU_OVERRIDE_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PU_OVERRIDE(x) (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PU_OVERRIDE_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PU_OVERRIDE_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group S32G_STDBY_GPR_Register_Masks */

/*!
 * @}
 */ /* end of group S32G_STDBY_GPR_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_S32G_STDBY_GPR_H_) */
