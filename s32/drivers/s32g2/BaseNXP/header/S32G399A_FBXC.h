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
 * @file S32G399A_FBXC.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_FBXC
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
#if !defined(S32G399A_FBXC_H_)  /* Check if memory map has not been already included */
#define S32G399A_FBXC_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- FBXC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FBXC_Peripheral_Access_Layer FBXC Peripheral Access Layer
 * @{
 */

/** FBXC - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[16];
  __IO uint32_t PRPW;                              /**< Program and Read Pulse Width Register, offset: 0x10 */
  __IO uint32_t SHPW;                              /**< Setup and Hold Pulse Width Register, offset: 0x14 */
} FBXC_Type, *FBXC_MemMapPtr;

/** Number of instances of the FBXC module. */
#define FBXC_INSTANCE_COUNT                      (1u)

/* FBXC - Peripheral instance base addresses */
/** Peripheral FBXC base address */
#define IP_FBXC_BASE                             (0x400A4100u)
/** Peripheral FBXC base pointer */
#define IP_FBXC                                  ((FBXC_Type *)IP_FBXC_BASE)
/** Array initializer of FBXC peripheral base addresses */
#define IP_FBXC_BASE_ADDRS                       { IP_FBXC_BASE }
/** Array initializer of FBXC peripheral base pointers */
#define IP_FBXC_BASE_PTRS                        { IP_FBXC }

/* ----------------------------------------------------------------------------
   -- FBXC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FBXC_Register_Masks FBXC Register Masks
 * @{
 */

/*! @name PRPW - Program and Read Pulse Width Register */
/*! @{ */

#define FBXC_PRPW_PPW_MASK                       (0xFFFFU)
#define FBXC_PRPW_PPW_SHIFT                      (0U)
#define FBXC_PRPW_PPW_WIDTH                      (16U)
#define FBXC_PRPW_PPW(x)                         (((uint32_t)(((uint32_t)(x)) << FBXC_PRPW_PPW_SHIFT)) & FBXC_PRPW_PPW_MASK)

#define FBXC_PRPW_RPW_MASK                       (0xFF0000U)
#define FBXC_PRPW_RPW_SHIFT                      (16U)
#define FBXC_PRPW_RPW_WIDTH                      (8U)
#define FBXC_PRPW_RPW(x)                         (((uint32_t)(((uint32_t)(x)) << FBXC_PRPW_RPW_SHIFT)) & FBXC_PRPW_RPW_MASK)
/*! @} */

/*! @name SHPW - Setup and Hold Pulse Width Register */
/*! @{ */

#define FBXC_SHPW_SPW_MASK                       (0xFFU)
#define FBXC_SHPW_SPW_SHIFT                      (0U)
#define FBXC_SHPW_SPW_WIDTH                      (8U)
#define FBXC_SHPW_SPW(x)                         (((uint32_t)(((uint32_t)(x)) << FBXC_SHPW_SPW_SHIFT)) & FBXC_SHPW_SPW_MASK)

#define FBXC_SHPW_LPW_MASK                       (0xFF00U)
#define FBXC_SHPW_LPW_SHIFT                      (8U)
#define FBXC_SHPW_LPW_WIDTH                      (8U)
#define FBXC_SHPW_LPW(x)                         (((uint32_t)(((uint32_t)(x)) << FBXC_SHPW_LPW_SHIFT)) & FBXC_SHPW_LPW_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group FBXC_Register_Masks */

/*!
 * @}
 */ /* end of group FBXC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_FBXC_H_) */
