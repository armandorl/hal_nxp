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
 * @file S32G399A_CAIU0_QosGenerator.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_CAIU0_QosGenerator
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
#if !defined(S32G399A_CAIU0_QosGenerator_H_)  /* Check if memory map has not been already included */
#define S32G399A_CAIU0_QosGenerator_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- CAIU0_QosGenerator Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CAIU0_QosGenerator_Peripheral_Access_Layer CAIU0_QosGenerator Peripheral Access Layer
 * @{
 */

/** CAIU0_QosGenerator - Register Layout Typedef */
typedef struct {
  __I  uint32_t COREID;                            /**< Core ID, offset: 0x0 */
  __I  uint32_t REVISIONID;                        /**< Revision ID, offset: 0x4 */
  __IO uint32_t PRIORITY;                          /**< Priority., offset: 0x8 */
  uint8_t RESERVED_0[12];
  __IO uint32_t EXTCONTROL;                        /**< External inputs control, offset: 0x18 */
} CAIU0_QosGenerator_Type, *CAIU0_QosGenerator_MemMapPtr;

/** Number of instances of the CAIU0_QosGenerator module. */
#define CAIU0_QosGenerator_INSTANCE_COUNT        (1u)

/* CAIU0_QosGenerator - Peripheral instance base addresses */
/** Peripheral CAIU0_QOSGENERATOR base address */
#define IP_CAIU0_QOSGENERATOR_BASE               (0x50500100u)
/** Peripheral CAIU0_QOSGENERATOR base pointer */
#define IP_CAIU0_QOSGENERATOR                    ((CAIU0_QosGenerator_Type *)IP_CAIU0_QOSGENERATOR_BASE)
/** Array initializer of CAIU0_QosGenerator peripheral base addresses */
#define IP_CAIU0_QosGenerator_BASE_ADDRS         { IP_CAIU0_QOSGENERATOR_BASE }
/** Array initializer of CAIU0_QosGenerator peripheral base pointers */
#define IP_CAIU0_QosGenerator_BASE_PTRS          { IP_CAIU0_QOSGENERATOR }

/* ----------------------------------------------------------------------------
   -- CAIU0_QosGenerator Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CAIU0_QosGenerator_Register_Masks CAIU0_QosGenerator Register Masks
 * @{
 */

/*! @name COREID - Core ID */
/*! @{ */

#define CAIU0_QosGenerator_COREID_CORETYPEID_MASK (0xFFU)
#define CAIU0_QosGenerator_COREID_CORETYPEID_SHIFT (0U)
#define CAIU0_QosGenerator_COREID_CORETYPEID_WIDTH (8U)
#define CAIU0_QosGenerator_COREID_CORETYPEID(x)  (((uint32_t)(((uint32_t)(x)) << CAIU0_QosGenerator_COREID_CORETYPEID_SHIFT)) & CAIU0_QosGenerator_COREID_CORETYPEID_MASK)

#define CAIU0_QosGenerator_COREID_CORECHECKSUM_MASK (0xFFFFFF00U)
#define CAIU0_QosGenerator_COREID_CORECHECKSUM_SHIFT (8U)
#define CAIU0_QosGenerator_COREID_CORECHECKSUM_WIDTH (24U)
#define CAIU0_QosGenerator_COREID_CORECHECKSUM(x) (((uint32_t)(((uint32_t)(x)) << CAIU0_QosGenerator_COREID_CORECHECKSUM_SHIFT)) & CAIU0_QosGenerator_COREID_CORECHECKSUM_MASK)
/*! @} */

/*! @name REVISIONID - Revision ID */
/*! @{ */

#define CAIU0_QosGenerator_REVISIONID_USERID_MASK (0xFFU)
#define CAIU0_QosGenerator_REVISIONID_USERID_SHIFT (0U)
#define CAIU0_QosGenerator_REVISIONID_USERID_WIDTH (8U)
#define CAIU0_QosGenerator_REVISIONID_USERID(x)  (((uint32_t)(((uint32_t)(x)) << CAIU0_QosGenerator_REVISIONID_USERID_SHIFT)) & CAIU0_QosGenerator_REVISIONID_USERID_MASK)

#define CAIU0_QosGenerator_REVISIONID_NOCID_MASK (0xFFFFFF00U)
#define CAIU0_QosGenerator_REVISIONID_NOCID_SHIFT (8U)
#define CAIU0_QosGenerator_REVISIONID_NOCID_WIDTH (24U)
#define CAIU0_QosGenerator_REVISIONID_NOCID(x)   (((uint32_t)(((uint32_t)(x)) << CAIU0_QosGenerator_REVISIONID_NOCID_SHIFT)) & CAIU0_QosGenerator_REVISIONID_NOCID_MASK)
/*! @} */

/*! @name PRIORITY - Priority. */
/*! @{ */

#define CAIU0_QosGenerator_PRIORITY_P0_MASK      (0x3U)
#define CAIU0_QosGenerator_PRIORITY_P0_SHIFT     (0U)
#define CAIU0_QosGenerator_PRIORITY_P0_WIDTH     (2U)
#define CAIU0_QosGenerator_PRIORITY_P0(x)        (((uint32_t)(((uint32_t)(x)) << CAIU0_QosGenerator_PRIORITY_P0_SHIFT)) & CAIU0_QosGenerator_PRIORITY_P0_MASK)

#define CAIU0_QosGenerator_PRIORITY_MARK_MASK    (0x80000000U)
#define CAIU0_QosGenerator_PRIORITY_MARK_SHIFT   (31U)
#define CAIU0_QosGenerator_PRIORITY_MARK_WIDTH   (1U)
#define CAIU0_QosGenerator_PRIORITY_MARK(x)      (((uint32_t)(((uint32_t)(x)) << CAIU0_QosGenerator_PRIORITY_MARK_SHIFT)) & CAIU0_QosGenerator_PRIORITY_MARK_MASK)
/*! @} */

/*! @name EXTCONTROL - External inputs control */
/*! @{ */

#define CAIU0_QosGenerator_EXTCONTROL_SOCKETQOSEN_MASK (0x1U)
#define CAIU0_QosGenerator_EXTCONTROL_SOCKETQOSEN_SHIFT (0U)
#define CAIU0_QosGenerator_EXTCONTROL_SOCKETQOSEN_WIDTH (1U)
#define CAIU0_QosGenerator_EXTCONTROL_SOCKETQOSEN(x) (((uint32_t)(((uint32_t)(x)) << CAIU0_QosGenerator_EXTCONTROL_SOCKETQOSEN_SHIFT)) & CAIU0_QosGenerator_EXTCONTROL_SOCKETQOSEN_MASK)

#define CAIU0_QosGenerator_EXTCONTROL_EXTTHREN_MASK (0x2U)
#define CAIU0_QosGenerator_EXTCONTROL_EXTTHREN_SHIFT (1U)
#define CAIU0_QosGenerator_EXTCONTROL_EXTTHREN_WIDTH (1U)
#define CAIU0_QosGenerator_EXTCONTROL_EXTTHREN(x) (((uint32_t)(((uint32_t)(x)) << CAIU0_QosGenerator_EXTCONTROL_EXTTHREN_SHIFT)) & CAIU0_QosGenerator_EXTCONTROL_EXTTHREN_MASK)

#define CAIU0_QosGenerator_EXTCONTROL_INTCLKEN_MASK (0x4U)
#define CAIU0_QosGenerator_EXTCONTROL_INTCLKEN_SHIFT (2U)
#define CAIU0_QosGenerator_EXTCONTROL_INTCLKEN_WIDTH (1U)
#define CAIU0_QosGenerator_EXTCONTROL_INTCLKEN(x) (((uint32_t)(((uint32_t)(x)) << CAIU0_QosGenerator_EXTCONTROL_INTCLKEN_SHIFT)) & CAIU0_QosGenerator_EXTCONTROL_INTCLKEN_MASK)

#define CAIU0_QosGenerator_EXTCONTROL_EXTLIMITEN_MASK (0x8U)
#define CAIU0_QosGenerator_EXTCONTROL_EXTLIMITEN_SHIFT (3U)
#define CAIU0_QosGenerator_EXTCONTROL_EXTLIMITEN_WIDTH (1U)
#define CAIU0_QosGenerator_EXTCONTROL_EXTLIMITEN(x) (((uint32_t)(((uint32_t)(x)) << CAIU0_QosGenerator_EXTCONTROL_EXTLIMITEN_SHIFT)) & CAIU0_QosGenerator_EXTCONTROL_EXTLIMITEN_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group CAIU0_QosGenerator_Register_Masks */

/*!
 * @}
 */ /* end of group CAIU0_QosGenerator_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_CAIU0_QosGenerator_H_) */
