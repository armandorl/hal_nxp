/*
** ###################################################################
**     Processor:           S32R45_M7
**     Reference manual:    S32R45 RM Rev.3
**     Version:             rev. 2.4, 2022-02-14
**     Build:               b220214
**
**     Abstract:
**         Peripheral Access Layer for S32R45_M7
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
 * @file S32R45_SerDes_SS.h
 * @version 2.4
 * @date 2022-02-14
 * @brief Peripheral Access Layer for S32R45_SerDes_SS
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
#if !defined(S32R45_SerDes_SS_H_)  /* Check if memory map has not been already included */
#define S32R45_SerDes_SS_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SerDes_SS Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SerDes_SS_Peripheral_Access_Layer SerDes_SS Peripheral Access Layer
 * @{
 */

/** SerDes_SS - Register Layout Typedef */
typedef struct {
  __IO uint32_t PCIE_PHY_GEN_CTRL;                 /**< PCIe PHY General Control, offset: 0x0 */
  __IO uint32_t PCIE_PHY_LPBK_CTRL;                /**< PCIe PHY Loopback Control, offset: 0x4 */
  __IO uint32_t PCIE_PHY_SRAM_CSR;                 /**< PCIe PHY SRAM Control And Status, offset: 0x8 */
  uint8_t RESERVED_0[4];
  __IO uint32_t PCIE_PHY_MPLLA_CTRL;               /**< PCIe PHY MPLLA Control, offset: 0x10 */
  __IO uint32_t PCIE_PHY_MPLLB_CTRL;               /**< PCIe PHY MPLLB Control, offset: 0x14 */
  __IO uint32_t PCIE_PHY_EXT_CTRL_SEL;             /**< PCIe PHY Setting External Control, offset: 0x18 */
  __IO uint32_t PCIE_PHY_EXT_BS_CTRL;              /**< PCIe PHY Boundary Scan Control, offset: 0x1C */
  __IO uint32_t PCIE_PHY_REF_CLK_CTRL;             /**< PCIe Reference Clock Control, offset: 0x20 */
  uint8_t RESERVED_1[12];
  __IO uint32_t PCIE_PHY_EXT_MPLLA_CTRL_1;         /**< PCIe PHY MPLLA Control 1, offset: 0x30 */
  __IO uint32_t PCIE_PHY_EXT_MPLLA_CTRL_2;         /**< PCIe PHY MPLLA Control 2, offset: 0x34 */
  __IO uint32_t PCIE_PHY_EXT_MPLLA_CTRL_3;         /**< PCIe PHY MPLLA Control 3, offset: 0x38 */
  uint8_t RESERVED_2[4];
  __IO uint32_t PCIE_PHY_EXT_MPLLB_CTRL_1;         /**< PCIe PHY MPLLB Control 1, offset: 0x40 */
  __IO uint32_t PCIE_PHY_EXT_MPLLB_CTRL_2;         /**< PCIe PHY MPLLB Control 2, offset: 0x44 */
  __IO uint32_t PCIE_PHY_EXT_MPLLB_CTRL_3;         /**< PCIe PHY MPLLB Control 3, offset: 0x48 */
  uint8_t RESERVED_3[4];
  __IO uint32_t PCIE_PHY_EXT_RX_EQ_CTRL_1A;        /**< PCIe PHY RX Equalization Control 1 For Gen1 Speed, offset: 0x50 */
  __IO uint32_t PCIE_PHY_EXT_RX_EQ_CTRL_1B;        /**< PCIe PHY RX Equalization Control 2 For Gen1 Speed, offset: 0x54 */
  __IO uint32_t PCIE_PHY_EXT_RX_EQ_CTRL_1C;        /**< PCIe PHY RX Equalization Control 3 For Gen1 Speed, offset: 0x58 */
  uint8_t RESERVED_4[4];
  __IO uint32_t PCIE_PHY_EXT_RX_EQ_CTRL_2A;        /**< PCIe PHY RX Equalization Control 1 For Gen2 Speed, offset: 0x60 */
  __IO uint32_t PCIE_PHY_EXT_RX_EQ_CTRL_2B;        /**< PCIe PHY RX Equalization Control 2 For Gen2 Speed, offset: 0x64 */
  __IO uint32_t PCIE_PHY_EXT_RX_EQ_CTRL_2C;        /**< PCIe PHY RX Equalization Control 3 For Gen2 Speed, offset: 0x68 */
  uint8_t RESERVED_5[4];
  __IO uint32_t PCIE_PHY_EXT_RX_EQ_CTRL_3A;        /**< PCIe PHY RX Equalization Control 1 For Gen3 Speed, offset: 0x70 */
  __IO uint32_t PCIE_PHY_EXT_RX_EQ_CTRL_3B;        /**< PCIe PHY RX Equalization Control 2 For Gen3 Speed, offset: 0x74 */
  __IO uint32_t PCIE_PHY_EXT_RX_EQ_CTRL_3C;        /**< PCIe PHY RX Equalization Control 3 For Gen3 Speed, offset: 0x78 */
  uint8_t RESERVED_6[4];
  __IO uint32_t PCIE_PHY_EXT_RX_EQ_CTRL_4A;        /**< PCIe PHY RX Equalization Control 1 For Gen4 Speed, offset: 0x80 */
  __IO uint32_t PCIE_PHY_EXT_RX_EQ_CTRL_4B;        /**< PCIe PHY RX Equalization Control 2 For Gen4 Speed, offset: 0x84 */
  __IO uint32_t PCIE_PHY_EXT_RX_EQ_CTRL_4C;        /**< PCIe PHY RX Equalization Control 3 For Gen4 Speed, offset: 0x88 */
  uint8_t RESERVED_7[4];
  __IO uint32_t PCIE_PHY_EXT_CALI_CTRL_1;          /**< PCIe PHY Calibration Control For Gen1 Speed, offset: 0x90 */
  __IO uint32_t PCIE_PHY_EXT_CALI_CTRL_2;          /**< PCIe PHY Calibration Control For Gen2 Speed, offset: 0x94 */
  __IO uint32_t PCIE_PHY_EXT_CALI_CTRL_3;          /**< PCIe PHY Calibration Control For Gen3 Speed, offset: 0x98 */
  __IO uint32_t PCIE_PHY_EXT_CALI_CTRL_4;          /**< PCIe PHY Calibration Control For Gen4 Speed, offset: 0x9C */
  __IO uint32_t PCIE_PHY_EXT_MISC_CTRL_1;          /**< PCIe PHY Miscellaneous Control 1, offset: 0xA0 */
  __IO uint32_t PCIE_PHY_EXT_MISC_CTRL_2;          /**< PCIe PHY Miscellaneous Control 2, offset: 0xA4 */
  uint8_t RESERVED_8[8];
  __IO uint32_t PCIE_PHY_EXT_TX_EQ_CTRL_1;         /**< PCIe PHY TX Equalization Control For Gen1 Speed, offset: 0xB0 */
  __IO uint32_t PCIE_PHY_EXT_TX_EQ_CTRL_2;         /**< PCIe PHY TX Equalization Control For Gen2 Speed, offset: 0xB4 */
  __IO uint32_t PCIE_PHY_EXT_TX_EQ_CTRL_3;         /**< PCIe PHY TX Equalization Control For Gen3 Speed, offset: 0xB8 */
  uint8_t RESERVED_9[4];
  __IO uint32_t PCIE_PHY_XPCS0_RX_OVRD_CTRL;       /**< PCIe PHY XPCS_0 Rx Override Control, offset: 0xC0 */
  uint8_t RESERVED_10[12];
  __IO uint32_t PCIE_PHY_XPCS1_RX_OVRD_CTRL;       /**< PCIe PHY XPCS_1 Rx Override Control, offset: 0xD0 */
  uint8_t RESERVED_11[12];
  __I  uint32_t SS_RO_REG_0;                       /**< Subsystem Read-Only Register 0, offset: 0xE0 */
  __I  uint32_t SS_RO_REG_1;                       /**< Subsystem Read-Only Register 1, offset: 0xE4 */
  __I  uint32_t SS_RO_REG_2;                       /**< Subsystem Read-Only Register 2, offset: 0xE8 */
  __I  uint32_t SS_RO_REG_3;                       /**< Subsystem Read-Only Register 3, offset: 0xEC */
  __IO uint32_t SS_RW_REG_0;                       /**< Subsystem Read/Write Register 0, offset: 0xF0 */
  __IO uint32_t SS_RW_REG_1;                       /**< Subsystem Read/Write Register 1, offset: 0xF4 */
  __IO uint32_t SS_RW_REG_2;                       /**< Subsystem Read/Write Register 2, offset: 0xF8 */
  __IO uint32_t SS_RW_REG_3;                       /**< Subsystem Read/Write Register 3, offset: 0xFC */
  __IO uint32_t SS_RW_REG_4;                       /**< Subsystem Read/Write Register 4, offset: 0x100 */
  __IO uint32_t SS_RW_REG_5;                       /**< Subsystem Read/Write Register 5, offset: 0x104 */
  uint8_t RESERVED_12[3832];
  __I  uint32_t PCIE_SUBSYSTEM_VERSION;            /**< PCIe Subsystem Version, offset: 0x1000 */
  uint8_t RESERVED_13[60];
  __IO uint32_t LINK_INT_CTRL_STS;                 /**< Link Interrupt Control And Status, offset: 0x1040 */
  uint8_t RESERVED_14[12];
  __IO uint32_t PE0_GEN_CTRL_1;                    /**< PCIe Controller 0 General Control 1, offset: 0x1050 */
  __IO uint32_t PE0_GEN_CTRL_2;                    /**< PCIe Controller 0 General Control 2, offset: 0x1054 */
  __IO uint32_t PE0_GEN_CTRL_3;                    /**< PCIe Controller 0 General Control 3, offset: 0x1058 */
  __IO uint32_t PE0_GEN_CTRL_4;                    /**< PCIe Controller 0 General Control 4, offset: 0x105C */
  __IO uint32_t PE0_PM_CTRL;                       /**< PCIe Controller 0 PM Control, offset: 0x1060 */
  __IO uint32_t PE0_PM_STS;                        /**< PCIe Controller 0 PM Status, offset: 0x1064 */
  uint8_t RESERVED_15[8];
  __IO uint32_t PE0_TX_MSG_HDR_1;                  /**< PCIe Controller 0 Transmit Message Header 1, offset: 0x1070 */
  __IO uint32_t PE0_TX_MSG_HDR_2;                  /**< PCIe Controller 0 Transmit Message Header 2, offset: 0x1074 */
  __IO uint32_t PE0_TX_MSG_HDR_3;                  /**< PCIe Controller 0 Transmit Message Header 3, offset: 0x1078 */
  __IO uint32_t PE0_TX_MSG_HDR_4;                  /**< PCIe controller 0 transmit message header 4, offset: 0x107C */
  __IO uint32_t PE0_TX_MSG_REQ;                    /**< PCIe Controller 0 Transmit Message Request, offset: 0x1080 */
  uint8_t RESERVED_16[12];
  __I  uint32_t PE0_RX_MSG_HDR_1;                  /**< PCIe Controller 0 Receive Message Header 1, offset: 0x1090 */
  __I  uint32_t PE0_RX_MSG_HDR_2;                  /**< PCIe Controller 0 Receive Message Header 2, offset: 0x1094 */
  __I  uint32_t PE0_RX_MSG_HDR_3;                  /**< PCIe Controller 0 Receive Message Header 3, offset: 0x1098 */
  __I  uint32_t PE0_RX_MSG_HDR_4;                  /**< PCIe Controller 0 Receive Message Header 4, offset: 0x109C */
  __IO uint32_t PE0_RX_MSG_STS;                    /**< PCIe Controller 0 Receive Message Status, offset: 0x10A0 */
  __IO uint32_t PE0_RX_MSG_CAP_CTRL;               /**< PCIe Controller 0 Receive Message Capture Control, offset: 0x10A4 */
  __IO uint32_t PE0_RX_MSG_INT_CTRL;               /**< PCIe Controller 0 Receive Message Interrupt Control, offset: 0x10A8 */
  uint8_t RESERVED_17[4];
  __I  uint32_t PE0_LINK_DBG_1;                    /**< PCIe Controller 0 Link Debug 1, offset: 0x10B0 */
  __I  uint32_t PE0_LINK_DBG_2;                    /**< PCIe Controller 0 Link Debug 2, offset: 0x10B4 */
  uint8_t RESERVED_18[8];
  __I  uint32_t PE0_AXI_MSTR_DBG_1;                /**< PCIe Controller 0 AXI Master Debug 1, offset: 0x10C0 */
  __I  uint32_t PE0_AXI_MSTR_DBG_2;                /**< PCIe Controller 0 AXI Master Debug 2, offset: 0x10C4 */
  uint8_t RESERVED_19[8];
  __I  uint32_t PE0_AXI_SLV_DBG_1;                 /**< PCIe Controller 0 AXI Slave Debug 1, offset: 0x10D0 */
  __I  uint32_t PE0_AXI_SLV_DBG_2;                 /**< PCIe Controller 0 AXI Slave Debug 2, offset: 0x10D4 */
  uint8_t RESERVED_20[8];
  __IO uint32_t PE0_ERR_STS;                       /**< PCIe Controller 0 Error Status, offset: 0x10E0 */
  __IO uint32_t PE0_ERR_INT_CTRL;                  /**< PCIe Controller 0 Error Interrupt Control, offset: 0x10E4 */
  __IO uint32_t PE0_INT_STS;                       /**< PCIe Controller 0 Interrupt Status, offset: 0x10E8 */
  __IO uint32_t PE0_MSI_GEN_CTRL;                  /**< PCIe Controller 0 MSI Generation Control, offset: 0x10EC */
  __IO uint32_t PE0_FSM_TRACK_1;                   /**< PCIe Controller 0 FSM Track 1, offset: 0x10F0 */
  __I  uint32_t PE0_FSM_TRACK_2;                   /**< PCIe Controller 0 FSM Track 2, offset: 0x10F4 */
  uint8_t RESERVED_21[7944];
  __IO uint32_t APB_BRIDGE_TO_CTRL;                /**< APB Bridge Timeout Control, offset: 0x3000 */
  uint8_t RESERVED_22[4];
  __IO uint32_t PHY_REG_ADDR;                      /**< PHY Register Address, offset: 0x3008 */
  __IO uint32_t PHY_REG_DATA;                      /**< PHY Register Data, offset: 0x300C */
  __IO uint32_t RST_CTRL;                          /**< Reset Control, offset: 0x3010 */
} SerDes_SS_Type, *SerDes_SS_MemMapPtr;

/** Number of instances of the SerDes_SS module. */
#define SerDes_SS_INSTANCE_COUNT                 (1u)

/* SerDes_SS - Peripheral instance base addresses */
/** Peripheral SERDES_SS base address */
#define IP_SERDES_SS_BASE                        (0x80000u)
/** Peripheral SERDES_SS base pointer */
#define IP_SERDES_SS                             ((SerDes_SS_Type *)IP_SERDES_SS_BASE)
/** Array initializer of SerDes_SS peripheral base addresses */
#define IP_SerDes_SS_BASE_ADDRS                  { IP_SERDES_SS_BASE }
/** Array initializer of SerDes_SS peripheral base pointers */
#define IP_SerDes_SS_BASE_PTRS                   { IP_SERDES_SS }

/* ----------------------------------------------------------------------------
   -- SerDes_SS Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SerDes_SS_Register_Masks SerDes_SS Register Masks
 * @{
 */

/*! @name PCIE_PHY_GEN_CTRL - PCIe PHY General Control */
/*! @{ */

#define SerDes_SS_PCIE_PHY_GEN_CTRL_EXT_PCLK_REQ_MASK (0x1U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_EXT_PCLK_REQ_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_EXT_PCLK_REQ_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_EXT_PCLK_REQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_GEN_CTRL_EXT_PCLK_REQ_SHIFT)) & SerDes_SS_PCIE_PHY_GEN_CTRL_EXT_PCLK_REQ_MASK)

#define SerDes_SS_PCIE_PHY_GEN_CTRL_CR_PARA_CLK_DIV2_EN_MASK (0x4U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_CR_PARA_CLK_DIV2_EN_SHIFT (2U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_CR_PARA_CLK_DIV2_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_CR_PARA_CLK_DIV2_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_GEN_CTRL_CR_PARA_CLK_DIV2_EN_SHIFT)) & SerDes_SS_PCIE_PHY_GEN_CTRL_CR_PARA_CLK_DIV2_EN_MASK)

#define SerDes_SS_PCIE_PHY_GEN_CTRL_RX_SRIS_MODE_MASK (0x200U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_RX_SRIS_MODE_SHIFT (9U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_RX_SRIS_MODE_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_RX_SRIS_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_GEN_CTRL_RX_SRIS_MODE_SHIFT)) & SerDes_SS_PCIE_PHY_GEN_CTRL_RX_SRIS_MODE_MASK)

#define SerDes_SS_PCIE_PHY_GEN_CTRL_RX0_TERM_ACDC_MASK (0x400U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_RX0_TERM_ACDC_SHIFT (10U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_RX0_TERM_ACDC_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_RX0_TERM_ACDC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_GEN_CTRL_RX0_TERM_ACDC_SHIFT)) & SerDes_SS_PCIE_PHY_GEN_CTRL_RX0_TERM_ACDC_MASK)

#define SerDes_SS_PCIE_PHY_GEN_CTRL_RX1_TERM_ACDC_MASK (0x800U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_RX1_TERM_ACDC_SHIFT (11U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_RX1_TERM_ACDC_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_RX1_TERM_ACDC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_GEN_CTRL_RX1_TERM_ACDC_SHIFT)) & SerDes_SS_PCIE_PHY_GEN_CTRL_RX1_TERM_ACDC_MASK)

#define SerDes_SS_PCIE_PHY_GEN_CTRL_REF_REPEAT_CLK_EN_MASK (0x10000U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_REF_REPEAT_CLK_EN_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_REF_REPEAT_CLK_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_REF_REPEAT_CLK_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_GEN_CTRL_REF_REPEAT_CLK_EN_SHIFT)) & SerDes_SS_PCIE_PHY_GEN_CTRL_REF_REPEAT_CLK_EN_MASK)

#define SerDes_SS_PCIE_PHY_GEN_CTRL_REF_USE_PAD_MASK (0x20000U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_REF_USE_PAD_SHIFT (17U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_REF_USE_PAD_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_REF_USE_PAD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_GEN_CTRL_REF_USE_PAD_SHIFT)) & SerDes_SS_PCIE_PHY_GEN_CTRL_REF_USE_PAD_MASK)

#define SerDes_SS_PCIE_PHY_GEN_CTRL_PHY_RTUNE_REQ_MASK (0x1000000U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_PHY_RTUNE_REQ_SHIFT (24U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_PHY_RTUNE_REQ_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_PHY_RTUNE_REQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_GEN_CTRL_PHY_RTUNE_REQ_SHIFT)) & SerDes_SS_PCIE_PHY_GEN_CTRL_PHY_RTUNE_REQ_MASK)

#define SerDes_SS_PCIE_PHY_GEN_CTRL_PHY_RTUNE_STS_MASK (0x2000000U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_PHY_RTUNE_STS_SHIFT (25U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_PHY_RTUNE_STS_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_GEN_CTRL_PHY_RTUNE_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_GEN_CTRL_PHY_RTUNE_STS_SHIFT)) & SerDes_SS_PCIE_PHY_GEN_CTRL_PHY_RTUNE_STS_MASK)
/*! @} */

/*! @name PCIE_PHY_LPBK_CTRL - PCIe PHY Loopback Control */
/*! @{ */

#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE0_TX2RX_LOOPBK_MASK (0x1U)
#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE0_TX2RX_LOOPBK_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE0_TX2RX_LOOPBK_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE0_TX2RX_LOOPBK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE0_TX2RX_LOOPBK_SHIFT)) & SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE0_TX2RX_LOOPBK_MASK)

#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE0_RX2TX_PAR_LB_EN_MASK (0x2U)
#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE0_RX2TX_PAR_LB_EN_SHIFT (1U)
#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE0_RX2TX_PAR_LB_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE0_RX2TX_PAR_LB_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE0_RX2TX_PAR_LB_EN_SHIFT)) & SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE0_RX2TX_PAR_LB_EN_MASK)

#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE1_TX2RX_LOOPBK_MASK (0x4U)
#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE1_TX2RX_LOOPBK_SHIFT (2U)
#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE1_TX2RX_LOOPBK_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE1_TX2RX_LOOPBK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE1_TX2RX_LOOPBK_SHIFT)) & SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE1_TX2RX_LOOPBK_MASK)

#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE1_RX2TX_PAR_LB_EN_MASK (0x8U)
#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE1_RX2TX_PAR_LB_EN_SHIFT (3U)
#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE1_RX2TX_PAR_LB_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE1_RX2TX_PAR_LB_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE1_RX2TX_PAR_LB_EN_SHIFT)) & SerDes_SS_PCIE_PHY_LPBK_CTRL_LANE1_RX2TX_PAR_LB_EN_MASK)
/*! @} */

/*! @name PCIE_PHY_SRAM_CSR - PCIe PHY SRAM Control And Status */
/*! @{ */

#define SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_BYPASS_MASK (0x1U)
#define SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_BYPASS_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_BYPASS_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_BYPASS_SHIFT)) & SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_BYPASS_MASK)

#define SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_EXT_LD_DONE_MASK (0x2U)
#define SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_EXT_LD_DONE_SHIFT (1U)
#define SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_EXT_LD_DONE_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_EXT_LD_DONE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_EXT_LD_DONE_SHIFT)) & SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_EXT_LD_DONE_MASK)

#define SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_INIT_DONE_MASK (0x4U)
#define SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_INIT_DONE_SHIFT (2U)
#define SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_INIT_DONE_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_INIT_DONE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_INIT_DONE_SHIFT)) & SerDes_SS_PCIE_PHY_SRAM_CSR_SRAM_INIT_DONE_MASK)
/*! @} */

/*! @name PCIE_PHY_MPLLA_CTRL - PCIe PHY MPLLA Control */
/*! @{ */

#define SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLLA_FORCE_EN_MASK (0x1U)
#define SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLLA_FORCE_EN_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLLA_FORCE_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLLA_FORCE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLLA_FORCE_EN_SHIFT)) & SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLLA_FORCE_EN_MASK)

#define SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLL_STATE_MASK (0x40000000U)
#define SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLL_STATE_SHIFT (30U)
#define SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLL_STATE_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLL_STATE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLL_STATE_SHIFT)) & SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLL_STATE_MASK)

#define SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLLA_STATE_MASK (0x80000000U)
#define SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLLA_STATE_SHIFT (31U)
#define SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLLA_STATE_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLLA_STATE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLLA_STATE_SHIFT)) & SerDes_SS_PCIE_PHY_MPLLA_CTRL_MPLLA_STATE_MASK)
/*! @} */

/*! @name PCIE_PHY_MPLLB_CTRL - PCIe PHY MPLLB Control */
/*! @{ */

#define SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLLB_FORCE_EN_MASK (0x1U)
#define SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLLB_FORCE_EN_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLLB_FORCE_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLLB_FORCE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLLB_FORCE_EN_SHIFT)) & SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLLB_FORCE_EN_MASK)

#define SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLL_STATE_MASK (0x40000000U)
#define SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLL_STATE_SHIFT (30U)
#define SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLL_STATE_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLL_STATE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLL_STATE_SHIFT)) & SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLL_STATE_MASK)

#define SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLLB_STATE_MASK (0x80000000U)
#define SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLLB_STATE_SHIFT (31U)
#define SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLLB_STATE_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLLB_STATE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLLB_STATE_SHIFT)) & SerDes_SS_PCIE_PHY_MPLLB_CTRL_MPLLB_STATE_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_CTRL_SEL - PCIe PHY Setting External Control */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_CTRL_SEL_EXT_PHY_CTRL_SEL_MASK (0x1U)
#define SerDes_SS_PCIE_PHY_EXT_CTRL_SEL_EXT_PHY_CTRL_SEL_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_CTRL_SEL_EXT_PHY_CTRL_SEL_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_CTRL_SEL_EXT_PHY_CTRL_SEL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_CTRL_SEL_EXT_PHY_CTRL_SEL_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_CTRL_SEL_EXT_PHY_CTRL_SEL_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_BS_CTRL - PCIe PHY Boundary Scan Control */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_RX_LEVEL_MASK (0x1FU)
#define SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_RX_LEVEL_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_RX_LEVEL_WIDTH (5U)
#define SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_RX_LEVEL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_RX_LEVEL_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_RX_LEVEL_MASK)

#define SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_RX_BIGSWING_MASK (0x20U)
#define SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_RX_BIGSWING_SHIFT (5U)
#define SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_RX_BIGSWING_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_RX_BIGSWING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_RX_BIGSWING_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_RX_BIGSWING_MASK)

#define SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_TX_LOWSWING_MASK (0x40U)
#define SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_TX_LOWSWING_SHIFT (6U)
#define SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_TX_LOWSWING_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_TX_LOWSWING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_TX_LOWSWING_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_BS_CTRL_EXT_BS_TX_LOWSWING_MASK)
/*! @} */

/*! @name PCIE_PHY_REF_CLK_CTRL - PCIe Reference Clock Control */
/*! @{ */

#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_MPLLA_DIV2_EN_MASK (0x1U)
#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_MPLLA_DIV2_EN_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_MPLLA_DIV2_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_MPLLA_DIV2_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_MPLLA_DIV2_EN_SHIFT)) & SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_MPLLA_DIV2_EN_MASK)

#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_MPLLB_DIV2_EN_MASK (0x2U)
#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_MPLLB_DIV2_EN_SHIFT (1U)
#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_MPLLB_DIV2_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_MPLLB_DIV2_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_MPLLB_DIV2_EN_SHIFT)) & SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_MPLLB_DIV2_EN_MASK)

#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_DIV2_EN_MASK (0x4U)
#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_DIV2_EN_SHIFT (2U)
#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_DIV2_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_DIV2_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_DIV2_EN_SHIFT)) & SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_CLK_DIV2_EN_MASK)

#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_RANGE_MASK (0x38U)
#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_RANGE_SHIFT (3U)
#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_RANGE_WIDTH (3U)
#define SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_RANGE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_RANGE_SHIFT)) & SerDes_SS_PCIE_PHY_REF_CLK_CTRL_REF_RANGE_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_MPLLA_CTRL_1 - PCIe PHY MPLLA Control 1 */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_BANDWIDTH_MASK (0xFFFFU)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_BANDWIDTH_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_BANDWIDTH_WIDTH (16U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_BANDWIDTH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_BANDWIDTH_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_BANDWIDTH_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV10_CLK_EN_MASK (0x10000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV10_CLK_EN_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV10_CLK_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV10_CLK_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV10_CLK_EN_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV10_CLK_EN_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV16P5_CLK_EN_MASK (0x20000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV16P5_CLK_EN_SHIFT (17U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV16P5_CLK_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV16P5_CLK_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV16P5_CLK_EN_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV16P5_CLK_EN_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV8_CLK_EN_MASK (0x40000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV8_CLK_EN_SHIFT (18U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV8_CLK_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV8_CLK_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV8_CLK_EN_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV8_CLK_EN_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV_CLK_EN_MASK (0x80000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV_CLK_EN_SHIFT (19U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV_CLK_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV_CLK_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV_CLK_EN_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV_CLK_EN_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV_MULTIPLIER_MASK (0xFF000000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV_MULTIPLIER_SHIFT (24U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV_MULTIPLIER_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV_MULTIPLIER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV_MULTIPLIER_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_1_EXT_MPLLA_DIV_MULTIPLIER_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_MPLLA_CTRL_2 - PCIe PHY MPLLA Control 2 */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_2_EXT_MPLLA_MULTIPLIER_MASK (0xFFU)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_2_EXT_MPLLA_MULTIPLIER_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_2_EXT_MPLLA_MULTIPLIER_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_2_EXT_MPLLA_MULTIPLIER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_2_EXT_MPLLA_MULTIPLIER_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_2_EXT_MPLLA_MULTIPLIER_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_2_EXT_MPLLA_FRACN_CTRL_MASK (0x7FF000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_2_EXT_MPLLA_FRACN_CTRL_SHIFT (12U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_2_EXT_MPLLA_FRACN_CTRL_WIDTH (11U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_2_EXT_MPLLA_FRACN_CTRL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_2_EXT_MPLLA_FRACN_CTRL_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_2_EXT_MPLLA_FRACN_CTRL_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_MPLLA_CTRL_3 - PCIe PHY MPLLA Control 3 */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_3_EXT_MPLLA_TX_CLK_DIV_MASK (0x70000000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_3_EXT_MPLLA_TX_CLK_DIV_SHIFT (28U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_3_EXT_MPLLA_TX_CLK_DIV_WIDTH (3U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_3_EXT_MPLLA_TX_CLK_DIV(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_3_EXT_MPLLA_TX_CLK_DIV_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_3_EXT_MPLLA_TX_CLK_DIV_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_3_EXT_MPLLA_WORD_DIV2_EN_MASK (0x80000000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_3_EXT_MPLLA_WORD_DIV2_EN_SHIFT (31U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_3_EXT_MPLLA_WORD_DIV2_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_3_EXT_MPLLA_WORD_DIV2_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_3_EXT_MPLLA_WORD_DIV2_EN_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLA_CTRL_3_EXT_MPLLA_WORD_DIV2_EN_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_MPLLB_CTRL_1 - PCIe PHY MPLLB Control 1 */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_BANDWIDTH_MASK (0xFFFFU)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_BANDWIDTH_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_BANDWIDTH_WIDTH (16U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_BANDWIDTH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_BANDWIDTH_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_BANDWIDTH_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV10_CLK_EN_MASK (0x10000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV10_CLK_EN_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV10_CLK_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV10_CLK_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV10_CLK_EN_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV10_CLK_EN_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV8_CLK_EN_MASK (0x40000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV8_CLK_EN_SHIFT (18U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV8_CLK_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV8_CLK_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV8_CLK_EN_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV8_CLK_EN_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV_CLK_EN_MASK (0x80000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV_CLK_EN_SHIFT (19U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV_CLK_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV_CLK_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV_CLK_EN_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV_CLK_EN_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV_MULTIPLIER_MASK (0xFF000000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV_MULTIPLIER_SHIFT (24U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV_MULTIPLIER_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV_MULTIPLIER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV_MULTIPLIER_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_1_EXT_MPLLB_DIV_MULTIPLIER_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_MPLLB_CTRL_2 - PCIe PHY MPLLB Control 2 */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_2_EXT_MPLLB_MULTIPLIER_MASK (0xFFU)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_2_EXT_MPLLB_MULTIPLIER_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_2_EXT_MPLLB_MULTIPLIER_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_2_EXT_MPLLB_MULTIPLIER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_2_EXT_MPLLB_MULTIPLIER_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_2_EXT_MPLLB_MULTIPLIER_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_2_EXT_MPLLB_FRACN_CTRL_MASK (0x7FF000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_2_EXT_MPLLB_FRACN_CTRL_SHIFT (12U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_2_EXT_MPLLB_FRACN_CTRL_WIDTH (11U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_2_EXT_MPLLB_FRACN_CTRL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_2_EXT_MPLLB_FRACN_CTRL_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_2_EXT_MPLLB_FRACN_CTRL_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_MPLLB_CTRL_3 - PCIe PHY MPLLB Control 3 */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_3_EXT_MPLLB_TX_CLK_DIV_MASK (0x70000000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_3_EXT_MPLLB_TX_CLK_DIV_SHIFT (28U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_3_EXT_MPLLB_TX_CLK_DIV_WIDTH (3U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_3_EXT_MPLLB_TX_CLK_DIV(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_3_EXT_MPLLB_TX_CLK_DIV_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_3_EXT_MPLLB_TX_CLK_DIV_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_3_EXT_MPLLB_WORD_DIV2_EN_MASK (0x80000000U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_3_EXT_MPLLB_WORD_DIV2_EN_SHIFT (31U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_3_EXT_MPLLB_WORD_DIV2_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_3_EXT_MPLLB_WORD_DIV2_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_3_EXT_MPLLB_WORD_DIV2_EN_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MPLLB_CTRL_3_EXT_MPLLB_WORD_DIV2_EN_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_RX_EQ_CTRL_1A - PCIe PHY RX Equalization Control 1 For Gen1 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_ADAPT_AFE_EN_G1_MASK (0x3U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_ADAPT_AFE_EN_G1_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_ADAPT_AFE_EN_G1_WIDTH (2U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_ADAPT_AFE_EN_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_ADAPT_AFE_EN_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_ADAPT_AFE_EN_G1_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_ADAPT_DFE_EN_G1_MASK (0xCU)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_ADAPT_DFE_EN_G1_SHIFT (2U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_ADAPT_DFE_EN_G1_WIDTH (2U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_ADAPT_DFE_EN_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_ADAPT_DFE_EN_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_ADAPT_DFE_EN_G1_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_ATT_LVL_G1_MASK (0x3F0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_ATT_LVL_G1_SHIFT (4U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_ATT_LVL_G1_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_ATT_LVL_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_ATT_LVL_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_ATT_LVL_G1_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_CTLE_BOOST_G1_MASK (0x3FF0000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_CTLE_BOOST_G1_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_CTLE_BOOST_G1_WIDTH (10U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_CTLE_BOOST_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_CTLE_BOOST_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_CTLE_BOOST_G1_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_CTLE_POLE_G1_MASK (0xFC000000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_CTLE_POLE_G1_SHIFT (26U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_CTLE_POLE_G1_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_CTLE_POLE_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_CTLE_POLE_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1A_EXT_RX_EQ_CTLE_POLE_G1_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_RX_EQ_CTRL_1B - PCIe PHY RX Equalization Control 2 For Gen1 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_DFE_TAP1_G1_MASK (0xFFFFU)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_DFE_TAP1_G1_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_DFE_TAP1_G1_WIDTH (16U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_DFE_TAP1_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_DFE_TAP1_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_DFE_TAP1_G1_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_VGA1_GAIN_G1_MASK (0xFF0000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_VGA1_GAIN_G1_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_VGA1_GAIN_G1_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_VGA1_GAIN_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_VGA1_GAIN_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_VGA1_GAIN_G1_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_VGA2_GAIN_G1_MASK (0xFF000000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_VGA2_GAIN_G1_SHIFT (24U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_VGA2_GAIN_G1_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_VGA2_GAIN_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_VGA2_GAIN_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1B_EXT_RX_EQ_VGA2_GAIN_G1_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_RX_EQ_CTRL_1C - PCIe PHY RX Equalization Control 3 For Gen1 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1C_EXT_RX_EQ_DELTA_IQ_G1_MASK (0xFFU)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1C_EXT_RX_EQ_DELTA_IQ_G1_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1C_EXT_RX_EQ_DELTA_IQ_G1_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1C_EXT_RX_EQ_DELTA_IQ_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1C_EXT_RX_EQ_DELTA_IQ_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_1C_EXT_RX_EQ_DELTA_IQ_G1_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_RX_EQ_CTRL_2A - PCIe PHY RX Equalization Control 1 For Gen2 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_ADAPT_AFE_EN_G2_MASK (0x3U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_ADAPT_AFE_EN_G2_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_ADAPT_AFE_EN_G2_WIDTH (2U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_ADAPT_AFE_EN_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_ADAPT_AFE_EN_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_ADAPT_AFE_EN_G2_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_ADAPT_DFE_EN_G2_MASK (0xCU)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_ADAPT_DFE_EN_G2_SHIFT (2U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_ADAPT_DFE_EN_G2_WIDTH (2U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_ADAPT_DFE_EN_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_ADAPT_DFE_EN_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_ADAPT_DFE_EN_G2_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_ATT_LVL_G2_MASK (0x3F0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_ATT_LVL_G2_SHIFT (4U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_ATT_LVL_G2_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_ATT_LVL_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_ATT_LVL_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_ATT_LVL_G2_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_CTLE_BOOST_G2_MASK (0x3FF0000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_CTLE_BOOST_G2_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_CTLE_BOOST_G2_WIDTH (10U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_CTLE_BOOST_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_CTLE_BOOST_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_CTLE_BOOST_G2_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_CTLE_POLE_G2_MASK (0xFC000000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_CTLE_POLE_G2_SHIFT (26U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_CTLE_POLE_G2_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_CTLE_POLE_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_CTLE_POLE_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2A_EXT_RX_EQ_CTLE_POLE_G2_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_RX_EQ_CTRL_2B - PCIe PHY RX Equalization Control 2 For Gen2 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_DFE_TAP1_G2_MASK (0xFFFFU)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_DFE_TAP1_G2_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_DFE_TAP1_G2_WIDTH (16U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_DFE_TAP1_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_DFE_TAP1_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_DFE_TAP1_G2_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_VGA1_GAIN_G2_MASK (0xFF0000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_VGA1_GAIN_G2_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_VGA1_GAIN_G2_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_VGA1_GAIN_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_VGA1_GAIN_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_VGA1_GAIN_G2_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_VGA2_GAIN_G2_MASK (0xFF000000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_VGA2_GAIN_G2_SHIFT (24U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_VGA2_GAIN_G2_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_VGA2_GAIN_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_VGA2_GAIN_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2B_EXT_RX_EQ_VGA2_GAIN_G2_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_RX_EQ_CTRL_2C - PCIe PHY RX Equalization Control 3 For Gen2 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2C_EXT_RX_EQ_DELTA_IQ_G2_MASK (0xFFU)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2C_EXT_RX_EQ_DELTA_IQ_G2_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2C_EXT_RX_EQ_DELTA_IQ_G2_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2C_EXT_RX_EQ_DELTA_IQ_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2C_EXT_RX_EQ_DELTA_IQ_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_2C_EXT_RX_EQ_DELTA_IQ_G2_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_RX_EQ_CTRL_3A - PCIe PHY RX Equalization Control 1 For Gen3 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_ADAPT_AFE_EN_G3_MASK (0x3U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_ADAPT_AFE_EN_G3_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_ADAPT_AFE_EN_G3_WIDTH (2U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_ADAPT_AFE_EN_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_ADAPT_AFE_EN_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_ADAPT_AFE_EN_G3_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_ADAPT_DFE_EN_G3_MASK (0xCU)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_ADAPT_DFE_EN_G3_SHIFT (2U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_ADAPT_DFE_EN_G3_WIDTH (2U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_ADAPT_DFE_EN_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_ADAPT_DFE_EN_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_ADAPT_DFE_EN_G3_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_ATT_LVL_G3_MASK (0x3F0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_ATT_LVL_G3_SHIFT (4U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_ATT_LVL_G3_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_ATT_LVL_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_ATT_LVL_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_ATT_LVL_G3_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_CTLE_BOOST_G3_MASK (0x3FF0000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_CTLE_BOOST_G3_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_CTLE_BOOST_G3_WIDTH (10U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_CTLE_BOOST_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_CTLE_BOOST_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_CTLE_BOOST_G3_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_CTLE_POLE_G3_MASK (0xFC000000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_CTLE_POLE_G3_SHIFT (26U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_CTLE_POLE_G3_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_CTLE_POLE_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_CTLE_POLE_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3A_EXT_RX_EQ_CTLE_POLE_G3_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_RX_EQ_CTRL_3B - PCIe PHY RX Equalization Control 2 For Gen3 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_DFE_TAP1_G3_MASK (0xFFFFU)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_DFE_TAP1_G3_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_DFE_TAP1_G3_WIDTH (16U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_DFE_TAP1_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_DFE_TAP1_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_DFE_TAP1_G3_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_VGA1_GAIN_G3_MASK (0xFF0000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_VGA1_GAIN_G3_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_VGA1_GAIN_G3_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_VGA1_GAIN_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_VGA1_GAIN_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_VGA1_GAIN_G3_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_VGA2_GAIN_G3_MASK (0xFF000000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_VGA2_GAIN_G3_SHIFT (24U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_VGA2_GAIN_G3_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_VGA2_GAIN_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_VGA2_GAIN_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3B_EXT_RX_EQ_VGA2_GAIN_G3_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_RX_EQ_CTRL_3C - PCIe PHY RX Equalization Control 3 For Gen3 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3C_EXT_RX_EQ_DELTA_IQ_G3_MASK (0xFFU)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3C_EXT_RX_EQ_DELTA_IQ_G3_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3C_EXT_RX_EQ_DELTA_IQ_G3_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3C_EXT_RX_EQ_DELTA_IQ_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3C_EXT_RX_EQ_DELTA_IQ_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_3C_EXT_RX_EQ_DELTA_IQ_G3_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_RX_EQ_CTRL_4A - PCIe PHY RX Equalization Control 1 For Gen4 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_ADAPT_AFE_EN_G4_MASK (0x3U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_ADAPT_AFE_EN_G4_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_ADAPT_AFE_EN_G4_WIDTH (2U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_ADAPT_AFE_EN_G4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_ADAPT_AFE_EN_G4_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_ADAPT_AFE_EN_G4_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_ADAPT_DFE_EN_G4_MASK (0xCU)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_ADAPT_DFE_EN_G4_SHIFT (2U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_ADAPT_DFE_EN_G4_WIDTH (2U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_ADAPT_DFE_EN_G4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_ADAPT_DFE_EN_G4_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_ADAPT_DFE_EN_G4_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_ATT_LVL_G4_MASK (0x3F0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_ATT_LVL_G4_SHIFT (4U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_ATT_LVL_G4_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_ATT_LVL_G4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_ATT_LVL_G4_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_ATT_LVL_G4_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_CTLE_BOOST_G4_MASK (0x3FF0000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_CTLE_BOOST_G4_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_CTLE_BOOST_G4_WIDTH (10U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_CTLE_BOOST_G4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_CTLE_BOOST_G4_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_CTLE_BOOST_G4_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_CTLE_POLE_G4_MASK (0xFC000000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_CTLE_POLE_G4_SHIFT (26U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_CTLE_POLE_G4_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_CTLE_POLE_G4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_CTLE_POLE_G4_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4A_EXT_RX_EQ_CTLE_POLE_G4_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_RX_EQ_CTRL_4B - PCIe PHY RX Equalization Control 2 For Gen4 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_DFE_TAP1_G4_MASK (0xFFFFU)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_DFE_TAP1_G4_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_DFE_TAP1_G4_WIDTH (16U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_DFE_TAP1_G4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_DFE_TAP1_G4_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_DFE_TAP1_G4_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_VGA1_GAIN_G4_MASK (0xFF0000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_VGA1_GAIN_G4_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_VGA1_GAIN_G4_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_VGA1_GAIN_G4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_VGA1_GAIN_G4_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_VGA1_GAIN_G4_MASK)

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_VGA2_GAIN_G4_MASK (0xFF000000U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_VGA2_GAIN_G4_SHIFT (24U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_VGA2_GAIN_G4_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_VGA2_GAIN_G4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_VGA2_GAIN_G4_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4B_EXT_RX_EQ_VGA2_GAIN_G4_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_RX_EQ_CTRL_4C - PCIe PHY RX Equalization Control 3 For Gen4 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4C_EXT_RX_EQ_DELTA_IQ_G4_MASK (0xFFU)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4C_EXT_RX_EQ_DELTA_IQ_G4_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4C_EXT_RX_EQ_DELTA_IQ_G4_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4C_EXT_RX_EQ_DELTA_IQ_G4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4C_EXT_RX_EQ_DELTA_IQ_G4_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_RX_EQ_CTRL_4C_EXT_RX_EQ_DELTA_IQ_G4_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_CALI_CTRL_1 - PCIe PHY Calibration Control For Gen1 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_1_EXT_RX_VCO_LD_VAL_G1_MASK (0x1FFFU)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_1_EXT_RX_VCO_LD_VAL_G1_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_1_EXT_RX_VCO_LD_VAL_G1_WIDTH (13U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_1_EXT_RX_VCO_LD_VAL_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_1_EXT_RX_VCO_LD_VAL_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_1_EXT_RX_VCO_LD_VAL_G1_MASK)

#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_1_EXT_RX_REF_LD_VAL_G1_MASK (0x3F0000U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_1_EXT_RX_REF_LD_VAL_G1_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_1_EXT_RX_REF_LD_VAL_G1_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_1_EXT_RX_REF_LD_VAL_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_1_EXT_RX_REF_LD_VAL_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_1_EXT_RX_REF_LD_VAL_G1_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_CALI_CTRL_2 - PCIe PHY Calibration Control For Gen2 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_2_EXT_RX_VCO_LD_VAL_G2_MASK (0x1FFFU)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_2_EXT_RX_VCO_LD_VAL_G2_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_2_EXT_RX_VCO_LD_VAL_G2_WIDTH (13U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_2_EXT_RX_VCO_LD_VAL_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_2_EXT_RX_VCO_LD_VAL_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_2_EXT_RX_VCO_LD_VAL_G2_MASK)

#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_2_EXT_RX_REF_LD_VAL_G2_MASK (0x3F0000U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_2_EXT_RX_REF_LD_VAL_G2_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_2_EXT_RX_REF_LD_VAL_G2_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_2_EXT_RX_REF_LD_VAL_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_2_EXT_RX_REF_LD_VAL_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_2_EXT_RX_REF_LD_VAL_G2_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_CALI_CTRL_3 - PCIe PHY Calibration Control For Gen3 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_3_EXT_RX_VCO_LD_VAL_G3_MASK (0x1FFFU)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_3_EXT_RX_VCO_LD_VAL_G3_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_3_EXT_RX_VCO_LD_VAL_G3_WIDTH (13U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_3_EXT_RX_VCO_LD_VAL_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_3_EXT_RX_VCO_LD_VAL_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_3_EXT_RX_VCO_LD_VAL_G3_MASK)

#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_3_EXT_RX_REF_LD_VAL_G3_MASK (0x3F0000U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_3_EXT_RX_REF_LD_VAL_G3_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_3_EXT_RX_REF_LD_VAL_G3_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_3_EXT_RX_REF_LD_VAL_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_3_EXT_RX_REF_LD_VAL_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_3_EXT_RX_REF_LD_VAL_G3_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_CALI_CTRL_4 - PCIe PHY Calibration Control For Gen4 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_4_EXT_RX_VCO_LD_VAL_G4_MASK (0x1FFFU)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_4_EXT_RX_VCO_LD_VAL_G4_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_4_EXT_RX_VCO_LD_VAL_G4_WIDTH (13U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_4_EXT_RX_VCO_LD_VAL_G4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_4_EXT_RX_VCO_LD_VAL_G4_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_4_EXT_RX_VCO_LD_VAL_G4_MASK)

#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_4_EXT_RX_REF_LD_VAL_G4_MASK (0x3F0000U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_4_EXT_RX_REF_LD_VAL_G4_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_4_EXT_RX_REF_LD_VAL_G4_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_4_EXT_RX_REF_LD_VAL_G4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_4_EXT_RX_REF_LD_VAL_G4_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_CALI_CTRL_4_EXT_RX_REF_LD_VAL_G4_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_MISC_CTRL_1 - PCIe PHY Miscellaneous Control 1 */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_LFPS_EN_MASK (0x1U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_LFPS_EN_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_LFPS_EN_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_LFPS_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_LFPS_EN_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_LFPS_EN_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_THRESHOLD_MASK (0x7EU)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_THRESHOLD_SHIFT (1U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_THRESHOLD_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_THRESHOLD_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_THRESHOLD_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_PWR_UP_CNT_MASK (0x7FF00U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_PWR_UP_CNT_SHIFT (8U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_PWR_UP_CNT_WIDTH (11U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_PWR_UP_CNT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_PWR_UP_CNT_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_LOS_PWR_UP_CNT_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_VREF_CTRL_MASK (0x1F000000U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_VREF_CTRL_SHIFT (24U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_VREF_CTRL_WIDTH (5U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_VREF_CTRL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_VREF_CTRL_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_VREF_CTRL_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_TERM_CTRL_MASK (0xE0000000U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_TERM_CTRL_SHIFT (29U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_TERM_CTRL_WIDTH (3U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_TERM_CTRL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_TERM_CTRL_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_1_EXT_RX_TERM_CTRL_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_MISC_CTRL_2 - PCIe PHY Miscellaneous Control 2 */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_IBOOST_LVL_MASK (0xFFU)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_IBOOST_LVL_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_IBOOST_LVL_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_IBOOST_LVL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_IBOOST_LVL_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_IBOOST_LVL_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_VBOOST_LVL_MASK (0x70000U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_VBOOST_LVL_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_VBOOST_LVL_WIDTH (3U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_VBOOST_LVL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_VBOOST_LVL_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_VBOOST_LVL_MASK)

#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_TERM_CTRL_MASK (0x7000000U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_TERM_CTRL_SHIFT (24U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_TERM_CTRL_WIDTH (3U)
#define SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_TERM_CTRL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_TERM_CTRL_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_MISC_CTRL_2_EXT_TX_TERM_CTRL_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_TX_EQ_CTRL_1 - PCIe PHY TX Equalization Control For Gen1 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_POST_G1_MASK (0xFFU)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_POST_G1_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_POST_G1_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_POST_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_POST_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_POST_G1_MASK)

#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_PRE_G1_MASK (0xFF00U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_PRE_G1_SHIFT (8U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_PRE_G1_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_PRE_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_PRE_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_PRE_G1_MASK)

#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_MAIN_G1_MASK (0x3FF0000U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_MAIN_G1_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_MAIN_G1_WIDTH (10U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_MAIN_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_MAIN_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_MAIN_G1_MASK)

#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_OVRD_G1_MASK (0x30000000U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_OVRD_G1_SHIFT (28U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_OVRD_G1_WIDTH (2U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_OVRD_G1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_OVRD_G1_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_1_EXT_TX_EQ_OVRD_G1_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_TX_EQ_CTRL_2 - PCIe PHY TX Equalization Control For Gen2 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_POST_G2_MASK (0xFFU)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_POST_G2_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_POST_G2_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_POST_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_POST_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_POST_G2_MASK)

#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_PRE_G2_MASK (0xFF00U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_PRE_G2_SHIFT (8U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_PRE_G2_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_PRE_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_PRE_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_PRE_G2_MASK)

#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_MAIN_G2_MASK (0x3FF0000U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_MAIN_G2_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_MAIN_G2_WIDTH (10U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_MAIN_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_MAIN_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_MAIN_G2_MASK)

#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_OVRD_G2_MASK (0x30000000U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_OVRD_G2_SHIFT (28U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_OVRD_G2_WIDTH (2U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_OVRD_G2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_OVRD_G2_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_2_EXT_TX_EQ_OVRD_G2_MASK)
/*! @} */

/*! @name PCIE_PHY_EXT_TX_EQ_CTRL_3 - PCIe PHY TX Equalization Control For Gen3 Speed */
/*! @{ */

#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_POST_G3_MASK (0xFFU)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_POST_G3_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_POST_G3_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_POST_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_POST_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_POST_G3_MASK)

#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_PRE_G3_MASK (0xFF00U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_PRE_G3_SHIFT (8U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_PRE_G3_WIDTH (8U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_PRE_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_PRE_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_PRE_G3_MASK)

#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_MAIN_G3_MASK (0x3FF0000U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_MAIN_G3_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_MAIN_G3_WIDTH (10U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_MAIN_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_MAIN_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_MAIN_G3_MASK)

#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_OVRD_G3_MASK (0x30000000U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_OVRD_G3_SHIFT (28U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_OVRD_G3_WIDTH (2U)
#define SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_OVRD_G3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_OVRD_G3_SHIFT)) & SerDes_SS_PCIE_PHY_EXT_TX_EQ_CTRL_3_EXT_TX_EQ_OVRD_G3_MASK)
/*! @} */

/*! @name PCIE_PHY_XPCS0_RX_OVRD_CTRL - PCIe PHY XPCS_0 Rx Override Control */
/*! @{ */

#define SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_OVRD_MASK (0x1U)
#define SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_OVRD_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_OVRD_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_OVRD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_OVRD_SHIFT)) & SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_OVRD_MASK)

#define SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_REF_LD_VAL_MASK (0x3F00U)
#define SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_REF_LD_VAL_SHIFT (8U)
#define SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_REF_LD_VAL_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_REF_LD_VAL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_REF_LD_VAL_SHIFT)) & SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_REF_LD_VAL_MASK)

#define SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_VCO_LD_VAL_MASK (0x1FFF0000U)
#define SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_VCO_LD_VAL_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_VCO_LD_VAL_WIDTH (13U)
#define SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_VCO_LD_VAL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_VCO_LD_VAL_SHIFT)) & SerDes_SS_PCIE_PHY_XPCS0_RX_OVRD_CTRL_XPCS0_RX_VCO_LD_VAL_MASK)
/*! @} */

/*! @name PCIE_PHY_XPCS1_RX_OVRD_CTRL - PCIe PHY XPCS_1 Rx Override Control */
/*! @{ */

#define SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_OVRD_MASK (0x1U)
#define SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_OVRD_SHIFT (0U)
#define SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_OVRD_WIDTH (1U)
#define SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_OVRD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_OVRD_SHIFT)) & SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_OVRD_MASK)

#define SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_REF_LD_VAL_MASK (0x3F00U)
#define SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_REF_LD_VAL_SHIFT (8U)
#define SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_REF_LD_VAL_WIDTH (6U)
#define SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_REF_LD_VAL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_REF_LD_VAL_SHIFT)) & SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_REF_LD_VAL_MASK)

#define SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_VCO_LD_VAL_MASK (0x1FFF0000U)
#define SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_VCO_LD_VAL_SHIFT (16U)
#define SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_VCO_LD_VAL_WIDTH (13U)
#define SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_VCO_LD_VAL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_VCO_LD_VAL_SHIFT)) & SerDes_SS_PCIE_PHY_XPCS1_RX_OVRD_CTRL_XPCS1_RX_VCO_LD_VAL_MASK)
/*! @} */

/*! @name SS_RO_REG_0 - Subsystem Read-Only Register 0 */
/*! @{ */

#define SerDes_SS_SS_RO_REG_0_PHY_RX0_LOS_MASK   (0x2U)
#define SerDes_SS_SS_RO_REG_0_PHY_RX0_LOS_SHIFT  (1U)
#define SerDes_SS_SS_RO_REG_0_PHY_RX0_LOS_WIDTH  (1U)
#define SerDes_SS_SS_RO_REG_0_PHY_RX0_LOS(x)     (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_PHY_RX0_LOS_SHIFT)) & SerDes_SS_SS_RO_REG_0_PHY_RX0_LOS_MASK)

#define SerDes_SS_SS_RO_REG_0_PHY_RX1_LOS_MASK   (0x4U)
#define SerDes_SS_SS_RO_REG_0_PHY_RX1_LOS_SHIFT  (2U)
#define SerDes_SS_SS_RO_REG_0_PHY_RX1_LOS_WIDTH  (1U)
#define SerDes_SS_SS_RO_REG_0_PHY_RX1_LOS(x)     (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_PHY_RX1_LOS_SHIFT)) & SerDes_SS_SS_RO_REG_0_PHY_RX1_LOS_MASK)

#define SerDes_SS_SS_RO_REG_0_MSTR_AWMISC_INFO_LAST_DCMP_TLP_MASK (0x8U)
#define SerDes_SS_SS_RO_REG_0_MSTR_AWMISC_INFO_LAST_DCMP_TLP_SHIFT (3U)
#define SerDes_SS_SS_RO_REG_0_MSTR_AWMISC_INFO_LAST_DCMP_TLP_WIDTH (1U)
#define SerDes_SS_SS_RO_REG_0_MSTR_AWMISC_INFO_LAST_DCMP_TLP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_MSTR_AWMISC_INFO_LAST_DCMP_TLP_SHIFT)) & SerDes_SS_SS_RO_REG_0_MSTR_AWMISC_INFO_LAST_DCMP_TLP_MASK)

#define SerDes_SS_SS_RO_REG_0_MSTR_ARMISC_INFO_LAST_DCMP_TLP_MASK (0x10U)
#define SerDes_SS_SS_RO_REG_0_MSTR_ARMISC_INFO_LAST_DCMP_TLP_SHIFT (4U)
#define SerDes_SS_SS_RO_REG_0_MSTR_ARMISC_INFO_LAST_DCMP_TLP_WIDTH (1U)
#define SerDes_SS_SS_RO_REG_0_MSTR_ARMISC_INFO_LAST_DCMP_TLP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_MSTR_ARMISC_INFO_LAST_DCMP_TLP_SHIFT)) & SerDes_SS_SS_RO_REG_0_MSTR_ARMISC_INFO_LAST_DCMP_TLP_MASK)

#define SerDes_SS_SS_RO_REG_0_MSI_CTRL_INT_VEC_MASK (0x1FE0U)
#define SerDes_SS_SS_RO_REG_0_MSI_CTRL_INT_VEC_SHIFT (5U)
#define SerDes_SS_SS_RO_REG_0_MSI_CTRL_INT_VEC_WIDTH (8U)
#define SerDes_SS_SS_RO_REG_0_MSI_CTRL_INT_VEC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_MSI_CTRL_INT_VEC_SHIFT)) & SerDes_SS_SS_RO_REG_0_MSI_CTRL_INT_VEC_MASK)

#define SerDes_SS_SS_RO_REG_0_PCS0_LINK_SPEED_MASK (0x6000U)
#define SerDes_SS_SS_RO_REG_0_PCS0_LINK_SPEED_SHIFT (13U)
#define SerDes_SS_SS_RO_REG_0_PCS0_LINK_SPEED_WIDTH (2U)
#define SerDes_SS_SS_RO_REG_0_PCS0_LINK_SPEED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_PCS0_LINK_SPEED_SHIFT)) & SerDes_SS_SS_RO_REG_0_PCS0_LINK_SPEED_MASK)

#define SerDes_SS_SS_RO_REG_0_PCS1_LINK_SPEED_MASK (0x18000U)
#define SerDes_SS_SS_RO_REG_0_PCS1_LINK_SPEED_SHIFT (15U)
#define SerDes_SS_SS_RO_REG_0_PCS1_LINK_SPEED_WIDTH (2U)
#define SerDes_SS_SS_RO_REG_0_PCS1_LINK_SPEED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_PCS1_LINK_SPEED_SHIFT)) & SerDes_SS_SS_RO_REG_0_PCS1_LINK_SPEED_MASK)

#define SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_LOGIC_ERR_MASK (0x20000U)
#define SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_LOGIC_ERR_SHIFT (17U)
#define SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_LOGIC_ERR_WIDTH (1U)
#define SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_LOGIC_ERR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_LOGIC_ERR_SHIFT)) & SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_LOGIC_ERR_MASK)

#define SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_CMP_ERR_MASK (0x40000U)
#define SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_CMP_ERR_SHIFT (18U)
#define SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_CMP_ERR_WIDTH (1U)
#define SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_CMP_ERR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_CMP_ERR_SHIFT)) & SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_CMP_ERR_MASK)

#define SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_CMPLT_MASK (0x80000U)
#define SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_CMPLT_SHIFT (19U)
#define SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_CMPLT_WIDTH (1U)
#define SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_CMPLT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_CMPLT_SHIFT)) & SerDes_SS_SS_RO_REG_0_CDM_REG_CHK_CMPLT_MASK)

#define SerDes_SS_SS_RO_REG_0_PCS0_SGMII_LINK_STS_MASK (0x100000U)
#define SerDes_SS_SS_RO_REG_0_PCS0_SGMII_LINK_STS_SHIFT (20U)
#define SerDes_SS_SS_RO_REG_0_PCS0_SGMII_LINK_STS_WIDTH (1U)
#define SerDes_SS_SS_RO_REG_0_PCS0_SGMII_LINK_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_PCS0_SGMII_LINK_STS_SHIFT)) & SerDes_SS_SS_RO_REG_0_PCS0_SGMII_LINK_STS_MASK)

#define SerDes_SS_SS_RO_REG_0_PCS0_SGMII_FULL_DUPLEX_MASK (0x200000U)
#define SerDes_SS_SS_RO_REG_0_PCS0_SGMII_FULL_DUPLEX_SHIFT (21U)
#define SerDes_SS_SS_RO_REG_0_PCS0_SGMII_FULL_DUPLEX_WIDTH (1U)
#define SerDes_SS_SS_RO_REG_0_PCS0_SGMII_FULL_DUPLEX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_PCS0_SGMII_FULL_DUPLEX_SHIFT)) & SerDes_SS_SS_RO_REG_0_PCS0_SGMII_FULL_DUPLEX_MASK)

#define SerDes_SS_SS_RO_REG_0_PCS0_LINK_STATUS_MASK (0x400000U)
#define SerDes_SS_SS_RO_REG_0_PCS0_LINK_STATUS_SHIFT (22U)
#define SerDes_SS_SS_RO_REG_0_PCS0_LINK_STATUS_WIDTH (1U)
#define SerDes_SS_SS_RO_REG_0_PCS0_LINK_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_PCS0_LINK_STATUS_SHIFT)) & SerDes_SS_SS_RO_REG_0_PCS0_LINK_STATUS_MASK)

#define SerDes_SS_SS_RO_REG_0_PCS1_SGMII_LINK_STS_MASK (0x800000U)
#define SerDes_SS_SS_RO_REG_0_PCS1_SGMII_LINK_STS_SHIFT (23U)
#define SerDes_SS_SS_RO_REG_0_PCS1_SGMII_LINK_STS_WIDTH (1U)
#define SerDes_SS_SS_RO_REG_0_PCS1_SGMII_LINK_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_PCS1_SGMII_LINK_STS_SHIFT)) & SerDes_SS_SS_RO_REG_0_PCS1_SGMII_LINK_STS_MASK)

#define SerDes_SS_SS_RO_REG_0_PCS1_SGMII_FULL_DUPLEX_MASK (0x1000000U)
#define SerDes_SS_SS_RO_REG_0_PCS1_SGMII_FULL_DUPLEX_SHIFT (24U)
#define SerDes_SS_SS_RO_REG_0_PCS1_SGMII_FULL_DUPLEX_WIDTH (1U)
#define SerDes_SS_SS_RO_REG_0_PCS1_SGMII_FULL_DUPLEX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_PCS1_SGMII_FULL_DUPLEX_SHIFT)) & SerDes_SS_SS_RO_REG_0_PCS1_SGMII_FULL_DUPLEX_MASK)

#define SerDes_SS_SS_RO_REG_0_PCS1_LINK_STATUS_MASK (0x2000000U)
#define SerDes_SS_SS_RO_REG_0_PCS1_LINK_STATUS_SHIFT (25U)
#define SerDes_SS_SS_RO_REG_0_PCS1_LINK_STATUS_WIDTH (1U)
#define SerDes_SS_SS_RO_REG_0_PCS1_LINK_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_PCS1_LINK_STATUS_SHIFT)) & SerDes_SS_SS_RO_REG_0_PCS1_LINK_STATUS_MASK)

#define SerDes_SS_SS_RO_REG_0_MSTR_ARMISC_INFO_DMA_MASK (0xFC000000U)
#define SerDes_SS_SS_RO_REG_0_MSTR_ARMISC_INFO_DMA_SHIFT (26U)
#define SerDes_SS_SS_RO_REG_0_MSTR_ARMISC_INFO_DMA_WIDTH (6U)
#define SerDes_SS_SS_RO_REG_0_MSTR_ARMISC_INFO_DMA(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_0_MSTR_ARMISC_INFO_DMA_SHIFT)) & SerDes_SS_SS_RO_REG_0_MSTR_ARMISC_INFO_DMA_MASK)
/*! @} */

/*! @name SS_RO_REG_1 - Subsystem Read-Only Register 1 */
/*! @{ */

#define SerDes_SS_SS_RO_REG_1_MSTR_AWMISC_INFO_DMA_MASK (0x3FU)
#define SerDes_SS_SS_RO_REG_1_MSTR_AWMISC_INFO_DMA_SHIFT (0U)
#define SerDes_SS_SS_RO_REG_1_MSTR_AWMISC_INFO_DMA_WIDTH (6U)
#define SerDes_SS_SS_RO_REG_1_MSTR_AWMISC_INFO_DMA(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_1_MSTR_AWMISC_INFO_DMA_SHIFT)) & SerDes_SS_SS_RO_REG_1_MSTR_AWMISC_INFO_DMA_MASK)

#define SerDes_SS_SS_RO_REG_1_SLV_BMISC_INFO_MASK (0x1FFC0U)
#define SerDes_SS_SS_RO_REG_1_SLV_BMISC_INFO_SHIFT (6U)
#define SerDes_SS_SS_RO_REG_1_SLV_BMISC_INFO_WIDTH (11U)
#define SerDes_SS_SS_RO_REG_1_SLV_BMISC_INFO(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_1_SLV_BMISC_INFO_SHIFT)) & SerDes_SS_SS_RO_REG_1_SLV_BMISC_INFO_MASK)

#define SerDes_SS_SS_RO_REG_1_SLV_RMISC_INFO_MASK (0xFFE0000U)
#define SerDes_SS_SS_RO_REG_1_SLV_RMISC_INFO_SHIFT (17U)
#define SerDes_SS_SS_RO_REG_1_SLV_RMISC_INFO_WIDTH (11U)
#define SerDes_SS_SS_RO_REG_1_SLV_RMISC_INFO(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_1_SLV_RMISC_INFO_SHIFT)) & SerDes_SS_SS_RO_REG_1_SLV_RMISC_INFO_MASK)
/*! @} */

/*! @name SS_RO_REG_2 - Subsystem Read-Only Register 2 */
/*! @{ */

#define SerDes_SS_SS_RO_REG_2_REG2_MASK          (0xFFFFFFFFU)
#define SerDes_SS_SS_RO_REG_2_REG2_SHIFT         (0U)
#define SerDes_SS_SS_RO_REG_2_REG2_WIDTH         (32U)
#define SerDes_SS_SS_RO_REG_2_REG2(x)            (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_2_REG2_SHIFT)) & SerDes_SS_SS_RO_REG_2_REG2_MASK)
/*! @} */

/*! @name SS_RO_REG_3 - Subsystem Read-Only Register 3 */
/*! @{ */

#define SerDes_SS_SS_RO_REG_3_REG3_MASK          (0xFFFFFFFFU)
#define SerDes_SS_SS_RO_REG_3_REG3_SHIFT         (0U)
#define SerDes_SS_SS_RO_REG_3_REG3_WIDTH         (32U)
#define SerDes_SS_SS_RO_REG_3_REG3(x)            (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RO_REG_3_REG3_SHIFT)) & SerDes_SS_SS_RO_REG_3_REG3_MASK)
/*! @} */

/*! @name SS_RW_REG_0 - Subsystem Read/Write Register 0 */
/*! @{ */

#define SerDes_SS_SS_RW_REG_0_SUBSYS_MODE_MASK   (0x7U)
#define SerDes_SS_SS_RW_REG_0_SUBSYS_MODE_SHIFT  (0U)
#define SerDes_SS_SS_RW_REG_0_SUBSYS_MODE_WIDTH  (3U)
#define SerDes_SS_SS_RW_REG_0_SUBSYS_MODE(x)     (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_SUBSYS_MODE_SHIFT)) & SerDes_SS_SS_RW_REG_0_SUBSYS_MODE_MASK)

#define SerDes_SS_SS_RW_REG_0_SYS_ATTEN_BUTTON_PRESSED_MASK (0x8U)
#define SerDes_SS_SS_RW_REG_0_SYS_ATTEN_BUTTON_PRESSED_SHIFT (3U)
#define SerDes_SS_SS_RW_REG_0_SYS_ATTEN_BUTTON_PRESSED_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_0_SYS_ATTEN_BUTTON_PRESSED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_SYS_ATTEN_BUTTON_PRESSED_SHIFT)) & SerDes_SS_SS_RW_REG_0_SYS_ATTEN_BUTTON_PRESSED_MASK)

#define SerDes_SS_SS_RW_REG_0_SYS_CMD_CPLED_INT_MASK (0x10U)
#define SerDes_SS_SS_RW_REG_0_SYS_CMD_CPLED_INT_SHIFT (4U)
#define SerDes_SS_SS_RW_REG_0_SYS_CMD_CPLED_INT_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_0_SYS_CMD_CPLED_INT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_SYS_CMD_CPLED_INT_SHIFT)) & SerDes_SS_SS_RW_REG_0_SYS_CMD_CPLED_INT_MASK)

#define SerDes_SS_SS_RW_REG_0_SYS_EML_INTERLOCK_ENGAGED_MASK (0x20U)
#define SerDes_SS_SS_RW_REG_0_SYS_EML_INTERLOCK_ENGAGED_SHIFT (5U)
#define SerDes_SS_SS_RW_REG_0_SYS_EML_INTERLOCK_ENGAGED_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_0_SYS_EML_INTERLOCK_ENGAGED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_SYS_EML_INTERLOCK_ENGAGED_SHIFT)) & SerDes_SS_SS_RW_REG_0_SYS_EML_INTERLOCK_ENGAGED_MASK)

#define SerDes_SS_SS_RW_REG_0_SYS_INT_MASK       (0x40U)
#define SerDes_SS_SS_RW_REG_0_SYS_INT_SHIFT      (6U)
#define SerDes_SS_SS_RW_REG_0_SYS_INT_WIDTH      (1U)
#define SerDes_SS_SS_RW_REG_0_SYS_INT(x)         (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_SYS_INT_SHIFT)) & SerDes_SS_SS_RW_REG_0_SYS_INT_MASK)

#define SerDes_SS_SS_RW_REG_0_APP_XFER_PENDING_MASK (0x80U)
#define SerDes_SS_SS_RW_REG_0_APP_XFER_PENDING_SHIFT (7U)
#define SerDes_SS_SS_RW_REG_0_APP_XFER_PENDING_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_0_APP_XFER_PENDING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_APP_XFER_PENDING_SHIFT)) & SerDes_SS_SS_RW_REG_0_APP_XFER_PENDING_MASK)

#define SerDes_SS_SS_RW_REG_0_PHY0_CR_PARA_SEL_MASK (0x200U)
#define SerDes_SS_SS_RW_REG_0_PHY0_CR_PARA_SEL_SHIFT (9U)
#define SerDes_SS_SS_RW_REG_0_PHY0_CR_PARA_SEL_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_0_PHY0_CR_PARA_SEL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_PHY0_CR_PARA_SEL_SHIFT)) & SerDes_SS_SS_RW_REG_0_PHY0_CR_PARA_SEL_MASK)

#define SerDes_SS_SS_RW_REG_0_MSTR_BMISC_INFO_CPL_STAT_MASK (0xC00U)
#define SerDes_SS_SS_RW_REG_0_MSTR_BMISC_INFO_CPL_STAT_SHIFT (10U)
#define SerDes_SS_SS_RW_REG_0_MSTR_BMISC_INFO_CPL_STAT_WIDTH (2U)
#define SerDes_SS_SS_RW_REG_0_MSTR_BMISC_INFO_CPL_STAT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_MSTR_BMISC_INFO_CPL_STAT_SHIFT)) & SerDes_SS_SS_RW_REG_0_MSTR_BMISC_INFO_CPL_STAT_MASK)

#define SerDes_SS_SS_RW_REG_0_MSTR_RMISC_INFO_CPL_STAT_MASK (0x3000U)
#define SerDes_SS_SS_RW_REG_0_MSTR_RMISC_INFO_CPL_STAT_SHIFT (12U)
#define SerDes_SS_SS_RW_REG_0_MSTR_RMISC_INFO_CPL_STAT_WIDTH (2U)
#define SerDes_SS_SS_RW_REG_0_MSTR_RMISC_INFO_CPL_STAT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_MSTR_RMISC_INFO_CPL_STAT_SHIFT)) & SerDes_SS_SS_RW_REG_0_MSTR_RMISC_INFO_CPL_STAT_MASK)

#define SerDes_SS_SS_RW_REG_0_SLV_WMISC_INFO_MASK (0x4000U)
#define SerDes_SS_SS_RW_REG_0_SLV_WMISC_INFO_SHIFT (14U)
#define SerDes_SS_SS_RW_REG_0_SLV_WMISC_INFO_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_0_SLV_WMISC_INFO(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_SLV_WMISC_INFO_SHIFT)) & SerDes_SS_SS_RW_REG_0_SLV_WMISC_INFO_MASK)

#define SerDes_SS_SS_RW_REG_0_SLV_AWMISC_INFO_P_TAG_MASK (0x7F8000U)
#define SerDes_SS_SS_RW_REG_0_SLV_AWMISC_INFO_P_TAG_SHIFT (15U)
#define SerDes_SS_SS_RW_REG_0_SLV_AWMISC_INFO_P_TAG_WIDTH (8U)
#define SerDes_SS_SS_RW_REG_0_SLV_AWMISC_INFO_P_TAG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_SLV_AWMISC_INFO_P_TAG_SHIFT)) & SerDes_SS_SS_RW_REG_0_SLV_AWMISC_INFO_P_TAG_MASK)

#define SerDes_SS_SS_RW_REG_0_CLKEN_MASK         (0x800000U)
#define SerDes_SS_SS_RW_REG_0_CLKEN_SHIFT        (23U)
#define SerDes_SS_SS_RW_REG_0_CLKEN_WIDTH        (1U)
#define SerDes_SS_SS_RW_REG_0_CLKEN(x)           (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_CLKEN_SHIFT)) & SerDes_SS_SS_RW_REG_0_CLKEN_MASK)

#define SerDes_SS_SS_RW_REG_0_SLV_ARMISC_INFO_ATU_BYPASS_MASK (0x1000000U)
#define SerDes_SS_SS_RW_REG_0_SLV_ARMISC_INFO_ATU_BYPASS_SHIFT (24U)
#define SerDes_SS_SS_RW_REG_0_SLV_ARMISC_INFO_ATU_BYPASS_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_0_SLV_ARMISC_INFO_ATU_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_SLV_ARMISC_INFO_ATU_BYPASS_SHIFT)) & SerDes_SS_SS_RW_REG_0_SLV_ARMISC_INFO_ATU_BYPASS_MASK)

#define SerDes_SS_SS_RW_REG_0_SLV_AWMISC_INFO_ATU_BYPASS_MASK (0x2000000U)
#define SerDes_SS_SS_RW_REG_0_SLV_AWMISC_INFO_ATU_BYPASS_SHIFT (25U)
#define SerDes_SS_SS_RW_REG_0_SLV_AWMISC_INFO_ATU_BYPASS_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_0_SLV_AWMISC_INFO_ATU_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_SLV_AWMISC_INFO_ATU_BYPASS_SHIFT)) & SerDes_SS_SS_RW_REG_0_SLV_AWMISC_INFO_ATU_BYPASS_MASK)

#define SerDes_SS_SS_RW_REG_0_PHY_TEST_POWERDOWN_MASK (0x8000000U)
#define SerDes_SS_SS_RW_REG_0_PHY_TEST_POWERDOWN_SHIFT (27U)
#define SerDes_SS_SS_RW_REG_0_PHY_TEST_POWERDOWN_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_0_PHY_TEST_POWERDOWN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_PHY_TEST_POWERDOWN_SHIFT)) & SerDes_SS_SS_RW_REG_0_PHY_TEST_POWERDOWN_MASK)

#define SerDes_SS_SS_RW_REG_0_PHY_TEST_TX_REF_CLK_EN_MASK (0x20000000U)
#define SerDes_SS_SS_RW_REG_0_PHY_TEST_TX_REF_CLK_EN_SHIFT (29U)
#define SerDes_SS_SS_RW_REG_0_PHY_TEST_TX_REF_CLK_EN_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_0_PHY_TEST_TX_REF_CLK_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_PHY_TEST_TX_REF_CLK_EN_SHIFT)) & SerDes_SS_SS_RW_REG_0_PHY_TEST_TX_REF_CLK_EN_MASK)

#define SerDes_SS_SS_RW_REG_0_MDR_MASK           (0x40000000U)
#define SerDes_SS_SS_RW_REG_0_MDR_SHIFT          (30U)
#define SerDes_SS_SS_RW_REG_0_MDR_WIDTH          (1U)
#define SerDes_SS_SS_RW_REG_0_MDR(x)             (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_MDR_SHIFT)) & SerDes_SS_SS_RW_REG_0_MDR_MASK)

#define SerDes_SS_SS_RW_REG_0_MSTR_RMISC_INFO_MASK (0x80000000U)
#define SerDes_SS_SS_RW_REG_0_MSTR_RMISC_INFO_SHIFT (31U)
#define SerDes_SS_SS_RW_REG_0_MSTR_RMISC_INFO_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_0_MSTR_RMISC_INFO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_0_MSTR_RMISC_INFO_SHIFT)) & SerDes_SS_SS_RW_REG_0_MSTR_RMISC_INFO_MASK)
/*! @} */

/*! @name SS_RW_REG_1 - Subsystem Read/Write Register 1 */
/*! @{ */

#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_RD_DATA_MASK (0x1U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_RD_DATA_SHIFT (0U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_RD_DATA_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_RD_DATA(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_RD_DATA_SHIFT)) & SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_RD_DATA_MASK)

#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_RD_ADDR_MASK (0x2U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_RD_ADDR_SHIFT (1U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_RD_ADDR_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_RD_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_RD_ADDR_SHIFT)) & SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_RD_ADDR_MASK)

#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_WR_ADDR_MASK (0x4U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_WR_ADDR_SHIFT (2U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_WR_ADDR_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_WR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_WR_ADDR_SHIFT)) & SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_WR_ADDR_MASK)

#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_WR_DATA_MASK (0x8U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_WR_DATA_SHIFT (3U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_WR_DATA_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_WR_DATA(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_WR_DATA_SHIFT)) & SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_WR_DATA_MASK)

#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_RD_ADDR_MASK (0x10U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_RD_ADDR_SHIFT (4U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_RD_ADDR_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_RD_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_RD_ADDR_SHIFT)) & SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_RD_ADDR_MASK)

#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_WR_ADDR_MASK (0x20U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_WR_ADDR_SHIFT (5U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_WR_ADDR_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_WR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_WR_ADDR_SHIFT)) & SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_WR_ADDR_MASK)

#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_WR_DATA_MASK (0x40U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_WR_DATA_SHIFT (6U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_WR_DATA_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_WR_DATA(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_WR_DATA_SHIFT)) & SerDes_SS_SS_RW_REG_1_PARITY_MODE_MSTR_WR_DATA_MASK)

#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_RD_DATA_MASK (0x80U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_RD_DATA_SHIFT (7U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_RD_DATA_WIDTH (1U)
#define SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_RD_DATA(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_RD_DATA_SHIFT)) & SerDes_SS_SS_RW_REG_1_PARITY_MODE_SLV_RD_DATA_MASK)
/*! @} */

/*! @name SS_RW_REG_2 - Subsystem Read/Write Register 2 */
/*! @{ */

#define SerDes_SS_SS_RW_REG_2_SLV_ARMISC_INFO_MASK (0x3FFFFFU)
#define SerDes_SS_SS_RW_REG_2_SLV_ARMISC_INFO_SHIFT (0U)
#define SerDes_SS_SS_RW_REG_2_SLV_ARMISC_INFO_WIDTH (22U)
#define SerDes_SS_SS_RW_REG_2_SLV_ARMISC_INFO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_2_SLV_ARMISC_INFO_SHIFT)) & SerDes_SS_SS_RW_REG_2_SLV_ARMISC_INFO_MASK)
/*! @} */

/*! @name SS_RW_REG_3 - Subsystem Read/Write Register 3 */
/*! @{ */

#define SerDes_SS_SS_RW_REG_3_SLV_AWMISC_INFO_MASK (0x3FFFFFU)
#define SerDes_SS_SS_RW_REG_3_SLV_AWMISC_INFO_SHIFT (0U)
#define SerDes_SS_SS_RW_REG_3_SLV_AWMISC_INFO_WIDTH (22U)
#define SerDes_SS_SS_RW_REG_3_SLV_AWMISC_INFO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_3_SLV_AWMISC_INFO_SHIFT)) & SerDes_SS_SS_RW_REG_3_SLV_AWMISC_INFO_MASK)
/*! @} */

/*! @name SS_RW_REG_4 - Subsystem Read/Write Register 4 */
/*! @{ */

#define SerDes_SS_SS_RW_REG_4_SLV_AWMISC_INFO_HDR_3DW_MASK (0xFFFFFFFFU)
#define SerDes_SS_SS_RW_REG_4_SLV_AWMISC_INFO_HDR_3DW_SHIFT (0U)
#define SerDes_SS_SS_RW_REG_4_SLV_AWMISC_INFO_HDR_3DW_WIDTH (32U)
#define SerDes_SS_SS_RW_REG_4_SLV_AWMISC_INFO_HDR_3DW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_4_SLV_AWMISC_INFO_HDR_3DW_SHIFT)) & SerDes_SS_SS_RW_REG_4_SLV_AWMISC_INFO_HDR_3DW_MASK)
/*! @} */

/*! @name SS_RW_REG_5 - Subsystem Read/Write Register 5 */
/*! @{ */

#define SerDes_SS_SS_RW_REG_5_SLV_AWMISC_INFO_HDR_4DW_MASK (0xFFFFFFFFU)
#define SerDes_SS_SS_RW_REG_5_SLV_AWMISC_INFO_HDR_4DW_SHIFT (0U)
#define SerDes_SS_SS_RW_REG_5_SLV_AWMISC_INFO_HDR_4DW_WIDTH (32U)
#define SerDes_SS_SS_RW_REG_5_SLV_AWMISC_INFO_HDR_4DW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_SS_RW_REG_5_SLV_AWMISC_INFO_HDR_4DW_SHIFT)) & SerDes_SS_SS_RW_REG_5_SLV_AWMISC_INFO_HDR_4DW_MASK)
/*! @} */

/*! @name PCIE_SUBSYSTEM_VERSION - PCIe Subsystem Version */
/*! @{ */

#define SerDes_SS_PCIE_SUBSYSTEM_VERSION_VERSION_MASK (0xFFFFFFFFU)
#define SerDes_SS_PCIE_SUBSYSTEM_VERSION_VERSION_SHIFT (0U)
#define SerDes_SS_PCIE_SUBSYSTEM_VERSION_VERSION_WIDTH (32U)
#define SerDes_SS_PCIE_SUBSYSTEM_VERSION_VERSION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PCIE_SUBSYSTEM_VERSION_VERSION_SHIFT)) & SerDes_SS_PCIE_SUBSYSTEM_VERSION_VERSION_MASK)
/*! @} */

/*! @name LINK_INT_CTRL_STS - Link Interrupt Control And Status */
/*! @{ */

#define SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_STS_MASK (0x1U)
#define SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_STS_SHIFT (0U)
#define SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_STS_WIDTH (1U)
#define SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_STS_SHIFT)) & SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_STS_MASK)

#define SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_INT_EN_MASK (0x2U)
#define SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_INT_EN_SHIFT (1U)
#define SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_INT_EN_WIDTH (1U)
#define SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_INT_EN_SHIFT)) & SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_INT_EN_MASK)

#define SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_CLR_MASK (0x4U)
#define SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_CLR_SHIFT (2U)
#define SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_CLR_WIDTH (1U)
#define SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_CLR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_CLR_SHIFT)) & SerDes_SS_LINK_INT_CTRL_STS_LINK_REQ_RST_NOT_CLR_MASK)

#define SerDes_SS_LINK_INT_CTRL_STS_PHY_LINK_DOWN_INT_EN_MASK (0x10U)
#define SerDes_SS_LINK_INT_CTRL_STS_PHY_LINK_DOWN_INT_EN_SHIFT (4U)
#define SerDes_SS_LINK_INT_CTRL_STS_PHY_LINK_DOWN_INT_EN_WIDTH (1U)
#define SerDes_SS_LINK_INT_CTRL_STS_PHY_LINK_DOWN_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_LINK_INT_CTRL_STS_PHY_LINK_DOWN_INT_EN_SHIFT)) & SerDes_SS_LINK_INT_CTRL_STS_PHY_LINK_DOWN_INT_EN_MASK)

#define SerDes_SS_LINK_INT_CTRL_STS_PHY_LINK_UP_INT_EN_MASK (0x20U)
#define SerDes_SS_LINK_INT_CTRL_STS_PHY_LINK_UP_INT_EN_SHIFT (5U)
#define SerDes_SS_LINK_INT_CTRL_STS_PHY_LINK_UP_INT_EN_WIDTH (1U)
#define SerDes_SS_LINK_INT_CTRL_STS_PHY_LINK_UP_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_LINK_INT_CTRL_STS_PHY_LINK_UP_INT_EN_SHIFT)) & SerDes_SS_LINK_INT_CTRL_STS_PHY_LINK_UP_INT_EN_MASK)

#define SerDes_SS_LINK_INT_CTRL_STS_LTSSM_STATE_RCVRY_EQ_MASK (0x40U)
#define SerDes_SS_LINK_INT_CTRL_STS_LTSSM_STATE_RCVRY_EQ_SHIFT (6U)
#define SerDes_SS_LINK_INT_CTRL_STS_LTSSM_STATE_RCVRY_EQ_WIDTH (1U)
#define SerDes_SS_LINK_INT_CTRL_STS_LTSSM_STATE_RCVRY_EQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_LINK_INT_CTRL_STS_LTSSM_STATE_RCVRY_EQ_SHIFT)) & SerDes_SS_LINK_INT_CTRL_STS_LTSSM_STATE_RCVRY_EQ_MASK)
/*! @} */

/*! @name PE0_GEN_CTRL_1 - PCIe Controller 0 General Control 1 */
/*! @{ */

#define SerDes_SS_PE0_GEN_CTRL_1_DEVICE_TYPE_MASK (0xFU)
#define SerDes_SS_PE0_GEN_CTRL_1_DEVICE_TYPE_SHIFT (0U)
#define SerDes_SS_PE0_GEN_CTRL_1_DEVICE_TYPE_WIDTH (4U)
#define SerDes_SS_PE0_GEN_CTRL_1_DEVICE_TYPE(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_1_DEVICE_TYPE_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_1_DEVICE_TYPE_MASK)

#define SerDes_SS_PE0_GEN_CTRL_1_DEVICE_TYPE_OVERRIDE_MASK (0x10U)
#define SerDes_SS_PE0_GEN_CTRL_1_DEVICE_TYPE_OVERRIDE_SHIFT (4U)
#define SerDes_SS_PE0_GEN_CTRL_1_DEVICE_TYPE_OVERRIDE_WIDTH (1U)
#define SerDes_SS_PE0_GEN_CTRL_1_DEVICE_TYPE_OVERRIDE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_1_DEVICE_TYPE_OVERRIDE_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_1_DEVICE_TYPE_OVERRIDE_MASK)

#define SerDes_SS_PE0_GEN_CTRL_1_SRIS_MODE_MASK  (0x100U)
#define SerDes_SS_PE0_GEN_CTRL_1_SRIS_MODE_SHIFT (8U)
#define SerDes_SS_PE0_GEN_CTRL_1_SRIS_MODE_WIDTH (1U)
#define SerDes_SS_PE0_GEN_CTRL_1_SRIS_MODE(x)    (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_1_SRIS_MODE_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_1_SRIS_MODE_MASK)

#define SerDes_SS_PE0_GEN_CTRL_1_RX_LANE_FLIP_EN_MASK (0x400000U)
#define SerDes_SS_PE0_GEN_CTRL_1_RX_LANE_FLIP_EN_SHIFT (22U)
#define SerDes_SS_PE0_GEN_CTRL_1_RX_LANE_FLIP_EN_WIDTH (1U)
#define SerDes_SS_PE0_GEN_CTRL_1_RX_LANE_FLIP_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_1_RX_LANE_FLIP_EN_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_1_RX_LANE_FLIP_EN_MASK)

#define SerDes_SS_PE0_GEN_CTRL_1_TX_LANE_FLIP_EN_MASK (0x40000000U)
#define SerDes_SS_PE0_GEN_CTRL_1_TX_LANE_FLIP_EN_SHIFT (30U)
#define SerDes_SS_PE0_GEN_CTRL_1_TX_LANE_FLIP_EN_WIDTH (1U)
#define SerDes_SS_PE0_GEN_CTRL_1_TX_LANE_FLIP_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_1_TX_LANE_FLIP_EN_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_1_TX_LANE_FLIP_EN_MASK)
/*! @} */

/*! @name PE0_GEN_CTRL_2 - PCIe Controller 0 General Control 2 */
/*! @{ */

#define SerDes_SS_PE0_GEN_CTRL_2_MSTR_ACLK_UNGATE_MASK (0x100U)
#define SerDes_SS_PE0_GEN_CTRL_2_MSTR_ACLK_UNGATE_SHIFT (8U)
#define SerDes_SS_PE0_GEN_CTRL_2_MSTR_ACLK_UNGATE_WIDTH (1U)
#define SerDes_SS_PE0_GEN_CTRL_2_MSTR_ACLK_UNGATE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_2_MSTR_ACLK_UNGATE_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_2_MSTR_ACLK_UNGATE_MASK)

#define SerDes_SS_PE0_GEN_CTRL_2_SLV_ACLK_UNGATE_MASK (0x200U)
#define SerDes_SS_PE0_GEN_CTRL_2_SLV_ACLK_UNGATE_SHIFT (9U)
#define SerDes_SS_PE0_GEN_CTRL_2_SLV_ACLK_UNGATE_WIDTH (1U)
#define SerDes_SS_PE0_GEN_CTRL_2_SLV_ACLK_UNGATE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_2_SLV_ACLK_UNGATE_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_2_SLV_ACLK_UNGATE_MASK)
/*! @} */

/*! @name PE0_GEN_CTRL_3 - PCIe Controller 0 General Control 3 */
/*! @{ */

#define SerDes_SS_PE0_GEN_CTRL_3_LTSSM_EN_MASK   (0x1U)
#define SerDes_SS_PE0_GEN_CTRL_3_LTSSM_EN_SHIFT  (0U)
#define SerDes_SS_PE0_GEN_CTRL_3_LTSSM_EN_WIDTH  (1U)
#define SerDes_SS_PE0_GEN_CTRL_3_LTSSM_EN(x)     (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_3_LTSSM_EN_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_3_LTSSM_EN_MASK)

#define SerDes_SS_PE0_GEN_CTRL_3_CRS_EN_MASK     (0x2U)
#define SerDes_SS_PE0_GEN_CTRL_3_CRS_EN_SHIFT    (1U)
#define SerDes_SS_PE0_GEN_CTRL_3_CRS_EN_WIDTH    (1U)
#define SerDes_SS_PE0_GEN_CTRL_3_CRS_EN(x)       (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_3_CRS_EN_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_3_CRS_EN_MASK)

#define SerDes_SS_PE0_GEN_CTRL_3_HOT_RESET_MASK  (0x4U)
#define SerDes_SS_PE0_GEN_CTRL_3_HOT_RESET_SHIFT (2U)
#define SerDes_SS_PE0_GEN_CTRL_3_HOT_RESET_WIDTH (1U)
#define SerDes_SS_PE0_GEN_CTRL_3_HOT_RESET(x)    (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_3_HOT_RESET_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_3_HOT_RESET_MASK)

#define SerDes_SS_PE0_GEN_CTRL_3_RAS_DES_SD_HOLD_LTSSM_MASK (0x8U)
#define SerDes_SS_PE0_GEN_CTRL_3_RAS_DES_SD_HOLD_LTSSM_SHIFT (3U)
#define SerDes_SS_PE0_GEN_CTRL_3_RAS_DES_SD_HOLD_LTSSM_WIDTH (1U)
#define SerDes_SS_PE0_GEN_CTRL_3_RAS_DES_SD_HOLD_LTSSM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_3_RAS_DES_SD_HOLD_LTSSM_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_3_RAS_DES_SD_HOLD_LTSSM_MASK)

#define SerDes_SS_PE0_GEN_CTRL_3_DIAG_CTRL_BUS_MASK (0xE000U)
#define SerDes_SS_PE0_GEN_CTRL_3_DIAG_CTRL_BUS_SHIFT (13U)
#define SerDes_SS_PE0_GEN_CTRL_3_DIAG_CTRL_BUS_WIDTH (3U)
#define SerDes_SS_PE0_GEN_CTRL_3_DIAG_CTRL_BUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_3_DIAG_CTRL_BUS_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_3_DIAG_CTRL_BUS_MASK)
/*! @} */

/*! @name PE0_GEN_CTRL_4 - PCIe Controller 0 General Control 4 */
/*! @{ */

#define SerDes_SS_PE0_GEN_CTRL_4_CFG_RAS_DES_TBA_CTRL_MASK (0x30000000U)
#define SerDes_SS_PE0_GEN_CTRL_4_CFG_RAS_DES_TBA_CTRL_SHIFT (28U)
#define SerDes_SS_PE0_GEN_CTRL_4_CFG_RAS_DES_TBA_CTRL_WIDTH (2U)
#define SerDes_SS_PE0_GEN_CTRL_4_CFG_RAS_DES_TBA_CTRL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_4_CFG_RAS_DES_TBA_CTRL_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_4_CFG_RAS_DES_TBA_CTRL_MASK)

#define SerDes_SS_PE0_GEN_CTRL_4_LTSSM_EN_CLR_MASK_MASK (0x40000000U)
#define SerDes_SS_PE0_GEN_CTRL_4_LTSSM_EN_CLR_MASK_SHIFT (30U)
#define SerDes_SS_PE0_GEN_CTRL_4_LTSSM_EN_CLR_MASK_WIDTH (1U)
#define SerDes_SS_PE0_GEN_CTRL_4_LTSSM_EN_CLR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_4_LTSSM_EN_CLR_MASK_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_4_LTSSM_EN_CLR_MASK_MASK)

#define SerDes_SS_PE0_GEN_CTRL_4_CRS_EN_CLR_MASK_MASK (0x80000000U)
#define SerDes_SS_PE0_GEN_CTRL_4_CRS_EN_CLR_MASK_SHIFT (31U)
#define SerDes_SS_PE0_GEN_CTRL_4_CRS_EN_CLR_MASK_WIDTH (1U)
#define SerDes_SS_PE0_GEN_CTRL_4_CRS_EN_CLR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_GEN_CTRL_4_CRS_EN_CLR_MASK_SHIFT)) & SerDes_SS_PE0_GEN_CTRL_4_CRS_EN_CLR_MASK_MASK)
/*! @} */

/*! @name PE0_PM_CTRL - PCIe Controller 0 PM Control */
/*! @{ */

#define SerDes_SS_PE0_PM_CTRL_PME_PF_INDEX_MASK  (0x1FU)
#define SerDes_SS_PE0_PM_CTRL_PME_PF_INDEX_SHIFT (0U)
#define SerDes_SS_PE0_PM_CTRL_PME_PF_INDEX_WIDTH (5U)
#define SerDes_SS_PE0_PM_CTRL_PME_PF_INDEX(x)    (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_CTRL_PME_PF_INDEX_SHIFT)) & SerDes_SS_PE0_PM_CTRL_PME_PF_INDEX_MASK)

#define SerDes_SS_PE0_PM_CTRL_PM_PME_REQ_MASK    (0x10000U)
#define SerDes_SS_PE0_PM_CTRL_PM_PME_REQ_SHIFT   (16U)
#define SerDes_SS_PE0_PM_CTRL_PM_PME_REQ_WIDTH   (1U)
#define SerDes_SS_PE0_PM_CTRL_PM_PME_REQ(x)      (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_CTRL_PM_PME_REQ_SHIFT)) & SerDes_SS_PE0_PM_CTRL_PM_PME_REQ_MASK)

#define SerDes_SS_PE0_PM_CTRL_ENTER_ASPM_L1_MASK (0x20000U)
#define SerDes_SS_PE0_PM_CTRL_ENTER_ASPM_L1_SHIFT (17U)
#define SerDes_SS_PE0_PM_CTRL_ENTER_ASPM_L1_WIDTH (1U)
#define SerDes_SS_PE0_PM_CTRL_ENTER_ASPM_L1(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_CTRL_ENTER_ASPM_L1_SHIFT)) & SerDes_SS_PE0_PM_CTRL_ENTER_ASPM_L1_MASK)

#define SerDes_SS_PE0_PM_CTRL_EXIT_ASPM_L1_MASK  (0x40000U)
#define SerDes_SS_PE0_PM_CTRL_EXIT_ASPM_L1_SHIFT (18U)
#define SerDes_SS_PE0_PM_CTRL_EXIT_ASPM_L1_WIDTH (1U)
#define SerDes_SS_PE0_PM_CTRL_EXIT_ASPM_L1(x)    (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_CTRL_EXIT_ASPM_L1_SHIFT)) & SerDes_SS_PE0_PM_CTRL_EXIT_ASPM_L1_MASK)

#define SerDes_SS_PE0_PM_CTRL_READY_ENTER_L23_MASK (0x80000U)
#define SerDes_SS_PE0_PM_CTRL_READY_ENTER_L23_SHIFT (19U)
#define SerDes_SS_PE0_PM_CTRL_READY_ENTER_L23_WIDTH (1U)
#define SerDes_SS_PE0_PM_CTRL_READY_ENTER_L23(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_CTRL_READY_ENTER_L23_SHIFT)) & SerDes_SS_PE0_PM_CTRL_READY_ENTER_L23_MASK)

#define SerDes_SS_PE0_PM_CTRL_APP_CLK_REQ_MASK   (0x100000U)
#define SerDes_SS_PE0_PM_CTRL_APP_CLK_REQ_SHIFT  (20U)
#define SerDes_SS_PE0_PM_CTRL_APP_CLK_REQ_WIDTH  (1U)
#define SerDes_SS_PE0_PM_CTRL_APP_CLK_REQ(x)     (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_CTRL_APP_CLK_REQ_SHIFT)) & SerDes_SS_PE0_PM_CTRL_APP_CLK_REQ_MASK)

#define SerDes_SS_PE0_PM_CTRL_APP_CLK_PM_EN_MASK (0x200000U)
#define SerDes_SS_PE0_PM_CTRL_APP_CLK_PM_EN_SHIFT (21U)
#define SerDes_SS_PE0_PM_CTRL_APP_CLK_PM_EN_WIDTH (1U)
#define SerDes_SS_PE0_PM_CTRL_APP_CLK_PM_EN(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_CTRL_APP_CLK_PM_EN_SHIFT)) & SerDes_SS_PE0_PM_CTRL_APP_CLK_PM_EN_MASK)

#define SerDes_SS_PE0_PM_CTRL_BEACON_INT_EN_MASK (0x80000000U)
#define SerDes_SS_PE0_PM_CTRL_BEACON_INT_EN_SHIFT (31U)
#define SerDes_SS_PE0_PM_CTRL_BEACON_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_PM_CTRL_BEACON_INT_EN(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_CTRL_BEACON_INT_EN_SHIFT)) & SerDes_SS_PE0_PM_CTRL_BEACON_INT_EN_MASK)
/*! @} */

/*! @name PE0_PM_STS - PCIe Controller 0 PM Status */
/*! @{ */

#define SerDes_SS_PE0_PM_STS_PM_DSTATE_MASK      (0x7U)
#define SerDes_SS_PE0_PM_STS_PM_DSTATE_SHIFT     (0U)
#define SerDes_SS_PE0_PM_STS_PM_DSTATE_WIDTH     (3U)
#define SerDes_SS_PE0_PM_STS_PM_DSTATE(x)        (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_STS_PM_DSTATE_SHIFT)) & SerDes_SS_PE0_PM_STS_PM_DSTATE_MASK)

#define SerDes_SS_PE0_PM_STS_PM_PME_EN_MASK      (0x8U)
#define SerDes_SS_PE0_PM_STS_PM_PME_EN_SHIFT     (3U)
#define SerDes_SS_PE0_PM_STS_PM_PME_EN_WIDTH     (1U)
#define SerDes_SS_PE0_PM_STS_PM_PME_EN(x)        (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_STS_PM_PME_EN_SHIFT)) & SerDes_SS_PE0_PM_STS_PM_PME_EN_MASK)

#define SerDes_SS_PE0_PM_STS_PM_STATUS_MASK      (0x10U)
#define SerDes_SS_PE0_PM_STS_PM_STATUS_SHIFT     (4U)
#define SerDes_SS_PE0_PM_STS_PM_STATUS_WIDTH     (1U)
#define SerDes_SS_PE0_PM_STS_PM_STATUS(x)        (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_STS_PM_STATUS_SHIFT)) & SerDes_SS_PE0_PM_STS_PM_STATUS_MASK)

#define SerDes_SS_PE0_PM_STS_PM_CURNT_STATE_MASK (0x700U)
#define SerDes_SS_PE0_PM_STS_PM_CURNT_STATE_SHIFT (8U)
#define SerDes_SS_PE0_PM_STS_PM_CURNT_STATE_WIDTH (3U)
#define SerDes_SS_PE0_PM_STS_PM_CURNT_STATE(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_STS_PM_CURNT_STATE_SHIFT)) & SerDes_SS_PE0_PM_STS_PM_CURNT_STATE_MASK)

#define SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L0S_MASK (0x800U)
#define SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L0S_SHIFT (11U)
#define SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L0S_WIDTH (1U)
#define SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L0S(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L0S_SHIFT)) & SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L0S_MASK)

#define SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L1_MASK (0x1000U)
#define SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L1_SHIFT (12U)
#define SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L1_WIDTH (1U)
#define SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L1(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L1_SHIFT)) & SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L1_MASK)

#define SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L2_MASK (0x4000U)
#define SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L2_SHIFT (14U)
#define SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L2_WIDTH (1U)
#define SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L2(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L2_SHIFT)) & SerDes_SS_PE0_PM_STS_PM_LINKST_IN_L2_MASK)

#define SerDes_SS_PE0_PM_STS_PM_LINKST_L2_EXIT_MASK (0x8000U)
#define SerDes_SS_PE0_PM_STS_PM_LINKST_L2_EXIT_SHIFT (15U)
#define SerDes_SS_PE0_PM_STS_PM_LINKST_L2_EXIT_WIDTH (1U)
#define SerDes_SS_PE0_PM_STS_PM_LINKST_L2_EXIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_STS_PM_LINKST_L2_EXIT_SHIFT)) & SerDes_SS_PE0_PM_STS_PM_LINKST_L2_EXIT_MASK)

#define SerDes_SS_PE0_PM_STS_BEACON_INT_STS_MASK (0x80000000U)
#define SerDes_SS_PE0_PM_STS_BEACON_INT_STS_SHIFT (31U)
#define SerDes_SS_PE0_PM_STS_BEACON_INT_STS_WIDTH (1U)
#define SerDes_SS_PE0_PM_STS_BEACON_INT_STS(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_PM_STS_BEACON_INT_STS_SHIFT)) & SerDes_SS_PE0_PM_STS_BEACON_INT_STS_MASK)
/*! @} */

/*! @name PE0_TX_MSG_HDR_1 - PCIe Controller 0 Transmit Message Header 1 */
/*! @{ */

#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_LENGTH_MASK (0x3FFU)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_LENGTH_SHIFT (0U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_LENGTH_WIDTH (10U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_LENGTH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_LENGTH_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_LENGTH_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_ATTR_MASK (0x3000U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_ATTR_SHIFT (12U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_ATTR_WIDTH (2U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_ATTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_ATTR_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_ATTR_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_EP_MASK (0x4000U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_EP_SHIFT (14U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_EP_WIDTH (1U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_EP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_EP_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_EP_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TD_MASK (0x8000U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TD_SHIFT (15U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TD_WIDTH (1U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TD_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TD_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TC_MASK (0x700000U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TC_SHIFT (20U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TC_WIDTH (3U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TC_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TC_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TYPE_MASK (0x1F000000U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TYPE_SHIFT (24U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TYPE_WIDTH (5U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TYPE_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_TYPE_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_FM_MASK (0x60000000U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_FM_SHIFT (29U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_FM_WIDTH (2U)
#define SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_FM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_FM_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_1_MSG_HDR_FM_MASK)
/*! @} */

/*! @name PE0_TX_MSG_HDR_2 - PCIe Controller 0 Transmit Message Header 2 */
/*! @{ */

#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE7_MASK (0xFFU)
#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE7_SHIFT (0U)
#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE7_WIDTH (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE7(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE7_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE7_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE6_MASK (0xFF00U)
#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE6_SHIFT (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE6_WIDTH (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE6(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE6_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE6_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE5_MASK (0xFF0000U)
#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE5_SHIFT (16U)
#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE5_WIDTH (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE5_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE5_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE4_MASK (0xFF000000U)
#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE4_SHIFT (24U)
#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE4_WIDTH (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE4_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_2_MSG_HDR_BYTE4_MASK)
/*! @} */

/*! @name PE0_TX_MSG_HDR_3 - PCIe Controller 0 Transmit Message Header 3 */
/*! @{ */

#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE11_MASK (0xFFU)
#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE11_SHIFT (0U)
#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE11_WIDTH (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE11(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE11_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE11_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE10_MASK (0xFF00U)
#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE10_SHIFT (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE10_WIDTH (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE10(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE10_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE10_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE9_MASK (0xFF0000U)
#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE9_SHIFT (16U)
#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE9_WIDTH (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE9(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE9_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE9_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE8_MASK (0xFF000000U)
#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE8_SHIFT (24U)
#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE8_WIDTH (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE8_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_3_MSG_HDR_BYTE8_MASK)
/*! @} */

/*! @name PE0_TX_MSG_HDR_4 - PCIe controller 0 transmit message header 4 */
/*! @{ */

#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE15_MASK (0xFFU)
#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE15_SHIFT (0U)
#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE15_WIDTH (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE15(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE15_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE15_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE14_MASK (0xFF00U)
#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE14_SHIFT (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE14_WIDTH (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE14(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE14_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE14_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE13_MASK (0xFF0000U)
#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE13_SHIFT (16U)
#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE13_WIDTH (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE13(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE13_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE13_MASK)

#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE12_MASK (0xFF000000U)
#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE12_SHIFT (24U)
#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE12_WIDTH (8U)
#define SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE12(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE12_SHIFT)) & SerDes_SS_PE0_TX_MSG_HDR_4_MSG_HDR_BYTE12_MASK)
/*! @} */

/*! @name PE0_TX_MSG_REQ - PCIe Controller 0 Transmit Message Request */
/*! @{ */

#define SerDes_SS_PE0_TX_MSG_REQ_TX_MSG_PF_NUM_MASK (0x1FU)
#define SerDes_SS_PE0_TX_MSG_REQ_TX_MSG_PF_NUM_SHIFT (0U)
#define SerDes_SS_PE0_TX_MSG_REQ_TX_MSG_PF_NUM_WIDTH (5U)
#define SerDes_SS_PE0_TX_MSG_REQ_TX_MSG_PF_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_REQ_TX_MSG_PF_NUM_SHIFT)) & SerDes_SS_PE0_TX_MSG_REQ_TX_MSG_PF_NUM_MASK)

#define SerDes_SS_PE0_TX_MSG_REQ_VEN_MSG_REQ_MASK (0x20000U)
#define SerDes_SS_PE0_TX_MSG_REQ_VEN_MSG_REQ_SHIFT (17U)
#define SerDes_SS_PE0_TX_MSG_REQ_VEN_MSG_REQ_WIDTH (1U)
#define SerDes_SS_PE0_TX_MSG_REQ_VEN_MSG_REQ(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_REQ_VEN_MSG_REQ_SHIFT)) & SerDes_SS_PE0_TX_MSG_REQ_VEN_MSG_REQ_MASK)

#define SerDes_SS_PE0_TX_MSG_REQ_PME_TURN_OFF_REQ_MASK (0x80000U)
#define SerDes_SS_PE0_TX_MSG_REQ_PME_TURN_OFF_REQ_SHIFT (19U)
#define SerDes_SS_PE0_TX_MSG_REQ_PME_TURN_OFF_REQ_WIDTH (1U)
#define SerDes_SS_PE0_TX_MSG_REQ_PME_TURN_OFF_REQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_REQ_PME_TURN_OFF_REQ_SHIFT)) & SerDes_SS_PE0_TX_MSG_REQ_PME_TURN_OFF_REQ_MASK)

#define SerDes_SS_PE0_TX_MSG_REQ_UNLOCK_REQ_MASK (0x100000U)
#define SerDes_SS_PE0_TX_MSG_REQ_UNLOCK_REQ_SHIFT (20U)
#define SerDes_SS_PE0_TX_MSG_REQ_UNLOCK_REQ_WIDTH (1U)
#define SerDes_SS_PE0_TX_MSG_REQ_UNLOCK_REQ(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_TX_MSG_REQ_UNLOCK_REQ_SHIFT)) & SerDes_SS_PE0_TX_MSG_REQ_UNLOCK_REQ_MASK)
/*! @} */

/*! @name PE0_RX_MSG_HDR_1 - PCIe Controller 0 Receive Message Header 1 */
/*! @{ */

#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE3_MASK (0xFFU)
#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE3_SHIFT (0U)
#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE3_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE3_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE3_MASK)

#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE2_MASK (0xFF00U)
#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE2_SHIFT (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE2_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE2_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE2_MASK)

#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE1_MASK (0xFF0000U)
#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE1_SHIFT (16U)
#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE1_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE1_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE1_MASK)

#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE0_MASK (0xFF000000U)
#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE0_SHIFT (24U)
#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE0_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE0_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_1_MSG_HDR_BYTE0_MASK)
/*! @} */

/*! @name PE0_RX_MSG_HDR_2 - PCIe Controller 0 Receive Message Header 2 */
/*! @{ */

#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE7_MASK (0xFFU)
#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE7_SHIFT (0U)
#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE7_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE7(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE7_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE7_MASK)

#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE6_MASK (0xFF00U)
#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE6_SHIFT (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE6_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE6(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE6_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE6_MASK)

#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE5_MASK (0xFF0000U)
#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE5_SHIFT (16U)
#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE5_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE5_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE5_MASK)

#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE4_MASK (0xFF000000U)
#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE4_SHIFT (24U)
#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE4_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE4_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_2_MSG_HDR_BYTE4_MASK)
/*! @} */

/*! @name PE0_RX_MSG_HDR_3 - PCIe Controller 0 Receive Message Header 3 */
/*! @{ */

#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE11_MASK (0xFFU)
#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE11_SHIFT (0U)
#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE11_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE11(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE11_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE11_MASK)

#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE10_MASK (0xFF00U)
#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE10_SHIFT (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE10_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE10(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE10_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE10_MASK)

#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE9_MASK (0xFF0000U)
#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE9_SHIFT (16U)
#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE9_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE9(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE9_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE9_MASK)

#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE8_MASK (0xFF000000U)
#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE8_SHIFT (24U)
#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE8_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE8_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_3_MSG_HDR_BYTE8_MASK)
/*! @} */

/*! @name PE0_RX_MSG_HDR_4 - PCIe Controller 0 Receive Message Header 4 */
/*! @{ */

#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE15_MASK (0xFFU)
#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE15_SHIFT (0U)
#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE15_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE15(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE15_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE15_MASK)

#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE14_MASK (0xFF00U)
#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE14_SHIFT (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE14_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE14(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE14_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE14_MASK)

#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE13_MASK (0xFF0000U)
#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE13_SHIFT (16U)
#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE13_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE13(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE13_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE13_MASK)

#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE12_MASK (0xFF000000U)
#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE12_SHIFT (24U)
#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE12_WIDTH (8U)
#define SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE12(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE12_SHIFT)) & SerDes_SS_PE0_RX_MSG_HDR_4_MSG_HDR_BYTE12_MASK)
/*! @} */

/*! @name PE0_RX_MSG_STS - PCIe Controller 0 Receive Message Status */
/*! @{ */

#define SerDes_SS_PE0_RX_MSG_STS_PME_TO_ACK_STS_MASK (0x800U)
#define SerDes_SS_PE0_RX_MSG_STS_PME_TO_ACK_STS_SHIFT (11U)
#define SerDes_SS_PE0_RX_MSG_STS_PME_TO_ACK_STS_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_STS_PME_TO_ACK_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_STS_PME_TO_ACK_STS_SHIFT)) & SerDes_SS_PE0_RX_MSG_STS_PME_TO_ACK_STS_MASK)

#define SerDes_SS_PE0_RX_MSG_STS_PM_PME_STS_MASK (0x1000U)
#define SerDes_SS_PE0_RX_MSG_STS_PM_PME_STS_SHIFT (12U)
#define SerDes_SS_PE0_RX_MSG_STS_PM_PME_STS_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_STS_PM_PME_STS(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_STS_PM_PME_STS_SHIFT)) & SerDes_SS_PE0_RX_MSG_STS_PM_PME_STS_MASK)

#define SerDes_SS_PE0_RX_MSG_STS_VDM_TYPE0_STS_MASK (0x20000U)
#define SerDes_SS_PE0_RX_MSG_STS_VDM_TYPE0_STS_SHIFT (17U)
#define SerDes_SS_PE0_RX_MSG_STS_VDM_TYPE0_STS_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_STS_VDM_TYPE0_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_STS_VDM_TYPE0_STS_SHIFT)) & SerDes_SS_PE0_RX_MSG_STS_VDM_TYPE0_STS_MASK)

#define SerDes_SS_PE0_RX_MSG_STS_VDM_TYPE1_STS_MASK (0x40000U)
#define SerDes_SS_PE0_RX_MSG_STS_VDM_TYPE1_STS_SHIFT (18U)
#define SerDes_SS_PE0_RX_MSG_STS_VDM_TYPE1_STS_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_STS_VDM_TYPE1_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_STS_VDM_TYPE1_STS_SHIFT)) & SerDes_SS_PE0_RX_MSG_STS_VDM_TYPE1_STS_MASK)

#define SerDes_SS_PE0_RX_MSG_STS_PME_TURN_OFF_STS_MASK (0x80000U)
#define SerDes_SS_PE0_RX_MSG_STS_PME_TURN_OFF_STS_SHIFT (19U)
#define SerDes_SS_PE0_RX_MSG_STS_PME_TURN_OFF_STS_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_STS_PME_TURN_OFF_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_STS_PME_TURN_OFF_STS_SHIFT)) & SerDes_SS_PE0_RX_MSG_STS_PME_TURN_OFF_STS_MASK)

#define SerDes_SS_PE0_RX_MSG_STS_UNLOCK_STS_MASK (0x100000U)
#define SerDes_SS_PE0_RX_MSG_STS_UNLOCK_STS_SHIFT (20U)
#define SerDes_SS_PE0_RX_MSG_STS_UNLOCK_STS_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_STS_UNLOCK_STS(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_STS_UNLOCK_STS_SHIFT)) & SerDes_SS_PE0_RX_MSG_STS_UNLOCK_STS_MASK)

#define SerDes_SS_PE0_RX_MSG_STS_MSGQ_OVERFLOW_MASK (0x80000000U)
#define SerDes_SS_PE0_RX_MSG_STS_MSGQ_OVERFLOW_SHIFT (31U)
#define SerDes_SS_PE0_RX_MSG_STS_MSGQ_OVERFLOW_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_STS_MSGQ_OVERFLOW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_STS_MSGQ_OVERFLOW_SHIFT)) & SerDes_SS_PE0_RX_MSG_STS_MSGQ_OVERFLOW_MASK)
/*! @} */

/*! @name PE0_RX_MSG_CAP_CTRL - PCIe Controller 0 Receive Message Capture Control */
/*! @{ */

#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PME_TO_ACK_MASK (0x800U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PME_TO_ACK_SHIFT (11U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PME_TO_ACK_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PME_TO_ACK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PME_TO_ACK_SHIFT)) & SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PME_TO_ACK_MASK)

#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PM_PME_MASK (0x1000U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PM_PME_SHIFT (12U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PM_PME_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PM_PME(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PM_PME_SHIFT)) & SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PM_PME_MASK)

#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_VDM_TYPE0_MASK (0x20000U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_VDM_TYPE0_SHIFT (17U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_VDM_TYPE0_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_VDM_TYPE0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_VDM_TYPE0_SHIFT)) & SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_VDM_TYPE0_MASK)

#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_VDM_TYPE1_MASK (0x40000U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_VDM_TYPE1_SHIFT (18U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_VDM_TYPE1_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_VDM_TYPE1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_VDM_TYPE1_SHIFT)) & SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_VDM_TYPE1_MASK)

#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PME_TURN_OFF_MASK (0x80000U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PME_TURN_OFF_SHIFT (19U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PME_TURN_OFF_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PME_TURN_OFF(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PME_TURN_OFF_SHIFT)) & SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_PME_TURN_OFF_MASK)

#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_UNLOCK_MASK (0x100000U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_UNLOCK_SHIFT (20U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_UNLOCK_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_UNLOCK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_UNLOCK_SHIFT)) & SerDes_SS_PE0_RX_MSG_CAP_CTRL_CAP_UNLOCK_MASK)
/*! @} */

/*! @name PE0_RX_MSG_INT_CTRL - PCIe Controller 0 Receive Message Interrupt Control */
/*! @{ */

#define SerDes_SS_PE0_RX_MSG_INT_CTRL_PME_TO_ACK_INT_EN_MASK (0x800U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_PME_TO_ACK_INT_EN_SHIFT (11U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_PME_TO_ACK_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_PME_TO_ACK_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_INT_CTRL_PME_TO_ACK_INT_EN_SHIFT)) & SerDes_SS_PE0_RX_MSG_INT_CTRL_PME_TO_ACK_INT_EN_MASK)

#define SerDes_SS_PE0_RX_MSG_INT_CTRL_PM_PME_INT_EN_MASK (0x1000U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_PM_PME_INT_EN_SHIFT (12U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_PM_PME_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_PM_PME_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_INT_CTRL_PM_PME_INT_EN_SHIFT)) & SerDes_SS_PE0_RX_MSG_INT_CTRL_PM_PME_INT_EN_MASK)

#define SerDes_SS_PE0_RX_MSG_INT_CTRL_VDM_TYPE0_INT_EN_MASK (0x20000U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_VDM_TYPE0_INT_EN_SHIFT (17U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_VDM_TYPE0_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_VDM_TYPE0_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_INT_CTRL_VDM_TYPE0_INT_EN_SHIFT)) & SerDes_SS_PE0_RX_MSG_INT_CTRL_VDM_TYPE0_INT_EN_MASK)

#define SerDes_SS_PE0_RX_MSG_INT_CTRL_VDM_TYPE1_INT_EN_MASK (0x40000U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_VDM_TYPE1_INT_EN_SHIFT (18U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_VDM_TYPE1_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_VDM_TYPE1_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_INT_CTRL_VDM_TYPE1_INT_EN_SHIFT)) & SerDes_SS_PE0_RX_MSG_INT_CTRL_VDM_TYPE1_INT_EN_MASK)

#define SerDes_SS_PE0_RX_MSG_INT_CTRL_PME_TURN_OFF_INT_EN_MASK (0x80000U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_PME_TURN_OFF_INT_EN_SHIFT (19U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_PME_TURN_OFF_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_PME_TURN_OFF_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_INT_CTRL_PME_TURN_OFF_INT_EN_SHIFT)) & SerDes_SS_PE0_RX_MSG_INT_CTRL_PME_TURN_OFF_INT_EN_MASK)

#define SerDes_SS_PE0_RX_MSG_INT_CTRL_UNLOCK_INT_EN_MASK (0x100000U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_UNLOCK_INT_EN_SHIFT (20U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_UNLOCK_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_UNLOCK_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_INT_CTRL_UNLOCK_INT_EN_SHIFT)) & SerDes_SS_PE0_RX_MSG_INT_CTRL_UNLOCK_INT_EN_MASK)

#define SerDes_SS_PE0_RX_MSG_INT_CTRL_MSGQ_OVERFLOW_INT_EN_MASK (0x80000000U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_MSGQ_OVERFLOW_INT_EN_SHIFT (31U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_MSGQ_OVERFLOW_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_RX_MSG_INT_CTRL_MSGQ_OVERFLOW_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_RX_MSG_INT_CTRL_MSGQ_OVERFLOW_INT_EN_SHIFT)) & SerDes_SS_PE0_RX_MSG_INT_CTRL_MSGQ_OVERFLOW_INT_EN_MASK)
/*! @} */

/*! @name PE0_LINK_DBG_1 - PCIe Controller 0 Link Debug 1 */
/*! @{ */

#define SerDes_SS_PE0_LINK_DBG_1_RECEIVER_DETECTED_MASK (0x3U)
#define SerDes_SS_PE0_LINK_DBG_1_RECEIVER_DETECTED_SHIFT (0U)
#define SerDes_SS_PE0_LINK_DBG_1_RECEIVER_DETECTED_WIDTH (2U)
#define SerDes_SS_PE0_LINK_DBG_1_RECEIVER_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_1_RECEIVER_DETECTED_SHIFT)) & SerDes_SS_PE0_LINK_DBG_1_RECEIVER_DETECTED_MASK)

#define SerDes_SS_PE0_LINK_DBG_1_SYMBOL_LOCK_MASK (0x30000U)
#define SerDes_SS_PE0_LINK_DBG_1_SYMBOL_LOCK_SHIFT (16U)
#define SerDes_SS_PE0_LINK_DBG_1_SYMBOL_LOCK_WIDTH (2U)
#define SerDes_SS_PE0_LINK_DBG_1_SYMBOL_LOCK(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_1_SYMBOL_LOCK_SHIFT)) & SerDes_SS_PE0_LINK_DBG_1_SYMBOL_LOCK_MASK)
/*! @} */

/*! @name PE0_LINK_DBG_2 - PCIe Controller 0 Link Debug 2 */
/*! @{ */

#define SerDes_SS_PE0_LINK_DBG_2_SMLH_LTSSM_STATE_MASK (0x3FU)
#define SerDes_SS_PE0_LINK_DBG_2_SMLH_LTSSM_STATE_SHIFT (0U)
#define SerDes_SS_PE0_LINK_DBG_2_SMLH_LTSSM_STATE_WIDTH (6U)
#define SerDes_SS_PE0_LINK_DBG_2_SMLH_LTSSM_STATE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_2_SMLH_LTSSM_STATE_SHIFT)) & SerDes_SS_PE0_LINK_DBG_2_SMLH_LTSSM_STATE_MASK)

#define SerDes_SS_PE0_LINK_DBG_2_SMLH_LINK_UP_MASK (0x40U)
#define SerDes_SS_PE0_LINK_DBG_2_SMLH_LINK_UP_SHIFT (6U)
#define SerDes_SS_PE0_LINK_DBG_2_SMLH_LINK_UP_WIDTH (1U)
#define SerDes_SS_PE0_LINK_DBG_2_SMLH_LINK_UP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_2_SMLH_LINK_UP_SHIFT)) & SerDes_SS_PE0_LINK_DBG_2_SMLH_LINK_UP_MASK)

#define SerDes_SS_PE0_LINK_DBG_2_RDLH_LINK_UP_MASK (0x80U)
#define SerDes_SS_PE0_LINK_DBG_2_RDLH_LINK_UP_SHIFT (7U)
#define SerDes_SS_PE0_LINK_DBG_2_RDLH_LINK_UP_WIDTH (1U)
#define SerDes_SS_PE0_LINK_DBG_2_RDLH_LINK_UP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_2_RDLH_LINK_UP_SHIFT)) & SerDes_SS_PE0_LINK_DBG_2_RDLH_LINK_UP_MASK)

#define SerDes_SS_PE0_LINK_DBG_2_RATE_MASK       (0x300U)
#define SerDes_SS_PE0_LINK_DBG_2_RATE_SHIFT      (8U)
#define SerDes_SS_PE0_LINK_DBG_2_RATE_WIDTH      (2U)
#define SerDes_SS_PE0_LINK_DBG_2_RATE(x)         (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_2_RATE_SHIFT)) & SerDes_SS_PE0_LINK_DBG_2_RATE_MASK)

#define SerDes_SS_PE0_LINK_DBG_2_PHY_POWRDOWN_MASK (0x1C00U)
#define SerDes_SS_PE0_LINK_DBG_2_PHY_POWRDOWN_SHIFT (10U)
#define SerDes_SS_PE0_LINK_DBG_2_PHY_POWRDOWN_WIDTH (3U)
#define SerDes_SS_PE0_LINK_DBG_2_PHY_POWRDOWN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_2_PHY_POWRDOWN_SHIFT)) & SerDes_SS_PE0_LINK_DBG_2_PHY_POWRDOWN_MASK)

#define SerDes_SS_PE0_LINK_DBG_2_VC0_Q_NOT_EMPTY_MASK (0x10000U)
#define SerDes_SS_PE0_LINK_DBG_2_VC0_Q_NOT_EMPTY_SHIFT (16U)
#define SerDes_SS_PE0_LINK_DBG_2_VC0_Q_NOT_EMPTY_WIDTH (1U)
#define SerDes_SS_PE0_LINK_DBG_2_VC0_Q_NOT_EMPTY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_2_VC0_Q_NOT_EMPTY_SHIFT)) & SerDes_SS_PE0_LINK_DBG_2_VC0_Q_NOT_EMPTY_MASK)

#define SerDes_SS_PE0_LINK_DBG_2_RADM_XFER_PENDING_MASK (0x100000U)
#define SerDes_SS_PE0_LINK_DBG_2_RADM_XFER_PENDING_SHIFT (20U)
#define SerDes_SS_PE0_LINK_DBG_2_RADM_XFER_PENDING_WIDTH (1U)
#define SerDes_SS_PE0_LINK_DBG_2_RADM_XFER_PENDING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_2_RADM_XFER_PENDING_SHIFT)) & SerDes_SS_PE0_LINK_DBG_2_RADM_XFER_PENDING_MASK)

#define SerDes_SS_PE0_LINK_DBG_2_EDMA_XFER_PENDING_MASK (0x200000U)
#define SerDes_SS_PE0_LINK_DBG_2_EDMA_XFER_PENDING_SHIFT (21U)
#define SerDes_SS_PE0_LINK_DBG_2_EDMA_XFER_PENDING_WIDTH (1U)
#define SerDes_SS_PE0_LINK_DBG_2_EDMA_XFER_PENDING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_2_EDMA_XFER_PENDING_SHIFT)) & SerDes_SS_PE0_LINK_DBG_2_EDMA_XFER_PENDING_MASK)

#define SerDes_SS_PE0_LINK_DBG_2_BRDG_DBI_XFER_PENDING_MASK (0x400000U)
#define SerDes_SS_PE0_LINK_DBG_2_BRDG_DBI_XFER_PENDING_SHIFT (22U)
#define SerDes_SS_PE0_LINK_DBG_2_BRDG_DBI_XFER_PENDING_WIDTH (1U)
#define SerDes_SS_PE0_LINK_DBG_2_BRDG_DBI_XFER_PENDING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_2_BRDG_DBI_XFER_PENDING_SHIFT)) & SerDes_SS_PE0_LINK_DBG_2_BRDG_DBI_XFER_PENDING_MASK)

#define SerDes_SS_PE0_LINK_DBG_2_BRDG_SLV_XFER_PENDING_MASK (0x800000U)
#define SerDes_SS_PE0_LINK_DBG_2_BRDG_SLV_XFER_PENDING_SHIFT (23U)
#define SerDes_SS_PE0_LINK_DBG_2_BRDG_SLV_XFER_PENDING_WIDTH (1U)
#define SerDes_SS_PE0_LINK_DBG_2_BRDG_SLV_XFER_PENDING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_2_BRDG_SLV_XFER_PENDING_SHIFT)) & SerDes_SS_PE0_LINK_DBG_2_BRDG_SLV_XFER_PENDING_MASK)

#define SerDes_SS_PE0_LINK_DBG_2_CDM_IN_RESET_MASK (0x1000000U)
#define SerDes_SS_PE0_LINK_DBG_2_CDM_IN_RESET_SHIFT (24U)
#define SerDes_SS_PE0_LINK_DBG_2_CDM_IN_RESET_WIDTH (1U)
#define SerDes_SS_PE0_LINK_DBG_2_CDM_IN_RESET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_LINK_DBG_2_CDM_IN_RESET_SHIFT)) & SerDes_SS_PE0_LINK_DBG_2_CDM_IN_RESET_MASK)
/*! @} */

/*! @name PE0_AXI_MSTR_DBG_1 - PCIe Controller 0 AXI Master Debug 1 */
/*! @{ */

#define SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_REQ_MASK (0xFFFFU)
#define SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_REQ_SHIFT (0U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_REQ_WIDTH (16U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_REQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_REQ_SHIFT)) & SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_REQ_MASK)

#define SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_REQ_PEND_MASK (0xFF0000U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_REQ_PEND_SHIFT (16U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_REQ_PEND_WIDTH (8U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_REQ_PEND(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_REQ_PEND_SHIFT)) & SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_REQ_PEND_MASK)

#define SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_ERR_MASK (0xFF000000U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_ERR_SHIFT (24U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_ERR_WIDTH (8U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_ERR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_ERR_SHIFT)) & SerDes_SS_PE0_AXI_MSTR_DBG_1_MSTR_WR_ERR_MASK)
/*! @} */

/*! @name PE0_AXI_MSTR_DBG_2 - PCIe Controller 0 AXI Master Debug 2 */
/*! @{ */

#define SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_REQ_MASK (0xFFFFU)
#define SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_REQ_SHIFT (0U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_REQ_WIDTH (16U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_REQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_REQ_SHIFT)) & SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_REQ_MASK)

#define SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_REQ_PEND_MASK (0xFF0000U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_REQ_PEND_SHIFT (16U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_REQ_PEND_WIDTH (8U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_REQ_PEND(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_REQ_PEND_SHIFT)) & SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_REQ_PEND_MASK)

#define SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_ERR_MASK (0xFF000000U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_ERR_SHIFT (24U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_ERR_WIDTH (8U)
#define SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_ERR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_ERR_SHIFT)) & SerDes_SS_PE0_AXI_MSTR_DBG_2_MSTR_RD_ERR_MASK)
/*! @} */

/*! @name PE0_AXI_SLV_DBG_1 - PCIe Controller 0 AXI Slave Debug 1 */
/*! @{ */

#define SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_REQ_MASK (0xFFFFU)
#define SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_REQ_SHIFT (0U)
#define SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_REQ_WIDTH (16U)
#define SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_REQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_REQ_SHIFT)) & SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_REQ_MASK)

#define SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_REQ_PEND_MASK (0xFF0000U)
#define SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_REQ_PEND_SHIFT (16U)
#define SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_REQ_PEND_WIDTH (8U)
#define SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_REQ_PEND(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_REQ_PEND_SHIFT)) & SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_REQ_PEND_MASK)

#define SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_ERR_MASK (0xFF000000U)
#define SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_ERR_SHIFT (24U)
#define SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_ERR_WIDTH (8U)
#define SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_ERR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_ERR_SHIFT)) & SerDes_SS_PE0_AXI_SLV_DBG_1_SLV_WR_ERR_MASK)
/*! @} */

/*! @name PE0_AXI_SLV_DBG_2 - PCIe Controller 0 AXI Slave Debug 2 */
/*! @{ */

#define SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_REQ_MASK (0xFFFFU)
#define SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_REQ_SHIFT (0U)
#define SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_REQ_WIDTH (16U)
#define SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_REQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_REQ_SHIFT)) & SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_REQ_MASK)

#define SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_REQ_PEND_MASK (0xFF0000U)
#define SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_REQ_PEND_SHIFT (16U)
#define SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_REQ_PEND_WIDTH (8U)
#define SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_REQ_PEND(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_REQ_PEND_SHIFT)) & SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_REQ_PEND_MASK)

#define SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_ERR_MASK (0xFF000000U)
#define SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_ERR_SHIFT (24U)
#define SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_ERR_WIDTH (8U)
#define SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_ERR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_ERR_SHIFT)) & SerDes_SS_PE0_AXI_SLV_DBG_2_SLV_RD_ERR_MASK)
/*! @} */

/*! @name PE0_ERR_STS - PCIe Controller 0 Error Status */
/*! @{ */

#define SerDes_SS_PE0_ERR_STS_TXDATA_PERR_FRONT_MASK (0x20U)
#define SerDes_SS_PE0_ERR_STS_TXDATA_PERR_FRONT_SHIFT (5U)
#define SerDes_SS_PE0_ERR_STS_TXDATA_PERR_FRONT_WIDTH (1U)
#define SerDes_SS_PE0_ERR_STS_TXDATA_PERR_FRONT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_STS_TXDATA_PERR_FRONT_SHIFT)) & SerDes_SS_PE0_ERR_STS_TXDATA_PERR_FRONT_MASK)

#define SerDes_SS_PE0_ERR_STS_TXDATA_PERR_BACK_MASK (0x40U)
#define SerDes_SS_PE0_ERR_STS_TXDATA_PERR_BACK_SHIFT (6U)
#define SerDes_SS_PE0_ERR_STS_TXDATA_PERR_BACK_WIDTH (1U)
#define SerDes_SS_PE0_ERR_STS_TXDATA_PERR_BACK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_STS_TXDATA_PERR_BACK_SHIFT)) & SerDes_SS_PE0_ERR_STS_TXDATA_PERR_BACK_MASK)

#define SerDes_SS_PE0_ERR_STS_RXDATA_PERR_MASK   (0x80U)
#define SerDes_SS_PE0_ERR_STS_RXDATA_PERR_SHIFT  (7U)
#define SerDes_SS_PE0_ERR_STS_RXDATA_PERR_WIDTH  (1U)
#define SerDes_SS_PE0_ERR_STS_RXDATA_PERR(x)     (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_STS_RXDATA_PERR_SHIFT)) & SerDes_SS_PE0_ERR_STS_RXDATA_PERR_MASK)

#define SerDes_SS_PE0_ERR_STS_P_HDRQ_PARERR_STS_0_MASK (0x100U)
#define SerDes_SS_PE0_ERR_STS_P_HDRQ_PARERR_STS_0_SHIFT (8U)
#define SerDes_SS_PE0_ERR_STS_P_HDRQ_PARERR_STS_0_WIDTH (1U)
#define SerDes_SS_PE0_ERR_STS_P_HDRQ_PARERR_STS_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_STS_P_HDRQ_PARERR_STS_0_SHIFT)) & SerDes_SS_PE0_ERR_STS_P_HDRQ_PARERR_STS_0_MASK)

#define SerDes_SS_PE0_ERR_STS_P_DATAQ_PARERR_STS_0_MASK (0x1000U)
#define SerDes_SS_PE0_ERR_STS_P_DATAQ_PARERR_STS_0_SHIFT (12U)
#define SerDes_SS_PE0_ERR_STS_P_DATAQ_PARERR_STS_0_WIDTH (1U)
#define SerDes_SS_PE0_ERR_STS_P_DATAQ_PARERR_STS_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_STS_P_DATAQ_PARERR_STS_0_SHIFT)) & SerDes_SS_PE0_ERR_STS_P_DATAQ_PARERR_STS_0_MASK)

#define SerDes_SS_PE0_ERR_STS_VC_QOVERFLOW_MASK  (0x10000U)
#define SerDes_SS_PE0_ERR_STS_VC_QOVERFLOW_SHIFT (16U)
#define SerDes_SS_PE0_ERR_STS_VC_QOVERFLOW_WIDTH (1U)
#define SerDes_SS_PE0_ERR_STS_VC_QOVERFLOW(x)    (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_STS_VC_QOVERFLOW_SHIFT)) & SerDes_SS_PE0_ERR_STS_VC_QOVERFLOW_MASK)

#define SerDes_SS_PE0_ERR_STS_RETRYRAM_PARERR_STS_MASK (0x2000000U)
#define SerDes_SS_PE0_ERR_STS_RETRYRAM_PARERR_STS_SHIFT (25U)
#define SerDes_SS_PE0_ERR_STS_RETRYRAM_PARERR_STS_WIDTH (1U)
#define SerDes_SS_PE0_ERR_STS_RETRYRAM_PARERR_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_STS_RETRYRAM_PARERR_STS_SHIFT)) & SerDes_SS_PE0_ERR_STS_RETRYRAM_PARERR_STS_MASK)

#define SerDes_SS_PE0_ERR_STS_RETRYSOTRAM_PARERR_STS_MASK (0x4000000U)
#define SerDes_SS_PE0_ERR_STS_RETRYSOTRAM_PARERR_STS_SHIFT (26U)
#define SerDes_SS_PE0_ERR_STS_RETRYSOTRAM_PARERR_STS_WIDTH (1U)
#define SerDes_SS_PE0_ERR_STS_RETRYSOTRAM_PARERR_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_STS_RETRYSOTRAM_PARERR_STS_SHIFT)) & SerDes_SS_PE0_ERR_STS_RETRYSOTRAM_PARERR_STS_MASK)

#define SerDes_SS_PE0_ERR_STS_LINK_DOWN_STS_MASK (0x40000000U)
#define SerDes_SS_PE0_ERR_STS_LINK_DOWN_STS_SHIFT (30U)
#define SerDes_SS_PE0_ERR_STS_LINK_DOWN_STS_WIDTH (1U)
#define SerDes_SS_PE0_ERR_STS_LINK_DOWN_STS(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_STS_LINK_DOWN_STS_SHIFT)) & SerDes_SS_PE0_ERR_STS_LINK_DOWN_STS_MASK)

#define SerDes_SS_PE0_ERR_STS_APBSLV_TIMEOUT_STS_MASK (0x80000000U)
#define SerDes_SS_PE0_ERR_STS_APBSLV_TIMEOUT_STS_SHIFT (31U)
#define SerDes_SS_PE0_ERR_STS_APBSLV_TIMEOUT_STS_WIDTH (1U)
#define SerDes_SS_PE0_ERR_STS_APBSLV_TIMEOUT_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_STS_APBSLV_TIMEOUT_STS_SHIFT)) & SerDes_SS_PE0_ERR_STS_APBSLV_TIMEOUT_STS_MASK)
/*! @} */

/*! @name PE0_ERR_INT_CTRL - PCIe Controller 0 Error Interrupt Control */
/*! @{ */

#define SerDes_SS_PE0_ERR_INT_CTRL_TXDATA_PERR_FRONT_INT_EN_MASK (0x20U)
#define SerDes_SS_PE0_ERR_INT_CTRL_TXDATA_PERR_FRONT_INT_EN_SHIFT (5U)
#define SerDes_SS_PE0_ERR_INT_CTRL_TXDATA_PERR_FRONT_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_ERR_INT_CTRL_TXDATA_PERR_FRONT_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_INT_CTRL_TXDATA_PERR_FRONT_INT_EN_SHIFT)) & SerDes_SS_PE0_ERR_INT_CTRL_TXDATA_PERR_FRONT_INT_EN_MASK)

#define SerDes_SS_PE0_ERR_INT_CTRL_TXDATA_PERR_BACK_INT_EN_MASK (0x40U)
#define SerDes_SS_PE0_ERR_INT_CTRL_TXDATA_PERR_BACK_INT_EN_SHIFT (6U)
#define SerDes_SS_PE0_ERR_INT_CTRL_TXDATA_PERR_BACK_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_ERR_INT_CTRL_TXDATA_PERR_BACK_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_INT_CTRL_TXDATA_PERR_BACK_INT_EN_SHIFT)) & SerDes_SS_PE0_ERR_INT_CTRL_TXDATA_PERR_BACK_INT_EN_MASK)

#define SerDes_SS_PE0_ERR_INT_CTRL_RXDATA_PERR_INT_EN_MASK (0x80U)
#define SerDes_SS_PE0_ERR_INT_CTRL_RXDATA_PERR_INT_EN_SHIFT (7U)
#define SerDes_SS_PE0_ERR_INT_CTRL_RXDATA_PERR_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_ERR_INT_CTRL_RXDATA_PERR_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_INT_CTRL_RXDATA_PERR_INT_EN_SHIFT)) & SerDes_SS_PE0_ERR_INT_CTRL_RXDATA_PERR_INT_EN_MASK)

#define SerDes_SS_PE0_ERR_INT_CTRL_P_HDRQ_PARERR_INT_EN_0_MASK (0x100U)
#define SerDes_SS_PE0_ERR_INT_CTRL_P_HDRQ_PARERR_INT_EN_0_SHIFT (8U)
#define SerDes_SS_PE0_ERR_INT_CTRL_P_HDRQ_PARERR_INT_EN_0_WIDTH (1U)
#define SerDes_SS_PE0_ERR_INT_CTRL_P_HDRQ_PARERR_INT_EN_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_INT_CTRL_P_HDRQ_PARERR_INT_EN_0_SHIFT)) & SerDes_SS_PE0_ERR_INT_CTRL_P_HDRQ_PARERR_INT_EN_0_MASK)

#define SerDes_SS_PE0_ERR_INT_CTRL_P_DATAQ_PARERR_INT_EN_0_MASK (0x1000U)
#define SerDes_SS_PE0_ERR_INT_CTRL_P_DATAQ_PARERR_INT_EN_0_SHIFT (12U)
#define SerDes_SS_PE0_ERR_INT_CTRL_P_DATAQ_PARERR_INT_EN_0_WIDTH (1U)
#define SerDes_SS_PE0_ERR_INT_CTRL_P_DATAQ_PARERR_INT_EN_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_INT_CTRL_P_DATAQ_PARERR_INT_EN_0_SHIFT)) & SerDes_SS_PE0_ERR_INT_CTRL_P_DATAQ_PARERR_INT_EN_0_MASK)

#define SerDes_SS_PE0_ERR_INT_CTRL_VC_QOVERFLOW_INT_EN_MASK (0x10000U)
#define SerDes_SS_PE0_ERR_INT_CTRL_VC_QOVERFLOW_INT_EN_SHIFT (16U)
#define SerDes_SS_PE0_ERR_INT_CTRL_VC_QOVERFLOW_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_ERR_INT_CTRL_VC_QOVERFLOW_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_INT_CTRL_VC_QOVERFLOW_INT_EN_SHIFT)) & SerDes_SS_PE0_ERR_INT_CTRL_VC_QOVERFLOW_INT_EN_MASK)

#define SerDes_SS_PE0_ERR_INT_CTRL_RETRYRAM_PARERR_INT_EN_MASK (0x2000000U)
#define SerDes_SS_PE0_ERR_INT_CTRL_RETRYRAM_PARERR_INT_EN_SHIFT (25U)
#define SerDes_SS_PE0_ERR_INT_CTRL_RETRYRAM_PARERR_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_ERR_INT_CTRL_RETRYRAM_PARERR_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_INT_CTRL_RETRYRAM_PARERR_INT_EN_SHIFT)) & SerDes_SS_PE0_ERR_INT_CTRL_RETRYRAM_PARERR_INT_EN_MASK)

#define SerDes_SS_PE0_ERR_INT_CTRL_RETRYSOTRAM_PARERR_INT_EN_MASK (0x4000000U)
#define SerDes_SS_PE0_ERR_INT_CTRL_RETRYSOTRAM_PARERR_INT_EN_SHIFT (26U)
#define SerDes_SS_PE0_ERR_INT_CTRL_RETRYSOTRAM_PARERR_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_ERR_INT_CTRL_RETRYSOTRAM_PARERR_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_INT_CTRL_RETRYSOTRAM_PARERR_INT_EN_SHIFT)) & SerDes_SS_PE0_ERR_INT_CTRL_RETRYSOTRAM_PARERR_INT_EN_MASK)

#define SerDes_SS_PE0_ERR_INT_CTRL_LINK_DOWN_INT_EN_MASK (0x40000000U)
#define SerDes_SS_PE0_ERR_INT_CTRL_LINK_DOWN_INT_EN_SHIFT (30U)
#define SerDes_SS_PE0_ERR_INT_CTRL_LINK_DOWN_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_ERR_INT_CTRL_LINK_DOWN_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_INT_CTRL_LINK_DOWN_INT_EN_SHIFT)) & SerDes_SS_PE0_ERR_INT_CTRL_LINK_DOWN_INT_EN_MASK)

#define SerDes_SS_PE0_ERR_INT_CTRL_APBSLV_TIMEOUT_INT_EN_MASK (0x80000000U)
#define SerDes_SS_PE0_ERR_INT_CTRL_APBSLV_TIMEOUT_INT_EN_SHIFT (31U)
#define SerDes_SS_PE0_ERR_INT_CTRL_APBSLV_TIMEOUT_INT_EN_WIDTH (1U)
#define SerDes_SS_PE0_ERR_INT_CTRL_APBSLV_TIMEOUT_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_ERR_INT_CTRL_APBSLV_TIMEOUT_INT_EN_SHIFT)) & SerDes_SS_PE0_ERR_INT_CTRL_APBSLV_TIMEOUT_INT_EN_MASK)
/*! @} */

/*! @name PE0_INT_STS - PCIe Controller 0 Interrupt Status */
/*! @{ */

#define SerDes_SS_PE0_INT_STS_BEACON_INT_STS_MASK (0x1U)
#define SerDes_SS_PE0_INT_STS_BEACON_INT_STS_SHIFT (0U)
#define SerDes_SS_PE0_INT_STS_BEACON_INT_STS_WIDTH (1U)
#define SerDes_SS_PE0_INT_STS_BEACON_INT_STS(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_INT_STS_BEACON_INT_STS_SHIFT)) & SerDes_SS_PE0_INT_STS_BEACON_INT_STS_MASK)

#define SerDes_SS_PE0_INT_STS_RX_MSG_INT_STS_MASK (0x2U)
#define SerDes_SS_PE0_INT_STS_RX_MSG_INT_STS_SHIFT (1U)
#define SerDes_SS_PE0_INT_STS_RX_MSG_INT_STS_WIDTH (1U)
#define SerDes_SS_PE0_INT_STS_RX_MSG_INT_STS(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_INT_STS_RX_MSG_INT_STS_SHIFT)) & SerDes_SS_PE0_INT_STS_RX_MSG_INT_STS_MASK)

#define SerDes_SS_PE0_INT_STS_ERR_INT_STS_MASK   (0x4U)
#define SerDes_SS_PE0_INT_STS_ERR_INT_STS_SHIFT  (2U)
#define SerDes_SS_PE0_INT_STS_ERR_INT_STS_WIDTH  (1U)
#define SerDes_SS_PE0_INT_STS_ERR_INT_STS(x)     (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_INT_STS_ERR_INT_STS_SHIFT)) & SerDes_SS_PE0_INT_STS_ERR_INT_STS_MASK)

#define SerDes_SS_PE0_INT_STS_AER_RC_ERR_INT_STS_MASK (0x10U)
#define SerDes_SS_PE0_INT_STS_AER_RC_ERR_INT_STS_SHIFT (4U)
#define SerDes_SS_PE0_INT_STS_AER_RC_ERR_INT_STS_WIDTH (1U)
#define SerDes_SS_PE0_INT_STS_AER_RC_ERR_INT_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_INT_STS_AER_RC_ERR_INT_STS_SHIFT)) & SerDes_SS_PE0_INT_STS_AER_RC_ERR_INT_STS_MASK)

#define SerDes_SS_PE0_INT_STS_PME_INT_STS_MASK   (0x20U)
#define SerDes_SS_PE0_INT_STS_PME_INT_STS_SHIFT  (5U)
#define SerDes_SS_PE0_INT_STS_PME_INT_STS_WIDTH  (1U)
#define SerDes_SS_PE0_INT_STS_PME_INT_STS(x)     (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_INT_STS_PME_INT_STS_SHIFT)) & SerDes_SS_PE0_INT_STS_PME_INT_STS_MASK)

#define SerDes_SS_PE0_INT_STS_HP_INT_STS_MASK    (0x40U)
#define SerDes_SS_PE0_INT_STS_HP_INT_STS_SHIFT   (6U)
#define SerDes_SS_PE0_INT_STS_HP_INT_STS_WIDTH   (1U)
#define SerDes_SS_PE0_INT_STS_HP_INT_STS(x)      (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_INT_STS_HP_INT_STS_SHIFT)) & SerDes_SS_PE0_INT_STS_HP_INT_STS_MASK)

#define SerDes_SS_PE0_INT_STS_SYS_ERR_RC_STS_MASK (0x80U)
#define SerDes_SS_PE0_INT_STS_SYS_ERR_RC_STS_SHIFT (7U)
#define SerDes_SS_PE0_INT_STS_SYS_ERR_RC_STS_WIDTH (1U)
#define SerDes_SS_PE0_INT_STS_SYS_ERR_RC_STS(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_INT_STS_SYS_ERR_RC_STS_SHIFT)) & SerDes_SS_PE0_INT_STS_SYS_ERR_RC_STS_MASK)

#define SerDes_SS_PE0_INT_STS_LINK_AUTO_BW_INT_STS_MASK (0x100U)
#define SerDes_SS_PE0_INT_STS_LINK_AUTO_BW_INT_STS_SHIFT (8U)
#define SerDes_SS_PE0_INT_STS_LINK_AUTO_BW_INT_STS_WIDTH (1U)
#define SerDes_SS_PE0_INT_STS_LINK_AUTO_BW_INT_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_INT_STS_LINK_AUTO_BW_INT_STS_SHIFT)) & SerDes_SS_PE0_INT_STS_LINK_AUTO_BW_INT_STS_MASK)

#define SerDes_SS_PE0_INT_STS_BW_MGT_INT_STS_MASK (0x200U)
#define SerDes_SS_PE0_INT_STS_BW_MGT_INT_STS_SHIFT (9U)
#define SerDes_SS_PE0_INT_STS_BW_MGT_INT_STS_WIDTH (1U)
#define SerDes_SS_PE0_INT_STS_BW_MGT_INT_STS(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_INT_STS_BW_MGT_INT_STS_SHIFT)) & SerDes_SS_PE0_INT_STS_BW_MGT_INT_STS_MASK)

#define SerDes_SS_PE0_INT_STS_LINK_EQ_REQ_INT_STS_MASK (0x400U)
#define SerDes_SS_PE0_INT_STS_LINK_EQ_REQ_INT_STS_SHIFT (10U)
#define SerDes_SS_PE0_INT_STS_LINK_EQ_REQ_INT_STS_WIDTH (1U)
#define SerDes_SS_PE0_INT_STS_LINK_EQ_REQ_INT_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_INT_STS_LINK_EQ_REQ_INT_STS_SHIFT)) & SerDes_SS_PE0_INT_STS_LINK_EQ_REQ_INT_STS_MASK)

#define SerDes_SS_PE0_INT_STS_LINK_AUTO_BW_MSI_STS_MASK (0x1000U)
#define SerDes_SS_PE0_INT_STS_LINK_AUTO_BW_MSI_STS_SHIFT (12U)
#define SerDes_SS_PE0_INT_STS_LINK_AUTO_BW_MSI_STS_WIDTH (1U)
#define SerDes_SS_PE0_INT_STS_LINK_AUTO_BW_MSI_STS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_INT_STS_LINK_AUTO_BW_MSI_STS_SHIFT)) & SerDes_SS_PE0_INT_STS_LINK_AUTO_BW_MSI_STS_MASK)

#define SerDes_SS_PE0_INT_STS_BW_MGT_MSI_STS_MASK (0x2000U)
#define SerDes_SS_PE0_INT_STS_BW_MGT_MSI_STS_SHIFT (13U)
#define SerDes_SS_PE0_INT_STS_BW_MGT_MSI_STS_WIDTH (1U)
#define SerDes_SS_PE0_INT_STS_BW_MGT_MSI_STS(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_INT_STS_BW_MGT_MSI_STS_SHIFT)) & SerDes_SS_PE0_INT_STS_BW_MGT_MSI_STS_MASK)
/*! @} */

/*! @name PE0_MSI_GEN_CTRL - PCIe Controller 0 MSI Generation Control */
/*! @{ */

#define SerDes_SS_PE0_MSI_GEN_CTRL_MSI_INT_MASK  (0xFFFFFFFFU)
#define SerDes_SS_PE0_MSI_GEN_CTRL_MSI_INT_SHIFT (0U)
#define SerDes_SS_PE0_MSI_GEN_CTRL_MSI_INT_WIDTH (32U)
#define SerDes_SS_PE0_MSI_GEN_CTRL_MSI_INT(x)    (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_MSI_GEN_CTRL_MSI_INT_SHIFT)) & SerDes_SS_PE0_MSI_GEN_CTRL_MSI_INT_MASK)
/*! @} */

/*! @name PE0_FSM_TRACK_1 - PCIe Controller 0 FSM Track 1 */
/*! @{ */

#define SerDes_SS_PE0_FSM_TRACK_1_FSM_TRIG_MASK  (0x3FU)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_TRIG_SHIFT (0U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_TRIG_WIDTH (6U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_TRIG(x)    (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_1_FSM_TRIG_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_1_FSM_TRIG_MASK)

#define SerDes_SS_PE0_FSM_TRACK_1_FSM_MON_EN_MASK (0x40U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_MON_EN_SHIFT (6U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_MON_EN_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_MON_EN(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_1_FSM_MON_EN_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_1_FSM_MON_EN_MASK)

#define SerDes_SS_PE0_FSM_TRACK_1_FSM_1_MASK     (0x3F00U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_1_SHIFT    (8U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_1_WIDTH    (6U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_1(x)       (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_1_FSM_1_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_1_FSM_1_MASK)

#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_1_MASK (0x4000U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_1_SHIFT (14U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_1_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_1(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_1_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_1_MASK)

#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_1_MASK (0x8000U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_1_SHIFT (15U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_1_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_1(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_1_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_1_MASK)

#define SerDes_SS_PE0_FSM_TRACK_1_FSM_2_MASK     (0x3F0000U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_2_SHIFT    (16U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_2_WIDTH    (6U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_2(x)       (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_1_FSM_2_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_1_FSM_2_MASK)

#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_2_MASK (0x400000U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_2_SHIFT (22U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_2_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_2(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_2_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_2_MASK)

#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_2_MASK (0x800000U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_2_SHIFT (23U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_2_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_2(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_2_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_2_MASK)

#define SerDes_SS_PE0_FSM_TRACK_1_FSM_3_MASK     (0x3F000000U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_3_SHIFT    (24U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_3_WIDTH    (6U)
#define SerDes_SS_PE0_FSM_TRACK_1_FSM_3(x)       (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_1_FSM_3_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_1_FSM_3_MASK)

#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_3_MASK (0x40000000U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_3_SHIFT (30U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_3_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_3(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_3_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_1_EVENT_A_3_MASK)

#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_3_MASK (0x80000000U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_3_SHIFT (31U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_3_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_3(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_3_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_1_EVENT_B_3_MASK)
/*! @} */

/*! @name PE0_FSM_TRACK_2 - PCIe Controller 0 FSM Track 2 */
/*! @{ */

#define SerDes_SS_PE0_FSM_TRACK_2_FSM_4_MASK     (0x3FU)
#define SerDes_SS_PE0_FSM_TRACK_2_FSM_4_SHIFT    (0U)
#define SerDes_SS_PE0_FSM_TRACK_2_FSM_4_WIDTH    (6U)
#define SerDes_SS_PE0_FSM_TRACK_2_FSM_4(x)       (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_2_FSM_4_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_2_FSM_4_MASK)

#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_4_MASK (0x40U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_4_SHIFT (6U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_4_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_4(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_4_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_4_MASK)

#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_4_MASK (0x80U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_4_SHIFT (7U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_4_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_4(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_4_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_4_MASK)

#define SerDes_SS_PE0_FSM_TRACK_2_FSM_5_MASK     (0x3F00U)
#define SerDes_SS_PE0_FSM_TRACK_2_FSM_5_SHIFT    (8U)
#define SerDes_SS_PE0_FSM_TRACK_2_FSM_5_WIDTH    (6U)
#define SerDes_SS_PE0_FSM_TRACK_2_FSM_5(x)       (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_2_FSM_5_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_2_FSM_5_MASK)

#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_5_MASK (0x4000U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_5_SHIFT (14U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_5_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_5(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_5_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_5_MASK)

#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_5_MASK (0x8000U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_5_SHIFT (15U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_5_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_5(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_5_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_5_MASK)

#define SerDes_SS_PE0_FSM_TRACK_2_FSM_6_MASK     (0x3F0000U)
#define SerDes_SS_PE0_FSM_TRACK_2_FSM_6_SHIFT    (16U)
#define SerDes_SS_PE0_FSM_TRACK_2_FSM_6_WIDTH    (6U)
#define SerDes_SS_PE0_FSM_TRACK_2_FSM_6(x)       (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_2_FSM_6_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_2_FSM_6_MASK)

#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_6_MASK (0x400000U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_6_SHIFT (22U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_6_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_6(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_6_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_6_MASK)

#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_6_MASK (0x800000U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_6_SHIFT (23U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_6_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_6(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_6_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_6_MASK)

#define SerDes_SS_PE0_FSM_TRACK_2_FSM_7_MASK     (0x3F000000U)
#define SerDes_SS_PE0_FSM_TRACK_2_FSM_7_SHIFT    (24U)
#define SerDes_SS_PE0_FSM_TRACK_2_FSM_7_WIDTH    (6U)
#define SerDes_SS_PE0_FSM_TRACK_2_FSM_7(x)       (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_2_FSM_7_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_2_FSM_7_MASK)

#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_7_MASK (0x40000000U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_7_SHIFT (30U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_7_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_7(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_7_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_2_EVENT_A_7_MASK)

#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_7_MASK (0x80000000U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_7_SHIFT (31U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_7_WIDTH (1U)
#define SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_7(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_7_SHIFT)) & SerDes_SS_PE0_FSM_TRACK_2_EVENT_B_7_MASK)
/*! @} */

/*! @name APB_BRIDGE_TO_CTRL - APB Bridge Timeout Control */
/*! @{ */

#define SerDes_SS_APB_BRIDGE_TO_CTRL_APBCLK_FREQ_MASK (0x3FFU)
#define SerDes_SS_APB_BRIDGE_TO_CTRL_APBCLK_FREQ_SHIFT (0U)
#define SerDes_SS_APB_BRIDGE_TO_CTRL_APBCLK_FREQ_WIDTH (10U)
#define SerDes_SS_APB_BRIDGE_TO_CTRL_APBCLK_FREQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_APB_BRIDGE_TO_CTRL_APBCLK_FREQ_SHIFT)) & SerDes_SS_APB_BRIDGE_TO_CTRL_APBCLK_FREQ_MASK)

#define SerDes_SS_APB_BRIDGE_TO_CTRL_APB_TIMEOUT_DIS_MASK (0x400U)
#define SerDes_SS_APB_BRIDGE_TO_CTRL_APB_TIMEOUT_DIS_SHIFT (10U)
#define SerDes_SS_APB_BRIDGE_TO_CTRL_APB_TIMEOUT_DIS_WIDTH (1U)
#define SerDes_SS_APB_BRIDGE_TO_CTRL_APB_TIMEOUT_DIS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_APB_BRIDGE_TO_CTRL_APB_TIMEOUT_DIS_SHIFT)) & SerDes_SS_APB_BRIDGE_TO_CTRL_APB_TIMEOUT_DIS_MASK)

#define SerDes_SS_APB_BRIDGE_TO_CTRL_APB_TIMER_LIMT_MASK (0xFFFF0000U)
#define SerDes_SS_APB_BRIDGE_TO_CTRL_APB_TIMER_LIMT_SHIFT (16U)
#define SerDes_SS_APB_BRIDGE_TO_CTRL_APB_TIMER_LIMT_WIDTH (16U)
#define SerDes_SS_APB_BRIDGE_TO_CTRL_APB_TIMER_LIMT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_SS_APB_BRIDGE_TO_CTRL_APB_TIMER_LIMT_SHIFT)) & SerDes_SS_APB_BRIDGE_TO_CTRL_APB_TIMER_LIMT_MASK)
/*! @} */

/*! @name PHY_REG_ADDR - PHY Register Address */
/*! @{ */

#define SerDes_SS_PHY_REG_ADDR_ADDR_MASK         (0xFFFFU)
#define SerDes_SS_PHY_REG_ADDR_ADDR_SHIFT        (0U)
#define SerDes_SS_PHY_REG_ADDR_ADDR_WIDTH        (16U)
#define SerDes_SS_PHY_REG_ADDR_ADDR(x)           (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PHY_REG_ADDR_ADDR_SHIFT)) & SerDes_SS_PHY_REG_ADDR_ADDR_MASK)

#define SerDes_SS_PHY_REG_ADDR_PHY_REG_EN_MASK   (0x80000000U)
#define SerDes_SS_PHY_REG_ADDR_PHY_REG_EN_SHIFT  (31U)
#define SerDes_SS_PHY_REG_ADDR_PHY_REG_EN_WIDTH  (1U)
#define SerDes_SS_PHY_REG_ADDR_PHY_REG_EN(x)     (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PHY_REG_ADDR_PHY_REG_EN_SHIFT)) & SerDes_SS_PHY_REG_ADDR_PHY_REG_EN_MASK)
/*! @} */

/*! @name PHY_REG_DATA - PHY Register Data */
/*! @{ */

#define SerDes_SS_PHY_REG_DATA_DATA_MASK         (0xFFFFU)
#define SerDes_SS_PHY_REG_DATA_DATA_SHIFT        (0U)
#define SerDes_SS_PHY_REG_DATA_DATA_WIDTH        (16U)
#define SerDes_SS_PHY_REG_DATA_DATA(x)           (((uint32_t)(((uint32_t)(x)) << SerDes_SS_PHY_REG_DATA_DATA_SHIFT)) & SerDes_SS_PHY_REG_DATA_DATA_MASK)
/*! @} */

/*! @name RST_CTRL - Reset Control */
/*! @{ */

#define SerDes_SS_RST_CTRL_COLD_RST_MASK         (0x1U)
#define SerDes_SS_RST_CTRL_COLD_RST_SHIFT        (0U)
#define SerDes_SS_RST_CTRL_COLD_RST_WIDTH        (1U)
#define SerDes_SS_RST_CTRL_COLD_RST(x)           (((uint32_t)(((uint32_t)(x)) << SerDes_SS_RST_CTRL_COLD_RST_SHIFT)) & SerDes_SS_RST_CTRL_COLD_RST_MASK)

#define SerDes_SS_RST_CTRL_WARM_RST_MASK         (0x2U)
#define SerDes_SS_RST_CTRL_WARM_RST_SHIFT        (1U)
#define SerDes_SS_RST_CTRL_WARM_RST_WIDTH        (1U)
#define SerDes_SS_RST_CTRL_WARM_RST(x)           (((uint32_t)(((uint32_t)(x)) << SerDes_SS_RST_CTRL_WARM_RST_SHIFT)) & SerDes_SS_RST_CTRL_WARM_RST_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SerDes_SS_Register_Masks */

/*!
 * @}
 */ /* end of group SerDes_SS_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_SerDes_SS_H_) */
