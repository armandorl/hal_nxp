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
 * @file S32R45_PCIE_RC.h
 * @version 2.4
 * @date 2022-02-14
 * @brief Peripheral Access Layer for S32R45_PCIE_RC
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
#if !defined(S32R45_PCIE_RC_H_)  /* Check if memory map has not been already included */
#define S32R45_PCIE_RC_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- PCIE_RC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PCIE_RC_Peripheral_Access_Layer PCIE_RC Peripheral Access Layer
 * @{
 */

/** PCIE_RC - Size of Registers Arrays */
#define PCIE_RC_BAR_MASK_COUNT                    6u

/** PCIE_RC - Register Layout Typedef */
typedef struct {
  __I  uint32_t TYPE1_DEV_ID_VEND_ID_REG;          /**< Device ID And Vendor ID, offset: 0x0 */
  __IO uint32_t TYPE1_STATUS_COMMAND_REG;          /**< Status and Command, offset: 0x4 */
  __I  uint32_t TYPE1_CLASS_CODE_REV_ID_REG;       /**< Class Code And Revision ID, offset: 0x8 */
  __IO uint32_t TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG; /**< BIST, Header Type, Latency Timer, and Cache Line Size, offset: 0xC */
  uint8_t RESERVED_0[8];
  __IO uint32_t SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG; /**< Secondary Latency Timer, Subordinate Bus Number, Secondary Bus Number, and Primary Bus Number, offset: 0x18 */
  __IO uint32_t SEC_STAT_IO_LIMIT_IO_BASE_REG;     /**< Secondary Status, I/O Limit, And Base, offset: 0x1C */
  __IO uint32_t MEM_LIMIT_MEM_BASE_REG;            /**< Memory Limit and Base, offset: 0x20 */
  __IO uint32_t PREF_MEM_LIMIT_PREF_MEM_BASE_REG;  /**< Prefetchable Memory Limit And Base, offset: 0x24 */
  __I  uint32_t PREF_BASE_UPPER_REG;               /**< Prefetchable Base Upper 32 Bits, offset: 0x28 */
  __I  uint32_t PREF_LIMIT_UPPER_REG;              /**< Prefetchable Limit Upper 32 Bits, offset: 0x2C */
  __I  uint32_t IO_LIMIT_UPPER_IO_BASE_UPPER_REG;  /**< I/O Limit And Base Upper 16 Bits, offset: 0x30 */
  __I  uint32_t TYPE1_CAP_PTR_REG;                 /**< Capabilities Pointer, offset: 0x34 */
  __IO uint32_t TYPE1_EXP_ROM_BASE_REG;            /**< Expansion ROM Base Address, offset: 0x38 */
  __IO uint32_t BRIDGE_CTRL_INT_PIN_INT_LINE_REG;  /**< Bridge Control, Interrupt Pin, And Interrupt Line, offset: 0x3C */
  __I  uint32_t CAP_ID_NXT_PTR_REG;                /**< Power Management Capabilities, offset: 0x40 */
  __IO uint32_t CON_STATUS_REG;                    /**< Power Management Control And Status, offset: 0x44 */
  uint8_t RESERVED_1[8];
  __IO uint32_t PCI_MSI_CAP_ID_NEXT_CTRL_REG;      /**< MSI Capability ID, Next Pointer, Capability And Control, offset: 0x50 */
  __IO uint32_t MSI_CAP_OFF_04H_REG;               /**< MSI message lower address, offset: 0x54 */
  __IO uint32_t MSI_CAP_OFF_08H_REG;               /**< Data or upper address, offset: 0x58 */
  __IO uint32_t MSI_CAP_OFF_0CH_REG;               /**< Data or mask bits, offset: 0x5C */
  __IO uint32_t MSI_CAP_OFF_10H_REG;               /**< Pending or Mask Bits, offset: 0x60 */
  __I  uint32_t MSI_CAP_OFF_14H_REG;               /**< Pending Bits, offset: 0x64 */
  uint8_t RESERVED_2[8];
  __I  uint32_t PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG; /**< PCI Express Capabilities, ID, Next Pointer, offset: 0x70 */
  __I  uint32_t DEVICE_CAPABILITIES_REG;           /**< Device Capabilities, offset: 0x74 */
  __IO uint32_t DEVICE_CONTROL_DEVICE_STATUS;      /**< Device Control and Status, offset: 0x78 */
  __I  uint32_t LINK_CAPABILITIES_REG;             /**< Link Capabilities, offset: 0x7C */
  __IO uint32_t LINK_CONTROL_LINK_STATUS_REG;      /**< Link Control and Status, offset: 0x80 */
  __I  uint32_t SLOT_CAPABILITIES_REG;             /**< Slot Capabilities, offset: 0x84 */
  __IO uint32_t SLOT_CONTROL_SLOT_STATUS;          /**< Slot Control and Status, offset: 0x88 */
  __IO uint32_t ROOT_CONTROL_ROOT_CAPABILITIES_REG; /**< Root Control and Capabilities, offset: 0x8C */
  __IO uint32_t ROOT_STATUS_REG;                   /**< Root Status, offset: 0x90 */
  __I  uint32_t DEVICE_CAPABILITIES2_REG;          /**< Device Capabilities 2, offset: 0x94 */
  __IO uint32_t DEVICE_CONTROL2_DEVICE_STATUS2_REG; /**< Device Control 2 and Status 2, offset: 0x98 */
  __I  uint32_t LINK_CAPABILITIES2_REG;            /**< Link Capabilities 2, offset: 0x9C */
  __IO uint32_t LINK_CONTROL2_LINK_STATUS2_REG;    /**< Link Control 2 and Status 2, offset: 0xA0 */
  uint8_t RESERVED_3[12];
  __IO uint32_t PCI_MSIX_CAP_ID_NEXT_CTRL_REG;     /**< MSI-X Capability ID, Next Pointer, Control, offset: 0xB0 */
  __I  uint32_t MSIX_TABLE_OFFSET_REG;             /**< MSI-X Table Offset and BIR, offset: 0xB4 */
  __I  uint32_t MSIX_PBA_OFFSET_REG;               /**< MSI-X PBA Offset and BIR, offset: 0xB8 */
  uint8_t RESERVED_4[68];
  __I  uint32_t AER_EXT_CAP_HDR_OFF;               /**< Advanced Error Reporting Extended Capability Header, offset: 0x100 */
  __IO uint32_t UNCORR_ERR_STATUS_OFF;             /**< Uncorrectable Error Status, offset: 0x104 */
  __IO uint32_t UNCORR_ERR_MASK_OFF;               /**< Uncorrectable Error Mask, offset: 0x108 */
  __IO uint32_t UNCORR_ERR_SEV_OFF;                /**< Uncorrectable Error Severity, offset: 0x10C */
  __IO uint32_t CORR_ERR_STATUS_OFF;               /**< Correctable Error Status, offset: 0x110 */
  __IO uint32_t CORR_ERR_MASK_OFF;                 /**< Correctable Error Mask, offset: 0x114 */
  __IO uint32_t ADV_ERR_CAP_CTRL_OFF;              /**< Advanced Error Capabilities and Control, offset: 0x118 */
  __I  uint32_t HDR_LOG_0_OFF;                     /**< Header Log Register 0, offset: 0x11C */
  __I  uint32_t HDR_LOG_1_OFF;                     /**< Header Log Register 1, offset: 0x120 */
  __I  uint32_t HDR_LOG_2_OFF;                     /**< Header Log Register 2, offset: 0x124 */
  __I  uint32_t HDR_LOG_3_OFF;                     /**< Header Log Register 3, offset: 0x128 */
  __IO uint32_t ROOT_ERR_CMD_OFF;                  /**< Root Error Command, offset: 0x12C */
  __IO uint32_t ROOT_ERR_STATUS_OFF;               /**< Root Error Status, offset: 0x130 */
  __I  uint32_t ERR_SRC_ID_OFF;                    /**< Error Source Identification, offset: 0x134 */
  __I  uint32_t TLP_PREFIX_LOG_1_OFF;              /**< TLP Prefix Log Register 1, offset: 0x138 */
  __I  uint32_t TLP_PREFIX_LOG_2_OFF;              /**< TLP Prefix Log Register 2, offset: 0x13C */
  __I  uint32_t TLP_PREFIX_LOG_3_OFF;              /**< TLP Prefix Log Register 3, offset: 0x140 */
  __I  uint32_t TLP_PREFIX_LOG_4_OFF;              /**< TLP Prefix Log Register 4, offset: 0x144 */
  __I  uint32_t SPCIE_CAP_HEADER_REG;              /**< SPCIE Capability Header, offset: 0x148 */
  __IO uint32_t LINK_CONTROL3_REG;                 /**< Link control 3, offset: 0x14C */
  __IO uint32_t LANE_ERR_STATUS_REG;               /**< Lane Error Status, offset: 0x150 */
  __I  uint32_t SPCIE_CAP_OFF_0CH_REG;             /**< Lane Equalization Control Register For Lanes 1 And 0, offset: 0x154 */
  __I  uint32_t RAS_DES_CAP_HEADER_REG;            /**< Vendor-Specific Extended Capability Header, offset: 0x158 */
  __I  uint32_t VENDOR_SPECIFIC_HEADER_REG;        /**< Vendor-Specific Header, offset: 0x15C */
  __IO uint32_t EVENT_COUNTER_CONTROL_REG;         /**< Event Counter Control, offset: 0x160 */
  __I  uint32_t EVENT_COUNTER_DATA_REG;            /**< Event Counter Data, offset: 0x164 */
  __IO uint32_t TIME_BASED_ANALYSIS_CONTROL_REG;   /**< Time-based Analysis Control, offset: 0x168 */
  __I  uint32_t TIME_BASED_ANALYSIS_DATA_REG;      /**< Time-Based Analysis Data, offset: 0x16C */
  uint8_t RESERVED_5[24];
  __IO uint32_t EINJ_ENABLE_REG;                   /**< Error Injection Enable, offset: 0x188 */
  __IO uint32_t EINJ0_CRC_REG;                     /**< Error Injection Control 0 (CRC Error), offset: 0x18C */
  __IO uint32_t EINJ1_SEQNUM_REG;                  /**< Error Injection Control 1 (Sequence Number Error), offset: 0x190 */
  __IO uint32_t EINJ2_DLLP_REG;                    /**< Error Injection Control 2 (DLLP Error), offset: 0x194 */
  __IO uint32_t EINJ3_SYMBOL_REG;                  /**< Error Injection Control 3 (Symbol Error), offset: 0x198 */
  __IO uint32_t EINJ4_FC_REG;                      /**< Error Injection Control 4 (FC Credit Error), offset: 0x19C */
  __IO uint32_t EINJ5_SP_TLP_REG;                  /**< Error Injection Control 5 (Specific TLP Error), offset: 0x1A0 */
  __IO uint32_t EINJ6_COMPARE_POINT_H0_REG;        /**< Error Injection Control 6 (Compare Point Header DWORD #0), offset: 0x1A4 */
  __IO uint32_t EINJ6_COMPARE_POINT_H1_REG;        /**< Error Injection Control 6 (Compare Point Header DWORD #1), offset: 0x1A8 */
  __IO uint32_t EINJ6_COMPARE_POINT_H2_REG;        /**< Error Injection Control 6 (Compare Point Header DWORD #2), offset: 0x1AC */
  __IO uint32_t EINJ6_COMPARE_POINT_H3_REG;        /**< Error Injection Control 6 (Compare Point Header DWORD #3), offset: 0x1B0 */
  __IO uint32_t EINJ6_COMPARE_VALUE_H0_REG;        /**< Error Injection Control 6 (Compare Value Header DWORD #0), offset: 0x1B4 */
  __IO uint32_t EINJ6_COMPARE_VALUE_H1_REG;        /**< Error Injection Control 6 (Compare Value Header DWORD #1), offset: 0x1B8 */
  __IO uint32_t EINJ6_COMPARE_VALUE_H2_REG;        /**< Error Injection Control 6 (Compare Value Header DWORD #2), offset: 0x1BC */
  __IO uint32_t EINJ6_COMPARE_VALUE_H3_REG;        /**< Error Injection Control 6 (Compare Value Header DWORD #3), offset: 0x1C0 */
  __IO uint32_t EINJ6_CHANGE_POINT_H0_REG;         /**< Error Injection Control 6 (Change Point Header DWORD #0), offset: 0x1C4 */
  __IO uint32_t EINJ6_CHANGE_POINT_H1_REG;         /**< Error Injection Control 6 (Change Point Header DWORD #1), offset: 0x1C8 */
  __IO uint32_t EINJ6_CHANGE_POINT_H2_REG;         /**< Error Injection Control 6 (Change Point Header DWORD #2), offset: 0x1CC */
  __IO uint32_t EINJ6_CHANGE_POINT_H3_REG;         /**< Error Injection Control 6 (Change Point Header DWORD #3), offset: 0x1D0 */
  __IO uint32_t EINJ6_CHANGE_VALUE_H0_REG;         /**< Error Injection Control 6 (Change Value Header DWORD #0), offset: 0x1D4 */
  __IO uint32_t EINJ6_CHANGE_VALUE_H1_REG;         /**< Error Injection Control 6 (Change Value Header DWORD #1), offset: 0x1D8 */
  __IO uint32_t EINJ6_CHANGE_VALUE_H2_REG;         /**< Error Injection Control 6 (Change Value Header DWORD #2), offset: 0x1DC */
  __IO uint32_t EINJ6_CHANGE_VALUE_H3_REG;         /**< Error Injection Control 6 (Change Value Header DWORD #3), offset: 0x1E0 */
  __IO uint32_t EINJ6_TLP_REG;                     /**< Error Injection Control 6 (Packet Error), offset: 0x1E4 */
  uint8_t RESERVED_6[16];
  __IO uint32_t SD_CONTROL1_REG;                   /**< Silicon Debug Control 1, offset: 0x1F8 */
  __IO uint32_t SD_CONTROL2_REG;                   /**< Silicon Debug Control 2, offset: 0x1FC */
  uint8_t RESERVED_7[8];
  __IO uint32_t SD_STATUS_L1LANE_REG;              /**< Silicon Debug Status (Layer1 Per-lane), offset: 0x208 */
  __IO uint32_t SD_STATUS_L1LTSSM_REG;             /**< Silicon Debug Status (Layer1 LTSSM), offset: 0x20C */
  __IO uint32_t SD_STATUS_PM_REG;                  /**< Silicon Debug Status (PM), offset: 0x210 */
  __I  uint32_t SD_STATUS_L2_REG;                  /**< Silicon Debug Status (Layer2), offset: 0x214 */
  __IO uint32_t SD_STATUS_L3FC_REG;                /**< Silicon Debug Status (Layer3 FC), offset: 0x218 */
  __IO uint32_t SD_STATUS_L3_REG;                  /**< Silicon Debug Status (Layer3), offset: 0x21C */
  uint8_t RESERVED_8[8];
  __IO uint32_t SD_EQ_CONTROL1_REG;                /**< Silicon Debug EQ Control 1, offset: 0x228 */
  __IO uint32_t SD_EQ_CONTROL2_REG;                /**< Silicon Debug EQ Control 2, offset: 0x22C */
  __IO uint32_t SD_EQ_CONTROL3_REG;                /**< Silicon Debug EQ Control 3, offset: 0x230 */
  uint8_t RESERVED_9[4];
  __I  uint32_t SD_EQ_STATUS1_REG;                 /**< Silicon Debug EQ Status 1, offset: 0x238 */
  __I  uint32_t SD_EQ_STATUS2_REG;                 /**< Silicon Debug EQ Status 2, offset: 0x23C */
  __I  uint32_t SD_EQ_STATUS3_REG;                 /**< Silicon Debug EQ Status 3, offset: 0x240 */
  uint8_t RESERVED_10[20];
  __I  uint32_t RASDP_EXT_CAP_HDR_OFF;             /**< PCIe Extended Capability ID, Capability Version And Next Capability Offset, offset: 0x258 */
  __I  uint32_t RASDP_VENDOR_SPECIFIC_HDR_OFF;     /**< Vendor Specific Header, offset: 0x25C */
  __IO uint32_t RASDP_ERROR_PROT_CTRL_OFF;         /**< ECC error correction control, offset: 0x260 */
  __IO uint32_t RASDP_CORR_COUNTER_CTRL_OFF;       /**< Corrected error (1-bit ECC) counter selection and control, offset: 0x264 */
  __I  uint32_t RASDP_CORR_COUNT_REPORT_OFF;       /**< Corrected error (1-bit ECC) counter data, offset: 0x268 */
  __IO uint32_t RASDP_UNCORR_COUNTER_CTRL_OFF;     /**< Uncorrected error (2-bit ECC and parity) counter selection and control, offset: 0x26C */
  __I  uint32_t RASDP_UNCORR_COUNT_REPORT_OFF;     /**< Uncorrected error (2-bit ECC and parity) counter data, offset: 0x270 */
  __IO uint32_t RASDP_ERROR_INJ_CTRL_OFF;          /**< Error injection control, offset: 0x274 */
  __I  uint32_t RASDP_CORR_ERROR_LOCATION_OFF;     /**< Corrected errors locations, offset: 0x278 */
  __I  uint32_t RASDP_UNCORR_ERROR_LOCATION_OFF;   /**< Uncorrected errors locations, offset: 0x27C */
  __IO uint32_t RASDP_ERROR_MODE_EN_OFF;           /**< RASDP error mode enable, offset: 0x280 */
  __IO uint32_t RASDP_ERROR_MODE_CLEAR_OFF;        /**< Exit RASDP error mode, offset: 0x284 */
  __I  uint32_t RASDP_RAM_ADDR_CORR_ERROR_OFF;     /**< RAM Address where a corrected error (1-bit ECC) has been detected, offset: 0x288 */
  __I  uint32_t RASDP_RAM_ADDR_UNCORR_ERROR_OFF;   /**< RAM Address where an uncorrected error (2-bit ECC) has been detected, offset: 0x28C */
  uint8_t RESERVED_11[1136];
  __IO uint32_t ACK_LATENCY_TIMER_OFF;             /**< Ack Latency Timer and Replay Timer, offset: 0x700 */
  __IO uint32_t VENDOR_SPEC_DLLP_OFF;              /**< Vendor Specific DLLP, offset: 0x704 */
  __IO uint32_t PORT_FORCE_OFF;                    /**< Port Force Link, offset: 0x708 */
  __IO uint32_t ACK_F_ASPM_CTRL_OFF;               /**< Ack Frequency and L0-L1 ASPM Control, offset: 0x70C */
  __IO uint32_t PORT_LINK_CTRL_OFF;                /**< Port Link Control, offset: 0x710 */
  __IO uint32_t LANE_SKEW_OFF;                     /**< Lane Skew, offset: 0x714 */
  __IO uint32_t TIMER_CTRL_MAX_FUNC_NUM_OFF;       /**< Timer Control and Max Function Number, offset: 0x718 */
  __IO uint32_t SYMBOL_TIMER_FILTER_1_OFF;         /**< Symbol Timer and Filter Mask 1, offset: 0x71C */
  __IO uint32_t FILTER_MASK_2_OFF;                 /**< Filter Mask 2, offset: 0x720 */
  __IO uint32_t AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF; /**< AMBA Multiple Outbound Decomposed NP SubRequests Control, offset: 0x724 */
  __I  uint32_t PL_DEBUG0_OFF;                     /**< Debug Register 0, offset: 0x728 */
  __I  uint32_t PL_DEBUG1_OFF;                     /**< Debug Register 1, offset: 0x72C */
  __I  uint32_t TX_P_FC_CREDIT_STATUS_OFF;         /**< Transmit Posted FC Credit Status, offset: 0x730 */
  __I  uint32_t TX_NP_FC_CREDIT_STATUS_OFF;        /**< Transmit Non-Posted FC Credit Status, offset: 0x734 */
  __I  uint32_t TX_CPL_FC_CREDIT_STATUS_OFF;       /**< Transmit Completion FC Credit Status, offset: 0x738 */
  __IO uint32_t QUEUE_STATUS_OFF;                  /**< Queue Status, offset: 0x73C */
  __I  uint32_t VC_TX_ARBI_1_OFF;                  /**< VC Transmit Arbitration Register 1, offset: 0x740 */
  __I  uint32_t VC_TX_ARBI_2_OFF;                  /**< VC Transmit Arbitration Register 2, offset: 0x744 */
  __IO uint32_t VC0_P_RX_Q_CTRL_OFF;               /**< Segmented-Buffer VC0 Posted Receive Queue Control, offset: 0x748 */
  __IO uint32_t VC0_NP_RX_Q_CTRL_OFF;              /**< Segmented-Buffer VC0 Non-Posted Receive Queue Control, offset: 0x74C */
  __IO uint32_t VC0_CPL_RX_Q_CTRL_OFF;             /**< Segmented-Buffer VC0 Completion Receive Queue Control, offset: 0x750 */
  uint8_t RESERVED_12[184];
  __IO uint32_t GEN2_CTRL_OFF;                     /**< Link Width And Speed Change Control, offset: 0x80C */
  __I  uint32_t PHY_STATUS_OFF;                    /**< PHY Status, offset: 0x810 */
  __IO uint32_t PHY_CONTROL_OFF;                   /**< PHY Control, offset: 0x814 */
  uint8_t RESERVED_13[4];
  __IO uint32_t TRGT_MAP_CTRL_OFF;                 /**< Programmable Target Map Control, offset: 0x81C */
  __IO uint32_t MSI_CTRL_ADDR_OFF;                 /**< Integrated MSI Reception Module (iMRM) Address, offset: 0x820 */
  __IO uint32_t MSI_CTRL_UPPER_ADDR_OFF;           /**< Integrated MSI Reception Module Upper Address, offset: 0x824 */
  __IO uint32_t MSI_CTRL_INT_0_EN_OFF;             /**< Integrated MSI Reception Module Interrupt #0 Enable, offset: 0x828 */
  __IO uint32_t MSI_CTRL_INT_0_MASK_OFF;           /**< Integrated MSI Reception Module Interrupt #0 Mask, offset: 0x82C */
  __IO uint32_t MSI_CTRL_INT_0_STATUS_OFF;         /**< Integrated MSI Reception Module Interrupt #0 Status, offset: 0x830 */
  __IO uint32_t MSI_CTRL_INT_1_EN_OFF;             /**< Integrated MSI Reception Module Interrupt #1 Enable, offset: 0x834 */
  __IO uint32_t MSI_CTRL_INT_1_MASK_OFF;           /**< Integrated MSI Reception Module Interrupt #1 Mask, offset: 0x838 */
  __IO uint32_t MSI_CTRL_INT_1_STATUS_OFF;         /**< Integrated MSI Reception Module Interrupt #1 Status, offset: 0x83C */
  __IO uint32_t MSI_CTRL_INT_2_EN_OFF;             /**< Integrated MSI Reception Module Interrupt #2 Enable, offset: 0x840 */
  __IO uint32_t MSI_CTRL_INT_2_MASK_OFF;           /**< Integrated MSI Reception Module Interrupt #2 Mask, offset: 0x844 */
  __IO uint32_t MSI_CTRL_INT_2_STATUS_OFF;         /**< Integrated MSI Reception Module Interrupt #2 Status, offset: 0x848 */
  __IO uint32_t MSI_CTRL_INT_3_EN_OFF;             /**< Integrated MSI Reception Module Interrupt #3 Enable, offset: 0x84C */
  __IO uint32_t MSI_CTRL_INT_3_MASK_OFF;           /**< Integrated MSI Reception Module Interrupt #3 Mask, offset: 0x850 */
  __IO uint32_t MSI_CTRL_INT_3_STATUS_OFF;         /**< Integrated MSI Reception Module Interrupt #3 Status, offset: 0x854 */
  __IO uint32_t MSI_CTRL_INT_4_EN_OFF;             /**< Integrated MSI Reception Module Interrupt #4 Enable, offset: 0x858 */
  __IO uint32_t MSI_CTRL_INT_4_MASK_OFF;           /**< Integrated MSI Reception Module Interrupt #4 Mask, offset: 0x85C */
  __IO uint32_t MSI_CTRL_INT_4_STATUS_OFF;         /**< Integrated MSI Reception Module Interrupt #4 Status, offset: 0x860 */
  __IO uint32_t MSI_CTRL_INT_5_EN_OFF;             /**< Integrated MSI Reception Module Interrupt #5 Enable, offset: 0x864 */
  __IO uint32_t MSI_CTRL_INT_5_MASK_OFF;           /**< Integrated MSI Reception Module Interrupt #5 Mask, offset: 0x868 */
  __IO uint32_t MSI_CTRL_INT_5_STATUS_OFF;         /**< Integrated MSI Reception Module Interrupt #5 Status, offset: 0x86C */
  __IO uint32_t MSI_CTRL_INT_6_EN_OFF;             /**< Integrated MSI Reception Module Interrupt #6 Enable, offset: 0x870 */
  __IO uint32_t MSI_CTRL_INT_6_MASK_OFF;           /**< Integrated MSI Reception Module Interrupt #6 Mask, offset: 0x874 */
  __IO uint32_t MSI_CTRL_INT_6_STATUS_OFF;         /**< Integrated MSI Reception Module Interrupt #6 Status, offset: 0x878 */
  __IO uint32_t MSI_CTRL_INT_7_EN_OFF;             /**< Integrated MSI Reception Module Interrupt #7 Enable, offset: 0x87C */
  __IO uint32_t MSI_CTRL_INT_7_MASK_OFF;           /**< Integrated MSI Reception Module Interrupt #7 Mask, offset: 0x880 */
  __IO uint32_t MSI_CTRL_INT_7_STATUS_OFF;         /**< Integrated MSI Reception Module Interrupt #7 Status, offset: 0x884 */
  __IO uint32_t MSI_GPIO_IO_OFF;                   /**< Integrated MSI Reception Module General Purpose IO, offset: 0x888 */
  __IO uint32_t CLOCK_GATING_CTRL_OFF;             /**< RADM clock gating enable control, offset: 0x88C */
  __IO uint32_t GEN3_RELATED_OFF;                  /**< Gen3 Control, offset: 0x890 */
  uint8_t RESERVED_14[20];
  __IO uint32_t GEN3_EQ_CONTROL_OFF;               /**< Gen3 EQ Control, offset: 0x8A8 */
  __IO uint32_t GEN3_EQ_FB_MODE_DIR_CHANGE_OFF;    /**< Gen3 EQ Direction Change Feedback Mode Control, offset: 0x8AC */
  uint8_t RESERVED_15[4];
  __IO uint32_t ORDER_RULE_CTRL_OFF;               /**< Order Rule Control, offset: 0x8B4 */
  __IO uint32_t PIPE_LOOPBACK_CONTROL_OFF;         /**< PIPE Loopback Control, offset: 0x8B8 */
  __IO uint32_t MISC_CONTROL_1_OFF;                /**< DBI Read-Only Write Enable, offset: 0x8BC */
  __IO uint32_t MULTI_LANE_CONTROL_OFF;            /**< UpConfigure Multi-lane Control, offset: 0x8C0 */
  __IO uint32_t PHY_INTEROP_CTRL_OFF;              /**< PHY Interoperability Control, offset: 0x8C4 */
  __IO uint32_t TRGT_CPL_LUT_DELETE_ENTRY_OFF;     /**< TRGT_CPL_LUT Delete Entry Control, offset: 0x8C8 */
  __IO uint32_t LINK_FLUSH_CONTROL_OFF;            /**< Link Reset Request Flush Control, offset: 0x8CC */
  __IO uint32_t AMBA_ERROR_RESPONSE_DEFAULT_OFF;   /**< AXI Bridge Slave Error Response, offset: 0x8D0 */
  __IO uint32_t AMBA_LINK_TIMEOUT_OFF;             /**< Link Down AXI Bridge Slave Timeout, offset: 0x8D4 */
  __IO uint32_t AMBA_ORDERING_CTRL_OFF;            /**< AMBA Ordering Control, offset: 0x8D8 */
  uint8_t RESERVED_16[4];
  __IO uint32_t COHERENCY_CONTROL_1_OFF;           /**< ACE Cache Coherency Control Register 1, offset: 0x8E0 */
  __IO uint32_t COHERENCY_CONTROL_2_OFF;           /**< ACE Cache Coherency Control Register 2, offset: 0x8E4 */
  __IO uint32_t COHERENCY_CONTROL_3_OFF;           /**< ACE Cache Coherency Control Register 3, offset: 0x8E8 */
  uint8_t RESERVED_17[4];
  __IO uint32_t AXI_MSTR_MSG_ADDR_LOW_OFF;         /**< Lower 20 bits of the programmable AXI address where Messages coming from wire are mapped to, offset: 0x8F0 */
  __IO uint32_t AXI_MSTR_MSG_ADDR_HIGH_OFF;        /**< Upper 32 bits of the programmable AXI address where Messages coming from wire are mapped to, offset: 0x8F4 */
  __I  uint32_t PCIE_VERSION_NUMBER_OFF;           /**< PCIe Controller IIP Release Version Number, offset: 0x8F8 */
  __I  uint32_t PCIE_VERSION_TYPE_OFF;             /**< PCIe Controller IIP Release Version Type, offset: 0x8FC */
  uint8_t RESERVED_18[48];
  __IO uint32_t INTERFACE_TIMER_CONTROL_OFF;       /**< Interface Timer Control, offset: 0x930 */
  __IO uint32_t INTERFACE_TIMER_TARGET_OFF;        /**< Interface Timer Target, offset: 0x934 */
  __IO uint32_t INTERFACE_TIMER_STATUS_OFF;        /**< Interface Timer Status, offset: 0x938 */
  uint8_t RESERVED_19[4];
  __IO uint32_t MSIX_ADDRESS_MATCH_LOW_OFF;        /**< MSI-X Address Match Low, offset: 0x940 */
  __IO uint32_t MSIX_ADDRESS_MATCH_HIGH_OFF;       /**< MSI-X Address Match High, offset: 0x944 */
  __O  uint32_t MSIX_DOORBELL_OFF;                 /**< MSI-X Doorbell, offset: 0x948 */
  __IO uint32_t MSIX_RAM_CTRL_OFF;                 /**< MSI-X RAM Power Mode And Debug Control, offset: 0x94C */
  uint8_t RESERVED_20[16];
  __IO uint32_t SAFETY_MASK_OFF;                   /**< Masks for functional safety interrupt events, offset: 0x960 */
  __IO uint32_t SAFETY_STATUS_OFF;                 /**< Status for functional safety interrupt events., offset: 0x964 */
  uint8_t RESERVED_21[440];
  __IO uint32_t PL_CHK_REG_CONTROL_STATUS_OFF;     /**< CDM Register Checking Control and Status, offset: 0xB20 */
  __IO uint32_t PL_CHK_REG_START_END_OFF;          /**< CDM Register Checking First and Last address to check, offset: 0xB24 */
  __I  uint32_t PL_CHK_REG_ERR_ADDR_OFF;           /**< CDM Register Checking Error Address., offset: 0xB28 */
  __I  uint32_t PL_CHK_REG_ERR_PF_VF_OFF;          /**< CDM Register Checking error PF and VF Numbers, offset: 0xB2C */
  uint8_t RESERVED_22[16];
  __IO uint32_t AUX_CLK_FREQ_OFF;                  /**< Auxiliary Clock Frequency Control, offset: 0xB40 */
  uint8_t RESERVED_23[128204];
  __O  uint32_t BAR_MASK[PCIE_RC_BAR_MASK_COUNT];  /**< BAR0 Mask..BAR5 Mask, array offset: 0x20010, array step: 0x4 */
  uint8_t RESERVED_24[262104];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_OUTBOUND_0; /**< iATU Region Control 1, offset: 0x60000 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_OUTBOUND_0; /**< iATU Region Control 2, offset: 0x60004 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0; /**< iATU Lower Base Address, offset: 0x60008 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0; /**< iATU Upper Base Address, offset: 0x6000C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_OUTBOUND_0;    /**< iATU Limit Address, offset: 0x60010 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0; /**< iATU Lower Target Address, offset: 0x60014 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0; /**< iATU Upper Target Address, offset: 0x60018 */
  uint8_t RESERVED_25[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0; /**< iATU Upper Limit Address, offset: 0x60020 */
  uint8_t RESERVED_26[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_INBOUND_0;  /**< iATU Region Control 1, offset: 0x60100 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_INBOUND_0;  /**< iATU Region Control 2, offset: 0x60104 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_INBOUND_0;  /**< iATU Lower Base Address, offset: 0x60108 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_INBOUND_0; /**< iATU Upper Base Address, offset: 0x6010C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_INBOUND_0;     /**< iATU Limit Address, offset: 0x60110 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_INBOUND_0; /**< iATU Lower Target Address, offset: 0x60114 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0; /**< iATU Upper Target Address, offset: 0x60118 */
  uint8_t RESERVED_27[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0; /**< iATU Upper Limit Address, offset: 0x60120 */
  uint8_t RESERVED_28[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_OUTBOUND_1; /**< iATU Region Control 1, offset: 0x60200 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_OUTBOUND_1; /**< iATU Region Control 2, offset: 0x60204 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1; /**< iATU Lower Base Address, offset: 0x60208 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1; /**< iATU Upper Base Address, offset: 0x6020C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_OUTBOUND_1;    /**< iATU Limit Address, offset: 0x60210 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1; /**< iATU Lower Target Address, offset: 0x60214 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1; /**< iATU Upper Target Address, offset: 0x60218 */
  uint8_t RESERVED_29[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1; /**< iATU Upper Limit Address, offset: 0x60220 */
  uint8_t RESERVED_30[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_INBOUND_1;  /**< iATU Region Control 1, offset: 0x60300 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_INBOUND_1;  /**< iATU Region Control 2, offset: 0x60304 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_INBOUND_1;  /**< iATU Lower Base Address, offset: 0x60308 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_INBOUND_1; /**< iATU Upper Base Address, offset: 0x6030C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_INBOUND_1;     /**< iATU Limit Address, offset: 0x60310 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_INBOUND_1; /**< iATU Lower Target Address, offset: 0x60314 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1; /**< iATU Upper Target Address, offset: 0x60318 */
  uint8_t RESERVED_31[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1; /**< iATU Upper Limit Address, offset: 0x60320 */
  uint8_t RESERVED_32[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_OUTBOUND_2; /**< iATU Region Control 1, offset: 0x60400 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_OUTBOUND_2; /**< iATU Region Control 2, offset: 0x60404 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2; /**< iATU Lower Base Address, offset: 0x60408 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2; /**< iATU Upper Base Address, offset: 0x6040C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_OUTBOUND_2;    /**< iATU Limit Address, offset: 0x60410 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2; /**< iATU Lower Target Address, offset: 0x60414 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2; /**< iATU Upper Target Address, offset: 0x60418 */
  uint8_t RESERVED_33[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2; /**< iATU Upper Limit Address, offset: 0x60420 */
  uint8_t RESERVED_34[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_INBOUND_2;  /**< iATU Region Control 1, offset: 0x60500 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_INBOUND_2;  /**< iATU Region Control 2, offset: 0x60504 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_INBOUND_2;  /**< iATU Lower Base Address, offset: 0x60508 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_INBOUND_2; /**< iATU Upper Base Address, offset: 0x6050C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_INBOUND_2;     /**< iATU Limit Address, offset: 0x60510 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_INBOUND_2; /**< iATU Lower Target Address, offset: 0x60514 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2; /**< iATU Upper Target Address, offset: 0x60518 */
  uint8_t RESERVED_35[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2; /**< iATU Upper Limit Address, offset: 0x60520 */
  uint8_t RESERVED_36[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_OUTBOUND_3; /**< iATU Region Control 1, offset: 0x60600 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_OUTBOUND_3; /**< iATU Region Control 2, offset: 0x60604 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3; /**< iATU Lower Base Address, offset: 0x60608 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3; /**< iATU Upper Base Address, offset: 0x6060C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_OUTBOUND_3;    /**< iATU Limit Address, offset: 0x60610 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3; /**< iATU Lower Target Address, offset: 0x60614 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3; /**< iATU Upper Target Address, offset: 0x60618 */
  uint8_t RESERVED_37[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3; /**< iATU Upper Limit Address, offset: 0x60620 */
  uint8_t RESERVED_38[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_INBOUND_3;  /**< iATU Region Control 1, offset: 0x60700 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_INBOUND_3;  /**< iATU Region Control 2, offset: 0x60704 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_INBOUND_3;  /**< iATU Lower Base Address, offset: 0x60708 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_INBOUND_3; /**< iATU Upper Base Address, offset: 0x6070C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_INBOUND_3;     /**< iATU Limit Address, offset: 0x60710 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_INBOUND_3; /**< iATU Lower Target Address, offset: 0x60714 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3; /**< iATU Upper Target Address, offset: 0x60718 */
  uint8_t RESERVED_39[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3; /**< iATU Upper Limit Address, offset: 0x60720 */
  uint8_t RESERVED_40[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_OUTBOUND_4; /**< iATU Region Control 1, offset: 0x60800 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_OUTBOUND_4; /**< iATU Region Control 2, offset: 0x60804 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4; /**< iATU Lower Base Address, offset: 0x60808 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4; /**< iATU Upper Base Address, offset: 0x6080C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_OUTBOUND_4;    /**< iATU Limit Address, offset: 0x60810 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4; /**< iATU Lower Target Address, offset: 0x60814 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4; /**< iATU Upper Target Address, offset: 0x60818 */
  uint8_t RESERVED_41[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4; /**< iATU Upper Limit Address, offset: 0x60820 */
  uint8_t RESERVED_42[476];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_OUTBOUND_5; /**< iATU Region Control 1, offset: 0x60A00 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_OUTBOUND_5; /**< iATU Region Control 2, offset: 0x60A04 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5; /**< iATU Lower Base Address, offset: 0x60A08 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5; /**< iATU Upper Base Address, offset: 0x60A0C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_OUTBOUND_5;    /**< iATU Limit Address, offset: 0x60A10 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5; /**< iATU Lower Target Address, offset: 0x60A14 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5; /**< iATU Upper Target Address, offset: 0x60A18 */
  uint8_t RESERVED_43[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5; /**< iATU Upper Limit Address, offset: 0x60A20 */
} PCIE_RC_Type, *PCIE_RC_MemMapPtr;

/** Number of instances of the PCIE_RC module. */
#define PCIE_RC_INSTANCE_COUNT                   (1u)

/* PCIE_RC - Peripheral instance base addresses */
/** Peripheral PCIE_RC base address */
#define IP_PCIE_RC_BASE                          (0u)
/** Peripheral PCIE_RC base pointer */
#define IP_PCIE_RC                               ((PCIE_RC_Type *)IP_PCIE_RC_BASE)
/** Array initializer of PCIE_RC peripheral base addresses */
#define IP_PCIE_RC_BASE_ADDRS                    { IP_PCIE_RC_BASE }
/** Array initializer of PCIE_RC peripheral base pointers */
#define IP_PCIE_RC_BASE_PTRS                     { IP_PCIE_RC }

/* ----------------------------------------------------------------------------
   -- PCIE_RC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PCIE_RC_Register_Masks PCIE_RC Register Masks
 * @{
 */

/*! @name TYPE1_DEV_ID_VEND_ID_REG - Device ID And Vendor ID */
/*! @{ */

#define PCIE_RC_TYPE1_DEV_ID_VEND_ID_REG_VENDOR_ID_MASK (0xFFFFU)
#define PCIE_RC_TYPE1_DEV_ID_VEND_ID_REG_VENDOR_ID_SHIFT (0U)
#define PCIE_RC_TYPE1_DEV_ID_VEND_ID_REG_VENDOR_ID_WIDTH (16U)
#define PCIE_RC_TYPE1_DEV_ID_VEND_ID_REG_VENDOR_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_DEV_ID_VEND_ID_REG_VENDOR_ID_SHIFT)) & PCIE_RC_TYPE1_DEV_ID_VEND_ID_REG_VENDOR_ID_MASK)

#define PCIE_RC_TYPE1_DEV_ID_VEND_ID_REG_DEVICE_ID_MASK (0xFFFF0000U)
#define PCIE_RC_TYPE1_DEV_ID_VEND_ID_REG_DEVICE_ID_SHIFT (16U)
#define PCIE_RC_TYPE1_DEV_ID_VEND_ID_REG_DEVICE_ID_WIDTH (16U)
#define PCIE_RC_TYPE1_DEV_ID_VEND_ID_REG_DEVICE_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_DEV_ID_VEND_ID_REG_DEVICE_ID_SHIFT)) & PCIE_RC_TYPE1_DEV_ID_VEND_ID_REG_DEVICE_ID_MASK)
/*! @} */

/*! @name TYPE1_STATUS_COMMAND_REG - Status and Command */
/*! @{ */

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_IO_EN_MASK (0x1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_IO_EN_SHIFT (0U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_IO_EN_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_IO_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_IO_EN_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_IO_EN_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_MSE_MASK (0x2U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_MSE_SHIFT (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_MSE_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_MSE(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_MSE_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_MSE_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_BME_MASK (0x4U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_BME_SHIFT (2U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_BME_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_BME(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_BME_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_BME_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SCO_MASK (0x8U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SCO_SHIFT (3U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SCO_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SCO(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_SCO_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_SCO_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_MWI_EN_MASK (0x10U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_MWI_EN_SHIFT (4U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_MWI_EN_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_MWI_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_MWI_EN_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_MWI_EN_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_VGAPS_MASK (0x20U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_VGAPS_SHIFT (5U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_VGAPS_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_VGAPS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_VGAPS_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_VGAPS_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_PERREN_MASK (0x40U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_PERREN_SHIFT (6U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_PERREN_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_PERREN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_PERREN_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_PERREN_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_IDSEL_MASK (0x80U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_IDSEL_SHIFT (7U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_IDSEL_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_IDSEL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_IDSEL_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_IDSEL_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SERREN_MASK (0x100U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SERREN_SHIFT (8U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SERREN_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SERREN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_SERREN_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_SERREN_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_INT_EN_MASK (0x400U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_INT_EN_SHIFT (10U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_INT_EN_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_INT_EN_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_INT_EN_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_RESERV_MASK (0xF800U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_RESERV_SHIFT (11U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_RESERV_WIDTH (5U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_RESERV(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_RESERV_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_RESERV_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_INT_STATUS_MASK (0x80000U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_INT_STATUS_SHIFT (19U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_INT_STATUS_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_INT_STATUS_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_INT_STATUS_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_CAP_LIST_MASK (0x100000U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_CAP_LIST_SHIFT (20U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_CAP_LIST_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_CAP_LIST(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_CAP_LIST_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_CAP_LIST_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_FAST_66MHZ_CAP_MASK (0x200000U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_FAST_66MHZ_CAP_SHIFT (21U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_FAST_66MHZ_CAP_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_FAST_66MHZ_CAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_FAST_66MHZ_CAP_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_FAST_66MHZ_CAP_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_FAST_B2B_CAP_MASK (0x800000U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_FAST_B2B_CAP_SHIFT (23U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_FAST_B2B_CAP_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_FAST_B2B_CAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_FAST_B2B_CAP_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_FAST_B2B_CAP_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_MASTER_DPE_MASK (0x1000000U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_MASTER_DPE_SHIFT (24U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_MASTER_DPE_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_MASTER_DPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_MASTER_DPE_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_MASTER_DPE_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_DEV_SEL_TIMING_MASK (0x6000000U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_DEV_SEL_TIMING_SHIFT (25U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_DEV_SEL_TIMING_WIDTH (2U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_DEV_SEL_TIMING(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_DEV_SEL_TIMING_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_DEV_SEL_TIMING_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SIGNALED_TARGET_ABORT_MASK (0x8000000U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SIGNALED_TARGET_ABORT_SHIFT (27U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SIGNALED_TARGET_ABORT_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SIGNALED_TARGET_ABORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_SIGNALED_TARGET_ABORT_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_SIGNALED_TARGET_ABORT_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_RCVD_TARGET_ABORT_MASK (0x10000000U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_RCVD_TARGET_ABORT_SHIFT (28U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_RCVD_TARGET_ABORT_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_RCVD_TARGET_ABORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_RCVD_TARGET_ABORT_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_RCVD_TARGET_ABORT_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_RCVD_MASTER_ABORT_MASK (0x20000000U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_RCVD_MASTER_ABORT_SHIFT (29U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_RCVD_MASTER_ABORT_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_RCVD_MASTER_ABORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_RCVD_MASTER_ABORT_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_RCVD_MASTER_ABORT_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SIGNALED_SYS_ERROR_MASK (0x40000000U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SIGNALED_SYS_ERROR_SHIFT (30U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SIGNALED_SYS_ERROR_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_SIGNALED_SYS_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_SIGNALED_SYS_ERROR_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_SIGNALED_SYS_ERROR_MASK)

#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_DETECTED_PARITY_ERROR_MASK (0x80000000U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_DETECTED_PARITY_ERROR_SHIFT (31U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_DETECTED_PARITY_ERROR_WIDTH (1U)
#define PCIE_RC_TYPE1_STATUS_COMMAND_REG_DETECTED_PARITY_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_STATUS_COMMAND_REG_DETECTED_PARITY_ERROR_SHIFT)) & PCIE_RC_TYPE1_STATUS_COMMAND_REG_DETECTED_PARITY_ERROR_MASK)
/*! @} */

/*! @name TYPE1_CLASS_CODE_REV_ID_REG - Class Code And Revision ID */
/*! @{ */

#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_REVISION_ID_MASK (0xFFU)
#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_REVISION_ID_SHIFT (0U)
#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_REVISION_ID_WIDTH (8U)
#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_REVISION_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_REVISION_ID_SHIFT)) & PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_REVISION_ID_MASK)

#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_PROGRAM_INTERFACE_MASK (0xFF00U)
#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_PROGRAM_INTERFACE_SHIFT (8U)
#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_PROGRAM_INTERFACE_WIDTH (8U)
#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_PROGRAM_INTERFACE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_PROGRAM_INTERFACE_SHIFT)) & PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_PROGRAM_INTERFACE_MASK)

#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_SUBCLASS_CODE_MASK (0xFF0000U)
#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_SUBCLASS_CODE_SHIFT (16U)
#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_SUBCLASS_CODE_WIDTH (8U)
#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_SUBCLASS_CODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_SUBCLASS_CODE_SHIFT)) & PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_SUBCLASS_CODE_MASK)

#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_BASE_CLASS_CODE_MASK (0xFF000000U)
#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_BASE_CLASS_CODE_SHIFT (24U)
#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_BASE_CLASS_CODE_WIDTH (8U)
#define PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_BASE_CLASS_CODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_BASE_CLASS_CODE_SHIFT)) & PCIE_RC_TYPE1_CLASS_CODE_REV_ID_REG_BASE_CLASS_CODE_MASK)
/*! @} */

/*! @name TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG - BIST, Header Type, Latency Timer, and Cache Line Size */
/*! @{ */

#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_CACHE_LINE_SIZE_MASK (0xFFU)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_CACHE_LINE_SIZE_SHIFT (0U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_CACHE_LINE_SIZE_WIDTH (8U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_CACHE_LINE_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_CACHE_LINE_SIZE_SHIFT)) & PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_CACHE_LINE_SIZE_MASK)

#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_LATENCY_MASTER_TIMER_MASK (0xFF00U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_LATENCY_MASTER_TIMER_SHIFT (8U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_LATENCY_MASTER_TIMER_WIDTH (8U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_LATENCY_MASTER_TIMER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_LATENCY_MASTER_TIMER_SHIFT)) & PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_LATENCY_MASTER_TIMER_MASK)

#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_HEADER_TYPE_MASK (0x7F0000U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_HEADER_TYPE_SHIFT (16U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_HEADER_TYPE_WIDTH (7U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_HEADER_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_HEADER_TYPE_SHIFT)) & PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_HEADER_TYPE_MASK)

#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_MULTI_FUNC_MASK (0x800000U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_MULTI_FUNC_SHIFT (23U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_MULTI_FUNC_WIDTH (1U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_MULTI_FUNC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_MULTI_FUNC_SHIFT)) & PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_MULTI_FUNC_MASK)

#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_BIST_MASK (0xFF000000U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_BIST_SHIFT (24U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_BIST_WIDTH (8U)
#define PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_BIST(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_BIST_SHIFT)) & PCIE_RC_TYPE1_BIST_HDR_TYPE_LAT_CACHE_LINE_SIZE_REG_BIST_MASK)
/*! @} */

/*! @name SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG - Secondary Latency Timer, Subordinate Bus Number, Secondary Bus Number, and Primary Bus Number */
/*! @{ */

#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_PRIM_BUS_MASK (0xFFU)
#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_PRIM_BUS_SHIFT (0U)
#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_PRIM_BUS_WIDTH (8U)
#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_PRIM_BUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_PRIM_BUS_SHIFT)) & PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_PRIM_BUS_MASK)

#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SEC_BUS_MASK (0xFF00U)
#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SEC_BUS_SHIFT (8U)
#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SEC_BUS_WIDTH (8U)
#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SEC_BUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SEC_BUS_SHIFT)) & PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SEC_BUS_MASK)

#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SUB_BUS_MASK (0xFF0000U)
#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SUB_BUS_SHIFT (16U)
#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SUB_BUS_WIDTH (8U)
#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SUB_BUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SUB_BUS_SHIFT)) & PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SUB_BUS_MASK)

#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SEC_LAT_TIMER_MASK (0xFF000000U)
#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SEC_LAT_TIMER_SHIFT (24U)
#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SEC_LAT_TIMER_WIDTH (8U)
#define PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SEC_LAT_TIMER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SEC_LAT_TIMER_SHIFT)) & PCIE_RC_SEC_LAT_TIMER_SUB_BUS_SEC_BUS_PRI_BUS_REG_SEC_LAT_TIMER_MASK)
/*! @} */

/*! @name SEC_STAT_IO_LIMIT_IO_BASE_REG - Secondary Status, I/O Limit, And Base */
/*! @{ */

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_DECODE_MASK (0x1U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_DECODE_SHIFT (0U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_DECODE_WIDTH (1U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_DECODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_DECODE_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_DECODE_MASK)

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_RESERV_MASK (0xEU)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_RESERV_SHIFT (1U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_RESERV_WIDTH (3U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_RESERV(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_RESERV_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_RESERV_MASK)

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_BASE_MASK (0xF0U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_BASE_SHIFT (4U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_BASE_WIDTH (4U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_BASE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_BASE_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_BASE_MASK)

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_DECODE_BIT8_MASK (0x100U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_DECODE_BIT8_SHIFT (8U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_DECODE_BIT8_WIDTH (1U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_DECODE_BIT8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_DECODE_BIT8_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_DECODE_BIT8_MASK)

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_RESERV1_MASK (0xE00U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_RESERV1_SHIFT (9U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_RESERV1_WIDTH (3U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_RESERV1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_RESERV1_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_RESERV1_MASK)

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_LIMIT_MASK (0xF000U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_LIMIT_SHIFT (12U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_LIMIT_WIDTH (4U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_LIMIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_LIMIT_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_IO_LIMIT_MASK)

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RESERV_MASK (0x7F0000U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RESERV_SHIFT (16U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RESERV_WIDTH (7U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RESERV(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RESERV_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RESERV_MASK)

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_MDPE_MASK (0x1000000U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_MDPE_SHIFT (24U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_MDPE_WIDTH (1U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_MDPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_MDPE_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_MDPE_MASK)

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_SIG_TRGT_ABRT_MASK (0x8000000U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_SIG_TRGT_ABRT_SHIFT (27U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_SIG_TRGT_ABRT_WIDTH (1U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_SIG_TRGT_ABRT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_SIG_TRGT_ABRT_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_SIG_TRGT_ABRT_MASK)

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_TRGT_ABRT_MASK (0x10000000U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_TRGT_ABRT_SHIFT (28U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_TRGT_ABRT_WIDTH (1U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_TRGT_ABRT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_TRGT_ABRT_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_TRGT_ABRT_MASK)

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_MSTR_ABRT_MASK (0x20000000U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_MSTR_ABRT_SHIFT (29U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_MSTR_ABRT_WIDTH (1U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_MSTR_ABRT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_MSTR_ABRT_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_MSTR_ABRT_MASK)

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_SYS_ERR_MASK (0x40000000U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_SYS_ERR_SHIFT (30U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_SYS_ERR_WIDTH (1U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_SYS_ERR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_SYS_ERR_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_RCVD_SYS_ERR_MASK)

#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_DPE_MASK (0x80000000U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_DPE_SHIFT (31U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_DPE_WIDTH (1U)
#define PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_DPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_DPE_SHIFT)) & PCIE_RC_SEC_STAT_IO_LIMIT_IO_BASE_REG_SEC_STAT_DPE_MASK)
/*! @} */

/*! @name MEM_LIMIT_MEM_BASE_REG - Memory Limit and Base */
/*! @{ */

#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_BASE_RESERV_MASK (0xFU)
#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_BASE_RESERV_SHIFT (0U)
#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_BASE_RESERV_WIDTH (4U)
#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_BASE_RESERV(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_BASE_RESERV_SHIFT)) & PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_BASE_RESERV_MASK)

#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_BASE_MASK (0xFFF0U)
#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_BASE_SHIFT (4U)
#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_BASE_WIDTH (12U)
#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_BASE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_BASE_SHIFT)) & PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_BASE_MASK)

#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_LIMIT_RESERV_MASK (0xF0000U)
#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_LIMIT_RESERV_SHIFT (16U)
#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_LIMIT_RESERV_WIDTH (4U)
#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_LIMIT_RESERV(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_LIMIT_RESERV_SHIFT)) & PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_LIMIT_RESERV_MASK)

#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_LIMIT_MASK (0xFFF00000U)
#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_LIMIT_SHIFT (20U)
#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_LIMIT_WIDTH (12U)
#define PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_LIMIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_LIMIT_SHIFT)) & PCIE_RC_MEM_LIMIT_MEM_BASE_REG_MEM_LIMIT_MASK)
/*! @} */

/*! @name PREF_MEM_LIMIT_PREF_MEM_BASE_REG - Prefetchable Memory Limit And Base */
/*! @{ */

#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_DECODE_MASK (0x1U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_DECODE_SHIFT (0U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_DECODE_WIDTH (1U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_DECODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_DECODE_SHIFT)) & PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_DECODE_MASK)

#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_RESERV_MASK (0xEU)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_RESERV_SHIFT (1U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_RESERV_WIDTH (3U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_RESERV(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_RESERV_SHIFT)) & PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_RESERV_MASK)

#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_BASE_MASK (0xFFF0U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_BASE_SHIFT (4U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_BASE_WIDTH (12U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_BASE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_BASE_SHIFT)) & PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_BASE_MASK)

#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_LIMIT_DECODE_MASK (0x10000U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_LIMIT_DECODE_SHIFT (16U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_LIMIT_DECODE_WIDTH (1U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_LIMIT_DECODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_LIMIT_DECODE_SHIFT)) & PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_LIMIT_DECODE_MASK)

#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_RESERV1_MASK (0xE0000U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_RESERV1_SHIFT (17U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_RESERV1_WIDTH (3U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_RESERV1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_RESERV1_SHIFT)) & PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_RESERV1_MASK)

#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_LIMIT_MASK (0xFFF00000U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_LIMIT_SHIFT (20U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_LIMIT_WIDTH (12U)
#define PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_LIMIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_LIMIT_SHIFT)) & PCIE_RC_PREF_MEM_LIMIT_PREF_MEM_BASE_REG_PREF_MEM_LIMIT_MASK)
/*! @} */

/*! @name PREF_BASE_UPPER_REG - Prefetchable Base Upper 32 Bits */
/*! @{ */

#define PCIE_RC_PREF_BASE_UPPER_REG_PREF_MEM_BASE_UPPER_MASK (0xFFFFFFFFU)
#define PCIE_RC_PREF_BASE_UPPER_REG_PREF_MEM_BASE_UPPER_SHIFT (0U)
#define PCIE_RC_PREF_BASE_UPPER_REG_PREF_MEM_BASE_UPPER_WIDTH (32U)
#define PCIE_RC_PREF_BASE_UPPER_REG_PREF_MEM_BASE_UPPER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PREF_BASE_UPPER_REG_PREF_MEM_BASE_UPPER_SHIFT)) & PCIE_RC_PREF_BASE_UPPER_REG_PREF_MEM_BASE_UPPER_MASK)
/*! @} */

/*! @name PREF_LIMIT_UPPER_REG - Prefetchable Limit Upper 32 Bits */
/*! @{ */

#define PCIE_RC_PREF_LIMIT_UPPER_REG_PREF_MEM_LIMIT_UPPER_MASK (0xFFFFFFFFU)
#define PCIE_RC_PREF_LIMIT_UPPER_REG_PREF_MEM_LIMIT_UPPER_SHIFT (0U)
#define PCIE_RC_PREF_LIMIT_UPPER_REG_PREF_MEM_LIMIT_UPPER_WIDTH (32U)
#define PCIE_RC_PREF_LIMIT_UPPER_REG_PREF_MEM_LIMIT_UPPER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PREF_LIMIT_UPPER_REG_PREF_MEM_LIMIT_UPPER_SHIFT)) & PCIE_RC_PREF_LIMIT_UPPER_REG_PREF_MEM_LIMIT_UPPER_MASK)
/*! @} */

/*! @name IO_LIMIT_UPPER_IO_BASE_UPPER_REG - I/O Limit And Base Upper 16 Bits */
/*! @{ */

#define PCIE_RC_IO_LIMIT_UPPER_IO_BASE_UPPER_REG_IO_BASE_UPPER_MASK (0xFFFFU)
#define PCIE_RC_IO_LIMIT_UPPER_IO_BASE_UPPER_REG_IO_BASE_UPPER_SHIFT (0U)
#define PCIE_RC_IO_LIMIT_UPPER_IO_BASE_UPPER_REG_IO_BASE_UPPER_WIDTH (16U)
#define PCIE_RC_IO_LIMIT_UPPER_IO_BASE_UPPER_REG_IO_BASE_UPPER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IO_LIMIT_UPPER_IO_BASE_UPPER_REG_IO_BASE_UPPER_SHIFT)) & PCIE_RC_IO_LIMIT_UPPER_IO_BASE_UPPER_REG_IO_BASE_UPPER_MASK)

#define PCIE_RC_IO_LIMIT_UPPER_IO_BASE_UPPER_REG_IO_LIMIT_UPPER_MASK (0xFFFF0000U)
#define PCIE_RC_IO_LIMIT_UPPER_IO_BASE_UPPER_REG_IO_LIMIT_UPPER_SHIFT (16U)
#define PCIE_RC_IO_LIMIT_UPPER_IO_BASE_UPPER_REG_IO_LIMIT_UPPER_WIDTH (16U)
#define PCIE_RC_IO_LIMIT_UPPER_IO_BASE_UPPER_REG_IO_LIMIT_UPPER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IO_LIMIT_UPPER_IO_BASE_UPPER_REG_IO_LIMIT_UPPER_SHIFT)) & PCIE_RC_IO_LIMIT_UPPER_IO_BASE_UPPER_REG_IO_LIMIT_UPPER_MASK)
/*! @} */

/*! @name TYPE1_CAP_PTR_REG - Capabilities Pointer */
/*! @{ */

#define PCIE_RC_TYPE1_CAP_PTR_REG_CAP_POINTER_MASK (0xFFU)
#define PCIE_RC_TYPE1_CAP_PTR_REG_CAP_POINTER_SHIFT (0U)
#define PCIE_RC_TYPE1_CAP_PTR_REG_CAP_POINTER_WIDTH (8U)
#define PCIE_RC_TYPE1_CAP_PTR_REG_CAP_POINTER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_CAP_PTR_REG_CAP_POINTER_SHIFT)) & PCIE_RC_TYPE1_CAP_PTR_REG_CAP_POINTER_MASK)
/*! @} */

/*! @name TYPE1_EXP_ROM_BASE_REG - Expansion ROM Base Address */
/*! @{ */

#define PCIE_RC_TYPE1_EXP_ROM_BASE_REG_ROM_BAR_ENABLE_MASK (0x1U)
#define PCIE_RC_TYPE1_EXP_ROM_BASE_REG_ROM_BAR_ENABLE_SHIFT (0U)
#define PCIE_RC_TYPE1_EXP_ROM_BASE_REG_ROM_BAR_ENABLE_WIDTH (1U)
#define PCIE_RC_TYPE1_EXP_ROM_BASE_REG_ROM_BAR_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_EXP_ROM_BASE_REG_ROM_BAR_ENABLE_SHIFT)) & PCIE_RC_TYPE1_EXP_ROM_BASE_REG_ROM_BAR_ENABLE_MASK)

#define PCIE_RC_TYPE1_EXP_ROM_BASE_REG_EXP_ROM_BASE_ADDRESS_MASK (0xFFFFF800U)
#define PCIE_RC_TYPE1_EXP_ROM_BASE_REG_EXP_ROM_BASE_ADDRESS_SHIFT (11U)
#define PCIE_RC_TYPE1_EXP_ROM_BASE_REG_EXP_ROM_BASE_ADDRESS_WIDTH (21U)
#define PCIE_RC_TYPE1_EXP_ROM_BASE_REG_EXP_ROM_BASE_ADDRESS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TYPE1_EXP_ROM_BASE_REG_EXP_ROM_BASE_ADDRESS_SHIFT)) & PCIE_RC_TYPE1_EXP_ROM_BASE_REG_EXP_ROM_BASE_ADDRESS_MASK)
/*! @} */

/*! @name BRIDGE_CTRL_INT_PIN_INT_LINE_REG - Bridge Control, Interrupt Pin, And Interrupt Line */
/*! @{ */

#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_INT_LINE_MASK (0xFFU)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_INT_LINE_SHIFT (0U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_INT_LINE_WIDTH (8U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_INT_LINE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_INT_LINE_SHIFT)) & PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_INT_LINE_MASK)

#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_INT_PIN_MASK (0xFF00U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_INT_PIN_SHIFT (8U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_INT_PIN_WIDTH (8U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_INT_PIN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_INT_PIN_SHIFT)) & PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_INT_PIN_MASK)

#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_PERE_MASK (0x10000U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_PERE_SHIFT (16U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_PERE_WIDTH (1U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_PERE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_PERE_SHIFT)) & PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_PERE_MASK)

#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_SERR_EN_MASK (0x20000U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_SERR_EN_SHIFT (17U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_SERR_EN_WIDTH (1U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_SERR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_SERR_EN_SHIFT)) & PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_SERR_EN_MASK)

#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_ISA_EN_MASK (0x40000U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_ISA_EN_SHIFT (18U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_ISA_EN_WIDTH (1U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_ISA_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_ISA_EN_SHIFT)) & PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_ISA_EN_MASK)

#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_VGA_EN_MASK (0x80000U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_VGA_EN_SHIFT (19U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_VGA_EN_WIDTH (1U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_VGA_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_VGA_EN_SHIFT)) & PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_VGA_EN_MASK)

#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_VGA_16B_DEC_MASK (0x100000U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_VGA_16B_DEC_SHIFT (20U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_VGA_16B_DEC_WIDTH (1U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_VGA_16B_DEC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_VGA_16B_DEC_SHIFT)) & PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_VGA_16B_DEC_MASK)

#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_MSTR_ABORT_MODE_MASK (0x200000U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_MSTR_ABORT_MODE_SHIFT (21U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_MSTR_ABORT_MODE_WIDTH (1U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_MSTR_ABORT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_MSTR_ABORT_MODE_SHIFT)) & PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_MSTR_ABORT_MODE_MASK)

#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_SBR_MASK (0x400000U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_SBR_SHIFT (22U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_SBR_WIDTH (1U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_SBR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_SBR_SHIFT)) & PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_SBR_MASK)

#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_BRIDGE_CTRL_RESERV_MASK (0xFF800000U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_BRIDGE_CTRL_RESERV_SHIFT (23U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_BRIDGE_CTRL_RESERV_WIDTH (9U)
#define PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_BRIDGE_CTRL_RESERV(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_BRIDGE_CTRL_RESERV_SHIFT)) & PCIE_RC_BRIDGE_CTRL_INT_PIN_INT_LINE_REG_BRIDGE_CTRL_RESERV_MASK)
/*! @} */

/*! @name CAP_ID_NXT_PTR_REG - Power Management Capabilities */
/*! @{ */

#define PCIE_RC_CAP_ID_NXT_PTR_REG_PM_CAP_ID_MASK (0xFFU)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PM_CAP_ID_SHIFT (0U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PM_CAP_ID_WIDTH (8U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PM_CAP_ID(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CAP_ID_NXT_PTR_REG_PM_CAP_ID_SHIFT)) & PCIE_RC_CAP_ID_NXT_PTR_REG_PM_CAP_ID_MASK)

#define PCIE_RC_CAP_ID_NXT_PTR_REG_PM_NEXT_POINTER_MASK (0xFF00U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PM_NEXT_POINTER_SHIFT (8U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PM_NEXT_POINTER_WIDTH (8U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PM_NEXT_POINTER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CAP_ID_NXT_PTR_REG_PM_NEXT_POINTER_SHIFT)) & PCIE_RC_CAP_ID_NXT_PTR_REG_PM_NEXT_POINTER_MASK)

#define PCIE_RC_CAP_ID_NXT_PTR_REG_PM_SPEC_VER_MASK (0x70000U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PM_SPEC_VER_SHIFT (16U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PM_SPEC_VER_WIDTH (3U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PM_SPEC_VER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CAP_ID_NXT_PTR_REG_PM_SPEC_VER_SHIFT)) & PCIE_RC_CAP_ID_NXT_PTR_REG_PM_SPEC_VER_MASK)

#define PCIE_RC_CAP_ID_NXT_PTR_REG_PME_CLK_MASK  (0x80000U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PME_CLK_SHIFT (19U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PME_CLK_WIDTH (1U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PME_CLK(x)    (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CAP_ID_NXT_PTR_REG_PME_CLK_SHIFT)) & PCIE_RC_CAP_ID_NXT_PTR_REG_PME_CLK_MASK)

#define PCIE_RC_CAP_ID_NXT_PTR_REG_DSI_MASK      (0x200000U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_DSI_SHIFT     (21U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_DSI_WIDTH     (1U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_DSI(x)        (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CAP_ID_NXT_PTR_REG_DSI_SHIFT)) & PCIE_RC_CAP_ID_NXT_PTR_REG_DSI_MASK)

#define PCIE_RC_CAP_ID_NXT_PTR_REG_AUX_CURR_MASK (0x1C00000U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_AUX_CURR_SHIFT (22U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_AUX_CURR_WIDTH (3U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_AUX_CURR(x)   (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CAP_ID_NXT_PTR_REG_AUX_CURR_SHIFT)) & PCIE_RC_CAP_ID_NXT_PTR_REG_AUX_CURR_MASK)

#define PCIE_RC_CAP_ID_NXT_PTR_REG_D1_SUPPORT_MASK (0x2000000U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_D1_SUPPORT_SHIFT (25U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_D1_SUPPORT_WIDTH (1U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_D1_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CAP_ID_NXT_PTR_REG_D1_SUPPORT_SHIFT)) & PCIE_RC_CAP_ID_NXT_PTR_REG_D1_SUPPORT_MASK)

#define PCIE_RC_CAP_ID_NXT_PTR_REG_D2_SUPPORT_MASK (0x4000000U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_D2_SUPPORT_SHIFT (26U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_D2_SUPPORT_WIDTH (1U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_D2_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CAP_ID_NXT_PTR_REG_D2_SUPPORT_SHIFT)) & PCIE_RC_CAP_ID_NXT_PTR_REG_D2_SUPPORT_MASK)

#define PCIE_RC_CAP_ID_NXT_PTR_REG_PME_SUPPORT_MASK (0xF8000000U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PME_SUPPORT_SHIFT (27U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PME_SUPPORT_WIDTH (5U)
#define PCIE_RC_CAP_ID_NXT_PTR_REG_PME_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CAP_ID_NXT_PTR_REG_PME_SUPPORT_SHIFT)) & PCIE_RC_CAP_ID_NXT_PTR_REG_PME_SUPPORT_MASK)
/*! @} */

/*! @name CON_STATUS_REG - Power Management Control And Status */
/*! @{ */

#define PCIE_RC_CON_STATUS_REG_POWER_STATE_MASK  (0x3U)
#define PCIE_RC_CON_STATUS_REG_POWER_STATE_SHIFT (0U)
#define PCIE_RC_CON_STATUS_REG_POWER_STATE_WIDTH (2U)
#define PCIE_RC_CON_STATUS_REG_POWER_STATE(x)    (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CON_STATUS_REG_POWER_STATE_SHIFT)) & PCIE_RC_CON_STATUS_REG_POWER_STATE_MASK)

#define PCIE_RC_CON_STATUS_REG_NO_SOFT_RST_MASK  (0x8U)
#define PCIE_RC_CON_STATUS_REG_NO_SOFT_RST_SHIFT (3U)
#define PCIE_RC_CON_STATUS_REG_NO_SOFT_RST_WIDTH (1U)
#define PCIE_RC_CON_STATUS_REG_NO_SOFT_RST(x)    (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CON_STATUS_REG_NO_SOFT_RST_SHIFT)) & PCIE_RC_CON_STATUS_REG_NO_SOFT_RST_MASK)

#define PCIE_RC_CON_STATUS_REG_PME_ENABLE_MASK   (0x100U)
#define PCIE_RC_CON_STATUS_REG_PME_ENABLE_SHIFT  (8U)
#define PCIE_RC_CON_STATUS_REG_PME_ENABLE_WIDTH  (1U)
#define PCIE_RC_CON_STATUS_REG_PME_ENABLE(x)     (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CON_STATUS_REG_PME_ENABLE_SHIFT)) & PCIE_RC_CON_STATUS_REG_PME_ENABLE_MASK)

#define PCIE_RC_CON_STATUS_REG_DATA_SELECT_MASK  (0x1E00U)
#define PCIE_RC_CON_STATUS_REG_DATA_SELECT_SHIFT (9U)
#define PCIE_RC_CON_STATUS_REG_DATA_SELECT_WIDTH (4U)
#define PCIE_RC_CON_STATUS_REG_DATA_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CON_STATUS_REG_DATA_SELECT_SHIFT)) & PCIE_RC_CON_STATUS_REG_DATA_SELECT_MASK)

#define PCIE_RC_CON_STATUS_REG_DATA_SCALE_MASK   (0x6000U)
#define PCIE_RC_CON_STATUS_REG_DATA_SCALE_SHIFT  (13U)
#define PCIE_RC_CON_STATUS_REG_DATA_SCALE_WIDTH  (2U)
#define PCIE_RC_CON_STATUS_REG_DATA_SCALE(x)     (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CON_STATUS_REG_DATA_SCALE_SHIFT)) & PCIE_RC_CON_STATUS_REG_DATA_SCALE_MASK)

#define PCIE_RC_CON_STATUS_REG_PME_STATUS_MASK   (0x8000U)
#define PCIE_RC_CON_STATUS_REG_PME_STATUS_SHIFT  (15U)
#define PCIE_RC_CON_STATUS_REG_PME_STATUS_WIDTH  (1U)
#define PCIE_RC_CON_STATUS_REG_PME_STATUS(x)     (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CON_STATUS_REG_PME_STATUS_SHIFT)) & PCIE_RC_CON_STATUS_REG_PME_STATUS_MASK)

#define PCIE_RC_CON_STATUS_REG_B2_B3_SUPPORT_MASK (0x400000U)
#define PCIE_RC_CON_STATUS_REG_B2_B3_SUPPORT_SHIFT (22U)
#define PCIE_RC_CON_STATUS_REG_B2_B3_SUPPORT_WIDTH (1U)
#define PCIE_RC_CON_STATUS_REG_B2_B3_SUPPORT(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CON_STATUS_REG_B2_B3_SUPPORT_SHIFT)) & PCIE_RC_CON_STATUS_REG_B2_B3_SUPPORT_MASK)

#define PCIE_RC_CON_STATUS_REG_BUS_PWR_CLK_CON_EN_MASK (0x800000U)
#define PCIE_RC_CON_STATUS_REG_BUS_PWR_CLK_CON_EN_SHIFT (23U)
#define PCIE_RC_CON_STATUS_REG_BUS_PWR_CLK_CON_EN_WIDTH (1U)
#define PCIE_RC_CON_STATUS_REG_BUS_PWR_CLK_CON_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CON_STATUS_REG_BUS_PWR_CLK_CON_EN_SHIFT)) & PCIE_RC_CON_STATUS_REG_BUS_PWR_CLK_CON_EN_MASK)

#define PCIE_RC_CON_STATUS_REG_DATA_REG_ADD_INFO_MASK (0xFF000000U)
#define PCIE_RC_CON_STATUS_REG_DATA_REG_ADD_INFO_SHIFT (24U)
#define PCIE_RC_CON_STATUS_REG_DATA_REG_ADD_INFO_WIDTH (8U)
#define PCIE_RC_CON_STATUS_REG_DATA_REG_ADD_INFO(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CON_STATUS_REG_DATA_REG_ADD_INFO_SHIFT)) & PCIE_RC_CON_STATUS_REG_DATA_REG_ADD_INFO_MASK)
/*! @} */

/*! @name PCI_MSI_CAP_ID_NEXT_CTRL_REG - MSI Capability ID, Next Pointer, Capability And Control */
/*! @{ */

#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_ID_MASK (0xFFU)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_ID_SHIFT (0U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_ID_WIDTH (8U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_ID_SHIFT)) & PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_ID_MASK)

#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_NEXT_OFFSET_MASK (0xFF00U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_NEXT_OFFSET_SHIFT (8U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_NEXT_OFFSET_WIDTH (8U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_NEXT_OFFSET_SHIFT)) & PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_NEXT_OFFSET_MASK)

#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_ENABLE_MASK (0x10000U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_ENABLE_SHIFT (16U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_ENABLE_WIDTH (1U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_ENABLE_SHIFT)) & PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_ENABLE_MASK)

#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_CAP_MASK (0xE0000U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_CAP_SHIFT (17U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_CAP_WIDTH (3U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_CAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_CAP_SHIFT)) & PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_CAP_MASK)

#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_EN_MASK (0x700000U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_EN_SHIFT (20U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_EN_WIDTH (3U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_EN_SHIFT)) & PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_EN_MASK)

#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_64_BIT_ADDR_CAP_MASK (0x800000U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_64_BIT_ADDR_CAP_SHIFT (23U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_64_BIT_ADDR_CAP_WIDTH (1U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_64_BIT_ADDR_CAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_64_BIT_ADDR_CAP_SHIFT)) & PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_64_BIT_ADDR_CAP_MASK)

#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_PVM_SUPPORT_MASK (0x1000000U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_PVM_SUPPORT_SHIFT (24U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_PVM_SUPPORT_WIDTH (1U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_PVM_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_PVM_SUPPORT_SHIFT)) & PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_PVM_SUPPORT_MASK)

#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_CAP_MASK (0x2000000U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_CAP_SHIFT (25U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_CAP_WIDTH (1U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_CAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_CAP_SHIFT)) & PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_CAP_MASK)

#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_EN_MASK (0x4000000U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_EN_SHIFT (26U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_EN_WIDTH (1U)
#define PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_EN_SHIFT)) & PCIE_RC_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_EN_MASK)
/*! @} */

/*! @name MSI_CAP_OFF_04H_REG - MSI message lower address */
/*! @{ */

#define PCIE_RC_MSI_CAP_OFF_04H_REG_PCI_MSI_CAP_OFF_04H_MASK (0xFFFFFFFCU)
#define PCIE_RC_MSI_CAP_OFF_04H_REG_PCI_MSI_CAP_OFF_04H_SHIFT (2U)
#define PCIE_RC_MSI_CAP_OFF_04H_REG_PCI_MSI_CAP_OFF_04H_WIDTH (30U)
#define PCIE_RC_MSI_CAP_OFF_04H_REG_PCI_MSI_CAP_OFF_04H(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CAP_OFF_04H_REG_PCI_MSI_CAP_OFF_04H_SHIFT)) & PCIE_RC_MSI_CAP_OFF_04H_REG_PCI_MSI_CAP_OFF_04H_MASK)
/*! @} */

/*! @name MSI_CAP_OFF_08H_REG - Data or upper address */
/*! @{ */

#define PCIE_RC_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_08H_MASK (0xFFFFU)
#define PCIE_RC_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_08H_SHIFT (0U)
#define PCIE_RC_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_08H_WIDTH (16U)
#define PCIE_RC_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_08H(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_08H_SHIFT)) & PCIE_RC_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_08H_MASK)

#define PCIE_RC_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_0AH_MASK (0xFFFF0000U)
#define PCIE_RC_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_0AH_SHIFT (16U)
#define PCIE_RC_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_0AH_WIDTH (16U)
#define PCIE_RC_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_0AH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_0AH_SHIFT)) & PCIE_RC_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_0AH_MASK)
/*! @} */

/*! @name MSI_CAP_OFF_0CH_REG - Data or mask bits */
/*! @{ */

#define PCIE_RC_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0CH_MASK (0xFFFFU)
#define PCIE_RC_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0CH_SHIFT (0U)
#define PCIE_RC_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0CH_WIDTH (16U)
#define PCIE_RC_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0CH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0CH_SHIFT)) & PCIE_RC_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0CH_MASK)

#define PCIE_RC_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0EH_MASK (0xFFFF0000U)
#define PCIE_RC_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0EH_SHIFT (16U)
#define PCIE_RC_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0EH_WIDTH (16U)
#define PCIE_RC_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0EH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0EH_SHIFT)) & PCIE_RC_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0EH_MASK)
/*! @} */

/*! @name MSI_CAP_OFF_10H_REG - Pending or Mask Bits */
/*! @{ */

#define PCIE_RC_MSI_CAP_OFF_10H_REG_PCI_MSI_CAP_OFF_10H_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CAP_OFF_10H_REG_PCI_MSI_CAP_OFF_10H_SHIFT (0U)
#define PCIE_RC_MSI_CAP_OFF_10H_REG_PCI_MSI_CAP_OFF_10H_WIDTH (32U)
#define PCIE_RC_MSI_CAP_OFF_10H_REG_PCI_MSI_CAP_OFF_10H(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CAP_OFF_10H_REG_PCI_MSI_CAP_OFF_10H_SHIFT)) & PCIE_RC_MSI_CAP_OFF_10H_REG_PCI_MSI_CAP_OFF_10H_MASK)
/*! @} */

/*! @name MSI_CAP_OFF_14H_REG - Pending Bits */
/*! @{ */

#define PCIE_RC_MSI_CAP_OFF_14H_REG_PCI_MSI_CAP_OFF_14H_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CAP_OFF_14H_REG_PCI_MSI_CAP_OFF_14H_SHIFT (0U)
#define PCIE_RC_MSI_CAP_OFF_14H_REG_PCI_MSI_CAP_OFF_14H_WIDTH (32U)
#define PCIE_RC_MSI_CAP_OFF_14H_REG_PCI_MSI_CAP_OFF_14H(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CAP_OFF_14H_REG_PCI_MSI_CAP_OFF_14H_SHIFT)) & PCIE_RC_MSI_CAP_OFF_14H_REG_PCI_MSI_CAP_OFF_14H_MASK)
/*! @} */

/*! @name PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG - PCI Express Capabilities, ID, Next Pointer */
/*! @{ */

#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_ID_MASK (0xFFU)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_ID_SHIFT (0U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_ID_WIDTH (8U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_ID_SHIFT)) & PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_ID_MASK)

#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_NEXT_PTR_MASK (0xFF00U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_NEXT_PTR_SHIFT (8U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_NEXT_PTR_WIDTH (8U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_NEXT_PTR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_NEXT_PTR_SHIFT)) & PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_NEXT_PTR_MASK)

#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_REG_MASK (0xF0000U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_REG_SHIFT (16U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_REG_WIDTH (4U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_REG_SHIFT)) & PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_REG_MASK)

#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_DEV_PORT_TYPE_MASK (0xF00000U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_DEV_PORT_TYPE_SHIFT (20U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_DEV_PORT_TYPE_WIDTH (4U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_DEV_PORT_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_DEV_PORT_TYPE_SHIFT)) & PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_DEV_PORT_TYPE_MASK)

#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_SLOT_IMP_MASK (0x1000000U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_SLOT_IMP_SHIFT (24U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_SLOT_IMP_WIDTH (1U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_SLOT_IMP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_SLOT_IMP_SHIFT)) & PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_SLOT_IMP_MASK)

#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_INT_MSG_NUM_MASK (0x3E000000U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_INT_MSG_NUM_SHIFT (25U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_INT_MSG_NUM_WIDTH (5U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_INT_MSG_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_INT_MSG_NUM_SHIFT)) & PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_INT_MSG_NUM_MASK)

#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVD_MASK (0x40000000U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVD_SHIFT (30U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVD_WIDTH (1U)
#define PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVD_SHIFT)) & PCIE_RC_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVD_MASK)
/*! @} */

/*! @name DEVICE_CAPABILITIES_REG - Device Capabilities */
/*! @{ */

#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_MAX_PAYLOAD_SIZE_MASK (0x7U)
#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_MAX_PAYLOAD_SIZE_SHIFT (0U)
#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_MAX_PAYLOAD_SIZE_WIDTH (3U)
#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_MAX_PAYLOAD_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_MAX_PAYLOAD_SIZE_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_MAX_PAYLOAD_SIZE_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_PHANTOM_FUNC_SUPPORT_MASK (0x18U)
#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_PHANTOM_FUNC_SUPPORT_SHIFT (3U)
#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_PHANTOM_FUNC_SUPPORT_WIDTH (2U)
#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_PHANTOM_FUNC_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_PHANTOM_FUNC_SUPPORT_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_PHANTOM_FUNC_SUPPORT_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_EXT_TAG_SUPP_MASK (0x20U)
#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_EXT_TAG_SUPP_SHIFT (5U)
#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_EXT_TAG_SUPP_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_EXT_TAG_SUPP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_EXT_TAG_SUPP_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_EXT_TAG_SUPP_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_ROLE_BASED_ERR_REPORT_MASK (0x8000U)
#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_ROLE_BASED_ERR_REPORT_SHIFT (15U)
#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_ROLE_BASED_ERR_REPORT_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_ROLE_BASED_ERR_REPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_ROLE_BASED_ERR_REPORT_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES_REG_PCIE_CAP_ROLE_BASED_ERR_REPORT_MASK)
/*! @} */

/*! @name DEVICE_CONTROL_DEVICE_STATUS - Device Control and Status */
/*! @{ */

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_REPORT_EN_MASK (0x1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_REPORT_EN_SHIFT (0U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_REPORT_EN_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_REPORT_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_REPORT_EN_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_REPORT_EN_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_REPORT_EN_MASK (0x2U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_REPORT_EN_SHIFT (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_REPORT_EN_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_REPORT_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_REPORT_EN_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_REPORT_EN_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_REPORT_EN_MASK (0x4U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_REPORT_EN_SHIFT (2U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_REPORT_EN_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_REPORT_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_REPORT_EN_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_REPORT_EN_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORT_REQ_REP_EN_MASK (0x8U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORT_REQ_REP_EN_SHIFT (3U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORT_REQ_REP_EN_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORT_REQ_REP_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORT_REQ_REP_EN_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORT_REQ_REP_EN_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_REL_ORDER_MASK (0x10U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_REL_ORDER_SHIFT (4U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_REL_ORDER_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_REL_ORDER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_REL_ORDER_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_REL_ORDER_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_PAYLOAD_SIZE_CS_MASK (0xE0U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_PAYLOAD_SIZE_CS_SHIFT (5U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_PAYLOAD_SIZE_CS_WIDTH (3U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_PAYLOAD_SIZE_CS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_PAYLOAD_SIZE_CS_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_PAYLOAD_SIZE_CS_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EXT_TAG_EN_MASK (0x100U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EXT_TAG_EN_SHIFT (8U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EXT_TAG_EN_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EXT_TAG_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EXT_TAG_EN_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EXT_TAG_EN_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_PHANTOM_FUNC_EN_MASK (0x200U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_PHANTOM_FUNC_EN_SHIFT (9U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_PHANTOM_FUNC_EN_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_PHANTOM_FUNC_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_PHANTOM_FUNC_EN_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_PHANTOM_FUNC_EN_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_PM_EN_MASK (0x400U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_PM_EN_SHIFT (10U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_PM_EN_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_PM_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_PM_EN_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_PM_EN_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_NO_SNOOP_MASK (0x800U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_NO_SNOOP_SHIFT (11U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_NO_SNOOP_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_NO_SNOOP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_NO_SNOOP_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_NO_SNOOP_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_READ_REQ_SIZE_MASK (0x7000U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_READ_REQ_SIZE_SHIFT (12U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_READ_REQ_SIZE_WIDTH (3U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_READ_REQ_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_READ_REQ_SIZE_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_READ_REQ_SIZE_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_INITIATE_FLR_MASK (0x8000U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_INITIATE_FLR_SHIFT (15U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_INITIATE_FLR_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_INITIATE_FLR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_INITIATE_FLR_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_INITIATE_FLR_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_DETECTED_MASK (0x10000U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_DETECTED_SHIFT (16U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_DETECTED_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_DETECTED_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_DETECTED_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_DETECTED_MASK (0x20000U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_DETECTED_SHIFT (17U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_DETECTED_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_DETECTED_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_DETECTED_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_DETECTED_MASK (0x40000U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_DETECTED_SHIFT (18U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_DETECTED_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_DETECTED_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_DETECTED_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORTED_REQ_DETECTED_MASK (0x80000U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORTED_REQ_DETECTED_SHIFT (19U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORTED_REQ_DETECTED_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORTED_REQ_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORTED_REQ_DETECTED_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORTED_REQ_DETECTED_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_DETECTED_MASK (0x100000U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_DETECTED_SHIFT (20U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_DETECTED_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_DETECTED_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_DETECTED_MASK)

#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_TRANS_PENDING_MASK (0x200000U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_TRANS_PENDING_SHIFT (21U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_TRANS_PENDING_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_TRANS_PENDING(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_TRANS_PENDING_SHIFT)) & PCIE_RC_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_TRANS_PENDING_MASK)
/*! @} */

/*! @name LINK_CAPABILITIES_REG - Link Capabilities */
/*! @{ */

#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_SPEED_MASK (0xFU)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_SPEED_SHIFT (0U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_SPEED_WIDTH (4U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_SPEED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_SPEED_SHIFT)) & PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_SPEED_MASK)

#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_WIDTH_MASK (0x3F0U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_WIDTH_SHIFT (4U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_WIDTH_WIDTH (6U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_WIDTH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_WIDTH_SHIFT)) & PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_WIDTH_MASK)

#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_SUPPORT_MASK (0xC00U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_SUPPORT_SHIFT (10U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_SUPPORT_WIDTH (2U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_SUPPORT_SHIFT)) & PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_SUPPORT_MASK)

#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_L0S_EXIT_LATENCY_MASK (0x7000U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_L0S_EXIT_LATENCY_SHIFT (12U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_L0S_EXIT_LATENCY_WIDTH (3U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_L0S_EXIT_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_L0S_EXIT_LATENCY_SHIFT)) & PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_L0S_EXIT_LATENCY_MASK)

#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_L1_EXIT_LATENCY_MASK (0x38000U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_L1_EXIT_LATENCY_SHIFT (15U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_L1_EXIT_LATENCY_WIDTH (3U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_L1_EXIT_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_L1_EXIT_LATENCY_SHIFT)) & PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_L1_EXIT_LATENCY_MASK)

#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_CLOCK_POWER_MAN_MASK (0x40000U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_CLOCK_POWER_MAN_SHIFT (18U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_CLOCK_POWER_MAN_WIDTH (1U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_CLOCK_POWER_MAN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_CLOCK_POWER_MAN_SHIFT)) & PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_CLOCK_POWER_MAN_MASK)

#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_SURPRISE_DOWN_ERR_REP_CAP_MASK (0x80000U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_SURPRISE_DOWN_ERR_REP_CAP_SHIFT (19U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_SURPRISE_DOWN_ERR_REP_CAP_WIDTH (1U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_SURPRISE_DOWN_ERR_REP_CAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_SURPRISE_DOWN_ERR_REP_CAP_SHIFT)) & PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_SURPRISE_DOWN_ERR_REP_CAP_MASK)

#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_DLL_ACTIVE_REP_CAP_MASK (0x100000U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_DLL_ACTIVE_REP_CAP_SHIFT (20U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_DLL_ACTIVE_REP_CAP_WIDTH (1U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_DLL_ACTIVE_REP_CAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_DLL_ACTIVE_REP_CAP_SHIFT)) & PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_DLL_ACTIVE_REP_CAP_MASK)

#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_LINK_BW_NOT_CAP_MASK (0x200000U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_LINK_BW_NOT_CAP_SHIFT (21U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_LINK_BW_NOT_CAP_WIDTH (1U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_LINK_BW_NOT_CAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_LINK_BW_NOT_CAP_SHIFT)) & PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_LINK_BW_NOT_CAP_MASK)

#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_ASPM_OPT_COMPLIANCE_MASK (0x400000U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_ASPM_OPT_COMPLIANCE_SHIFT (22U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_ASPM_OPT_COMPLIANCE_WIDTH (1U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_ASPM_OPT_COMPLIANCE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_ASPM_OPT_COMPLIANCE_SHIFT)) & PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_ASPM_OPT_COMPLIANCE_MASK)

#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_PORT_NUM_MASK (0xFF000000U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_PORT_NUM_SHIFT (24U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_PORT_NUM_WIDTH (8U)
#define PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_PORT_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_PORT_NUM_SHIFT)) & PCIE_RC_LINK_CAPABILITIES_REG_PCIE_CAP_PORT_NUM_MASK)
/*! @} */

/*! @name LINK_CONTROL_LINK_STATUS_REG - Link Control and Status */
/*! @{ */

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_CONTROL_MASK (0x3U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_CONTROL_SHIFT (0U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_CONTROL_WIDTH (2U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_CONTROL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_CONTROL_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_CONTROL_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RCB_MASK (0x8U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RCB_SHIFT (3U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RCB_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RCB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RCB_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RCB_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_DISABLE_MASK (0x10U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_DISABLE_SHIFT (4U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_DISABLE_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_DISABLE_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_DISABLE_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RETRAIN_LINK_MASK (0x20U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RETRAIN_LINK_SHIFT (5U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RETRAIN_LINK_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RETRAIN_LINK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RETRAIN_LINK_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RETRAIN_LINK_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_COMMON_CLK_CONFIG_MASK (0x40U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_COMMON_CLK_CONFIG_SHIFT (6U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_COMMON_CLK_CONFIG_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_COMMON_CLK_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_COMMON_CLK_CONFIG_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_COMMON_CLK_CONFIG_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EXTENDED_SYNCH_MASK (0x80U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EXTENDED_SYNCH_SHIFT (7U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EXTENDED_SYNCH_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EXTENDED_SYNCH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EXTENDED_SYNCH_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EXTENDED_SYNCH_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EN_CLK_POWER_MAN_MASK (0x100U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EN_CLK_POWER_MAN_SHIFT (8U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EN_CLK_POWER_MAN_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EN_CLK_POWER_MAN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EN_CLK_POWER_MAN_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EN_CLK_POWER_MAN_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_HW_AUTO_WIDTH_DISABLE_MASK (0x200U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_HW_AUTO_WIDTH_DISABLE_SHIFT (9U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_HW_AUTO_WIDTH_DISABLE_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_HW_AUTO_WIDTH_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_HW_AUTO_WIDTH_DISABLE_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_HW_AUTO_WIDTH_DISABLE_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_INT_EN_MASK (0x400U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_INT_EN_SHIFT (10U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_INT_EN_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_INT_EN_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_INT_EN_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_INT_EN_MASK (0x800U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_INT_EN_SHIFT (11U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_INT_EN_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_INT_EN_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_INT_EN_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DRS_SIGNALING_CONTROL_MASK (0xC000U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DRS_SIGNALING_CONTROL_SHIFT (14U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DRS_SIGNALING_CONTROL_WIDTH (2U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DRS_SIGNALING_CONTROL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DRS_SIGNALING_CONTROL_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DRS_SIGNALING_CONTROL_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_SPEED_MASK (0xF0000U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_SPEED_SHIFT (16U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_SPEED_WIDTH (4U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_SPEED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_SPEED_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_SPEED_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_NEGO_LINK_WIDTH_MASK (0x3F00000U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_NEGO_LINK_WIDTH_SHIFT (20U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_NEGO_LINK_WIDTH_WIDTH (6U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_NEGO_LINK_WIDTH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_NEGO_LINK_WIDTH_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_NEGO_LINK_WIDTH_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_TRAINING_MASK (0x8000000U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_TRAINING_SHIFT (27U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_TRAINING_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_TRAINING(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_TRAINING_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_TRAINING_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_SLOT_CLK_CONFIG_MASK (0x10000000U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_SLOT_CLK_CONFIG_SHIFT (28U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_SLOT_CLK_CONFIG_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_SLOT_CLK_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_SLOT_CLK_CONFIG_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_SLOT_CLK_CONFIG_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DLL_ACTIVE_MASK (0x20000000U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DLL_ACTIVE_SHIFT (29U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DLL_ACTIVE_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DLL_ACTIVE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DLL_ACTIVE_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DLL_ACTIVE_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_STATUS_MASK (0x40000000U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_STATUS_SHIFT (30U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_STATUS_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_STATUS_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_STATUS_MASK)

#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_STATUS_MASK (0x80000000U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_STATUS_SHIFT (31U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_STATUS_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_STATUS_SHIFT)) & PCIE_RC_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_STATUS_MASK)
/*! @} */

/*! @name SLOT_CAPABILITIES_REG - Slot Capabilities */
/*! @{ */

#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ATTENTION_INDICATOR_BUTTON_MASK (0x1U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ATTENTION_INDICATOR_BUTTON_SHIFT (0U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ATTENTION_INDICATOR_BUTTON_WIDTH (1U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ATTENTION_INDICATOR_BUTTON(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ATTENTION_INDICATOR_BUTTON_SHIFT)) & PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ATTENTION_INDICATOR_BUTTON_MASK)

#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_POWER_CONTROLLER_MASK (0x2U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_POWER_CONTROLLER_SHIFT (1U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_POWER_CONTROLLER_WIDTH (1U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_POWER_CONTROLLER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_POWER_CONTROLLER_SHIFT)) & PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_POWER_CONTROLLER_MASK)

#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_MRL_SENSOR_MASK (0x4U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_MRL_SENSOR_SHIFT (2U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_MRL_SENSOR_WIDTH (1U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_MRL_SENSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_MRL_SENSOR_SHIFT)) & PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_MRL_SENSOR_MASK)

#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ATTENTION_INDICATOR_MASK (0x8U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ATTENTION_INDICATOR_SHIFT (3U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ATTENTION_INDICATOR_WIDTH (1U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ATTENTION_INDICATOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ATTENTION_INDICATOR_SHIFT)) & PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ATTENTION_INDICATOR_MASK)

#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_POWER_INDICATOR_MASK (0x10U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_POWER_INDICATOR_SHIFT (4U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_POWER_INDICATOR_WIDTH (1U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_POWER_INDICATOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_POWER_INDICATOR_SHIFT)) & PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_POWER_INDICATOR_MASK)

#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_HOT_PLUG_SURPRISE_MASK (0x20U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_HOT_PLUG_SURPRISE_SHIFT (5U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_HOT_PLUG_SURPRISE_WIDTH (1U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_HOT_PLUG_SURPRISE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_HOT_PLUG_SURPRISE_SHIFT)) & PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_HOT_PLUG_SURPRISE_MASK)

#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_HOT_PLUG_CAPABLE_MASK (0x40U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_HOT_PLUG_CAPABLE_SHIFT (6U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_HOT_PLUG_CAPABLE_WIDTH (1U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_HOT_PLUG_CAPABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_HOT_PLUG_CAPABLE_SHIFT)) & PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_HOT_PLUG_CAPABLE_MASK)

#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_SLOT_POWER_LIMIT_VALUE_MASK (0x7F80U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_SLOT_POWER_LIMIT_VALUE_SHIFT (7U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_SLOT_POWER_LIMIT_VALUE_WIDTH (8U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_SLOT_POWER_LIMIT_VALUE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_SLOT_POWER_LIMIT_VALUE_SHIFT)) & PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_SLOT_POWER_LIMIT_VALUE_MASK)

#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_SLOT_POWER_LIMIT_SCALE_MASK (0x18000U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_SLOT_POWER_LIMIT_SCALE_SHIFT (15U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_SLOT_POWER_LIMIT_SCALE_WIDTH (2U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_SLOT_POWER_LIMIT_SCALE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_SLOT_POWER_LIMIT_SCALE_SHIFT)) & PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_SLOT_POWER_LIMIT_SCALE_MASK)

#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ELECTROMECH_INTERLOCK_MASK (0x20000U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ELECTROMECH_INTERLOCK_SHIFT (17U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ELECTROMECH_INTERLOCK_WIDTH (1U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ELECTROMECH_INTERLOCK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ELECTROMECH_INTERLOCK_SHIFT)) & PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_ELECTROMECH_INTERLOCK_MASK)

#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_NO_CMD_CPL_SUPPORT_MASK (0x40000U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_NO_CMD_CPL_SUPPORT_SHIFT (18U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_NO_CMD_CPL_SUPPORT_WIDTH (1U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_NO_CMD_CPL_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_NO_CMD_CPL_SUPPORT_SHIFT)) & PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_NO_CMD_CPL_SUPPORT_MASK)

#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_PHY_SLOT_NUM_MASK (0xFFF80000U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_PHY_SLOT_NUM_SHIFT (19U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_PHY_SLOT_NUM_WIDTH (13U)
#define PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_PHY_SLOT_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_PHY_SLOT_NUM_SHIFT)) & PCIE_RC_SLOT_CAPABILITIES_REG_PCIE_CAP_PHY_SLOT_NUM_MASK)
/*! @} */

/*! @name SLOT_CONTROL_SLOT_STATUS - Slot Control and Status */
/*! @{ */

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_BUTTON_PRESSED_EN_MASK (0x1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_BUTTON_PRESSED_EN_SHIFT (0U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_BUTTON_PRESSED_EN_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_BUTTON_PRESSED_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_BUTTON_PRESSED_EN_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_BUTTON_PRESSED_EN_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_FAULT_DETECTED_EN_MASK (0x2U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_FAULT_DETECTED_EN_SHIFT (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_FAULT_DETECTED_EN_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_FAULT_DETECTED_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_FAULT_DETECTED_EN_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_FAULT_DETECTED_EN_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_CHANGED_EN_MASK (0x4U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_CHANGED_EN_SHIFT (2U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_CHANGED_EN_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_CHANGED_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_CHANGED_EN_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_CHANGED_EN_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECT_CHANGE_EN_MASK (0x8U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECT_CHANGE_EN_SHIFT (3U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECT_CHANGE_EN_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECT_CHANGE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECT_CHANGE_EN_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECT_CHANGE_EN_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_CMD_CPL_INT_EN_MASK (0x10U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_CMD_CPL_INT_EN_SHIFT (4U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_CMD_CPL_INT_EN_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_CMD_CPL_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_CMD_CPL_INT_EN_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_CMD_CPL_INT_EN_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_HOT_PLUG_INT_EN_MASK (0x20U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_HOT_PLUG_INT_EN_SHIFT (5U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_HOT_PLUG_INT_EN_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_HOT_PLUG_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_HOT_PLUG_INT_EN_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_HOT_PLUG_INT_EN_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_INDICATOR_CTRL_MASK (0xC0U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_INDICATOR_CTRL_SHIFT (6U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_INDICATOR_CTRL_WIDTH (2U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_INDICATOR_CTRL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_INDICATOR_CTRL_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_INDICATOR_CTRL_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_INDICATOR_CTRL_MASK (0x300U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_INDICATOR_CTRL_SHIFT (8U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_INDICATOR_CTRL_WIDTH (2U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_INDICATOR_CTRL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_INDICATOR_CTRL_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_INDICATOR_CTRL_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_CONTROLLER_CTRL_MASK (0x400U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_CONTROLLER_CTRL_SHIFT (10U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_CONTROLLER_CTRL_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_CONTROLLER_CTRL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_CONTROLLER_CTRL_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_CONTROLLER_CTRL_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ELECTROMECH_INTERLOCK_CTRL_MASK (0x800U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ELECTROMECH_INTERLOCK_CTRL_SHIFT (11U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ELECTROMECH_INTERLOCK_CTRL_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ELECTROMECH_INTERLOCK_CTRL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ELECTROMECH_INTERLOCK_CTRL_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ELECTROMECH_INTERLOCK_CTRL_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_DLL_STATE_CHANGED_EN_MASK (0x1000U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_DLL_STATE_CHANGED_EN_SHIFT (12U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_DLL_STATE_CHANGED_EN_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_DLL_STATE_CHANGED_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_DLL_STATE_CHANGED_EN_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_DLL_STATE_CHANGED_EN_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_BUTTON_PRESSED_MASK (0x10000U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_BUTTON_PRESSED_SHIFT (16U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_BUTTON_PRESSED_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_BUTTON_PRESSED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_BUTTON_PRESSED_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ATTENTION_BUTTON_PRESSED_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_FAULT_DETECTED_MASK (0x20000U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_FAULT_DETECTED_SHIFT (17U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_FAULT_DETECTED_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_FAULT_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_FAULT_DETECTED_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_POWER_FAULT_DETECTED_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_CHANGED_MASK (0x40000U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_CHANGED_SHIFT (18U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_CHANGED_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_CHANGED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_CHANGED_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_CHANGED_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECTED_CHANGED_MASK (0x80000U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECTED_CHANGED_SHIFT (19U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECTED_CHANGED_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECTED_CHANGED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECTED_CHANGED_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECTED_CHANGED_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_CMD_CPLD_MASK (0x100000U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_CMD_CPLD_SHIFT (20U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_CMD_CPLD_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_CMD_CPLD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_CMD_CPLD_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_CMD_CPLD_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_STATE_MASK (0x200000U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_STATE_SHIFT (21U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_STATE_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_STATE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_STATE_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_MRL_SENSOR_STATE_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECT_STATE_MASK (0x400000U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECT_STATE_SHIFT (22U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECT_STATE_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECT_STATE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECT_STATE_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_PRESENCE_DETECT_STATE_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ELECTROMECH_INTERLOCK_STATUS_MASK (0x800000U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ELECTROMECH_INTERLOCK_STATUS_SHIFT (23U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ELECTROMECH_INTERLOCK_STATUS_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ELECTROMECH_INTERLOCK_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ELECTROMECH_INTERLOCK_STATUS_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_ELECTROMECH_INTERLOCK_STATUS_MASK)

#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_DLL_STATE_CHANGED_MASK (0x1000000U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_DLL_STATE_CHANGED_SHIFT (24U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_DLL_STATE_CHANGED_WIDTH (1U)
#define PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_DLL_STATE_CHANGED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_DLL_STATE_CHANGED_SHIFT)) & PCIE_RC_SLOT_CONTROL_SLOT_STATUS_PCIE_CAP_DLL_STATE_CHANGED_MASK)
/*! @} */

/*! @name ROOT_CONTROL_ROOT_CAPABILITIES_REG - Root Control and Capabilities */
/*! @{ */

#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_CORR_ERR_EN_MASK (0x1U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_CORR_ERR_EN_SHIFT (0U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_CORR_ERR_EN_WIDTH (1U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_CORR_ERR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_CORR_ERR_EN_SHIFT)) & PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_CORR_ERR_EN_MASK)

#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_NON_FATAL_ERR_EN_MASK (0x2U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_NON_FATAL_ERR_EN_SHIFT (1U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_NON_FATAL_ERR_EN_WIDTH (1U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_NON_FATAL_ERR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_NON_FATAL_ERR_EN_SHIFT)) & PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_NON_FATAL_ERR_EN_MASK)

#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_FATAL_ERR_EN_MASK (0x4U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_FATAL_ERR_EN_SHIFT (2U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_FATAL_ERR_EN_WIDTH (1U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_FATAL_ERR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_FATAL_ERR_EN_SHIFT)) & PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_SYS_ERR_ON_FATAL_ERR_EN_MASK)

#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_PME_INT_EN_MASK (0x8U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_PME_INT_EN_SHIFT (3U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_PME_INT_EN_WIDTH (1U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_PME_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_PME_INT_EN_SHIFT)) & PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_PME_INT_EN_MASK)

#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_CRS_SW_VISIBILITY_EN_MASK (0x10U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_CRS_SW_VISIBILITY_EN_SHIFT (4U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_CRS_SW_VISIBILITY_EN_WIDTH (1U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_CRS_SW_VISIBILITY_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_CRS_SW_VISIBILITY_EN_SHIFT)) & PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_CRS_SW_VISIBILITY_EN_MASK)

#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_CRS_SW_VISIBILITY_MASK (0x10000U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_CRS_SW_VISIBILITY_SHIFT (16U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_CRS_SW_VISIBILITY_WIDTH (1U)
#define PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_CRS_SW_VISIBILITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_CRS_SW_VISIBILITY_SHIFT)) & PCIE_RC_ROOT_CONTROL_ROOT_CAPABILITIES_REG_PCIE_CAP_CRS_SW_VISIBILITY_MASK)
/*! @} */

/*! @name ROOT_STATUS_REG - Root Status */
/*! @{ */

#define PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_REQ_ID_MASK (0xFFFFU)
#define PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_REQ_ID_SHIFT (0U)
#define PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_REQ_ID_WIDTH (16U)
#define PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_REQ_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_REQ_ID_SHIFT)) & PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_REQ_ID_MASK)

#define PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_STATUS_MASK (0x10000U)
#define PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_STATUS_SHIFT (16U)
#define PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_STATUS_WIDTH (1U)
#define PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_STATUS_SHIFT)) & PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_STATUS_MASK)

#define PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_PENDING_MASK (0x20000U)
#define PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_PENDING_SHIFT (17U)
#define PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_PENDING_WIDTH (1U)
#define PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_PENDING(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_PENDING_SHIFT)) & PCIE_RC_ROOT_STATUS_REG_PCIE_CAP_PME_PENDING_MASK)
/*! @} */

/*! @name DEVICE_CAPABILITIES2_REG - Device Capabilities 2 */
/*! @{ */

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_RANGE_MASK (0xFU)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_RANGE_SHIFT (0U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_RANGE_WIDTH (4U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_RANGE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_RANGE_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_RANGE_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SUPPORT_MASK (0x10U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SUPPORT_SHIFT (4U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SUPPORT_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SUPPORT_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SUPPORT_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_MASK (0x20U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_SHIFT (5U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ATOMIC_ROUTING_SUPP_MASK (0x40U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ATOMIC_ROUTING_SUPP_SHIFT (6U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ATOMIC_ROUTING_SUPP_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ATOMIC_ROUTING_SUPP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ATOMIC_ROUTING_SUPP_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ATOMIC_ROUTING_SUPP_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_32_ATOMIC_CPL_SUPP_MASK (0x80U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_32_ATOMIC_CPL_SUPP_SHIFT (7U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_32_ATOMIC_CPL_SUPP_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_32_ATOMIC_CPL_SUPP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_32_ATOMIC_CPL_SUPP_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_32_ATOMIC_CPL_SUPP_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_64_ATOMIC_CPL_SUPP_MASK (0x100U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_64_ATOMIC_CPL_SUPP_SHIFT (8U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_64_ATOMIC_CPL_SUPP_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_64_ATOMIC_CPL_SUPP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_64_ATOMIC_CPL_SUPP_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_64_ATOMIC_CPL_SUPP_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_128_CAS_CPL_SUPP_MASK (0x200U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_128_CAS_CPL_SUPP_SHIFT (9U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_128_CAS_CPL_SUPP_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_128_CAS_CPL_SUPP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_128_CAS_CPL_SUPP_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_128_CAS_CPL_SUPP_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_NO_RO_EN_PR2PR_PAR_MASK (0x400U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_NO_RO_EN_PR2PR_PAR_SHIFT (10U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_NO_RO_EN_PR2PR_PAR_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_NO_RO_EN_PR2PR_PAR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_NO_RO_EN_PR2PR_PAR_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_NO_RO_EN_PR2PR_PAR_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_LTR_SUPP_MASK (0x800U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_LTR_SUPP_SHIFT (11U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_LTR_SUPP_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_LTR_SUPP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_LTR_SUPP_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_LTR_SUPP_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_0_MASK (0x1000U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_0_SHIFT (12U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_0_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_0_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_0_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_1_MASK (0x2000U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_1_SHIFT (13U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_1_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_1_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_1_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_COMP_SUPPORT_MASK (0x10000U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_COMP_SUPPORT_SHIFT (16U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_COMP_SUPPORT_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_COMP_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_COMP_SUPPORT_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_COMP_SUPPORT_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_REQ_SUPPORT_MASK (0x20000U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_REQ_SUPPORT_SHIFT (17U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_REQ_SUPPORT_WIDTH (1U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_REQ_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_REQ_SUPPORT_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_REQ_SUPPORT_MASK)

#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_OBFF_SUPPORT_MASK (0xC0000U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_OBFF_SUPPORT_SHIFT (18U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_OBFF_SUPPORT_WIDTH (2U)
#define PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_OBFF_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_OBFF_SUPPORT_SHIFT)) & PCIE_RC_DEVICE_CAPABILITIES2_REG_PCIE_CAP_OBFF_SUPPORT_MASK)
/*! @} */

/*! @name DEVICE_CONTROL2_DEVICE_STATUS2_REG - Device Control 2 and Status 2 */
/*! @{ */

#define PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_VALUE_MASK (0xFU)
#define PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_VALUE_SHIFT (0U)
#define PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_VALUE_WIDTH (4U)
#define PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_VALUE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_VALUE_SHIFT)) & PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_VALUE_MASK)

#define PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_MASK (0x10U)
#define PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SHIFT (4U)
#define PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SHIFT)) & PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_MASK)

#define PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_CS_MASK (0x20U)
#define PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_CS_SHIFT (5U)
#define PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_CS_WIDTH (1U)
#define PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_CS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_CS_SHIFT)) & PCIE_RC_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_CS_MASK)
/*! @} */

/*! @name LINK_CAPABILITIES2_REG - Link Capabilities 2 */
/*! @{ */

#define PCIE_RC_LINK_CAPABILITIES2_REG_PCIE_CAP_SUPPORT_LINK_SPEED_VECTOR_MASK (0xFEU)
#define PCIE_RC_LINK_CAPABILITIES2_REG_PCIE_CAP_SUPPORT_LINK_SPEED_VECTOR_SHIFT (1U)
#define PCIE_RC_LINK_CAPABILITIES2_REG_PCIE_CAP_SUPPORT_LINK_SPEED_VECTOR_WIDTH (7U)
#define PCIE_RC_LINK_CAPABILITIES2_REG_PCIE_CAP_SUPPORT_LINK_SPEED_VECTOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES2_REG_PCIE_CAP_SUPPORT_LINK_SPEED_VECTOR_SHIFT)) & PCIE_RC_LINK_CAPABILITIES2_REG_PCIE_CAP_SUPPORT_LINK_SPEED_VECTOR_MASK)

#define PCIE_RC_LINK_CAPABILITIES2_REG_PCIE_CAP_CROSS_LINK_SUPPORT_MASK (0x100U)
#define PCIE_RC_LINK_CAPABILITIES2_REG_PCIE_CAP_CROSS_LINK_SUPPORT_SHIFT (8U)
#define PCIE_RC_LINK_CAPABILITIES2_REG_PCIE_CAP_CROSS_LINK_SUPPORT_WIDTH (1U)
#define PCIE_RC_LINK_CAPABILITIES2_REG_PCIE_CAP_CROSS_LINK_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CAPABILITIES2_REG_PCIE_CAP_CROSS_LINK_SUPPORT_SHIFT)) & PCIE_RC_LINK_CAPABILITIES2_REG_PCIE_CAP_CROSS_LINK_SUPPORT_MASK)
/*! @} */

/*! @name LINK_CONTROL2_LINK_STATUS2_REG - Link Control 2 and Status 2 */
/*! @{ */

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TARGET_LINK_SPEED_MASK (0xFU)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TARGET_LINK_SPEED_SHIFT (0U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TARGET_LINK_SPEED_WIDTH (4U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TARGET_LINK_SPEED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TARGET_LINK_SPEED_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TARGET_LINK_SPEED_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_COMPLIANCE_MASK (0x10U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_COMPLIANCE_SHIFT (4U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_COMPLIANCE_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_COMPLIANCE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_COMPLIANCE_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_COMPLIANCE_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_HW_AUTO_SPEED_DISABLE_MASK (0x20U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_HW_AUTO_SPEED_DISABLE_SHIFT (5U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_HW_AUTO_SPEED_DISABLE_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_HW_AUTO_SPEED_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_HW_AUTO_SPEED_DISABLE_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_HW_AUTO_SPEED_DISABLE_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_SEL_DEEMPHASIS_MASK (0x40U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_SEL_DEEMPHASIS_SHIFT (6U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_SEL_DEEMPHASIS_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_SEL_DEEMPHASIS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_SEL_DEEMPHASIS_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_SEL_DEEMPHASIS_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TX_MARGIN_MASK (0x380U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TX_MARGIN_SHIFT (7U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TX_MARGIN_WIDTH (3U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TX_MARGIN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TX_MARGIN_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TX_MARGIN_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_MODIFIED_COMPLIANCE_MASK (0x400U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_MODIFIED_COMPLIANCE_SHIFT (10U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_MODIFIED_COMPLIANCE_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_MODIFIED_COMPLIANCE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_MODIFIED_COMPLIANCE_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_MODIFIED_COMPLIANCE_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_SOS_MASK (0x800U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_SOS_SHIFT (11U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_SOS_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_SOS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_SOS_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_SOS_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_PRESET_MASK (0xF000U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_PRESET_SHIFT (12U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_PRESET_WIDTH (4U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_PRESET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_PRESET_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_PRESET_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_CURR_DEEMPHASIS_MASK (0x10000U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_CURR_DEEMPHASIS_SHIFT (16U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_CURR_DEEMPHASIS_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_CURR_DEEMPHASIS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_CURR_DEEMPHASIS_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_CURR_DEEMPHASIS_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_MASK (0x20000U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_SHIFT (17U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P1_MASK (0x40000U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P1_SHIFT (18U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P1_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P1_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P1_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P2_MASK (0x80000U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P2_SHIFT (19U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P2_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P2_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P2_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P3_MASK (0x100000U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P3_SHIFT (20U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P3_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P3_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P3_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_LINK_EQ_REQ_MASK (0x200000U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_LINK_EQ_REQ_SHIFT (21U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_LINK_EQ_REQ_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_LINK_EQ_REQ(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_LINK_EQ_REQ_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_LINK_EQ_REQ_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_DOWNSTREAM_COMPO_PRESENCE_MASK (0x70000000U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_DOWNSTREAM_COMPO_PRESENCE_SHIFT (28U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_DOWNSTREAM_COMPO_PRESENCE_WIDTH (3U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_DOWNSTREAM_COMPO_PRESENCE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_DOWNSTREAM_COMPO_PRESENCE_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_DOWNSTREAM_COMPO_PRESENCE_MASK)

#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_DRS_MESSAGE_RECEIVED_MASK (0x80000000U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_DRS_MESSAGE_RECEIVED_SHIFT (31U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_DRS_MESSAGE_RECEIVED_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_DRS_MESSAGE_RECEIVED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_DRS_MESSAGE_RECEIVED_SHIFT)) & PCIE_RC_LINK_CONTROL2_LINK_STATUS2_REG_DRS_MESSAGE_RECEIVED_MASK)
/*! @} */

/*! @name PCI_MSIX_CAP_ID_NEXT_CTRL_REG - MSI-X Capability ID, Next Pointer, Control */
/*! @{ */

#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_ID_MASK (0xFFU)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_ID_SHIFT (0U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_ID_WIDTH (8U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_ID_SHIFT)) & PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_ID_MASK)

#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_NEXT_OFFSET_MASK (0xFF00U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_NEXT_OFFSET_SHIFT (8U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_NEXT_OFFSET_WIDTH (8U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_NEXT_OFFSET_SHIFT)) & PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_NEXT_OFFSET_MASK)

#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_MASK (0x7FF0000U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_SHIFT (16U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_WIDTH (11U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_SHIFT)) & PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_MASK)

#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_FUNCTION_MASK_MASK (0x40000000U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_FUNCTION_MASK_SHIFT (30U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_FUNCTION_MASK_WIDTH (1U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_FUNCTION_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_FUNCTION_MASK_SHIFT)) & PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_FUNCTION_MASK_MASK)

#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_ENABLE_MASK (0x80000000U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_ENABLE_SHIFT (31U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_ENABLE_WIDTH (1U)
#define PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_ENABLE_SHIFT)) & PCIE_RC_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_ENABLE_MASK)
/*! @} */

/*! @name MSIX_TABLE_OFFSET_REG - MSI-X Table Offset and BIR */
/*! @{ */

#define PCIE_RC_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_MASK (0x7U)
#define PCIE_RC_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_SHIFT (0U)
#define PCIE_RC_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_WIDTH (3U)
#define PCIE_RC_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_SHIFT)) & PCIE_RC_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_MASK)

#define PCIE_RC_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_MASK (0xFFFFFFF8U)
#define PCIE_RC_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_SHIFT (3U)
#define PCIE_RC_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_WIDTH (29U)
#define PCIE_RC_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_SHIFT)) & PCIE_RC_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_MASK)
/*! @} */

/*! @name MSIX_PBA_OFFSET_REG - MSI-X PBA Offset and BIR */
/*! @{ */

#define PCIE_RC_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_MASK (0x7U)
#define PCIE_RC_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_SHIFT (0U)
#define PCIE_RC_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_WIDTH (3U)
#define PCIE_RC_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_SHIFT)) & PCIE_RC_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_MASK)

#define PCIE_RC_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_MASK (0xFFFFFFF8U)
#define PCIE_RC_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_SHIFT (3U)
#define PCIE_RC_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_WIDTH (29U)
#define PCIE_RC_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_SHIFT)) & PCIE_RC_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_MASK)
/*! @} */

/*! @name AER_EXT_CAP_HDR_OFF - Advanced Error Reporting Extended Capability Header */
/*! @{ */

#define PCIE_RC_AER_EXT_CAP_HDR_OFF_CAP_ID_MASK  (0xFFFFU)
#define PCIE_RC_AER_EXT_CAP_HDR_OFF_CAP_ID_SHIFT (0U)
#define PCIE_RC_AER_EXT_CAP_HDR_OFF_CAP_ID_WIDTH (16U)
#define PCIE_RC_AER_EXT_CAP_HDR_OFF_CAP_ID(x)    (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AER_EXT_CAP_HDR_OFF_CAP_ID_SHIFT)) & PCIE_RC_AER_EXT_CAP_HDR_OFF_CAP_ID_MASK)

#define PCIE_RC_AER_EXT_CAP_HDR_OFF_CAP_VERSION_MASK (0xF0000U)
#define PCIE_RC_AER_EXT_CAP_HDR_OFF_CAP_VERSION_SHIFT (16U)
#define PCIE_RC_AER_EXT_CAP_HDR_OFF_CAP_VERSION_WIDTH (4U)
#define PCIE_RC_AER_EXT_CAP_HDR_OFF_CAP_VERSION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AER_EXT_CAP_HDR_OFF_CAP_VERSION_SHIFT)) & PCIE_RC_AER_EXT_CAP_HDR_OFF_CAP_VERSION_MASK)

#define PCIE_RC_AER_EXT_CAP_HDR_OFF_NEXT_OFFSET_MASK (0xFFF00000U)
#define PCIE_RC_AER_EXT_CAP_HDR_OFF_NEXT_OFFSET_SHIFT (20U)
#define PCIE_RC_AER_EXT_CAP_HDR_OFF_NEXT_OFFSET_WIDTH (12U)
#define PCIE_RC_AER_EXT_CAP_HDR_OFF_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AER_EXT_CAP_HDR_OFF_NEXT_OFFSET_SHIFT)) & PCIE_RC_AER_EXT_CAP_HDR_OFF_NEXT_OFFSET_MASK)
/*! @} */

/*! @name UNCORR_ERR_STATUS_OFF - Uncorrectable Error Status */
/*! @{ */

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_DL_PROTOCOL_ERR_STATUS_MASK (0x10U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_DL_PROTOCOL_ERR_STATUS_SHIFT (4U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_DL_PROTOCOL_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_DL_PROTOCOL_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_DL_PROTOCOL_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_DL_PROTOCOL_ERR_STATUS_MASK)

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_SURPRISE_DOWN_ERR_STATUS_MASK (0x20U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_SURPRISE_DOWN_ERR_STATUS_SHIFT (5U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_SURPRISE_DOWN_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_SURPRISE_DOWN_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_SURPRISE_DOWN_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_SURPRISE_DOWN_ERR_STATUS_MASK)

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_POIS_TLP_ERR_STATUS_MASK (0x1000U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_POIS_TLP_ERR_STATUS_SHIFT (12U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_POIS_TLP_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_POIS_TLP_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_POIS_TLP_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_POIS_TLP_ERR_STATUS_MASK)

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_FC_PROTOCOL_ERR_STATUS_MASK (0x2000U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_FC_PROTOCOL_ERR_STATUS_SHIFT (13U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_FC_PROTOCOL_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_FC_PROTOCOL_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_FC_PROTOCOL_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_FC_PROTOCOL_ERR_STATUS_MASK)

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_CMPLT_TIMEOUT_ERR_STATUS_MASK (0x4000U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_CMPLT_TIMEOUT_ERR_STATUS_SHIFT (14U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_CMPLT_TIMEOUT_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_CMPLT_TIMEOUT_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_CMPLT_TIMEOUT_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_CMPLT_TIMEOUT_ERR_STATUS_MASK)

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_CMPLT_ABORT_ERR_STATUS_MASK (0x8000U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_CMPLT_ABORT_ERR_STATUS_SHIFT (15U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_CMPLT_ABORT_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_CMPLT_ABORT_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_CMPLT_ABORT_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_CMPLT_ABORT_ERR_STATUS_MASK)

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_UNEXP_CMPLT_ERR_STATUS_MASK (0x10000U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_UNEXP_CMPLT_ERR_STATUS_SHIFT (16U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_UNEXP_CMPLT_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_UNEXP_CMPLT_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_UNEXP_CMPLT_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_UNEXP_CMPLT_ERR_STATUS_MASK)

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_REC_OVERFLOW_ERR_STATUS_MASK (0x20000U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_REC_OVERFLOW_ERR_STATUS_SHIFT (17U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_REC_OVERFLOW_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_REC_OVERFLOW_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_REC_OVERFLOW_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_REC_OVERFLOW_ERR_STATUS_MASK)

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_MALF_TLP_ERR_STATUS_MASK (0x40000U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_MALF_TLP_ERR_STATUS_SHIFT (18U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_MALF_TLP_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_MALF_TLP_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_MALF_TLP_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_MALF_TLP_ERR_STATUS_MASK)

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_ECRC_ERR_STATUS_MASK (0x80000U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_ECRC_ERR_STATUS_SHIFT (19U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_ECRC_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_ECRC_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_ECRC_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_ECRC_ERR_STATUS_MASK)

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_UNSUPPORTED_REQ_ERR_STATUS_MASK (0x100000U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_UNSUPPORTED_REQ_ERR_STATUS_SHIFT (20U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_UNSUPPORTED_REQ_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_UNSUPPORTED_REQ_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_UNSUPPORTED_REQ_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_UNSUPPORTED_REQ_ERR_STATUS_MASK)

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_INTERNAL_ERR_STATUS_MASK (0x400000U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_INTERNAL_ERR_STATUS_SHIFT (22U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_INTERNAL_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_INTERNAL_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_INTERNAL_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_INTERNAL_ERR_STATUS_MASK)

#define PCIE_RC_UNCORR_ERR_STATUS_OFF_TLP_PRFX_BLOCKED_ERR_STATUS_MASK (0x2000000U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_TLP_PRFX_BLOCKED_ERR_STATUS_SHIFT (25U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_TLP_PRFX_BLOCKED_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_STATUS_OFF_TLP_PRFX_BLOCKED_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_STATUS_OFF_TLP_PRFX_BLOCKED_ERR_STATUS_SHIFT)) & PCIE_RC_UNCORR_ERR_STATUS_OFF_TLP_PRFX_BLOCKED_ERR_STATUS_MASK)
/*! @} */

/*! @name UNCORR_ERR_MASK_OFF - Uncorrectable Error Mask */
/*! @{ */

#define PCIE_RC_UNCORR_ERR_MASK_OFF_DL_PROTOCOL_ERR_MASK_MASK (0x10U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_DL_PROTOCOL_ERR_MASK_SHIFT (4U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_DL_PROTOCOL_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_DL_PROTOCOL_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_DL_PROTOCOL_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_DL_PROTOCOL_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_SURPRISE_DOWN_ERR_MASK_MASK (0x20U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_SURPRISE_DOWN_ERR_MASK_SHIFT (5U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_SURPRISE_DOWN_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_SURPRISE_DOWN_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_SURPRISE_DOWN_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_SURPRISE_DOWN_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_POIS_TLP_ERR_MASK_MASK (0x1000U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_POIS_TLP_ERR_MASK_SHIFT (12U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_POIS_TLP_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_POIS_TLP_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_POIS_TLP_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_POIS_TLP_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_FC_PROTOCOL_ERR_MASK_MASK (0x2000U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_FC_PROTOCOL_ERR_MASK_SHIFT (13U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_FC_PROTOCOL_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_FC_PROTOCOL_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_FC_PROTOCOL_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_FC_PROTOCOL_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_CMPLT_TIMEOUT_ERR_MASK_MASK (0x4000U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_CMPLT_TIMEOUT_ERR_MASK_SHIFT (14U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_CMPLT_TIMEOUT_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_CMPLT_TIMEOUT_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_CMPLT_TIMEOUT_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_CMPLT_TIMEOUT_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_CMPLT_ABORT_ERR_MASK_MASK (0x8000U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_CMPLT_ABORT_ERR_MASK_SHIFT (15U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_CMPLT_ABORT_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_CMPLT_ABORT_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_CMPLT_ABORT_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_CMPLT_ABORT_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_UNEXP_CMPLT_ERR_MASK_MASK (0x10000U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_UNEXP_CMPLT_ERR_MASK_SHIFT (16U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_UNEXP_CMPLT_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_UNEXP_CMPLT_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_UNEXP_CMPLT_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_UNEXP_CMPLT_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_REC_OVERFLOW_ERR_MASK_MASK (0x20000U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_REC_OVERFLOW_ERR_MASK_SHIFT (17U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_REC_OVERFLOW_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_REC_OVERFLOW_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_REC_OVERFLOW_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_REC_OVERFLOW_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_MALF_TLP_ERR_MASK_MASK (0x40000U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_MALF_TLP_ERR_MASK_SHIFT (18U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_MALF_TLP_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_MALF_TLP_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_MALF_TLP_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_MALF_TLP_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_ECRC_ERR_MASK_MASK (0x80000U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_ECRC_ERR_MASK_SHIFT (19U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_ECRC_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_ECRC_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_ECRC_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_ECRC_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_UNSUPPORTED_REQ_ERR_MASK_MASK (0x100000U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_UNSUPPORTED_REQ_ERR_MASK_SHIFT (20U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_UNSUPPORTED_REQ_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_UNSUPPORTED_REQ_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_UNSUPPORTED_REQ_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_UNSUPPORTED_REQ_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_INTERNAL_ERR_MASK_MASK (0x400000U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_INTERNAL_ERR_MASK_SHIFT (22U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_INTERNAL_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_INTERNAL_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_INTERNAL_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_INTERNAL_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_ATOMIC_EGRESS_BLOCKED_ERR_MASK_MASK (0x1000000U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_ATOMIC_EGRESS_BLOCKED_ERR_MASK_SHIFT (24U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_ATOMIC_EGRESS_BLOCKED_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_ATOMIC_EGRESS_BLOCKED_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_ATOMIC_EGRESS_BLOCKED_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_ATOMIC_EGRESS_BLOCKED_ERR_MASK_MASK)

#define PCIE_RC_UNCORR_ERR_MASK_OFF_TLP_PRFX_BLOCKED_ERR_MASK_MASK (0x2000000U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_TLP_PRFX_BLOCKED_ERR_MASK_SHIFT (25U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_TLP_PRFX_BLOCKED_ERR_MASK_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_MASK_OFF_TLP_PRFX_BLOCKED_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_MASK_OFF_TLP_PRFX_BLOCKED_ERR_MASK_SHIFT)) & PCIE_RC_UNCORR_ERR_MASK_OFF_TLP_PRFX_BLOCKED_ERR_MASK_MASK)
/*! @} */

/*! @name UNCORR_ERR_SEV_OFF - Uncorrectable Error Severity */
/*! @{ */

#define PCIE_RC_UNCORR_ERR_SEV_OFF_DL_PROTOCOL_ERR_SEVERITY_MASK (0x10U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_DL_PROTOCOL_ERR_SEVERITY_SHIFT (4U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_DL_PROTOCOL_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_DL_PROTOCOL_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_DL_PROTOCOL_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_DL_PROTOCOL_ERR_SEVERITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_SURPRISE_DOWN_ERR_SVRITY_MASK (0x20U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_SURPRISE_DOWN_ERR_SVRITY_SHIFT (5U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_SURPRISE_DOWN_ERR_SVRITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_SURPRISE_DOWN_ERR_SVRITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_SURPRISE_DOWN_ERR_SVRITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_SURPRISE_DOWN_ERR_SVRITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_POIS_TLP_ERR_SEVERITY_MASK (0x1000U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_POIS_TLP_ERR_SEVERITY_SHIFT (12U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_POIS_TLP_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_POIS_TLP_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_POIS_TLP_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_POIS_TLP_ERR_SEVERITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_FC_PROTOCOL_ERR_SEVERITY_MASK (0x2000U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_FC_PROTOCOL_ERR_SEVERITY_SHIFT (13U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_FC_PROTOCOL_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_FC_PROTOCOL_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_FC_PROTOCOL_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_FC_PROTOCOL_ERR_SEVERITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_CMPLT_TIMEOUT_ERR_SEVERITY_MASK (0x4000U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_CMPLT_TIMEOUT_ERR_SEVERITY_SHIFT (14U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_CMPLT_TIMEOUT_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_CMPLT_TIMEOUT_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_CMPLT_TIMEOUT_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_CMPLT_TIMEOUT_ERR_SEVERITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_CMPLT_ABORT_ERR_SEVERITY_MASK (0x8000U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_CMPLT_ABORT_ERR_SEVERITY_SHIFT (15U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_CMPLT_ABORT_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_CMPLT_ABORT_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_CMPLT_ABORT_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_CMPLT_ABORT_ERR_SEVERITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_UNEXP_CMPLT_ERR_SEVERITY_MASK (0x10000U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_UNEXP_CMPLT_ERR_SEVERITY_SHIFT (16U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_UNEXP_CMPLT_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_UNEXP_CMPLT_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_UNEXP_CMPLT_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_UNEXP_CMPLT_ERR_SEVERITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_REC_OVERFLOW_ERR_SEVERITY_MASK (0x20000U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_REC_OVERFLOW_ERR_SEVERITY_SHIFT (17U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_REC_OVERFLOW_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_REC_OVERFLOW_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_REC_OVERFLOW_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_REC_OVERFLOW_ERR_SEVERITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_MALF_TLP_ERR_SEVERITY_MASK (0x40000U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_MALF_TLP_ERR_SEVERITY_SHIFT (18U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_MALF_TLP_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_MALF_TLP_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_MALF_TLP_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_MALF_TLP_ERR_SEVERITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_ECRC_ERR_SEVERITY_MASK (0x80000U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_ECRC_ERR_SEVERITY_SHIFT (19U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_ECRC_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_ECRC_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_ECRC_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_ECRC_ERR_SEVERITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_UNSUPPORTED_REQ_ERR_SEVERITY_MASK (0x100000U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_UNSUPPORTED_REQ_ERR_SEVERITY_SHIFT (20U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_UNSUPPORTED_REQ_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_UNSUPPORTED_REQ_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_UNSUPPORTED_REQ_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_UNSUPPORTED_REQ_ERR_SEVERITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_INTERNAL_ERR_SEVERITY_MASK (0x400000U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_INTERNAL_ERR_SEVERITY_SHIFT (22U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_INTERNAL_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_INTERNAL_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_INTERNAL_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_INTERNAL_ERR_SEVERITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_ATOMIC_EGRESS_BLOCKED_ERR_SEVERITY_MASK (0x1000000U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_ATOMIC_EGRESS_BLOCKED_ERR_SEVERITY_SHIFT (24U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_ATOMIC_EGRESS_BLOCKED_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_ATOMIC_EGRESS_BLOCKED_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_ATOMIC_EGRESS_BLOCKED_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_ATOMIC_EGRESS_BLOCKED_ERR_SEVERITY_MASK)

#define PCIE_RC_UNCORR_ERR_SEV_OFF_TLP_PRFX_BLOCKED_ERR_SEVERITY_MASK (0x2000000U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_TLP_PRFX_BLOCKED_ERR_SEVERITY_SHIFT (25U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_TLP_PRFX_BLOCKED_ERR_SEVERITY_WIDTH (1U)
#define PCIE_RC_UNCORR_ERR_SEV_OFF_TLP_PRFX_BLOCKED_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_UNCORR_ERR_SEV_OFF_TLP_PRFX_BLOCKED_ERR_SEVERITY_SHIFT)) & PCIE_RC_UNCORR_ERR_SEV_OFF_TLP_PRFX_BLOCKED_ERR_SEVERITY_MASK)
/*! @} */

/*! @name CORR_ERR_STATUS_OFF - Correctable Error Status */
/*! @{ */

#define PCIE_RC_CORR_ERR_STATUS_OFF_RX_ERR_STATUS_MASK (0x1U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_RX_ERR_STATUS_SHIFT (0U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_RX_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_RX_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_STATUS_OFF_RX_ERR_STATUS_SHIFT)) & PCIE_RC_CORR_ERR_STATUS_OFF_RX_ERR_STATUS_MASK)

#define PCIE_RC_CORR_ERR_STATUS_OFF_BAD_TLP_STATUS_MASK (0x40U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_BAD_TLP_STATUS_SHIFT (6U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_BAD_TLP_STATUS_WIDTH (1U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_BAD_TLP_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_STATUS_OFF_BAD_TLP_STATUS_SHIFT)) & PCIE_RC_CORR_ERR_STATUS_OFF_BAD_TLP_STATUS_MASK)

#define PCIE_RC_CORR_ERR_STATUS_OFF_BAD_DLLP_STATUS_MASK (0x80U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_BAD_DLLP_STATUS_SHIFT (7U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_BAD_DLLP_STATUS_WIDTH (1U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_BAD_DLLP_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_STATUS_OFF_BAD_DLLP_STATUS_SHIFT)) & PCIE_RC_CORR_ERR_STATUS_OFF_BAD_DLLP_STATUS_MASK)

#define PCIE_RC_CORR_ERR_STATUS_OFF_REPLAY_NO_ROLEOVER_STATUS_MASK (0x100U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_REPLAY_NO_ROLEOVER_STATUS_SHIFT (8U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_REPLAY_NO_ROLEOVER_STATUS_WIDTH (1U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_REPLAY_NO_ROLEOVER_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_STATUS_OFF_REPLAY_NO_ROLEOVER_STATUS_SHIFT)) & PCIE_RC_CORR_ERR_STATUS_OFF_REPLAY_NO_ROLEOVER_STATUS_MASK)

#define PCIE_RC_CORR_ERR_STATUS_OFF_RPL_TIMER_TIMEOUT_STATUS_MASK (0x1000U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_RPL_TIMER_TIMEOUT_STATUS_SHIFT (12U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_RPL_TIMER_TIMEOUT_STATUS_WIDTH (1U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_RPL_TIMER_TIMEOUT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_STATUS_OFF_RPL_TIMER_TIMEOUT_STATUS_SHIFT)) & PCIE_RC_CORR_ERR_STATUS_OFF_RPL_TIMER_TIMEOUT_STATUS_MASK)

#define PCIE_RC_CORR_ERR_STATUS_OFF_ADVISORY_NON_FATAL_ERR_STATUS_MASK (0x2000U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_ADVISORY_NON_FATAL_ERR_STATUS_SHIFT (13U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_ADVISORY_NON_FATAL_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_ADVISORY_NON_FATAL_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_STATUS_OFF_ADVISORY_NON_FATAL_ERR_STATUS_SHIFT)) & PCIE_RC_CORR_ERR_STATUS_OFF_ADVISORY_NON_FATAL_ERR_STATUS_MASK)

#define PCIE_RC_CORR_ERR_STATUS_OFF_CORRECTED_INT_ERR_STATUS_MASK (0x4000U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_CORRECTED_INT_ERR_STATUS_SHIFT (14U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_CORRECTED_INT_ERR_STATUS_WIDTH (1U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_CORRECTED_INT_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_STATUS_OFF_CORRECTED_INT_ERR_STATUS_SHIFT)) & PCIE_RC_CORR_ERR_STATUS_OFF_CORRECTED_INT_ERR_STATUS_MASK)

#define PCIE_RC_CORR_ERR_STATUS_OFF_HEADER_LOG_OVERFLOW_STATUS_MASK (0x8000U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_HEADER_LOG_OVERFLOW_STATUS_SHIFT (15U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_HEADER_LOG_OVERFLOW_STATUS_WIDTH (1U)
#define PCIE_RC_CORR_ERR_STATUS_OFF_HEADER_LOG_OVERFLOW_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_STATUS_OFF_HEADER_LOG_OVERFLOW_STATUS_SHIFT)) & PCIE_RC_CORR_ERR_STATUS_OFF_HEADER_LOG_OVERFLOW_STATUS_MASK)
/*! @} */

/*! @name CORR_ERR_MASK_OFF - Correctable Error Mask */
/*! @{ */

#define PCIE_RC_CORR_ERR_MASK_OFF_RX_ERR_MASK_MASK (0x1U)
#define PCIE_RC_CORR_ERR_MASK_OFF_RX_ERR_MASK_SHIFT (0U)
#define PCIE_RC_CORR_ERR_MASK_OFF_RX_ERR_MASK_WIDTH (1U)
#define PCIE_RC_CORR_ERR_MASK_OFF_RX_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_MASK_OFF_RX_ERR_MASK_SHIFT)) & PCIE_RC_CORR_ERR_MASK_OFF_RX_ERR_MASK_MASK)

#define PCIE_RC_CORR_ERR_MASK_OFF_BAD_TLP_MASK_MASK (0x40U)
#define PCIE_RC_CORR_ERR_MASK_OFF_BAD_TLP_MASK_SHIFT (6U)
#define PCIE_RC_CORR_ERR_MASK_OFF_BAD_TLP_MASK_WIDTH (1U)
#define PCIE_RC_CORR_ERR_MASK_OFF_BAD_TLP_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_MASK_OFF_BAD_TLP_MASK_SHIFT)) & PCIE_RC_CORR_ERR_MASK_OFF_BAD_TLP_MASK_MASK)

#define PCIE_RC_CORR_ERR_MASK_OFF_BAD_DLLP_MASK_MASK (0x80U)
#define PCIE_RC_CORR_ERR_MASK_OFF_BAD_DLLP_MASK_SHIFT (7U)
#define PCIE_RC_CORR_ERR_MASK_OFF_BAD_DLLP_MASK_WIDTH (1U)
#define PCIE_RC_CORR_ERR_MASK_OFF_BAD_DLLP_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_MASK_OFF_BAD_DLLP_MASK_SHIFT)) & PCIE_RC_CORR_ERR_MASK_OFF_BAD_DLLP_MASK_MASK)

#define PCIE_RC_CORR_ERR_MASK_OFF_REPLAY_NO_ROLEOVER_MASK_MASK (0x100U)
#define PCIE_RC_CORR_ERR_MASK_OFF_REPLAY_NO_ROLEOVER_MASK_SHIFT (8U)
#define PCIE_RC_CORR_ERR_MASK_OFF_REPLAY_NO_ROLEOVER_MASK_WIDTH (1U)
#define PCIE_RC_CORR_ERR_MASK_OFF_REPLAY_NO_ROLEOVER_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_MASK_OFF_REPLAY_NO_ROLEOVER_MASK_SHIFT)) & PCIE_RC_CORR_ERR_MASK_OFF_REPLAY_NO_ROLEOVER_MASK_MASK)

#define PCIE_RC_CORR_ERR_MASK_OFF_RPL_TIMER_TIMEOUT_MASK_MASK (0x1000U)
#define PCIE_RC_CORR_ERR_MASK_OFF_RPL_TIMER_TIMEOUT_MASK_SHIFT (12U)
#define PCIE_RC_CORR_ERR_MASK_OFF_RPL_TIMER_TIMEOUT_MASK_WIDTH (1U)
#define PCIE_RC_CORR_ERR_MASK_OFF_RPL_TIMER_TIMEOUT_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_MASK_OFF_RPL_TIMER_TIMEOUT_MASK_SHIFT)) & PCIE_RC_CORR_ERR_MASK_OFF_RPL_TIMER_TIMEOUT_MASK_MASK)

#define PCIE_RC_CORR_ERR_MASK_OFF_ADVISORY_NON_FATAL_ERR_MASK_MASK (0x2000U)
#define PCIE_RC_CORR_ERR_MASK_OFF_ADVISORY_NON_FATAL_ERR_MASK_SHIFT (13U)
#define PCIE_RC_CORR_ERR_MASK_OFF_ADVISORY_NON_FATAL_ERR_MASK_WIDTH (1U)
#define PCIE_RC_CORR_ERR_MASK_OFF_ADVISORY_NON_FATAL_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_MASK_OFF_ADVISORY_NON_FATAL_ERR_MASK_SHIFT)) & PCIE_RC_CORR_ERR_MASK_OFF_ADVISORY_NON_FATAL_ERR_MASK_MASK)

#define PCIE_RC_CORR_ERR_MASK_OFF_CORRECTED_INT_ERR_MASK_MASK (0x4000U)
#define PCIE_RC_CORR_ERR_MASK_OFF_CORRECTED_INT_ERR_MASK_SHIFT (14U)
#define PCIE_RC_CORR_ERR_MASK_OFF_CORRECTED_INT_ERR_MASK_WIDTH (1U)
#define PCIE_RC_CORR_ERR_MASK_OFF_CORRECTED_INT_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_MASK_OFF_CORRECTED_INT_ERR_MASK_SHIFT)) & PCIE_RC_CORR_ERR_MASK_OFF_CORRECTED_INT_ERR_MASK_MASK)

#define PCIE_RC_CORR_ERR_MASK_OFF_HEADER_LOG_OVERFLOW_MASK_MASK (0x8000U)
#define PCIE_RC_CORR_ERR_MASK_OFF_HEADER_LOG_OVERFLOW_MASK_SHIFT (15U)
#define PCIE_RC_CORR_ERR_MASK_OFF_HEADER_LOG_OVERFLOW_MASK_WIDTH (1U)
#define PCIE_RC_CORR_ERR_MASK_OFF_HEADER_LOG_OVERFLOW_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CORR_ERR_MASK_OFF_HEADER_LOG_OVERFLOW_MASK_SHIFT)) & PCIE_RC_CORR_ERR_MASK_OFF_HEADER_LOG_OVERFLOW_MASK_MASK)
/*! @} */

/*! @name ADV_ERR_CAP_CTRL_OFF - Advanced Error Capabilities and Control */
/*! @{ */

#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_FIRST_ERR_POINTER_MASK (0x1FU)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_FIRST_ERR_POINTER_SHIFT (0U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_FIRST_ERR_POINTER_WIDTH (5U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_FIRST_ERR_POINTER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ADV_ERR_CAP_CTRL_OFF_FIRST_ERR_POINTER_SHIFT)) & PCIE_RC_ADV_ERR_CAP_CTRL_OFF_FIRST_ERR_POINTER_MASK)

#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_CAP_MASK (0x20U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_CAP_SHIFT (5U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_CAP_WIDTH (1U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_CAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_CAP_SHIFT)) & PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_CAP_MASK)

#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_EN_MASK (0x40U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_EN_SHIFT (6U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_EN_WIDTH (1U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_EN_SHIFT)) & PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_EN_MASK)

#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_CAP_MASK (0x80U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_CAP_SHIFT (7U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_CAP_WIDTH (1U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_CAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_CAP_SHIFT)) & PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_CAP_MASK)

#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_EN_MASK (0x100U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_EN_SHIFT (8U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_EN_WIDTH (1U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_EN_SHIFT)) & PCIE_RC_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_EN_MASK)

#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_CAP_MASK (0x200U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_CAP_SHIFT (9U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_CAP_WIDTH (1U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_CAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_CAP_SHIFT)) & PCIE_RC_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_CAP_MASK)

#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_EN_MASK (0x400U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_EN_SHIFT (10U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_EN_WIDTH (1U)
#define PCIE_RC_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_EN_SHIFT)) & PCIE_RC_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_EN_MASK)
/*! @} */

/*! @name HDR_LOG_0_OFF - Header Log Register 0 */
/*! @{ */

#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_FIRST_BYTE_MASK (0xFFU)
#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_FIRST_BYTE_SHIFT (0U)
#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_FIRST_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_FIRST_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_FIRST_BYTE_MASK)

#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_SECOND_BYTE_MASK (0xFF00U)
#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_SECOND_BYTE_SHIFT (8U)
#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_SECOND_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_SECOND_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_SECOND_BYTE_MASK)

#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_THIRD_BYTE_MASK (0xFF0000U)
#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_THIRD_BYTE_SHIFT (16U)
#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_THIRD_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_THIRD_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_THIRD_BYTE_MASK)

#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_FOURTH_BYTE_MASK (0xFF000000U)
#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_FOURTH_BYTE_SHIFT (24U)
#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_FOURTH_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_FOURTH_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_0_OFF_FIRST_DWORD_FOURTH_BYTE_MASK)
/*! @} */

/*! @name HDR_LOG_1_OFF - Header Log Register 1 */
/*! @{ */

#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_FIRST_BYTE_MASK (0xFFU)
#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_FIRST_BYTE_SHIFT (0U)
#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_FIRST_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_FIRST_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_FIRST_BYTE_MASK)

#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_SECOND_BYTE_MASK (0xFF00U)
#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_SECOND_BYTE_SHIFT (8U)
#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_SECOND_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_SECOND_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_SECOND_BYTE_MASK)

#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_THIRD_BYTE_MASK (0xFF0000U)
#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_THIRD_BYTE_SHIFT (16U)
#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_THIRD_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_THIRD_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_THIRD_BYTE_MASK)

#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_FOURTH_BYTE_MASK (0xFF000000U)
#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_FOURTH_BYTE_SHIFT (24U)
#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_FOURTH_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_FOURTH_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_1_OFF_SECOND_DWORD_FOURTH_BYTE_MASK)
/*! @} */

/*! @name HDR_LOG_2_OFF - Header Log Register 2 */
/*! @{ */

#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_FIRST_BYTE_MASK (0xFFU)
#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_FIRST_BYTE_SHIFT (0U)
#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_FIRST_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_FIRST_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_FIRST_BYTE_MASK)

#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_SECOND_BYTE_MASK (0xFF00U)
#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_SECOND_BYTE_SHIFT (8U)
#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_SECOND_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_SECOND_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_SECOND_BYTE_MASK)

#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_THIRD_BYTE_MASK (0xFF0000U)
#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_THIRD_BYTE_SHIFT (16U)
#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_THIRD_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_THIRD_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_THIRD_BYTE_MASK)

#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_FOURTH_BYTE_MASK (0xFF000000U)
#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_FOURTH_BYTE_SHIFT (24U)
#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_FOURTH_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_FOURTH_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_2_OFF_THIRD_DWORD_FOURTH_BYTE_MASK)
/*! @} */

/*! @name HDR_LOG_3_OFF - Header Log Register 3 */
/*! @{ */

#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_FIRST_BYTE_MASK (0xFFU)
#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_FIRST_BYTE_SHIFT (0U)
#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_FIRST_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_FIRST_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_FIRST_BYTE_MASK)

#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_SECOND_BYTE_MASK (0xFF00U)
#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_SECOND_BYTE_SHIFT (8U)
#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_SECOND_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_SECOND_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_SECOND_BYTE_MASK)

#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_THIRD_BYTE_MASK (0xFF0000U)
#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_THIRD_BYTE_SHIFT (16U)
#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_THIRD_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_THIRD_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_THIRD_BYTE_MASK)

#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_FOURTH_BYTE_MASK (0xFF000000U)
#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_FOURTH_BYTE_SHIFT (24U)
#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_FOURTH_BYTE_WIDTH (8U)
#define PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_FOURTH_BYTE_SHIFT)) & PCIE_RC_HDR_LOG_3_OFF_FOURTH_DWORD_FOURTH_BYTE_MASK)
/*! @} */

/*! @name ROOT_ERR_CMD_OFF - Root Error Command */
/*! @{ */

#define PCIE_RC_ROOT_ERR_CMD_OFF_CORR_ERR_REPORTING_EN_MASK (0x1U)
#define PCIE_RC_ROOT_ERR_CMD_OFF_CORR_ERR_REPORTING_EN_SHIFT (0U)
#define PCIE_RC_ROOT_ERR_CMD_OFF_CORR_ERR_REPORTING_EN_WIDTH (1U)
#define PCIE_RC_ROOT_ERR_CMD_OFF_CORR_ERR_REPORTING_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_ERR_CMD_OFF_CORR_ERR_REPORTING_EN_SHIFT)) & PCIE_RC_ROOT_ERR_CMD_OFF_CORR_ERR_REPORTING_EN_MASK)

#define PCIE_RC_ROOT_ERR_CMD_OFF_NON_FATAL_ERR_REPORTING_EN_MASK (0x2U)
#define PCIE_RC_ROOT_ERR_CMD_OFF_NON_FATAL_ERR_REPORTING_EN_SHIFT (1U)
#define PCIE_RC_ROOT_ERR_CMD_OFF_NON_FATAL_ERR_REPORTING_EN_WIDTH (1U)
#define PCIE_RC_ROOT_ERR_CMD_OFF_NON_FATAL_ERR_REPORTING_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_ERR_CMD_OFF_NON_FATAL_ERR_REPORTING_EN_SHIFT)) & PCIE_RC_ROOT_ERR_CMD_OFF_NON_FATAL_ERR_REPORTING_EN_MASK)

#define PCIE_RC_ROOT_ERR_CMD_OFF_FATAL_ERR_REPORTING_EN_MASK (0x4U)
#define PCIE_RC_ROOT_ERR_CMD_OFF_FATAL_ERR_REPORTING_EN_SHIFT (2U)
#define PCIE_RC_ROOT_ERR_CMD_OFF_FATAL_ERR_REPORTING_EN_WIDTH (1U)
#define PCIE_RC_ROOT_ERR_CMD_OFF_FATAL_ERR_REPORTING_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_ERR_CMD_OFF_FATAL_ERR_REPORTING_EN_SHIFT)) & PCIE_RC_ROOT_ERR_CMD_OFF_FATAL_ERR_REPORTING_EN_MASK)
/*! @} */

/*! @name ROOT_ERR_STATUS_OFF - Root Error Status */
/*! @{ */

#define PCIE_RC_ROOT_ERR_STATUS_OFF_ERR_COR_RX_MASK (0x1U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_ERR_COR_RX_SHIFT (0U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_ERR_COR_RX_WIDTH (1U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_ERR_COR_RX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_ERR_STATUS_OFF_ERR_COR_RX_SHIFT)) & PCIE_RC_ROOT_ERR_STATUS_OFF_ERR_COR_RX_MASK)

#define PCIE_RC_ROOT_ERR_STATUS_OFF_MUL_ERR_COR_RX_MASK (0x2U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_MUL_ERR_COR_RX_SHIFT (1U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_MUL_ERR_COR_RX_WIDTH (1U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_MUL_ERR_COR_RX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_ERR_STATUS_OFF_MUL_ERR_COR_RX_SHIFT)) & PCIE_RC_ROOT_ERR_STATUS_OFF_MUL_ERR_COR_RX_MASK)

#define PCIE_RC_ROOT_ERR_STATUS_OFF_ERR_FATAL_NON_FATAL_RX_MASK (0x4U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_ERR_FATAL_NON_FATAL_RX_SHIFT (2U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_ERR_FATAL_NON_FATAL_RX_WIDTH (1U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_ERR_FATAL_NON_FATAL_RX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_ERR_STATUS_OFF_ERR_FATAL_NON_FATAL_RX_SHIFT)) & PCIE_RC_ROOT_ERR_STATUS_OFF_ERR_FATAL_NON_FATAL_RX_MASK)

#define PCIE_RC_ROOT_ERR_STATUS_OFF_MUL_ERR_FATAL_NON_FATAL_RX_MASK (0x8U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_MUL_ERR_FATAL_NON_FATAL_RX_SHIFT (3U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_MUL_ERR_FATAL_NON_FATAL_RX_WIDTH (1U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_MUL_ERR_FATAL_NON_FATAL_RX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_ERR_STATUS_OFF_MUL_ERR_FATAL_NON_FATAL_RX_SHIFT)) & PCIE_RC_ROOT_ERR_STATUS_OFF_MUL_ERR_FATAL_NON_FATAL_RX_MASK)

#define PCIE_RC_ROOT_ERR_STATUS_OFF_FIRST_UNCORR_FATAL_MASK (0x10U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_FIRST_UNCORR_FATAL_SHIFT (4U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_FIRST_UNCORR_FATAL_WIDTH (1U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_FIRST_UNCORR_FATAL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_ERR_STATUS_OFF_FIRST_UNCORR_FATAL_SHIFT)) & PCIE_RC_ROOT_ERR_STATUS_OFF_FIRST_UNCORR_FATAL_MASK)

#define PCIE_RC_ROOT_ERR_STATUS_OFF_NON_FATAL_ERR_MSG_RX_MASK (0x20U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_NON_FATAL_ERR_MSG_RX_SHIFT (5U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_NON_FATAL_ERR_MSG_RX_WIDTH (1U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_NON_FATAL_ERR_MSG_RX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_ERR_STATUS_OFF_NON_FATAL_ERR_MSG_RX_SHIFT)) & PCIE_RC_ROOT_ERR_STATUS_OFF_NON_FATAL_ERR_MSG_RX_MASK)

#define PCIE_RC_ROOT_ERR_STATUS_OFF_FATAL_ERR_MSG_RX_MASK (0x40U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_FATAL_ERR_MSG_RX_SHIFT (6U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_FATAL_ERR_MSG_RX_WIDTH (1U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_FATAL_ERR_MSG_RX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_ERR_STATUS_OFF_FATAL_ERR_MSG_RX_SHIFT)) & PCIE_RC_ROOT_ERR_STATUS_OFF_FATAL_ERR_MSG_RX_MASK)

#define PCIE_RC_ROOT_ERR_STATUS_OFF_ADV_ERR_INT_MSG_NUM_MASK (0xF8000000U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_ADV_ERR_INT_MSG_NUM_SHIFT (27U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_ADV_ERR_INT_MSG_NUM_WIDTH (5U)
#define PCIE_RC_ROOT_ERR_STATUS_OFF_ADV_ERR_INT_MSG_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ROOT_ERR_STATUS_OFF_ADV_ERR_INT_MSG_NUM_SHIFT)) & PCIE_RC_ROOT_ERR_STATUS_OFF_ADV_ERR_INT_MSG_NUM_MASK)
/*! @} */

/*! @name ERR_SRC_ID_OFF - Error Source Identification */
/*! @{ */

#define PCIE_RC_ERR_SRC_ID_OFF_ERR_COR_SOURCE_ID_MASK (0xFFFFU)
#define PCIE_RC_ERR_SRC_ID_OFF_ERR_COR_SOURCE_ID_SHIFT (0U)
#define PCIE_RC_ERR_SRC_ID_OFF_ERR_COR_SOURCE_ID_WIDTH (16U)
#define PCIE_RC_ERR_SRC_ID_OFF_ERR_COR_SOURCE_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ERR_SRC_ID_OFF_ERR_COR_SOURCE_ID_SHIFT)) & PCIE_RC_ERR_SRC_ID_OFF_ERR_COR_SOURCE_ID_MASK)

#define PCIE_RC_ERR_SRC_ID_OFF_ERR_FATAL_NON_FATAL_SOURCE_ID_MASK (0xFFFF0000U)
#define PCIE_RC_ERR_SRC_ID_OFF_ERR_FATAL_NON_FATAL_SOURCE_ID_SHIFT (16U)
#define PCIE_RC_ERR_SRC_ID_OFF_ERR_FATAL_NON_FATAL_SOURCE_ID_WIDTH (16U)
#define PCIE_RC_ERR_SRC_ID_OFF_ERR_FATAL_NON_FATAL_SOURCE_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ERR_SRC_ID_OFF_ERR_FATAL_NON_FATAL_SOURCE_ID_SHIFT)) & PCIE_RC_ERR_SRC_ID_OFF_ERR_FATAL_NON_FATAL_SOURCE_ID_MASK)
/*! @} */

/*! @name TLP_PREFIX_LOG_1_OFF - TLP Prefix Log Register 1 */
/*! @{ */

#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FIRST_BYTE_MASK (0xFFU)
#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FIRST_BYTE_SHIFT (0U)
#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FIRST_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FIRST_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FIRST_BYTE_MASK)

#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_SECOND_BYTE_MASK (0xFF00U)
#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_SECOND_BYTE_SHIFT (8U)
#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_SECOND_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_SECOND_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_SECOND_BYTE_MASK)

#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_THIRD_BYTE_MASK (0xFF0000U)
#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_THIRD_BYTE_SHIFT (16U)
#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_THIRD_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_THIRD_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_THIRD_BYTE_MASK)

#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FOURTH_BYTE_MASK (0xFF000000U)
#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FOURTH_BYTE_SHIFT (24U)
#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FOURTH_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FOURTH_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FOURTH_BYTE_MASK)
/*! @} */

/*! @name TLP_PREFIX_LOG_2_OFF - TLP Prefix Log Register 2 */
/*! @{ */

#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FIRST_BYTE_MASK (0xFFU)
#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FIRST_BYTE_SHIFT (0U)
#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FIRST_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FIRST_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FIRST_BYTE_MASK)

#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_SECOND_BYTE_MASK (0xFF00U)
#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_SECOND_BYTE_SHIFT (8U)
#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_SECOND_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_SECOND_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_SECOND_BYTE_MASK)

#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_THIRD_BYTE_MASK (0xFF0000U)
#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_THIRD_BYTE_SHIFT (16U)
#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_THIRD_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_THIRD_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_THIRD_BYTE_MASK)

#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FOURTH_BYTE_MASK (0xFF000000U)
#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FOURTH_BYTE_SHIFT (24U)
#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FOURTH_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FOURTH_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FOURTH_BYTE_MASK)
/*! @} */

/*! @name TLP_PREFIX_LOG_3_OFF - TLP Prefix Log Register 3 */
/*! @{ */

#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FIRST_BYTE_MASK (0xFFU)
#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FIRST_BYTE_SHIFT (0U)
#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FIRST_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FIRST_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FIRST_BYTE_MASK)

#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_SECOND_BYTE_MASK (0xFF00U)
#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_SECOND_BYTE_SHIFT (8U)
#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_SECOND_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_SECOND_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_SECOND_BYTE_MASK)

#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_THIRD_BYTE_MASK (0xFF0000U)
#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_THIRD_BYTE_SHIFT (16U)
#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_THIRD_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_THIRD_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_THIRD_BYTE_MASK)

#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FOURTH_BYTE_MASK (0xFF000000U)
#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FOURTH_BYTE_SHIFT (24U)
#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FOURTH_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FOURTH_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FOURTH_BYTE_MASK)
/*! @} */

/*! @name TLP_PREFIX_LOG_4_OFF - TLP Prefix Log Register 4 */
/*! @{ */

#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FIRST_BYTE_MASK (0xFFU)
#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FIRST_BYTE_SHIFT (0U)
#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FIRST_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FIRST_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FIRST_BYTE_MASK)

#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_SECOND_BYTE_MASK (0xFF00U)
#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_SECOND_BYTE_SHIFT (8U)
#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_SECOND_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_SECOND_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_SECOND_BYTE_MASK)

#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_THIRD_BYTE_MASK (0xFF0000U)
#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_THIRD_BYTE_SHIFT (16U)
#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_THIRD_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_THIRD_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_THIRD_BYTE_MASK)

#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FOURTH_BYTE_MASK (0xFF000000U)
#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FOURTH_BYTE_SHIFT (24U)
#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FOURTH_BYTE_WIDTH (8U)
#define PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FOURTH_BYTE_SHIFT)) & PCIE_RC_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FOURTH_BYTE_MASK)
/*! @} */

/*! @name SPCIE_CAP_HEADER_REG - SPCIE Capability Header */
/*! @{ */

#define PCIE_RC_SPCIE_CAP_HEADER_REG_EXTENDED_CAP_ID_MASK (0xFFFFU)
#define PCIE_RC_SPCIE_CAP_HEADER_REG_EXTENDED_CAP_ID_SHIFT (0U)
#define PCIE_RC_SPCIE_CAP_HEADER_REG_EXTENDED_CAP_ID_WIDTH (16U)
#define PCIE_RC_SPCIE_CAP_HEADER_REG_EXTENDED_CAP_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SPCIE_CAP_HEADER_REG_EXTENDED_CAP_ID_SHIFT)) & PCIE_RC_SPCIE_CAP_HEADER_REG_EXTENDED_CAP_ID_MASK)

#define PCIE_RC_SPCIE_CAP_HEADER_REG_CAP_VERSION_MASK (0xF0000U)
#define PCIE_RC_SPCIE_CAP_HEADER_REG_CAP_VERSION_SHIFT (16U)
#define PCIE_RC_SPCIE_CAP_HEADER_REG_CAP_VERSION_WIDTH (4U)
#define PCIE_RC_SPCIE_CAP_HEADER_REG_CAP_VERSION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SPCIE_CAP_HEADER_REG_CAP_VERSION_SHIFT)) & PCIE_RC_SPCIE_CAP_HEADER_REG_CAP_VERSION_MASK)

#define PCIE_RC_SPCIE_CAP_HEADER_REG_NEXT_OFFSET_MASK (0xFFF00000U)
#define PCIE_RC_SPCIE_CAP_HEADER_REG_NEXT_OFFSET_SHIFT (20U)
#define PCIE_RC_SPCIE_CAP_HEADER_REG_NEXT_OFFSET_WIDTH (12U)
#define PCIE_RC_SPCIE_CAP_HEADER_REG_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SPCIE_CAP_HEADER_REG_NEXT_OFFSET_SHIFT)) & PCIE_RC_SPCIE_CAP_HEADER_REG_NEXT_OFFSET_MASK)
/*! @} */

/*! @name LINK_CONTROL3_REG - Link control 3 */
/*! @{ */

#define PCIE_RC_LINK_CONTROL3_REG_PERFORM_EQ_MASK (0x1U)
#define PCIE_RC_LINK_CONTROL3_REG_PERFORM_EQ_SHIFT (0U)
#define PCIE_RC_LINK_CONTROL3_REG_PERFORM_EQ_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL3_REG_PERFORM_EQ(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL3_REG_PERFORM_EQ_SHIFT)) & PCIE_RC_LINK_CONTROL3_REG_PERFORM_EQ_MASK)

#define PCIE_RC_LINK_CONTROL3_REG_EQ_REQ_INT_EN_MASK (0x2U)
#define PCIE_RC_LINK_CONTROL3_REG_EQ_REQ_INT_EN_SHIFT (1U)
#define PCIE_RC_LINK_CONTROL3_REG_EQ_REQ_INT_EN_WIDTH (1U)
#define PCIE_RC_LINK_CONTROL3_REG_EQ_REQ_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_CONTROL3_REG_EQ_REQ_INT_EN_SHIFT)) & PCIE_RC_LINK_CONTROL3_REG_EQ_REQ_INT_EN_MASK)
/*! @} */

/*! @name LANE_ERR_STATUS_REG - Lane Error Status */
/*! @{ */

#define PCIE_RC_LANE_ERR_STATUS_REG_LANE_ERR_STATUS_MASK (0x3U)
#define PCIE_RC_LANE_ERR_STATUS_REG_LANE_ERR_STATUS_SHIFT (0U)
#define PCIE_RC_LANE_ERR_STATUS_REG_LANE_ERR_STATUS_WIDTH (2U)
#define PCIE_RC_LANE_ERR_STATUS_REG_LANE_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LANE_ERR_STATUS_REG_LANE_ERR_STATUS_SHIFT)) & PCIE_RC_LANE_ERR_STATUS_REG_LANE_ERR_STATUS_MASK)
/*! @} */

/*! @name SPCIE_CAP_OFF_0CH_REG - Lane Equalization Control Register For Lanes 1 And 0 */
/*! @{ */

#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET0_MASK (0xFU)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET0_SHIFT (0U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET0_WIDTH (4U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET0_SHIFT)) & PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET0_MASK)

#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT0_MASK (0x70U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT0_SHIFT (4U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT0_WIDTH (3U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT0_SHIFT)) & PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT0_MASK)

#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET0_MASK (0xF00U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET0_SHIFT (8U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET0_WIDTH (4U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET0_SHIFT)) & PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET0_MASK)

#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT0_MASK (0x7000U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT0_SHIFT (12U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT0_WIDTH (3U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT0_SHIFT)) & PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT0_MASK)

#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET1_MASK (0xF0000U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET1_SHIFT (16U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET1_WIDTH (4U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET1_SHIFT)) & PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET1_MASK)

#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT1_MASK (0x700000U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT1_SHIFT (20U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT1_WIDTH (3U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT1_SHIFT)) & PCIE_RC_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT1_MASK)

#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET1_MASK (0xF000000U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET1_SHIFT (24U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET1_WIDTH (4U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET1_SHIFT)) & PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET1_MASK)

#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT1_MASK (0x70000000U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT1_SHIFT (28U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT1_WIDTH (3U)
#define PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT1_SHIFT)) & PCIE_RC_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT1_MASK)
/*! @} */

/*! @name RAS_DES_CAP_HEADER_REG - Vendor-Specific Extended Capability Header */
/*! @{ */

#define PCIE_RC_RAS_DES_CAP_HEADER_REG_EXTENDED_CAP_ID_MASK (0xFFFFU)
#define PCIE_RC_RAS_DES_CAP_HEADER_REG_EXTENDED_CAP_ID_SHIFT (0U)
#define PCIE_RC_RAS_DES_CAP_HEADER_REG_EXTENDED_CAP_ID_WIDTH (16U)
#define PCIE_RC_RAS_DES_CAP_HEADER_REG_EXTENDED_CAP_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RAS_DES_CAP_HEADER_REG_EXTENDED_CAP_ID_SHIFT)) & PCIE_RC_RAS_DES_CAP_HEADER_REG_EXTENDED_CAP_ID_MASK)

#define PCIE_RC_RAS_DES_CAP_HEADER_REG_CAP_VERSION_MASK (0xF0000U)
#define PCIE_RC_RAS_DES_CAP_HEADER_REG_CAP_VERSION_SHIFT (16U)
#define PCIE_RC_RAS_DES_CAP_HEADER_REG_CAP_VERSION_WIDTH (4U)
#define PCIE_RC_RAS_DES_CAP_HEADER_REG_CAP_VERSION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RAS_DES_CAP_HEADER_REG_CAP_VERSION_SHIFT)) & PCIE_RC_RAS_DES_CAP_HEADER_REG_CAP_VERSION_MASK)

#define PCIE_RC_RAS_DES_CAP_HEADER_REG_NEXT_OFFSET_MASK (0xFFF00000U)
#define PCIE_RC_RAS_DES_CAP_HEADER_REG_NEXT_OFFSET_SHIFT (20U)
#define PCIE_RC_RAS_DES_CAP_HEADER_REG_NEXT_OFFSET_WIDTH (12U)
#define PCIE_RC_RAS_DES_CAP_HEADER_REG_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RAS_DES_CAP_HEADER_REG_NEXT_OFFSET_SHIFT)) & PCIE_RC_RAS_DES_CAP_HEADER_REG_NEXT_OFFSET_MASK)
/*! @} */

/*! @name VENDOR_SPECIFIC_HEADER_REG - Vendor-Specific Header */
/*! @{ */

#define PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_ID_MASK (0xFFFFU)
#define PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_ID_SHIFT (0U)
#define PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_ID_WIDTH (16U)
#define PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_ID_SHIFT)) & PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_ID_MASK)

#define PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_REV_MASK (0xF0000U)
#define PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_REV_SHIFT (16U)
#define PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_REV_WIDTH (4U)
#define PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_REV(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_REV_SHIFT)) & PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_REV_MASK)

#define PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_LENGTH_MASK (0xFFF00000U)
#define PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_LENGTH_SHIFT (20U)
#define PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_LENGTH_WIDTH (12U)
#define PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_LENGTH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_LENGTH_SHIFT)) & PCIE_RC_VENDOR_SPECIFIC_HEADER_REG_VSEC_LENGTH_MASK)
/*! @} */

/*! @name EVENT_COUNTER_CONTROL_REG - Event Counter Control */
/*! @{ */

#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_CLEAR_MASK (0x3U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_CLEAR_SHIFT (0U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_CLEAR_WIDTH (2U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_CLEAR_SHIFT)) & PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_CLEAR_MASK)

#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_ENABLE_MASK (0x1CU)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_ENABLE_SHIFT (2U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_ENABLE_WIDTH (3U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_ENABLE_SHIFT)) & PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_ENABLE_MASK)

#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_STATUS_MASK (0x80U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_STATUS_SHIFT (7U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_STATUS_WIDTH (1U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_STATUS_SHIFT)) & PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_STATUS_MASK)

#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_LANE_SELECT_MASK (0xF00U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_LANE_SELECT_SHIFT (8U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_LANE_SELECT_WIDTH (4U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_LANE_SELECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_LANE_SELECT_SHIFT)) & PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_LANE_SELECT_MASK)

#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_EVENT_SELECT_MASK (0xFFF0000U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_EVENT_SELECT_SHIFT (16U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_EVENT_SELECT_WIDTH (12U)
#define PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_EVENT_SELECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_EVENT_SELECT_SHIFT)) & PCIE_RC_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_EVENT_SELECT_MASK)
/*! @} */

/*! @name EVENT_COUNTER_DATA_REG - Event Counter Data */
/*! @{ */

#define PCIE_RC_EVENT_COUNTER_DATA_REG_EVENT_COUNTER_DATA_MASK (0xFFFFFFFFU)
#define PCIE_RC_EVENT_COUNTER_DATA_REG_EVENT_COUNTER_DATA_SHIFT (0U)
#define PCIE_RC_EVENT_COUNTER_DATA_REG_EVENT_COUNTER_DATA_WIDTH (32U)
#define PCIE_RC_EVENT_COUNTER_DATA_REG_EVENT_COUNTER_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EVENT_COUNTER_DATA_REG_EVENT_COUNTER_DATA_SHIFT)) & PCIE_RC_EVENT_COUNTER_DATA_REG_EVENT_COUNTER_DATA_MASK)
/*! @} */

/*! @name TIME_BASED_ANALYSIS_CONTROL_REG - Time-based Analysis Control */
/*! @{ */

#define PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIMER_START_MASK (0x1U)
#define PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIMER_START_SHIFT (0U)
#define PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIMER_START_WIDTH (1U)
#define PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIMER_START(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIMER_START_SHIFT)) & PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIMER_START_MASK)

#define PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_DURATION_SELECT_MASK (0xFF00U)
#define PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_DURATION_SELECT_SHIFT (8U)
#define PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_DURATION_SELECT_WIDTH (8U)
#define PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_DURATION_SELECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_DURATION_SELECT_SHIFT)) & PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_DURATION_SELECT_MASK)

#define PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_REPORT_SELECT_MASK (0xFF000000U)
#define PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_REPORT_SELECT_SHIFT (24U)
#define PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_REPORT_SELECT_WIDTH (8U)
#define PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_REPORT_SELECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_REPORT_SELECT_SHIFT)) & PCIE_RC_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_REPORT_SELECT_MASK)
/*! @} */

/*! @name TIME_BASED_ANALYSIS_DATA_REG - Time-Based Analysis Data */
/*! @{ */

#define PCIE_RC_TIME_BASED_ANALYSIS_DATA_REG_TIME_BASED_ANALYSIS_DATA_MASK (0xFFFFFFFFU)
#define PCIE_RC_TIME_BASED_ANALYSIS_DATA_REG_TIME_BASED_ANALYSIS_DATA_SHIFT (0U)
#define PCIE_RC_TIME_BASED_ANALYSIS_DATA_REG_TIME_BASED_ANALYSIS_DATA_WIDTH (32U)
#define PCIE_RC_TIME_BASED_ANALYSIS_DATA_REG_TIME_BASED_ANALYSIS_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TIME_BASED_ANALYSIS_DATA_REG_TIME_BASED_ANALYSIS_DATA_SHIFT)) & PCIE_RC_TIME_BASED_ANALYSIS_DATA_REG_TIME_BASED_ANALYSIS_DATA_MASK)
/*! @} */

/*! @name EINJ_ENABLE_REG - Error Injection Enable */
/*! @{ */

#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION0_ENABLE_MASK (0x1U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION0_ENABLE_SHIFT (0U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION0_ENABLE_WIDTH (1U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION0_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION0_ENABLE_SHIFT)) & PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION0_ENABLE_MASK)

#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION1_ENABLE_MASK (0x2U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION1_ENABLE_SHIFT (1U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION1_ENABLE_WIDTH (1U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION1_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION1_ENABLE_SHIFT)) & PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION1_ENABLE_MASK)

#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION2_ENABLE_MASK (0x4U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION2_ENABLE_SHIFT (2U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION2_ENABLE_WIDTH (1U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION2_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION2_ENABLE_SHIFT)) & PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION2_ENABLE_MASK)

#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION3_ENABLE_MASK (0x8U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION3_ENABLE_SHIFT (3U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION3_ENABLE_WIDTH (1U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION3_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION3_ENABLE_SHIFT)) & PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION3_ENABLE_MASK)

#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION4_ENABLE_MASK (0x10U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION4_ENABLE_SHIFT (4U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION4_ENABLE_WIDTH (1U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION4_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION4_ENABLE_SHIFT)) & PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION4_ENABLE_MASK)

#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION5_ENABLE_MASK (0x20U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION5_ENABLE_SHIFT (5U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION5_ENABLE_WIDTH (1U)
#define PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION5_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION5_ENABLE_SHIFT)) & PCIE_RC_EINJ_ENABLE_REG_ERROR_INJECTION5_ENABLE_MASK)
/*! @} */

/*! @name EINJ0_CRC_REG - Error Injection Control 0 (CRC Error) */
/*! @{ */

#define PCIE_RC_EINJ0_CRC_REG_EINJ0_COUNT_MASK   (0xFFU)
#define PCIE_RC_EINJ0_CRC_REG_EINJ0_COUNT_SHIFT  (0U)
#define PCIE_RC_EINJ0_CRC_REG_EINJ0_COUNT_WIDTH  (8U)
#define PCIE_RC_EINJ0_CRC_REG_EINJ0_COUNT(x)     (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ0_CRC_REG_EINJ0_COUNT_SHIFT)) & PCIE_RC_EINJ0_CRC_REG_EINJ0_COUNT_MASK)

#define PCIE_RC_EINJ0_CRC_REG_EINJ0_CRC_TYPE_MASK (0xF00U)
#define PCIE_RC_EINJ0_CRC_REG_EINJ0_CRC_TYPE_SHIFT (8U)
#define PCIE_RC_EINJ0_CRC_REG_EINJ0_CRC_TYPE_WIDTH (4U)
#define PCIE_RC_EINJ0_CRC_REG_EINJ0_CRC_TYPE(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ0_CRC_REG_EINJ0_CRC_TYPE_SHIFT)) & PCIE_RC_EINJ0_CRC_REG_EINJ0_CRC_TYPE_MASK)
/*! @} */

/*! @name EINJ1_SEQNUM_REG - Error Injection Control 1 (Sequence Number Error) */
/*! @{ */

#define PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_COUNT_MASK (0xFFU)
#define PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_COUNT_SHIFT (0U)
#define PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_COUNT_WIDTH (8U)
#define PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_COUNT(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_COUNT_SHIFT)) & PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_COUNT_MASK)

#define PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_SEQNUM_TYPE_MASK (0x100U)
#define PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_SEQNUM_TYPE_SHIFT (8U)
#define PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_SEQNUM_TYPE_WIDTH (1U)
#define PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_SEQNUM_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_SEQNUM_TYPE_SHIFT)) & PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_SEQNUM_TYPE_MASK)

#define PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_BAD_SEQNUM_MASK (0x1FFF0000U)
#define PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_BAD_SEQNUM_SHIFT (16U)
#define PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_BAD_SEQNUM_WIDTH (13U)
#define PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_BAD_SEQNUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_BAD_SEQNUM_SHIFT)) & PCIE_RC_EINJ1_SEQNUM_REG_EINJ1_BAD_SEQNUM_MASK)
/*! @} */

/*! @name EINJ2_DLLP_REG - Error Injection Control 2 (DLLP Error) */
/*! @{ */

#define PCIE_RC_EINJ2_DLLP_REG_EINJ2_COUNT_MASK  (0xFFU)
#define PCIE_RC_EINJ2_DLLP_REG_EINJ2_COUNT_SHIFT (0U)
#define PCIE_RC_EINJ2_DLLP_REG_EINJ2_COUNT_WIDTH (8U)
#define PCIE_RC_EINJ2_DLLP_REG_EINJ2_COUNT(x)    (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ2_DLLP_REG_EINJ2_COUNT_SHIFT)) & PCIE_RC_EINJ2_DLLP_REG_EINJ2_COUNT_MASK)

#define PCIE_RC_EINJ2_DLLP_REG_EINJ2_DLLP_TYPE_MASK (0x300U)
#define PCIE_RC_EINJ2_DLLP_REG_EINJ2_DLLP_TYPE_SHIFT (8U)
#define PCIE_RC_EINJ2_DLLP_REG_EINJ2_DLLP_TYPE_WIDTH (2U)
#define PCIE_RC_EINJ2_DLLP_REG_EINJ2_DLLP_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ2_DLLP_REG_EINJ2_DLLP_TYPE_SHIFT)) & PCIE_RC_EINJ2_DLLP_REG_EINJ2_DLLP_TYPE_MASK)
/*! @} */

/*! @name EINJ3_SYMBOL_REG - Error Injection Control 3 (Symbol Error) */
/*! @{ */

#define PCIE_RC_EINJ3_SYMBOL_REG_EINJ3_COUNT_MASK (0xFFU)
#define PCIE_RC_EINJ3_SYMBOL_REG_EINJ3_COUNT_SHIFT (0U)
#define PCIE_RC_EINJ3_SYMBOL_REG_EINJ3_COUNT_WIDTH (8U)
#define PCIE_RC_EINJ3_SYMBOL_REG_EINJ3_COUNT(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ3_SYMBOL_REG_EINJ3_COUNT_SHIFT)) & PCIE_RC_EINJ3_SYMBOL_REG_EINJ3_COUNT_MASK)

#define PCIE_RC_EINJ3_SYMBOL_REG_EINJ3_SYMBOL_TYPE_MASK (0x700U)
#define PCIE_RC_EINJ3_SYMBOL_REG_EINJ3_SYMBOL_TYPE_SHIFT (8U)
#define PCIE_RC_EINJ3_SYMBOL_REG_EINJ3_SYMBOL_TYPE_WIDTH (3U)
#define PCIE_RC_EINJ3_SYMBOL_REG_EINJ3_SYMBOL_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ3_SYMBOL_REG_EINJ3_SYMBOL_TYPE_SHIFT)) & PCIE_RC_EINJ3_SYMBOL_REG_EINJ3_SYMBOL_TYPE_MASK)
/*! @} */

/*! @name EINJ4_FC_REG - Error Injection Control 4 (FC Credit Error) */
/*! @{ */

#define PCIE_RC_EINJ4_FC_REG_EINJ4_COUNT_MASK    (0xFFU)
#define PCIE_RC_EINJ4_FC_REG_EINJ4_COUNT_SHIFT   (0U)
#define PCIE_RC_EINJ4_FC_REG_EINJ4_COUNT_WIDTH   (8U)
#define PCIE_RC_EINJ4_FC_REG_EINJ4_COUNT(x)      (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ4_FC_REG_EINJ4_COUNT_SHIFT)) & PCIE_RC_EINJ4_FC_REG_EINJ4_COUNT_MASK)

#define PCIE_RC_EINJ4_FC_REG_EINJ4_UPDFC_TYPE_MASK (0x700U)
#define PCIE_RC_EINJ4_FC_REG_EINJ4_UPDFC_TYPE_SHIFT (8U)
#define PCIE_RC_EINJ4_FC_REG_EINJ4_UPDFC_TYPE_WIDTH (3U)
#define PCIE_RC_EINJ4_FC_REG_EINJ4_UPDFC_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ4_FC_REG_EINJ4_UPDFC_TYPE_SHIFT)) & PCIE_RC_EINJ4_FC_REG_EINJ4_UPDFC_TYPE_MASK)

#define PCIE_RC_EINJ4_FC_REG_EINJ4_VC_NUMBER_MASK (0x7000U)
#define PCIE_RC_EINJ4_FC_REG_EINJ4_VC_NUMBER_SHIFT (12U)
#define PCIE_RC_EINJ4_FC_REG_EINJ4_VC_NUMBER_WIDTH (3U)
#define PCIE_RC_EINJ4_FC_REG_EINJ4_VC_NUMBER(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ4_FC_REG_EINJ4_VC_NUMBER_SHIFT)) & PCIE_RC_EINJ4_FC_REG_EINJ4_VC_NUMBER_MASK)

#define PCIE_RC_EINJ4_FC_REG_EINJ4_BAD_UPDFC_VALUE_MASK (0x1FFF0000U)
#define PCIE_RC_EINJ4_FC_REG_EINJ4_BAD_UPDFC_VALUE_SHIFT (16U)
#define PCIE_RC_EINJ4_FC_REG_EINJ4_BAD_UPDFC_VALUE_WIDTH (13U)
#define PCIE_RC_EINJ4_FC_REG_EINJ4_BAD_UPDFC_VALUE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ4_FC_REG_EINJ4_BAD_UPDFC_VALUE_SHIFT)) & PCIE_RC_EINJ4_FC_REG_EINJ4_BAD_UPDFC_VALUE_MASK)
/*! @} */

/*! @name EINJ5_SP_TLP_REG - Error Injection Control 5 (Specific TLP Error) */
/*! @{ */

#define PCIE_RC_EINJ5_SP_TLP_REG_EINJ5_COUNT_MASK (0xFFU)
#define PCIE_RC_EINJ5_SP_TLP_REG_EINJ5_COUNT_SHIFT (0U)
#define PCIE_RC_EINJ5_SP_TLP_REG_EINJ5_COUNT_WIDTH (8U)
#define PCIE_RC_EINJ5_SP_TLP_REG_EINJ5_COUNT(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ5_SP_TLP_REG_EINJ5_COUNT_SHIFT)) & PCIE_RC_EINJ5_SP_TLP_REG_EINJ5_COUNT_MASK)

#define PCIE_RC_EINJ5_SP_TLP_REG_EINJ5_SPECIFIED_TLP_MASK (0x100U)
#define PCIE_RC_EINJ5_SP_TLP_REG_EINJ5_SPECIFIED_TLP_SHIFT (8U)
#define PCIE_RC_EINJ5_SP_TLP_REG_EINJ5_SPECIFIED_TLP_WIDTH (1U)
#define PCIE_RC_EINJ5_SP_TLP_REG_EINJ5_SPECIFIED_TLP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ5_SP_TLP_REG_EINJ5_SPECIFIED_TLP_SHIFT)) & PCIE_RC_EINJ5_SP_TLP_REG_EINJ5_SPECIFIED_TLP_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_POINT_H0_REG - Error Injection Control 6 (Compare Point Header DWORD #0) */
/*! @{ */

#define PCIE_RC_EINJ6_COMPARE_POINT_H0_REG_EINJ6_COMPARE_POINT_H0_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_COMPARE_POINT_H0_REG_EINJ6_COMPARE_POINT_H0_SHIFT (0U)
#define PCIE_RC_EINJ6_COMPARE_POINT_H0_REG_EINJ6_COMPARE_POINT_H0_WIDTH (32U)
#define PCIE_RC_EINJ6_COMPARE_POINT_H0_REG_EINJ6_COMPARE_POINT_H0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_COMPARE_POINT_H0_REG_EINJ6_COMPARE_POINT_H0_SHIFT)) & PCIE_RC_EINJ6_COMPARE_POINT_H0_REG_EINJ6_COMPARE_POINT_H0_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_POINT_H1_REG - Error Injection Control 6 (Compare Point Header DWORD #1) */
/*! @{ */

#define PCIE_RC_EINJ6_COMPARE_POINT_H1_REG_EINJ6_COMPARE_POINT_H1_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_COMPARE_POINT_H1_REG_EINJ6_COMPARE_POINT_H1_SHIFT (0U)
#define PCIE_RC_EINJ6_COMPARE_POINT_H1_REG_EINJ6_COMPARE_POINT_H1_WIDTH (32U)
#define PCIE_RC_EINJ6_COMPARE_POINT_H1_REG_EINJ6_COMPARE_POINT_H1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_COMPARE_POINT_H1_REG_EINJ6_COMPARE_POINT_H1_SHIFT)) & PCIE_RC_EINJ6_COMPARE_POINT_H1_REG_EINJ6_COMPARE_POINT_H1_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_POINT_H2_REG - Error Injection Control 6 (Compare Point Header DWORD #2) */
/*! @{ */

#define PCIE_RC_EINJ6_COMPARE_POINT_H2_REG_EINJ6_COMPARE_POINT_H2_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_COMPARE_POINT_H2_REG_EINJ6_COMPARE_POINT_H2_SHIFT (0U)
#define PCIE_RC_EINJ6_COMPARE_POINT_H2_REG_EINJ6_COMPARE_POINT_H2_WIDTH (32U)
#define PCIE_RC_EINJ6_COMPARE_POINT_H2_REG_EINJ6_COMPARE_POINT_H2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_COMPARE_POINT_H2_REG_EINJ6_COMPARE_POINT_H2_SHIFT)) & PCIE_RC_EINJ6_COMPARE_POINT_H2_REG_EINJ6_COMPARE_POINT_H2_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_POINT_H3_REG - Error Injection Control 6 (Compare Point Header DWORD #3) */
/*! @{ */

#define PCIE_RC_EINJ6_COMPARE_POINT_H3_REG_EINJ6_COMPARE_POINT_H3_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_COMPARE_POINT_H3_REG_EINJ6_COMPARE_POINT_H3_SHIFT (0U)
#define PCIE_RC_EINJ6_COMPARE_POINT_H3_REG_EINJ6_COMPARE_POINT_H3_WIDTH (32U)
#define PCIE_RC_EINJ6_COMPARE_POINT_H3_REG_EINJ6_COMPARE_POINT_H3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_COMPARE_POINT_H3_REG_EINJ6_COMPARE_POINT_H3_SHIFT)) & PCIE_RC_EINJ6_COMPARE_POINT_H3_REG_EINJ6_COMPARE_POINT_H3_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_VALUE_H0_REG - Error Injection Control 6 (Compare Value Header DWORD #0) */
/*! @{ */

#define PCIE_RC_EINJ6_COMPARE_VALUE_H0_REG_EINJ6_COMPARE_VALUE_H0_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_COMPARE_VALUE_H0_REG_EINJ6_COMPARE_VALUE_H0_SHIFT (0U)
#define PCIE_RC_EINJ6_COMPARE_VALUE_H0_REG_EINJ6_COMPARE_VALUE_H0_WIDTH (32U)
#define PCIE_RC_EINJ6_COMPARE_VALUE_H0_REG_EINJ6_COMPARE_VALUE_H0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_COMPARE_VALUE_H0_REG_EINJ6_COMPARE_VALUE_H0_SHIFT)) & PCIE_RC_EINJ6_COMPARE_VALUE_H0_REG_EINJ6_COMPARE_VALUE_H0_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_VALUE_H1_REG - Error Injection Control 6 (Compare Value Header DWORD #1) */
/*! @{ */

#define PCIE_RC_EINJ6_COMPARE_VALUE_H1_REG_EINJ6_COMPARE_VALUE_H1_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_COMPARE_VALUE_H1_REG_EINJ6_COMPARE_VALUE_H1_SHIFT (0U)
#define PCIE_RC_EINJ6_COMPARE_VALUE_H1_REG_EINJ6_COMPARE_VALUE_H1_WIDTH (32U)
#define PCIE_RC_EINJ6_COMPARE_VALUE_H1_REG_EINJ6_COMPARE_VALUE_H1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_COMPARE_VALUE_H1_REG_EINJ6_COMPARE_VALUE_H1_SHIFT)) & PCIE_RC_EINJ6_COMPARE_VALUE_H1_REG_EINJ6_COMPARE_VALUE_H1_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_VALUE_H2_REG - Error Injection Control 6 (Compare Value Header DWORD #2) */
/*! @{ */

#define PCIE_RC_EINJ6_COMPARE_VALUE_H2_REG_EINJ6_COMPARE_VALUE_H2_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_COMPARE_VALUE_H2_REG_EINJ6_COMPARE_VALUE_H2_SHIFT (0U)
#define PCIE_RC_EINJ6_COMPARE_VALUE_H2_REG_EINJ6_COMPARE_VALUE_H2_WIDTH (32U)
#define PCIE_RC_EINJ6_COMPARE_VALUE_H2_REG_EINJ6_COMPARE_VALUE_H2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_COMPARE_VALUE_H2_REG_EINJ6_COMPARE_VALUE_H2_SHIFT)) & PCIE_RC_EINJ6_COMPARE_VALUE_H2_REG_EINJ6_COMPARE_VALUE_H2_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_VALUE_H3_REG - Error Injection Control 6 (Compare Value Header DWORD #3) */
/*! @{ */

#define PCIE_RC_EINJ6_COMPARE_VALUE_H3_REG_EINJ6_COMPARE_VALUE_H3_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_COMPARE_VALUE_H3_REG_EINJ6_COMPARE_VALUE_H3_SHIFT (0U)
#define PCIE_RC_EINJ6_COMPARE_VALUE_H3_REG_EINJ6_COMPARE_VALUE_H3_WIDTH (32U)
#define PCIE_RC_EINJ6_COMPARE_VALUE_H3_REG_EINJ6_COMPARE_VALUE_H3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_COMPARE_VALUE_H3_REG_EINJ6_COMPARE_VALUE_H3_SHIFT)) & PCIE_RC_EINJ6_COMPARE_VALUE_H3_REG_EINJ6_COMPARE_VALUE_H3_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_POINT_H0_REG - Error Injection Control 6 (Change Point Header DWORD #0) */
/*! @{ */

#define PCIE_RC_EINJ6_CHANGE_POINT_H0_REG_EINJ6_CHANGE_POINT_H0_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_CHANGE_POINT_H0_REG_EINJ6_CHANGE_POINT_H0_SHIFT (0U)
#define PCIE_RC_EINJ6_CHANGE_POINT_H0_REG_EINJ6_CHANGE_POINT_H0_WIDTH (32U)
#define PCIE_RC_EINJ6_CHANGE_POINT_H0_REG_EINJ6_CHANGE_POINT_H0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_CHANGE_POINT_H0_REG_EINJ6_CHANGE_POINT_H0_SHIFT)) & PCIE_RC_EINJ6_CHANGE_POINT_H0_REG_EINJ6_CHANGE_POINT_H0_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_POINT_H1_REG - Error Injection Control 6 (Change Point Header DWORD #1) */
/*! @{ */

#define PCIE_RC_EINJ6_CHANGE_POINT_H1_REG_EINJ6_CHANGE_POINT_H1_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_CHANGE_POINT_H1_REG_EINJ6_CHANGE_POINT_H1_SHIFT (0U)
#define PCIE_RC_EINJ6_CHANGE_POINT_H1_REG_EINJ6_CHANGE_POINT_H1_WIDTH (32U)
#define PCIE_RC_EINJ6_CHANGE_POINT_H1_REG_EINJ6_CHANGE_POINT_H1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_CHANGE_POINT_H1_REG_EINJ6_CHANGE_POINT_H1_SHIFT)) & PCIE_RC_EINJ6_CHANGE_POINT_H1_REG_EINJ6_CHANGE_POINT_H1_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_POINT_H2_REG - Error Injection Control 6 (Change Point Header DWORD #2) */
/*! @{ */

#define PCIE_RC_EINJ6_CHANGE_POINT_H2_REG_EINJ6_CHANGE_POINT_H2_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_CHANGE_POINT_H2_REG_EINJ6_CHANGE_POINT_H2_SHIFT (0U)
#define PCIE_RC_EINJ6_CHANGE_POINT_H2_REG_EINJ6_CHANGE_POINT_H2_WIDTH (32U)
#define PCIE_RC_EINJ6_CHANGE_POINT_H2_REG_EINJ6_CHANGE_POINT_H2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_CHANGE_POINT_H2_REG_EINJ6_CHANGE_POINT_H2_SHIFT)) & PCIE_RC_EINJ6_CHANGE_POINT_H2_REG_EINJ6_CHANGE_POINT_H2_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_POINT_H3_REG - Error Injection Control 6 (Change Point Header DWORD #3) */
/*! @{ */

#define PCIE_RC_EINJ6_CHANGE_POINT_H3_REG_EINJ6_CHANGE_POINT_H3_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_CHANGE_POINT_H3_REG_EINJ6_CHANGE_POINT_H3_SHIFT (0U)
#define PCIE_RC_EINJ6_CHANGE_POINT_H3_REG_EINJ6_CHANGE_POINT_H3_WIDTH (32U)
#define PCIE_RC_EINJ6_CHANGE_POINT_H3_REG_EINJ6_CHANGE_POINT_H3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_CHANGE_POINT_H3_REG_EINJ6_CHANGE_POINT_H3_SHIFT)) & PCIE_RC_EINJ6_CHANGE_POINT_H3_REG_EINJ6_CHANGE_POINT_H3_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_VALUE_H0_REG - Error Injection Control 6 (Change Value Header DWORD #0) */
/*! @{ */

#define PCIE_RC_EINJ6_CHANGE_VALUE_H0_REG_EINJ6_CHANGE_VALUE_H0_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_CHANGE_VALUE_H0_REG_EINJ6_CHANGE_VALUE_H0_SHIFT (0U)
#define PCIE_RC_EINJ6_CHANGE_VALUE_H0_REG_EINJ6_CHANGE_VALUE_H0_WIDTH (32U)
#define PCIE_RC_EINJ6_CHANGE_VALUE_H0_REG_EINJ6_CHANGE_VALUE_H0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_CHANGE_VALUE_H0_REG_EINJ6_CHANGE_VALUE_H0_SHIFT)) & PCIE_RC_EINJ6_CHANGE_VALUE_H0_REG_EINJ6_CHANGE_VALUE_H0_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_VALUE_H1_REG - Error Injection Control 6 (Change Value Header DWORD #1) */
/*! @{ */

#define PCIE_RC_EINJ6_CHANGE_VALUE_H1_REG_EINJ6_CHANGE_VALUE_H1_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_CHANGE_VALUE_H1_REG_EINJ6_CHANGE_VALUE_H1_SHIFT (0U)
#define PCIE_RC_EINJ6_CHANGE_VALUE_H1_REG_EINJ6_CHANGE_VALUE_H1_WIDTH (32U)
#define PCIE_RC_EINJ6_CHANGE_VALUE_H1_REG_EINJ6_CHANGE_VALUE_H1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_CHANGE_VALUE_H1_REG_EINJ6_CHANGE_VALUE_H1_SHIFT)) & PCIE_RC_EINJ6_CHANGE_VALUE_H1_REG_EINJ6_CHANGE_VALUE_H1_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_VALUE_H2_REG - Error Injection Control 6 (Change Value Header DWORD #2) */
/*! @{ */

#define PCIE_RC_EINJ6_CHANGE_VALUE_H2_REG_EINJ6_CHANGE_VALUE_H2_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_CHANGE_VALUE_H2_REG_EINJ6_CHANGE_VALUE_H2_SHIFT (0U)
#define PCIE_RC_EINJ6_CHANGE_VALUE_H2_REG_EINJ6_CHANGE_VALUE_H2_WIDTH (32U)
#define PCIE_RC_EINJ6_CHANGE_VALUE_H2_REG_EINJ6_CHANGE_VALUE_H2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_CHANGE_VALUE_H2_REG_EINJ6_CHANGE_VALUE_H2_SHIFT)) & PCIE_RC_EINJ6_CHANGE_VALUE_H2_REG_EINJ6_CHANGE_VALUE_H2_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_VALUE_H3_REG - Error Injection Control 6 (Change Value Header DWORD #3) */
/*! @{ */

#define PCIE_RC_EINJ6_CHANGE_VALUE_H3_REG_EINJ6_CHANGE_VALUE_H3_MASK (0xFFFFFFFFU)
#define PCIE_RC_EINJ6_CHANGE_VALUE_H3_REG_EINJ6_CHANGE_VALUE_H3_SHIFT (0U)
#define PCIE_RC_EINJ6_CHANGE_VALUE_H3_REG_EINJ6_CHANGE_VALUE_H3_WIDTH (32U)
#define PCIE_RC_EINJ6_CHANGE_VALUE_H3_REG_EINJ6_CHANGE_VALUE_H3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_CHANGE_VALUE_H3_REG_EINJ6_CHANGE_VALUE_H3_SHIFT)) & PCIE_RC_EINJ6_CHANGE_VALUE_H3_REG_EINJ6_CHANGE_VALUE_H3_MASK)
/*! @} */

/*! @name EINJ6_TLP_REG - Error Injection Control 6 (Packet Error) */
/*! @{ */

#define PCIE_RC_EINJ6_TLP_REG_EINJ6_COUNT_MASK   (0xFFU)
#define PCIE_RC_EINJ6_TLP_REG_EINJ6_COUNT_SHIFT  (0U)
#define PCIE_RC_EINJ6_TLP_REG_EINJ6_COUNT_WIDTH  (8U)
#define PCIE_RC_EINJ6_TLP_REG_EINJ6_COUNT(x)     (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_TLP_REG_EINJ6_COUNT_SHIFT)) & PCIE_RC_EINJ6_TLP_REG_EINJ6_COUNT_MASK)

#define PCIE_RC_EINJ6_TLP_REG_EINJ6_INVERTED_CONTROL_MASK (0x100U)
#define PCIE_RC_EINJ6_TLP_REG_EINJ6_INVERTED_CONTROL_SHIFT (8U)
#define PCIE_RC_EINJ6_TLP_REG_EINJ6_INVERTED_CONTROL_WIDTH (1U)
#define PCIE_RC_EINJ6_TLP_REG_EINJ6_INVERTED_CONTROL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_TLP_REG_EINJ6_INVERTED_CONTROL_SHIFT)) & PCIE_RC_EINJ6_TLP_REG_EINJ6_INVERTED_CONTROL_MASK)

#define PCIE_RC_EINJ6_TLP_REG_EINJ6_PACKET_TYPE_MASK (0xE00U)
#define PCIE_RC_EINJ6_TLP_REG_EINJ6_PACKET_TYPE_SHIFT (9U)
#define PCIE_RC_EINJ6_TLP_REG_EINJ6_PACKET_TYPE_WIDTH (3U)
#define PCIE_RC_EINJ6_TLP_REG_EINJ6_PACKET_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_EINJ6_TLP_REG_EINJ6_PACKET_TYPE_SHIFT)) & PCIE_RC_EINJ6_TLP_REG_EINJ6_PACKET_TYPE_MASK)
/*! @} */

/*! @name SD_CONTROL1_REG - Silicon Debug Control 1 */
/*! @{ */

#define PCIE_RC_SD_CONTROL1_REG_FORCE_DETECT_LANE_MASK (0xFFFFU)
#define PCIE_RC_SD_CONTROL1_REG_FORCE_DETECT_LANE_SHIFT (0U)
#define PCIE_RC_SD_CONTROL1_REG_FORCE_DETECT_LANE_WIDTH (16U)
#define PCIE_RC_SD_CONTROL1_REG_FORCE_DETECT_LANE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_CONTROL1_REG_FORCE_DETECT_LANE_SHIFT)) & PCIE_RC_SD_CONTROL1_REG_FORCE_DETECT_LANE_MASK)

#define PCIE_RC_SD_CONTROL1_REG_FORCE_DETECT_LANE_EN_MASK (0x10000U)
#define PCIE_RC_SD_CONTROL1_REG_FORCE_DETECT_LANE_EN_SHIFT (16U)
#define PCIE_RC_SD_CONTROL1_REG_FORCE_DETECT_LANE_EN_WIDTH (1U)
#define PCIE_RC_SD_CONTROL1_REG_FORCE_DETECT_LANE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_CONTROL1_REG_FORCE_DETECT_LANE_EN_SHIFT)) & PCIE_RC_SD_CONTROL1_REG_FORCE_DETECT_LANE_EN_MASK)

#define PCIE_RC_SD_CONTROL1_REG_TX_EIOS_NUM_MASK (0x300000U)
#define PCIE_RC_SD_CONTROL1_REG_TX_EIOS_NUM_SHIFT (20U)
#define PCIE_RC_SD_CONTROL1_REG_TX_EIOS_NUM_WIDTH (2U)
#define PCIE_RC_SD_CONTROL1_REG_TX_EIOS_NUM(x)   (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_CONTROL1_REG_TX_EIOS_NUM_SHIFT)) & PCIE_RC_SD_CONTROL1_REG_TX_EIOS_NUM_MASK)

#define PCIE_RC_SD_CONTROL1_REG_LOW_POWER_INTERVAL_MASK (0xC00000U)
#define PCIE_RC_SD_CONTROL1_REG_LOW_POWER_INTERVAL_SHIFT (22U)
#define PCIE_RC_SD_CONTROL1_REG_LOW_POWER_INTERVAL_WIDTH (2U)
#define PCIE_RC_SD_CONTROL1_REG_LOW_POWER_INTERVAL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_CONTROL1_REG_LOW_POWER_INTERVAL_SHIFT)) & PCIE_RC_SD_CONTROL1_REG_LOW_POWER_INTERVAL_MASK)
/*! @} */

/*! @name SD_CONTROL2_REG - Silicon Debug Control 2 */
/*! @{ */

#define PCIE_RC_SD_CONTROL2_REG_HOLD_LTSSM_MASK  (0x1U)
#define PCIE_RC_SD_CONTROL2_REG_HOLD_LTSSM_SHIFT (0U)
#define PCIE_RC_SD_CONTROL2_REG_HOLD_LTSSM_WIDTH (1U)
#define PCIE_RC_SD_CONTROL2_REG_HOLD_LTSSM(x)    (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_CONTROL2_REG_HOLD_LTSSM_SHIFT)) & PCIE_RC_SD_CONTROL2_REG_HOLD_LTSSM_MASK)

#define PCIE_RC_SD_CONTROL2_REG_RECOVERY_REQUEST_MASK (0x2U)
#define PCIE_RC_SD_CONTROL2_REG_RECOVERY_REQUEST_SHIFT (1U)
#define PCIE_RC_SD_CONTROL2_REG_RECOVERY_REQUEST_WIDTH (1U)
#define PCIE_RC_SD_CONTROL2_REG_RECOVERY_REQUEST(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_CONTROL2_REG_RECOVERY_REQUEST_SHIFT)) & PCIE_RC_SD_CONTROL2_REG_RECOVERY_REQUEST_MASK)

#define PCIE_RC_SD_CONTROL2_REG_NOACK_FORCE_LINKDOWN_MASK (0x4U)
#define PCIE_RC_SD_CONTROL2_REG_NOACK_FORCE_LINKDOWN_SHIFT (2U)
#define PCIE_RC_SD_CONTROL2_REG_NOACK_FORCE_LINKDOWN_WIDTH (1U)
#define PCIE_RC_SD_CONTROL2_REG_NOACK_FORCE_LINKDOWN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_CONTROL2_REG_NOACK_FORCE_LINKDOWN_SHIFT)) & PCIE_RC_SD_CONTROL2_REG_NOACK_FORCE_LINKDOWN_MASK)

#define PCIE_RC_SD_CONTROL2_REG_DIRECT_RECIDLE_TO_CONFIG_MASK (0x100U)
#define PCIE_RC_SD_CONTROL2_REG_DIRECT_RECIDLE_TO_CONFIG_SHIFT (8U)
#define PCIE_RC_SD_CONTROL2_REG_DIRECT_RECIDLE_TO_CONFIG_WIDTH (1U)
#define PCIE_RC_SD_CONTROL2_REG_DIRECT_RECIDLE_TO_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_CONTROL2_REG_DIRECT_RECIDLE_TO_CONFIG_SHIFT)) & PCIE_RC_SD_CONTROL2_REG_DIRECT_RECIDLE_TO_CONFIG_MASK)

#define PCIE_RC_SD_CONTROL2_REG_DIRECT_POLCOMP_TO_DETECT_MASK (0x200U)
#define PCIE_RC_SD_CONTROL2_REG_DIRECT_POLCOMP_TO_DETECT_SHIFT (9U)
#define PCIE_RC_SD_CONTROL2_REG_DIRECT_POLCOMP_TO_DETECT_WIDTH (1U)
#define PCIE_RC_SD_CONTROL2_REG_DIRECT_POLCOMP_TO_DETECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_CONTROL2_REG_DIRECT_POLCOMP_TO_DETECT_SHIFT)) & PCIE_RC_SD_CONTROL2_REG_DIRECT_POLCOMP_TO_DETECT_MASK)

#define PCIE_RC_SD_CONTROL2_REG_DIRECT_LPBKSLV_TO_EXIT_MASK (0x400U)
#define PCIE_RC_SD_CONTROL2_REG_DIRECT_LPBKSLV_TO_EXIT_SHIFT (10U)
#define PCIE_RC_SD_CONTROL2_REG_DIRECT_LPBKSLV_TO_EXIT_WIDTH (1U)
#define PCIE_RC_SD_CONTROL2_REG_DIRECT_LPBKSLV_TO_EXIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_CONTROL2_REG_DIRECT_LPBKSLV_TO_EXIT_SHIFT)) & PCIE_RC_SD_CONTROL2_REG_DIRECT_LPBKSLV_TO_EXIT_MASK)

#define PCIE_RC_SD_CONTROL2_REG_FRAMING_ERR_RECOVERY_DISABLE_MASK (0x10000U)
#define PCIE_RC_SD_CONTROL2_REG_FRAMING_ERR_RECOVERY_DISABLE_SHIFT (16U)
#define PCIE_RC_SD_CONTROL2_REG_FRAMING_ERR_RECOVERY_DISABLE_WIDTH (1U)
#define PCIE_RC_SD_CONTROL2_REG_FRAMING_ERR_RECOVERY_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_CONTROL2_REG_FRAMING_ERR_RECOVERY_DISABLE_SHIFT)) & PCIE_RC_SD_CONTROL2_REG_FRAMING_ERR_RECOVERY_DISABLE_MASK)
/*! @} */

/*! @name SD_STATUS_L1LANE_REG - Silicon Debug Status (Layer1 Per-lane) */
/*! @{ */

#define PCIE_RC_SD_STATUS_L1LANE_REG_LANE_SELECT_MASK (0xFU)
#define PCIE_RC_SD_STATUS_L1LANE_REG_LANE_SELECT_SHIFT (0U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_LANE_SELECT_WIDTH (4U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_LANE_SELECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L1LANE_REG_LANE_SELECT_SHIFT)) & PCIE_RC_SD_STATUS_L1LANE_REG_LANE_SELECT_MASK)

#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXPOLARITY_MASK (0x10000U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXPOLARITY_SHIFT (16U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXPOLARITY_WIDTH (1U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXPOLARITY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXPOLARITY_SHIFT)) & PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXPOLARITY_MASK)

#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_DETECT_LANE_MASK (0x20000U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_DETECT_LANE_SHIFT (17U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_DETECT_LANE_WIDTH (1U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_DETECT_LANE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_DETECT_LANE_SHIFT)) & PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_DETECT_LANE_MASK)

#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXVALID_MASK (0x40000U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXVALID_SHIFT (18U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXVALID_WIDTH (1U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXVALID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXVALID_SHIFT)) & PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXVALID_MASK)

#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXELECIDLE_MASK (0x80000U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXELECIDLE_SHIFT (19U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXELECIDLE_WIDTH (1U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXELECIDLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXELECIDLE_SHIFT)) & PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_RXELECIDLE_MASK)

#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_TXELECIDLE_MASK (0x100000U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_TXELECIDLE_SHIFT (20U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_TXELECIDLE_WIDTH (1U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_TXELECIDLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_TXELECIDLE_SHIFT)) & PCIE_RC_SD_STATUS_L1LANE_REG_PIPE_TXELECIDLE_MASK)

#define PCIE_RC_SD_STATUS_L1LANE_REG_DESKEW_POINTER_MASK (0xFF000000U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_DESKEW_POINTER_SHIFT (24U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_DESKEW_POINTER_WIDTH (8U)
#define PCIE_RC_SD_STATUS_L1LANE_REG_DESKEW_POINTER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L1LANE_REG_DESKEW_POINTER_SHIFT)) & PCIE_RC_SD_STATUS_L1LANE_REG_DESKEW_POINTER_MASK)
/*! @} */

/*! @name SD_STATUS_L1LTSSM_REG - Silicon Debug Status (Layer1 LTSSM) */
/*! @{ */

#define PCIE_RC_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_PTR_MASK (0x7FU)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_PTR_SHIFT (0U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_PTR_WIDTH (7U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_PTR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_PTR_SHIFT)) & PCIE_RC_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_PTR_MASK)

#define PCIE_RC_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_MASK (0x80U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_SHIFT (7U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_WIDTH (1U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_FRAMING_ERR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_SHIFT)) & PCIE_RC_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_MASK)

#define PCIE_RC_SD_STATUS_L1LTSSM_REG_PIPE_POWER_DOWN_MASK (0x700U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_PIPE_POWER_DOWN_SHIFT (8U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_PIPE_POWER_DOWN_WIDTH (3U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_PIPE_POWER_DOWN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L1LTSSM_REG_PIPE_POWER_DOWN_SHIFT)) & PCIE_RC_SD_STATUS_L1LTSSM_REG_PIPE_POWER_DOWN_MASK)

#define PCIE_RC_SD_STATUS_L1LTSSM_REG_LANE_REVERSAL_MASK (0x8000U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_LANE_REVERSAL_SHIFT (15U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_LANE_REVERSAL_WIDTH (1U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_LANE_REVERSAL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L1LTSSM_REG_LANE_REVERSAL_SHIFT)) & PCIE_RC_SD_STATUS_L1LTSSM_REG_LANE_REVERSAL_MASK)

#define PCIE_RC_SD_STATUS_L1LTSSM_REG_LTSSM_VARIABLE_MASK (0xFFFF0000U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_LTSSM_VARIABLE_SHIFT (16U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_LTSSM_VARIABLE_WIDTH (16U)
#define PCIE_RC_SD_STATUS_L1LTSSM_REG_LTSSM_VARIABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L1LTSSM_REG_LTSSM_VARIABLE_SHIFT)) & PCIE_RC_SD_STATUS_L1LTSSM_REG_LTSSM_VARIABLE_MASK)
/*! @} */

/*! @name SD_STATUS_PM_REG - Silicon Debug Status (PM) */
/*! @{ */

#define PCIE_RC_SD_STATUS_PM_REG_INTERNAL_PM_MSTATE_MASK (0x1FU)
#define PCIE_RC_SD_STATUS_PM_REG_INTERNAL_PM_MSTATE_SHIFT (0U)
#define PCIE_RC_SD_STATUS_PM_REG_INTERNAL_PM_MSTATE_WIDTH (5U)
#define PCIE_RC_SD_STATUS_PM_REG_INTERNAL_PM_MSTATE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_PM_REG_INTERNAL_PM_MSTATE_SHIFT)) & PCIE_RC_SD_STATUS_PM_REG_INTERNAL_PM_MSTATE_MASK)

#define PCIE_RC_SD_STATUS_PM_REG_INTERNAL_PM_SSTATE_MASK (0xF00U)
#define PCIE_RC_SD_STATUS_PM_REG_INTERNAL_PM_SSTATE_SHIFT (8U)
#define PCIE_RC_SD_STATUS_PM_REG_INTERNAL_PM_SSTATE_WIDTH (4U)
#define PCIE_RC_SD_STATUS_PM_REG_INTERNAL_PM_SSTATE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_PM_REG_INTERNAL_PM_SSTATE_SHIFT)) & PCIE_RC_SD_STATUS_PM_REG_INTERNAL_PM_SSTATE_MASK)

#define PCIE_RC_SD_STATUS_PM_REG_PME_RESEND_FLAG_MASK (0x1000U)
#define PCIE_RC_SD_STATUS_PM_REG_PME_RESEND_FLAG_SHIFT (12U)
#define PCIE_RC_SD_STATUS_PM_REG_PME_RESEND_FLAG_WIDTH (1U)
#define PCIE_RC_SD_STATUS_PM_REG_PME_RESEND_FLAG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_PM_REG_PME_RESEND_FLAG_SHIFT)) & PCIE_RC_SD_STATUS_PM_REG_PME_RESEND_FLAG_MASK)

#define PCIE_RC_SD_STATUS_PM_REG_LATCHED_NFTS_MASK (0xFF0000U)
#define PCIE_RC_SD_STATUS_PM_REG_LATCHED_NFTS_SHIFT (16U)
#define PCIE_RC_SD_STATUS_PM_REG_LATCHED_NFTS_WIDTH (8U)
#define PCIE_RC_SD_STATUS_PM_REG_LATCHED_NFTS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_PM_REG_LATCHED_NFTS_SHIFT)) & PCIE_RC_SD_STATUS_PM_REG_LATCHED_NFTS_MASK)
/*! @} */

/*! @name SD_STATUS_L2_REG - Silicon Debug Status (Layer2) */
/*! @{ */

#define PCIE_RC_SD_STATUS_L2_REG_TX_TLP_SEQ_NO_MASK (0xFFFU)
#define PCIE_RC_SD_STATUS_L2_REG_TX_TLP_SEQ_NO_SHIFT (0U)
#define PCIE_RC_SD_STATUS_L2_REG_TX_TLP_SEQ_NO_WIDTH (12U)
#define PCIE_RC_SD_STATUS_L2_REG_TX_TLP_SEQ_NO(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L2_REG_TX_TLP_SEQ_NO_SHIFT)) & PCIE_RC_SD_STATUS_L2_REG_TX_TLP_SEQ_NO_MASK)

#define PCIE_RC_SD_STATUS_L2_REG_RX_ACK_SEQ_NO_MASK (0xFFF000U)
#define PCIE_RC_SD_STATUS_L2_REG_RX_ACK_SEQ_NO_SHIFT (12U)
#define PCIE_RC_SD_STATUS_L2_REG_RX_ACK_SEQ_NO_WIDTH (12U)
#define PCIE_RC_SD_STATUS_L2_REG_RX_ACK_SEQ_NO(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L2_REG_RX_ACK_SEQ_NO_SHIFT)) & PCIE_RC_SD_STATUS_L2_REG_RX_ACK_SEQ_NO_MASK)

#define PCIE_RC_SD_STATUS_L2_REG_DLCMSM_MASK     (0x3000000U)
#define PCIE_RC_SD_STATUS_L2_REG_DLCMSM_SHIFT    (24U)
#define PCIE_RC_SD_STATUS_L2_REG_DLCMSM_WIDTH    (2U)
#define PCIE_RC_SD_STATUS_L2_REG_DLCMSM(x)       (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L2_REG_DLCMSM_SHIFT)) & PCIE_RC_SD_STATUS_L2_REG_DLCMSM_MASK)

#define PCIE_RC_SD_STATUS_L2_REG_FC_INIT1_MASK   (0x4000000U)
#define PCIE_RC_SD_STATUS_L2_REG_FC_INIT1_SHIFT  (26U)
#define PCIE_RC_SD_STATUS_L2_REG_FC_INIT1_WIDTH  (1U)
#define PCIE_RC_SD_STATUS_L2_REG_FC_INIT1(x)     (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L2_REG_FC_INIT1_SHIFT)) & PCIE_RC_SD_STATUS_L2_REG_FC_INIT1_MASK)

#define PCIE_RC_SD_STATUS_L2_REG_FC_INIT2_MASK   (0x8000000U)
#define PCIE_RC_SD_STATUS_L2_REG_FC_INIT2_SHIFT  (27U)
#define PCIE_RC_SD_STATUS_L2_REG_FC_INIT2_WIDTH  (1U)
#define PCIE_RC_SD_STATUS_L2_REG_FC_INIT2(x)     (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L2_REG_FC_INIT2_SHIFT)) & PCIE_RC_SD_STATUS_L2_REG_FC_INIT2_MASK)
/*! @} */

/*! @name SD_STATUS_L3FC_REG - Silicon Debug Status (Layer3 FC) */
/*! @{ */

#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_VC_MASK (0x7U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_VC_SHIFT (0U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_VC_WIDTH (3U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_VC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_VC_SHIFT)) & PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_VC_MASK)

#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_CREDIT_TYPE_MASK (0x8U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_CREDIT_TYPE_SHIFT (3U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_CREDIT_TYPE_WIDTH (1U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_CREDIT_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_CREDIT_TYPE_SHIFT)) & PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_CREDIT_TYPE_MASK)

#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_TLP_TYPE_MASK (0x30U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_TLP_TYPE_SHIFT (4U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_TLP_TYPE_WIDTH (2U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_TLP_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_TLP_TYPE_SHIFT)) & PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_TLP_TYPE_MASK)

#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_HD_MASK (0x40U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_HD_SHIFT (6U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_HD_WIDTH (1U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_HD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_HD_SHIFT)) & PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_SEL_HD_MASK)

#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_DATA0_MASK (0xFFF00U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_DATA0_SHIFT (8U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_DATA0_WIDTH (12U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_DATA0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_DATA0_SHIFT)) & PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_DATA0_MASK)

#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_DATA1_MASK (0xFFF00000U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_DATA1_SHIFT (20U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_DATA1_WIDTH (12U)
#define PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_DATA1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_DATA1_SHIFT)) & PCIE_RC_SD_STATUS_L3FC_REG_CREDIT_DATA1_MASK)
/*! @} */

/*! @name SD_STATUS_L3_REG - Silicon Debug Status (Layer3) */
/*! @{ */

#define PCIE_RC_SD_STATUS_L3_REG_MFTLP_POINTER_MASK (0x7FU)
#define PCIE_RC_SD_STATUS_L3_REG_MFTLP_POINTER_SHIFT (0U)
#define PCIE_RC_SD_STATUS_L3_REG_MFTLP_POINTER_WIDTH (7U)
#define PCIE_RC_SD_STATUS_L3_REG_MFTLP_POINTER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L3_REG_MFTLP_POINTER_SHIFT)) & PCIE_RC_SD_STATUS_L3_REG_MFTLP_POINTER_MASK)

#define PCIE_RC_SD_STATUS_L3_REG_MFTLP_STATUS_MASK (0x80U)
#define PCIE_RC_SD_STATUS_L3_REG_MFTLP_STATUS_SHIFT (7U)
#define PCIE_RC_SD_STATUS_L3_REG_MFTLP_STATUS_WIDTH (1U)
#define PCIE_RC_SD_STATUS_L3_REG_MFTLP_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_STATUS_L3_REG_MFTLP_STATUS_SHIFT)) & PCIE_RC_SD_STATUS_L3_REG_MFTLP_STATUS_MASK)
/*! @} */

/*! @name SD_EQ_CONTROL1_REG - Silicon Debug EQ Control 1 */
/*! @{ */

#define PCIE_RC_SD_EQ_CONTROL1_REG_EQ_LANE_SEL_MASK (0xFU)
#define PCIE_RC_SD_EQ_CONTROL1_REG_EQ_LANE_SEL_SHIFT (0U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_EQ_LANE_SEL_WIDTH (4U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_EQ_LANE_SEL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL1_REG_EQ_LANE_SEL_SHIFT)) & PCIE_RC_SD_EQ_CONTROL1_REG_EQ_LANE_SEL_MASK)

#define PCIE_RC_SD_EQ_CONTROL1_REG_EQ_RATE_SEL_MASK (0x10U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_EQ_RATE_SEL_SHIFT (4U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_EQ_RATE_SEL_WIDTH (1U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_EQ_RATE_SEL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL1_REG_EQ_RATE_SEL_SHIFT)) & PCIE_RC_SD_EQ_CONTROL1_REG_EQ_RATE_SEL_MASK)

#define PCIE_RC_SD_EQ_CONTROL1_REG_EXT_EQ_TIMEOUT_MASK (0x300U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_EXT_EQ_TIMEOUT_SHIFT (8U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_EXT_EQ_TIMEOUT_WIDTH (2U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_EXT_EQ_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL1_REG_EXT_EQ_TIMEOUT_SHIFT)) & PCIE_RC_SD_EQ_CONTROL1_REG_EXT_EQ_TIMEOUT_MASK)

#define PCIE_RC_SD_EQ_CONTROL1_REG_EVAL_INTERVAL_TIME_MASK (0x30000U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_EVAL_INTERVAL_TIME_SHIFT (16U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_EVAL_INTERVAL_TIME_WIDTH (2U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_EVAL_INTERVAL_TIME(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL1_REG_EVAL_INTERVAL_TIME_SHIFT)) & PCIE_RC_SD_EQ_CONTROL1_REG_EVAL_INTERVAL_TIME_MASK)

#define PCIE_RC_SD_EQ_CONTROL1_REG_FOM_TARGET_ENABLE_MASK (0x800000U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_FOM_TARGET_ENABLE_SHIFT (23U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_FOM_TARGET_ENABLE_WIDTH (1U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_FOM_TARGET_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL1_REG_FOM_TARGET_ENABLE_SHIFT)) & PCIE_RC_SD_EQ_CONTROL1_REG_FOM_TARGET_ENABLE_MASK)

#define PCIE_RC_SD_EQ_CONTROL1_REG_FOM_TARGET_MASK (0xFF000000U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_FOM_TARGET_SHIFT (24U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_FOM_TARGET_WIDTH (8U)
#define PCIE_RC_SD_EQ_CONTROL1_REG_FOM_TARGET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL1_REG_FOM_TARGET_SHIFT)) & PCIE_RC_SD_EQ_CONTROL1_REG_FOM_TARGET_MASK)
/*! @} */

/*! @name SD_EQ_CONTROL2_REG - Silicon Debug EQ Control 2 */
/*! @{ */

#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRE_CURSOR_MASK (0x3FU)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRE_CURSOR_SHIFT (0U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRE_CURSOR_WIDTH (6U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRE_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRE_CURSOR_SHIFT)) & PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRE_CURSOR_MASK)

#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_CURSOR_MASK (0xFC0U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_CURSOR_SHIFT (6U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_CURSOR_WIDTH (6U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_CURSOR_SHIFT)) & PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_CURSOR_MASK)

#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_POST_CURSOR_MASK (0x3F000U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_POST_CURSOR_SHIFT (12U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_POST_CURSOR_WIDTH (6U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_POST_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_POST_CURSOR_SHIFT)) & PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_POST_CURSOR_MASK)

#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_MASK (0x1C0000U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_SHIFT (18U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_WIDTH (3U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_SHIFT)) & PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_MASK)

#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_MASK (0xF000000U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_SHIFT (24U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_WIDTH (4U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_SHIFT)) & PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_MASK)

#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_COEF_ENABLE_MASK (0x10000000U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_COEF_ENABLE_SHIFT (28U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_COEF_ENABLE_WIDTH (1U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_COEF_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_COEF_ENABLE_SHIFT)) & PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_COEF_ENABLE_MASK)

#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_ENABLE_MASK (0x20000000U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_ENABLE_SHIFT (29U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_ENABLE_WIDTH (1U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_ENABLE_SHIFT)) & PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_ENABLE_MASK)

#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_ENABLE_MASK (0x40000000U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_ENABLE_SHIFT (30U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_ENABLE_WIDTH (1U)
#define PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_ENABLE_SHIFT)) & PCIE_RC_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_ENABLE_MASK)
/*! @} */

/*! @name SD_EQ_CONTROL3_REG - Silicon Debug EQ Control 3 */
/*! @{ */

#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_PRE_CURSOR_MASK (0x3FU)
#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_PRE_CURSOR_SHIFT (0U)
#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_PRE_CURSOR_WIDTH (6U)
#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_PRE_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_PRE_CURSOR_SHIFT)) & PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_PRE_CURSOR_MASK)

#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_CURSOR_MASK (0xFC0U)
#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_CURSOR_SHIFT (6U)
#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_CURSOR_WIDTH (6U)
#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_CURSOR_SHIFT)) & PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_CURSOR_MASK)

#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_POST_CURSOR_MASK (0x3F000U)
#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_POST_CURSOR_SHIFT (12U)
#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_POST_CURSOR_WIDTH (6U)
#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_POST_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_POST_CURSOR_SHIFT)) & PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_POST_CURSOR_MASK)

#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_COEF_ENABLE_MASK (0x10000000U)
#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_COEF_ENABLE_SHIFT (28U)
#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_COEF_ENABLE_WIDTH (1U)
#define PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_COEF_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_COEF_ENABLE_SHIFT)) & PCIE_RC_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_COEF_ENABLE_MASK)
/*! @} */

/*! @name SD_EQ_STATUS1_REG - Silicon Debug EQ Status 1 */
/*! @{ */

#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_SEQUENCE_MASK (0x1U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_SEQUENCE_SHIFT (0U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_SEQUENCE_WIDTH (1U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_SEQUENCE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS1_REG_EQ_SEQUENCE_SHIFT)) & PCIE_RC_SD_EQ_STATUS1_REG_EQ_SEQUENCE_MASK)

#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_CONVERGENCE_INFO_MASK (0x6U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_CONVERGENCE_INFO_SHIFT (1U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_CONVERGENCE_INFO_WIDTH (2U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_CONVERGENCE_INFO(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS1_REG_EQ_CONVERGENCE_INFO_SHIFT)) & PCIE_RC_SD_EQ_STATUS1_REG_EQ_CONVERGENCE_INFO_MASK)

#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEA_VIOLATION_MASK (0x10U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEA_VIOLATION_SHIFT (4U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEA_VIOLATION_WIDTH (1U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEA_VIOLATION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEA_VIOLATION_SHIFT)) & PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEA_VIOLATION_MASK)

#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEB_VIOLATION_MASK (0x20U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEB_VIOLATION_SHIFT (5U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEB_VIOLATION_WIDTH (1U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEB_VIOLATION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEB_VIOLATION_SHIFT)) & PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEB_VIOLATION_MASK)

#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEC_VIOLATION_MASK (0x40U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEC_VIOLATION_SHIFT (6U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEC_VIOLATION_WIDTH (1U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEC_VIOLATION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEC_VIOLATION_SHIFT)) & PCIE_RC_SD_EQ_STATUS1_REG_EQ_RULEC_VIOLATION_MASK)

#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_REJECT_EVENT_MASK (0x80U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_REJECT_EVENT_SHIFT (7U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_REJECT_EVENT_WIDTH (1U)
#define PCIE_RC_SD_EQ_STATUS1_REG_EQ_REJECT_EVENT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS1_REG_EQ_REJECT_EVENT_SHIFT)) & PCIE_RC_SD_EQ_STATUS1_REG_EQ_REJECT_EVENT_MASK)
/*! @} */

/*! @name SD_EQ_STATUS2_REG - Silicon Debug EQ Status 2 */
/*! @{ */

#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_PRE_CURSOR_MASK (0x3FU)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_PRE_CURSOR_SHIFT (0U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_PRE_CURSOR_WIDTH (6U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_PRE_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_PRE_CURSOR_SHIFT)) & PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_PRE_CURSOR_MASK)

#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_CURSOR_MASK (0xFC0U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_CURSOR_SHIFT (6U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_CURSOR_WIDTH (6U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_CURSOR_SHIFT)) & PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_CURSOR_MASK)

#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_POST_CURSOR_MASK (0x3F000U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_POST_CURSOR_SHIFT (12U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_POST_CURSOR_WIDTH (6U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_POST_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_POST_CURSOR_SHIFT)) & PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_POST_CURSOR_MASK)

#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_RX_HINT_MASK (0x1C0000U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_RX_HINT_SHIFT (18U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_RX_HINT_WIDTH (3U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_RX_HINT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_RX_HINT_SHIFT)) & PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_RX_HINT_MASK)

#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_FOM_VALUE_MASK (0xFF000000U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_FOM_VALUE_SHIFT (24U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_FOM_VALUE_WIDTH (8U)
#define PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_FOM_VALUE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_FOM_VALUE_SHIFT)) & PCIE_RC_SD_EQ_STATUS2_REG_EQ_LOCAL_FOM_VALUE_MASK)
/*! @} */

/*! @name SD_EQ_STATUS3_REG - Silicon Debug EQ Status 3 */
/*! @{ */

#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_PRE_CURSOR_MASK (0x3FU)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_PRE_CURSOR_SHIFT (0U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_PRE_CURSOR_WIDTH (6U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_PRE_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_PRE_CURSOR_SHIFT)) & PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_PRE_CURSOR_MASK)

#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_CURSOR_MASK (0xFC0U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_CURSOR_SHIFT (6U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_CURSOR_WIDTH (6U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_CURSOR_SHIFT)) & PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_CURSOR_MASK)

#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_POST_CURSOR_MASK (0x3F000U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_POST_CURSOR_SHIFT (12U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_POST_CURSOR_WIDTH (6U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_POST_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_POST_CURSOR_SHIFT)) & PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_POST_CURSOR_MASK)

#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_LF_MASK (0xFC0000U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_LF_SHIFT (18U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_LF_WIDTH (6U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_LF(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_LF_SHIFT)) & PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_LF_MASK)

#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_FS_MASK (0x3F000000U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_FS_SHIFT (24U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_FS_WIDTH (6U)
#define PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_FS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_FS_SHIFT)) & PCIE_RC_SD_EQ_STATUS3_REG_EQ_REMOTE_FS_MASK)
/*! @} */

/*! @name RASDP_EXT_CAP_HDR_OFF - PCIe Extended Capability ID, Capability Version And Next Capability Offset */
/*! @{ */

#define PCIE_RC_RASDP_EXT_CAP_HDR_OFF_ID_MASK    (0xFFFFU)
#define PCIE_RC_RASDP_EXT_CAP_HDR_OFF_ID_SHIFT   (0U)
#define PCIE_RC_RASDP_EXT_CAP_HDR_OFF_ID_WIDTH   (16U)
#define PCIE_RC_RASDP_EXT_CAP_HDR_OFF_ID(x)      (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_EXT_CAP_HDR_OFF_ID_SHIFT)) & PCIE_RC_RASDP_EXT_CAP_HDR_OFF_ID_MASK)

#define PCIE_RC_RASDP_EXT_CAP_HDR_OFF_CAP_MASK   (0xF0000U)
#define PCIE_RC_RASDP_EXT_CAP_HDR_OFF_CAP_SHIFT  (16U)
#define PCIE_RC_RASDP_EXT_CAP_HDR_OFF_CAP_WIDTH  (4U)
#define PCIE_RC_RASDP_EXT_CAP_HDR_OFF_CAP(x)     (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_EXT_CAP_HDR_OFF_CAP_SHIFT)) & PCIE_RC_RASDP_EXT_CAP_HDR_OFF_CAP_MASK)

#define PCIE_RC_RASDP_EXT_CAP_HDR_OFF_NEXT_OFFSET_MASK (0xFFF00000U)
#define PCIE_RC_RASDP_EXT_CAP_HDR_OFF_NEXT_OFFSET_SHIFT (20U)
#define PCIE_RC_RASDP_EXT_CAP_HDR_OFF_NEXT_OFFSET_WIDTH (12U)
#define PCIE_RC_RASDP_EXT_CAP_HDR_OFF_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_EXT_CAP_HDR_OFF_NEXT_OFFSET_SHIFT)) & PCIE_RC_RASDP_EXT_CAP_HDR_OFF_NEXT_OFFSET_MASK)
/*! @} */

/*! @name RASDP_VENDOR_SPECIFIC_HDR_OFF - Vendor Specific Header */
/*! @{ */

#define PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_MASK (0xFFFFU)
#define PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_SHIFT (0U)
#define PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_WIDTH (16U)
#define PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_SHIFT)) & PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_MASK)

#define PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_MASK (0xF0000U)
#define PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_SHIFT (16U)
#define PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_WIDTH (4U)
#define PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_SHIFT)) & PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_MASK)

#define PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_MASK (0xFFF00000U)
#define PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_SHIFT (20U)
#define PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_WIDTH (12U)
#define PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_SHIFT)) & PCIE_RC_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_MASK)
/*! @} */

/*! @name RASDP_ERROR_PROT_CTRL_OFF - ECC error correction control */
/*! @{ */

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_TX_MASK (0x1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_TX_SHIFT (0U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_TX_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_TX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_TX_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_TX_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_MASTER_MASK (0x2U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_MASTER_SHIFT (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_MASTER_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_MASTER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_MASTER_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_MASTER_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_OUTBOUND_MASK (0x4U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_OUTBOUND_SHIFT (2U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_OUTBOUND_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_OUTBOUND_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_OUTBOUND_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_WRITE_MASK (0x8U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_WRITE_SHIFT (3U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_WRITE_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_WRITE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_WRITE_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_WRITE_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_TX_MASK (0x10U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_TX_SHIFT (4U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_TX_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_TX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_TX_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_TX_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_TX_MASK (0x20U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_TX_SHIFT (5U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_TX_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_TX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_TX_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_TX_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_TX_MASK (0x40U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_TX_SHIFT (6U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_TX_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_TX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_TX_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_TX_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_RX_MASK (0x10000U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_RX_SHIFT (16U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_RX_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_RX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_RX_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_RX_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_COMPLETION_MASK (0x20000U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_COMPLETION_SHIFT (17U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_COMPLETION_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_COMPLETION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_COMPLETION_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_COMPLETION_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_REQUEST_MASK (0x40000U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_REQUEST_SHIFT (18U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_REQUEST_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_REQUEST(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_REQUEST_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_REQUEST_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_READ_MASK (0x80000U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_READ_SHIFT (19U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_READ_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_READ(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_READ_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_READ_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_RX_MASK (0x100000U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_RX_SHIFT (20U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_RX_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_RX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_RX_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_RX_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_RX_MASK (0x200000U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_RX_SHIFT (21U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_RX_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_RX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_RX_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_RX_MASK)

#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_RX_MASK (0x400000U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_RX_SHIFT (22U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_RX_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_RX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_RX_SHIFT)) & PCIE_RC_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_RX_MASK)
/*! @} */

/*! @name RASDP_CORR_COUNTER_CTRL_OFF - Corrected error (1-bit ECC) counter selection and control */
/*! @{ */

#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_CLEAR_COUNTERS_MASK (0x1U)
#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_CLEAR_COUNTERS_SHIFT (0U)
#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_CLEAR_COUNTERS_WIDTH (1U)
#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_CLEAR_COUNTERS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_CLEAR_COUNTERS_SHIFT)) & PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_CLEAR_COUNTERS_MASK)

#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_EN_COUNTERS_MASK (0x10U)
#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_EN_COUNTERS_SHIFT (4U)
#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_EN_COUNTERS_WIDTH (1U)
#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_EN_COUNTERS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_EN_COUNTERS_SHIFT)) & PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_EN_COUNTERS_MASK)

#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_REGION_MASK (0xF00000U)
#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_REGION_SHIFT (20U)
#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_REGION_WIDTH (4U)
#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_REGION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_REGION_SHIFT)) & PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_REGION_MASK)

#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_MASK (0xFF000000U)
#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_SHIFT (24U)
#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_WIDTH (8U)
#define PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_SHIFT)) & PCIE_RC_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_MASK)
/*! @} */

/*! @name RASDP_CORR_COUNT_REPORT_OFF - Corrected error (1-bit ECC) counter data */
/*! @{ */

#define PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_MASK (0xFFU)
#define PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SHIFT (0U)
#define PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_WIDTH (8U)
#define PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SHIFT)) & PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_MASK)

#define PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_REGION_MASK (0xF00000U)
#define PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_REGION_SHIFT (20U)
#define PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_REGION_WIDTH (4U)
#define PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_REGION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_REGION_SHIFT)) & PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_REGION_MASK)

#define PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_MASK (0xFF000000U)
#define PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_SHIFT (24U)
#define PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_WIDTH (8U)
#define PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_SHIFT)) & PCIE_RC_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_MASK)
/*! @} */

/*! @name RASDP_UNCORR_COUNTER_CTRL_OFF - Uncorrected error (2-bit ECC and parity) counter selection and control */
/*! @{ */

#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_CLEAR_COUNTERS_MASK (0x1U)
#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_CLEAR_COUNTERS_SHIFT (0U)
#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_CLEAR_COUNTERS_WIDTH (1U)
#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_CLEAR_COUNTERS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_CLEAR_COUNTERS_SHIFT)) & PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_CLEAR_COUNTERS_MASK)

#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_EN_COUNTERS_MASK (0x10U)
#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_EN_COUNTERS_SHIFT (4U)
#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_EN_COUNTERS_WIDTH (1U)
#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_EN_COUNTERS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_EN_COUNTERS_SHIFT)) & PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_EN_COUNTERS_MASK)

#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_REGION_MASK (0xF00000U)
#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_REGION_SHIFT (20U)
#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_REGION_WIDTH (4U)
#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_REGION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_REGION_SHIFT)) & PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_REGION_MASK)

#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_MASK (0xFF000000U)
#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_SHIFT (24U)
#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_WIDTH (8U)
#define PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_SHIFT)) & PCIE_RC_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_MASK)
/*! @} */

/*! @name RASDP_UNCORR_COUNT_REPORT_OFF - Uncorrected error (2-bit ECC and parity) counter data */
/*! @{ */

#define PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_MASK (0xFFU)
#define PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SHIFT (0U)
#define PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_WIDTH (8U)
#define PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SHIFT)) & PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_MASK)

#define PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_REGION_MASK (0xF00000U)
#define PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_REGION_SHIFT (20U)
#define PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_REGION_WIDTH (4U)
#define PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_REGION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_REGION_SHIFT)) & PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_REGION_MASK)

#define PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_MASK (0xFF000000U)
#define PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_SHIFT (24U)
#define PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_WIDTH (8U)
#define PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_SHIFT)) & PCIE_RC_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_MASK)
/*! @} */

/*! @name RASDP_ERROR_INJ_CTRL_OFF - Error injection control */
/*! @{ */

#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_EN_MASK (0x1U)
#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_EN_SHIFT (0U)
#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_EN_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_EN_SHIFT)) & PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_EN_MASK)

#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_TYPE_MASK (0x30U)
#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_TYPE_SHIFT (4U)
#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_TYPE_WIDTH (2U)
#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_TYPE_SHIFT)) & PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_TYPE_MASK)

#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_COUNT_MASK (0xFF00U)
#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_COUNT_SHIFT (8U)
#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_COUNT_WIDTH (8U)
#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_COUNT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_COUNT_SHIFT)) & PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_COUNT_MASK)

#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_LOC_MASK (0xFF0000U)
#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_LOC_SHIFT (16U)
#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_LOC_WIDTH (8U)
#define PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_LOC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_LOC_SHIFT)) & PCIE_RC_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_LOC_MASK)
/*! @} */

/*! @name RASDP_CORR_ERROR_LOCATION_OFF - Corrected errors locations */
/*! @{ */

#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_REG_FIRST_CORR_ERROR_MASK (0xF0U)
#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_REG_FIRST_CORR_ERROR_SHIFT (4U)
#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_REG_FIRST_CORR_ERROR_WIDTH (4U)
#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_REG_FIRST_CORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_REG_FIRST_CORR_ERROR_SHIFT)) & PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_REG_FIRST_CORR_ERROR_MASK)

#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_LOC_FIRST_CORR_ERROR_MASK (0xFF00U)
#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_LOC_FIRST_CORR_ERROR_SHIFT (8U)
#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_LOC_FIRST_CORR_ERROR_WIDTH (8U)
#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_LOC_FIRST_CORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_LOC_FIRST_CORR_ERROR_SHIFT)) & PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_LOC_FIRST_CORR_ERROR_MASK)

#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_REG_LAST_CORR_ERROR_MASK (0xF00000U)
#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_REG_LAST_CORR_ERROR_SHIFT (20U)
#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_REG_LAST_CORR_ERROR_WIDTH (4U)
#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_REG_LAST_CORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_REG_LAST_CORR_ERROR_SHIFT)) & PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_REG_LAST_CORR_ERROR_MASK)

#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_LOC_LAST_CORR_ERROR_MASK (0xFF000000U)
#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_LOC_LAST_CORR_ERROR_SHIFT (24U)
#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_LOC_LAST_CORR_ERROR_WIDTH (8U)
#define PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_LOC_LAST_CORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_LOC_LAST_CORR_ERROR_SHIFT)) & PCIE_RC_RASDP_CORR_ERROR_LOCATION_OFF_LOC_LAST_CORR_ERROR_MASK)
/*! @} */

/*! @name RASDP_UNCORR_ERROR_LOCATION_OFF - Uncorrected errors locations */
/*! @{ */

#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_FIRST_UNCORR_ERROR_MASK (0xF0U)
#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_FIRST_UNCORR_ERROR_SHIFT (4U)
#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_FIRST_UNCORR_ERROR_WIDTH (4U)
#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_FIRST_UNCORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_FIRST_UNCORR_ERROR_SHIFT)) & PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_FIRST_UNCORR_ERROR_MASK)

#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_FIRST_UNCORR_ERROR_MASK (0xFF00U)
#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_FIRST_UNCORR_ERROR_SHIFT (8U)
#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_FIRST_UNCORR_ERROR_WIDTH (8U)
#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_FIRST_UNCORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_FIRST_UNCORR_ERROR_SHIFT)) & PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_FIRST_UNCORR_ERROR_MASK)

#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_LAST_UNCORR_ERROR_MASK (0xF00000U)
#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_LAST_UNCORR_ERROR_SHIFT (20U)
#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_LAST_UNCORR_ERROR_WIDTH (4U)
#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_LAST_UNCORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_LAST_UNCORR_ERROR_SHIFT)) & PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_LAST_UNCORR_ERROR_MASK)

#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_LAST_UNCORR_ERROR_MASK (0xFF000000U)
#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_LAST_UNCORR_ERROR_SHIFT (24U)
#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_LAST_UNCORR_ERROR_WIDTH (8U)
#define PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_LAST_UNCORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_LAST_UNCORR_ERROR_SHIFT)) & PCIE_RC_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_LAST_UNCORR_ERROR_MASK)
/*! @} */

/*! @name RASDP_ERROR_MODE_EN_OFF - RASDP error mode enable */
/*! @{ */

#define PCIE_RC_RASDP_ERROR_MODE_EN_OFF_ERROR_MODE_EN_MASK (0x1U)
#define PCIE_RC_RASDP_ERROR_MODE_EN_OFF_ERROR_MODE_EN_SHIFT (0U)
#define PCIE_RC_RASDP_ERROR_MODE_EN_OFF_ERROR_MODE_EN_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_MODE_EN_OFF_ERROR_MODE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_MODE_EN_OFF_ERROR_MODE_EN_SHIFT)) & PCIE_RC_RASDP_ERROR_MODE_EN_OFF_ERROR_MODE_EN_MASK)

#define PCIE_RC_RASDP_ERROR_MODE_EN_OFF_AUTO_LINK_DOWN_EN_MASK (0x2U)
#define PCIE_RC_RASDP_ERROR_MODE_EN_OFF_AUTO_LINK_DOWN_EN_SHIFT (1U)
#define PCIE_RC_RASDP_ERROR_MODE_EN_OFF_AUTO_LINK_DOWN_EN_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_MODE_EN_OFF_AUTO_LINK_DOWN_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_MODE_EN_OFF_AUTO_LINK_DOWN_EN_SHIFT)) & PCIE_RC_RASDP_ERROR_MODE_EN_OFF_AUTO_LINK_DOWN_EN_MASK)
/*! @} */

/*! @name RASDP_ERROR_MODE_CLEAR_OFF - Exit RASDP error mode */
/*! @{ */

#define PCIE_RC_RASDP_ERROR_MODE_CLEAR_OFF_ERROR_MODE_CLEAR_MASK (0x1U)
#define PCIE_RC_RASDP_ERROR_MODE_CLEAR_OFF_ERROR_MODE_CLEAR_SHIFT (0U)
#define PCIE_RC_RASDP_ERROR_MODE_CLEAR_OFF_ERROR_MODE_CLEAR_WIDTH (1U)
#define PCIE_RC_RASDP_ERROR_MODE_CLEAR_OFF_ERROR_MODE_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_ERROR_MODE_CLEAR_OFF_ERROR_MODE_CLEAR_SHIFT)) & PCIE_RC_RASDP_ERROR_MODE_CLEAR_OFF_ERROR_MODE_CLEAR_MASK)
/*! @} */

/*! @name RASDP_RAM_ADDR_CORR_ERROR_OFF - RAM Address where a corrected error (1-bit ECC) has been detected */
/*! @{ */

#define PCIE_RC_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_ADDR_CORR_ERROR_MASK (0x7FFFFFFU)
#define PCIE_RC_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_ADDR_CORR_ERROR_SHIFT (0U)
#define PCIE_RC_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_ADDR_CORR_ERROR_WIDTH (27U)
#define PCIE_RC_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_ADDR_CORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_ADDR_CORR_ERROR_SHIFT)) & PCIE_RC_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_ADDR_CORR_ERROR_MASK)

#define PCIE_RC_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_INDEX_CORR_ERROR_MASK (0xF0000000U)
#define PCIE_RC_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_INDEX_CORR_ERROR_SHIFT (28U)
#define PCIE_RC_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_INDEX_CORR_ERROR_WIDTH (4U)
#define PCIE_RC_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_INDEX_CORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_INDEX_CORR_ERROR_SHIFT)) & PCIE_RC_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_INDEX_CORR_ERROR_MASK)
/*! @} */

/*! @name RASDP_RAM_ADDR_UNCORR_ERROR_OFF - RAM Address where an uncorrected error (2-bit ECC) has been detected */
/*! @{ */

#define PCIE_RC_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_ADDR_UNCORR_ERROR_MASK (0x7FFFFFFU)
#define PCIE_RC_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_ADDR_UNCORR_ERROR_SHIFT (0U)
#define PCIE_RC_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_ADDR_UNCORR_ERROR_WIDTH (27U)
#define PCIE_RC_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_ADDR_UNCORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_ADDR_UNCORR_ERROR_SHIFT)) & PCIE_RC_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_ADDR_UNCORR_ERROR_MASK)

#define PCIE_RC_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_INDEX_UNCORR_ERROR_MASK (0xF0000000U)
#define PCIE_RC_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_INDEX_UNCORR_ERROR_SHIFT (28U)
#define PCIE_RC_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_INDEX_UNCORR_ERROR_WIDTH (4U)
#define PCIE_RC_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_INDEX_UNCORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_INDEX_UNCORR_ERROR_SHIFT)) & PCIE_RC_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_INDEX_UNCORR_ERROR_MASK)
/*! @} */

/*! @name ACK_LATENCY_TIMER_OFF - Ack Latency Timer and Replay Timer */
/*! @{ */

#define PCIE_RC_ACK_LATENCY_TIMER_OFF_ROUND_TRIP_LATENCY_TIME_LIMIT_MASK (0xFFFFU)
#define PCIE_RC_ACK_LATENCY_TIMER_OFF_ROUND_TRIP_LATENCY_TIME_LIMIT_SHIFT (0U)
#define PCIE_RC_ACK_LATENCY_TIMER_OFF_ROUND_TRIP_LATENCY_TIME_LIMIT_WIDTH (16U)
#define PCIE_RC_ACK_LATENCY_TIMER_OFF_ROUND_TRIP_LATENCY_TIME_LIMIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ACK_LATENCY_TIMER_OFF_ROUND_TRIP_LATENCY_TIME_LIMIT_SHIFT)) & PCIE_RC_ACK_LATENCY_TIMER_OFF_ROUND_TRIP_LATENCY_TIME_LIMIT_MASK)

#define PCIE_RC_ACK_LATENCY_TIMER_OFF_REPLAY_TIME_LIMIT_MASK (0xFFFF0000U)
#define PCIE_RC_ACK_LATENCY_TIMER_OFF_REPLAY_TIME_LIMIT_SHIFT (16U)
#define PCIE_RC_ACK_LATENCY_TIMER_OFF_REPLAY_TIME_LIMIT_WIDTH (16U)
#define PCIE_RC_ACK_LATENCY_TIMER_OFF_REPLAY_TIME_LIMIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ACK_LATENCY_TIMER_OFF_REPLAY_TIME_LIMIT_SHIFT)) & PCIE_RC_ACK_LATENCY_TIMER_OFF_REPLAY_TIME_LIMIT_MASK)
/*! @} */

/*! @name VENDOR_SPEC_DLLP_OFF - Vendor Specific DLLP */
/*! @{ */

#define PCIE_RC_VENDOR_SPEC_DLLP_OFF_VENDOR_SPEC_DLLP_MASK (0xFFFFFFFFU)
#define PCIE_RC_VENDOR_SPEC_DLLP_OFF_VENDOR_SPEC_DLLP_SHIFT (0U)
#define PCIE_RC_VENDOR_SPEC_DLLP_OFF_VENDOR_SPEC_DLLP_WIDTH (32U)
#define PCIE_RC_VENDOR_SPEC_DLLP_OFF_VENDOR_SPEC_DLLP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VENDOR_SPEC_DLLP_OFF_VENDOR_SPEC_DLLP_SHIFT)) & PCIE_RC_VENDOR_SPEC_DLLP_OFF_VENDOR_SPEC_DLLP_MASK)
/*! @} */

/*! @name PORT_FORCE_OFF - Port Force Link */
/*! @{ */

#define PCIE_RC_PORT_FORCE_OFF_LINK_NUM_MASK     (0xFFU)
#define PCIE_RC_PORT_FORCE_OFF_LINK_NUM_SHIFT    (0U)
#define PCIE_RC_PORT_FORCE_OFF_LINK_NUM_WIDTH    (8U)
#define PCIE_RC_PORT_FORCE_OFF_LINK_NUM(x)       (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_FORCE_OFF_LINK_NUM_SHIFT)) & PCIE_RC_PORT_FORCE_OFF_LINK_NUM_MASK)

#define PCIE_RC_PORT_FORCE_OFF_FORCED_LTSSM_MASK (0xF00U)
#define PCIE_RC_PORT_FORCE_OFF_FORCED_LTSSM_SHIFT (8U)
#define PCIE_RC_PORT_FORCE_OFF_FORCED_LTSSM_WIDTH (4U)
#define PCIE_RC_PORT_FORCE_OFF_FORCED_LTSSM(x)   (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_FORCE_OFF_FORCED_LTSSM_SHIFT)) & PCIE_RC_PORT_FORCE_OFF_FORCED_LTSSM_MASK)

#define PCIE_RC_PORT_FORCE_OFF_FORCE_EN_MASK     (0x8000U)
#define PCIE_RC_PORT_FORCE_OFF_FORCE_EN_SHIFT    (15U)
#define PCIE_RC_PORT_FORCE_OFF_FORCE_EN_WIDTH    (1U)
#define PCIE_RC_PORT_FORCE_OFF_FORCE_EN(x)       (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_FORCE_OFF_FORCE_EN_SHIFT)) & PCIE_RC_PORT_FORCE_OFF_FORCE_EN_MASK)

#define PCIE_RC_PORT_FORCE_OFF_LINK_STATE_MASK   (0x3F0000U)
#define PCIE_RC_PORT_FORCE_OFF_LINK_STATE_SHIFT  (16U)
#define PCIE_RC_PORT_FORCE_OFF_LINK_STATE_WIDTH  (6U)
#define PCIE_RC_PORT_FORCE_OFF_LINK_STATE(x)     (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_FORCE_OFF_LINK_STATE_SHIFT)) & PCIE_RC_PORT_FORCE_OFF_LINK_STATE_MASK)

#define PCIE_RC_PORT_FORCE_OFF_DO_DESKEW_FOR_SRIS_MASK (0x800000U)
#define PCIE_RC_PORT_FORCE_OFF_DO_DESKEW_FOR_SRIS_SHIFT (23U)
#define PCIE_RC_PORT_FORCE_OFF_DO_DESKEW_FOR_SRIS_WIDTH (1U)
#define PCIE_RC_PORT_FORCE_OFF_DO_DESKEW_FOR_SRIS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_FORCE_OFF_DO_DESKEW_FOR_SRIS_SHIFT)) & PCIE_RC_PORT_FORCE_OFF_DO_DESKEW_FOR_SRIS_MASK)
/*! @} */

/*! @name ACK_F_ASPM_CTRL_OFF - Ack Frequency and L0-L1 ASPM Control */
/*! @{ */

#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_ACK_FREQ_MASK (0xFFU)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_ACK_FREQ_SHIFT (0U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_ACK_FREQ_WIDTH (8U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_ACK_FREQ(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ACK_F_ASPM_CTRL_OFF_ACK_FREQ_SHIFT)) & PCIE_RC_ACK_F_ASPM_CTRL_OFF_ACK_FREQ_MASK)

#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_ACK_N_FTS_MASK (0xFF00U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_ACK_N_FTS_SHIFT (8U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_ACK_N_FTS_WIDTH (8U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_ACK_N_FTS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ACK_F_ASPM_CTRL_OFF_ACK_N_FTS_SHIFT)) & PCIE_RC_ACK_F_ASPM_CTRL_OFF_ACK_N_FTS_MASK)

#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_COMMON_CLK_N_FTS_MASK (0xFF0000U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_COMMON_CLK_N_FTS_SHIFT (16U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_COMMON_CLK_N_FTS_WIDTH (8U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_COMMON_CLK_N_FTS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ACK_F_ASPM_CTRL_OFF_COMMON_CLK_N_FTS_SHIFT)) & PCIE_RC_ACK_F_ASPM_CTRL_OFF_COMMON_CLK_N_FTS_MASK)

#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_L0S_ENTRANCE_LATENCY_MASK (0x7000000U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_L0S_ENTRANCE_LATENCY_SHIFT (24U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_L0S_ENTRANCE_LATENCY_WIDTH (3U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_L0S_ENTRANCE_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ACK_F_ASPM_CTRL_OFF_L0S_ENTRANCE_LATENCY_SHIFT)) & PCIE_RC_ACK_F_ASPM_CTRL_OFF_L0S_ENTRANCE_LATENCY_MASK)

#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_L1_ENTRANCE_LATENCY_MASK (0x38000000U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_L1_ENTRANCE_LATENCY_SHIFT (27U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_L1_ENTRANCE_LATENCY_WIDTH (3U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_L1_ENTRANCE_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ACK_F_ASPM_CTRL_OFF_L1_ENTRANCE_LATENCY_SHIFT)) & PCIE_RC_ACK_F_ASPM_CTRL_OFF_L1_ENTRANCE_LATENCY_MASK)

#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_ENTER_ASPM_MASK (0x40000000U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_ENTER_ASPM_SHIFT (30U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_ENTER_ASPM_WIDTH (1U)
#define PCIE_RC_ACK_F_ASPM_CTRL_OFF_ENTER_ASPM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ACK_F_ASPM_CTRL_OFF_ENTER_ASPM_SHIFT)) & PCIE_RC_ACK_F_ASPM_CTRL_OFF_ENTER_ASPM_MASK)
/*! @} */

/*! @name PORT_LINK_CTRL_OFF - Port Link Control */
/*! @{ */

#define PCIE_RC_PORT_LINK_CTRL_OFF_VENDOR_SPECIFIC_DLLP_REQ_MASK (0x1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_VENDOR_SPECIFIC_DLLP_REQ_SHIFT (0U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_VENDOR_SPECIFIC_DLLP_REQ_WIDTH (1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_VENDOR_SPECIFIC_DLLP_REQ(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_VENDOR_SPECIFIC_DLLP_REQ_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_VENDOR_SPECIFIC_DLLP_REQ_MASK)

#define PCIE_RC_PORT_LINK_CTRL_OFF_SCRAMBLE_DISABLE_MASK (0x2U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_SCRAMBLE_DISABLE_SHIFT (1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_SCRAMBLE_DISABLE_WIDTH (1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_SCRAMBLE_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_SCRAMBLE_DISABLE_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_SCRAMBLE_DISABLE_MASK)

#define PCIE_RC_PORT_LINK_CTRL_OFF_LOOPBACK_ENABLE_MASK (0x4U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_LOOPBACK_ENABLE_SHIFT (2U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_LOOPBACK_ENABLE_WIDTH (1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_LOOPBACK_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_LOOPBACK_ENABLE_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_LOOPBACK_ENABLE_MASK)

#define PCIE_RC_PORT_LINK_CTRL_OFF_RESET_ASSERT_MASK (0x8U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_RESET_ASSERT_SHIFT (3U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_RESET_ASSERT_WIDTH (1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_RESET_ASSERT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_RESET_ASSERT_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_RESET_ASSERT_MASK)

#define PCIE_RC_PORT_LINK_CTRL_OFF_DLL_LINK_EN_MASK (0x20U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_DLL_LINK_EN_SHIFT (5U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_DLL_LINK_EN_WIDTH (1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_DLL_LINK_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_DLL_LINK_EN_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_DLL_LINK_EN_MASK)

#define PCIE_RC_PORT_LINK_CTRL_OFF_LINK_DISABLE_MASK (0x40U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_LINK_DISABLE_SHIFT (6U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_LINK_DISABLE_WIDTH (1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_LINK_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_LINK_DISABLE_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_LINK_DISABLE_MASK)

#define PCIE_RC_PORT_LINK_CTRL_OFF_FAST_LINK_MODE_MASK (0x80U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_FAST_LINK_MODE_SHIFT (7U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_FAST_LINK_MODE_WIDTH (1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_FAST_LINK_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_FAST_LINK_MODE_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_FAST_LINK_MODE_MASK)

#define PCIE_RC_PORT_LINK_CTRL_OFF_LINK_RATE_MASK (0xF00U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_LINK_RATE_SHIFT (8U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_LINK_RATE_WIDTH (4U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_LINK_RATE(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_LINK_RATE_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_LINK_RATE_MASK)

#define PCIE_RC_PORT_LINK_CTRL_OFF_LINK_CAPABLE_MASK (0x3F0000U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_LINK_CAPABLE_SHIFT (16U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_LINK_CAPABLE_WIDTH (6U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_LINK_CAPABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_LINK_CAPABLE_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_LINK_CAPABLE_MASK)

#define PCIE_RC_PORT_LINK_CTRL_OFF_BEACON_ENABLE_MASK (0x1000000U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_BEACON_ENABLE_SHIFT (24U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_BEACON_ENABLE_WIDTH (1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_BEACON_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_BEACON_ENABLE_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_BEACON_ENABLE_MASK)

#define PCIE_RC_PORT_LINK_CTRL_OFF_CORRUPT_LCRC_ENABLE_MASK (0x2000000U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_CORRUPT_LCRC_ENABLE_SHIFT (25U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_CORRUPT_LCRC_ENABLE_WIDTH (1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_CORRUPT_LCRC_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_CORRUPT_LCRC_ENABLE_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_CORRUPT_LCRC_ENABLE_MASK)

#define PCIE_RC_PORT_LINK_CTRL_OFF_EXTENDED_SYNCH_MASK (0x4000000U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_EXTENDED_SYNCH_SHIFT (26U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_EXTENDED_SYNCH_WIDTH (1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_EXTENDED_SYNCH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_EXTENDED_SYNCH_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_EXTENDED_SYNCH_MASK)

#define PCIE_RC_PORT_LINK_CTRL_OFF_TRANSMIT_LANE_REVERSALE_ENABLE_MASK (0x8000000U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_TRANSMIT_LANE_REVERSALE_ENABLE_SHIFT (27U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_TRANSMIT_LANE_REVERSALE_ENABLE_WIDTH (1U)
#define PCIE_RC_PORT_LINK_CTRL_OFF_TRANSMIT_LANE_REVERSALE_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PORT_LINK_CTRL_OFF_TRANSMIT_LANE_REVERSALE_ENABLE_SHIFT)) & PCIE_RC_PORT_LINK_CTRL_OFF_TRANSMIT_LANE_REVERSALE_ENABLE_MASK)
/*! @} */

/*! @name LANE_SKEW_OFF - Lane Skew */
/*! @{ */

#define PCIE_RC_LANE_SKEW_OFF_INSERT_LANE_SKEW_MASK (0xFFFFFFU)
#define PCIE_RC_LANE_SKEW_OFF_INSERT_LANE_SKEW_SHIFT (0U)
#define PCIE_RC_LANE_SKEW_OFF_INSERT_LANE_SKEW_WIDTH (24U)
#define PCIE_RC_LANE_SKEW_OFF_INSERT_LANE_SKEW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LANE_SKEW_OFF_INSERT_LANE_SKEW_SHIFT)) & PCIE_RC_LANE_SKEW_OFF_INSERT_LANE_SKEW_MASK)

#define PCIE_RC_LANE_SKEW_OFF_FLOW_CTRL_DISABLE_MASK (0x1000000U)
#define PCIE_RC_LANE_SKEW_OFF_FLOW_CTRL_DISABLE_SHIFT (24U)
#define PCIE_RC_LANE_SKEW_OFF_FLOW_CTRL_DISABLE_WIDTH (1U)
#define PCIE_RC_LANE_SKEW_OFF_FLOW_CTRL_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LANE_SKEW_OFF_FLOW_CTRL_DISABLE_SHIFT)) & PCIE_RC_LANE_SKEW_OFF_FLOW_CTRL_DISABLE_MASK)

#define PCIE_RC_LANE_SKEW_OFF_ACK_NAK_DISABLE_MASK (0x2000000U)
#define PCIE_RC_LANE_SKEW_OFF_ACK_NAK_DISABLE_SHIFT (25U)
#define PCIE_RC_LANE_SKEW_OFF_ACK_NAK_DISABLE_WIDTH (1U)
#define PCIE_RC_LANE_SKEW_OFF_ACK_NAK_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LANE_SKEW_OFF_ACK_NAK_DISABLE_SHIFT)) & PCIE_RC_LANE_SKEW_OFF_ACK_NAK_DISABLE_MASK)

#define PCIE_RC_LANE_SKEW_OFF_GEN34_ELASTIC_BUFFER_MODE_MASK (0x4000000U)
#define PCIE_RC_LANE_SKEW_OFF_GEN34_ELASTIC_BUFFER_MODE_SHIFT (26U)
#define PCIE_RC_LANE_SKEW_OFF_GEN34_ELASTIC_BUFFER_MODE_WIDTH (1U)
#define PCIE_RC_LANE_SKEW_OFF_GEN34_ELASTIC_BUFFER_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LANE_SKEW_OFF_GEN34_ELASTIC_BUFFER_MODE_SHIFT)) & PCIE_RC_LANE_SKEW_OFF_GEN34_ELASTIC_BUFFER_MODE_MASK)

#define PCIE_RC_LANE_SKEW_OFF_IMPLEMENT_NUM_LANES_MASK (0x78000000U)
#define PCIE_RC_LANE_SKEW_OFF_IMPLEMENT_NUM_LANES_SHIFT (27U)
#define PCIE_RC_LANE_SKEW_OFF_IMPLEMENT_NUM_LANES_WIDTH (4U)
#define PCIE_RC_LANE_SKEW_OFF_IMPLEMENT_NUM_LANES(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LANE_SKEW_OFF_IMPLEMENT_NUM_LANES_SHIFT)) & PCIE_RC_LANE_SKEW_OFF_IMPLEMENT_NUM_LANES_MASK)

#define PCIE_RC_LANE_SKEW_OFF_DISABLE_LANE_TO_LANE_DESKEW_MASK (0x80000000U)
#define PCIE_RC_LANE_SKEW_OFF_DISABLE_LANE_TO_LANE_DESKEW_SHIFT (31U)
#define PCIE_RC_LANE_SKEW_OFF_DISABLE_LANE_TO_LANE_DESKEW_WIDTH (1U)
#define PCIE_RC_LANE_SKEW_OFF_DISABLE_LANE_TO_LANE_DESKEW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LANE_SKEW_OFF_DISABLE_LANE_TO_LANE_DESKEW_SHIFT)) & PCIE_RC_LANE_SKEW_OFF_DISABLE_LANE_TO_LANE_DESKEW_MASK)
/*! @} */

/*! @name TIMER_CTRL_MAX_FUNC_NUM_OFF - Timer Control and Max Function Number */
/*! @{ */

#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_MAX_FUNC_NUM_MASK (0xFFU)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_MAX_FUNC_NUM_SHIFT (0U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_MAX_FUNC_NUM_WIDTH (8U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_MAX_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_MAX_FUNC_NUM_SHIFT)) & PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_MAX_FUNC_NUM_MASK)

#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_REPLAY_TIMER_MASK (0x7C000U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_REPLAY_TIMER_SHIFT (14U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_REPLAY_TIMER_WIDTH (5U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_REPLAY_TIMER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_REPLAY_TIMER_SHIFT)) & PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_REPLAY_TIMER_MASK)

#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_ACK_NAK_MASK (0xF80000U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_ACK_NAK_SHIFT (19U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_ACK_NAK_WIDTH (5U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_ACK_NAK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_ACK_NAK_SHIFT)) & PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_ACK_NAK_MASK)

#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_UPDATE_FREQ_TIMER_MASK (0x1F000000U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_UPDATE_FREQ_TIMER_SHIFT (24U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_UPDATE_FREQ_TIMER_WIDTH (5U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_UPDATE_FREQ_TIMER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_UPDATE_FREQ_TIMER_SHIFT)) & PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_UPDATE_FREQ_TIMER_MASK)

#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_FAST_LINK_SCALING_FACTOR_MASK (0x60000000U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_FAST_LINK_SCALING_FACTOR_SHIFT (29U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_FAST_LINK_SCALING_FACTOR_WIDTH (2U)
#define PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_FAST_LINK_SCALING_FACTOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_FAST_LINK_SCALING_FACTOR_SHIFT)) & PCIE_RC_TIMER_CTRL_MAX_FUNC_NUM_OFF_FAST_LINK_SCALING_FACTOR_MASK)
/*! @} */

/*! @name SYMBOL_TIMER_FILTER_1_OFF - Symbol Timer and Filter Mask 1 */
/*! @{ */

#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_SKP_INT_VAL_MASK (0x7FFU)
#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_SKP_INT_VAL_SHIFT (0U)
#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_SKP_INT_VAL_WIDTH (11U)
#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_SKP_INT_VAL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_SKP_INT_VAL_SHIFT)) & PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_SKP_INT_VAL_MASK)

#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_EIDLE_TIMER_MASK (0x7800U)
#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_EIDLE_TIMER_SHIFT (11U)
#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_EIDLE_TIMER_WIDTH (4U)
#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_EIDLE_TIMER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_EIDLE_TIMER_SHIFT)) & PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_EIDLE_TIMER_MASK)

#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_DISABLE_FC_WD_TIMER_MASK (0x8000U)
#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_DISABLE_FC_WD_TIMER_SHIFT (15U)
#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_DISABLE_FC_WD_TIMER_WIDTH (1U)
#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_DISABLE_FC_WD_TIMER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_DISABLE_FC_WD_TIMER_SHIFT)) & PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_DISABLE_FC_WD_TIMER_MASK)

#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_MASK_RADM_1_MASK (0xFFFF0000U)
#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_MASK_RADM_1_SHIFT (16U)
#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_MASK_RADM_1_WIDTH (16U)
#define PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_MASK_RADM_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_MASK_RADM_1_SHIFT)) & PCIE_RC_SYMBOL_TIMER_FILTER_1_OFF_MASK_RADM_1_MASK)
/*! @} */

/*! @name FILTER_MASK_2_OFF - Filter Mask 2 */
/*! @{ */

#define PCIE_RC_FILTER_MASK_2_OFF_MASK_RADM_2_MASK (0xFFFFFFFFU)
#define PCIE_RC_FILTER_MASK_2_OFF_MASK_RADM_2_SHIFT (0U)
#define PCIE_RC_FILTER_MASK_2_OFF_MASK_RADM_2_WIDTH (32U)
#define PCIE_RC_FILTER_MASK_2_OFF_MASK_RADM_2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_FILTER_MASK_2_OFF_MASK_RADM_2_SHIFT)) & PCIE_RC_FILTER_MASK_2_OFF_MASK_RADM_2_MASK)
/*! @} */

/*! @name AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF - AMBA Multiple Outbound Decomposed NP SubRequests Control */
/*! @{ */

#define PCIE_RC_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_OB_RD_SPLIT_BURST_EN_MASK (0x1U)
#define PCIE_RC_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_OB_RD_SPLIT_BURST_EN_SHIFT (0U)
#define PCIE_RC_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_OB_RD_SPLIT_BURST_EN_WIDTH (1U)
#define PCIE_RC_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_OB_RD_SPLIT_BURST_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_OB_RD_SPLIT_BURST_EN_SHIFT)) & PCIE_RC_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_OB_RD_SPLIT_BURST_EN_MASK)
/*! @} */

/*! @name PL_DEBUG0_OFF - Debug Register 0 */
/*! @{ */

#define PCIE_RC_PL_DEBUG0_OFF_DEB_REG_0_MASK     (0xFFFFFFFFU)
#define PCIE_RC_PL_DEBUG0_OFF_DEB_REG_0_SHIFT    (0U)
#define PCIE_RC_PL_DEBUG0_OFF_DEB_REG_0_WIDTH    (32U)
#define PCIE_RC_PL_DEBUG0_OFF_DEB_REG_0(x)       (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PL_DEBUG0_OFF_DEB_REG_0_SHIFT)) & PCIE_RC_PL_DEBUG0_OFF_DEB_REG_0_MASK)
/*! @} */

/*! @name PL_DEBUG1_OFF - Debug Register 1 */
/*! @{ */

#define PCIE_RC_PL_DEBUG1_OFF_DEB_REG_1_MASK     (0xFFFFFFFFU)
#define PCIE_RC_PL_DEBUG1_OFF_DEB_REG_1_SHIFT    (0U)
#define PCIE_RC_PL_DEBUG1_OFF_DEB_REG_1_WIDTH    (32U)
#define PCIE_RC_PL_DEBUG1_OFF_DEB_REG_1(x)       (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PL_DEBUG1_OFF_DEB_REG_1_SHIFT)) & PCIE_RC_PL_DEBUG1_OFF_DEB_REG_1_MASK)
/*! @} */

/*! @name TX_P_FC_CREDIT_STATUS_OFF - Transmit Posted FC Credit Status */
/*! @{ */

#define PCIE_RC_TX_P_FC_CREDIT_STATUS_OFF_TX_P_DATA_FC_CREDIT_MASK (0xFFFU)
#define PCIE_RC_TX_P_FC_CREDIT_STATUS_OFF_TX_P_DATA_FC_CREDIT_SHIFT (0U)
#define PCIE_RC_TX_P_FC_CREDIT_STATUS_OFF_TX_P_DATA_FC_CREDIT_WIDTH (12U)
#define PCIE_RC_TX_P_FC_CREDIT_STATUS_OFF_TX_P_DATA_FC_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TX_P_FC_CREDIT_STATUS_OFF_TX_P_DATA_FC_CREDIT_SHIFT)) & PCIE_RC_TX_P_FC_CREDIT_STATUS_OFF_TX_P_DATA_FC_CREDIT_MASK)

#define PCIE_RC_TX_P_FC_CREDIT_STATUS_OFF_TX_P_HEADER_FC_CREDIT_MASK (0xFF000U)
#define PCIE_RC_TX_P_FC_CREDIT_STATUS_OFF_TX_P_HEADER_FC_CREDIT_SHIFT (12U)
#define PCIE_RC_TX_P_FC_CREDIT_STATUS_OFF_TX_P_HEADER_FC_CREDIT_WIDTH (8U)
#define PCIE_RC_TX_P_FC_CREDIT_STATUS_OFF_TX_P_HEADER_FC_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TX_P_FC_CREDIT_STATUS_OFF_TX_P_HEADER_FC_CREDIT_SHIFT)) & PCIE_RC_TX_P_FC_CREDIT_STATUS_OFF_TX_P_HEADER_FC_CREDIT_MASK)
/*! @} */

/*! @name TX_NP_FC_CREDIT_STATUS_OFF - Transmit Non-Posted FC Credit Status */
/*! @{ */

#define PCIE_RC_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_DATA_FC_CREDIT_MASK (0xFFFU)
#define PCIE_RC_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_DATA_FC_CREDIT_SHIFT (0U)
#define PCIE_RC_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_DATA_FC_CREDIT_WIDTH (12U)
#define PCIE_RC_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_DATA_FC_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_DATA_FC_CREDIT_SHIFT)) & PCIE_RC_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_DATA_FC_CREDIT_MASK)

#define PCIE_RC_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_HEADER_FC_CREDIT_MASK (0xFF000U)
#define PCIE_RC_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_HEADER_FC_CREDIT_SHIFT (12U)
#define PCIE_RC_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_HEADER_FC_CREDIT_WIDTH (8U)
#define PCIE_RC_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_HEADER_FC_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_HEADER_FC_CREDIT_SHIFT)) & PCIE_RC_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_HEADER_FC_CREDIT_MASK)
/*! @} */

/*! @name TX_CPL_FC_CREDIT_STATUS_OFF - Transmit Completion FC Credit Status */
/*! @{ */

#define PCIE_RC_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_DATA_FC_CREDIT_MASK (0xFFFU)
#define PCIE_RC_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_DATA_FC_CREDIT_SHIFT (0U)
#define PCIE_RC_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_DATA_FC_CREDIT_WIDTH (12U)
#define PCIE_RC_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_DATA_FC_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_DATA_FC_CREDIT_SHIFT)) & PCIE_RC_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_DATA_FC_CREDIT_MASK)

#define PCIE_RC_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_HEADER_FC_CREDIT_MASK (0xFF000U)
#define PCIE_RC_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_HEADER_FC_CREDIT_SHIFT (12U)
#define PCIE_RC_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_HEADER_FC_CREDIT_WIDTH (8U)
#define PCIE_RC_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_HEADER_FC_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_HEADER_FC_CREDIT_SHIFT)) & PCIE_RC_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_HEADER_FC_CREDIT_MASK)
/*! @} */

/*! @name QUEUE_STATUS_OFF - Queue Status */
/*! @{ */

#define PCIE_RC_QUEUE_STATUS_OFF_RX_TLP_FC_CREDIT_NON_RETURN_MASK (0x1U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_TLP_FC_CREDIT_NON_RETURN_SHIFT (0U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_TLP_FC_CREDIT_NON_RETURN_WIDTH (1U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_TLP_FC_CREDIT_NON_RETURN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_QUEUE_STATUS_OFF_RX_TLP_FC_CREDIT_NON_RETURN_SHIFT)) & PCIE_RC_QUEUE_STATUS_OFF_RX_TLP_FC_CREDIT_NON_RETURN_MASK)

#define PCIE_RC_QUEUE_STATUS_OFF_TX_RETRY_BUFFER_NE_MASK (0x2U)
#define PCIE_RC_QUEUE_STATUS_OFF_TX_RETRY_BUFFER_NE_SHIFT (1U)
#define PCIE_RC_QUEUE_STATUS_OFF_TX_RETRY_BUFFER_NE_WIDTH (1U)
#define PCIE_RC_QUEUE_STATUS_OFF_TX_RETRY_BUFFER_NE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_QUEUE_STATUS_OFF_TX_RETRY_BUFFER_NE_SHIFT)) & PCIE_RC_QUEUE_STATUS_OFF_TX_RETRY_BUFFER_NE_MASK)

#define PCIE_RC_QUEUE_STATUS_OFF_RX_QUEUE_NON_EMPTY_MASK (0x4U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_QUEUE_NON_EMPTY_SHIFT (2U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_QUEUE_NON_EMPTY_WIDTH (1U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_QUEUE_NON_EMPTY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_QUEUE_STATUS_OFF_RX_QUEUE_NON_EMPTY_SHIFT)) & PCIE_RC_QUEUE_STATUS_OFF_RX_QUEUE_NON_EMPTY_MASK)

#define PCIE_RC_QUEUE_STATUS_OFF_RX_QUEUE_OVERFLOW_MASK (0x8U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_QUEUE_OVERFLOW_SHIFT (3U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_QUEUE_OVERFLOW_WIDTH (1U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_QUEUE_OVERFLOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_QUEUE_STATUS_OFF_RX_QUEUE_OVERFLOW_SHIFT)) & PCIE_RC_QUEUE_STATUS_OFF_RX_QUEUE_OVERFLOW_MASK)

#define PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_NON_EMPTY_MASK (0x2000U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_NON_EMPTY_SHIFT (13U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_NON_EMPTY_WIDTH (1U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_NON_EMPTY(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_NON_EMPTY_SHIFT)) & PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_NON_EMPTY_MASK)

#define PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_WRITE_ERR_MASK (0x4000U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_WRITE_ERR_SHIFT (14U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_WRITE_ERR_WIDTH (1U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_WRITE_ERR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_WRITE_ERR_SHIFT)) & PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_WRITE_ERR_MASK)

#define PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_READ_ERR_MASK (0x8000U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_READ_ERR_SHIFT (15U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_READ_ERR_WIDTH (1U)
#define PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_READ_ERR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_READ_ERR_SHIFT)) & PCIE_RC_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_READ_ERR_MASK)

#define PCIE_RC_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_MASK (0x1FFF0000U)
#define PCIE_RC_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_SHIFT (16U)
#define PCIE_RC_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_WIDTH (13U)
#define PCIE_RC_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_SHIFT)) & PCIE_RC_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_MASK)

#define PCIE_RC_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_EN_MASK (0x80000000U)
#define PCIE_RC_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_EN_SHIFT (31U)
#define PCIE_RC_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_EN_WIDTH (1U)
#define PCIE_RC_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_EN_SHIFT)) & PCIE_RC_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_EN_MASK)
/*! @} */

/*! @name VC_TX_ARBI_1_OFF - VC Transmit Arbitration Register 1 */
/*! @{ */

#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_0_MASK (0xFFU)
#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_0_SHIFT (0U)
#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_0_WIDTH (8U)
#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_0_SHIFT)) & PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_0_MASK)

#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_1_MASK (0xFF00U)
#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_1_SHIFT (8U)
#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_1_WIDTH (8U)
#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_1_SHIFT)) & PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_1_MASK)

#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_2_MASK (0xFF0000U)
#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_2_SHIFT (16U)
#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_2_WIDTH (8U)
#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_2_SHIFT)) & PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_2_MASK)

#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_3_MASK (0xFF000000U)
#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_3_SHIFT (24U)
#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_3_WIDTH (8U)
#define PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_3_SHIFT)) & PCIE_RC_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_3_MASK)
/*! @} */

/*! @name VC_TX_ARBI_2_OFF - VC Transmit Arbitration Register 2 */
/*! @{ */

#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_4_MASK (0xFFU)
#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_4_SHIFT (0U)
#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_4_WIDTH (8U)
#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_4(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_4_SHIFT)) & PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_4_MASK)

#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_5_MASK (0xFF00U)
#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_5_SHIFT (8U)
#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_5_WIDTH (8U)
#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_5_SHIFT)) & PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_5_MASK)

#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_6_MASK (0xFF0000U)
#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_6_SHIFT (16U)
#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_6_WIDTH (8U)
#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_6(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_6_SHIFT)) & PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_6_MASK)

#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_7_MASK (0xFF000000U)
#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_7_SHIFT (24U)
#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_7_WIDTH (8U)
#define PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_7(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_7_SHIFT)) & PCIE_RC_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_7_MASK)
/*! @} */

/*! @name VC0_P_RX_Q_CTRL_OFF - Segmented-Buffer VC0 Posted Receive Queue Control */
/*! @{ */

#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_CREDIT_MASK (0xFFFU)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_CREDIT_SHIFT (0U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_CREDIT_WIDTH (12U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_CREDIT_SHIFT)) & PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_CREDIT_MASK)

#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_HEADER_CREDIT_MASK (0xFF000U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_HEADER_CREDIT_SHIFT (12U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_HEADER_CREDIT_WIDTH (8U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_HEADER_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_HEADER_CREDIT_SHIFT)) & PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_HEADER_CREDIT_MASK)

#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_RESERVED4_MASK (0x100000U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_RESERVED4_SHIFT (20U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_RESERVED4_WIDTH (1U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_RESERVED4(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_P_RX_Q_CTRL_OFF_RESERVED4_SHIFT)) & PCIE_RC_VC0_P_RX_Q_CTRL_OFF_RESERVED4_MASK)

#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_TLP_Q_MODE_MASK (0xE00000U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_TLP_Q_MODE_SHIFT (21U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_TLP_Q_MODE_WIDTH (3U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_TLP_Q_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_TLP_Q_MODE_SHIFT)) & PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_TLP_Q_MODE_MASK)

#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_HDR_SCALE_MASK (0x3000000U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_HDR_SCALE_SHIFT (24U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_HDR_SCALE_WIDTH (2U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_HDR_SCALE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_HDR_SCALE_SHIFT)) & PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_HDR_SCALE_MASK)

#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_SCALE_MASK (0xC000000U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_SCALE_SHIFT (26U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_SCALE_WIDTH (2U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_SCALE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_SCALE_SHIFT)) & PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_SCALE_MASK)

#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_RESERVED5_MASK (0x30000000U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_RESERVED5_SHIFT (28U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_RESERVED5_WIDTH (2U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_RESERVED5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_P_RX_Q_CTRL_OFF_RESERVED5_SHIFT)) & PCIE_RC_VC0_P_RX_Q_CTRL_OFF_RESERVED5_MASK)

#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_TLP_TYPE_ORDERING_VC0_MASK (0x40000000U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_TLP_TYPE_ORDERING_VC0_SHIFT (30U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_TLP_TYPE_ORDERING_VC0_WIDTH (1U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_TLP_TYPE_ORDERING_VC0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_P_RX_Q_CTRL_OFF_TLP_TYPE_ORDERING_VC0_SHIFT)) & PCIE_RC_VC0_P_RX_Q_CTRL_OFF_TLP_TYPE_ORDERING_VC0_MASK)

#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC_ORDERING_RX_Q_MASK (0x80000000U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC_ORDERING_RX_Q_SHIFT (31U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC_ORDERING_RX_Q_WIDTH (1U)
#define PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC_ORDERING_RX_Q(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC_ORDERING_RX_Q_SHIFT)) & PCIE_RC_VC0_P_RX_Q_CTRL_OFF_VC_ORDERING_RX_Q_MASK)
/*! @} */

/*! @name VC0_NP_RX_Q_CTRL_OFF - Segmented-Buffer VC0 Non-Posted Receive Queue Control */
/*! @{ */

#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_CREDIT_MASK (0xFFFU)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_CREDIT_SHIFT (0U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_CREDIT_WIDTH (12U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_CREDIT_SHIFT)) & PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_CREDIT_MASK)

#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HEADER_CREDIT_MASK (0xFF000U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HEADER_CREDIT_SHIFT (12U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HEADER_CREDIT_WIDTH (8U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HEADER_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HEADER_CREDIT_SHIFT)) & PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HEADER_CREDIT_MASK)

#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_RESERVED6_MASK (0x100000U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_RESERVED6_SHIFT (20U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_RESERVED6_WIDTH (1U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_RESERVED6(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_RESERVED6_SHIFT)) & PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_RESERVED6_MASK)

#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_TLP_Q_MODE_MASK (0xE00000U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_TLP_Q_MODE_SHIFT (21U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_TLP_Q_MODE_WIDTH (3U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_TLP_Q_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_TLP_Q_MODE_SHIFT)) & PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_TLP_Q_MODE_MASK)

#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HDR_SCALE_MASK (0x3000000U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HDR_SCALE_SHIFT (24U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HDR_SCALE_WIDTH (2U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HDR_SCALE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HDR_SCALE_SHIFT)) & PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HDR_SCALE_MASK)

#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_SCALE_MASK (0xC000000U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_SCALE_SHIFT (26U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_SCALE_WIDTH (2U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_SCALE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_SCALE_SHIFT)) & PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_SCALE_MASK)

#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_RESERVED7_MASK (0xF0000000U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_RESERVED7_SHIFT (28U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_RESERVED7_WIDTH (4U)
#define PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_RESERVED7(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_RESERVED7_SHIFT)) & PCIE_RC_VC0_NP_RX_Q_CTRL_OFF_RESERVED7_MASK)
/*! @} */

/*! @name VC0_CPL_RX_Q_CTRL_OFF - Segmented-Buffer VC0 Completion Receive Queue Control */
/*! @{ */

#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_CREDIT_MASK (0xFFFU)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_CREDIT_SHIFT (0U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_CREDIT_WIDTH (12U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_CREDIT_SHIFT)) & PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_CREDIT_MASK)

#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HEADER_CREDIT_MASK (0xFF000U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HEADER_CREDIT_SHIFT (12U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HEADER_CREDIT_WIDTH (8U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HEADER_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HEADER_CREDIT_SHIFT)) & PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HEADER_CREDIT_MASK)

#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_RESERVED8_MASK (0x100000U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_RESERVED8_SHIFT (20U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_RESERVED8_WIDTH (1U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_RESERVED8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_RESERVED8_SHIFT)) & PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_RESERVED8_MASK)

#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_TLP_Q_MODE_MASK (0xE00000U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_TLP_Q_MODE_SHIFT (21U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_TLP_Q_MODE_WIDTH (3U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_TLP_Q_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_TLP_Q_MODE_SHIFT)) & PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_TLP_Q_MODE_MASK)

#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HDR_SCALE_MASK (0x3000000U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HDR_SCALE_SHIFT (24U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HDR_SCALE_WIDTH (2U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HDR_SCALE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HDR_SCALE_SHIFT)) & PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HDR_SCALE_MASK)

#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_SCALE_MASK (0xC000000U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_SCALE_SHIFT (26U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_SCALE_WIDTH (2U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_SCALE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_SCALE_SHIFT)) & PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_SCALE_MASK)

#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_RESERVED9_MASK (0xF0000000U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_RESERVED9_SHIFT (28U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_RESERVED9_WIDTH (4U)
#define PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_RESERVED9(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_RESERVED9_SHIFT)) & PCIE_RC_VC0_CPL_RX_Q_CTRL_OFF_RESERVED9_MASK)
/*! @} */

/*! @name GEN2_CTRL_OFF - Link Width And Speed Change Control */
/*! @{ */

#define PCIE_RC_GEN2_CTRL_OFF_FAST_TRAINING_SEQ_MASK (0xFFU)
#define PCIE_RC_GEN2_CTRL_OFF_FAST_TRAINING_SEQ_SHIFT (0U)
#define PCIE_RC_GEN2_CTRL_OFF_FAST_TRAINING_SEQ_WIDTH (8U)
#define PCIE_RC_GEN2_CTRL_OFF_FAST_TRAINING_SEQ(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN2_CTRL_OFF_FAST_TRAINING_SEQ_SHIFT)) & PCIE_RC_GEN2_CTRL_OFF_FAST_TRAINING_SEQ_MASK)

#define PCIE_RC_GEN2_CTRL_OFF_NUM_OF_LANES_MASK  (0x1F00U)
#define PCIE_RC_GEN2_CTRL_OFF_NUM_OF_LANES_SHIFT (8U)
#define PCIE_RC_GEN2_CTRL_OFF_NUM_OF_LANES_WIDTH (5U)
#define PCIE_RC_GEN2_CTRL_OFF_NUM_OF_LANES(x)    (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN2_CTRL_OFF_NUM_OF_LANES_SHIFT)) & PCIE_RC_GEN2_CTRL_OFF_NUM_OF_LANES_MASK)

#define PCIE_RC_GEN2_CTRL_OFF_PRE_DET_LANE_MASK  (0xE000U)
#define PCIE_RC_GEN2_CTRL_OFF_PRE_DET_LANE_SHIFT (13U)
#define PCIE_RC_GEN2_CTRL_OFF_PRE_DET_LANE_WIDTH (3U)
#define PCIE_RC_GEN2_CTRL_OFF_PRE_DET_LANE(x)    (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN2_CTRL_OFF_PRE_DET_LANE_SHIFT)) & PCIE_RC_GEN2_CTRL_OFF_PRE_DET_LANE_MASK)

#define PCIE_RC_GEN2_CTRL_OFF_AUTO_LANE_FLIP_CTRL_EN_MASK (0x10000U)
#define PCIE_RC_GEN2_CTRL_OFF_AUTO_LANE_FLIP_CTRL_EN_SHIFT (16U)
#define PCIE_RC_GEN2_CTRL_OFF_AUTO_LANE_FLIP_CTRL_EN_WIDTH (1U)
#define PCIE_RC_GEN2_CTRL_OFF_AUTO_LANE_FLIP_CTRL_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN2_CTRL_OFF_AUTO_LANE_FLIP_CTRL_EN_SHIFT)) & PCIE_RC_GEN2_CTRL_OFF_AUTO_LANE_FLIP_CTRL_EN_MASK)

#define PCIE_RC_GEN2_CTRL_OFF_DIRECT_SPEED_CHANGE_MASK (0x20000U)
#define PCIE_RC_GEN2_CTRL_OFF_DIRECT_SPEED_CHANGE_SHIFT (17U)
#define PCIE_RC_GEN2_CTRL_OFF_DIRECT_SPEED_CHANGE_WIDTH (1U)
#define PCIE_RC_GEN2_CTRL_OFF_DIRECT_SPEED_CHANGE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN2_CTRL_OFF_DIRECT_SPEED_CHANGE_SHIFT)) & PCIE_RC_GEN2_CTRL_OFF_DIRECT_SPEED_CHANGE_MASK)

#define PCIE_RC_GEN2_CTRL_OFF_CONFIG_PHY_TX_CHANGE_MASK (0x40000U)
#define PCIE_RC_GEN2_CTRL_OFF_CONFIG_PHY_TX_CHANGE_SHIFT (18U)
#define PCIE_RC_GEN2_CTRL_OFF_CONFIG_PHY_TX_CHANGE_WIDTH (1U)
#define PCIE_RC_GEN2_CTRL_OFF_CONFIG_PHY_TX_CHANGE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN2_CTRL_OFF_CONFIG_PHY_TX_CHANGE_SHIFT)) & PCIE_RC_GEN2_CTRL_OFF_CONFIG_PHY_TX_CHANGE_MASK)

#define PCIE_RC_GEN2_CTRL_OFF_CONFIG_TX_COMP_RX_MASK (0x80000U)
#define PCIE_RC_GEN2_CTRL_OFF_CONFIG_TX_COMP_RX_SHIFT (19U)
#define PCIE_RC_GEN2_CTRL_OFF_CONFIG_TX_COMP_RX_WIDTH (1U)
#define PCIE_RC_GEN2_CTRL_OFF_CONFIG_TX_COMP_RX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN2_CTRL_OFF_CONFIG_TX_COMP_RX_SHIFT)) & PCIE_RC_GEN2_CTRL_OFF_CONFIG_TX_COMP_RX_MASK)

#define PCIE_RC_GEN2_CTRL_OFF_SEL_DEEMPHASIS_MASK (0x100000U)
#define PCIE_RC_GEN2_CTRL_OFF_SEL_DEEMPHASIS_SHIFT (20U)
#define PCIE_RC_GEN2_CTRL_OFF_SEL_DEEMPHASIS_WIDTH (1U)
#define PCIE_RC_GEN2_CTRL_OFF_SEL_DEEMPHASIS(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN2_CTRL_OFF_SEL_DEEMPHASIS_SHIFT)) & PCIE_RC_GEN2_CTRL_OFF_SEL_DEEMPHASIS_MASK)

#define PCIE_RC_GEN2_CTRL_OFF_GEN1_EI_INFERENCE_MASK (0x200000U)
#define PCIE_RC_GEN2_CTRL_OFF_GEN1_EI_INFERENCE_SHIFT (21U)
#define PCIE_RC_GEN2_CTRL_OFF_GEN1_EI_INFERENCE_WIDTH (1U)
#define PCIE_RC_GEN2_CTRL_OFF_GEN1_EI_INFERENCE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN2_CTRL_OFF_GEN1_EI_INFERENCE_SHIFT)) & PCIE_RC_GEN2_CTRL_OFF_GEN1_EI_INFERENCE_MASK)
/*! @} */

/*! @name PHY_STATUS_OFF - PHY Status */
/*! @{ */

#define PCIE_RC_PHY_STATUS_OFF_PHY_STATUS_MASK   (0xFFFFFFFFU)
#define PCIE_RC_PHY_STATUS_OFF_PHY_STATUS_SHIFT  (0U)
#define PCIE_RC_PHY_STATUS_OFF_PHY_STATUS_WIDTH  (32U)
#define PCIE_RC_PHY_STATUS_OFF_PHY_STATUS(x)     (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PHY_STATUS_OFF_PHY_STATUS_SHIFT)) & PCIE_RC_PHY_STATUS_OFF_PHY_STATUS_MASK)
/*! @} */

/*! @name PHY_CONTROL_OFF - PHY Control */
/*! @{ */

#define PCIE_RC_PHY_CONTROL_OFF_PHY_CONTROL_MASK (0xFFFFFFFFU)
#define PCIE_RC_PHY_CONTROL_OFF_PHY_CONTROL_SHIFT (0U)
#define PCIE_RC_PHY_CONTROL_OFF_PHY_CONTROL_WIDTH (32U)
#define PCIE_RC_PHY_CONTROL_OFF_PHY_CONTROL(x)   (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PHY_CONTROL_OFF_PHY_CONTROL_SHIFT)) & PCIE_RC_PHY_CONTROL_OFF_PHY_CONTROL_MASK)
/*! @} */

/*! @name TRGT_MAP_CTRL_OFF - Programmable Target Map Control */
/*! @{ */

#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_PF_MASK (0x3FU)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_PF_SHIFT (0U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_PF_WIDTH (6U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_PF(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_PF_SHIFT)) & PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_PF_MASK)

#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_ROM_MASK (0x40U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_ROM_SHIFT (6U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_ROM_WIDTH (1U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_ROM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_ROM_SHIFT)) & PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_ROM_MASK)

#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_13_15_MASK (0xE000U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_13_15_SHIFT (13U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_13_15_WIDTH (3U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_13_15(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_13_15_SHIFT)) & PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_13_15_MASK)

#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_INDEX_MASK (0x1F0000U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_INDEX_SHIFT (16U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_INDEX_WIDTH (5U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_INDEX(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_INDEX_SHIFT)) & PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_INDEX_MASK)

#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_21_31_MASK (0xFFE00000U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_21_31_SHIFT (21U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_21_31_WIDTH (11U)
#define PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_21_31(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_21_31_SHIFT)) & PCIE_RC_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_21_31_MASK)
/*! @} */

/*! @name MSI_CTRL_ADDR_OFF - Integrated MSI Reception Module (iMRM) Address */
/*! @{ */

#define PCIE_RC_MSI_CTRL_ADDR_OFF_MSI_CTRL_ADDR_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_ADDR_OFF_MSI_CTRL_ADDR_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_ADDR_OFF_MSI_CTRL_ADDR_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_ADDR_OFF_MSI_CTRL_ADDR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_ADDR_OFF_MSI_CTRL_ADDR_SHIFT)) & PCIE_RC_MSI_CTRL_ADDR_OFF_MSI_CTRL_ADDR_MASK)
/*! @} */

/*! @name MSI_CTRL_UPPER_ADDR_OFF - Integrated MSI Reception Module Upper Address */
/*! @{ */

#define PCIE_RC_MSI_CTRL_UPPER_ADDR_OFF_MSI_CTRL_UPPER_ADDR_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_UPPER_ADDR_OFF_MSI_CTRL_UPPER_ADDR_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_UPPER_ADDR_OFF_MSI_CTRL_UPPER_ADDR_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_UPPER_ADDR_OFF_MSI_CTRL_UPPER_ADDR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_UPPER_ADDR_OFF_MSI_CTRL_UPPER_ADDR_SHIFT)) & PCIE_RC_MSI_CTRL_UPPER_ADDR_OFF_MSI_CTRL_UPPER_ADDR_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_0_EN_OFF - Integrated MSI Reception Module Interrupt #0 Enable */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_0_EN_OFF_MSI_CTRL_INT_0_EN_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_0_EN_OFF_MSI_CTRL_INT_0_EN_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_0_EN_OFF_MSI_CTRL_INT_0_EN_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_0_EN_OFF_MSI_CTRL_INT_0_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_0_EN_OFF_MSI_CTRL_INT_0_EN_SHIFT)) & PCIE_RC_MSI_CTRL_INT_0_EN_OFF_MSI_CTRL_INT_0_EN_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_0_MASK_OFF - Integrated MSI Reception Module Interrupt #0 Mask */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_0_MASK_OFF_MSI_CTRL_INT_0_MASK_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_0_MASK_OFF_MSI_CTRL_INT_0_MASK_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_0_MASK_OFF_MSI_CTRL_INT_0_MASK_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_0_MASK_OFF_MSI_CTRL_INT_0_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_0_MASK_OFF_MSI_CTRL_INT_0_MASK_SHIFT)) & PCIE_RC_MSI_CTRL_INT_0_MASK_OFF_MSI_CTRL_INT_0_MASK_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_0_STATUS_OFF - Integrated MSI Reception Module Interrupt #0 Status */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_0_STATUS_OFF_MSI_CTRL_INT_0_STATUS_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_0_STATUS_OFF_MSI_CTRL_INT_0_STATUS_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_0_STATUS_OFF_MSI_CTRL_INT_0_STATUS_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_0_STATUS_OFF_MSI_CTRL_INT_0_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_0_STATUS_OFF_MSI_CTRL_INT_0_STATUS_SHIFT)) & PCIE_RC_MSI_CTRL_INT_0_STATUS_OFF_MSI_CTRL_INT_0_STATUS_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_1_EN_OFF - Integrated MSI Reception Module Interrupt #1 Enable */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_1_EN_OFF_MSI_CTRL_INT_1_EN_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_1_EN_OFF_MSI_CTRL_INT_1_EN_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_1_EN_OFF_MSI_CTRL_INT_1_EN_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_1_EN_OFF_MSI_CTRL_INT_1_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_1_EN_OFF_MSI_CTRL_INT_1_EN_SHIFT)) & PCIE_RC_MSI_CTRL_INT_1_EN_OFF_MSI_CTRL_INT_1_EN_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_1_MASK_OFF - Integrated MSI Reception Module Interrupt #1 Mask */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_1_MASK_OFF_MSI_CTRL_INT_1_MASK_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_1_MASK_OFF_MSI_CTRL_INT_1_MASK_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_1_MASK_OFF_MSI_CTRL_INT_1_MASK_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_1_MASK_OFF_MSI_CTRL_INT_1_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_1_MASK_OFF_MSI_CTRL_INT_1_MASK_SHIFT)) & PCIE_RC_MSI_CTRL_INT_1_MASK_OFF_MSI_CTRL_INT_1_MASK_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_1_STATUS_OFF - Integrated MSI Reception Module Interrupt #1 Status */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_1_STATUS_OFF_MSI_CTRL_INT_1_STATUS_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_1_STATUS_OFF_MSI_CTRL_INT_1_STATUS_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_1_STATUS_OFF_MSI_CTRL_INT_1_STATUS_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_1_STATUS_OFF_MSI_CTRL_INT_1_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_1_STATUS_OFF_MSI_CTRL_INT_1_STATUS_SHIFT)) & PCIE_RC_MSI_CTRL_INT_1_STATUS_OFF_MSI_CTRL_INT_1_STATUS_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_2_EN_OFF - Integrated MSI Reception Module Interrupt #2 Enable */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_2_EN_OFF_MSI_CTRL_INT_2_EN_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_2_EN_OFF_MSI_CTRL_INT_2_EN_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_2_EN_OFF_MSI_CTRL_INT_2_EN_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_2_EN_OFF_MSI_CTRL_INT_2_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_2_EN_OFF_MSI_CTRL_INT_2_EN_SHIFT)) & PCIE_RC_MSI_CTRL_INT_2_EN_OFF_MSI_CTRL_INT_2_EN_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_2_MASK_OFF - Integrated MSI Reception Module Interrupt #2 Mask */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_2_MASK_OFF_MSI_CTRL_INT_2_MASK_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_2_MASK_OFF_MSI_CTRL_INT_2_MASK_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_2_MASK_OFF_MSI_CTRL_INT_2_MASK_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_2_MASK_OFF_MSI_CTRL_INT_2_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_2_MASK_OFF_MSI_CTRL_INT_2_MASK_SHIFT)) & PCIE_RC_MSI_CTRL_INT_2_MASK_OFF_MSI_CTRL_INT_2_MASK_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_2_STATUS_OFF - Integrated MSI Reception Module Interrupt #2 Status */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_2_STATUS_OFF_MSI_CTRL_INT_2_STATUS_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_2_STATUS_OFF_MSI_CTRL_INT_2_STATUS_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_2_STATUS_OFF_MSI_CTRL_INT_2_STATUS_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_2_STATUS_OFF_MSI_CTRL_INT_2_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_2_STATUS_OFF_MSI_CTRL_INT_2_STATUS_SHIFT)) & PCIE_RC_MSI_CTRL_INT_2_STATUS_OFF_MSI_CTRL_INT_2_STATUS_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_3_EN_OFF - Integrated MSI Reception Module Interrupt #3 Enable */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_3_EN_OFF_MSI_CTRL_INT_3_EN_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_3_EN_OFF_MSI_CTRL_INT_3_EN_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_3_EN_OFF_MSI_CTRL_INT_3_EN_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_3_EN_OFF_MSI_CTRL_INT_3_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_3_EN_OFF_MSI_CTRL_INT_3_EN_SHIFT)) & PCIE_RC_MSI_CTRL_INT_3_EN_OFF_MSI_CTRL_INT_3_EN_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_3_MASK_OFF - Integrated MSI Reception Module Interrupt #3 Mask */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_3_MASK_OFF_MSI_CTRL_INT_3_MASK_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_3_MASK_OFF_MSI_CTRL_INT_3_MASK_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_3_MASK_OFF_MSI_CTRL_INT_3_MASK_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_3_MASK_OFF_MSI_CTRL_INT_3_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_3_MASK_OFF_MSI_CTRL_INT_3_MASK_SHIFT)) & PCIE_RC_MSI_CTRL_INT_3_MASK_OFF_MSI_CTRL_INT_3_MASK_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_3_STATUS_OFF - Integrated MSI Reception Module Interrupt #3 Status */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_3_STATUS_OFF_MSI_CTRL_INT_3_STATUS_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_3_STATUS_OFF_MSI_CTRL_INT_3_STATUS_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_3_STATUS_OFF_MSI_CTRL_INT_3_STATUS_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_3_STATUS_OFF_MSI_CTRL_INT_3_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_3_STATUS_OFF_MSI_CTRL_INT_3_STATUS_SHIFT)) & PCIE_RC_MSI_CTRL_INT_3_STATUS_OFF_MSI_CTRL_INT_3_STATUS_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_4_EN_OFF - Integrated MSI Reception Module Interrupt #4 Enable */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_4_EN_OFF_MSI_CTRL_INT_4_EN_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_4_EN_OFF_MSI_CTRL_INT_4_EN_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_4_EN_OFF_MSI_CTRL_INT_4_EN_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_4_EN_OFF_MSI_CTRL_INT_4_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_4_EN_OFF_MSI_CTRL_INT_4_EN_SHIFT)) & PCIE_RC_MSI_CTRL_INT_4_EN_OFF_MSI_CTRL_INT_4_EN_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_4_MASK_OFF - Integrated MSI Reception Module Interrupt #4 Mask */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_4_MASK_OFF_MSI_CTRL_INT_4_MASK_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_4_MASK_OFF_MSI_CTRL_INT_4_MASK_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_4_MASK_OFF_MSI_CTRL_INT_4_MASK_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_4_MASK_OFF_MSI_CTRL_INT_4_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_4_MASK_OFF_MSI_CTRL_INT_4_MASK_SHIFT)) & PCIE_RC_MSI_CTRL_INT_4_MASK_OFF_MSI_CTRL_INT_4_MASK_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_4_STATUS_OFF - Integrated MSI Reception Module Interrupt #4 Status */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_4_STATUS_OFF_MSI_CTRL_INT_4_STATUS_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_4_STATUS_OFF_MSI_CTRL_INT_4_STATUS_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_4_STATUS_OFF_MSI_CTRL_INT_4_STATUS_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_4_STATUS_OFF_MSI_CTRL_INT_4_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_4_STATUS_OFF_MSI_CTRL_INT_4_STATUS_SHIFT)) & PCIE_RC_MSI_CTRL_INT_4_STATUS_OFF_MSI_CTRL_INT_4_STATUS_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_5_EN_OFF - Integrated MSI Reception Module Interrupt #5 Enable */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_5_EN_OFF_MSI_CTRL_INT_5_EN_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_5_EN_OFF_MSI_CTRL_INT_5_EN_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_5_EN_OFF_MSI_CTRL_INT_5_EN_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_5_EN_OFF_MSI_CTRL_INT_5_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_5_EN_OFF_MSI_CTRL_INT_5_EN_SHIFT)) & PCIE_RC_MSI_CTRL_INT_5_EN_OFF_MSI_CTRL_INT_5_EN_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_5_MASK_OFF - Integrated MSI Reception Module Interrupt #5 Mask */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_5_MASK_OFF_MSI_CTRL_INT_5_MASK_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_5_MASK_OFF_MSI_CTRL_INT_5_MASK_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_5_MASK_OFF_MSI_CTRL_INT_5_MASK_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_5_MASK_OFF_MSI_CTRL_INT_5_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_5_MASK_OFF_MSI_CTRL_INT_5_MASK_SHIFT)) & PCIE_RC_MSI_CTRL_INT_5_MASK_OFF_MSI_CTRL_INT_5_MASK_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_5_STATUS_OFF - Integrated MSI Reception Module Interrupt #5 Status */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_5_STATUS_OFF_MSI_CTRL_INT_5_STATUS_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_5_STATUS_OFF_MSI_CTRL_INT_5_STATUS_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_5_STATUS_OFF_MSI_CTRL_INT_5_STATUS_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_5_STATUS_OFF_MSI_CTRL_INT_5_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_5_STATUS_OFF_MSI_CTRL_INT_5_STATUS_SHIFT)) & PCIE_RC_MSI_CTRL_INT_5_STATUS_OFF_MSI_CTRL_INT_5_STATUS_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_6_EN_OFF - Integrated MSI Reception Module Interrupt #6 Enable */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_6_EN_OFF_MSI_CTRL_INT_6_EN_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_6_EN_OFF_MSI_CTRL_INT_6_EN_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_6_EN_OFF_MSI_CTRL_INT_6_EN_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_6_EN_OFF_MSI_CTRL_INT_6_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_6_EN_OFF_MSI_CTRL_INT_6_EN_SHIFT)) & PCIE_RC_MSI_CTRL_INT_6_EN_OFF_MSI_CTRL_INT_6_EN_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_6_MASK_OFF - Integrated MSI Reception Module Interrupt #6 Mask */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_6_MASK_OFF_MSI_CTRL_INT_6_MASK_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_6_MASK_OFF_MSI_CTRL_INT_6_MASK_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_6_MASK_OFF_MSI_CTRL_INT_6_MASK_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_6_MASK_OFF_MSI_CTRL_INT_6_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_6_MASK_OFF_MSI_CTRL_INT_6_MASK_SHIFT)) & PCIE_RC_MSI_CTRL_INT_6_MASK_OFF_MSI_CTRL_INT_6_MASK_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_6_STATUS_OFF - Integrated MSI Reception Module Interrupt #6 Status */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_6_STATUS_OFF_MSI_CTRL_INT_6_STATUS_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_6_STATUS_OFF_MSI_CTRL_INT_6_STATUS_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_6_STATUS_OFF_MSI_CTRL_INT_6_STATUS_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_6_STATUS_OFF_MSI_CTRL_INT_6_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_6_STATUS_OFF_MSI_CTRL_INT_6_STATUS_SHIFT)) & PCIE_RC_MSI_CTRL_INT_6_STATUS_OFF_MSI_CTRL_INT_6_STATUS_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_7_EN_OFF - Integrated MSI Reception Module Interrupt #7 Enable */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_7_EN_OFF_MSI_CTRL_INT_7_EN_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_7_EN_OFF_MSI_CTRL_INT_7_EN_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_7_EN_OFF_MSI_CTRL_INT_7_EN_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_7_EN_OFF_MSI_CTRL_INT_7_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_7_EN_OFF_MSI_CTRL_INT_7_EN_SHIFT)) & PCIE_RC_MSI_CTRL_INT_7_EN_OFF_MSI_CTRL_INT_7_EN_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_7_MASK_OFF - Integrated MSI Reception Module Interrupt #7 Mask */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_7_MASK_OFF_MSI_CTRL_INT_7_MASK_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_7_MASK_OFF_MSI_CTRL_INT_7_MASK_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_7_MASK_OFF_MSI_CTRL_INT_7_MASK_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_7_MASK_OFF_MSI_CTRL_INT_7_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_7_MASK_OFF_MSI_CTRL_INT_7_MASK_SHIFT)) & PCIE_RC_MSI_CTRL_INT_7_MASK_OFF_MSI_CTRL_INT_7_MASK_MASK)
/*! @} */

/*! @name MSI_CTRL_INT_7_STATUS_OFF - Integrated MSI Reception Module Interrupt #7 Status */
/*! @{ */

#define PCIE_RC_MSI_CTRL_INT_7_STATUS_OFF_MSI_CTRL_INT_7_STATUS_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_CTRL_INT_7_STATUS_OFF_MSI_CTRL_INT_7_STATUS_SHIFT (0U)
#define PCIE_RC_MSI_CTRL_INT_7_STATUS_OFF_MSI_CTRL_INT_7_STATUS_WIDTH (32U)
#define PCIE_RC_MSI_CTRL_INT_7_STATUS_OFF_MSI_CTRL_INT_7_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_CTRL_INT_7_STATUS_OFF_MSI_CTRL_INT_7_STATUS_SHIFT)) & PCIE_RC_MSI_CTRL_INT_7_STATUS_OFF_MSI_CTRL_INT_7_STATUS_MASK)
/*! @} */

/*! @name MSI_GPIO_IO_OFF - Integrated MSI Reception Module General Purpose IO */
/*! @{ */

#define PCIE_RC_MSI_GPIO_IO_OFF_MSI_GPIO_REG_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSI_GPIO_IO_OFF_MSI_GPIO_REG_SHIFT (0U)
#define PCIE_RC_MSI_GPIO_IO_OFF_MSI_GPIO_REG_WIDTH (32U)
#define PCIE_RC_MSI_GPIO_IO_OFF_MSI_GPIO_REG(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSI_GPIO_IO_OFF_MSI_GPIO_REG_SHIFT)) & PCIE_RC_MSI_GPIO_IO_OFF_MSI_GPIO_REG_MASK)
/*! @} */

/*! @name CLOCK_GATING_CTRL_OFF - RADM clock gating enable control */
/*! @{ */

#define PCIE_RC_CLOCK_GATING_CTRL_OFF_RADM_CLK_GATING_EN_MASK (0x1U)
#define PCIE_RC_CLOCK_GATING_CTRL_OFF_RADM_CLK_GATING_EN_SHIFT (0U)
#define PCIE_RC_CLOCK_GATING_CTRL_OFF_RADM_CLK_GATING_EN_WIDTH (1U)
#define PCIE_RC_CLOCK_GATING_CTRL_OFF_RADM_CLK_GATING_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_CLOCK_GATING_CTRL_OFF_RADM_CLK_GATING_EN_SHIFT)) & PCIE_RC_CLOCK_GATING_CTRL_OFF_RADM_CLK_GATING_EN_MASK)
/*! @} */

/*! @name GEN3_RELATED_OFF - Gen3 Control */
/*! @{ */

#define PCIE_RC_GEN3_RELATED_OFF_GEN3_ZRXDC_NONCOMPL_MASK (0x1U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_ZRXDC_NONCOMPL_SHIFT (0U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_ZRXDC_NONCOMPL_WIDTH (1U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_ZRXDC_NONCOMPL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_RELATED_OFF_GEN3_ZRXDC_NONCOMPL_SHIFT)) & PCIE_RC_GEN3_RELATED_OFF_GEN3_ZRXDC_NONCOMPL_MASK)

#define PCIE_RC_GEN3_RELATED_OFF_DISABLE_SCRAMBLER_GEN_3_MASK (0x100U)
#define PCIE_RC_GEN3_RELATED_OFF_DISABLE_SCRAMBLER_GEN_3_SHIFT (8U)
#define PCIE_RC_GEN3_RELATED_OFF_DISABLE_SCRAMBLER_GEN_3_WIDTH (1U)
#define PCIE_RC_GEN3_RELATED_OFF_DISABLE_SCRAMBLER_GEN_3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_RELATED_OFF_DISABLE_SCRAMBLER_GEN_3_SHIFT)) & PCIE_RC_GEN3_RELATED_OFF_DISABLE_SCRAMBLER_GEN_3_MASK)

#define PCIE_RC_GEN3_RELATED_OFF_EQ_PHASE_2_3_MASK (0x200U)
#define PCIE_RC_GEN3_RELATED_OFF_EQ_PHASE_2_3_SHIFT (9U)
#define PCIE_RC_GEN3_RELATED_OFF_EQ_PHASE_2_3_WIDTH (1U)
#define PCIE_RC_GEN3_RELATED_OFF_EQ_PHASE_2_3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_RELATED_OFF_EQ_PHASE_2_3_SHIFT)) & PCIE_RC_GEN3_RELATED_OFF_EQ_PHASE_2_3_MASK)

#define PCIE_RC_GEN3_RELATED_OFF_EQ_EIEOS_CNT_MASK (0x400U)
#define PCIE_RC_GEN3_RELATED_OFF_EQ_EIEOS_CNT_SHIFT (10U)
#define PCIE_RC_GEN3_RELATED_OFF_EQ_EIEOS_CNT_WIDTH (1U)
#define PCIE_RC_GEN3_RELATED_OFF_EQ_EIEOS_CNT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_RELATED_OFF_EQ_EIEOS_CNT_SHIFT)) & PCIE_RC_GEN3_RELATED_OFF_EQ_EIEOS_CNT_MASK)

#define PCIE_RC_GEN3_RELATED_OFF_EQ_REDO_MASK    (0x800U)
#define PCIE_RC_GEN3_RELATED_OFF_EQ_REDO_SHIFT   (11U)
#define PCIE_RC_GEN3_RELATED_OFF_EQ_REDO_WIDTH   (1U)
#define PCIE_RC_GEN3_RELATED_OFF_EQ_REDO(x)      (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_RELATED_OFF_EQ_REDO_SHIFT)) & PCIE_RC_GEN3_RELATED_OFF_EQ_REDO_MASK)

#define PCIE_RC_GEN3_RELATED_OFF_RXEQ_PH01_EN_MASK (0x1000U)
#define PCIE_RC_GEN3_RELATED_OFF_RXEQ_PH01_EN_SHIFT (12U)
#define PCIE_RC_GEN3_RELATED_OFF_RXEQ_PH01_EN_WIDTH (1U)
#define PCIE_RC_GEN3_RELATED_OFF_RXEQ_PH01_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_RELATED_OFF_RXEQ_PH01_EN_SHIFT)) & PCIE_RC_GEN3_RELATED_OFF_RXEQ_PH01_EN_MASK)

#define PCIE_RC_GEN3_RELATED_OFF_RXEQ_RGRDLESS_RXTS_MASK (0x2000U)
#define PCIE_RC_GEN3_RELATED_OFF_RXEQ_RGRDLESS_RXTS_SHIFT (13U)
#define PCIE_RC_GEN3_RELATED_OFF_RXEQ_RGRDLESS_RXTS_WIDTH (1U)
#define PCIE_RC_GEN3_RELATED_OFF_RXEQ_RGRDLESS_RXTS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_RELATED_OFF_RXEQ_RGRDLESS_RXTS_SHIFT)) & PCIE_RC_GEN3_RELATED_OFF_RXEQ_RGRDLESS_RXTS_MASK)

#define PCIE_RC_GEN3_RELATED_OFF_GEN3_EQUALIZATION_DISABLE_MASK (0x10000U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_EQUALIZATION_DISABLE_SHIFT (16U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_EQUALIZATION_DISABLE_WIDTH (1U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_EQUALIZATION_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_RELATED_OFF_GEN3_EQUALIZATION_DISABLE_SHIFT)) & PCIE_RC_GEN3_RELATED_OFF_GEN3_EQUALIZATION_DISABLE_MASK)

#define PCIE_RC_GEN3_RELATED_OFF_GEN3_DLLP_XMT_DELAY_DISABLE_MASK (0x20000U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_DLLP_XMT_DELAY_DISABLE_SHIFT (17U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_DLLP_XMT_DELAY_DISABLE_WIDTH (1U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_DLLP_XMT_DELAY_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_RELATED_OFF_GEN3_DLLP_XMT_DELAY_DISABLE_SHIFT)) & PCIE_RC_GEN3_RELATED_OFF_GEN3_DLLP_XMT_DELAY_DISABLE_MASK)

#define PCIE_RC_GEN3_RELATED_OFF_GEN3_DC_BALANCE_DISABLE_MASK (0x40000U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_DC_BALANCE_DISABLE_SHIFT (18U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_DC_BALANCE_DISABLE_WIDTH (1U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_DC_BALANCE_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_RELATED_OFF_GEN3_DC_BALANCE_DISABLE_SHIFT)) & PCIE_RC_GEN3_RELATED_OFF_GEN3_DC_BALANCE_DISABLE_MASK)

#define PCIE_RC_GEN3_RELATED_OFF_GEN3_EQ_INVREQ_EVAL_DIFF_DISABLE_MASK (0x800000U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_EQ_INVREQ_EVAL_DIFF_DISABLE_SHIFT (23U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_EQ_INVREQ_EVAL_DIFF_DISABLE_WIDTH (1U)
#define PCIE_RC_GEN3_RELATED_OFF_GEN3_EQ_INVREQ_EVAL_DIFF_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_RELATED_OFF_GEN3_EQ_INVREQ_EVAL_DIFF_DISABLE_SHIFT)) & PCIE_RC_GEN3_RELATED_OFF_GEN3_EQ_INVREQ_EVAL_DIFF_DISABLE_MASK)
/*! @} */

/*! @name GEN3_EQ_CONTROL_OFF - Gen3 EQ Control */
/*! @{ */

#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FB_MODE_MASK (0xFU)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FB_MODE_SHIFT (0U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FB_MODE_WIDTH (4U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FB_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FB_MODE_SHIFT)) & PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FB_MODE_MASK)

#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PHASE23_EXIT_MODE_MASK (0x10U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PHASE23_EXIT_MODE_SHIFT (4U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PHASE23_EXIT_MODE_WIDTH (1U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PHASE23_EXIT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PHASE23_EXIT_MODE_SHIFT)) & PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PHASE23_EXIT_MODE_MASK)

#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_EVAL_2MS_DISABLE_MASK (0x20U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_EVAL_2MS_DISABLE_SHIFT (5U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_EVAL_2MS_DISABLE_WIDTH (1U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_EVAL_2MS_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_EVAL_2MS_DISABLE_SHIFT)) & PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_EVAL_2MS_DISABLE_MASK)

#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_LOWER_RATE_EQ_REDO_ENABLE_MASK (0x40U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_LOWER_RATE_EQ_REDO_ENABLE_SHIFT (6U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_LOWER_RATE_EQ_REDO_ENABLE_WIDTH (1U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_LOWER_RATE_EQ_REDO_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_LOWER_RATE_EQ_REDO_ENABLE_SHIFT)) & PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_LOWER_RATE_EQ_REDO_ENABLE_MASK)

#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_VEC_MASK (0xFFFF00U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_VEC_SHIFT (8U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_VEC_WIDTH (16U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_VEC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_VEC_SHIFT)) & PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_VEC_MASK)

#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FOM_INC_INITIAL_EVAL_MASK (0x1000000U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FOM_INC_INITIAL_EVAL_SHIFT (24U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FOM_INC_INITIAL_EVAL_WIDTH (1U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FOM_INC_INITIAL_EVAL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FOM_INC_INITIAL_EVAL_SHIFT)) & PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FOM_INC_INITIAL_EVAL_MASK)

#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_AS_COEF_MASK (0x2000000U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_AS_COEF_SHIFT (25U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_AS_COEF_WIDTH (1U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_AS_COEF(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_AS_COEF_SHIFT)) & PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_AS_COEF_MASK)

#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_REQ_SEND_CONSEC_EIEOS_FOR_PSET_MAP_MASK (0x4000000U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_REQ_SEND_CONSEC_EIEOS_FOR_PSET_MAP_SHIFT (26U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_REQ_SEND_CONSEC_EIEOS_FOR_PSET_MAP_WIDTH (1U)
#define PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_REQ_SEND_CONSEC_EIEOS_FOR_PSET_MAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_REQ_SEND_CONSEC_EIEOS_FOR_PSET_MAP_SHIFT)) & PCIE_RC_GEN3_EQ_CONTROL_OFF_GEN3_REQ_SEND_CONSEC_EIEOS_FOR_PSET_MAP_MASK)
/*! @} */

/*! @name GEN3_EQ_FB_MODE_DIR_CHANGE_OFF - Gen3 EQ Direction Change Feedback Mode Control */
/*! @{ */

#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_T_MIN_PHASE23_MASK (0x1FU)
#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_T_MIN_PHASE23_SHIFT (0U)
#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_T_MIN_PHASE23_WIDTH (5U)
#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_T_MIN_PHASE23(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_T_MIN_PHASE23_SHIFT)) & PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_T_MIN_PHASE23_MASK)

#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_N_EVALS_MASK (0x3E0U)
#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_N_EVALS_SHIFT (5U)
#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_N_EVALS_WIDTH (5U)
#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_N_EVALS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_N_EVALS_SHIFT)) & PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_N_EVALS_MASK)

#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_PRE_CUSROR_DELTA_MASK (0x3C00U)
#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_PRE_CUSROR_DELTA_SHIFT (10U)
#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_PRE_CUSROR_DELTA_WIDTH (4U)
#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_PRE_CUSROR_DELTA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_PRE_CUSROR_DELTA_SHIFT)) & PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_PRE_CUSROR_DELTA_MASK)

#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_POST_CUSROR_DELTA_MASK (0x3C000U)
#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_POST_CUSROR_DELTA_SHIFT (14U)
#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_POST_CUSROR_DELTA_WIDTH (4U)
#define PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_POST_CUSROR_DELTA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_POST_CUSROR_DELTA_SHIFT)) & PCIE_RC_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_POST_CUSROR_DELTA_MASK)
/*! @} */

/*! @name ORDER_RULE_CTRL_OFF - Order Rule Control */
/*! @{ */

#define PCIE_RC_ORDER_RULE_CTRL_OFF_NP_PASS_P_MASK (0xFFU)
#define PCIE_RC_ORDER_RULE_CTRL_OFF_NP_PASS_P_SHIFT (0U)
#define PCIE_RC_ORDER_RULE_CTRL_OFF_NP_PASS_P_WIDTH (8U)
#define PCIE_RC_ORDER_RULE_CTRL_OFF_NP_PASS_P(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ORDER_RULE_CTRL_OFF_NP_PASS_P_SHIFT)) & PCIE_RC_ORDER_RULE_CTRL_OFF_NP_PASS_P_MASK)

#define PCIE_RC_ORDER_RULE_CTRL_OFF_CPL_PASS_P_MASK (0xFF00U)
#define PCIE_RC_ORDER_RULE_CTRL_OFF_CPL_PASS_P_SHIFT (8U)
#define PCIE_RC_ORDER_RULE_CTRL_OFF_CPL_PASS_P_WIDTH (8U)
#define PCIE_RC_ORDER_RULE_CTRL_OFF_CPL_PASS_P(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_ORDER_RULE_CTRL_OFF_CPL_PASS_P_SHIFT)) & PCIE_RC_ORDER_RULE_CTRL_OFF_CPL_PASS_P_MASK)
/*! @} */

/*! @name PIPE_LOOPBACK_CONTROL_OFF - PIPE Loopback Control */
/*! @{ */

#define PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_LPBK_RXVALID_MASK (0xFFFFU)
#define PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_LPBK_RXVALID_SHIFT (0U)
#define PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_LPBK_RXVALID_WIDTH (16U)
#define PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_LPBK_RXVALID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_LPBK_RXVALID_SHIFT)) & PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_LPBK_RXVALID_MASK)

#define PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_LANE_MASK (0x3F0000U)
#define PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_LANE_SHIFT (16U)
#define PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_LANE_WIDTH (6U)
#define PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_LANE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_LANE_SHIFT)) & PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_LANE_MASK)

#define PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_PIPE_LOOPBACK_MASK (0x80000000U)
#define PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_PIPE_LOOPBACK_SHIFT (31U)
#define PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_PIPE_LOOPBACK_WIDTH (1U)
#define PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_PIPE_LOOPBACK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_PIPE_LOOPBACK_SHIFT)) & PCIE_RC_PIPE_LOOPBACK_CONTROL_OFF_PIPE_LOOPBACK_MASK)
/*! @} */

/*! @name MISC_CONTROL_1_OFF - DBI Read-Only Write Enable */
/*! @{ */

#define PCIE_RC_MISC_CONTROL_1_OFF_DBI_RO_WR_EN_MASK (0x1U)
#define PCIE_RC_MISC_CONTROL_1_OFF_DBI_RO_WR_EN_SHIFT (0U)
#define PCIE_RC_MISC_CONTROL_1_OFF_DBI_RO_WR_EN_WIDTH (1U)
#define PCIE_RC_MISC_CONTROL_1_OFF_DBI_RO_WR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MISC_CONTROL_1_OFF_DBI_RO_WR_EN_SHIFT)) & PCIE_RC_MISC_CONTROL_1_OFF_DBI_RO_WR_EN_MASK)

#define PCIE_RC_MISC_CONTROL_1_OFF_DEFAULT_TARGET_MASK (0x2U)
#define PCIE_RC_MISC_CONTROL_1_OFF_DEFAULT_TARGET_SHIFT (1U)
#define PCIE_RC_MISC_CONTROL_1_OFF_DEFAULT_TARGET_WIDTH (1U)
#define PCIE_RC_MISC_CONTROL_1_OFF_DEFAULT_TARGET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MISC_CONTROL_1_OFF_DEFAULT_TARGET_SHIFT)) & PCIE_RC_MISC_CONTROL_1_OFF_DEFAULT_TARGET_MASK)

#define PCIE_RC_MISC_CONTROL_1_OFF_UR_CA_MASK_4_TRGT1_MASK (0x4U)
#define PCIE_RC_MISC_CONTROL_1_OFF_UR_CA_MASK_4_TRGT1_SHIFT (2U)
#define PCIE_RC_MISC_CONTROL_1_OFF_UR_CA_MASK_4_TRGT1_WIDTH (1U)
#define PCIE_RC_MISC_CONTROL_1_OFF_UR_CA_MASK_4_TRGT1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MISC_CONTROL_1_OFF_UR_CA_MASK_4_TRGT1_SHIFT)) & PCIE_RC_MISC_CONTROL_1_OFF_UR_CA_MASK_4_TRGT1_MASK)

#define PCIE_RC_MISC_CONTROL_1_OFF_SIMPLIFIED_REPLAY_TIMER_MASK (0x8U)
#define PCIE_RC_MISC_CONTROL_1_OFF_SIMPLIFIED_REPLAY_TIMER_SHIFT (3U)
#define PCIE_RC_MISC_CONTROL_1_OFF_SIMPLIFIED_REPLAY_TIMER_WIDTH (1U)
#define PCIE_RC_MISC_CONTROL_1_OFF_SIMPLIFIED_REPLAY_TIMER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MISC_CONTROL_1_OFF_SIMPLIFIED_REPLAY_TIMER_SHIFT)) & PCIE_RC_MISC_CONTROL_1_OFF_SIMPLIFIED_REPLAY_TIMER_MASK)

#define PCIE_RC_MISC_CONTROL_1_OFF_ARI_DEVICE_NUMBER_MASK (0x20U)
#define PCIE_RC_MISC_CONTROL_1_OFF_ARI_DEVICE_NUMBER_SHIFT (5U)
#define PCIE_RC_MISC_CONTROL_1_OFF_ARI_DEVICE_NUMBER_WIDTH (1U)
#define PCIE_RC_MISC_CONTROL_1_OFF_ARI_DEVICE_NUMBER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MISC_CONTROL_1_OFF_ARI_DEVICE_NUMBER_SHIFT)) & PCIE_RC_MISC_CONTROL_1_OFF_ARI_DEVICE_NUMBER_MASK)
/*! @} */

/*! @name MULTI_LANE_CONTROL_OFF - UpConfigure Multi-lane Control */
/*! @{ */

#define PCIE_RC_MULTI_LANE_CONTROL_OFF_TARGET_LINK_WIDTH_MASK (0x3FU)
#define PCIE_RC_MULTI_LANE_CONTROL_OFF_TARGET_LINK_WIDTH_SHIFT (0U)
#define PCIE_RC_MULTI_LANE_CONTROL_OFF_TARGET_LINK_WIDTH_WIDTH (6U)
#define PCIE_RC_MULTI_LANE_CONTROL_OFF_TARGET_LINK_WIDTH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MULTI_LANE_CONTROL_OFF_TARGET_LINK_WIDTH_SHIFT)) & PCIE_RC_MULTI_LANE_CONTROL_OFF_TARGET_LINK_WIDTH_MASK)

#define PCIE_RC_MULTI_LANE_CONTROL_OFF_DIRECT_LINK_WIDTH_CHANGE_MASK (0x40U)
#define PCIE_RC_MULTI_LANE_CONTROL_OFF_DIRECT_LINK_WIDTH_CHANGE_SHIFT (6U)
#define PCIE_RC_MULTI_LANE_CONTROL_OFF_DIRECT_LINK_WIDTH_CHANGE_WIDTH (1U)
#define PCIE_RC_MULTI_LANE_CONTROL_OFF_DIRECT_LINK_WIDTH_CHANGE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MULTI_LANE_CONTROL_OFF_DIRECT_LINK_WIDTH_CHANGE_SHIFT)) & PCIE_RC_MULTI_LANE_CONTROL_OFF_DIRECT_LINK_WIDTH_CHANGE_MASK)

#define PCIE_RC_MULTI_LANE_CONTROL_OFF_UPCONFIGURE_SUPPORT_MASK (0x80U)
#define PCIE_RC_MULTI_LANE_CONTROL_OFF_UPCONFIGURE_SUPPORT_SHIFT (7U)
#define PCIE_RC_MULTI_LANE_CONTROL_OFF_UPCONFIGURE_SUPPORT_WIDTH (1U)
#define PCIE_RC_MULTI_LANE_CONTROL_OFF_UPCONFIGURE_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MULTI_LANE_CONTROL_OFF_UPCONFIGURE_SUPPORT_SHIFT)) & PCIE_RC_MULTI_LANE_CONTROL_OFF_UPCONFIGURE_SUPPORT_MASK)
/*! @} */

/*! @name PHY_INTEROP_CTRL_OFF - PHY Interoperability Control */
/*! @{ */

#define PCIE_RC_PHY_INTEROP_CTRL_OFF_RXSTANDBY_CONTROL_MASK (0x7FU)
#define PCIE_RC_PHY_INTEROP_CTRL_OFF_RXSTANDBY_CONTROL_SHIFT (0U)
#define PCIE_RC_PHY_INTEROP_CTRL_OFF_RXSTANDBY_CONTROL_WIDTH (7U)
#define PCIE_RC_PHY_INTEROP_CTRL_OFF_RXSTANDBY_CONTROL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PHY_INTEROP_CTRL_OFF_RXSTANDBY_CONTROL_SHIFT)) & PCIE_RC_PHY_INTEROP_CTRL_OFF_RXSTANDBY_CONTROL_MASK)

#define PCIE_RC_PHY_INTEROP_CTRL_OFF_L1_NOWAIT_P1_MASK (0x200U)
#define PCIE_RC_PHY_INTEROP_CTRL_OFF_L1_NOWAIT_P1_SHIFT (9U)
#define PCIE_RC_PHY_INTEROP_CTRL_OFF_L1_NOWAIT_P1_WIDTH (1U)
#define PCIE_RC_PHY_INTEROP_CTRL_OFF_L1_NOWAIT_P1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PHY_INTEROP_CTRL_OFF_L1_NOWAIT_P1_SHIFT)) & PCIE_RC_PHY_INTEROP_CTRL_OFF_L1_NOWAIT_P1_MASK)

#define PCIE_RC_PHY_INTEROP_CTRL_OFF_L1_CLK_SEL_MASK (0x400U)
#define PCIE_RC_PHY_INTEROP_CTRL_OFF_L1_CLK_SEL_SHIFT (10U)
#define PCIE_RC_PHY_INTEROP_CTRL_OFF_L1_CLK_SEL_WIDTH (1U)
#define PCIE_RC_PHY_INTEROP_CTRL_OFF_L1_CLK_SEL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PHY_INTEROP_CTRL_OFF_L1_CLK_SEL_SHIFT)) & PCIE_RC_PHY_INTEROP_CTRL_OFF_L1_CLK_SEL_MASK)
/*! @} */

/*! @name TRGT_CPL_LUT_DELETE_ENTRY_OFF - TRGT_CPL_LUT Delete Entry Control */
/*! @{ */

#define PCIE_RC_TRGT_CPL_LUT_DELETE_ENTRY_OFF_LOOK_UP_ID_MASK (0x7FFFFFFFU)
#define PCIE_RC_TRGT_CPL_LUT_DELETE_ENTRY_OFF_LOOK_UP_ID_SHIFT (0U)
#define PCIE_RC_TRGT_CPL_LUT_DELETE_ENTRY_OFF_LOOK_UP_ID_WIDTH (31U)
#define PCIE_RC_TRGT_CPL_LUT_DELETE_ENTRY_OFF_LOOK_UP_ID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TRGT_CPL_LUT_DELETE_ENTRY_OFF_LOOK_UP_ID_SHIFT)) & PCIE_RC_TRGT_CPL_LUT_DELETE_ENTRY_OFF_LOOK_UP_ID_MASK)

#define PCIE_RC_TRGT_CPL_LUT_DELETE_ENTRY_OFF_DELETE_EN_MASK (0x80000000U)
#define PCIE_RC_TRGT_CPL_LUT_DELETE_ENTRY_OFF_DELETE_EN_SHIFT (31U)
#define PCIE_RC_TRGT_CPL_LUT_DELETE_ENTRY_OFF_DELETE_EN_WIDTH (1U)
#define PCIE_RC_TRGT_CPL_LUT_DELETE_ENTRY_OFF_DELETE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_TRGT_CPL_LUT_DELETE_ENTRY_OFF_DELETE_EN_SHIFT)) & PCIE_RC_TRGT_CPL_LUT_DELETE_ENTRY_OFF_DELETE_EN_MASK)
/*! @} */

/*! @name LINK_FLUSH_CONTROL_OFF - Link Reset Request Flush Control */
/*! @{ */

#define PCIE_RC_LINK_FLUSH_CONTROL_OFF_AUTO_FLUSH_EN_MASK (0x1U)
#define PCIE_RC_LINK_FLUSH_CONTROL_OFF_AUTO_FLUSH_EN_SHIFT (0U)
#define PCIE_RC_LINK_FLUSH_CONTROL_OFF_AUTO_FLUSH_EN_WIDTH (1U)
#define PCIE_RC_LINK_FLUSH_CONTROL_OFF_AUTO_FLUSH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_FLUSH_CONTROL_OFF_AUTO_FLUSH_EN_SHIFT)) & PCIE_RC_LINK_FLUSH_CONTROL_OFF_AUTO_FLUSH_EN_MASK)

#define PCIE_RC_LINK_FLUSH_CONTROL_OFF_RSVD_I_8_MASK (0xFF000000U)
#define PCIE_RC_LINK_FLUSH_CONTROL_OFF_RSVD_I_8_SHIFT (24U)
#define PCIE_RC_LINK_FLUSH_CONTROL_OFF_RSVD_I_8_WIDTH (8U)
#define PCIE_RC_LINK_FLUSH_CONTROL_OFF_RSVD_I_8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_LINK_FLUSH_CONTROL_OFF_RSVD_I_8_SHIFT)) & PCIE_RC_LINK_FLUSH_CONTROL_OFF_RSVD_I_8_MASK)
/*! @} */

/*! @name AMBA_ERROR_RESPONSE_DEFAULT_OFF - AXI Bridge Slave Error Response */
/*! @{ */

#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_GLOBAL_MASK (0x1U)
#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_GLOBAL_SHIFT (0U)
#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_GLOBAL_WIDTH (1U)
#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_GLOBAL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_GLOBAL_SHIFT)) & PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_GLOBAL_MASK)

#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_VENDORID_MASK (0x4U)
#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_VENDORID_SHIFT (2U)
#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_VENDORID_WIDTH (1U)
#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_VENDORID(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_VENDORID_SHIFT)) & PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_VENDORID_MASK)

#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_CRS_MASK (0x18U)
#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_CRS_SHIFT (3U)
#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_CRS_WIDTH (2U)
#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_CRS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_CRS_SHIFT)) & PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_CRS_MASK)

#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_MAP_MASK (0xFC00U)
#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_MAP_SHIFT (10U)
#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_MAP_WIDTH (6U)
#define PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_MAP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_MAP_SHIFT)) & PCIE_RC_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_MAP_MASK)
/*! @} */

/*! @name AMBA_LINK_TIMEOUT_OFF - Link Down AXI Bridge Slave Timeout */
/*! @{ */

#define PCIE_RC_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_PERIOD_DEFAULT_MASK (0xFFU)
#define PCIE_RC_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_PERIOD_DEFAULT_SHIFT (0U)
#define PCIE_RC_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_PERIOD_DEFAULT_WIDTH (8U)
#define PCIE_RC_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_PERIOD_DEFAULT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_PERIOD_DEFAULT_SHIFT)) & PCIE_RC_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_PERIOD_DEFAULT_MASK)

#define PCIE_RC_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_ENABLE_DEFAULT_MASK (0x100U)
#define PCIE_RC_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_ENABLE_DEFAULT_SHIFT (8U)
#define PCIE_RC_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_ENABLE_DEFAULT_WIDTH (1U)
#define PCIE_RC_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_ENABLE_DEFAULT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_ENABLE_DEFAULT_SHIFT)) & PCIE_RC_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_ENABLE_DEFAULT_MASK)
/*! @} */

/*! @name AMBA_ORDERING_CTRL_OFF - AMBA Ordering Control */
/*! @{ */

#define PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_SNP_EN_MASK (0x2U)
#define PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_SNP_EN_SHIFT (1U)
#define PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_SNP_EN_WIDTH (1U)
#define PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_SNP_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_SNP_EN_SHIFT)) & PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_SNP_EN_MASK)

#define PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ORDR_P_EVENT_SEL_MASK (0x18U)
#define PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ORDR_P_EVENT_SEL_SHIFT (3U)
#define PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ORDR_P_EVENT_SEL_WIDTH (2U)
#define PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ORDR_P_EVENT_SEL(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ORDR_P_EVENT_SEL_SHIFT)) & PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ORDR_P_EVENT_SEL_MASK)

#define PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ZEROLREAD_FW_MASK (0x80U)
#define PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ZEROLREAD_FW_SHIFT (7U)
#define PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ZEROLREAD_FW_WIDTH (1U)
#define PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ZEROLREAD_FW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ZEROLREAD_FW_SHIFT)) & PCIE_RC_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ZEROLREAD_FW_MASK)
/*! @} */

/*! @name COHERENCY_CONTROL_1_OFF - ACE Cache Coherency Control Register 1 */
/*! @{ */

#define PCIE_RC_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_VALUE_MASK (0x1U)
#define PCIE_RC_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_VALUE_SHIFT (0U)
#define PCIE_RC_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_VALUE_WIDTH (1U)
#define PCIE_RC_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_VALUE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_VALUE_SHIFT)) & PCIE_RC_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_VALUE_MASK)

#define PCIE_RC_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_BOUNDARY_LOW_ADDR_MASK (0xFFFFFFFCU)
#define PCIE_RC_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_BOUNDARY_LOW_ADDR_SHIFT (2U)
#define PCIE_RC_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_BOUNDARY_LOW_ADDR_WIDTH (30U)
#define PCIE_RC_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_BOUNDARY_LOW_ADDR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_BOUNDARY_LOW_ADDR_SHIFT)) & PCIE_RC_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_BOUNDARY_LOW_ADDR_MASK)
/*! @} */

/*! @name COHERENCY_CONTROL_2_OFF - ACE Cache Coherency Control Register 2 */
/*! @{ */

#define PCIE_RC_COHERENCY_CONTROL_2_OFF_CFG_MEMTYPE_BOUNDARY_HIGH_ADDR_MASK (0xFFFFFFFFU)
#define PCIE_RC_COHERENCY_CONTROL_2_OFF_CFG_MEMTYPE_BOUNDARY_HIGH_ADDR_SHIFT (0U)
#define PCIE_RC_COHERENCY_CONTROL_2_OFF_CFG_MEMTYPE_BOUNDARY_HIGH_ADDR_WIDTH (32U)
#define PCIE_RC_COHERENCY_CONTROL_2_OFF_CFG_MEMTYPE_BOUNDARY_HIGH_ADDR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_COHERENCY_CONTROL_2_OFF_CFG_MEMTYPE_BOUNDARY_HIGH_ADDR_SHIFT)) & PCIE_RC_COHERENCY_CONTROL_2_OFF_CFG_MEMTYPE_BOUNDARY_HIGH_ADDR_MASK)
/*! @} */

/*! @name COHERENCY_CONTROL_3_OFF - ACE Cache Coherency Control Register 3 */
/*! @{ */

#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_MODE_MASK (0x3U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_MODE_SHIFT (0U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_MODE_WIDTH (2U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_MODE_SHIFT)) & PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_MODE_MASK)

#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_MODE_MASK (0x78U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_MODE_SHIFT (3U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_MODE_WIDTH (4U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_MODE_SHIFT)) & PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_MODE_MASK)

#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_MODE_MASK (0x300U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_MODE_SHIFT (8U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_MODE_WIDTH (2U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_MODE_SHIFT)) & PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_MODE_MASK)

#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_MODE_MASK (0x7800U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_MODE_SHIFT (11U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_MODE_WIDTH (4U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_MODE_SHIFT)) & PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_MODE_MASK)

#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_VALUE_MASK (0x30000U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_VALUE_SHIFT (16U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_VALUE_WIDTH (2U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_VALUE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_VALUE_SHIFT)) & PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_VALUE_MASK)

#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_VALUE_MASK (0x780000U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_VALUE_SHIFT (19U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_VALUE_WIDTH (4U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_VALUE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_VALUE_SHIFT)) & PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_VALUE_MASK)

#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_VALUE_MASK (0x3000000U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_VALUE_SHIFT (24U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_VALUE_WIDTH (2U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_VALUE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_VALUE_SHIFT)) & PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_VALUE_MASK)

#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_VALUE_MASK (0x78000000U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_VALUE_SHIFT (27U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_VALUE_WIDTH (4U)
#define PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_VALUE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_VALUE_SHIFT)) & PCIE_RC_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_VALUE_MASK)
/*! @} */

/*! @name AXI_MSTR_MSG_ADDR_LOW_OFF - Lower 20 bits of the programmable AXI address where Messages coming from wire are mapped to */
/*! @{ */

#define PCIE_RC_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_RESERVED_MASK (0xFFFU)
#define PCIE_RC_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_RESERVED_SHIFT (0U)
#define PCIE_RC_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_RESERVED_WIDTH (12U)
#define PCIE_RC_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_RESERVED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_RESERVED_SHIFT)) & PCIE_RC_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_RESERVED_MASK)

#define PCIE_RC_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_MASK (0xFFFFF000U)
#define PCIE_RC_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_SHIFT (12U)
#define PCIE_RC_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_WIDTH (20U)
#define PCIE_RC_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_SHIFT)) & PCIE_RC_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_MASK)
/*! @} */

/*! @name AXI_MSTR_MSG_ADDR_HIGH_OFF - Upper 32 bits of the programmable AXI address where Messages coming from wire are mapped to */
/*! @{ */

#define PCIE_RC_AXI_MSTR_MSG_ADDR_HIGH_OFF_CFG_AXIMSTR_MSG_ADDR_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_RC_AXI_MSTR_MSG_ADDR_HIGH_OFF_CFG_AXIMSTR_MSG_ADDR_HIGH_SHIFT (0U)
#define PCIE_RC_AXI_MSTR_MSG_ADDR_HIGH_OFF_CFG_AXIMSTR_MSG_ADDR_HIGH_WIDTH (32U)
#define PCIE_RC_AXI_MSTR_MSG_ADDR_HIGH_OFF_CFG_AXIMSTR_MSG_ADDR_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AXI_MSTR_MSG_ADDR_HIGH_OFF_CFG_AXIMSTR_MSG_ADDR_HIGH_SHIFT)) & PCIE_RC_AXI_MSTR_MSG_ADDR_HIGH_OFF_CFG_AXIMSTR_MSG_ADDR_HIGH_MASK)
/*! @} */

/*! @name PCIE_VERSION_NUMBER_OFF - PCIe Controller IIP Release Version Number */
/*! @{ */

#define PCIE_RC_PCIE_VERSION_NUMBER_OFF_VERSION_NUMBER_MASK (0xFFFFFFFFU)
#define PCIE_RC_PCIE_VERSION_NUMBER_OFF_VERSION_NUMBER_SHIFT (0U)
#define PCIE_RC_PCIE_VERSION_NUMBER_OFF_VERSION_NUMBER_WIDTH (32U)
#define PCIE_RC_PCIE_VERSION_NUMBER_OFF_VERSION_NUMBER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCIE_VERSION_NUMBER_OFF_VERSION_NUMBER_SHIFT)) & PCIE_RC_PCIE_VERSION_NUMBER_OFF_VERSION_NUMBER_MASK)
/*! @} */

/*! @name PCIE_VERSION_TYPE_OFF - PCIe Controller IIP Release Version Type */
/*! @{ */

#define PCIE_RC_PCIE_VERSION_TYPE_OFF_VERSION_TYPE_MASK (0xFFFFFFFFU)
#define PCIE_RC_PCIE_VERSION_TYPE_OFF_VERSION_TYPE_SHIFT (0U)
#define PCIE_RC_PCIE_VERSION_TYPE_OFF_VERSION_TYPE_WIDTH (32U)
#define PCIE_RC_PCIE_VERSION_TYPE_OFF_VERSION_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PCIE_VERSION_TYPE_OFF_VERSION_TYPE_SHIFT)) & PCIE_RC_PCIE_VERSION_TYPE_OFF_VERSION_TYPE_MASK)
/*! @} */

/*! @name INTERFACE_TIMER_CONTROL_OFF - Interface Timer Control */
/*! @{ */

#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_EN_MASK (0x1U)
#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_EN_SHIFT (0U)
#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_EN_WIDTH (1U)
#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_EN_SHIFT)) & PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_EN_MASK)

#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_AER_EN_MASK (0x2U)
#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_AER_EN_SHIFT (1U)
#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_AER_EN_WIDTH (1U)
#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_AER_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_AER_EN_SHIFT)) & PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_AER_EN_MASK)

#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_SCALING_MASK (0xCU)
#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_SCALING_SHIFT (2U)
#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_SCALING_WIDTH (2U)
#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_SCALING(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_SCALING_SHIFT)) & PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_SCALING_MASK)

#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_FORCE_PENDING_MASK (0x10U)
#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_FORCE_PENDING_SHIFT (4U)
#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_FORCE_PENDING_WIDTH (1U)
#define PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_FORCE_PENDING(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_FORCE_PENDING_SHIFT)) & PCIE_RC_INTERFACE_TIMER_CONTROL_OFF_FORCE_PENDING_MASK)
/*! @} */

/*! @name INTERFACE_TIMER_TARGET_OFF - Interface Timer Target */
/*! @{ */

#define PCIE_RC_INTERFACE_TIMER_TARGET_OFF_INTERFACE_TIMER_TARGET_MASK (0xFFFFU)
#define PCIE_RC_INTERFACE_TIMER_TARGET_OFF_INTERFACE_TIMER_TARGET_SHIFT (0U)
#define PCIE_RC_INTERFACE_TIMER_TARGET_OFF_INTERFACE_TIMER_TARGET_WIDTH (16U)
#define PCIE_RC_INTERFACE_TIMER_TARGET_OFF_INTERFACE_TIMER_TARGET(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_TARGET_OFF_INTERFACE_TIMER_TARGET_SHIFT)) & PCIE_RC_INTERFACE_TIMER_TARGET_OFF_INTERFACE_TIMER_TARGET_MASK)
/*! @} */

/*! @name INTERFACE_TIMER_STATUS_OFF - Interface Timer Status */
/*! @{ */

#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MESSAGE_INTERFACE_TIMEOUT_MASK (0x1U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MESSAGE_INTERFACE_TIMEOUT_SHIFT (0U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MESSAGE_INTERFACE_TIMEOUT_WIDTH (1U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MESSAGE_INTERFACE_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MESSAGE_INTERFACE_TIMEOUT_SHIFT)) & PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MESSAGE_INTERFACE_TIMEOUT_MASK)

#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CPL_INTERFACE_TIMEOUT_MASK (0x2U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CPL_INTERFACE_TIMEOUT_SHIFT (1U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CPL_INTERFACE_TIMEOUT_WIDTH (1U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CPL_INTERFACE_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CPL_INTERFACE_TIMEOUT_SHIFT)) & PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CPL_INTERFACE_TIMEOUT_MASK)

#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CLIENT1_INTERFACE_TIMEOUT_MASK (0x8U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CLIENT1_INTERFACE_TIMEOUT_SHIFT (3U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CLIENT1_INTERFACE_TIMEOUT_WIDTH (1U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CLIENT1_INTERFACE_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CLIENT1_INTERFACE_TIMEOUT_SHIFT)) & PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CLIENT1_INTERFACE_TIMEOUT_MASK)

#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CLIENT2_INTERFACE_TIMEOUT_MASK (0x10U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CLIENT2_INTERFACE_TIMEOUT_SHIFT (4U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CLIENT2_INTERFACE_TIMEOUT_WIDTH (1U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CLIENT2_INTERFACE_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CLIENT2_INTERFACE_TIMEOUT_SHIFT)) & PCIE_RC_INTERFACE_TIMER_STATUS_OFF_CLIENT2_INTERFACE_TIMEOUT_MASK)

#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MASTER_WR_RES_TIMEOUT_MASK (0x20U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MASTER_WR_RES_TIMEOUT_SHIFT (5U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MASTER_WR_RES_TIMEOUT_WIDTH (1U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MASTER_WR_RES_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MASTER_WR_RES_TIMEOUT_SHIFT)) & PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MASTER_WR_RES_TIMEOUT_MASK)

#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MASTER_RD_DATA_TIMEOUT_MASK (0x40U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MASTER_RD_DATA_TIMEOUT_SHIFT (6U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MASTER_RD_DATA_TIMEOUT_WIDTH (1U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MASTER_RD_DATA_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MASTER_RD_DATA_TIMEOUT_SHIFT)) & PCIE_RC_INTERFACE_TIMER_STATUS_OFF_MASTER_RD_DATA_TIMEOUT_MASK)

#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_ADD_TIMEOUT_MASK (0x200U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_ADD_TIMEOUT_SHIFT (9U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_ADD_TIMEOUT_WIDTH (1U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_ADD_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_ADD_TIMEOUT_SHIFT)) & PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_ADD_TIMEOUT_MASK)

#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_DATA_TIMEOUT_MASK (0x400U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_DATA_TIMEOUT_SHIFT (10U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_DATA_TIMEOUT_WIDTH (1U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_DATA_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_DATA_TIMEOUT_SHIFT)) & PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_DATA_TIMEOUT_MASK)

#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_RD_ADD_TIMEOUT_MASK (0x800U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_RD_ADD_TIMEOUT_SHIFT (11U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_RD_ADD_TIMEOUT_WIDTH (1U)
#define PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_RD_ADD_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_RD_ADD_TIMEOUT_SHIFT)) & PCIE_RC_INTERFACE_TIMER_STATUS_OFF_SLAVE_RD_ADD_TIMEOUT_MASK)
/*! @} */

/*! @name MSIX_ADDRESS_MATCH_LOW_OFF - MSI-X Address Match Low */
/*! @{ */

#define PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_EN_MASK (0x1U)
#define PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_EN_SHIFT (0U)
#define PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_EN_WIDTH (1U)
#define PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_EN_SHIFT)) & PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_EN_MASK)

#define PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_RESERVED_1_MASK (0x2U)
#define PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_RESERVED_1_SHIFT (1U)
#define PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_RESERVED_1_WIDTH (1U)
#define PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_RESERVED_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_RESERVED_1_SHIFT)) & PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_RESERVED_1_MASK)

#define PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_LOW_MASK (0xFFFFFFFCU)
#define PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_LOW_SHIFT (2U)
#define PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_LOW_WIDTH (30U)
#define PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_LOW_SHIFT)) & PCIE_RC_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_LOW_MASK)
/*! @} */

/*! @name MSIX_ADDRESS_MATCH_HIGH_OFF - MSI-X Address Match High */
/*! @{ */

#define PCIE_RC_MSIX_ADDRESS_MATCH_HIGH_OFF_MSIX_ADDRESS_MATCH_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_RC_MSIX_ADDRESS_MATCH_HIGH_OFF_MSIX_ADDRESS_MATCH_HIGH_SHIFT (0U)
#define PCIE_RC_MSIX_ADDRESS_MATCH_HIGH_OFF_MSIX_ADDRESS_MATCH_HIGH_WIDTH (32U)
#define PCIE_RC_MSIX_ADDRESS_MATCH_HIGH_OFF_MSIX_ADDRESS_MATCH_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_ADDRESS_MATCH_HIGH_OFF_MSIX_ADDRESS_MATCH_HIGH_SHIFT)) & PCIE_RC_MSIX_ADDRESS_MATCH_HIGH_OFF_MSIX_ADDRESS_MATCH_HIGH_MASK)
/*! @} */

/*! @name MSIX_DOORBELL_OFF - MSI-X Doorbell */
/*! @{ */

#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VECTOR_MASK (0x7FFU)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VECTOR_SHIFT (0U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VECTOR_WIDTH (11U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VECTOR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VECTOR_SHIFT)) & PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VECTOR_MASK)

#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_11_MASK (0x800U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_11_SHIFT (11U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_11_WIDTH (1U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_11(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_11_SHIFT)) & PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_11_MASK)

#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_TC_MASK (0x7000U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_TC_SHIFT (12U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_TC_WIDTH (3U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_TC_SHIFT)) & PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_TC_MASK)

#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_ACTIVE_MASK (0x8000U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_ACTIVE_SHIFT (15U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_ACTIVE_WIDTH (1U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_ACTIVE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_ACTIVE_SHIFT)) & PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_ACTIVE_MASK)

#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_MASK (0xFF0000U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_SHIFT (16U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_WIDTH (8U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_SHIFT)) & PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_MASK)

#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_PF_MASK (0x1F000000U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_PF_SHIFT (24U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_PF_WIDTH (5U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_PF(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_PF_SHIFT)) & PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_PF_MASK)

#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_29_31_MASK (0xE0000000U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_29_31_SHIFT (29U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_29_31_WIDTH (3U)
#define PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_29_31(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_29_31_SHIFT)) & PCIE_RC_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_29_31_MASK)
/*! @} */

/*! @name MSIX_RAM_CTRL_OFF - MSI-X RAM Power Mode And Debug Control */
/*! @{ */

#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_DS_MASK (0x1U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_DS_SHIFT (0U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_DS_WIDTH (1U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_DS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_DS_SHIFT)) & PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_DS_MASK)

#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_SD_MASK (0x2U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_SD_SHIFT (1U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_SD_WIDTH (1U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_SD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_SD_SHIFT)) & PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_SD_MASK)

#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_2_7_MASK (0xFCU)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_2_7_SHIFT (2U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_2_7_WIDTH (6U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_2_7(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_2_7_SHIFT)) & PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_2_7_MASK)

#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_DS_MASK (0x100U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_DS_SHIFT (8U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_DS_WIDTH (1U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_DS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_DS_SHIFT)) & PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_DS_MASK)

#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_SD_MASK (0x200U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_SD_SHIFT (9U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_SD_WIDTH (1U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_SD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_SD_SHIFT)) & PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_SD_MASK)

#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_10_15_MASK (0xFC00U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_10_15_SHIFT (10U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_10_15_WIDTH (6U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_10_15(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_10_15_SHIFT)) & PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_10_15_MASK)

#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_BYPASS_MASK (0x10000U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_BYPASS_SHIFT (16U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_BYPASS_WIDTH (1U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_BYPASS_SHIFT)) & PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_BYPASS_MASK)

#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_17_23_MASK (0xFE0000U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_17_23_SHIFT (17U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_17_23_WIDTH (7U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_17_23(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_17_23_SHIFT)) & PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_17_23_MASK)

#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_TABLE_MASK (0x1000000U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_TABLE_SHIFT (24U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_TABLE_WIDTH (1U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_TABLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_TABLE_SHIFT)) & PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_TABLE_MASK)

#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_PBA_MASK (0x2000000U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_PBA_SHIFT (25U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_PBA_WIDTH (1U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_PBA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_PBA_SHIFT)) & PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_PBA_MASK)

#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_26_31_MASK (0xFC000000U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_26_31_SHIFT (26U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_26_31_WIDTH (6U)
#define PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_26_31(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_26_31_SHIFT)) & PCIE_RC_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_26_31_MASK)
/*! @} */

/*! @name SAFETY_MASK_OFF - Masks for functional safety interrupt events */
/*! @{ */

#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_0_MASK (0x1U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_0_SHIFT (0U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_0_WIDTH (1U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_0_SHIFT)) & PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_0_MASK)

#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_1_MASK (0x2U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_1_SHIFT (1U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_1_WIDTH (1U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_1_SHIFT)) & PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_1_MASK)

#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_2_MASK (0x4U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_2_SHIFT (2U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_2_WIDTH (1U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_2_SHIFT)) & PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_2_MASK)

#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_3_MASK (0x8U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_3_SHIFT (3U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_3_WIDTH (1U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_3_SHIFT)) & PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_3_MASK)

#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_4_MASK (0x10U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_4_SHIFT (4U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_4_WIDTH (1U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_4(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_4_SHIFT)) & PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_4_MASK)

#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_5_MASK (0x20U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_5_SHIFT (5U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_5_WIDTH (1U)
#define PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_5_SHIFT)) & PCIE_RC_SAFETY_MASK_OFF_SAFETY_INT_MASK_5_MASK)
/*! @} */

/*! @name SAFETY_STATUS_OFF - Status for functional safety interrupt events. */
/*! @{ */

#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_0_MASK (0x1U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_0_SHIFT (0U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_0_WIDTH (1U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_0_SHIFT)) & PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_0_MASK)

#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_1_MASK (0x2U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_1_SHIFT (1U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_1_WIDTH (1U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_1_SHIFT)) & PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_1_MASK)

#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_2_MASK (0x4U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_2_SHIFT (2U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_2_WIDTH (1U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_2_SHIFT)) & PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_2_MASK)

#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_3_MASK (0x8U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_3_SHIFT (3U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_3_WIDTH (1U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_3_SHIFT)) & PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_3_MASK)

#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_4_MASK (0x10U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_4_SHIFT (4U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_4_WIDTH (1U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_4(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_4_SHIFT)) & PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_4_MASK)

#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_5_MASK (0x20U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_5_SHIFT (5U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_5_WIDTH (1U)
#define PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_5_SHIFT)) & PCIE_RC_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_5_MASK)
/*! @} */

/*! @name PL_CHK_REG_CONTROL_STATUS_OFF - CDM Register Checking Control and Status */
/*! @{ */

#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_START_MASK (0x1U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_START_SHIFT (0U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_START_WIDTH (1U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_START(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_START_SHIFT)) & PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_START_MASK)

#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_CONTINUOUS_MASK (0x2U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_CONTINUOUS_SHIFT (1U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_CONTINUOUS_WIDTH (1U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_CONTINUOUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_CONTINUOUS_SHIFT)) & PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_CONTINUOUS_MASK)

#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPARISON_ERROR_MASK (0x10000U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPARISON_ERROR_SHIFT (16U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPARISON_ERROR_WIDTH (1U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPARISON_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPARISON_ERROR_SHIFT)) & PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPARISON_ERROR_MASK)

#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_LOGIC_ERROR_MASK (0x20000U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_LOGIC_ERROR_SHIFT (17U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_LOGIC_ERROR_WIDTH (1U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_LOGIC_ERROR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_LOGIC_ERROR_SHIFT)) & PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_LOGIC_ERROR_MASK)

#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPLETE_MASK (0x40000U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPLETE_SHIFT (18U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPLETE_WIDTH (1U)
#define PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPLETE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPLETE_SHIFT)) & PCIE_RC_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPLETE_MASK)
/*! @} */

/*! @name PL_CHK_REG_START_END_OFF - CDM Register Checking First and Last address to check */
/*! @{ */

#define PCIE_RC_PL_CHK_REG_START_END_OFF_CHK_REG_START_ADDR_MASK (0xFFFFU)
#define PCIE_RC_PL_CHK_REG_START_END_OFF_CHK_REG_START_ADDR_SHIFT (0U)
#define PCIE_RC_PL_CHK_REG_START_END_OFF_CHK_REG_START_ADDR_WIDTH (16U)
#define PCIE_RC_PL_CHK_REG_START_END_OFF_CHK_REG_START_ADDR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PL_CHK_REG_START_END_OFF_CHK_REG_START_ADDR_SHIFT)) & PCIE_RC_PL_CHK_REG_START_END_OFF_CHK_REG_START_ADDR_MASK)

#define PCIE_RC_PL_CHK_REG_START_END_OFF_CHK_REG_END_ADDR_MASK (0xFFFF0000U)
#define PCIE_RC_PL_CHK_REG_START_END_OFF_CHK_REG_END_ADDR_SHIFT (16U)
#define PCIE_RC_PL_CHK_REG_START_END_OFF_CHK_REG_END_ADDR_WIDTH (16U)
#define PCIE_RC_PL_CHK_REG_START_END_OFF_CHK_REG_END_ADDR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PL_CHK_REG_START_END_OFF_CHK_REG_END_ADDR_SHIFT)) & PCIE_RC_PL_CHK_REG_START_END_OFF_CHK_REG_END_ADDR_MASK)
/*! @} */

/*! @name PL_CHK_REG_ERR_ADDR_OFF - CDM Register Checking Error Address. */
/*! @{ */

#define PCIE_RC_PL_CHK_REG_ERR_ADDR_OFF_CHK_REG_ERR_ADDR_MASK (0xFFFFFFFFU)
#define PCIE_RC_PL_CHK_REG_ERR_ADDR_OFF_CHK_REG_ERR_ADDR_SHIFT (0U)
#define PCIE_RC_PL_CHK_REG_ERR_ADDR_OFF_CHK_REG_ERR_ADDR_WIDTH (32U)
#define PCIE_RC_PL_CHK_REG_ERR_ADDR_OFF_CHK_REG_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PL_CHK_REG_ERR_ADDR_OFF_CHK_REG_ERR_ADDR_SHIFT)) & PCIE_RC_PL_CHK_REG_ERR_ADDR_OFF_CHK_REG_ERR_ADDR_MASK)
/*! @} */

/*! @name PL_CHK_REG_ERR_PF_VF_OFF - CDM Register Checking error PF and VF Numbers */
/*! @{ */

#define PCIE_RC_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_PF_ERR_NUMBER_MASK (0x1FU)
#define PCIE_RC_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_PF_ERR_NUMBER_SHIFT (0U)
#define PCIE_RC_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_PF_ERR_NUMBER_WIDTH (5U)
#define PCIE_RC_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_PF_ERR_NUMBER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_PF_ERR_NUMBER_SHIFT)) & PCIE_RC_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_PF_ERR_NUMBER_MASK)

#define PCIE_RC_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_VF_ERR_NUMBER_MASK (0xFFF0000U)
#define PCIE_RC_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_VF_ERR_NUMBER_SHIFT (16U)
#define PCIE_RC_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_VF_ERR_NUMBER_WIDTH (12U)
#define PCIE_RC_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_VF_ERR_NUMBER(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_VF_ERR_NUMBER_SHIFT)) & PCIE_RC_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_VF_ERR_NUMBER_MASK)
/*! @} */

/*! @name AUX_CLK_FREQ_OFF - Auxiliary Clock Frequency Control */
/*! @{ */

#define PCIE_RC_AUX_CLK_FREQ_OFF_AUX_CLK_FREQ_MASK (0x3FFU)
#define PCIE_RC_AUX_CLK_FREQ_OFF_AUX_CLK_FREQ_SHIFT (0U)
#define PCIE_RC_AUX_CLK_FREQ_OFF_AUX_CLK_FREQ_WIDTH (10U)
#define PCIE_RC_AUX_CLK_FREQ_OFF_AUX_CLK_FREQ(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_AUX_CLK_FREQ_OFF_AUX_CLK_FREQ_SHIFT)) & PCIE_RC_AUX_CLK_FREQ_OFF_AUX_CLK_FREQ_MASK)
/*! @} */

/*! @name BAR_MASK - BAR0 Mask..BAR5 Mask */
/*! @{ */

#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR0_ENABLED_MASK (0x1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR0_ENABLED_SHIFT (0U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR0_ENABLED_WIDTH (1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR0_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BAR_MASK_PCI_TYPE1_BAR0_ENABLED_SHIFT)) & PCIE_RC_BAR_MASK_PCI_TYPE1_BAR0_ENABLED_MASK)

#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR0_MASK_MASK (0xFFFFFFFEU)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR0_MASK_SHIFT (1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR0_MASK_WIDTH (31U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR0_MASK(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BAR_MASK_PCI_TYPE1_BAR0_MASK_SHIFT)) & PCIE_RC_BAR_MASK_PCI_TYPE1_BAR0_MASK_MASK)

#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR1_ENABLED_MASK (0x1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR1_ENABLED_SHIFT (0U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR1_ENABLED_WIDTH (1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR1_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BAR_MASK_PCI_TYPE1_BAR1_ENABLED_SHIFT)) & PCIE_RC_BAR_MASK_PCI_TYPE1_BAR1_ENABLED_MASK)

#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR1_MASK_MASK (0xFFFFFFFEU)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR1_MASK_SHIFT (1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR1_MASK_WIDTH (31U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR1_MASK(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BAR_MASK_PCI_TYPE1_BAR1_MASK_SHIFT)) & PCIE_RC_BAR_MASK_PCI_TYPE1_BAR1_MASK_MASK)

#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR2_ENABLED_MASK (0x1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR2_ENABLED_SHIFT (0U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR2_ENABLED_WIDTH (1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR2_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BAR_MASK_PCI_TYPE1_BAR2_ENABLED_SHIFT)) & PCIE_RC_BAR_MASK_PCI_TYPE1_BAR2_ENABLED_MASK)

#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR2_MASK_MASK (0xFFFFFFFEU)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR2_MASK_SHIFT (1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR2_MASK_WIDTH (31U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR2_MASK(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BAR_MASK_PCI_TYPE1_BAR2_MASK_SHIFT)) & PCIE_RC_BAR_MASK_PCI_TYPE1_BAR2_MASK_MASK)

#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR3_ENABLED_MASK (0x1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR3_ENABLED_SHIFT (0U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR3_ENABLED_WIDTH (1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR3_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BAR_MASK_PCI_TYPE1_BAR3_ENABLED_SHIFT)) & PCIE_RC_BAR_MASK_PCI_TYPE1_BAR3_ENABLED_MASK)

#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR3_MASK_MASK (0xFFFFFFFEU)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR3_MASK_SHIFT (1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR3_MASK_WIDTH (31U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR3_MASK(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BAR_MASK_PCI_TYPE1_BAR3_MASK_SHIFT)) & PCIE_RC_BAR_MASK_PCI_TYPE1_BAR3_MASK_MASK)

#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR4_ENABLED_MASK (0x1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR4_ENABLED_SHIFT (0U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR4_ENABLED_WIDTH (1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR4_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BAR_MASK_PCI_TYPE1_BAR4_ENABLED_SHIFT)) & PCIE_RC_BAR_MASK_PCI_TYPE1_BAR4_ENABLED_MASK)

#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR4_MASK_MASK (0xFFFFFFFEU)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR4_MASK_SHIFT (1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR4_MASK_WIDTH (31U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR4_MASK(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BAR_MASK_PCI_TYPE1_BAR4_MASK_SHIFT)) & PCIE_RC_BAR_MASK_PCI_TYPE1_BAR4_MASK_MASK)

#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR5_ENABLED_MASK (0x1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR5_ENABLED_SHIFT (0U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR5_ENABLED_WIDTH (1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR5_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BAR_MASK_PCI_TYPE1_BAR5_ENABLED_SHIFT)) & PCIE_RC_BAR_MASK_PCI_TYPE1_BAR5_ENABLED_MASK)

#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR5_MASK_MASK (0xFFFFFFFEU)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR5_MASK_SHIFT (1U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR5_MASK_WIDTH (31U)
#define PCIE_RC_BAR_MASK_PCI_TYPE1_BAR5_MASK(x)  (((uint32_t)(((uint32_t)(x)) << PCIE_RC_BAR_MASK_PCI_TYPE1_BAR5_MASK_SHIFT)) & PCIE_RC_BAR_MASK_PCI_TYPE1_BAR5_MASK_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_OUTBOUND_0 - iATU Region Control 1 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TYPE_MASK (0x1FU)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TYPE_SHIFT (0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TYPE_WIDTH (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TYPE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TYPE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TC_MASK (0xE0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TC_SHIFT (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TC_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TC_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TC_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TD_MASK (0x100U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TD_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_ATTR_MASK (0x600U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_ATTR_SHIFT (9U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_ATTR_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_ATTR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_ATTR_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_ATTR_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_INCREASE_REGION_SIZE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_INCREASE_REGION_SIZE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_INCREASE_REGION_SIZE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_INCREASE_REGION_SIZE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_INCREASE_REGION_SIZE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_CTRL_1_FUNC_NUM_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_CTRL_1_FUNC_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_CTRL_1_FUNC_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_OUTBOUND_0 - iATU Region Control 2 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_MASK (0xFF00U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_WIDTH (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SUBSTITUTE_EN_MASK (0x10000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SUBSTITUTE_EN_SHIFT (16U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SUBSTITUTE_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SUBSTITUTE_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SUBSTITUTE_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_FUNC_BYPASS_MASK (0x80000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_FUNC_BYPASS_SHIFT (19U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_FUNC_BYPASS_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_FUNC_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_FUNC_BYPASS_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_FUNC_BYPASS_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_SNP_MASK (0x100000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_SNP_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_SNP_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_SNP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_SNP_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_SNP_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INHIBIT_PAYLOAD_MASK (0x400000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INHIBIT_PAYLOAD_SHIFT (22U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INHIBIT_PAYLOAD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INHIBIT_PAYLOAD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INHIBIT_PAYLOAD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INHIBIT_PAYLOAD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_HEADER_SUBSTITUTE_EN_MASK (0x800000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_HEADER_SUBSTITUTE_EN_SHIFT (23U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_HEADER_SUBSTITUTE_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_HEADER_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_HEADER_SUBSTITUTE_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_HEADER_SUBSTITUTE_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_DMA_BYPASS_MASK (0x8000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_DMA_BYPASS_SHIFT (27U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_DMA_BYPASS_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_DMA_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_DMA_BYPASS_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_DMA_BYPASS_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_CFG_SHIFT_MODE_MASK (0x10000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_CFG_SHIFT_MODE_SHIFT (28U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_CFG_SHIFT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_CFG_SHIFT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_CFG_SHIFT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INVERT_MODE_MASK (0x20000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INVERT_MODE_SHIFT (29U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INVERT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INVERT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INVERT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_REGION_EN_MASK (0x80000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_REGION_EN_SHIFT (31U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_REGION_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_REGION_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0 - iATU Lower Base Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_HW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_HW_MASK)

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_RW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0 - iATU Upper Base Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0_UPPER_BASE_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0_UPPER_BASE_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0_UPPER_BASE_RW_SHIFT)) & PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_OUTBOUND_0 - iATU Limit Address */
/*! @{ */

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_HW_SHIFT (0U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_HW_WIDTH (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_HW_MASK)

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_RW_SHIFT (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_RW_WIDTH (20U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0 - iATU Lower Target Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0_LWR_TARGET_RW_OUTBOUND_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0_LWR_TARGET_RW_OUTBOUND_SHIFT (0U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0_LWR_TARGET_RW_OUTBOUND_WIDTH (32U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0_LWR_TARGET_RW_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0_LWR_TARGET_RW_OUTBOUND_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0_LWR_TARGET_RW_OUTBOUND_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0 - iATU Upper Target Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0_UPPER_TARGET_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0_UPPER_TARGET_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0_UPPER_TARGET_RW_SHIFT)) & PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0 - iATU Upper Limit Address */
/*! @{ */

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_RW_MASK)

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_INBOUND_0 - iATU Region Control 1 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TYPE_MASK (0x1FU)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TYPE_SHIFT (0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TYPE_WIDTH (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TYPE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TYPE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TC_MASK (0xE0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TC_SHIFT (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TC_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TC_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TC_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TD_MASK (0x100U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TD_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_TD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_ATTR_MASK (0x600U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_ATTR_SHIFT (9U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_ATTR_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_ATTR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_ATTR_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_ATTR_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_INCREASE_REGION_SIZE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_INCREASE_REGION_SIZE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_INCREASE_REGION_SIZE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_INCREASE_REGION_SIZE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_INCREASE_REGION_SIZE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_CTRL_1_FUNC_NUM_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_CTRL_1_FUNC_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_CTRL_1_FUNC_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_0_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_INBOUND_0 - iATU Region Control 2 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_BAR_NUM_MASK (0x700U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_BAR_NUM_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_BAR_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_BAR_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_BAR_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_BAR_NUM_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_TYPE_MATCH_MODE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_TYPE_MATCH_MODE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_TYPE_MATCH_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_TYPE_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_TYPE_MATCH_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_TYPE_MATCH_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_TC_MATCH_EN_MASK (0x4000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_TC_MATCH_EN_SHIFT (14U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_TC_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_TC_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_TC_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_TC_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_TD_MATCH_EN_MASK (0x8000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_TD_MATCH_EN_SHIFT (15U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_TD_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_TD_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_TD_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_TD_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_ATTR_MATCH_EN_MASK (0x10000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_ATTR_MATCH_EN_SHIFT (16U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_ATTR_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_ATTR_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_ATTR_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_ATTR_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUNC_NUM_MATCH_EN_MASK (0x80000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUNC_NUM_MATCH_EN_SHIFT (19U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUNC_NUM_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUNC_NUM_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUNC_NUM_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUNC_NUM_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_SINGLE_ADDR_LOC_TRANS_EN_MASK (0x800000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_SINGLE_ADDR_LOC_TRANS_EN_SHIFT (23U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_SINGLE_ADDR_LOC_TRANS_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_SINGLE_ADDR_LOC_TRANS_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_SINGLE_ADDR_LOC_TRANS_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_SINGLE_ADDR_LOC_TRANS_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_RESPONSE_CODE_MASK (0x3000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_RESPONSE_CODE_SHIFT (24U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_RESPONSE_CODE_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_RESPONSE_CODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_RESPONSE_CODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_RESPONSE_CODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUZZY_TYPE_MATCH_CODE_MASK (0x8000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUZZY_TYPE_MATCH_CODE_SHIFT (27U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUZZY_TYPE_MATCH_CODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUZZY_TYPE_MATCH_CODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUZZY_TYPE_MATCH_CODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUZZY_TYPE_MATCH_CODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_CFG_SHIFT_MODE_MASK (0x10000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_CFG_SHIFT_MODE_SHIFT (28U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_CFG_SHIFT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_CFG_SHIFT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_CFG_SHIFT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_INVERT_MODE_MASK (0x20000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_INVERT_MODE_SHIFT (29U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_INVERT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_INVERT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_INVERT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_MATCH_MODE_MASK (0x40000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_MATCH_MODE_SHIFT (30U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_MATCH_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_MATCH_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_MATCH_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_REGION_EN_MASK (0x80000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_REGION_EN_SHIFT (31U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_REGION_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_REGION_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_0_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_INBOUND_0 - iATU Lower Base Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_HW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_HW_MASK)

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_RW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_INBOUND_0 - iATU Upper Base Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_0_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_0_UPPER_BASE_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_0_UPPER_BASE_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_0_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_0_UPPER_BASE_RW_SHIFT)) & PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_0_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_INBOUND_0 - iATU Limit Address */
/*! @{ */

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_HW_SHIFT (0U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_HW_WIDTH (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_HW_MASK)

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_RW_SHIFT (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_RW_WIDTH (20U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_INBOUND_0 - iATU Lower Target Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_HW_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_HW_MASK)

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_RW_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0 - iATU Upper Target Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0_UPPER_TARGET_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0_UPPER_TARGET_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0_UPPER_TARGET_RW_SHIFT)) & PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0 - iATU Upper Limit Address */
/*! @{ */

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_RW_MASK)

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_OUTBOUND_1 - iATU Region Control 1 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TYPE_MASK (0x1FU)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TYPE_SHIFT (0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TYPE_WIDTH (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TYPE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TYPE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TC_MASK (0xE0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TC_SHIFT (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TC_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TC_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TC_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TD_MASK (0x100U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TD_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_ATTR_MASK (0x600U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_ATTR_SHIFT (9U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_ATTR_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_ATTR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_ATTR_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_ATTR_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_INCREASE_REGION_SIZE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_INCREASE_REGION_SIZE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_INCREASE_REGION_SIZE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_INCREASE_REGION_SIZE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_INCREASE_REGION_SIZE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_CTRL_1_FUNC_NUM_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_CTRL_1_FUNC_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_CTRL_1_FUNC_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_OUTBOUND_1 - iATU Region Control 2 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_MASK (0xFF00U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_WIDTH (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SUBSTITUTE_EN_MASK (0x10000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SUBSTITUTE_EN_SHIFT (16U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SUBSTITUTE_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SUBSTITUTE_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SUBSTITUTE_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_FUNC_BYPASS_MASK (0x80000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_FUNC_BYPASS_SHIFT (19U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_FUNC_BYPASS_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_FUNC_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_FUNC_BYPASS_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_FUNC_BYPASS_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_SNP_MASK (0x100000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_SNP_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_SNP_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_SNP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_SNP_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_SNP_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INHIBIT_PAYLOAD_MASK (0x400000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INHIBIT_PAYLOAD_SHIFT (22U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INHIBIT_PAYLOAD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INHIBIT_PAYLOAD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INHIBIT_PAYLOAD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INHIBIT_PAYLOAD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_HEADER_SUBSTITUTE_EN_MASK (0x800000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_HEADER_SUBSTITUTE_EN_SHIFT (23U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_HEADER_SUBSTITUTE_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_HEADER_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_HEADER_SUBSTITUTE_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_HEADER_SUBSTITUTE_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_DMA_BYPASS_MASK (0x8000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_DMA_BYPASS_SHIFT (27U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_DMA_BYPASS_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_DMA_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_DMA_BYPASS_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_DMA_BYPASS_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_CFG_SHIFT_MODE_MASK (0x10000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_CFG_SHIFT_MODE_SHIFT (28U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_CFG_SHIFT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_CFG_SHIFT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_CFG_SHIFT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INVERT_MODE_MASK (0x20000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INVERT_MODE_SHIFT (29U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INVERT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INVERT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INVERT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_REGION_EN_MASK (0x80000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_REGION_EN_SHIFT (31U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_REGION_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_REGION_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1 - iATU Lower Base Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_HW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_HW_MASK)

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_RW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1 - iATU Upper Base Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1_UPPER_BASE_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1_UPPER_BASE_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1_UPPER_BASE_RW_SHIFT)) & PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_OUTBOUND_1 - iATU Limit Address */
/*! @{ */

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_HW_SHIFT (0U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_HW_WIDTH (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_HW_MASK)

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_RW_SHIFT (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_RW_WIDTH (20U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1 - iATU Lower Target Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1_LWR_TARGET_RW_OUTBOUND_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1_LWR_TARGET_RW_OUTBOUND_SHIFT (0U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1_LWR_TARGET_RW_OUTBOUND_WIDTH (32U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1_LWR_TARGET_RW_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1_LWR_TARGET_RW_OUTBOUND_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1_LWR_TARGET_RW_OUTBOUND_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1 - iATU Upper Target Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1_UPPER_TARGET_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1_UPPER_TARGET_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1_UPPER_TARGET_RW_SHIFT)) & PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1 - iATU Upper Limit Address */
/*! @{ */

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_RW_MASK)

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_INBOUND_1 - iATU Region Control 1 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TYPE_MASK (0x1FU)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TYPE_SHIFT (0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TYPE_WIDTH (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TYPE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TYPE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TC_MASK (0xE0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TC_SHIFT (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TC_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TC_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TC_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TD_MASK (0x100U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TD_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_TD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_ATTR_MASK (0x600U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_ATTR_SHIFT (9U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_ATTR_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_ATTR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_ATTR_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_ATTR_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_INCREASE_REGION_SIZE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_INCREASE_REGION_SIZE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_INCREASE_REGION_SIZE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_INCREASE_REGION_SIZE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_INCREASE_REGION_SIZE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_CTRL_1_FUNC_NUM_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_CTRL_1_FUNC_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_CTRL_1_FUNC_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_1_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_INBOUND_1 - iATU Region Control 2 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_BAR_NUM_MASK (0x700U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_BAR_NUM_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_BAR_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_BAR_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_BAR_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_BAR_NUM_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_TYPE_MATCH_MODE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_TYPE_MATCH_MODE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_TYPE_MATCH_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_TYPE_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_TYPE_MATCH_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_TYPE_MATCH_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_TC_MATCH_EN_MASK (0x4000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_TC_MATCH_EN_SHIFT (14U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_TC_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_TC_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_TC_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_TC_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_TD_MATCH_EN_MASK (0x8000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_TD_MATCH_EN_SHIFT (15U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_TD_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_TD_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_TD_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_TD_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_ATTR_MATCH_EN_MASK (0x10000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_ATTR_MATCH_EN_SHIFT (16U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_ATTR_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_ATTR_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_ATTR_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_ATTR_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUNC_NUM_MATCH_EN_MASK (0x80000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUNC_NUM_MATCH_EN_SHIFT (19U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUNC_NUM_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUNC_NUM_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUNC_NUM_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUNC_NUM_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_SINGLE_ADDR_LOC_TRANS_EN_MASK (0x800000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_SINGLE_ADDR_LOC_TRANS_EN_SHIFT (23U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_SINGLE_ADDR_LOC_TRANS_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_SINGLE_ADDR_LOC_TRANS_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_SINGLE_ADDR_LOC_TRANS_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_SINGLE_ADDR_LOC_TRANS_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_RESPONSE_CODE_MASK (0x3000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_RESPONSE_CODE_SHIFT (24U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_RESPONSE_CODE_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_RESPONSE_CODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_RESPONSE_CODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_RESPONSE_CODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUZZY_TYPE_MATCH_CODE_MASK (0x8000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUZZY_TYPE_MATCH_CODE_SHIFT (27U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUZZY_TYPE_MATCH_CODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUZZY_TYPE_MATCH_CODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUZZY_TYPE_MATCH_CODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUZZY_TYPE_MATCH_CODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_CFG_SHIFT_MODE_MASK (0x10000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_CFG_SHIFT_MODE_SHIFT (28U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_CFG_SHIFT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_CFG_SHIFT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_CFG_SHIFT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_INVERT_MODE_MASK (0x20000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_INVERT_MODE_SHIFT (29U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_INVERT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_INVERT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_INVERT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_MATCH_MODE_MASK (0x40000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_MATCH_MODE_SHIFT (30U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_MATCH_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_MATCH_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_MATCH_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_REGION_EN_MASK (0x80000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_REGION_EN_SHIFT (31U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_REGION_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_REGION_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_1_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_INBOUND_1 - iATU Lower Base Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_HW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_HW_MASK)

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_RW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_INBOUND_1 - iATU Upper Base Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_1_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_1_UPPER_BASE_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_1_UPPER_BASE_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_1_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_1_UPPER_BASE_RW_SHIFT)) & PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_1_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_INBOUND_1 - iATU Limit Address */
/*! @{ */

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_HW_SHIFT (0U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_HW_WIDTH (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_HW_MASK)

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_RW_SHIFT (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_RW_WIDTH (20U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_INBOUND_1 - iATU Lower Target Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_HW_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_HW_MASK)

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_RW_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1 - iATU Upper Target Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1_UPPER_TARGET_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1_UPPER_TARGET_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1_UPPER_TARGET_RW_SHIFT)) & PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1 - iATU Upper Limit Address */
/*! @{ */

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_RW_MASK)

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_OUTBOUND_2 - iATU Region Control 1 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TYPE_MASK (0x1FU)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TYPE_SHIFT (0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TYPE_WIDTH (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TYPE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TYPE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TC_MASK (0xE0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TC_SHIFT (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TC_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TC_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TC_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TD_MASK (0x100U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TD_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_ATTR_MASK (0x600U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_ATTR_SHIFT (9U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_ATTR_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_ATTR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_ATTR_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_ATTR_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_INCREASE_REGION_SIZE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_INCREASE_REGION_SIZE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_INCREASE_REGION_SIZE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_INCREASE_REGION_SIZE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_INCREASE_REGION_SIZE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_CTRL_1_FUNC_NUM_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_CTRL_1_FUNC_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_CTRL_1_FUNC_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_OUTBOUND_2 - iATU Region Control 2 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_MASK (0xFF00U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_WIDTH (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SUBSTITUTE_EN_MASK (0x10000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SUBSTITUTE_EN_SHIFT (16U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SUBSTITUTE_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SUBSTITUTE_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SUBSTITUTE_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_FUNC_BYPASS_MASK (0x80000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_FUNC_BYPASS_SHIFT (19U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_FUNC_BYPASS_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_FUNC_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_FUNC_BYPASS_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_FUNC_BYPASS_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_SNP_MASK (0x100000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_SNP_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_SNP_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_SNP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_SNP_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_SNP_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INHIBIT_PAYLOAD_MASK (0x400000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INHIBIT_PAYLOAD_SHIFT (22U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INHIBIT_PAYLOAD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INHIBIT_PAYLOAD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INHIBIT_PAYLOAD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INHIBIT_PAYLOAD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_HEADER_SUBSTITUTE_EN_MASK (0x800000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_HEADER_SUBSTITUTE_EN_SHIFT (23U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_HEADER_SUBSTITUTE_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_HEADER_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_HEADER_SUBSTITUTE_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_HEADER_SUBSTITUTE_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_DMA_BYPASS_MASK (0x8000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_DMA_BYPASS_SHIFT (27U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_DMA_BYPASS_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_DMA_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_DMA_BYPASS_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_DMA_BYPASS_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_CFG_SHIFT_MODE_MASK (0x10000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_CFG_SHIFT_MODE_SHIFT (28U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_CFG_SHIFT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_CFG_SHIFT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_CFG_SHIFT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INVERT_MODE_MASK (0x20000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INVERT_MODE_SHIFT (29U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INVERT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INVERT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INVERT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_REGION_EN_MASK (0x80000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_REGION_EN_SHIFT (31U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_REGION_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_REGION_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2 - iATU Lower Base Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_HW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_HW_MASK)

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_RW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2 - iATU Upper Base Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2_UPPER_BASE_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2_UPPER_BASE_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2_UPPER_BASE_RW_SHIFT)) & PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_OUTBOUND_2 - iATU Limit Address */
/*! @{ */

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_HW_SHIFT (0U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_HW_WIDTH (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_HW_MASK)

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_RW_SHIFT (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_RW_WIDTH (20U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2 - iATU Lower Target Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2_LWR_TARGET_RW_OUTBOUND_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2_LWR_TARGET_RW_OUTBOUND_SHIFT (0U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2_LWR_TARGET_RW_OUTBOUND_WIDTH (32U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2_LWR_TARGET_RW_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2_LWR_TARGET_RW_OUTBOUND_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2_LWR_TARGET_RW_OUTBOUND_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2 - iATU Upper Target Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2_UPPER_TARGET_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2_UPPER_TARGET_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2_UPPER_TARGET_RW_SHIFT)) & PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2 - iATU Upper Limit Address */
/*! @{ */

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_RW_MASK)

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_INBOUND_2 - iATU Region Control 1 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TYPE_MASK (0x1FU)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TYPE_SHIFT (0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TYPE_WIDTH (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TYPE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TYPE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TC_MASK (0xE0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TC_SHIFT (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TC_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TC_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TC_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TD_MASK (0x100U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TD_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_TD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_ATTR_MASK (0x600U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_ATTR_SHIFT (9U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_ATTR_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_ATTR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_ATTR_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_ATTR_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_INCREASE_REGION_SIZE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_INCREASE_REGION_SIZE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_INCREASE_REGION_SIZE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_INCREASE_REGION_SIZE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_INCREASE_REGION_SIZE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_CTRL_1_FUNC_NUM_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_CTRL_1_FUNC_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_CTRL_1_FUNC_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_2_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_INBOUND_2 - iATU Region Control 2 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_BAR_NUM_MASK (0x700U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_BAR_NUM_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_BAR_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_BAR_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_BAR_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_BAR_NUM_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_TYPE_MATCH_MODE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_TYPE_MATCH_MODE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_TYPE_MATCH_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_TYPE_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_TYPE_MATCH_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_TYPE_MATCH_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_TC_MATCH_EN_MASK (0x4000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_TC_MATCH_EN_SHIFT (14U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_TC_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_TC_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_TC_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_TC_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_TD_MATCH_EN_MASK (0x8000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_TD_MATCH_EN_SHIFT (15U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_TD_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_TD_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_TD_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_TD_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_ATTR_MATCH_EN_MASK (0x10000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_ATTR_MATCH_EN_SHIFT (16U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_ATTR_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_ATTR_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_ATTR_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_ATTR_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUNC_NUM_MATCH_EN_MASK (0x80000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUNC_NUM_MATCH_EN_SHIFT (19U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUNC_NUM_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUNC_NUM_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUNC_NUM_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUNC_NUM_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_SINGLE_ADDR_LOC_TRANS_EN_MASK (0x800000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_SINGLE_ADDR_LOC_TRANS_EN_SHIFT (23U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_SINGLE_ADDR_LOC_TRANS_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_SINGLE_ADDR_LOC_TRANS_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_SINGLE_ADDR_LOC_TRANS_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_SINGLE_ADDR_LOC_TRANS_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_RESPONSE_CODE_MASK (0x3000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_RESPONSE_CODE_SHIFT (24U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_RESPONSE_CODE_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_RESPONSE_CODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_RESPONSE_CODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_RESPONSE_CODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUZZY_TYPE_MATCH_CODE_MASK (0x8000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUZZY_TYPE_MATCH_CODE_SHIFT (27U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUZZY_TYPE_MATCH_CODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUZZY_TYPE_MATCH_CODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUZZY_TYPE_MATCH_CODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUZZY_TYPE_MATCH_CODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_CFG_SHIFT_MODE_MASK (0x10000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_CFG_SHIFT_MODE_SHIFT (28U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_CFG_SHIFT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_CFG_SHIFT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_CFG_SHIFT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_INVERT_MODE_MASK (0x20000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_INVERT_MODE_SHIFT (29U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_INVERT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_INVERT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_INVERT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_MATCH_MODE_MASK (0x40000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_MATCH_MODE_SHIFT (30U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_MATCH_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_MATCH_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_MATCH_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_REGION_EN_MASK (0x80000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_REGION_EN_SHIFT (31U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_REGION_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_REGION_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_2_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_INBOUND_2 - iATU Lower Base Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_HW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_HW_MASK)

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_RW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_INBOUND_2 - iATU Upper Base Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_2_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_2_UPPER_BASE_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_2_UPPER_BASE_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_2_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_2_UPPER_BASE_RW_SHIFT)) & PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_2_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_INBOUND_2 - iATU Limit Address */
/*! @{ */

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_HW_SHIFT (0U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_HW_WIDTH (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_HW_MASK)

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_RW_SHIFT (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_RW_WIDTH (20U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_INBOUND_2 - iATU Lower Target Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_HW_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_HW_MASK)

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_RW_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2 - iATU Upper Target Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2_UPPER_TARGET_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2_UPPER_TARGET_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2_UPPER_TARGET_RW_SHIFT)) & PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2 - iATU Upper Limit Address */
/*! @{ */

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_RW_MASK)

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_OUTBOUND_3 - iATU Region Control 1 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TYPE_MASK (0x1FU)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TYPE_SHIFT (0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TYPE_WIDTH (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TYPE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TYPE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TC_MASK (0xE0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TC_SHIFT (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TC_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TC_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TC_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TD_MASK (0x100U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TD_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_ATTR_MASK (0x600U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_ATTR_SHIFT (9U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_ATTR_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_ATTR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_ATTR_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_ATTR_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_INCREASE_REGION_SIZE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_INCREASE_REGION_SIZE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_INCREASE_REGION_SIZE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_INCREASE_REGION_SIZE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_INCREASE_REGION_SIZE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_CTRL_1_FUNC_NUM_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_CTRL_1_FUNC_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_CTRL_1_FUNC_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_OUTBOUND_3 - iATU Region Control 2 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_MASK (0xFF00U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_WIDTH (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SUBSTITUTE_EN_MASK (0x10000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SUBSTITUTE_EN_SHIFT (16U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SUBSTITUTE_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SUBSTITUTE_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SUBSTITUTE_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_FUNC_BYPASS_MASK (0x80000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_FUNC_BYPASS_SHIFT (19U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_FUNC_BYPASS_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_FUNC_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_FUNC_BYPASS_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_FUNC_BYPASS_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_SNP_MASK (0x100000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_SNP_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_SNP_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_SNP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_SNP_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_SNP_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INHIBIT_PAYLOAD_MASK (0x400000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INHIBIT_PAYLOAD_SHIFT (22U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INHIBIT_PAYLOAD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INHIBIT_PAYLOAD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INHIBIT_PAYLOAD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INHIBIT_PAYLOAD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_HEADER_SUBSTITUTE_EN_MASK (0x800000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_HEADER_SUBSTITUTE_EN_SHIFT (23U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_HEADER_SUBSTITUTE_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_HEADER_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_HEADER_SUBSTITUTE_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_HEADER_SUBSTITUTE_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_DMA_BYPASS_MASK (0x8000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_DMA_BYPASS_SHIFT (27U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_DMA_BYPASS_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_DMA_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_DMA_BYPASS_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_DMA_BYPASS_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_CFG_SHIFT_MODE_MASK (0x10000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_CFG_SHIFT_MODE_SHIFT (28U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_CFG_SHIFT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_CFG_SHIFT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_CFG_SHIFT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INVERT_MODE_MASK (0x20000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INVERT_MODE_SHIFT (29U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INVERT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INVERT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INVERT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_REGION_EN_MASK (0x80000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_REGION_EN_SHIFT (31U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_REGION_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_REGION_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3 - iATU Lower Base Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_HW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_HW_MASK)

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_RW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3 - iATU Upper Base Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3_UPPER_BASE_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3_UPPER_BASE_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3_UPPER_BASE_RW_SHIFT)) & PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_OUTBOUND_3 - iATU Limit Address */
/*! @{ */

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_HW_SHIFT (0U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_HW_WIDTH (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_HW_MASK)

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_RW_SHIFT (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_RW_WIDTH (20U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3 - iATU Lower Target Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3_LWR_TARGET_RW_OUTBOUND_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3_LWR_TARGET_RW_OUTBOUND_SHIFT (0U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3_LWR_TARGET_RW_OUTBOUND_WIDTH (32U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3_LWR_TARGET_RW_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3_LWR_TARGET_RW_OUTBOUND_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3_LWR_TARGET_RW_OUTBOUND_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3 - iATU Upper Target Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3_UPPER_TARGET_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3_UPPER_TARGET_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3_UPPER_TARGET_RW_SHIFT)) & PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3 - iATU Upper Limit Address */
/*! @{ */

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_RW_MASK)

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_INBOUND_3 - iATU Region Control 1 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TYPE_MASK (0x1FU)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TYPE_SHIFT (0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TYPE_WIDTH (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TYPE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TYPE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TC_MASK (0xE0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TC_SHIFT (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TC_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TC_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TC_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TD_MASK (0x100U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TD_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_TD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_ATTR_MASK (0x600U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_ATTR_SHIFT (9U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_ATTR_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_ATTR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_ATTR_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_ATTR_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_INCREASE_REGION_SIZE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_INCREASE_REGION_SIZE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_INCREASE_REGION_SIZE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_INCREASE_REGION_SIZE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_INCREASE_REGION_SIZE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_CTRL_1_FUNC_NUM_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_CTRL_1_FUNC_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_CTRL_1_FUNC_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_INBOUND_3_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_INBOUND_3 - iATU Region Control 2 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_BAR_NUM_MASK (0x700U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_BAR_NUM_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_BAR_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_BAR_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_BAR_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_BAR_NUM_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_TYPE_MATCH_MODE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_TYPE_MATCH_MODE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_TYPE_MATCH_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_TYPE_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_TYPE_MATCH_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_TYPE_MATCH_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_TC_MATCH_EN_MASK (0x4000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_TC_MATCH_EN_SHIFT (14U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_TC_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_TC_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_TC_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_TC_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_TD_MATCH_EN_MASK (0x8000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_TD_MATCH_EN_SHIFT (15U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_TD_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_TD_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_TD_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_TD_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_ATTR_MATCH_EN_MASK (0x10000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_ATTR_MATCH_EN_SHIFT (16U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_ATTR_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_ATTR_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_ATTR_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_ATTR_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUNC_NUM_MATCH_EN_MASK (0x80000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUNC_NUM_MATCH_EN_SHIFT (19U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUNC_NUM_MATCH_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUNC_NUM_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUNC_NUM_MATCH_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUNC_NUM_MATCH_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_SINGLE_ADDR_LOC_TRANS_EN_MASK (0x800000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_SINGLE_ADDR_LOC_TRANS_EN_SHIFT (23U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_SINGLE_ADDR_LOC_TRANS_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_SINGLE_ADDR_LOC_TRANS_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_SINGLE_ADDR_LOC_TRANS_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_SINGLE_ADDR_LOC_TRANS_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_RESPONSE_CODE_MASK (0x3000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_RESPONSE_CODE_SHIFT (24U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_RESPONSE_CODE_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_RESPONSE_CODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_RESPONSE_CODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_RESPONSE_CODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUZZY_TYPE_MATCH_CODE_MASK (0x8000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUZZY_TYPE_MATCH_CODE_SHIFT (27U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUZZY_TYPE_MATCH_CODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUZZY_TYPE_MATCH_CODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUZZY_TYPE_MATCH_CODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUZZY_TYPE_MATCH_CODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_CFG_SHIFT_MODE_MASK (0x10000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_CFG_SHIFT_MODE_SHIFT (28U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_CFG_SHIFT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_CFG_SHIFT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_CFG_SHIFT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_INVERT_MODE_MASK (0x20000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_INVERT_MODE_SHIFT (29U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_INVERT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_INVERT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_INVERT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_MATCH_MODE_MASK (0x40000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_MATCH_MODE_SHIFT (30U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_MATCH_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_MATCH_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_MATCH_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_REGION_EN_MASK (0x80000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_REGION_EN_SHIFT (31U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_REGION_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_REGION_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_INBOUND_3_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_INBOUND_3 - iATU Lower Base Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_HW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_HW_MASK)

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_RW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_INBOUND_3 - iATU Upper Base Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_3_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_3_UPPER_BASE_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_3_UPPER_BASE_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_3_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_3_UPPER_BASE_RW_SHIFT)) & PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_INBOUND_3_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_INBOUND_3 - iATU Limit Address */
/*! @{ */

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_HW_SHIFT (0U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_HW_WIDTH (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_HW_MASK)

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_RW_SHIFT (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_RW_WIDTH (20U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_INBOUND_3 - iATU Lower Target Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_HW_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_HW_MASK)

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_RW_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3 - iATU Upper Target Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3_UPPER_TARGET_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3_UPPER_TARGET_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3_UPPER_TARGET_RW_SHIFT)) & PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3 - iATU Upper Limit Address */
/*! @{ */

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_RW_MASK)

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_OUTBOUND_4 - iATU Region Control 1 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TYPE_MASK (0x1FU)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TYPE_SHIFT (0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TYPE_WIDTH (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TYPE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TYPE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TC_MASK (0xE0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TC_SHIFT (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TC_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TC_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TC_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TD_MASK (0x100U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TD_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_ATTR_MASK (0x600U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_ATTR_SHIFT (9U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_ATTR_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_ATTR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_ATTR_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_ATTR_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_INCREASE_REGION_SIZE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_INCREASE_REGION_SIZE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_INCREASE_REGION_SIZE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_INCREASE_REGION_SIZE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_INCREASE_REGION_SIZE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_CTRL_1_FUNC_NUM_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_CTRL_1_FUNC_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_CTRL_1_FUNC_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_OUTBOUND_4 - iATU Region Control 2 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_MASK (0xFF00U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_WIDTH (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SUBSTITUTE_EN_MASK (0x10000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SUBSTITUTE_EN_SHIFT (16U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SUBSTITUTE_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SUBSTITUTE_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SUBSTITUTE_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_FUNC_BYPASS_MASK (0x80000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_FUNC_BYPASS_SHIFT (19U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_FUNC_BYPASS_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_FUNC_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_FUNC_BYPASS_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_FUNC_BYPASS_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_SNP_MASK (0x100000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_SNP_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_SNP_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_SNP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_SNP_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_SNP_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INHIBIT_PAYLOAD_MASK (0x400000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INHIBIT_PAYLOAD_SHIFT (22U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INHIBIT_PAYLOAD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INHIBIT_PAYLOAD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INHIBIT_PAYLOAD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INHIBIT_PAYLOAD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_HEADER_SUBSTITUTE_EN_MASK (0x800000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_HEADER_SUBSTITUTE_EN_SHIFT (23U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_HEADER_SUBSTITUTE_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_HEADER_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_HEADER_SUBSTITUTE_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_HEADER_SUBSTITUTE_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_DMA_BYPASS_MASK (0x8000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_DMA_BYPASS_SHIFT (27U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_DMA_BYPASS_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_DMA_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_DMA_BYPASS_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_DMA_BYPASS_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_CFG_SHIFT_MODE_MASK (0x10000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_CFG_SHIFT_MODE_SHIFT (28U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_CFG_SHIFT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_CFG_SHIFT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_CFG_SHIFT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INVERT_MODE_MASK (0x20000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INVERT_MODE_SHIFT (29U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INVERT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INVERT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INVERT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_REGION_EN_MASK (0x80000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_REGION_EN_SHIFT (31U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_REGION_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_REGION_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4 - iATU Lower Base Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_HW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_HW_MASK)

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_RW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4 - iATU Upper Base Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4_UPPER_BASE_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4_UPPER_BASE_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4_UPPER_BASE_RW_SHIFT)) & PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_OUTBOUND_4 - iATU Limit Address */
/*! @{ */

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_HW_SHIFT (0U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_HW_WIDTH (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_HW_MASK)

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_RW_SHIFT (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_RW_WIDTH (20U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4 - iATU Lower Target Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4_LWR_TARGET_RW_OUTBOUND_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4_LWR_TARGET_RW_OUTBOUND_SHIFT (0U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4_LWR_TARGET_RW_OUTBOUND_WIDTH (32U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4_LWR_TARGET_RW_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4_LWR_TARGET_RW_OUTBOUND_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4_LWR_TARGET_RW_OUTBOUND_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4 - iATU Upper Target Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4_UPPER_TARGET_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4_UPPER_TARGET_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4_UPPER_TARGET_RW_SHIFT)) & PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4 - iATU Upper Limit Address */
/*! @{ */

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_RW_MASK)

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_OUTBOUND_5 - iATU Region Control 1 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TYPE_MASK (0x1FU)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TYPE_SHIFT (0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TYPE_WIDTH (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TYPE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TYPE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TC_MASK (0xE0U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TC_SHIFT (5U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TC_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TC_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TC_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TD_MASK (0x100U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TD_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_ATTR_MASK (0x600U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_ATTR_SHIFT (9U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_ATTR_WIDTH (2U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_ATTR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_ATTR_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_ATTR_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_INCREASE_REGION_SIZE_MASK (0x2000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_INCREASE_REGION_SIZE_SHIFT (13U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_INCREASE_REGION_SIZE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_INCREASE_REGION_SIZE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_INCREASE_REGION_SIZE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_CTRL_1_FUNC_NUM_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_CTRL_1_FUNC_NUM_WIDTH (3U)
#define PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_CTRL_1_FUNC_NUM_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_OUTBOUND_5 - iATU Region Control 2 */
/*! @{ */

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_MASK (0xFF00U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SHIFT (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_WIDTH (8U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SUBSTITUTE_EN_MASK (0x10000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SUBSTITUTE_EN_SHIFT (16U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SUBSTITUTE_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SUBSTITUTE_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SUBSTITUTE_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_FUNC_BYPASS_MASK (0x80000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_FUNC_BYPASS_SHIFT (19U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_FUNC_BYPASS_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_FUNC_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_FUNC_BYPASS_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_FUNC_BYPASS_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_SNP_MASK (0x100000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_SNP_SHIFT (20U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_SNP_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_SNP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_SNP_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_SNP_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INHIBIT_PAYLOAD_MASK (0x400000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INHIBIT_PAYLOAD_SHIFT (22U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INHIBIT_PAYLOAD_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INHIBIT_PAYLOAD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INHIBIT_PAYLOAD_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INHIBIT_PAYLOAD_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_HEADER_SUBSTITUTE_EN_MASK (0x800000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_HEADER_SUBSTITUTE_EN_SHIFT (23U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_HEADER_SUBSTITUTE_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_HEADER_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_HEADER_SUBSTITUTE_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_HEADER_SUBSTITUTE_EN_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_DMA_BYPASS_MASK (0x8000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_DMA_BYPASS_SHIFT (27U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_DMA_BYPASS_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_DMA_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_DMA_BYPASS_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_DMA_BYPASS_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_CFG_SHIFT_MODE_MASK (0x10000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_CFG_SHIFT_MODE_SHIFT (28U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_CFG_SHIFT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_CFG_SHIFT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_CFG_SHIFT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INVERT_MODE_MASK (0x20000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INVERT_MODE_SHIFT (29U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INVERT_MODE_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INVERT_MODE_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INVERT_MODE_MASK)

#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_REGION_EN_MASK (0x80000000U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_REGION_EN_SHIFT (31U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_REGION_EN_WIDTH (1U)
#define PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_REGION_EN_SHIFT)) & PCIE_RC_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5 - iATU Lower Base Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_HW_SHIFT (0U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_HW_WIDTH (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_HW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_HW_MASK)

#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_RW_SHIFT (12U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_RW_WIDTH (20U)
#define PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_RW_SHIFT)) & PCIE_RC_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5 - iATU Upper Base Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5_UPPER_BASE_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5_UPPER_BASE_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5_UPPER_BASE_RW_SHIFT)) & PCIE_RC_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_OUTBOUND_5 - iATU Limit Address */
/*! @{ */

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_HW_MASK (0xFFFU)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_HW_SHIFT (0U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_HW_WIDTH (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_HW_MASK)

#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_RW_SHIFT (12U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_RW_WIDTH (20U)
#define PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5 - iATU Lower Target Address */
/*! @{ */

#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5_LWR_TARGET_RW_OUTBOUND_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5_LWR_TARGET_RW_OUTBOUND_SHIFT (0U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5_LWR_TARGET_RW_OUTBOUND_WIDTH (32U)
#define PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5_LWR_TARGET_RW_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5_LWR_TARGET_RW_OUTBOUND_SHIFT)) & PCIE_RC_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5_LWR_TARGET_RW_OUTBOUND_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5 - iATU Upper Target Address */
/*! @{ */

#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5_UPPER_TARGET_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5_UPPER_TARGET_RW_WIDTH (32U)
#define PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5_UPPER_TARGET_RW_SHIFT)) & PCIE_RC_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5 - iATU Upper Limit Address */
/*! @{ */

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_RW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_RW_MASK)

#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_HW_SHIFT)) & PCIE_RC_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group PCIE_RC_Register_Masks */

/*!
 * @}
 */ /* end of group PCIE_RC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_PCIE_RC_H_) */
