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
 * @file S32G399A_CMU_FC_46.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_CMU_FC_46
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
#if !defined(S32G399A_CMU_FC_46_H_)  /* Check if memory map has not been already included */
#define S32G399A_CMU_FC_46_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- CMU_FC_46 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CMU_FC_46_Peripheral_Access_Layer CMU_FC_46 Peripheral Access Layer
 * @{
 */

/** CMU_FC_46 - Register Layout Typedef */
typedef struct {
  __IO uint32_t GCR;                               /**< Global Configuration Register, offset: 0x0 */
  __IO uint32_t RCCR;                              /**< Reference Count Configuration Register, offset: 0x4 */
  __IO uint32_t HTCR;                              /**< High Threshold Configuration Register, offset: 0x8 */
  __IO uint32_t LTCR;                              /**< Low Threshold Configuration Register, offset: 0xC */
  __IO uint32_t SR;                                /**< Status Register, offset: 0x10 */
  __IO uint32_t IER;                               /**< Interrupt Enable Register, offset: 0x14 */
} CMU_FC_46_Type, *CMU_FC_46_MemMapPtr;

/** Number of instances of the CMU_FC_46 module. */
#define CMU_FC_46_INSTANCE_COUNT                 (1u)

/* CMU_FC_46 - Peripheral instance base addresses */
/** Peripheral CMU_FC_46 base address */
#define IP_CMU_FC_46_BASE                        (0x4005C5C0u)
/** Peripheral CMU_FC_46 base pointer */
#define IP_CMU_FC_46                             ((CMU_FC_46_Type *)IP_CMU_FC_46_BASE)
/** Array initializer of CMU_FC_46 peripheral base addresses */
#define IP_CMU_FC_46_BASE_ADDRS                  { IP_CMU_FC_46_BASE }
/** Array initializer of CMU_FC_46 peripheral base pointers */
#define IP_CMU_FC_46_BASE_PTRS                   { IP_CMU_FC_46 }

/* ----------------------------------------------------------------------------
   -- CMU_FC_46 Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CMU_FC_46_Register_Masks CMU_FC_46 Register Masks
 * @{
 */

/*! @name GCR - Global Configuration Register */
/*! @{ */

#define CMU_FC_46_GCR_FCE_MASK                   (0x1U)
#define CMU_FC_46_GCR_FCE_SHIFT                  (0U)
#define CMU_FC_46_GCR_FCE_WIDTH                  (1U)
#define CMU_FC_46_GCR_FCE(x)                     (((uint32_t)(((uint32_t)(x)) << CMU_FC_46_GCR_FCE_SHIFT)) & CMU_FC_46_GCR_FCE_MASK)
/*! @} */

/*! @name RCCR - Reference Count Configuration Register */
/*! @{ */

#define CMU_FC_46_RCCR_REF_CNT_MASK              (0xFFFFU)
#define CMU_FC_46_RCCR_REF_CNT_SHIFT             (0U)
#define CMU_FC_46_RCCR_REF_CNT_WIDTH             (16U)
#define CMU_FC_46_RCCR_REF_CNT(x)                (((uint32_t)(((uint32_t)(x)) << CMU_FC_46_RCCR_REF_CNT_SHIFT)) & CMU_FC_46_RCCR_REF_CNT_MASK)
/*! @} */

/*! @name HTCR - High Threshold Configuration Register */
/*! @{ */

#define CMU_FC_46_HTCR_HFREF_MASK                (0xFFFFFFU)
#define CMU_FC_46_HTCR_HFREF_SHIFT               (0U)
#define CMU_FC_46_HTCR_HFREF_WIDTH               (24U)
#define CMU_FC_46_HTCR_HFREF(x)                  (((uint32_t)(((uint32_t)(x)) << CMU_FC_46_HTCR_HFREF_SHIFT)) & CMU_FC_46_HTCR_HFREF_MASK)
/*! @} */

/*! @name LTCR - Low Threshold Configuration Register */
/*! @{ */

#define CMU_FC_46_LTCR_LFREF_MASK                (0xFFFFFFU)
#define CMU_FC_46_LTCR_LFREF_SHIFT               (0U)
#define CMU_FC_46_LTCR_LFREF_WIDTH               (24U)
#define CMU_FC_46_LTCR_LFREF(x)                  (((uint32_t)(((uint32_t)(x)) << CMU_FC_46_LTCR_LFREF_SHIFT)) & CMU_FC_46_LTCR_LFREF_MASK)
/*! @} */

/*! @name SR - Status Register */
/*! @{ */

#define CMU_FC_46_SR_FLL_MASK                    (0x1U)
#define CMU_FC_46_SR_FLL_SHIFT                   (0U)
#define CMU_FC_46_SR_FLL_WIDTH                   (1U)
#define CMU_FC_46_SR_FLL(x)                      (((uint32_t)(((uint32_t)(x)) << CMU_FC_46_SR_FLL_SHIFT)) & CMU_FC_46_SR_FLL_MASK)

#define CMU_FC_46_SR_FHH_MASK                    (0x2U)
#define CMU_FC_46_SR_FHH_SHIFT                   (1U)
#define CMU_FC_46_SR_FHH_WIDTH                   (1U)
#define CMU_FC_46_SR_FHH(x)                      (((uint32_t)(((uint32_t)(x)) << CMU_FC_46_SR_FHH_SHIFT)) & CMU_FC_46_SR_FHH_MASK)

#define CMU_FC_46_SR_RS_MASK                     (0x10U)
#define CMU_FC_46_SR_RS_SHIFT                    (4U)
#define CMU_FC_46_SR_RS_WIDTH                    (1U)
#define CMU_FC_46_SR_RS(x)                       (((uint32_t)(((uint32_t)(x)) << CMU_FC_46_SR_RS_SHIFT)) & CMU_FC_46_SR_RS_MASK)
/*! @} */

/*! @name IER - Interrupt Enable Register */
/*! @{ */

#define CMU_FC_46_IER_FLLIE_MASK                 (0x1U)
#define CMU_FC_46_IER_FLLIE_SHIFT                (0U)
#define CMU_FC_46_IER_FLLIE_WIDTH                (1U)
#define CMU_FC_46_IER_FLLIE(x)                   (((uint32_t)(((uint32_t)(x)) << CMU_FC_46_IER_FLLIE_SHIFT)) & CMU_FC_46_IER_FLLIE_MASK)

#define CMU_FC_46_IER_FHHIE_MASK                 (0x2U)
#define CMU_FC_46_IER_FHHIE_SHIFT                (1U)
#define CMU_FC_46_IER_FHHIE_WIDTH                (1U)
#define CMU_FC_46_IER_FHHIE(x)                   (((uint32_t)(((uint32_t)(x)) << CMU_FC_46_IER_FHHIE_SHIFT)) & CMU_FC_46_IER_FHHIE_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group CMU_FC_46_Register_Masks */

/*!
 * @}
 */ /* end of group CMU_FC_46_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_CMU_FC_46_H_) */
