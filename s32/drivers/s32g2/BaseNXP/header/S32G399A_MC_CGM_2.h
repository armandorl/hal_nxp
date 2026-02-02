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
 * @file S32G399A_MC_CGM_2.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_MC_CGM_2
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
#if !defined(S32G399A_MC_CGM_2_H_)  /* Check if memory map has not been already included */
#define S32G399A_MC_CGM_2_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- MC_CGM_2 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MC_CGM_2_Peripheral_Access_Layer MC_CGM_2 Peripheral Access Layer
 * @{
 */

/** MC_CGM_2 - Register Layout Typedef */
typedef struct {
  __IO uint32_t PCFS_SDUR;                         /**< PCFS Step Duration, offset: 0x0 */
  uint8_t RESERVED_0[264];
  __IO uint32_t PCFS_DIVC23;                       /**< PCFS Divider Change 23 Register, offset: 0x10C */
  __IO uint32_t PCFS_DIVE23;                       /**< PCFS Divider End 23 Register, offset: 0x110 */
  __IO uint32_t PCFS_DIVS23;                       /**< PCFS Divider Start 23 Register, offset: 0x114 */
  uint8_t RESERVED_1[108];
  __IO uint32_t PCFS_DIVC33;                       /**< PCFS Divider Change 33 Register, offset: 0x184 */
  __IO uint32_t PCFS_DIVE33;                       /**< PCFS Divider End 33 Register, offset: 0x188 */
  __IO uint32_t PCFS_DIVS33;                       /**< PCFS Divider Start 33 Register, offset: 0x18C */
  uint8_t RESERVED_2[144];
  __IO uint32_t PCFS_DIVC46;                       /**< PCFS Divider Change 46 Register, offset: 0x220 */
  __IO uint32_t PCFS_DIVE46;                       /**< PCFS Divider End 46 Register, offset: 0x224 */
  __IO uint32_t PCFS_DIVS46;                       /**< PCFS Divider Start 46 Register, offset: 0x228 */
  __IO uint32_t PCFS_DIVC47;                       /**< PCFS Divider Change 47 Register, offset: 0x22C */
  __IO uint32_t PCFS_DIVE47;                       /**< PCFS Divider End 47 Register, offset: 0x230 */
  __IO uint32_t PCFS_DIVS47;                       /**< PCFS Divider Start 47 Register, offset: 0x234 */
  __IO uint32_t PCFS_DIVC48;                       /**< PCFS Divider Change 48 Register, offset: 0x238 */
  __IO uint32_t PCFS_DIVE48;                       /**< PCFS Divider End 48 Register, offset: 0x23C */
  __IO uint32_t PCFS_DIVS48;                       /**< PCFS Divider Start 48 Register, offset: 0x240 */
  __IO uint32_t PCFS_DIVC49;                       /**< PCFS Divider Change 49 Register, offset: 0x244 */
  __IO uint32_t PCFS_DIVE49;                       /**< PCFS Divider End 49 Register, offset: 0x248 */
  __IO uint32_t PCFS_DIVS49;                       /**< PCFS Divider Start 49 Register, offset: 0x24C */
  __IO uint32_t PCFS_DIVC50;                       /**< PCFS Divider Change 50 Register, offset: 0x250 */
  __IO uint32_t PCFS_DIVE50;                       /**< PCFS Divider End 50 Register, offset: 0x254 */
  __IO uint32_t PCFS_DIVS50;                       /**< PCFS Divider Start 50 Register, offset: 0x258 */
  __IO uint32_t PCFS_DIVC51;                       /**< PCFS Divider Change 51 Register, offset: 0x25C */
  __IO uint32_t PCFS_DIVE51;                       /**< PCFS Divider End 51 Register, offset: 0x260 */
  __IO uint32_t PCFS_DIVS51;                       /**< PCFS Divider Start 51 Register, offset: 0x264 */
  __IO uint32_t PCFS_DIVC52;                       /**< PCFS Divider Change 52 Register, offset: 0x268 */
  __IO uint32_t PCFS_DIVE52;                       /**< PCFS Divider End 52 Register, offset: 0x26C */
  __IO uint32_t PCFS_DIVS52;                       /**< PCFS Divider Start 52 Register, offset: 0x270 */
  __IO uint32_t PCFS_DIVC53;                       /**< PCFS Divider Change 53 Register, offset: 0x274 */
  __IO uint32_t PCFS_DIVE53;                       /**< PCFS Divider End 53 Register, offset: 0x278 */
  __IO uint32_t PCFS_DIVS53;                       /**< PCFS Divider Start 53 Register, offset: 0x27C */
  __IO uint32_t PCFS_DIVC54;                       /**< PCFS Divider Change 54 Register, offset: 0x280 */
  __IO uint32_t PCFS_DIVE54;                       /**< PCFS Divider End 54 Register, offset: 0x284 */
  __IO uint32_t PCFS_DIVS54;                       /**< PCFS Divider Start 54 Register, offset: 0x288 */
  __IO uint32_t PCFS_DIVC55;                       /**< PCFS Divider Change 55 Register, offset: 0x28C */
  __IO uint32_t PCFS_DIVE55;                       /**< PCFS Divider End 55 Register, offset: 0x290 */
  __IO uint32_t PCFS_DIVS55;                       /**< PCFS Divider Start 55 Register, offset: 0x294 */
  __IO uint32_t PCFS_DIVC56;                       /**< PCFS Divider Change 56 Register, offset: 0x298 */
  __IO uint32_t PCFS_DIVE56;                       /**< PCFS Divider End 56 Register, offset: 0x29C */
  __IO uint32_t PCFS_DIVS56;                       /**< PCFS Divider Start 56 Register, offset: 0x2A0 */
  __IO uint32_t PCFS_DIVC57;                       /**< PCFS Divider Change 57 Register, offset: 0x2A4 */
  __IO uint32_t PCFS_DIVE57;                       /**< PCFS Divider End 57 Register, offset: 0x2A8 */
  __IO uint32_t PCFS_DIVS57;                       /**< PCFS Divider Start 57 Register, offset: 0x2AC */
  __IO uint32_t PCFS_DIVC58;                       /**< PCFS Divider Change 58 Register, offset: 0x2B0 */
  __IO uint32_t PCFS_DIVE58;                       /**< PCFS Divider End 58 Register, offset: 0x2B4 */
  __IO uint32_t PCFS_DIVS58;                       /**< PCFS Divider Start 58 Register, offset: 0x2B8 */
  __IO uint32_t PCFS_DIVC59;                       /**< PCFS Divider Change 59 Register, offset: 0x2BC */
  __IO uint32_t PCFS_DIVE59;                       /**< PCFS Divider End 59 Register, offset: 0x2C0 */
  __IO uint32_t PCFS_DIVS59;                       /**< PCFS Divider Start 59 Register, offset: 0x2C4 */
  __IO uint32_t PCFS_DIVC60;                       /**< PCFS Divider Change 60 Register, offset: 0x2C8 */
  __IO uint32_t PCFS_DIVE60;                       /**< PCFS Divider End 60 Register, offset: 0x2CC */
  __IO uint32_t PCFS_DIVS60;                       /**< PCFS Divider Start 60 Register, offset: 0x2D0 */
  __IO uint32_t PCFS_DIVC61;                       /**< PCFS Divider Change 61 Register, offset: 0x2D4 */
  __IO uint32_t PCFS_DIVE61;                       /**< PCFS Divider End 61 Register, offset: 0x2D8 */
  __IO uint32_t PCFS_DIVS61;                       /**< PCFS Divider Start 61 Register, offset: 0x2DC */
  __IO uint32_t PCFS_DIVC62;                       /**< PCFS Divider Change 62 Register, offset: 0x2E0 */
  __IO uint32_t PCFS_DIVE62;                       /**< PCFS Divider End 62 Register, offset: 0x2E4 */
  __IO uint32_t PCFS_DIVS62;                       /**< PCFS Divider Start 62 Register, offset: 0x2E8 */
  __IO uint32_t PCFS_DIVC63;                       /**< PCFS Divider Change 63 Register, offset: 0x2EC */
  __IO uint32_t PCFS_DIVE63;                       /**< PCFS Divider End 63 Register, offset: 0x2F0 */
  __IO uint32_t PCFS_DIVS63;                       /**< PCFS Divider Start 63 Register, offset: 0x2F4 */
  uint8_t RESERVED_3[8];
  __IO uint32_t MUX_0_CSC;                         /**< Clock Mux 0 Select Control Register, offset: 0x300 */
  __I  uint32_t MUX_0_CSS;                         /**< Clock Mux 0 Select Status Register, offset: 0x304 */
  __IO uint32_t MUX_0_DC_0;                        /**< Clock Mux 0 Divider 0 Control Register, offset: 0x308 */
  uint8_t RESERVED_4[40];
  __IO uint32_t MUX_0_DIV_TRIG_CTRL;               /**< Clock Mux 0 Divider Trigger Control Register, offset: 0x334 */
  __O  uint32_t MUX_0_DIV_TRIG;                    /**< Clock Mux 0 Divider Trigger Register, offset: 0x338 */
  __I  uint32_t MUX_0_DIV_UPD_STAT;                /**< Clock Mux 0 Divider Update Status Register, offset: 0x33C */
  __IO uint32_t MUX_1_CSC;                         /**< Clock Mux 1 Select Control Register, offset: 0x340 */
  __I  uint32_t MUX_1_CSS;                         /**< Clock Mux 1 Select Status Register, offset: 0x344 */
  __IO uint32_t MUX_1_DC_0;                        /**< Clock Mux 1 Divider 0 Control Register, offset: 0x348 */
  __IO uint32_t MUX_1_DC_1;                        /**< Clock Mux 1 Divider 1 Control Register, offset: 0x34C */
  uint8_t RESERVED_5[36];
  __IO uint32_t MUX_1_DIV_TRIG_CTRL;               /**< Clock Mux 1 Divider Trigger Control Register, offset: 0x374 */
  __O  uint32_t MUX_1_DIV_TRIG;                    /**< Clock Mux 1 Divider Trigger Register, offset: 0x378 */
  __I  uint32_t MUX_1_DIV_UPD_STAT;                /**< Clock Mux 1 Divider Update Status Register, offset: 0x37C */
  __IO uint32_t MUX_2_CSC;                         /**< Clock Mux 2 Select Control Register, offset: 0x380 */
  __I  uint32_t MUX_2_CSS;                         /**< Clock Mux 2 Select Status Register, offset: 0x384 */
  __IO uint32_t MUX_2_DC_0;                        /**< Clock Mux 2 Divider 0 Control Register, offset: 0x388 */
  __IO uint32_t MUX_2_DC_1;                        /**< Clock Mux 2 Divider 1 Control Register, offset: 0x38C */
  uint8_t RESERVED_6[36];
  __IO uint32_t MUX_2_DIV_TRIG_CTRL;               /**< Clock Mux 2 Divider Trigger Control Register, offset: 0x3B4 */
  __O  uint32_t MUX_2_DIV_TRIG;                    /**< Clock Mux 2 Divider Trigger Register, offset: 0x3B8 */
  __I  uint32_t MUX_2_DIV_UPD_STAT;                /**< Clock Mux 2 Divider Update Status Register, offset: 0x3BC */
  __IO uint32_t MUX_3_CSC;                         /**< Clock Mux 3 Select Control Register, offset: 0x3C0 */
  __I  uint32_t MUX_3_CSS;                         /**< Clock Mux 3 Select Status Register, offset: 0x3C4 */
  __IO uint32_t MUX_3_DC_0;                        /**< Clock Mux 3 Divider 0 Control Register, offset: 0x3C8 */
  __IO uint32_t MUX_3_DC_1;                        /**< Clock Mux 3 Divider 1 Control Register, offset: 0x3CC */
  uint8_t RESERVED_7[36];
  __IO uint32_t MUX_3_DIV_TRIG_CTRL;               /**< Clock Mux 3 Divider Trigger Control Register, offset: 0x3F4 */
  __O  uint32_t MUX_3_DIV_TRIG;                    /**< Clock Mux 3 Divider Trigger Register, offset: 0x3F8 */
  __I  uint32_t MUX_3_DIV_UPD_STAT;                /**< Clock Mux 3 Divider Update Status Register, offset: 0x3FC */
  __IO uint32_t MUX_4_CSC;                         /**< Clock Mux 4 Select Control Register, offset: 0x400 */
  __I  uint32_t MUX_4_CSS;                         /**< Clock Mux 4 Select Status Register, offset: 0x404 */
  uint8_t RESERVED_8[56];
  __IO uint32_t MUX_5_CSC;                         /**< Clock Mux 5 Select Control Register, offset: 0x440 */
  __I  uint32_t MUX_5_CSS;                         /**< Clock Mux 5 Select Status Register, offset: 0x444 */
  uint8_t RESERVED_9[56];
  __IO uint32_t MUX_6_CSC;                         /**< Clock Mux 6 Select Control Register, offset: 0x480 */
  __I  uint32_t MUX_6_CSS;                         /**< Clock Mux 6 Select Status Register, offset: 0x484 */
  uint8_t RESERVED_10[56];
  __IO uint32_t MUX_7_CSC;                         /**< Clock Mux 7 Select Control Register, offset: 0x4C0 */
  __I  uint32_t MUX_7_CSS;                         /**< Clock Mux 7 Select Status Register, offset: 0x4C4 */
  __IO uint32_t MUX_7_DC_0;                        /**< Clock Mux 7 Divider 0 Control Register, offset: 0x4C8 */
  uint8_t RESERVED_11[40];
  __IO uint32_t MUX_7_DIV_TRIG_CTRL;               /**< Clock Mux 7 Divider Trigger Control Register, offset: 0x4F4 */
  __O  uint32_t MUX_7_DIV_TRIG;                    /**< Clock Mux 7 Divider Trigger Register, offset: 0x4F8 */
  __I  uint32_t MUX_7_DIV_UPD_STAT;                /**< Clock Mux 7 Divider Update Status Register, offset: 0x4FC */
  __IO uint32_t MUX_8_CSC;                         /**< Clock Mux 8 Select Control Register, offset: 0x500 */
  __I  uint32_t MUX_8_CSS;                         /**< Clock Mux 8 Select Status Register, offset: 0x504 */
  __IO uint32_t MUX_8_DC_0;                        /**< Clock Mux 8 Divider 0 Control Register, offset: 0x508 */
  uint8_t RESERVED_12[40];
  __IO uint32_t MUX_8_DIV_TRIG_CTRL;               /**< Clock Mux 8 Divider Trigger Control Register, offset: 0x534 */
  __O  uint32_t MUX_8_DIV_TRIG;                    /**< Clock Mux 8 Divider Trigger Register, offset: 0x538 */
  __I  uint32_t MUX_8_DIV_UPD_STAT;                /**< Clock Mux 8 Divider Update Status Register, offset: 0x53C */
  __IO uint32_t MUX_9_CSC;                         /**< Clock Mux 9 Select Control Register, offset: 0x540 */
  __I  uint32_t MUX_9_CSS;                         /**< Clock Mux 9 Select Status Register, offset: 0x544 */
  __IO uint32_t MUX_9_DC_0;                        /**< Clock Mux 9 Divider 0 Control Register, offset: 0x548 */
  uint8_t RESERVED_13[40];
  __IO uint32_t MUX_9_DIV_TRIG_CTRL;               /**< Clock Mux 9 Divider Trigger Control Register, offset: 0x574 */
  __O  uint32_t MUX_9_DIV_TRIG;                    /**< Clock Mux 9 Divider Trigger Register, offset: 0x578 */
  __I  uint32_t MUX_9_DIV_UPD_STAT;                /**< Clock Mux 9 Divider Update Status Register, offset: 0x57C */
} MC_CGM_2_Type, *MC_CGM_2_MemMapPtr;

/** Number of instances of the MC_CGM_2 module. */
#define MC_CGM_2_INSTANCE_COUNT                  (1u)

/* MC_CGM_2 - Peripheral instance base addresses */
/** Peripheral MC_CGM_2 base address */
#define IP_MC_CGM_2_BASE                         (0x44018000u)
/** Peripheral MC_CGM_2 base pointer */
#define IP_MC_CGM_2                              ((MC_CGM_2_Type *)IP_MC_CGM_2_BASE)
/** Array initializer of MC_CGM_2 peripheral base addresses */
#define IP_MC_CGM_2_BASE_ADDRS                   { IP_MC_CGM_2_BASE }
/** Array initializer of MC_CGM_2 peripheral base pointers */
#define IP_MC_CGM_2_BASE_PTRS                    { IP_MC_CGM_2 }

/* ----------------------------------------------------------------------------
   -- MC_CGM_2 Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MC_CGM_2_Register_Masks MC_CGM_2 Register Masks
 * @{
 */

/*! @name PCFS_SDUR - PCFS Step Duration */
/*! @{ */

#define MC_CGM_2_PCFS_SDUR_SDUR_MASK             (0xFFFFU)
#define MC_CGM_2_PCFS_SDUR_SDUR_SHIFT            (0U)
#define MC_CGM_2_PCFS_SDUR_SDUR_WIDTH            (16U)
#define MC_CGM_2_PCFS_SDUR_SDUR(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_SDUR_SDUR_SHIFT)) & MC_CGM_2_PCFS_SDUR_SDUR_MASK)
/*! @} */

/*! @name PCFS_DIVC23 - PCFS Divider Change 23 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC23_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC23_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC23_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC23_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC23_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC23_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC23_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC23_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC23_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC23_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC23_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC23_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE23 - PCFS Divider End 23 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE23_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE23_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE23_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE23_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE23_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE23_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS23 - PCFS Divider Start 23 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS23_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS23_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS23_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS23_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS23_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS23_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC33 - PCFS Divider Change 33 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC33_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC33_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC33_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC33_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC33_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC33_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC33_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC33_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC33_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC33_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC33_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC33_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE33 - PCFS Divider End 33 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE33_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE33_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE33_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE33_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE33_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE33_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS33 - PCFS Divider Start 33 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS33_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS33_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS33_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS33_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS33_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS33_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC46 - PCFS Divider Change 46 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC46_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC46_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC46_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC46_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC46_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC46_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC46_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC46_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC46_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC46_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC46_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC46_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE46 - PCFS Divider End 46 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE46_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE46_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE46_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE46_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE46_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE46_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS46 - PCFS Divider Start 46 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS46_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS46_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS46_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS46_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS46_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS46_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC47 - PCFS Divider Change 47 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC47_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC47_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC47_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC47_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC47_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC47_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC47_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC47_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC47_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC47_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC47_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC47_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE47 - PCFS Divider End 47 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE47_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE47_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE47_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE47_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE47_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE47_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS47 - PCFS Divider Start 47 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS47_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS47_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS47_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS47_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS47_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS47_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC48 - PCFS Divider Change 48 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC48_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC48_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC48_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC48_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC48_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC48_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC48_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC48_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC48_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC48_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC48_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC48_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE48 - PCFS Divider End 48 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE48_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE48_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE48_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE48_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE48_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE48_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS48 - PCFS Divider Start 48 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS48_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS48_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS48_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS48_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS48_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS48_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC49 - PCFS Divider Change 49 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC49_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC49_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC49_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC49_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC49_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC49_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC49_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC49_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC49_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC49_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC49_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC49_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE49 - PCFS Divider End 49 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE49_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE49_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE49_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE49_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE49_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE49_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS49 - PCFS Divider Start 49 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS49_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS49_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS49_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS49_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS49_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS49_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC50 - PCFS Divider Change 50 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC50_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC50_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC50_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC50_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC50_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC50_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC50_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC50_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC50_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC50_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC50_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC50_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE50 - PCFS Divider End 50 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE50_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE50_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE50_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE50_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE50_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE50_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS50 - PCFS Divider Start 50 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS50_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS50_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS50_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS50_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS50_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS50_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC51 - PCFS Divider Change 51 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC51_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC51_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC51_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC51_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC51_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC51_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC51_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC51_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC51_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC51_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC51_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC51_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE51 - PCFS Divider End 51 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE51_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE51_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE51_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE51_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE51_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE51_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS51 - PCFS Divider Start 51 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS51_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS51_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS51_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS51_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS51_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS51_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC52 - PCFS Divider Change 52 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC52_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC52_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC52_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC52_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC52_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC52_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC52_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC52_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC52_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC52_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC52_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC52_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE52 - PCFS Divider End 52 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE52_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE52_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE52_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE52_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE52_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE52_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS52 - PCFS Divider Start 52 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS52_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS52_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS52_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS52_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS52_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS52_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC53 - PCFS Divider Change 53 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC53_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC53_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC53_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC53_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC53_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC53_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC53_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC53_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC53_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC53_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC53_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC53_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE53 - PCFS Divider End 53 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE53_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE53_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE53_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE53_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE53_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE53_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS53 - PCFS Divider Start 53 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS53_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS53_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS53_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS53_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS53_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS53_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC54 - PCFS Divider Change 54 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC54_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC54_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC54_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC54_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC54_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC54_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC54_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC54_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC54_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC54_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC54_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC54_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE54 - PCFS Divider End 54 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE54_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE54_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE54_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE54_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE54_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE54_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS54 - PCFS Divider Start 54 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS54_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS54_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS54_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS54_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS54_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS54_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC55 - PCFS Divider Change 55 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC55_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC55_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC55_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC55_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC55_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC55_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC55_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC55_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC55_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC55_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC55_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC55_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE55 - PCFS Divider End 55 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE55_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE55_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE55_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE55_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE55_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE55_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS55 - PCFS Divider Start 55 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS55_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS55_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS55_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS55_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS55_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS55_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC56 - PCFS Divider Change 56 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC56_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC56_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC56_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC56_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC56_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC56_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC56_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC56_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC56_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC56_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC56_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC56_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE56 - PCFS Divider End 56 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE56_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE56_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE56_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE56_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE56_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE56_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS56 - PCFS Divider Start 56 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS56_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS56_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS56_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS56_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS56_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS56_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC57 - PCFS Divider Change 57 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC57_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC57_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC57_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC57_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC57_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC57_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC57_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC57_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC57_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC57_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC57_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC57_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE57 - PCFS Divider End 57 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE57_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE57_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE57_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE57_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE57_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE57_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS57 - PCFS Divider Start 57 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS57_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS57_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS57_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS57_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS57_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS57_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC58 - PCFS Divider Change 58 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC58_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC58_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC58_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC58_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC58_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC58_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC58_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC58_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC58_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC58_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC58_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC58_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE58 - PCFS Divider End 58 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE58_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE58_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE58_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE58_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE58_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE58_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS58 - PCFS Divider Start 58 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS58_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS58_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS58_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS58_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS58_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS58_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC59 - PCFS Divider Change 59 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC59_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC59_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC59_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC59_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC59_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC59_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC59_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC59_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC59_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC59_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC59_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC59_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE59 - PCFS Divider End 59 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE59_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE59_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE59_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE59_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE59_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE59_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS59 - PCFS Divider Start 59 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS59_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS59_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS59_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS59_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS59_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS59_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC60 - PCFS Divider Change 60 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC60_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC60_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC60_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC60_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC60_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC60_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC60_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC60_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC60_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC60_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC60_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC60_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE60 - PCFS Divider End 60 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE60_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE60_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE60_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE60_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE60_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE60_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS60 - PCFS Divider Start 60 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS60_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS60_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS60_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS60_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS60_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS60_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC61 - PCFS Divider Change 61 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC61_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC61_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC61_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC61_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC61_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC61_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC61_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC61_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC61_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC61_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC61_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC61_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE61 - PCFS Divider End 61 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE61_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE61_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE61_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE61_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE61_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE61_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS61 - PCFS Divider Start 61 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS61_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS61_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS61_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS61_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS61_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS61_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC62 - PCFS Divider Change 62 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC62_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC62_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC62_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC62_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC62_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC62_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC62_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC62_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC62_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC62_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC62_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC62_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE62 - PCFS Divider End 62 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE62_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE62_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE62_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE62_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE62_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE62_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS62 - PCFS Divider Start 62 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS62_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS62_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS62_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS62_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS62_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS62_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC63 - PCFS Divider Change 63 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVC63_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC63_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC63_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC63_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC63_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC63_RATE_MASK)

#define MC_CGM_2_PCFS_DIVC63_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC63_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC63_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC63_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC63_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC63_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE63 - PCFS Divider End 63 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVE63_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE63_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE63_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE63_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE63_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE63_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS63 - PCFS Divider Start 63 Register */
/*! @{ */

#define MC_CGM_2_PCFS_DIVS63_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS63_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS63_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS63_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS63_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS63_DIVS_MASK)
/*! @} */

/*! @name MUX_0_CSC - Clock Mux 0 Select Control Register */
/*! @{ */

#define MC_CGM_2_MUX_0_CSC_RAMPUP_MASK           (0x1U)
#define MC_CGM_2_MUX_0_CSC_RAMPUP_SHIFT          (0U)
#define MC_CGM_2_MUX_0_CSC_RAMPUP_WIDTH          (1U)
#define MC_CGM_2_MUX_0_CSC_RAMPUP(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSC_RAMPUP_SHIFT)) & MC_CGM_2_MUX_0_CSC_RAMPUP_MASK)

#define MC_CGM_2_MUX_0_CSC_RAMPDOWN_MASK         (0x2U)
#define MC_CGM_2_MUX_0_CSC_RAMPDOWN_SHIFT        (1U)
#define MC_CGM_2_MUX_0_CSC_RAMPDOWN_WIDTH        (1U)
#define MC_CGM_2_MUX_0_CSC_RAMPDOWN(x)           (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSC_RAMPDOWN_SHIFT)) & MC_CGM_2_MUX_0_CSC_RAMPDOWN_MASK)

#define MC_CGM_2_MUX_0_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_0_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_0_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_0_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_0_CSC_CLK_SW_MASK)

#define MC_CGM_2_MUX_0_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_0_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_0_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_0_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_0_CSC_SAFE_SW_MASK)

#define MC_CGM_2_MUX_0_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_0_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_0_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_0_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_0_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_0_CSS - Clock Mux 0 Select Status Register */
/*! @{ */

#define MC_CGM_2_MUX_0_CSS_RAMPUP_MASK           (0x1U)
#define MC_CGM_2_MUX_0_CSS_RAMPUP_SHIFT          (0U)
#define MC_CGM_2_MUX_0_CSS_RAMPUP_WIDTH          (1U)
#define MC_CGM_2_MUX_0_CSS_RAMPUP(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_RAMPUP_SHIFT)) & MC_CGM_2_MUX_0_CSS_RAMPUP_MASK)

#define MC_CGM_2_MUX_0_CSS_RAMPDOWN_MASK         (0x2U)
#define MC_CGM_2_MUX_0_CSS_RAMPDOWN_SHIFT        (1U)
#define MC_CGM_2_MUX_0_CSS_RAMPDOWN_WIDTH        (1U)
#define MC_CGM_2_MUX_0_CSS_RAMPDOWN(x)           (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_RAMPDOWN_SHIFT)) & MC_CGM_2_MUX_0_CSS_RAMPDOWN_MASK)

#define MC_CGM_2_MUX_0_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_0_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_0_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_0_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_0_CSS_CLK_SW_MASK)

#define MC_CGM_2_MUX_0_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_0_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_0_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_0_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_0_CSS_SAFE_SW_MASK)

#define MC_CGM_2_MUX_0_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_0_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_0_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_0_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_0_CSS_SWIP_MASK)

#define MC_CGM_2_MUX_0_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_0_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_0_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_0_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_0_CSS_SWTRG_MASK)

#define MC_CGM_2_MUX_0_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_0_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_0_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_0_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_0_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_0_DC_0 - Clock Mux 0 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_2_MUX_0_DC_0_DIV_MASK             (0xF0000U)
#define MC_CGM_2_MUX_0_DC_0_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_0_DC_0_DIV_WIDTH            (4U)
#define MC_CGM_2_MUX_0_DC_0_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_DC_0_DIV_SHIFT)) & MC_CGM_2_MUX_0_DC_0_DIV_MASK)

#define MC_CGM_2_MUX_0_DC_0_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_0_DC_0_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_0_DC_0_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_0_DC_0_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_DC_0_DE_SHIFT)) & MC_CGM_2_MUX_0_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_0_DIV_TRIG_CTRL - Clock Mux 0 Divider Trigger Control Register */
/*! @{ */

#define MC_CGM_2_MUX_0_DIV_TRIG_CTRL_TCTL_MASK   (0x1U)
#define MC_CGM_2_MUX_0_DIV_TRIG_CTRL_TCTL_SHIFT  (0U)
#define MC_CGM_2_MUX_0_DIV_TRIG_CTRL_TCTL_WIDTH  (1U)
#define MC_CGM_2_MUX_0_DIV_TRIG_CTRL_TCTL(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_DIV_TRIG_CTRL_TCTL_SHIFT)) & MC_CGM_2_MUX_0_DIV_TRIG_CTRL_TCTL_MASK)

#define MC_CGM_2_MUX_0_DIV_TRIG_CTRL_HHEN_MASK   (0x80000000U)
#define MC_CGM_2_MUX_0_DIV_TRIG_CTRL_HHEN_SHIFT  (31U)
#define MC_CGM_2_MUX_0_DIV_TRIG_CTRL_HHEN_WIDTH  (1U)
#define MC_CGM_2_MUX_0_DIV_TRIG_CTRL_HHEN(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_DIV_TRIG_CTRL_HHEN_SHIFT)) & MC_CGM_2_MUX_0_DIV_TRIG_CTRL_HHEN_MASK)
/*! @} */

/*! @name MUX_0_DIV_TRIG - Clock Mux 0 Divider Trigger Register */
/*! @{ */

#define MC_CGM_2_MUX_0_DIV_TRIG_TRIGGER_MASK     (0xFFFFFFFFU)
#define MC_CGM_2_MUX_0_DIV_TRIG_TRIGGER_SHIFT    (0U)
#define MC_CGM_2_MUX_0_DIV_TRIG_TRIGGER_WIDTH    (32U)
#define MC_CGM_2_MUX_0_DIV_TRIG_TRIGGER(x)       (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_DIV_TRIG_TRIGGER_SHIFT)) & MC_CGM_2_MUX_0_DIV_TRIG_TRIGGER_MASK)
/*! @} */

/*! @name MUX_0_DIV_UPD_STAT - Clock Mux 0 Divider Update Status Register */
/*! @{ */

#define MC_CGM_2_MUX_0_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_2_MUX_0_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_2_MUX_0_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_2_MUX_0_DIV_UPD_STAT_DIV_STAT(x)  (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_2_MUX_0_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_1_CSC - Clock Mux 1 Select Control Register */
/*! @{ */

#define MC_CGM_2_MUX_1_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_1_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_1_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_1_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_1_CSC_CLK_SW_MASK)

#define MC_CGM_2_MUX_1_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_1_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_1_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_1_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_1_CSC_SAFE_SW_MASK)

#define MC_CGM_2_MUX_1_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_1_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_1_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_1_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_1_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_1_CSS - Clock Mux 1 Select Status Register */
/*! @{ */

#define MC_CGM_2_MUX_1_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_1_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_1_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_1_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_1_CSS_CLK_SW_MASK)

#define MC_CGM_2_MUX_1_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_1_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_1_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_1_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_1_CSS_SAFE_SW_MASK)

#define MC_CGM_2_MUX_1_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_1_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_1_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_1_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_1_CSS_SWIP_MASK)

#define MC_CGM_2_MUX_1_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_1_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_1_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_1_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_1_CSS_SWTRG_MASK)

#define MC_CGM_2_MUX_1_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_1_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_1_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_1_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_1_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_1_DC_0 - Clock Mux 1 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_2_MUX_1_DC_0_DIV_MASK             (0xFF0000U)
#define MC_CGM_2_MUX_1_DC_0_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_1_DC_0_DIV_WIDTH            (8U)
#define MC_CGM_2_MUX_1_DC_0_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_DC_0_DIV_SHIFT)) & MC_CGM_2_MUX_1_DC_0_DIV_MASK)

#define MC_CGM_2_MUX_1_DC_0_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_1_DC_0_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_1_DC_0_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_1_DC_0_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_DC_0_DE_SHIFT)) & MC_CGM_2_MUX_1_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_1_DC_1 - Clock Mux 1 Divider 1 Control Register */
/*! @{ */

#define MC_CGM_2_MUX_1_DC_1_DIV_MASK             (0x30000U)
#define MC_CGM_2_MUX_1_DC_1_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_1_DC_1_DIV_WIDTH            (2U)
#define MC_CGM_2_MUX_1_DC_1_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_DC_1_DIV_SHIFT)) & MC_CGM_2_MUX_1_DC_1_DIV_MASK)

#define MC_CGM_2_MUX_1_DC_1_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_1_DC_1_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_1_DC_1_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_1_DC_1_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_DC_1_DE_SHIFT)) & MC_CGM_2_MUX_1_DC_1_DE_MASK)
/*! @} */

/*! @name MUX_1_DIV_TRIG_CTRL - Clock Mux 1 Divider Trigger Control Register */
/*! @{ */

#define MC_CGM_2_MUX_1_DIV_TRIG_CTRL_TCTL_MASK   (0x1U)
#define MC_CGM_2_MUX_1_DIV_TRIG_CTRL_TCTL_SHIFT  (0U)
#define MC_CGM_2_MUX_1_DIV_TRIG_CTRL_TCTL_WIDTH  (1U)
#define MC_CGM_2_MUX_1_DIV_TRIG_CTRL_TCTL(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_DIV_TRIG_CTRL_TCTL_SHIFT)) & MC_CGM_2_MUX_1_DIV_TRIG_CTRL_TCTL_MASK)

#define MC_CGM_2_MUX_1_DIV_TRIG_CTRL_HHEN_MASK   (0x80000000U)
#define MC_CGM_2_MUX_1_DIV_TRIG_CTRL_HHEN_SHIFT  (31U)
#define MC_CGM_2_MUX_1_DIV_TRIG_CTRL_HHEN_WIDTH  (1U)
#define MC_CGM_2_MUX_1_DIV_TRIG_CTRL_HHEN(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_DIV_TRIG_CTRL_HHEN_SHIFT)) & MC_CGM_2_MUX_1_DIV_TRIG_CTRL_HHEN_MASK)
/*! @} */

/*! @name MUX_1_DIV_TRIG - Clock Mux 1 Divider Trigger Register */
/*! @{ */

#define MC_CGM_2_MUX_1_DIV_TRIG_TRIGGER_MASK     (0xFFFFFFFFU)
#define MC_CGM_2_MUX_1_DIV_TRIG_TRIGGER_SHIFT    (0U)
#define MC_CGM_2_MUX_1_DIV_TRIG_TRIGGER_WIDTH    (32U)
#define MC_CGM_2_MUX_1_DIV_TRIG_TRIGGER(x)       (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_DIV_TRIG_TRIGGER_SHIFT)) & MC_CGM_2_MUX_1_DIV_TRIG_TRIGGER_MASK)
/*! @} */

/*! @name MUX_1_DIV_UPD_STAT - Clock Mux 1 Divider Update Status Register */
/*! @{ */

#define MC_CGM_2_MUX_1_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_2_MUX_1_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_2_MUX_1_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_2_MUX_1_DIV_UPD_STAT_DIV_STAT(x)  (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_2_MUX_1_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_2_CSC - Clock Mux 2 Select Control Register */
/*! @{ */

#define MC_CGM_2_MUX_2_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_2_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_2_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_2_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_2_CSC_CLK_SW_MASK)

#define MC_CGM_2_MUX_2_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_2_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_2_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_2_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_2_CSC_SAFE_SW_MASK)

#define MC_CGM_2_MUX_2_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_2_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_2_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_2_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_2_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_2_CSS - Clock Mux 2 Select Status Register */
/*! @{ */

#define MC_CGM_2_MUX_2_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_2_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_2_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_2_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_2_CSS_CLK_SW_MASK)

#define MC_CGM_2_MUX_2_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_2_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_2_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_2_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_2_CSS_SAFE_SW_MASK)

#define MC_CGM_2_MUX_2_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_2_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_2_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_2_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_2_CSS_SWIP_MASK)

#define MC_CGM_2_MUX_2_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_2_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_2_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_2_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_2_CSS_SWTRG_MASK)

#define MC_CGM_2_MUX_2_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_2_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_2_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_2_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_2_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_2_DC_0 - Clock Mux 2 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_2_MUX_2_DC_0_DIV_MASK             (0xFF0000U)
#define MC_CGM_2_MUX_2_DC_0_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_2_DC_0_DIV_WIDTH            (8U)
#define MC_CGM_2_MUX_2_DC_0_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_DC_0_DIV_SHIFT)) & MC_CGM_2_MUX_2_DC_0_DIV_MASK)

#define MC_CGM_2_MUX_2_DC_0_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_2_DC_0_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_2_DC_0_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_2_DC_0_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_DC_0_DE_SHIFT)) & MC_CGM_2_MUX_2_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_2_DC_1 - Clock Mux 2 Divider 1 Control Register */
/*! @{ */

#define MC_CGM_2_MUX_2_DC_1_DIV_MASK             (0x30000U)
#define MC_CGM_2_MUX_2_DC_1_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_2_DC_1_DIV_WIDTH            (2U)
#define MC_CGM_2_MUX_2_DC_1_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_DC_1_DIV_SHIFT)) & MC_CGM_2_MUX_2_DC_1_DIV_MASK)

#define MC_CGM_2_MUX_2_DC_1_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_2_DC_1_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_2_DC_1_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_2_DC_1_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_DC_1_DE_SHIFT)) & MC_CGM_2_MUX_2_DC_1_DE_MASK)
/*! @} */

/*! @name MUX_2_DIV_TRIG_CTRL - Clock Mux 2 Divider Trigger Control Register */
/*! @{ */

#define MC_CGM_2_MUX_2_DIV_TRIG_CTRL_TCTL_MASK   (0x1U)
#define MC_CGM_2_MUX_2_DIV_TRIG_CTRL_TCTL_SHIFT  (0U)
#define MC_CGM_2_MUX_2_DIV_TRIG_CTRL_TCTL_WIDTH  (1U)
#define MC_CGM_2_MUX_2_DIV_TRIG_CTRL_TCTL(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_DIV_TRIG_CTRL_TCTL_SHIFT)) & MC_CGM_2_MUX_2_DIV_TRIG_CTRL_TCTL_MASK)

#define MC_CGM_2_MUX_2_DIV_TRIG_CTRL_HHEN_MASK   (0x80000000U)
#define MC_CGM_2_MUX_2_DIV_TRIG_CTRL_HHEN_SHIFT  (31U)
#define MC_CGM_2_MUX_2_DIV_TRIG_CTRL_HHEN_WIDTH  (1U)
#define MC_CGM_2_MUX_2_DIV_TRIG_CTRL_HHEN(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_DIV_TRIG_CTRL_HHEN_SHIFT)) & MC_CGM_2_MUX_2_DIV_TRIG_CTRL_HHEN_MASK)
/*! @} */

/*! @name MUX_2_DIV_TRIG - Clock Mux 2 Divider Trigger Register */
/*! @{ */

#define MC_CGM_2_MUX_2_DIV_TRIG_TRIGGER_MASK     (0xFFFFFFFFU)
#define MC_CGM_2_MUX_2_DIV_TRIG_TRIGGER_SHIFT    (0U)
#define MC_CGM_2_MUX_2_DIV_TRIG_TRIGGER_WIDTH    (32U)
#define MC_CGM_2_MUX_2_DIV_TRIG_TRIGGER(x)       (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_DIV_TRIG_TRIGGER_SHIFT)) & MC_CGM_2_MUX_2_DIV_TRIG_TRIGGER_MASK)
/*! @} */

/*! @name MUX_2_DIV_UPD_STAT - Clock Mux 2 Divider Update Status Register */
/*! @{ */

#define MC_CGM_2_MUX_2_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_2_MUX_2_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_2_MUX_2_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_2_MUX_2_DIV_UPD_STAT_DIV_STAT(x)  (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_2_MUX_2_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_3_CSC - Clock Mux 3 Select Control Register */
/*! @{ */

#define MC_CGM_2_MUX_3_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_3_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_3_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_3_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_3_CSC_CLK_SW_MASK)

#define MC_CGM_2_MUX_3_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_3_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_3_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_3_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_3_CSC_SAFE_SW_MASK)

#define MC_CGM_2_MUX_3_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_3_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_3_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_3_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_3_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_3_CSS - Clock Mux 3 Select Status Register */
/*! @{ */

#define MC_CGM_2_MUX_3_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_3_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_3_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_3_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_3_CSS_CLK_SW_MASK)

#define MC_CGM_2_MUX_3_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_3_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_3_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_3_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_3_CSS_SAFE_SW_MASK)

#define MC_CGM_2_MUX_3_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_3_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_3_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_3_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_3_CSS_SWIP_MASK)

#define MC_CGM_2_MUX_3_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_3_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_3_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_3_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_3_CSS_SWTRG_MASK)

#define MC_CGM_2_MUX_3_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_3_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_3_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_3_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_3_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_3_DC_0 - Clock Mux 3 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_2_MUX_3_DC_0_DIV_MASK             (0xFF0000U)
#define MC_CGM_2_MUX_3_DC_0_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_3_DC_0_DIV_WIDTH            (8U)
#define MC_CGM_2_MUX_3_DC_0_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_DC_0_DIV_SHIFT)) & MC_CGM_2_MUX_3_DC_0_DIV_MASK)

#define MC_CGM_2_MUX_3_DC_0_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_3_DC_0_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_3_DC_0_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_3_DC_0_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_DC_0_DE_SHIFT)) & MC_CGM_2_MUX_3_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_3_DC_1 - Clock Mux 3 Divider 1 Control Register */
/*! @{ */

#define MC_CGM_2_MUX_3_DC_1_DIV_MASK             (0x30000U)
#define MC_CGM_2_MUX_3_DC_1_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_3_DC_1_DIV_WIDTH            (2U)
#define MC_CGM_2_MUX_3_DC_1_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_DC_1_DIV_SHIFT)) & MC_CGM_2_MUX_3_DC_1_DIV_MASK)

#define MC_CGM_2_MUX_3_DC_1_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_3_DC_1_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_3_DC_1_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_3_DC_1_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_DC_1_DE_SHIFT)) & MC_CGM_2_MUX_3_DC_1_DE_MASK)
/*! @} */

/*! @name MUX_3_DIV_TRIG_CTRL - Clock Mux 3 Divider Trigger Control Register */
/*! @{ */

#define MC_CGM_2_MUX_3_DIV_TRIG_CTRL_TCTL_MASK   (0x1U)
#define MC_CGM_2_MUX_3_DIV_TRIG_CTRL_TCTL_SHIFT  (0U)
#define MC_CGM_2_MUX_3_DIV_TRIG_CTRL_TCTL_WIDTH  (1U)
#define MC_CGM_2_MUX_3_DIV_TRIG_CTRL_TCTL(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_DIV_TRIG_CTRL_TCTL_SHIFT)) & MC_CGM_2_MUX_3_DIV_TRIG_CTRL_TCTL_MASK)

#define MC_CGM_2_MUX_3_DIV_TRIG_CTRL_HHEN_MASK   (0x80000000U)
#define MC_CGM_2_MUX_3_DIV_TRIG_CTRL_HHEN_SHIFT  (31U)
#define MC_CGM_2_MUX_3_DIV_TRIG_CTRL_HHEN_WIDTH  (1U)
#define MC_CGM_2_MUX_3_DIV_TRIG_CTRL_HHEN(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_DIV_TRIG_CTRL_HHEN_SHIFT)) & MC_CGM_2_MUX_3_DIV_TRIG_CTRL_HHEN_MASK)
/*! @} */

/*! @name MUX_3_DIV_TRIG - Clock Mux 3 Divider Trigger Register */
/*! @{ */

#define MC_CGM_2_MUX_3_DIV_TRIG_TRIGGER_MASK     (0xFFFFFFFFU)
#define MC_CGM_2_MUX_3_DIV_TRIG_TRIGGER_SHIFT    (0U)
#define MC_CGM_2_MUX_3_DIV_TRIG_TRIGGER_WIDTH    (32U)
#define MC_CGM_2_MUX_3_DIV_TRIG_TRIGGER(x)       (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_DIV_TRIG_TRIGGER_SHIFT)) & MC_CGM_2_MUX_3_DIV_TRIG_TRIGGER_MASK)
/*! @} */

/*! @name MUX_3_DIV_UPD_STAT - Clock Mux 3 Divider Update Status Register */
/*! @{ */

#define MC_CGM_2_MUX_3_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_2_MUX_3_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_2_MUX_3_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_2_MUX_3_DIV_UPD_STAT_DIV_STAT(x)  (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_2_MUX_3_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_4_CSC - Clock Mux 4 Select Control Register */
/*! @{ */

#define MC_CGM_2_MUX_4_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_4_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_4_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_4_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_4_CSC_CLK_SW_MASK)

#define MC_CGM_2_MUX_4_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_4_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_4_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_4_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_4_CSC_SAFE_SW_MASK)

#define MC_CGM_2_MUX_4_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_4_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_4_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_4_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_4_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_4_CSS - Clock Mux 4 Select Status Register */
/*! @{ */

#define MC_CGM_2_MUX_4_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_4_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_4_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_4_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_4_CSS_CLK_SW_MASK)

#define MC_CGM_2_MUX_4_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_4_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_4_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_4_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_4_CSS_SAFE_SW_MASK)

#define MC_CGM_2_MUX_4_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_4_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_4_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_4_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_4_CSS_SWIP_MASK)

#define MC_CGM_2_MUX_4_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_4_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_4_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_4_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_4_CSS_SWTRG_MASK)

#define MC_CGM_2_MUX_4_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_4_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_4_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_4_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_4_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_5_CSC - Clock Mux 5 Select Control Register */
/*! @{ */

#define MC_CGM_2_MUX_5_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_5_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_5_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_5_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_5_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_5_CSC_CLK_SW_MASK)

#define MC_CGM_2_MUX_5_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_5_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_5_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_5_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_5_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_5_CSC_SAFE_SW_MASK)

#define MC_CGM_2_MUX_5_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_5_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_5_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_5_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_5_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_5_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_5_CSS - Clock Mux 5 Select Status Register */
/*! @{ */

#define MC_CGM_2_MUX_5_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_5_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_5_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_5_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_5_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_5_CSS_CLK_SW_MASK)

#define MC_CGM_2_MUX_5_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_5_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_5_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_5_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_5_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_5_CSS_SAFE_SW_MASK)

#define MC_CGM_2_MUX_5_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_5_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_5_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_5_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_5_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_5_CSS_SWIP_MASK)

#define MC_CGM_2_MUX_5_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_5_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_5_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_5_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_5_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_5_CSS_SWTRG_MASK)

#define MC_CGM_2_MUX_5_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_5_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_5_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_5_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_5_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_5_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_6_CSC - Clock Mux 6 Select Control Register */
/*! @{ */

#define MC_CGM_2_MUX_6_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_6_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_6_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_6_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_6_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_6_CSC_CLK_SW_MASK)

#define MC_CGM_2_MUX_6_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_6_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_6_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_6_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_6_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_6_CSC_SAFE_SW_MASK)

#define MC_CGM_2_MUX_6_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_6_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_6_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_6_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_6_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_6_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_6_CSS - Clock Mux 6 Select Status Register */
/*! @{ */

#define MC_CGM_2_MUX_6_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_6_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_6_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_6_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_6_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_6_CSS_CLK_SW_MASK)

#define MC_CGM_2_MUX_6_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_6_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_6_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_6_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_6_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_6_CSS_SAFE_SW_MASK)

#define MC_CGM_2_MUX_6_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_6_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_6_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_6_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_6_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_6_CSS_SWIP_MASK)

#define MC_CGM_2_MUX_6_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_6_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_6_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_6_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_6_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_6_CSS_SWTRG_MASK)

#define MC_CGM_2_MUX_6_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_6_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_6_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_6_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_6_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_6_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_7_CSC - Clock Mux 7 Select Control Register */
/*! @{ */

#define MC_CGM_2_MUX_7_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_7_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_7_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_7_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_7_CSC_CLK_SW_MASK)

#define MC_CGM_2_MUX_7_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_7_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_7_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_7_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_7_CSC_SAFE_SW_MASK)

#define MC_CGM_2_MUX_7_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_7_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_7_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_7_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_7_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_7_CSS - Clock Mux 7 Select Status Register */
/*! @{ */

#define MC_CGM_2_MUX_7_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_7_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_7_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_7_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_7_CSS_CLK_SW_MASK)

#define MC_CGM_2_MUX_7_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_7_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_7_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_7_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_7_CSS_SAFE_SW_MASK)

#define MC_CGM_2_MUX_7_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_7_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_7_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_7_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_7_CSS_SWIP_MASK)

#define MC_CGM_2_MUX_7_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_7_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_7_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_7_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_7_CSS_SWTRG_MASK)

#define MC_CGM_2_MUX_7_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_7_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_7_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_7_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_7_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_7_DC_0 - Clock Mux 7 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_2_MUX_7_DC_0_DIV_MASK             (0x3F0000U)
#define MC_CGM_2_MUX_7_DC_0_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_7_DC_0_DIV_WIDTH            (6U)
#define MC_CGM_2_MUX_7_DC_0_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_DC_0_DIV_SHIFT)) & MC_CGM_2_MUX_7_DC_0_DIV_MASK)

#define MC_CGM_2_MUX_7_DC_0_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_7_DC_0_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_7_DC_0_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_7_DC_0_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_DC_0_DE_SHIFT)) & MC_CGM_2_MUX_7_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_7_DIV_TRIG_CTRL - Clock Mux 7 Divider Trigger Control Register */
/*! @{ */

#define MC_CGM_2_MUX_7_DIV_TRIG_CTRL_TCTL_MASK   (0x1U)
#define MC_CGM_2_MUX_7_DIV_TRIG_CTRL_TCTL_SHIFT  (0U)
#define MC_CGM_2_MUX_7_DIV_TRIG_CTRL_TCTL_WIDTH  (1U)
#define MC_CGM_2_MUX_7_DIV_TRIG_CTRL_TCTL(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_DIV_TRIG_CTRL_TCTL_SHIFT)) & MC_CGM_2_MUX_7_DIV_TRIG_CTRL_TCTL_MASK)

#define MC_CGM_2_MUX_7_DIV_TRIG_CTRL_HHEN_MASK   (0x80000000U)
#define MC_CGM_2_MUX_7_DIV_TRIG_CTRL_HHEN_SHIFT  (31U)
#define MC_CGM_2_MUX_7_DIV_TRIG_CTRL_HHEN_WIDTH  (1U)
#define MC_CGM_2_MUX_7_DIV_TRIG_CTRL_HHEN(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_DIV_TRIG_CTRL_HHEN_SHIFT)) & MC_CGM_2_MUX_7_DIV_TRIG_CTRL_HHEN_MASK)
/*! @} */

/*! @name MUX_7_DIV_TRIG - Clock Mux 7 Divider Trigger Register */
/*! @{ */

#define MC_CGM_2_MUX_7_DIV_TRIG_TRIGGER_MASK     (0xFFFFFFFFU)
#define MC_CGM_2_MUX_7_DIV_TRIG_TRIGGER_SHIFT    (0U)
#define MC_CGM_2_MUX_7_DIV_TRIG_TRIGGER_WIDTH    (32U)
#define MC_CGM_2_MUX_7_DIV_TRIG_TRIGGER(x)       (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_DIV_TRIG_TRIGGER_SHIFT)) & MC_CGM_2_MUX_7_DIV_TRIG_TRIGGER_MASK)
/*! @} */

/*! @name MUX_7_DIV_UPD_STAT - Clock Mux 7 Divider Update Status Register */
/*! @{ */

#define MC_CGM_2_MUX_7_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_2_MUX_7_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_2_MUX_7_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_2_MUX_7_DIV_UPD_STAT_DIV_STAT(x)  (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_7_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_2_MUX_7_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_8_CSC - Clock Mux 8 Select Control Register */
/*! @{ */

#define MC_CGM_2_MUX_8_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_8_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_8_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_8_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_8_CSC_CLK_SW_MASK)

#define MC_CGM_2_MUX_8_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_8_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_8_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_8_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_8_CSC_SAFE_SW_MASK)

#define MC_CGM_2_MUX_8_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_8_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_8_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_8_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_8_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_8_CSS - Clock Mux 8 Select Status Register */
/*! @{ */

#define MC_CGM_2_MUX_8_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_8_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_8_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_8_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_8_CSS_CLK_SW_MASK)

#define MC_CGM_2_MUX_8_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_8_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_8_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_8_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_8_CSS_SAFE_SW_MASK)

#define MC_CGM_2_MUX_8_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_8_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_8_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_8_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_8_CSS_SWIP_MASK)

#define MC_CGM_2_MUX_8_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_8_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_8_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_8_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_8_CSS_SWTRG_MASK)

#define MC_CGM_2_MUX_8_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_8_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_8_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_8_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_8_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_8_DC_0 - Clock Mux 8 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_2_MUX_8_DC_0_DIV_MASK             (0x3F0000U)
#define MC_CGM_2_MUX_8_DC_0_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_8_DC_0_DIV_WIDTH            (6U)
#define MC_CGM_2_MUX_8_DC_0_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_DC_0_DIV_SHIFT)) & MC_CGM_2_MUX_8_DC_0_DIV_MASK)

#define MC_CGM_2_MUX_8_DC_0_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_8_DC_0_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_8_DC_0_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_8_DC_0_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_DC_0_DE_SHIFT)) & MC_CGM_2_MUX_8_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_8_DIV_TRIG_CTRL - Clock Mux 8 Divider Trigger Control Register */
/*! @{ */

#define MC_CGM_2_MUX_8_DIV_TRIG_CTRL_TCTL_MASK   (0x1U)
#define MC_CGM_2_MUX_8_DIV_TRIG_CTRL_TCTL_SHIFT  (0U)
#define MC_CGM_2_MUX_8_DIV_TRIG_CTRL_TCTL_WIDTH  (1U)
#define MC_CGM_2_MUX_8_DIV_TRIG_CTRL_TCTL(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_DIV_TRIG_CTRL_TCTL_SHIFT)) & MC_CGM_2_MUX_8_DIV_TRIG_CTRL_TCTL_MASK)

#define MC_CGM_2_MUX_8_DIV_TRIG_CTRL_HHEN_MASK   (0x80000000U)
#define MC_CGM_2_MUX_8_DIV_TRIG_CTRL_HHEN_SHIFT  (31U)
#define MC_CGM_2_MUX_8_DIV_TRIG_CTRL_HHEN_WIDTH  (1U)
#define MC_CGM_2_MUX_8_DIV_TRIG_CTRL_HHEN(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_DIV_TRIG_CTRL_HHEN_SHIFT)) & MC_CGM_2_MUX_8_DIV_TRIG_CTRL_HHEN_MASK)
/*! @} */

/*! @name MUX_8_DIV_TRIG - Clock Mux 8 Divider Trigger Register */
/*! @{ */

#define MC_CGM_2_MUX_8_DIV_TRIG_TRIGGER_MASK     (0xFFFFFFFFU)
#define MC_CGM_2_MUX_8_DIV_TRIG_TRIGGER_SHIFT    (0U)
#define MC_CGM_2_MUX_8_DIV_TRIG_TRIGGER_WIDTH    (32U)
#define MC_CGM_2_MUX_8_DIV_TRIG_TRIGGER(x)       (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_DIV_TRIG_TRIGGER_SHIFT)) & MC_CGM_2_MUX_8_DIV_TRIG_TRIGGER_MASK)
/*! @} */

/*! @name MUX_8_DIV_UPD_STAT - Clock Mux 8 Divider Update Status Register */
/*! @{ */

#define MC_CGM_2_MUX_8_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_2_MUX_8_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_2_MUX_8_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_2_MUX_8_DIV_UPD_STAT_DIV_STAT(x)  (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_8_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_2_MUX_8_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_9_CSC - Clock Mux 9 Select Control Register */
/*! @{ */

#define MC_CGM_2_MUX_9_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_9_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_9_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_9_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_9_CSC_CLK_SW_MASK)

#define MC_CGM_2_MUX_9_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_9_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_9_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_9_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_9_CSC_SAFE_SW_MASK)

#define MC_CGM_2_MUX_9_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_9_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_9_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_9_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_9_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_9_CSS - Clock Mux 9 Select Status Register */
/*! @{ */

#define MC_CGM_2_MUX_9_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_9_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_9_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_9_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_9_CSS_CLK_SW_MASK)

#define MC_CGM_2_MUX_9_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_9_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_9_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_9_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_9_CSS_SAFE_SW_MASK)

#define MC_CGM_2_MUX_9_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_9_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_9_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_9_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_9_CSS_SWIP_MASK)

#define MC_CGM_2_MUX_9_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_9_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_9_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_9_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_9_CSS_SWTRG_MASK)

#define MC_CGM_2_MUX_9_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_9_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_9_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_9_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_9_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_9_DC_0 - Clock Mux 9 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_2_MUX_9_DC_0_DIV_MASK             (0x3F0000U)
#define MC_CGM_2_MUX_9_DC_0_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_9_DC_0_DIV_WIDTH            (6U)
#define MC_CGM_2_MUX_9_DC_0_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_DC_0_DIV_SHIFT)) & MC_CGM_2_MUX_9_DC_0_DIV_MASK)

#define MC_CGM_2_MUX_9_DC_0_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_9_DC_0_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_9_DC_0_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_9_DC_0_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_DC_0_DE_SHIFT)) & MC_CGM_2_MUX_9_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_9_DIV_TRIG_CTRL - Clock Mux 9 Divider Trigger Control Register */
/*! @{ */

#define MC_CGM_2_MUX_9_DIV_TRIG_CTRL_TCTL_MASK   (0x1U)
#define MC_CGM_2_MUX_9_DIV_TRIG_CTRL_TCTL_SHIFT  (0U)
#define MC_CGM_2_MUX_9_DIV_TRIG_CTRL_TCTL_WIDTH  (1U)
#define MC_CGM_2_MUX_9_DIV_TRIG_CTRL_TCTL(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_DIV_TRIG_CTRL_TCTL_SHIFT)) & MC_CGM_2_MUX_9_DIV_TRIG_CTRL_TCTL_MASK)

#define MC_CGM_2_MUX_9_DIV_TRIG_CTRL_HHEN_MASK   (0x80000000U)
#define MC_CGM_2_MUX_9_DIV_TRIG_CTRL_HHEN_SHIFT  (31U)
#define MC_CGM_2_MUX_9_DIV_TRIG_CTRL_HHEN_WIDTH  (1U)
#define MC_CGM_2_MUX_9_DIV_TRIG_CTRL_HHEN(x)     (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_DIV_TRIG_CTRL_HHEN_SHIFT)) & MC_CGM_2_MUX_9_DIV_TRIG_CTRL_HHEN_MASK)
/*! @} */

/*! @name MUX_9_DIV_TRIG - Clock Mux 9 Divider Trigger Register */
/*! @{ */

#define MC_CGM_2_MUX_9_DIV_TRIG_TRIGGER_MASK     (0xFFFFFFFFU)
#define MC_CGM_2_MUX_9_DIV_TRIG_TRIGGER_SHIFT    (0U)
#define MC_CGM_2_MUX_9_DIV_TRIG_TRIGGER_WIDTH    (32U)
#define MC_CGM_2_MUX_9_DIV_TRIG_TRIGGER(x)       (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_DIV_TRIG_TRIGGER_SHIFT)) & MC_CGM_2_MUX_9_DIV_TRIG_TRIGGER_MASK)
/*! @} */

/*! @name MUX_9_DIV_UPD_STAT - Clock Mux 9 Divider Update Status Register */
/*! @{ */

#define MC_CGM_2_MUX_9_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_2_MUX_9_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_2_MUX_9_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_2_MUX_9_DIV_UPD_STAT_DIV_STAT(x)  (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_9_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_2_MUX_9_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group MC_CGM_2_Register_Masks */

/*!
 * @}
 */ /* end of group MC_CGM_2_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_MC_CGM_2_H_) */
