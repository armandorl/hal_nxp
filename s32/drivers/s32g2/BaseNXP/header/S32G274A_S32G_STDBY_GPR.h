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
 * @file S32G274A_S32G_STDBY_GPR.h
 * @version 2.1
 * @date 2022-06-27
 * @brief Peripheral Access Layer for S32G274A_S32G_STDBY_GPR
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
#if !defined(S32G274A_S32G_STDBY_GPR_H_)  /* Check if memory map has not been already included */
#define S32G274A_S32G_STDBY_GPR_H_

#include "S32G274A_COMMON.h"

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

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS4_MASK   (0x1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS4_SHIFT  (0U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS4_WIDTH  (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS4(x)     (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS4_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS4_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS5_MASK   (0x2U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS5_SHIFT  (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS5_WIDTH  (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS5(x)     (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS5_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS5_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS6_MASK   (0x4U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS6_SHIFT  (2U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS6_WIDTH  (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS6(x)     (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS6_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS6_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS7_MASK   (0x8U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS7_SHIFT  (3U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS7_WIDTH  (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS7(x)     (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS7_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS7_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS8_MASK   (0x10U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS8_SHIFT  (4U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS8_WIDTH  (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS8(x)     (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS8_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS8_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS9_MASK   (0x20U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS9_SHIFT  (5U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS9_WIDTH  (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS9(x)     (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS9_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS9_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS10_MASK  (0x40U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS10_SHIFT (6U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS10_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS10(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS10_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS10_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS11_MASK  (0x80U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS11_SHIFT (7U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS11_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS11(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS11_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS11_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS12_MASK  (0x100U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS12_SHIFT (8U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS12_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS12(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS12_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS12_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS13_MASK  (0x200U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS13_SHIFT (9U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS13_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS13(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS13_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS13_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS14_MASK  (0x400U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS14_SHIFT (10U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS14_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS14(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS14_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS14_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS15_MASK  (0x800U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS15_SHIFT (11U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS15_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS15(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS15_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS15_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS16_MASK  (0x1000U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS16_SHIFT (12U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS16_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS16(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS16_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS16_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS17_MASK  (0x2000U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS17_SHIFT (13U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS17_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS17(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS17_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS17_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS18_MASK  (0x4000U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS18_SHIFT (14U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS18_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS18(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS18_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS18_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS19_MASK  (0x8000U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS19_SHIFT (15U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS19_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS19(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS19_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS19_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS20_MASK  (0x10000U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS20_SHIFT (16U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS20_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS20(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS20_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS20_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS21_MASK  (0x20000U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS21_SHIFT (17U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS21_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS21(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS21_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS21_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS22_MASK  (0x40000U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS22_SHIFT (18U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS22_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS22(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS22_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS22_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS23_MASK  (0x80000U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS23_SHIFT (19U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS23_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS23(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS23_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS23_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS24_MASK  (0x100000U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS24_SHIFT (20U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS24_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS24(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS24_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS24_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS25_MASK  (0x200000U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS25_SHIFT (21U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS25_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS25(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS25_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS25_MASK)

#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS26_MASK  (0x400000U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS26_SHIFT (22U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS26_WIDTH (1U)
#define S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS26(x)    (((uint32_t)(((uint32_t)(x)) << S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS26_SHIFT)) & S32G_STDBY_GPR_WKUP_PUS_WKUP_PUS26_MASK)

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

#endif  /* #if !defined(S32G274A_S32G_STDBY_GPR_H_) */
