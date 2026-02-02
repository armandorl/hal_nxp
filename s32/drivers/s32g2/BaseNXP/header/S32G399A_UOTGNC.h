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
 * @file S32G399A_UOTGNC.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_UOTGNC
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
#if !defined(S32G399A_UOTGNC_H_)  /* Check if memory map has not been already included */
#define S32G399A_UOTGNC_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- UOTGNC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UOTGNC_Peripheral_Access_Layer UOTGNC Peripheral Access Layer
 * @{
 */

/** UOTGNC - Register Layout Typedef */
typedef struct {
  __IO uint32_t CR;                                /**< Control register, offset: 0x0 */
} UOTGNC_Type, *UOTGNC_MemMapPtr;

/** Number of instances of the UOTGNC module. */
#define UOTGNC_INSTANCE_COUNT                    (1u)

/* UOTGNC - Peripheral instance base addresses */
/** Peripheral UOTGNC base address */
#define IP_UOTGNC_BASE                           (0x44064200u)
/** Peripheral UOTGNC base pointer */
#define IP_UOTGNC                                ((UOTGNC_Type *)IP_UOTGNC_BASE)
/** Array initializer of UOTGNC peripheral base addresses */
#define IP_UOTGNC_BASE_ADDRS                     { IP_UOTGNC_BASE }
/** Array initializer of UOTGNC peripheral base pointers */
#define IP_UOTGNC_BASE_PTRS                      { IP_UOTGNC }

/* ----------------------------------------------------------------------------
   -- UOTGNC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UOTGNC_Register_Masks UOTGNC Register Masks
 * @{
 */

/*! @name CR - Control register */
/*! @{ */

#define UOTGNC_CR_WAKEUP_IE_MASK                 (0x1U)
#define UOTGNC_CR_WAKEUP_IE_SHIFT                (0U)
#define UOTGNC_CR_WAKEUP_IE_WIDTH                (1U)
#define UOTGNC_CR_WAKEUP_IE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTGNC_CR_WAKEUP_IE_SHIFT)) & UOTGNC_CR_WAKEUP_IE_MASK)

#define UOTGNC_CR_CORE_IE_MASK                   (0x2U)
#define UOTGNC_CR_CORE_IE_SHIFT                  (1U)
#define UOTGNC_CR_CORE_IE_WIDTH                  (1U)
#define UOTGNC_CR_CORE_IE(x)                     (((uint32_t)(((uint32_t)(x)) << UOTGNC_CR_CORE_IE_SHIFT)) & UOTGNC_CR_CORE_IE_MASK)

#define UOTGNC_CR_PWRFLT_MASK                    (0x4U)
#define UOTGNC_CR_PWRFLT_SHIFT                   (2U)
#define UOTGNC_CR_PWRFLT_WIDTH                   (1U)
#define UOTGNC_CR_PWRFLT(x)                      (((uint32_t)(((uint32_t)(x)) << UOTGNC_CR_PWRFLT_SHIFT)) & UOTGNC_CR_PWRFLT_MASK)

#define UOTGNC_CR_WAKEUPIC_MASK                  (0x20U)
#define UOTGNC_CR_WAKEUPIC_SHIFT                 (5U)
#define UOTGNC_CR_WAKEUPIC_WIDTH                 (1U)
#define UOTGNC_CR_WAKEUPIC(x)                    (((uint32_t)(((uint32_t)(x)) << UOTGNC_CR_WAKEUPIC_SHIFT)) & UOTGNC_CR_WAKEUPIC_MASK)

#define UOTGNC_CR_PWRFLTEN_MASK                  (0x80U)
#define UOTGNC_CR_PWRFLTEN_SHIFT                 (7U)
#define UOTGNC_CR_PWRFLTEN_WIDTH                 (1U)
#define UOTGNC_CR_PWRFLTEN(x)                    (((uint32_t)(((uint32_t)(x)) << UOTGNC_CR_PWRFLTEN_SHIFT)) & UOTGNC_CR_PWRFLTEN_MASK)

#define UOTGNC_CR_PWRFLTDF_MASK                  (0x100U)
#define UOTGNC_CR_PWRFLTDF_SHIFT                 (8U)
#define UOTGNC_CR_PWRFLTDF_WIDTH                 (1U)
#define UOTGNC_CR_PWRFLTDF(x)                    (((uint32_t)(((uint32_t)(x)) << UOTGNC_CR_PWRFLTDF_SHIFT)) & UOTGNC_CR_PWRFLTDF_MASK)

#define UOTGNC_CR_WAKEUPIS_MASK                  (0x200U)
#define UOTGNC_CR_WAKEUPIS_SHIFT                 (9U)
#define UOTGNC_CR_WAKEUPIS_WIDTH                 (1U)
#define UOTGNC_CR_WAKEUPIS(x)                    (((uint32_t)(((uint32_t)(x)) << UOTGNC_CR_WAKEUPIS_SHIFT)) & UOTGNC_CR_WAKEUPIS_MASK)

#define UOTGNC_CR_WAKEUPCTRL_MASK                (0x400U)
#define UOTGNC_CR_WAKEUPCTRL_SHIFT               (10U)
#define UOTGNC_CR_WAKEUPCTRL_WIDTH               (1U)
#define UOTGNC_CR_WAKEUPCTRL(x)                  (((uint32_t)(((uint32_t)(x)) << UOTGNC_CR_WAKEUPCTRL_SHIFT)) & UOTGNC_CR_WAKEUPCTRL_MASK)

#define UOTGNC_CR_WAKEUPEN_MASK                  (0x800U)
#define UOTGNC_CR_WAKEUPEN_SHIFT                 (11U)
#define UOTGNC_CR_WAKEUPEN_WIDTH                 (1U)
#define UOTGNC_CR_WAKEUPEN(x)                    (((uint32_t)(((uint32_t)(x)) << UOTGNC_CR_WAKEUPEN_SHIFT)) & UOTGNC_CR_WAKEUPEN_MASK)

#define UOTGNC_CR_UCMALLBE_MASK                  (0x8000U)
#define UOTGNC_CR_UCMALLBE_SHIFT                 (15U)
#define UOTGNC_CR_UCMALLBE_WIDTH                 (1U)
#define UOTGNC_CR_UCMALLBE(x)                    (((uint32_t)(((uint32_t)(x)) << UOTGNC_CR_UCMALLBE_SHIFT)) & UOTGNC_CR_UCMALLBE_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group UOTGNC_Register_Masks */

/*!
 * @}
 */ /* end of group UOTGNC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_UOTGNC_H_) */
