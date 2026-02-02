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
 * @file S32G399A_SRC_GPR.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_SRC_GPR
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
#if !defined(S32G399A_SRC_GPR_H_)  /* Check if memory map has not been already included */
#define S32G399A_SRC_GPR_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SRC_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SRC_GPR_Peripheral_Access_Layer SRC_GPR Peripheral Access Layer
 * @{
 */

/** SRC_GPR - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[4];
  __IO uint32_t GPR01;                             /**< GPR01 Register, offset: 0x4 */
  uint8_t RESERVED_1[40];
  __IO uint32_t GPR12;                             /**< GPR12 Register, offset: 0x30 */
  uint8_t RESERVED_2[36];
  __I  uint32_t GPR22;                             /**< GPR22 Register, offset: 0x58 */
  uint8_t RESERVED_3[20];
  __IO uint32_t GPR28;                             /**< GPR28 Register, offset: 0x70 */
  __IO uint32_t GPR29;                             /**< GPR29 Register, offset: 0x74 */
} SRC_GPR_Type, *SRC_GPR_MemMapPtr;

/** Number of instances of the SRC_GPR module. */
#define SRC_GPR_INSTANCE_COUNT                   (1u)

/* SRC_GPR - Peripheral instance base addresses */
/** Peripheral SRC_GPR base address */
#define IP_SRC_GPR_BASE                          (0x4007C800u)
/** Peripheral SRC_GPR base pointer */
#define IP_SRC_GPR                               ((SRC_GPR_Type *)IP_SRC_GPR_BASE)
/** Array initializer of SRC_GPR peripheral base addresses */
#define IP_SRC_GPR_BASE_ADDRS                    { IP_SRC_GPR_BASE }
/** Array initializer of SRC_GPR peripheral base pointers */
#define IP_SRC_GPR_BASE_PTRS                     { IP_SRC_GPR }

/* ----------------------------------------------------------------------------
   -- SRC_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SRC_GPR_Register_Masks SRC_GPR Register Masks
 * @{
 */

/*! @name GPR01 - GPR01 Register */
/*! @{ */

#define SRC_GPR_GPR01_GPR01_MASK                 (0xFFFFFFFFU)
#define SRC_GPR_GPR01_GPR01_SHIFT                (0U)
#define SRC_GPR_GPR01_GPR01_WIDTH                (32U)
#define SRC_GPR_GPR01_GPR01(x)                   (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR01_GPR01_SHIFT)) & SRC_GPR_GPR01_GPR01_MASK)
/*! @} */

/*! @name GPR12 - GPR12 Register */
/*! @{ */

#define SRC_GPR_GPR12_PUB_DECODER_MASK           (0x1U)
#define SRC_GPR_GPR12_PUB_DECODER_SHIFT          (0U)
#define SRC_GPR_GPR12_PUB_DECODER_WIDTH          (1U)
#define SRC_GPR_GPR12_PUB_DECODER(x)             (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR12_PUB_DECODER_SHIFT)) & SRC_GPR_GPR12_PUB_DECODER_MASK)

#define SRC_GPR_GPR12_GPR12_MASK                 (0xFFFFFFFEU)
#define SRC_GPR_GPR12_GPR12_SHIFT                (1U)
#define SRC_GPR_GPR12_GPR12_WIDTH                (31U)
#define SRC_GPR_GPR12_GPR12(x)                   (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR12_GPR12_SHIFT)) & SRC_GPR_GPR12_GPR12_MASK)
/*! @} */

/*! @name GPR22 - GPR22 Register */
/*! @{ */

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_a53_cluster0_noncoh_in_safe_full_MASK (0x1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_a53_cluster0_noncoh_in_safe_full_SHIFT (0U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_a53_cluster0_noncoh_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_a53_cluster0_noncoh_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_a53_cluster0_noncoh_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_a53_cluster0_noncoh_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_a53_cluster1_noncoh_in_safe_full_MASK (0x2U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_a53_cluster1_noncoh_in_safe_full_SHIFT (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_a53_cluster1_noncoh_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_a53_cluster1_noncoh_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_a53_cluster1_noncoh_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_a53_cluster1_noncoh_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_concerto_in_safe_full_MASK (0x4U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_concerto_in_safe_full_SHIFT (2U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_concerto_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_concerto_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_concerto_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_concerto_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_edma_0_in_safe_full_MASK (0x8U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_edma_0_in_safe_full_SHIFT (3U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_edma_0_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_edma_0_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_edma_0_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_edma_0_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_edma_1_in_safe_full_MASK (0x10U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_edma_1_in_safe_full_SHIFT (4U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_edma_1_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_edma_1_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_edma_1_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_edma_1_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_ethernet_in_safe_full_MASK (0x20U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_ethernet_in_safe_full_SHIFT (5U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_ethernet_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_ethernet_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_ethernet_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_ethernet_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_fray_in_safe_full_MASK (0x40U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_fray_in_safe_full_SHIFT (6U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_fray_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_fray_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_fray_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_fray_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_llce_in_safe_full_MASK (0x80U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_llce_in_safe_full_SHIFT (7U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_llce_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_llce_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_llce_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_llce_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_ahbp_in_safe_full_MASK (0x100U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_ahbp_in_safe_full_SHIFT (8U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_ahbp_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_ahbp_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_ahbp_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_ahbp_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_0_in_safe_full_MASK (0x200U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_0_in_safe_full_SHIFT (9U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_0_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_0_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_0_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_0_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_1_in_safe_full_MASK (0x400U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_1_in_safe_full_SHIFT (10U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_1_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_1_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_1_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_1_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_2_in_safe_full_MASK (0x800U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_2_in_safe_full_SHIFT (11U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_2_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_2_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_2_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_2_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_3_in_safe_full_MASK (0x1000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_3_in_safe_full_SHIFT (12U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_3_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_3_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_3_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_m7_axi_3_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_off_chassis_in_safe_full_MASK (0x2000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_off_chassis_in_safe_full_SHIFT (13U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_off_chassis_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_off_chassis_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_off_chassis_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_off_chassis_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_safe_full_in_periph_noc_MASK (0x4000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_safe_full_in_periph_noc_SHIFT (14U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_safe_full_in_periph_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_safe_full_in_periph_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_safe_full_in_periph_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_safe_full_in_periph_noc_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_safe_none_in_safe_full_MASK (0x8000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_safe_none_in_safe_full_SHIFT (15U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_safe_none_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_safe_none_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_safe_none_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_from_safe_none_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_gic500_in_safe_full_MASK (0x10000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_gic500_in_safe_full_SHIFT (16U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_gic500_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_gic500_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_gic500_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_gic500_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_hse_in_safe_full_MASK (0x20000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_hse_in_safe_full_SHIFT (17U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_hse_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_hse_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_hse_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_hse_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_ahbp_in_periph_noc_MASK (0x40000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_ahbp_in_periph_noc_SHIFT (18U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_ahbp_in_periph_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_ahbp_in_periph_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_ahbp_in_periph_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_ahbp_in_periph_noc_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_0_in_mem_noc_MASK (0x80000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_0_in_mem_noc_SHIFT (19U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_0_in_mem_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_0_in_mem_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_0_in_mem_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_0_in_mem_noc_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_1_in_mem_noc_MASK (0x100000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_1_in_mem_noc_SHIFT (20U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_1_in_mem_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_1_in_mem_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_1_in_mem_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_1_in_mem_noc_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_2_in_mem_noc_MASK (0x200000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_2_in_mem_noc_SHIFT (21U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_2_in_mem_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_2_in_mem_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_2_in_mem_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_2_in_mem_noc_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_3_in_mem_noc_MASK (0x400000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_3_in_mem_noc_SHIFT (22U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_3_in_mem_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_3_in_mem_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_3_in_mem_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_m7_axi_3_in_mem_noc_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_0_in_mem_noc_MASK (0x800000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_0_in_mem_noc_SHIFT (23U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_0_in_mem_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_0_in_mem_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_0_in_mem_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_0_in_mem_noc_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_1_in_mem_noc_MASK (0x1000000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_1_in_mem_noc_SHIFT (24U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_1_in_mem_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_1_in_mem_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_1_in_mem_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_1_in_mem_noc_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_2_in_mem_noc_MASK (0x2000000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_2_in_mem_noc_SHIFT (25U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_2_in_mem_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_2_in_mem_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_2_in_mem_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_2_in_mem_noc_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_3_in_mem_noc_MASK (0x4000000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_3_in_mem_noc_SHIFT (26U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_3_in_mem_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_3_in_mem_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_3_in_mem_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_mem_3_in_mem_noc_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_dram_0_in_safe_full_MASK (0x8000000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_dram_0_in_safe_full_SHIFT (27U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_dram_0_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_dram_0_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_dram_0_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_dram_0_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_sram_access_0_in_mem_noc_MASK (0x10000000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_sram_access_0_in_mem_noc_SHIFT (28U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_sram_access_0_in_mem_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_sram_access_0_in_mem_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_sram_access_0_in_mem_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_sram_access_0_in_mem_noc_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_to_sram_1_in_mem_noc_MASK (0x20000000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_to_sram_1_in_mem_noc_SHIFT (29U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_to_sram_1_in_mem_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_to_sram_1_in_mem_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_to_sram_1_in_mem_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_off_chassis_to_sram_1_in_mem_noc_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_pcie_in_safe_full_MASK (0x40000000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_pcie_in_safe_full_SHIFT (30U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_pcie_in_safe_full_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_pcie_in_safe_full(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_pcie_in_safe_full_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_m_pcie_in_safe_full_MASK)

#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_safe_register_access_in_periph_noc_MASK (0x80000000U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_safe_register_access_in_periph_noc_SHIFT (31U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_safe_register_access_in_periph_noc_WIDTH (1U)
#define SRC_GPR_GPR22_Initiator_timeout_fault_status_of_safe_register_access_in_periph_noc(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR22_Initiator_timeout_fault_status_of_safe_register_access_in_periph_noc_SHIFT)) & SRC_GPR_GPR22_Initiator_timeout_fault_status_of_safe_register_access_in_periph_noc_MASK)
/*! @} */

/*! @name GPR28 - GPR28 Register */
/*! @{ */

#define SRC_GPR_GPR28_SELF_TEST_IMAGE_SELECT_MASK (0xFFU)
#define SRC_GPR_GPR28_SELF_TEST_IMAGE_SELECT_SHIFT (0U)
#define SRC_GPR_GPR28_SELF_TEST_IMAGE_SELECT_WIDTH (8U)
#define SRC_GPR_GPR28_SELF_TEST_IMAGE_SELECT(x)  (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR28_SELF_TEST_IMAGE_SELECT_SHIFT)) & SRC_GPR_GPR28_SELF_TEST_IMAGE_SELECT_MASK)

#define SRC_GPR_GPR28_DCD_IMAGE_SELECT_MASK      (0xFF00U)
#define SRC_GPR_GPR28_DCD_IMAGE_SELECT_SHIFT     (8U)
#define SRC_GPR_GPR28_DCD_IMAGE_SELECT_WIDTH     (8U)
#define SRC_GPR_GPR28_DCD_IMAGE_SELECT(x)        (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR28_DCD_IMAGE_SELECT_SHIFT)) & SRC_GPR_GPR28_DCD_IMAGE_SELECT_MASK)

#define SRC_GPR_GPR28_APP_IMAGE_SELECT_MASK      (0xFF0000U)
#define SRC_GPR_GPR28_APP_IMAGE_SELECT_SHIFT     (16U)
#define SRC_GPR_GPR28_APP_IMAGE_SELECT_WIDTH     (8U)
#define SRC_GPR_GPR28_APP_IMAGE_SELECT(x)        (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR28_APP_IMAGE_SELECT_SHIFT)) & SRC_GPR_GPR28_APP_IMAGE_SELECT_MASK)

#define SRC_GPR_GPR28_Reserved_MASK              (0xFF000000U)
#define SRC_GPR_GPR28_Reserved_SHIFT             (24U)
#define SRC_GPR_GPR28_Reserved_WIDTH             (8U)
#define SRC_GPR_GPR28_Reserved(x)                (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR28_Reserved_SHIFT)) & SRC_GPR_GPR28_Reserved_MASK)
/*! @} */

/*! @name GPR29 - GPR29 Register */
/*! @{ */

#define SRC_GPR_GPR29_QuadSPI_POR_Delay_Status_MASK (0x1U)
#define SRC_GPR_GPR29_QuadSPI_POR_Delay_Status_SHIFT (0U)
#define SRC_GPR_GPR29_QuadSPI_POR_Delay_Status_WIDTH (1U)
#define SRC_GPR_GPR29_QuadSPI_POR_Delay_Status(x) (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR29_QuadSPI_POR_Delay_Status_SHIFT)) & SRC_GPR_GPR29_QuadSPI_POR_Delay_Status_MASK)

#define SRC_GPR_GPR29_Reserved_MASK              (0xFFFFFFFEU)
#define SRC_GPR_GPR29_Reserved_SHIFT             (1U)
#define SRC_GPR_GPR29_Reserved_WIDTH             (31U)
#define SRC_GPR_GPR29_Reserved(x)                (((uint32_t)(((uint32_t)(x)) << SRC_GPR_GPR29_Reserved_SHIFT)) & SRC_GPR_GPR29_Reserved_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SRC_GPR_Register_Masks */

/*!
 * @}
 */ /* end of group SRC_GPR_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_SRC_GPR_H_) */
