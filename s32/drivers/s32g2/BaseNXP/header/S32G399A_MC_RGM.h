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
 * @file S32G399A_MC_RGM.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_MC_RGM
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
#if !defined(S32G399A_MC_RGM_H_)  /* Check if memory map has not been already included */
#define S32G399A_MC_RGM_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- MC_RGM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MC_RGM_Peripheral_Access_Layer MC_RGM Peripheral Access Layer
 * @{
 */

/** MC_RGM - Size of Registers Arrays */
#define MC_RGM_PRST_0_COUNT                       8u
#define MC_RGM_PSTAT_0_COUNT                      8u

/** MC_RGM - Register Layout Typedef */
typedef struct {
  __IO uint32_t DES;                               /**< Destructive Event Status Register, offset: 0x0 */
  uint8_t RESERVED_0[4];
  __IO uint32_t FES;                               /**< Functional /External Reset Status Register, offset: 0x8 */
  __IO uint32_t FERD;                              /**< Functional Event Reset Disable Register, offset: 0xC */
  uint8_t RESERVED_1[4];
  __IO uint32_t FREC;                              /**< Functional Reset Escalation Counter Register, offset: 0x14 */
  __IO uint32_t FRET;                              /**< Functional Reset Escalation Threshold Register, offset: 0x18 */
  __IO uint32_t DRET;                              /**< Destructive Reset Escalation Threshold Register, offset: 0x1C */
  __IO uint32_t ERCTRL;                            /**< External Reset Control Register, offset: 0x20 */
  __IO uint32_t RDSS;                              /**< Reset During Standby Status Register, offset: 0x24 */
  uint8_t RESERVED_2[24];
  struct {                                         /* offset: 0x40, array step: 0x8 */
    __IO uint32_t PRST_0;                            /**< Peripheral Reset, array offset: 0x40, array step: 0x8 */
    uint8_t RESERVED_0[4];
  } PRST_0[MC_RGM_PRST_0_COUNT];
  uint8_t RESERVED_3[192];
  struct {                                         /* offset: 0x140, array step: 0x8 */
    __I  uint32_t PSTAT_0;                           /**< Peripheral Reset Status Register, array offset: 0x140, array step: 0x8 */
    uint8_t RESERVED_0[4];
  } PSTAT_0[MC_RGM_PSTAT_0_COUNT];
} MC_RGM_Type, *MC_RGM_MemMapPtr;

/** Number of instances of the MC_RGM module. */
#define MC_RGM_INSTANCE_COUNT                    (1u)

/* MC_RGM - Peripheral instance base addresses */
/** Peripheral MC_RGM base address */
#define IP_MC_RGM_BASE                           (0x40078000u)
/** Peripheral MC_RGM base pointer */
#define IP_MC_RGM                                ((MC_RGM_Type *)IP_MC_RGM_BASE)
/** Array initializer of MC_RGM peripheral base addresses */
#define IP_MC_RGM_BASE_ADDRS                     { IP_MC_RGM_BASE }
/** Array initializer of MC_RGM peripheral base pointers */
#define IP_MC_RGM_BASE_PTRS                      { IP_MC_RGM }

/* ----------------------------------------------------------------------------
   -- MC_RGM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MC_RGM_Register_Masks MC_RGM Register Masks
 * @{
 */

/*! @name DES - Destructive Event Status Register */
/*! @{ */

#define MC_RGM_DES_F_POR_MASK                    (0x1U)
#define MC_RGM_DES_F_POR_SHIFT                   (0U)
#define MC_RGM_DES_F_POR_WIDTH                   (1U)
#define MC_RGM_DES_F_POR(x)                      (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_POR_SHIFT)) & MC_RGM_DES_F_POR_MASK)

#define MC_RGM_DES_F_DR_1_MASK                   (0x2U)
#define MC_RGM_DES_F_DR_1_SHIFT                  (1U)
#define MC_RGM_DES_F_DR_1_WIDTH                  (1U)
#define MC_RGM_DES_F_DR_1(x)                     (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_1_SHIFT)) & MC_RGM_DES_F_DR_1_MASK)

#define MC_RGM_DES_F_DR_3_MASK                   (0x8U)
#define MC_RGM_DES_F_DR_3_SHIFT                  (3U)
#define MC_RGM_DES_F_DR_3_WIDTH                  (1U)
#define MC_RGM_DES_F_DR_3(x)                     (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_3_SHIFT)) & MC_RGM_DES_F_DR_3_MASK)

#define MC_RGM_DES_F_DR_4_MASK                   (0x10U)
#define MC_RGM_DES_F_DR_4_SHIFT                  (4U)
#define MC_RGM_DES_F_DR_4_WIDTH                  (1U)
#define MC_RGM_DES_F_DR_4(x)                     (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_4_SHIFT)) & MC_RGM_DES_F_DR_4_MASK)

#define MC_RGM_DES_F_DR_6_MASK                   (0x40U)
#define MC_RGM_DES_F_DR_6_SHIFT                  (6U)
#define MC_RGM_DES_F_DR_6_WIDTH                  (1U)
#define MC_RGM_DES_F_DR_6(x)                     (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_6_SHIFT)) & MC_RGM_DES_F_DR_6_MASK)

#define MC_RGM_DES_F_DR_8_MASK                   (0x100U)
#define MC_RGM_DES_F_DR_8_SHIFT                  (8U)
#define MC_RGM_DES_F_DR_8_WIDTH                  (1U)
#define MC_RGM_DES_F_DR_8(x)                     (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_8_SHIFT)) & MC_RGM_DES_F_DR_8_MASK)

#define MC_RGM_DES_F_DR_9_MASK                   (0x200U)
#define MC_RGM_DES_F_DR_9_SHIFT                  (9U)
#define MC_RGM_DES_F_DR_9_WIDTH                  (1U)
#define MC_RGM_DES_F_DR_9(x)                     (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_9_SHIFT)) & MC_RGM_DES_F_DR_9_MASK)

#define MC_RGM_DES_F_DR_10_MASK                  (0x400U)
#define MC_RGM_DES_F_DR_10_SHIFT                 (10U)
#define MC_RGM_DES_F_DR_10_WIDTH                 (1U)
#define MC_RGM_DES_F_DR_10(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_10_SHIFT)) & MC_RGM_DES_F_DR_10_MASK)

#define MC_RGM_DES_F_DR_11_MASK                  (0x800U)
#define MC_RGM_DES_F_DR_11_SHIFT                 (11U)
#define MC_RGM_DES_F_DR_11_WIDTH                 (1U)
#define MC_RGM_DES_F_DR_11(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_11_SHIFT)) & MC_RGM_DES_F_DR_11_MASK)

#define MC_RGM_DES_F_DR_12_MASK                  (0x1000U)
#define MC_RGM_DES_F_DR_12_SHIFT                 (12U)
#define MC_RGM_DES_F_DR_12_WIDTH                 (1U)
#define MC_RGM_DES_F_DR_12(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_12_SHIFT)) & MC_RGM_DES_F_DR_12_MASK)

#define MC_RGM_DES_F_DR_13_MASK                  (0x2000U)
#define MC_RGM_DES_F_DR_13_SHIFT                 (13U)
#define MC_RGM_DES_F_DR_13_WIDTH                 (1U)
#define MC_RGM_DES_F_DR_13(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_13_SHIFT)) & MC_RGM_DES_F_DR_13_MASK)

#define MC_RGM_DES_F_DR_16_MASK                  (0x10000U)
#define MC_RGM_DES_F_DR_16_SHIFT                 (16U)
#define MC_RGM_DES_F_DR_16_WIDTH                 (1U)
#define MC_RGM_DES_F_DR_16(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_16_SHIFT)) & MC_RGM_DES_F_DR_16_MASK)

#define MC_RGM_DES_F_DR_17_MASK                  (0x20000U)
#define MC_RGM_DES_F_DR_17_SHIFT                 (17U)
#define MC_RGM_DES_F_DR_17_WIDTH                 (1U)
#define MC_RGM_DES_F_DR_17(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_17_SHIFT)) & MC_RGM_DES_F_DR_17_MASK)

#define MC_RGM_DES_F_DR_18_MASK                  (0x40000U)
#define MC_RGM_DES_F_DR_18_SHIFT                 (18U)
#define MC_RGM_DES_F_DR_18_WIDTH                 (1U)
#define MC_RGM_DES_F_DR_18(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_18_SHIFT)) & MC_RGM_DES_F_DR_18_MASK)

#define MC_RGM_DES_F_DR_30_MASK                  (0x40000000U)
#define MC_RGM_DES_F_DR_30_SHIFT                 (30U)
#define MC_RGM_DES_F_DR_30_WIDTH                 (1U)
#define MC_RGM_DES_F_DR_30(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_30_SHIFT)) & MC_RGM_DES_F_DR_30_MASK)

#define MC_RGM_DES_F_DR_31_MASK                  (0x80000000U)
#define MC_RGM_DES_F_DR_31_SHIFT                 (31U)
#define MC_RGM_DES_F_DR_31_WIDTH                 (1U)
#define MC_RGM_DES_F_DR_31(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_DES_F_DR_31_SHIFT)) & MC_RGM_DES_F_DR_31_MASK)
/*! @} */

/*! @name FES - Functional /External Reset Status Register */
/*! @{ */

#define MC_RGM_FES_F_EXR_MASK                    (0x1U)
#define MC_RGM_FES_F_EXR_SHIFT                   (0U)
#define MC_RGM_FES_F_EXR_WIDTH                   (1U)
#define MC_RGM_FES_F_EXR(x)                      (((uint32_t)(((uint32_t)(x)) << MC_RGM_FES_F_EXR_SHIFT)) & MC_RGM_FES_F_EXR_MASK)

#define MC_RGM_FES_F_FR_3_MASK                   (0x8U)
#define MC_RGM_FES_F_FR_3_SHIFT                  (3U)
#define MC_RGM_FES_F_FR_3_WIDTH                  (1U)
#define MC_RGM_FES_F_FR_3(x)                     (((uint32_t)(((uint32_t)(x)) << MC_RGM_FES_F_FR_3_SHIFT)) & MC_RGM_FES_F_FR_3_MASK)

#define MC_RGM_FES_F_FR_4_MASK                   (0x10U)
#define MC_RGM_FES_F_FR_4_SHIFT                  (4U)
#define MC_RGM_FES_F_FR_4_WIDTH                  (1U)
#define MC_RGM_FES_F_FR_4(x)                     (((uint32_t)(((uint32_t)(x)) << MC_RGM_FES_F_FR_4_SHIFT)) & MC_RGM_FES_F_FR_4_MASK)

#define MC_RGM_FES_F_FR_6_MASK                   (0x40U)
#define MC_RGM_FES_F_FR_6_SHIFT                  (6U)
#define MC_RGM_FES_F_FR_6_WIDTH                  (1U)
#define MC_RGM_FES_F_FR_6(x)                     (((uint32_t)(((uint32_t)(x)) << MC_RGM_FES_F_FR_6_SHIFT)) & MC_RGM_FES_F_FR_6_MASK)

#define MC_RGM_FES_F_FR_18_MASK                  (0x40000U)
#define MC_RGM_FES_F_FR_18_SHIFT                 (18U)
#define MC_RGM_FES_F_FR_18_WIDTH                 (1U)
#define MC_RGM_FES_F_FR_18(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_FES_F_FR_18_SHIFT)) & MC_RGM_FES_F_FR_18_MASK)

#define MC_RGM_FES_F_FR_20_MASK                  (0x100000U)
#define MC_RGM_FES_F_FR_20_SHIFT                 (20U)
#define MC_RGM_FES_F_FR_20_WIDTH                 (1U)
#define MC_RGM_FES_F_FR_20(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_FES_F_FR_20_SHIFT)) & MC_RGM_FES_F_FR_20_MASK)

#define MC_RGM_FES_F_FR_21_MASK                  (0x200000U)
#define MC_RGM_FES_F_FR_21_SHIFT                 (21U)
#define MC_RGM_FES_F_FR_21_WIDTH                 (1U)
#define MC_RGM_FES_F_FR_21(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_FES_F_FR_21_SHIFT)) & MC_RGM_FES_F_FR_21_MASK)

#define MC_RGM_FES_F_FR_30_MASK                  (0x40000000U)
#define MC_RGM_FES_F_FR_30_SHIFT                 (30U)
#define MC_RGM_FES_F_FR_30_WIDTH                 (1U)
#define MC_RGM_FES_F_FR_30(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_FES_F_FR_30_SHIFT)) & MC_RGM_FES_F_FR_30_MASK)

#define MC_RGM_FES_F_FR_31_MASK                  (0x80000000U)
#define MC_RGM_FES_F_FR_31_SHIFT                 (31U)
#define MC_RGM_FES_F_FR_31_WIDTH                 (1U)
#define MC_RGM_FES_F_FR_31(x)                    (((uint32_t)(((uint32_t)(x)) << MC_RGM_FES_F_FR_31_SHIFT)) & MC_RGM_FES_F_FR_31_MASK)
/*! @} */

/*! @name FERD - Functional Event Reset Disable Register */
/*! @{ */

#define MC_RGM_FERD_D_EXR_MASK                   (0x1U)
#define MC_RGM_FERD_D_EXR_SHIFT                  (0U)
#define MC_RGM_FERD_D_EXR_WIDTH                  (1U)
#define MC_RGM_FERD_D_EXR(x)                     (((uint32_t)(((uint32_t)(x)) << MC_RGM_FERD_D_EXR_SHIFT)) & MC_RGM_FERD_D_EXR_MASK)

#define MC_RGM_FERD_D_F_FR_31_MASK               (0x80000000U)
#define MC_RGM_FERD_D_F_FR_31_SHIFT              (31U)
#define MC_RGM_FERD_D_F_FR_31_WIDTH              (1U)
#define MC_RGM_FERD_D_F_FR_31(x)                 (((uint32_t)(((uint32_t)(x)) << MC_RGM_FERD_D_F_FR_31_SHIFT)) & MC_RGM_FERD_D_F_FR_31_MASK)
/*! @} */

/*! @name FREC - Functional Reset Escalation Counter Register */
/*! @{ */

#define MC_RGM_FREC_FREC_MASK                    (0xFU)
#define MC_RGM_FREC_FREC_SHIFT                   (0U)
#define MC_RGM_FREC_FREC_WIDTH                   (4U)
#define MC_RGM_FREC_FREC(x)                      (((uint32_t)(((uint32_t)(x)) << MC_RGM_FREC_FREC_SHIFT)) & MC_RGM_FREC_FREC_MASK)
/*! @} */

/*! @name FRET - Functional Reset Escalation Threshold Register */
/*! @{ */

#define MC_RGM_FRET_FRET_MASK                    (0xFU)
#define MC_RGM_FRET_FRET_SHIFT                   (0U)
#define MC_RGM_FRET_FRET_WIDTH                   (4U)
#define MC_RGM_FRET_FRET(x)                      (((uint32_t)(((uint32_t)(x)) << MC_RGM_FRET_FRET_SHIFT)) & MC_RGM_FRET_FRET_MASK)
/*! @} */

/*! @name DRET - Destructive Reset Escalation Threshold Register */
/*! @{ */

#define MC_RGM_DRET_DRET_MASK                    (0xFU)
#define MC_RGM_DRET_DRET_SHIFT                   (0U)
#define MC_RGM_DRET_DRET_WIDTH                   (4U)
#define MC_RGM_DRET_DRET(x)                      (((uint32_t)(((uint32_t)(x)) << MC_RGM_DRET_DRET_SHIFT)) & MC_RGM_DRET_DRET_MASK)
/*! @} */

/*! @name ERCTRL - External Reset Control Register */
/*! @{ */

#define MC_RGM_ERCTRL_ERASSERT_MASK              (0x1U)
#define MC_RGM_ERCTRL_ERASSERT_SHIFT             (0U)
#define MC_RGM_ERCTRL_ERASSERT_WIDTH             (1U)
#define MC_RGM_ERCTRL_ERASSERT(x)                (((uint32_t)(((uint32_t)(x)) << MC_RGM_ERCTRL_ERASSERT_SHIFT)) & MC_RGM_ERCTRL_ERASSERT_MASK)
/*! @} */

/*! @name RDSS - Reset During Standby Status Register */
/*! @{ */

#define MC_RGM_RDSS_DES_RES_MASK                 (0x1U)
#define MC_RGM_RDSS_DES_RES_SHIFT                (0U)
#define MC_RGM_RDSS_DES_RES_WIDTH                (1U)
#define MC_RGM_RDSS_DES_RES(x)                   (((uint32_t)(((uint32_t)(x)) << MC_RGM_RDSS_DES_RES_SHIFT)) & MC_RGM_RDSS_DES_RES_MASK)

#define MC_RGM_RDSS_FES_RES_MASK                 (0x2U)
#define MC_RGM_RDSS_FES_RES_SHIFT                (1U)
#define MC_RGM_RDSS_FES_RES_WIDTH                (1U)
#define MC_RGM_RDSS_FES_RES(x)                   (((uint32_t)(((uint32_t)(x)) << MC_RGM_RDSS_FES_RES_SHIFT)) & MC_RGM_RDSS_FES_RES_MASK)
/*! @} */

/*! @name PRST_0 - Peripheral Reset */
/*! @{ */

#define MC_RGM_PRST_0_PERIPH_0_RST_MASK          (0x1U)
#define MC_RGM_PRST_0_PERIPH_0_RST_SHIFT         (0U)
#define MC_RGM_PRST_0_PERIPH_0_RST_WIDTH         (1U)
#define MC_RGM_PRST_0_PERIPH_0_RST(x)            (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_0_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_0_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_1_RST_MASK          (0x2U)
#define MC_RGM_PRST_0_PERIPH_1_RST_SHIFT         (1U)
#define MC_RGM_PRST_0_PERIPH_1_RST_WIDTH         (1U)
#define MC_RGM_PRST_0_PERIPH_1_RST(x)            (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_1_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_1_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_2_RST_MASK          (0x4U)
#define MC_RGM_PRST_0_PERIPH_2_RST_SHIFT         (2U)
#define MC_RGM_PRST_0_PERIPH_2_RST_WIDTH         (1U)
#define MC_RGM_PRST_0_PERIPH_2_RST(x)            (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_2_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_2_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_3_RST_MASK          (0x8U)
#define MC_RGM_PRST_0_PERIPH_3_RST_SHIFT         (3U)
#define MC_RGM_PRST_0_PERIPH_3_RST_WIDTH         (1U)
#define MC_RGM_PRST_0_PERIPH_3_RST(x)            (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_3_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_3_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_4_RST_MASK          (0x10U)
#define MC_RGM_PRST_0_PERIPH_4_RST_SHIFT         (4U)
#define MC_RGM_PRST_0_PERIPH_4_RST_WIDTH         (1U)
#define MC_RGM_PRST_0_PERIPH_4_RST(x)            (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_4_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_4_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_5_RST_MASK          (0x20U)
#define MC_RGM_PRST_0_PERIPH_5_RST_SHIFT         (5U)
#define MC_RGM_PRST_0_PERIPH_5_RST_WIDTH         (1U)
#define MC_RGM_PRST_0_PERIPH_5_RST(x)            (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_5_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_5_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_6_RST_MASK          (0x40U)
#define MC_RGM_PRST_0_PERIPH_6_RST_SHIFT         (6U)
#define MC_RGM_PRST_0_PERIPH_6_RST_WIDTH         (1U)
#define MC_RGM_PRST_0_PERIPH_6_RST(x)            (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_6_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_6_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_16_RST_MASK         (0x10000U)
#define MC_RGM_PRST_0_PERIPH_16_RST_SHIFT        (16U)
#define MC_RGM_PRST_0_PERIPH_16_RST_WIDTH        (1U)
#define MC_RGM_PRST_0_PERIPH_16_RST(x)           (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_16_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_16_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_17_RST_MASK         (0x20000U)
#define MC_RGM_PRST_0_PERIPH_17_RST_SHIFT        (17U)
#define MC_RGM_PRST_0_PERIPH_17_RST_WIDTH        (1U)
#define MC_RGM_PRST_0_PERIPH_17_RST(x)           (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_17_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_17_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_64_RST_MASK         (0x1U)
#define MC_RGM_PRST_0_PERIPH_64_RST_SHIFT        (0U)
#define MC_RGM_PRST_0_PERIPH_64_RST_WIDTH        (1U)
#define MC_RGM_PRST_0_PERIPH_64_RST(x)           (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_64_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_64_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_65_RST_MASK         (0x2U)
#define MC_RGM_PRST_0_PERIPH_65_RST_SHIFT        (1U)
#define MC_RGM_PRST_0_PERIPH_65_RST_WIDTH        (1U)
#define MC_RGM_PRST_0_PERIPH_65_RST(x)           (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_65_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_65_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_66_RST_MASK         (0x4U)
#define MC_RGM_PRST_0_PERIPH_66_RST_SHIFT        (2U)
#define MC_RGM_PRST_0_PERIPH_66_RST_WIDTH        (1U)
#define MC_RGM_PRST_0_PERIPH_66_RST(x)           (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_66_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_66_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_67_RST_MASK         (0x8U)
#define MC_RGM_PRST_0_PERIPH_67_RST_SHIFT        (3U)
#define MC_RGM_PRST_0_PERIPH_67_RST_WIDTH        (1U)
#define MC_RGM_PRST_0_PERIPH_67_RST(x)           (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_67_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_67_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_68_RST_MASK         (0x10U)
#define MC_RGM_PRST_0_PERIPH_68_RST_SHIFT        (4U)
#define MC_RGM_PRST_0_PERIPH_68_RST_WIDTH        (1U)
#define MC_RGM_PRST_0_PERIPH_68_RST(x)           (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_68_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_68_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_69_RST_MASK         (0x20U)
#define MC_RGM_PRST_0_PERIPH_69_RST_SHIFT        (5U)
#define MC_RGM_PRST_0_PERIPH_69_RST_WIDTH        (1U)
#define MC_RGM_PRST_0_PERIPH_69_RST(x)           (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_69_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_69_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_70_RST_MASK         (0x40U)
#define MC_RGM_PRST_0_PERIPH_70_RST_SHIFT        (6U)
#define MC_RGM_PRST_0_PERIPH_70_RST_WIDTH        (1U)
#define MC_RGM_PRST_0_PERIPH_70_RST(x)           (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_70_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_70_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_71_RST_MASK         (0x80U)
#define MC_RGM_PRST_0_PERIPH_71_RST_SHIFT        (7U)
#define MC_RGM_PRST_0_PERIPH_71_RST_WIDTH        (1U)
#define MC_RGM_PRST_0_PERIPH_71_RST(x)           (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_71_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_71_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_72_RST_MASK         (0x100U)
#define MC_RGM_PRST_0_PERIPH_72_RST_SHIFT        (8U)
#define MC_RGM_PRST_0_PERIPH_72_RST_WIDTH        (1U)
#define MC_RGM_PRST_0_PERIPH_72_RST(x)           (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_72_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_72_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_128_RST_MASK        (0x1U)
#define MC_RGM_PRST_0_PERIPH_128_RST_SHIFT       (0U)
#define MC_RGM_PRST_0_PERIPH_128_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_128_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_128_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_128_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_192_RST_MASK        (0x1U)
#define MC_RGM_PRST_0_PERIPH_192_RST_SHIFT       (0U)
#define MC_RGM_PRST_0_PERIPH_192_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_192_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_192_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_192_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_256_RST_MASK        (0x1U)
#define MC_RGM_PRST_0_PERIPH_256_RST_SHIFT       (0U)
#define MC_RGM_PRST_0_PERIPH_256_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_256_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_256_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_256_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_257_RST_MASK        (0x2U)
#define MC_RGM_PRST_0_PERIPH_257_RST_SHIFT       (1U)
#define MC_RGM_PRST_0_PERIPH_257_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_257_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_257_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_257_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_258_RST_MASK        (0x4U)
#define MC_RGM_PRST_0_PERIPH_258_RST_SHIFT       (2U)
#define MC_RGM_PRST_0_PERIPH_258_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_258_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_258_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_258_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_259_RST_MASK        (0x8U)
#define MC_RGM_PRST_0_PERIPH_259_RST_SHIFT       (3U)
#define MC_RGM_PRST_0_PERIPH_259_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_259_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_259_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_259_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_260_RST_MASK        (0x10U)
#define MC_RGM_PRST_0_PERIPH_260_RST_SHIFT       (4U)
#define MC_RGM_PRST_0_PERIPH_260_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_260_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_260_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_260_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_261_RST_MASK        (0x20U)
#define MC_RGM_PRST_0_PERIPH_261_RST_SHIFT       (5U)
#define MC_RGM_PRST_0_PERIPH_261_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_261_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_261_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_261_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_262_RST_MASK        (0x40U)
#define MC_RGM_PRST_0_PERIPH_262_RST_SHIFT       (6U)
#define MC_RGM_PRST_0_PERIPH_262_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_262_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_262_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_262_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_263_RST_MASK        (0x80U)
#define MC_RGM_PRST_0_PERIPH_263_RST_SHIFT       (7U)
#define MC_RGM_PRST_0_PERIPH_263_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_263_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_263_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_263_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_264_RST_MASK        (0x100U)
#define MC_RGM_PRST_0_PERIPH_264_RST_SHIFT       (8U)
#define MC_RGM_PRST_0_PERIPH_264_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_264_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_264_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_264_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_320_RST_MASK        (0x1U)
#define MC_RGM_PRST_0_PERIPH_320_RST_SHIFT       (0U)
#define MC_RGM_PRST_0_PERIPH_320_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_320_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_320_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_320_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_321_RST_MASK        (0x2U)
#define MC_RGM_PRST_0_PERIPH_321_RST_SHIFT       (1U)
#define MC_RGM_PRST_0_PERIPH_321_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_321_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_321_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_321_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_322_RST_MASK        (0x4U)
#define MC_RGM_PRST_0_PERIPH_322_RST_SHIFT       (2U)
#define MC_RGM_PRST_0_PERIPH_322_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_322_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_322_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_322_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_323_RST_MASK        (0x8U)
#define MC_RGM_PRST_0_PERIPH_323_RST_SHIFT       (3U)
#define MC_RGM_PRST_0_PERIPH_323_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_323_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_323_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_323_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_324_RST_MASK        (0x10U)
#define MC_RGM_PRST_0_PERIPH_324_RST_SHIFT       (4U)
#define MC_RGM_PRST_0_PERIPH_324_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_324_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_324_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_324_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_325_RST_MASK        (0x20U)
#define MC_RGM_PRST_0_PERIPH_325_RST_SHIFT       (5U)
#define MC_RGM_PRST_0_PERIPH_325_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_325_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_325_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_325_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_326_RST_MASK        (0x40U)
#define MC_RGM_PRST_0_PERIPH_326_RST_SHIFT       (6U)
#define MC_RGM_PRST_0_PERIPH_326_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_326_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_326_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_326_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_327_RST_MASK        (0x80U)
#define MC_RGM_PRST_0_PERIPH_327_RST_SHIFT       (7U)
#define MC_RGM_PRST_0_PERIPH_327_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_327_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_327_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_327_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_328_RST_MASK        (0x100U)
#define MC_RGM_PRST_0_PERIPH_328_RST_SHIFT       (8U)
#define MC_RGM_PRST_0_PERIPH_328_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_328_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_328_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_328_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_384_RST_MASK        (0x1U)
#define MC_RGM_PRST_0_PERIPH_384_RST_SHIFT       (0U)
#define MC_RGM_PRST_0_PERIPH_384_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_384_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_384_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_384_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_385_RST_MASK        (0x2U)
#define MC_RGM_PRST_0_PERIPH_385_RST_SHIFT       (1U)
#define MC_RGM_PRST_0_PERIPH_385_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_385_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_385_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_385_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_386_RST_MASK        (0x4U)
#define MC_RGM_PRST_0_PERIPH_386_RST_SHIFT       (2U)
#define MC_RGM_PRST_0_PERIPH_386_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_386_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_386_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_386_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_387_RST_MASK        (0x8U)
#define MC_RGM_PRST_0_PERIPH_387_RST_SHIFT       (3U)
#define MC_RGM_PRST_0_PERIPH_387_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_387_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_387_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_387_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_388_RST_MASK        (0x10U)
#define MC_RGM_PRST_0_PERIPH_388_RST_SHIFT       (4U)
#define MC_RGM_PRST_0_PERIPH_388_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_388_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_388_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_388_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_389_RST_MASK        (0x20U)
#define MC_RGM_PRST_0_PERIPH_389_RST_SHIFT       (5U)
#define MC_RGM_PRST_0_PERIPH_389_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_389_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_389_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_389_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_390_RST_MASK        (0x40U)
#define MC_RGM_PRST_0_PERIPH_390_RST_SHIFT       (6U)
#define MC_RGM_PRST_0_PERIPH_390_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_390_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_390_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_390_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_391_RST_MASK        (0x80U)
#define MC_RGM_PRST_0_PERIPH_391_RST_SHIFT       (7U)
#define MC_RGM_PRST_0_PERIPH_391_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_391_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_391_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_391_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_392_RST_MASK        (0x100U)
#define MC_RGM_PRST_0_PERIPH_392_RST_SHIFT       (8U)
#define MC_RGM_PRST_0_PERIPH_392_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_392_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_392_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_392_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_448_RST_MASK        (0x1U)
#define MC_RGM_PRST_0_PERIPH_448_RST_SHIFT       (0U)
#define MC_RGM_PRST_0_PERIPH_448_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_448_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_448_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_448_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_449_RST_MASK        (0x2U)
#define MC_RGM_PRST_0_PERIPH_449_RST_SHIFT       (1U)
#define MC_RGM_PRST_0_PERIPH_449_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_449_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_449_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_449_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_450_RST_MASK        (0x4U)
#define MC_RGM_PRST_0_PERIPH_450_RST_SHIFT       (2U)
#define MC_RGM_PRST_0_PERIPH_450_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_450_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_450_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_450_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_451_RST_MASK        (0x8U)
#define MC_RGM_PRST_0_PERIPH_451_RST_SHIFT       (3U)
#define MC_RGM_PRST_0_PERIPH_451_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_451_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_451_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_451_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_452_RST_MASK        (0x10U)
#define MC_RGM_PRST_0_PERIPH_452_RST_SHIFT       (4U)
#define MC_RGM_PRST_0_PERIPH_452_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_452_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_452_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_452_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_453_RST_MASK        (0x20U)
#define MC_RGM_PRST_0_PERIPH_453_RST_SHIFT       (5U)
#define MC_RGM_PRST_0_PERIPH_453_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_453_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_453_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_453_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_454_RST_MASK        (0x40U)
#define MC_RGM_PRST_0_PERIPH_454_RST_SHIFT       (6U)
#define MC_RGM_PRST_0_PERIPH_454_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_454_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_454_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_454_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_455_RST_MASK        (0x80U)
#define MC_RGM_PRST_0_PERIPH_455_RST_SHIFT       (7U)
#define MC_RGM_PRST_0_PERIPH_455_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_455_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_455_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_455_RST_MASK)

#define MC_RGM_PRST_0_PERIPH_456_RST_MASK        (0x100U)
#define MC_RGM_PRST_0_PERIPH_456_RST_SHIFT       (8U)
#define MC_RGM_PRST_0_PERIPH_456_RST_WIDTH       (1U)
#define MC_RGM_PRST_0_PERIPH_456_RST(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PRST_0_PERIPH_456_RST_SHIFT)) & MC_RGM_PRST_0_PERIPH_456_RST_MASK)
/*! @} */

/*! @name PSTAT_0 - Peripheral Reset Status Register */
/*! @{ */

#define MC_RGM_PSTAT_0_PERIPH_0_STAT_MASK        (0x1U)
#define MC_RGM_PSTAT_0_PERIPH_0_STAT_SHIFT       (0U)
#define MC_RGM_PSTAT_0_PERIPH_0_STAT_WIDTH       (1U)
#define MC_RGM_PSTAT_0_PERIPH_0_STAT(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_0_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_0_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_1_STAT_MASK        (0x2U)
#define MC_RGM_PSTAT_0_PERIPH_1_STAT_SHIFT       (1U)
#define MC_RGM_PSTAT_0_PERIPH_1_STAT_WIDTH       (1U)
#define MC_RGM_PSTAT_0_PERIPH_1_STAT(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_1_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_1_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_2_STAT_MASK        (0x4U)
#define MC_RGM_PSTAT_0_PERIPH_2_STAT_SHIFT       (2U)
#define MC_RGM_PSTAT_0_PERIPH_2_STAT_WIDTH       (1U)
#define MC_RGM_PSTAT_0_PERIPH_2_STAT(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_2_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_2_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_3_STAT_MASK        (0x8U)
#define MC_RGM_PSTAT_0_PERIPH_3_STAT_SHIFT       (3U)
#define MC_RGM_PSTAT_0_PERIPH_3_STAT_WIDTH       (1U)
#define MC_RGM_PSTAT_0_PERIPH_3_STAT(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_3_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_3_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_4_STAT_MASK        (0x10U)
#define MC_RGM_PSTAT_0_PERIPH_4_STAT_SHIFT       (4U)
#define MC_RGM_PSTAT_0_PERIPH_4_STAT_WIDTH       (1U)
#define MC_RGM_PSTAT_0_PERIPH_4_STAT(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_4_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_4_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_5_STAT_MASK        (0x20U)
#define MC_RGM_PSTAT_0_PERIPH_5_STAT_SHIFT       (5U)
#define MC_RGM_PSTAT_0_PERIPH_5_STAT_WIDTH       (1U)
#define MC_RGM_PSTAT_0_PERIPH_5_STAT(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_5_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_5_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_6_STAT_MASK        (0x40U)
#define MC_RGM_PSTAT_0_PERIPH_6_STAT_SHIFT       (6U)
#define MC_RGM_PSTAT_0_PERIPH_6_STAT_WIDTH       (1U)
#define MC_RGM_PSTAT_0_PERIPH_6_STAT(x)          (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_6_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_6_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_16_STAT_MASK       (0x10000U)
#define MC_RGM_PSTAT_0_PERIPH_16_STAT_SHIFT      (16U)
#define MC_RGM_PSTAT_0_PERIPH_16_STAT_WIDTH      (1U)
#define MC_RGM_PSTAT_0_PERIPH_16_STAT(x)         (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_16_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_16_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_17_STAT_MASK       (0x20000U)
#define MC_RGM_PSTAT_0_PERIPH_17_STAT_SHIFT      (17U)
#define MC_RGM_PSTAT_0_PERIPH_17_STAT_WIDTH      (1U)
#define MC_RGM_PSTAT_0_PERIPH_17_STAT(x)         (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_17_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_17_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_64_STAT_MASK       (0x1U)
#define MC_RGM_PSTAT_0_PERIPH_64_STAT_SHIFT      (0U)
#define MC_RGM_PSTAT_0_PERIPH_64_STAT_WIDTH      (1U)
#define MC_RGM_PSTAT_0_PERIPH_64_STAT(x)         (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_64_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_64_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_65_STAT_MASK       (0x2U)
#define MC_RGM_PSTAT_0_PERIPH_65_STAT_SHIFT      (1U)
#define MC_RGM_PSTAT_0_PERIPH_65_STAT_WIDTH      (1U)
#define MC_RGM_PSTAT_0_PERIPH_65_STAT(x)         (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_65_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_65_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_66_STAT_MASK       (0x4U)
#define MC_RGM_PSTAT_0_PERIPH_66_STAT_SHIFT      (2U)
#define MC_RGM_PSTAT_0_PERIPH_66_STAT_WIDTH      (1U)
#define MC_RGM_PSTAT_0_PERIPH_66_STAT(x)         (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_66_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_66_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_67_STAT_MASK       (0x8U)
#define MC_RGM_PSTAT_0_PERIPH_67_STAT_SHIFT      (3U)
#define MC_RGM_PSTAT_0_PERIPH_67_STAT_WIDTH      (1U)
#define MC_RGM_PSTAT_0_PERIPH_67_STAT(x)         (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_67_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_67_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_68_STAT_MASK       (0x10U)
#define MC_RGM_PSTAT_0_PERIPH_68_STAT_SHIFT      (4U)
#define MC_RGM_PSTAT_0_PERIPH_68_STAT_WIDTH      (1U)
#define MC_RGM_PSTAT_0_PERIPH_68_STAT(x)         (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_68_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_68_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_69_STAT_MASK       (0x20U)
#define MC_RGM_PSTAT_0_PERIPH_69_STAT_SHIFT      (5U)
#define MC_RGM_PSTAT_0_PERIPH_69_STAT_WIDTH      (1U)
#define MC_RGM_PSTAT_0_PERIPH_69_STAT(x)         (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_69_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_69_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_70_STAT_MASK       (0x40U)
#define MC_RGM_PSTAT_0_PERIPH_70_STAT_SHIFT      (6U)
#define MC_RGM_PSTAT_0_PERIPH_70_STAT_WIDTH      (1U)
#define MC_RGM_PSTAT_0_PERIPH_70_STAT(x)         (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_70_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_70_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_71_STAT_MASK       (0x80U)
#define MC_RGM_PSTAT_0_PERIPH_71_STAT_SHIFT      (7U)
#define MC_RGM_PSTAT_0_PERIPH_71_STAT_WIDTH      (1U)
#define MC_RGM_PSTAT_0_PERIPH_71_STAT(x)         (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_71_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_71_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_72_STAT_MASK       (0x100U)
#define MC_RGM_PSTAT_0_PERIPH_72_STAT_SHIFT      (8U)
#define MC_RGM_PSTAT_0_PERIPH_72_STAT_WIDTH      (1U)
#define MC_RGM_PSTAT_0_PERIPH_72_STAT(x)         (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_72_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_72_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_128_STAT_MASK      (0x1U)
#define MC_RGM_PSTAT_0_PERIPH_128_STAT_SHIFT     (0U)
#define MC_RGM_PSTAT_0_PERIPH_128_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_128_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_128_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_128_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_192_STAT_MASK      (0x1U)
#define MC_RGM_PSTAT_0_PERIPH_192_STAT_SHIFT     (0U)
#define MC_RGM_PSTAT_0_PERIPH_192_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_192_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_192_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_192_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_256_STAT_MASK      (0x1U)
#define MC_RGM_PSTAT_0_PERIPH_256_STAT_SHIFT     (0U)
#define MC_RGM_PSTAT_0_PERIPH_256_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_256_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_256_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_256_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_257_STAT_MASK      (0x2U)
#define MC_RGM_PSTAT_0_PERIPH_257_STAT_SHIFT     (1U)
#define MC_RGM_PSTAT_0_PERIPH_257_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_257_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_257_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_257_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_258_STAT_MASK      (0x4U)
#define MC_RGM_PSTAT_0_PERIPH_258_STAT_SHIFT     (2U)
#define MC_RGM_PSTAT_0_PERIPH_258_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_258_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_258_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_258_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_259_STAT_MASK      (0x8U)
#define MC_RGM_PSTAT_0_PERIPH_259_STAT_SHIFT     (3U)
#define MC_RGM_PSTAT_0_PERIPH_259_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_259_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_259_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_259_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_260_STAT_MASK      (0x10U)
#define MC_RGM_PSTAT_0_PERIPH_260_STAT_SHIFT     (4U)
#define MC_RGM_PSTAT_0_PERIPH_260_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_260_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_260_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_260_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_261_STAT_MASK      (0x20U)
#define MC_RGM_PSTAT_0_PERIPH_261_STAT_SHIFT     (5U)
#define MC_RGM_PSTAT_0_PERIPH_261_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_261_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_261_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_261_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_262_STAT_MASK      (0x40U)
#define MC_RGM_PSTAT_0_PERIPH_262_STAT_SHIFT     (6U)
#define MC_RGM_PSTAT_0_PERIPH_262_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_262_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_262_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_262_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_263_STAT_MASK      (0x80U)
#define MC_RGM_PSTAT_0_PERIPH_263_STAT_SHIFT     (7U)
#define MC_RGM_PSTAT_0_PERIPH_263_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_263_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_263_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_263_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_264_STAT_MASK      (0x100U)
#define MC_RGM_PSTAT_0_PERIPH_264_STAT_SHIFT     (8U)
#define MC_RGM_PSTAT_0_PERIPH_264_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_264_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_264_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_264_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_320_STAT_MASK      (0x1U)
#define MC_RGM_PSTAT_0_PERIPH_320_STAT_SHIFT     (0U)
#define MC_RGM_PSTAT_0_PERIPH_320_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_320_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_320_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_320_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_321_STAT_MASK      (0x2U)
#define MC_RGM_PSTAT_0_PERIPH_321_STAT_SHIFT     (1U)
#define MC_RGM_PSTAT_0_PERIPH_321_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_321_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_321_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_321_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_322_STAT_MASK      (0x4U)
#define MC_RGM_PSTAT_0_PERIPH_322_STAT_SHIFT     (2U)
#define MC_RGM_PSTAT_0_PERIPH_322_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_322_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_322_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_322_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_323_STAT_MASK      (0x8U)
#define MC_RGM_PSTAT_0_PERIPH_323_STAT_SHIFT     (3U)
#define MC_RGM_PSTAT_0_PERIPH_323_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_323_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_323_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_323_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_324_STAT_MASK      (0x10U)
#define MC_RGM_PSTAT_0_PERIPH_324_STAT_SHIFT     (4U)
#define MC_RGM_PSTAT_0_PERIPH_324_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_324_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_324_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_324_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_325_STAT_MASK      (0x20U)
#define MC_RGM_PSTAT_0_PERIPH_325_STAT_SHIFT     (5U)
#define MC_RGM_PSTAT_0_PERIPH_325_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_325_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_325_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_325_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_326_STAT_MASK      (0x40U)
#define MC_RGM_PSTAT_0_PERIPH_326_STAT_SHIFT     (6U)
#define MC_RGM_PSTAT_0_PERIPH_326_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_326_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_326_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_326_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_327_STAT_MASK      (0x80U)
#define MC_RGM_PSTAT_0_PERIPH_327_STAT_SHIFT     (7U)
#define MC_RGM_PSTAT_0_PERIPH_327_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_327_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_327_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_327_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_328_STAT_MASK      (0x100U)
#define MC_RGM_PSTAT_0_PERIPH_328_STAT_SHIFT     (8U)
#define MC_RGM_PSTAT_0_PERIPH_328_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_328_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_328_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_328_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_384_STAT_MASK      (0x1U)
#define MC_RGM_PSTAT_0_PERIPH_384_STAT_SHIFT     (0U)
#define MC_RGM_PSTAT_0_PERIPH_384_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_384_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_384_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_384_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_385_STAT_MASK      (0x2U)
#define MC_RGM_PSTAT_0_PERIPH_385_STAT_SHIFT     (1U)
#define MC_RGM_PSTAT_0_PERIPH_385_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_385_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_385_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_385_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_386_STAT_MASK      (0x4U)
#define MC_RGM_PSTAT_0_PERIPH_386_STAT_SHIFT     (2U)
#define MC_RGM_PSTAT_0_PERIPH_386_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_386_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_386_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_386_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_387_STAT_MASK      (0x8U)
#define MC_RGM_PSTAT_0_PERIPH_387_STAT_SHIFT     (3U)
#define MC_RGM_PSTAT_0_PERIPH_387_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_387_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_387_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_387_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_388_STAT_MASK      (0x10U)
#define MC_RGM_PSTAT_0_PERIPH_388_STAT_SHIFT     (4U)
#define MC_RGM_PSTAT_0_PERIPH_388_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_388_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_388_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_388_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_389_STAT_MASK      (0x20U)
#define MC_RGM_PSTAT_0_PERIPH_389_STAT_SHIFT     (5U)
#define MC_RGM_PSTAT_0_PERIPH_389_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_389_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_389_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_389_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_390_STAT_MASK      (0x40U)
#define MC_RGM_PSTAT_0_PERIPH_390_STAT_SHIFT     (6U)
#define MC_RGM_PSTAT_0_PERIPH_390_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_390_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_390_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_390_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_391_STAT_MASK      (0x80U)
#define MC_RGM_PSTAT_0_PERIPH_391_STAT_SHIFT     (7U)
#define MC_RGM_PSTAT_0_PERIPH_391_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_391_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_391_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_391_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_392_STAT_MASK      (0x100U)
#define MC_RGM_PSTAT_0_PERIPH_392_STAT_SHIFT     (8U)
#define MC_RGM_PSTAT_0_PERIPH_392_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_392_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_392_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_392_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_448_STAT_MASK      (0x1U)
#define MC_RGM_PSTAT_0_PERIPH_448_STAT_SHIFT     (0U)
#define MC_RGM_PSTAT_0_PERIPH_448_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_448_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_448_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_448_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_449_STAT_MASK      (0x2U)
#define MC_RGM_PSTAT_0_PERIPH_449_STAT_SHIFT     (1U)
#define MC_RGM_PSTAT_0_PERIPH_449_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_449_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_449_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_449_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_450_STAT_MASK      (0x4U)
#define MC_RGM_PSTAT_0_PERIPH_450_STAT_SHIFT     (2U)
#define MC_RGM_PSTAT_0_PERIPH_450_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_450_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_450_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_450_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_451_STAT_MASK      (0x8U)
#define MC_RGM_PSTAT_0_PERIPH_451_STAT_SHIFT     (3U)
#define MC_RGM_PSTAT_0_PERIPH_451_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_451_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_451_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_451_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_452_STAT_MASK      (0x10U)
#define MC_RGM_PSTAT_0_PERIPH_452_STAT_SHIFT     (4U)
#define MC_RGM_PSTAT_0_PERIPH_452_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_452_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_452_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_452_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_453_STAT_MASK      (0x20U)
#define MC_RGM_PSTAT_0_PERIPH_453_STAT_SHIFT     (5U)
#define MC_RGM_PSTAT_0_PERIPH_453_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_453_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_453_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_453_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_454_STAT_MASK      (0x40U)
#define MC_RGM_PSTAT_0_PERIPH_454_STAT_SHIFT     (6U)
#define MC_RGM_PSTAT_0_PERIPH_454_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_454_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_454_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_454_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_455_STAT_MASK      (0x80U)
#define MC_RGM_PSTAT_0_PERIPH_455_STAT_SHIFT     (7U)
#define MC_RGM_PSTAT_0_PERIPH_455_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_455_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_455_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_455_STAT_MASK)

#define MC_RGM_PSTAT_0_PERIPH_456_STAT_MASK      (0x100U)
#define MC_RGM_PSTAT_0_PERIPH_456_STAT_SHIFT     (8U)
#define MC_RGM_PSTAT_0_PERIPH_456_STAT_WIDTH     (1U)
#define MC_RGM_PSTAT_0_PERIPH_456_STAT(x)        (((uint32_t)(((uint32_t)(x)) << MC_RGM_PSTAT_0_PERIPH_456_STAT_SHIFT)) & MC_RGM_PSTAT_0_PERIPH_456_STAT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group MC_RGM_Register_Masks */

/*!
 * @}
 */ /* end of group MC_RGM_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_MC_RGM_H_) */
