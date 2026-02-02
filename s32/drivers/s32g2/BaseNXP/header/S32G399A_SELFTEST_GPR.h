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
 * @file S32G399A_SELFTEST_GPR.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_SELFTEST_GPR
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
#if !defined(S32G399A_SELFTEST_GPR_H_)  /* Check if memory map has not been already included */
#define S32G399A_SELFTEST_GPR_H_

#include "S32G399A_COMMON.h"

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
#define SELFTEST_GPR_INSTANCE_COUNT              (64u)

/* SELFTEST_GPR - Peripheral instance base addresses */
/** Peripheral SELFTEST_GPR_CHIPTOP base address */
#define IP_SELFTEST_GPR_CHIPTOP_BASE             (0x4001C8A0u)
/** Peripheral SELFTEST_GPR_CHIPTOP base pointer */
#define IP_SELFTEST_GPR_CHIPTOP                  ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CHIPTOP_BASE)
/** Peripheral SELFTEST_GPR_CLUSTER0_CPU0 base address */
#define IP_SELFTEST_GPR_CLUSTER0_CPU0_BASE       (0x4001C0A0u)
/** Peripheral SELFTEST_GPR_CLUSTER0_CPU0 base pointer */
#define IP_SELFTEST_GPR_CLUSTER0_CPU0            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CLUSTER0_CPU0_BASE)
/** Peripheral SELFTEST_GPR_CLUSTER0_CPU1 base address */
#define IP_SELFTEST_GPR_CLUSTER0_CPU1_BASE       (0x4001C0C0u)
/** Peripheral SELFTEST_GPR_CLUSTER0_CPU1 base pointer */
#define IP_SELFTEST_GPR_CLUSTER0_CPU1            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CLUSTER0_CPU1_BASE)
/** Peripheral SELFTEST_GPR_CLUSTER0_CPU2 base address */
#define IP_SELFTEST_GPR_CLUSTER0_CPU2_BASE       (0x4001C0E0u)
/** Peripheral SELFTEST_GPR_CLUSTER0_CPU2 base pointer */
#define IP_SELFTEST_GPR_CLUSTER0_CPU2            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CLUSTER0_CPU2_BASE)
/** Peripheral SELFTEST_GPR_CLUSTER0_CPU3 base address */
#define IP_SELFTEST_GPR_CLUSTER0_CPU3_BASE       (0x4001C100u)
/** Peripheral SELFTEST_GPR_CLUSTER0_CPU3 base pointer */
#define IP_SELFTEST_GPR_CLUSTER0_CPU3            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CLUSTER0_CPU3_BASE)
/** Peripheral SELFTEST_GPR_CLUSTER0_GIC0 base address */
#define IP_SELFTEST_GPR_CLUSTER0_GIC0_BASE       (0x4001C120u)
/** Peripheral SELFTEST_GPR_CLUSTER0_GIC0 base pointer */
#define IP_SELFTEST_GPR_CLUSTER0_GIC0            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CLUSTER0_GIC0_BASE)
/** Peripheral SELFTEST_GPR_CLUSTER1_CPU0 base address */
#define IP_SELFTEST_GPR_CLUSTER1_CPU0_BASE       (0x4001C140u)
/** Peripheral SELFTEST_GPR_CLUSTER1_CPU0 base pointer */
#define IP_SELFTEST_GPR_CLUSTER1_CPU0            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CLUSTER1_CPU0_BASE)
/** Peripheral SELFTEST_GPR_CLUSTER1_CPU1 base address */
#define IP_SELFTEST_GPR_CLUSTER1_CPU1_BASE       (0x4001C160u)
/** Peripheral SELFTEST_GPR_CLUSTER1_CPU1 base pointer */
#define IP_SELFTEST_GPR_CLUSTER1_CPU1            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CLUSTER1_CPU1_BASE)
/** Peripheral SELFTEST_GPR_CLUSTER1_CPU2 base address */
#define IP_SELFTEST_GPR_CLUSTER1_CPU2_BASE       (0x4001C180u)
/** Peripheral SELFTEST_GPR_CLUSTER1_CPU2 base pointer */
#define IP_SELFTEST_GPR_CLUSTER1_CPU2            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CLUSTER1_CPU2_BASE)
/** Peripheral SELFTEST_GPR_CLUSTER1_CPU3 base address */
#define IP_SELFTEST_GPR_CLUSTER1_CPU3_BASE       (0x4001C1A0u)
/** Peripheral SELFTEST_GPR_CLUSTER1_CPU3 base pointer */
#define IP_SELFTEST_GPR_CLUSTER1_CPU3            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CLUSTER1_CPU3_BASE)
/** Peripheral SELFTEST_GPR_CLUSTER1_GIC1 base address */
#define IP_SELFTEST_GPR_CLUSTER1_GIC1_BASE       (0x4001C1C0u)
/** Peripheral SELFTEST_GPR_CLUSTER1_GIC1 base pointer */
#define IP_SELFTEST_GPR_CLUSTER1_GIC1            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CLUSTER1_GIC1_BASE)
/** Peripheral SELFTEST_GPR_CM7_CLUSTER_0 base address */
#define IP_SELFTEST_GPR_CM7_CLUSTER_0_BASE       (0x4001C1E0u)
/** Peripheral SELFTEST_GPR_CM7_CLUSTER_0 base pointer */
#define IP_SELFTEST_GPR_CM7_CLUSTER_0            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CM7_CLUSTER_0_BASE)
/** Peripheral SELFTEST_GPR_CM7_CLUSTER_1 base address */
#define IP_SELFTEST_GPR_CM7_CLUSTER_1_BASE       (0x4001C200u)
/** Peripheral SELFTEST_GPR_CM7_CLUSTER_1 base pointer */
#define IP_SELFTEST_GPR_CM7_CLUSTER_1            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CM7_CLUSTER_1_BASE)
/** Peripheral SELFTEST_GPR_CM7_CLUSTER_2 base address */
#define IP_SELFTEST_GPR_CM7_CLUSTER_2_BASE       (0x4001C220u)
/** Peripheral SELFTEST_GPR_CM7_CLUSTER_2 base pointer */
#define IP_SELFTEST_GPR_CM7_CLUSTER_2            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CM7_CLUSTER_2_BASE)
/** Peripheral SELFTEST_GPR_CM7_CLUSTER_3 base address */
#define IP_SELFTEST_GPR_CM7_CLUSTER_3_BASE       (0x4001C240u)
/** Peripheral SELFTEST_GPR_CM7_CLUSTER_3 base pointer */
#define IP_SELFTEST_GPR_CM7_CLUSTER_3            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_CM7_CLUSTER_3_BASE)
/** Peripheral SELFTEST_GPR_DDR base address */
#define IP_SELFTEST_GPR_DDR_BASE                 (0x4001C3E0u)
/** Peripheral SELFTEST_GPR_DDR base pointer */
#define IP_SELFTEST_GPR_DDR                      ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_DDR_BASE)
/** Peripheral SELFTEST_GPR_DDR0 base address */
#define IP_SELFTEST_GPR_DDR0_BASE                (0x4001C480u)
/** Peripheral SELFTEST_GPR_DDR0 base pointer */
#define IP_SELFTEST_GPR_DDR0                     ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_DDR0_BASE)
/** Peripheral SELFTEST_GPR_DDR_SS base address */
#define IP_SELFTEST_GPR_DDR_SS_BASE              (0x4001C040u)
/** Peripheral SELFTEST_GPR_DDR_SS base pointer */
#define IP_SELFTEST_GPR_DDR_SS                   ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_DDR_SS_BASE)
/** Peripheral SELFTEST_GPR_DDR_SS1 base address */
#define IP_SELFTEST_GPR_DDR_SS1_BASE             (0x4001C060u)
/** Peripheral SELFTEST_GPR_DDR_SS1 base pointer */
#define IP_SELFTEST_GPR_DDR_SS1                  ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_DDR_SS1_BASE)
/** Peripheral SELFTEST_GPR_DDR_SS2 base address */
#define IP_SELFTEST_GPR_DDR_SS2_BASE             (0x4001C080u)
/** Peripheral SELFTEST_GPR_DDR_SS2 base pointer */
#define IP_SELFTEST_GPR_DDR_SS2                  ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_DDR_SS2_BASE)
/** Peripheral SELFTEST_GPR_FULL_CHECKER base address */
#define IP_SELFTEST_GPR_FULL_CHECKER_BASE        (0x4001C340u)
/** Peripheral SELFTEST_GPR_FULL_CHECKER base pointer */
#define IP_SELFTEST_GPR_FULL_CHECKER             ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_FULL_CHECKER_BASE)
/** Peripheral SELFTEST_GPR_FULL_HYBRID base address */
#define IP_SELFTEST_GPR_FULL_HYBRID_BASE         (0x4001CC80u)
/** Peripheral SELFTEST_GPR_FULL_HYBRID base pointer */
#define IP_SELFTEST_GPR_FULL_HYBRID              ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_FULL_HYBRID_BASE)
/** Peripheral SELFTEST_GPR_FULL_OFFCC base address */
#define IP_SELFTEST_GPR_FULL_OFFCC_BASE          (0x4001C460u)
/** Peripheral SELFTEST_GPR_FULL_OFFCC base pointer */
#define IP_SELFTEST_GPR_FULL_OFFCC               ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_FULL_OFFCC_BASE)
/** Peripheral SELFTEST_GPR_FULL_PRIME base address */
#define IP_SELFTEST_GPR_FULL_PRIME_BASE          (0x4001C320u)
/** Peripheral SELFTEST_GPR_FULL_PRIME base pointer */
#define IP_SELFTEST_GPR_FULL_PRIME               ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_FULL_PRIME_BASE)
/** Peripheral SELFTEST_GPR_HSE_LLCE base address */
#define IP_SELFTEST_GPR_HSE_LLCE_BASE            (0x4001C4A0u)
/** Peripheral SELFTEST_GPR_HSE_LLCE base pointer */
#define IP_SELFTEST_GPR_HSE_LLCE                 ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_HSE_LLCE_BASE)
/** Peripheral SELFTEST_GPR_HSE_RUN base address */
#define IP_SELFTEST_GPR_HSE_RUN_BASE             (0x4001C000u)
/** Peripheral SELFTEST_GPR_HSE_RUN base pointer */
#define IP_SELFTEST_GPR_HSE_RUN                  ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_HSE_RUN_BASE)
/** Peripheral SELFTEST_GPR_HSIO_ENET base address */
#define IP_SELFTEST_GPR_HSIO_ENET_BASE           (0x4001C360u)
/** Peripheral SELFTEST_GPR_HSIO_ENET base pointer */
#define IP_SELFTEST_GPR_HSIO_ENET                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_HSIO_ENET_BASE)
/** Peripheral SELFTEST_GPR_HSIO_SDHCQSPI base address */
#define IP_SELFTEST_GPR_HSIO_SDHCQSPI_BASE       (0x4001C380u)
/** Peripheral SELFTEST_GPR_HSIO_SDHCQSPI base pointer */
#define IP_SELFTEST_GPR_HSIO_SDHCQSPI            ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_HSIO_SDHCQSPI_BASE)
/** Peripheral SELFTEST_GPR_HYBRID_SCAN base address */
#define IP_SELFTEST_GPR_HYBRID_SCAN_BASE         (0x4001CD20u)
/** Peripheral SELFTEST_GPR_HYBRID_SCAN base pointer */
#define IP_SELFTEST_GPR_HYBRID_SCAN              ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_HYBRID_SCAN_BASE)
/** Peripheral SELFTEST_GPR_LLCE_LBIST base address */
#define IP_SELFTEST_GPR_LLCE_LBIST_BASE          (0x4001C760u)
/** Peripheral SELFTEST_GPR_LLCE_LBIST base pointer */
#define IP_SELFTEST_GPR_LLCE_LBIST               ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_LLCE_LBIST_BASE)
/** Peripheral SELFTEST_GPR_LLCE_PART1 base address */
#define IP_SELFTEST_GPR_LLCE_PART1_BASE          (0x4001C600u)
/** Peripheral SELFTEST_GPR_LLCE_PART1 base pointer */
#define IP_SELFTEST_GPR_LLCE_PART1               ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_LLCE_PART1_BASE)
/** Peripheral SELFTEST_GPR_LLCE_PART2 base address */
#define IP_SELFTEST_GPR_LLCE_PART2_BASE          (0x4001C620u)
/** Peripheral SELFTEST_GPR_LLCE_PART2 base pointer */
#define IP_SELFTEST_GPR_LLCE_PART2               ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_LLCE_PART2_BASE)
/** Peripheral SELFTEST_GPR_LS_CHECKER base address */
#define IP_SELFTEST_GPR_LS_CHECKER_BASE          (0x4001C3C0u)
/** Peripheral SELFTEST_GPR_LS_CHECKER base pointer */
#define IP_SELFTEST_GPR_LS_CHECKER               ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_LS_CHECKER_BASE)
/** Peripheral SELFTEST_GPR_LS_HYBRID base address */
#define IP_SELFTEST_GPR_LS_HYBRID_BASE           (0x4001CCC0u)
/** Peripheral SELFTEST_GPR_LS_HYBRID base pointer */
#define IP_SELFTEST_GPR_LS_HYBRID                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_LS_HYBRID_BASE)
/** Peripheral SELFTEST_GPR_LS_PRIME base address */
#define IP_SELFTEST_GPR_LS_PRIME_BASE            (0x4001C3A0u)
/** Peripheral SELFTEST_GPR_LS_PRIME base pointer */
#define IP_SELFTEST_GPR_LS_PRIME                 ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_LS_PRIME_BASE)
/** Peripheral SELFTEST_GPR_MEM_NOC_0 base address */
#define IP_SELFTEST_GPR_MEM_NOC_0_BASE           (0x4001C6E0u)
/** Peripheral SELFTEST_GPR_MEM_NOC_0 base pointer */
#define IP_SELFTEST_GPR_MEM_NOC_0                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_MEM_NOC_0_BASE)
/** Peripheral SELFTEST_GPR_MEM_NOC_1 base address */
#define IP_SELFTEST_GPR_MEM_NOC_1_BASE           (0x4001C700u)
/** Peripheral SELFTEST_GPR_MEM_NOC_1 base pointer */
#define IP_SELFTEST_GPR_MEM_NOC_1                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_MEM_NOC_1_BASE)
/** Peripheral SELFTEST_GPR_MEM_NOC_2 base address */
#define IP_SELFTEST_GPR_MEM_NOC_2_BASE           (0x4001C720u)
/** Peripheral SELFTEST_GPR_MEM_NOC_2 base pointer */
#define IP_SELFTEST_GPR_MEM_NOC_2                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_MEM_NOC_2_BASE)
/** Peripheral SELFTEST_GPR_MEM_NOC_3 base address */
#define IP_SELFTEST_GPR_MEM_NOC_3_BASE           (0x4001C740u)
/** Peripheral SELFTEST_GPR_MEM_NOC_3 base pointer */
#define IP_SELFTEST_GPR_MEM_NOC_3                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_MEM_NOC_3_BASE)
/** Peripheral SELFTEST_GPR_MISC base address */
#define IP_SELFTEST_GPR_MISC_BASE                (0x4001C6C0u)
/** Peripheral SELFTEST_GPR_MISC base pointer */
#define IP_SELFTEST_GPR_MISC                     ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_MISC_BASE)
/** Peripheral SELFTEST_GPR_NCORE_0 base address */
#define IP_SELFTEST_GPR_NCORE_0_BASE             (0x4001C400u)
/** Peripheral SELFTEST_GPR_NCORE_0 base pointer */
#define IP_SELFTEST_GPR_NCORE_0                  ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NCORE_0_BASE)
/** Peripheral SELFTEST_GPR_NCORE_1 base address */
#define IP_SELFTEST_GPR_NCORE_1_BASE             (0x4001C420u)
/** Peripheral SELFTEST_GPR_NCORE_1 base pointer */
#define IP_SELFTEST_GPR_NCORE_1                  ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NCORE_1_BASE)
/** Peripheral SELFTEST_GPR_NIU base address */
#define IP_SELFTEST_GPR_NIU_BASE                 (0x4001CCA0u)
/** Peripheral SELFTEST_GPR_NIU base pointer */
#define IP_SELFTEST_GPR_NIU                      ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NIU_BASE)
/** Peripheral SELFTEST_GPR_NOC0_HYBRID base address */
#define IP_SELFTEST_GPR_NOC0_HYBRID_BASE         (0x4001CCE0u)
/** Peripheral SELFTEST_GPR_NOC0_HYBRID base pointer */
#define IP_SELFTEST_GPR_NOC0_HYBRID              ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC0_HYBRID_BASE)
/** Peripheral SELFTEST_GPR_NOC0_LBIST base address */
#define IP_SELFTEST_GPR_NOC0_LBIST_BASE          (0x4001C300u)
/** Peripheral SELFTEST_GPR_NOC0_LBIST base pointer */
#define IP_SELFTEST_GPR_NOC0_LBIST               ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC0_LBIST_BASE)
/** Peripheral SELFTEST_GPR_NOC1_HYBRID base address */
#define IP_SELFTEST_GPR_NOC1_HYBRID_BASE         (0x4001CD00u)
/** Peripheral SELFTEST_GPR_NOC1_HYBRID base pointer */
#define IP_SELFTEST_GPR_NOC1_HYBRID              ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC1_HYBRID_BASE)
/** Peripheral SELFTEST_GPR_NOC1_LBIST base address */
#define IP_SELFTEST_GPR_NOC1_LBIST_BASE          (0x4001C2C0u)
/** Peripheral SELFTEST_GPR_NOC1_LBIST base pointer */
#define IP_SELFTEST_GPR_NOC1_LBIST               ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC1_LBIST_BASE)
/** Peripheral SELFTEST_GPR_NOC2_HYBRID base address */
#define IP_SELFTEST_GPR_NOC2_HYBRID_BASE         (0x4001CD40u)
/** Peripheral SELFTEST_GPR_NOC2_HYBRID base pointer */
#define IP_SELFTEST_GPR_NOC2_HYBRID              ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC2_HYBRID_BASE)
/** Peripheral SELFTEST_GPR_NOC2_LBIST base address */
#define IP_SELFTEST_GPR_NOC2_LBIST_BASE          (0x4001C2E0u)
/** Peripheral SELFTEST_GPR_NOC2_LBIST base pointer */
#define IP_SELFTEST_GPR_NOC2_LBIST               ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC2_LBIST_BASE)
/** Peripheral SELFTEST_GPR_NOC3_HYBRID base address */
#define IP_SELFTEST_GPR_NOC3_HYBRID_BASE         (0x4001CD60u)
/** Peripheral SELFTEST_GPR_NOC3_HYBRID base pointer */
#define IP_SELFTEST_GPR_NOC3_HYBRID              ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC3_HYBRID_BASE)
/** Peripheral SELFTEST_GPR_NOC3_LBIST base address */
#define IP_SELFTEST_GPR_NOC3_LBIST_BASE          (0x4001C300u)
/** Peripheral SELFTEST_GPR_NOC3_LBIST base pointer */
#define IP_SELFTEST_GPR_NOC3_LBIST               ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC3_LBIST_BASE)
/** Peripheral SELFTEST_GPR_NOC_PART1 base address */
#define IP_SELFTEST_GPR_NOC_PART1_BASE           (0x4001C6A0u)
/** Peripheral SELFTEST_GPR_NOC_PART1 base pointer */
#define IP_SELFTEST_GPR_NOC_PART1                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC_PART1_BASE)
/** Peripheral SELFTEST_GPR_NOC_PART2 base address */
#define IP_SELFTEST_GPR_NOC_PART2_BASE           (0x4001C680u)
/** Peripheral SELFTEST_GPR_NOC_PART2 base pointer */
#define IP_SELFTEST_GPR_NOC_PART2                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC_PART2_BASE)
/** Peripheral SELFTEST_GPR_NOC_PART3 base address */
#define IP_SELFTEST_GPR_NOC_PART3_BASE           (0x4001C660u)
/** Peripheral SELFTEST_GPR_NOC_PART3 base pointer */
#define IP_SELFTEST_GPR_NOC_PART3                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC_PART3_BASE)
/** Peripheral SELFTEST_GPR_NOC_PART4 base address */
#define IP_SELFTEST_GPR_NOC_PART4_BASE           (0x4001C640u)
/** Peripheral SELFTEST_GPR_NOC_PART4 base pointer */
#define IP_SELFTEST_GPR_NOC_PART4                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_NOC_PART4_BASE)
/** Peripheral SELFTEST_GPR_PCIE base address */
#define IP_SELFTEST_GPR_PCIE_BASE                (0x4001C020u)
/** Peripheral SELFTEST_GPR_PCIE base pointer */
#define IP_SELFTEST_GPR_PCIE                     ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_PCIE_BASE)
/** Peripheral SELFTEST_GPR_PCIE_SS base address */
#define IP_SELFTEST_GPR_PCIE_SS_BASE             (0x4001C5E0u)
/** Peripheral SELFTEST_GPR_PCIE_SS base pointer */
#define IP_SELFTEST_GPR_PCIE_SS                  ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_PCIE_SS_BASE)
/** Peripheral SELFTEST_GPR_PFE_PART1 base address */
#define IP_SELFTEST_GPR_PFE_PART1_BASE           (0x4001C580u)
/** Peripheral SELFTEST_GPR_PFE_PART1 base pointer */
#define IP_SELFTEST_GPR_PFE_PART1                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_PFE_PART1_BASE)
/** Peripheral SELFTEST_GPR_PFE_PART2 base address */
#define IP_SELFTEST_GPR_PFE_PART2_BASE           (0x4001C5A0u)
/** Peripheral SELFTEST_GPR_PFE_PART2 base pointer */
#define IP_SELFTEST_GPR_PFE_PART2                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_PFE_PART2_BASE)
/** Peripheral SELFTEST_GPR_PFE_PART3 base address */
#define IP_SELFTEST_GPR_PFE_PART3_BASE           (0x4001C5C0u)
/** Peripheral SELFTEST_GPR_PFE_PART3 base pointer */
#define IP_SELFTEST_GPR_PFE_PART3                ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_PFE_PART3_BASE)
/** Peripheral SELFTEST_GPR_REST base address */
#define IP_SELFTEST_GPR_REST_BASE                (0x4001C440u)
/** Peripheral SELFTEST_GPR_REST base pointer */
#define IP_SELFTEST_GPR_REST                     ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_REST_BASE)
/** Peripheral SELFTEST_GPR_REST_CHECKER base address */
#define IP_SELFTEST_GPR_REST_CHECKER_BASE        (0x4001C2A0u)
/** Peripheral SELFTEST_GPR_REST_CHECKER base pointer */
#define IP_SELFTEST_GPR_REST_CHECKER             ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_REST_CHECKER_BASE)
/** Peripheral SELFTEST_GPR_REST_LBIST base address */
#define IP_SELFTEST_GPR_REST_LBIST_BASE          (0x4001C260u)
/** Peripheral SELFTEST_GPR_REST_LBIST base pointer */
#define IP_SELFTEST_GPR_REST_LBIST               ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_REST_LBIST_BASE)
/** Peripheral SELFTEST_GPR_SAFE_FULL_DOMAIN_PARTITION base address */
#define IP_SELFTEST_GPR_SAFE_FULL_DOMAIN_PARTITION_BASE (0x4001C780u)
/** Peripheral SELFTEST_GPR_SAFE_FULL_DOMAIN_PARTITION base pointer */
#define IP_SELFTEST_GPR_SAFE_FULL_DOMAIN_PARTITION ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_SAFE_FULL_DOMAIN_PARTITION_BASE)
/** Array initializer of SELFTEST_GPR peripheral base addresses */
#define IP_SELFTEST_GPR_BASE_ADDRS               { IP_SELFTEST_GPR_CHIPTOP_BASE, IP_SELFTEST_GPR_CLUSTER0_CPU0_BASE, IP_SELFTEST_GPR_CLUSTER0_CPU1_BASE, IP_SELFTEST_GPR_CLUSTER0_CPU2_BASE, IP_SELFTEST_GPR_CLUSTER0_CPU3_BASE, IP_SELFTEST_GPR_CLUSTER0_GIC0_BASE, IP_SELFTEST_GPR_CLUSTER1_CPU0_BASE, IP_SELFTEST_GPR_CLUSTER1_CPU1_BASE, IP_SELFTEST_GPR_CLUSTER1_CPU2_BASE, IP_SELFTEST_GPR_CLUSTER1_CPU3_BASE, IP_SELFTEST_GPR_CLUSTER1_GIC1_BASE, IP_SELFTEST_GPR_CM7_CLUSTER_0_BASE, IP_SELFTEST_GPR_CM7_CLUSTER_1_BASE, IP_SELFTEST_GPR_CM7_CLUSTER_2_BASE, IP_SELFTEST_GPR_CM7_CLUSTER_3_BASE, IP_SELFTEST_GPR_DDR_BASE, IP_SELFTEST_GPR_DDR0_BASE, IP_SELFTEST_GPR_DDR_SS_BASE, IP_SELFTEST_GPR_DDR_SS1_BASE, IP_SELFTEST_GPR_DDR_SS2_BASE, IP_SELFTEST_GPR_FULL_CHECKER_BASE, IP_SELFTEST_GPR_FULL_HYBRID_BASE, IP_SELFTEST_GPR_FULL_OFFCC_BASE, IP_SELFTEST_GPR_FULL_PRIME_BASE, IP_SELFTEST_GPR_HSE_LLCE_BASE, IP_SELFTEST_GPR_HSE_RUN_BASE, IP_SELFTEST_GPR_HSIO_ENET_BASE, IP_SELFTEST_GPR_HSIO_SDHCQSPI_BASE, IP_SELFTEST_GPR_HYBRID_SCAN_BASE, IP_SELFTEST_GPR_LLCE_LBIST_BASE, IP_SELFTEST_GPR_LLCE_PART1_BASE, IP_SELFTEST_GPR_LLCE_PART2_BASE, IP_SELFTEST_GPR_LS_CHECKER_BASE, IP_SELFTEST_GPR_LS_HYBRID_BASE, IP_SELFTEST_GPR_LS_PRIME_BASE, IP_SELFTEST_GPR_MEM_NOC_0_BASE, IP_SELFTEST_GPR_MEM_NOC_1_BASE, IP_SELFTEST_GPR_MEM_NOC_2_BASE, IP_SELFTEST_GPR_MEM_NOC_3_BASE, IP_SELFTEST_GPR_MISC_BASE, IP_SELFTEST_GPR_NCORE_0_BASE, IP_SELFTEST_GPR_NCORE_1_BASE, IP_SELFTEST_GPR_NIU_BASE, IP_SELFTEST_GPR_NOC0_HYBRID_BASE, IP_SELFTEST_GPR_NOC0_LBIST_BASE, IP_SELFTEST_GPR_NOC1_HYBRID_BASE, IP_SELFTEST_GPR_NOC1_LBIST_BASE, IP_SELFTEST_GPR_NOC2_HYBRID_BASE, IP_SELFTEST_GPR_NOC2_LBIST_BASE, IP_SELFTEST_GPR_NOC3_HYBRID_BASE, IP_SELFTEST_GPR_NOC3_LBIST_BASE, IP_SELFTEST_GPR_NOC_PART1_BASE, IP_SELFTEST_GPR_NOC_PART2_BASE, IP_SELFTEST_GPR_NOC_PART3_BASE, IP_SELFTEST_GPR_NOC_PART4_BASE, IP_SELFTEST_GPR_PCIE_BASE, IP_SELFTEST_GPR_PCIE_SS_BASE, IP_SELFTEST_GPR_PFE_PART1_BASE, IP_SELFTEST_GPR_PFE_PART2_BASE, IP_SELFTEST_GPR_PFE_PART3_BASE, IP_SELFTEST_GPR_REST_BASE, IP_SELFTEST_GPR_REST_CHECKER_BASE, IP_SELFTEST_GPR_REST_LBIST_BASE, IP_SELFTEST_GPR_SAFE_FULL_DOMAIN_PARTITION_BASE }
/** Array initializer of SELFTEST_GPR peripheral base pointers */
#define IP_SELFTEST_GPR_BASE_PTRS                { IP_SELFTEST_GPR_CHIPTOP, IP_SELFTEST_GPR_CLUSTER0_CPU0, IP_SELFTEST_GPR_CLUSTER0_CPU1, IP_SELFTEST_GPR_CLUSTER0_CPU2, IP_SELFTEST_GPR_CLUSTER0_CPU3, IP_SELFTEST_GPR_CLUSTER0_GIC0, IP_SELFTEST_GPR_CLUSTER1_CPU0, IP_SELFTEST_GPR_CLUSTER1_CPU1, IP_SELFTEST_GPR_CLUSTER1_CPU2, IP_SELFTEST_GPR_CLUSTER1_CPU3, IP_SELFTEST_GPR_CLUSTER1_GIC1, IP_SELFTEST_GPR_CM7_CLUSTER_0, IP_SELFTEST_GPR_CM7_CLUSTER_1, IP_SELFTEST_GPR_CM7_CLUSTER_2, IP_SELFTEST_GPR_CM7_CLUSTER_3, IP_SELFTEST_GPR_DDR, IP_SELFTEST_GPR_DDR0, IP_SELFTEST_GPR_DDR_SS, IP_SELFTEST_GPR_DDR_SS1, IP_SELFTEST_GPR_DDR_SS2, IP_SELFTEST_GPR_FULL_CHECKER, IP_SELFTEST_GPR_FULL_HYBRID, IP_SELFTEST_GPR_FULL_OFFCC, IP_SELFTEST_GPR_FULL_PRIME, IP_SELFTEST_GPR_HSE_LLCE, IP_SELFTEST_GPR_HSE_RUN, IP_SELFTEST_GPR_HSIO_ENET, IP_SELFTEST_GPR_HSIO_SDHCQSPI, IP_SELFTEST_GPR_HYBRID_SCAN, IP_SELFTEST_GPR_LLCE_LBIST, IP_SELFTEST_GPR_LLCE_PART1, IP_SELFTEST_GPR_LLCE_PART2, IP_SELFTEST_GPR_LS_CHECKER, IP_SELFTEST_GPR_LS_HYBRID, IP_SELFTEST_GPR_LS_PRIME, IP_SELFTEST_GPR_MEM_NOC_0, IP_SELFTEST_GPR_MEM_NOC_1, IP_SELFTEST_GPR_MEM_NOC_2, IP_SELFTEST_GPR_MEM_NOC_3, IP_SELFTEST_GPR_MISC, IP_SELFTEST_GPR_NCORE_0, IP_SELFTEST_GPR_NCORE_1, IP_SELFTEST_GPR_NIU, IP_SELFTEST_GPR_NOC0_HYBRID, IP_SELFTEST_GPR_NOC0_LBIST, IP_SELFTEST_GPR_NOC1_HYBRID, IP_SELFTEST_GPR_NOC1_LBIST, IP_SELFTEST_GPR_NOC2_HYBRID, IP_SELFTEST_GPR_NOC2_LBIST, IP_SELFTEST_GPR_NOC3_HYBRID, IP_SELFTEST_GPR_NOC3_LBIST, IP_SELFTEST_GPR_NOC_PART1, IP_SELFTEST_GPR_NOC_PART2, IP_SELFTEST_GPR_NOC_PART3, IP_SELFTEST_GPR_NOC_PART4, IP_SELFTEST_GPR_PCIE, IP_SELFTEST_GPR_PCIE_SS, IP_SELFTEST_GPR_PFE_PART1, IP_SELFTEST_GPR_PFE_PART2, IP_SELFTEST_GPR_PFE_PART3, IP_SELFTEST_GPR_REST, IP_SELFTEST_GPR_REST_CHECKER, IP_SELFTEST_GPR_REST_LBIST, IP_SELFTEST_GPR_SAFE_FULL_DOMAIN_PARTITION }

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

#endif  /* #if !defined(S32G399A_SELFTEST_GPR_H_) */
