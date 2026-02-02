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
 * @file S32G399A_SerDes_EP_PCIe_1.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_SerDes_EP_PCIe_1
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
#if !defined(S32G399A_SerDes_EP_PCIe_1_H_)  /* Check if memory map has not been already included */
#define S32G399A_SerDes_EP_PCIe_1_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SerDes_EP_PCIe_1 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SerDes_EP_PCIe_1_Peripheral_Access_Layer SerDes_EP_PCIe_1 Peripheral Access Layer
 * @{
 */

/** SerDes_EP_PCIe_1 - Register Layout Typedef */
typedef struct {
  __I  uint32_t DEVICE_ID_VENDOR_ID_REG;           /**< Device ID and Vendor ID, offset: 0x0 */
  __IO uint32_t STATUS_COMMAND_REG;                /**< Status and Command Register., offset: 0x4 */
  __I  uint32_t CLASS_CODE_REVISION_ID;            /**< Class Code and Revision ID, offset: 0x8 */
  __IO uint32_t BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG; /**< BIST, Header Type, Latency Timer, and Cache Line Size Register., offset: 0xC */
  __IO uint32_t BAR0_REG;                          /**< BAR0, offset: 0x10 */
  __IO uint32_t BAR1_REG;                          /**< BAR1, offset: 0x14 */
  __IO uint32_t BAR2_REG;                          /**< BAR2, offset: 0x18 */
  __IO uint32_t BAR3_REG;                          /**< BAR3, offset: 0x1C */
  __IO uint32_t BAR4_REG;                          /**< BAR4, offset: 0x20 */
  __IO uint32_t BAR5_REG;                          /**< BAR5, offset: 0x24 */
  __I  uint32_t CARDBUS_CIS_PTR_REG;               /**< CardBus CIS Pointer Register., offset: 0x28 */
  __I  uint32_t SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG; /**< Subsystem ID and Subsystem Vendor ID Register., offset: 0x2C */
  __IO uint32_t EXP_ROM_BASE_ADDR_REG;             /**< Expansion ROM BAR Register., offset: 0x30 */
  __I  uint32_t PCI_CAP_PTR_REG;                   /**< Capabilities Pointer Register., offset: 0x34 */
  uint8_t RESERVED_0[4];
  __IO uint32_t MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG; /**< Max_Lat, Min_Gnt, Interrupt Pin, and Interrupt Line Register., offset: 0x3C */
  __I  uint32_t CAP_ID_NXT_PTR_REG;                /**< Power Management Capabilities Register., offset: 0x40 */
  __IO uint32_t CON_STATUS_REG;                    /**< Power Management Control and Status Register., offset: 0x44 */
  uint8_t RESERVED_1[8];
  __IO uint32_t PCI_MSI_CAP_ID_NEXT_CTRL_REG;      /**< MSI Capability Header and Message Control Register., offset: 0x50 */
  __IO uint32_t MSI_CAP_OFF_04H_REG;               /**< Message Address Register for MSI (Offset 04h)., offset: 0x54 */
  __IO uint32_t MSI_CAP_OFF_08H_REG;               /**< Message Address Register for MSI (Offset 08h)., offset: 0x58 */
  __IO uint32_t MSI_CAP_OFF_0CH_REG;               /**< Message Address Register for MSI (Offset 0Ch)., offset: 0x5C */
  __IO uint32_t MSI_CAP_OFF_10H_REG;               /**< Message Address Register for MSI (Offset 10h)., offset: 0x60 */
  __I  uint32_t MSI_CAP_OFF_14H_REG;               /**< Message Address Register for MSI (Offset 14h)., offset: 0x64 */
  uint8_t RESERVED_2[8];
  __I  uint32_t PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG; /**< PCI Express Capabilities, ID, Next Pointer Register., offset: 0x70 */
  __I  uint32_t DEVICE_CAPABILITIES_REG;           /**< Device Capabilities Register., offset: 0x74 */
  __IO uint32_t DEVICE_CONTROL_DEVICE_STATUS;      /**< Device Control and Device Status Register., offset: 0x78 */
  __I  uint32_t LINK_CAPABILITIES_REG;             /**< Link Capabilities Register., offset: 0x7C */
  __IO uint32_t LINK_CONTROL_LINK_STATUS_REG;      /**< Link Control and Link Status Register., offset: 0x80 */
  uint8_t RESERVED_3[16];
  __I  uint32_t DEVICE_CAPABILITIES2_REG;          /**< Device Capabilities 2 Register., offset: 0x94 */
  __IO uint32_t DEVICE_CONTROL2_DEVICE_STATUS2_REG; /**< Device Control 2 and Status 2 Register., offset: 0x98 */
  __I  uint32_t LINK_CAPABILITIES2_REG;            /**< Link Capabilities 2 Register., offset: 0x9C */
  __IO uint32_t LINK_CONTROL2_LINK_STATUS2_REG;    /**< Link Control 2 and Status 2 Register., offset: 0xA0 */
  uint8_t RESERVED_4[12];
  __IO uint32_t PCI_MSIX_CAP_ID_NEXT_CTRL_REG;     /**< MSI-X Capability ID, Next Pointer, Control Register., offset: 0xB0 */
  __I  uint32_t MSIX_TABLE_OFFSET_REG;             /**< MSI-X Table Offset and BIR Register., offset: 0xB4 */
  __I  uint32_t MSIX_PBA_OFFSET_REG;               /**< MSI-X PBA Offset and BIR Register., offset: 0xB8 */
  uint8_t RESERVED_5[68];
  __I  uint32_t AER_EXT_CAP_HDR_OFF;               /**< Advanced Error Reporting Extended Capability Header., offset: 0x100 */
  __IO uint32_t UNCORR_ERR_STATUS_OFF;             /**< Uncorrectable Error Status Register., offset: 0x104 */
  __IO uint32_t UNCORR_ERR_MASK_OFF;               /**< Uncorrectable Error Mask Register., offset: 0x108 */
  __IO uint32_t UNCORR_ERR_SEV_OFF;                /**< Uncorrectable Error Severity Register., offset: 0x10C */
  __IO uint32_t CORR_ERR_STATUS_OFF;               /**< Correctable Error Status Register., offset: 0x110 */
  __IO uint32_t CORR_ERR_MASK_OFF;                 /**< Correctable Error Mask Register., offset: 0x114 */
  __IO uint32_t ADV_ERR_CAP_CTRL_OFF;              /**< Advanced Error Capabilities and Control Register., offset: 0x118 */
  __I  uint32_t HDR_LOG_0_OFF;                     /**< Header Log Register 0., offset: 0x11C */
  __I  uint32_t HDR_LOG_1_OFF;                     /**< Header Log Register 1., offset: 0x120 */
  __I  uint32_t HDR_LOG_2_OFF;                     /**< Header Log Register 2., offset: 0x124 */
  __I  uint32_t HDR_LOG_3_OFF;                     /**< Header Log Register 3., offset: 0x128 */
  uint8_t RESERVED_6[12];
  __I  uint32_t TLP_PREFIX_LOG_1_OFF;              /**< TLP Prefix Log Register 1., offset: 0x138 */
  __I  uint32_t TLP_PREFIX_LOG_2_OFF;              /**< TLP Prefix Log Register 2., offset: 0x13C */
  __I  uint32_t TLP_PREFIX_LOG_3_OFF;              /**< TLP Prefix Log Register 3., offset: 0x140 */
  __I  uint32_t TLP_PREFIX_LOG_4_OFF;              /**< TLP Prefix Log Register 4., offset: 0x144 */
  __I  uint32_t SPCIE_CAP_HEADER_REG;              /**< SPCIE Capability Header., offset: 0x148 */
  __I  uint32_t LINK_CONTROL3_REG;                 /**< Link Control 3 Register., offset: 0x14C */
  __IO uint32_t LANE_ERR_STATUS_REG;               /**< Lane Error Status Register., offset: 0x150 */
  __I  uint32_t SPCIE_CAP_OFF_0CH_REG;             /**< Lane Equalization Control Register for lanes 1 and 0., offset: 0x154 */
  __I  uint32_t RAS_DES_CAP_HEADER_REG;            /**< Vendor-Specific Extended Capability Header., offset: 0x158 */
  __I  uint32_t VENDOR_SPECIFIC_HEADER_REG;        /**< Vendor-Specific Header., offset: 0x15C */
  __IO uint32_t EVENT_COUNTER_CONTROL_REG;         /**< Event Counter Control., offset: 0x160 */
  __I  uint32_t EVENT_COUNTER_DATA_REG;            /**< Event Counter Data., offset: 0x164 */
  __IO uint32_t TIME_BASED_ANALYSIS_CONTROL_REG;   /**< Time-based Analysis Control., offset: 0x168 */
  __I  uint32_t TIME_BASED_ANALYSIS_DATA_REG;      /**< Time-Based Analysis Data, offset: 0x16C */
  __I  uint32_t TIME_BASED_ANALYSIS_DATA_63_32_REG; /**< Upper 32 bits of Time-based Analysis Data., offset: 0x170 */
  uint8_t RESERVED_7[20];
  __IO uint32_t EINJ_ENABLE_REG;                   /**< Error Injection Enable., offset: 0x188 */
  __IO uint32_t EINJ0_CRC_REG;                     /**< Error Injection Control 0 (CRC Error)., offset: 0x18C */
  __IO uint32_t EINJ1_SEQNUM_REG;                  /**< Error Injection Control 1 (Sequence Number Error).<br>, offset: 0x190 */
  __IO uint32_t EINJ2_DLLP_REG;                    /**< Error Injection Control 2 (DLLP Error)., offset: 0x194 */
  __IO uint32_t EINJ3_SYMBOL_REG;                  /**< Error Injection Control 3 (Symbol Error)., offset: 0x198 */
  __IO uint32_t EINJ4_FC_REG;                      /**< Error Injection Control 4 (FC Credit Error)., offset: 0x19C */
  __IO uint32_t EINJ5_SP_TLP_REG;                  /**< Error Injection Control 5 (Specific TLP Error)., offset: 0x1A0 */
  __IO uint32_t EINJ6_COMPARE_POINT_H0_REG;        /**< Error Injection Control 6 (Compare Point Header DWORD #0)., offset: 0x1A4 */
  __IO uint32_t EINJ6_COMPARE_POINT_H1_REG;        /**< Error Injection Control 6 (Compare Point Header DWORD #1)., offset: 0x1A8 */
  __IO uint32_t EINJ6_COMPARE_POINT_H2_REG;        /**< Error Injection Control 6 (Compare Point Header DWORD #2)., offset: 0x1AC */
  __IO uint32_t EINJ6_COMPARE_POINT_H3_REG;        /**< Error Injection Control 6 (Compare Point Header DWORD #3)., offset: 0x1B0 */
  __IO uint32_t EINJ6_COMPARE_VALUE_H0_REG;        /**< Error Injection Control 6 (Compare Value Header DWORD #0)., offset: 0x1B4 */
  __IO uint32_t EINJ6_COMPARE_VALUE_H1_REG;        /**< Error Injection Control 6 (Compare Value Header DWORD #1)., offset: 0x1B8 */
  __IO uint32_t EINJ6_COMPARE_VALUE_H2_REG;        /**< Error Injection Control 6 (Compare Value Header DWORD #2)., offset: 0x1BC */
  __IO uint32_t EINJ6_COMPARE_VALUE_H3_REG;        /**< Error Injection Control 6 (Compare Value Header DWORD #3)., offset: 0x1C0 */
  __IO uint32_t EINJ6_CHANGE_POINT_H0_REG;         /**< Error Injection Control 6 (Change Point Header DWORD #0)., offset: 0x1C4 */
  __IO uint32_t EINJ6_CHANGE_POINT_H1_REG;         /**< Error Injection Control 6 (Change Point Header DWORD #1)., offset: 0x1C8 */
  __IO uint32_t EINJ6_CHANGE_POINT_H2_REG;         /**< Error Injection Control 6 (Change Point Header DWORD #2)., offset: 0x1CC */
  __IO uint32_t EINJ6_CHANGE_POINT_H3_REG;         /**< Error Injection Control 6 (Change Point Header DWORD #3)., offset: 0x1D0 */
  __IO uint32_t EINJ6_CHANGE_VALUE_H0_REG;         /**< Error Injection Control 6 (Change Value Header DWORD #0)., offset: 0x1D4 */
  __IO uint32_t EINJ6_CHANGE_VALUE_H1_REG;         /**< Error Injection Control 6 (Change Value Header DWORD #1)., offset: 0x1D8 */
  __IO uint32_t EINJ6_CHANGE_VALUE_H2_REG;         /**< Error Injection Control 6 (Change Value Header DWORD #2)., offset: 0x1DC */
  __IO uint32_t EINJ6_CHANGE_VALUE_H3_REG;         /**< Error Injection Control 6 (Change Value Header DWORD #3)., offset: 0x1E0 */
  __IO uint32_t EINJ6_TLP_REG;                     /**< Error Injection Control 6 (Packet Error)., offset: 0x1E4 */
  uint8_t RESERVED_8[16];
  __IO uint32_t SD_CONTROL1_REG;                   /**< Silicon Debug Control 1., offset: 0x1F8 */
  __IO uint32_t SD_CONTROL2_REG;                   /**< Silicon Debug Control 2., offset: 0x1FC */
  uint8_t RESERVED_9[8];
  __IO uint32_t SD_STATUS_L1LANE_REG;              /**< Silicon Debug Status(Layer1 Per-lane)., offset: 0x208 */
  __IO uint32_t SD_STATUS_L1LTSSM_REG;             /**< Silicon Debug Status(Layer1 LTSSM)., offset: 0x20C */
  __IO uint32_t SD_STATUS_PM_REG;                  /**< Silicon Debug Status(PM)., offset: 0x210 */
  __I  uint32_t SD_STATUS_L2_REG;                  /**< Silicon Debug Status(Layer2)., offset: 0x214 */
  __IO uint32_t SD_STATUS_L3FC_REG;                /**< Silicon Debug Status(Layer3 FC)., offset: 0x218 */
  __IO uint32_t SD_STATUS_L3_REG;                  /**< Silicon Debug Status(Layer3)., offset: 0x21C */
  uint8_t RESERVED_10[8];
  __IO uint32_t SD_EQ_CONTROL1_REG;                /**< Silicon Debug EQ Control 1., offset: 0x228 */
  __IO uint32_t SD_EQ_CONTROL2_REG;                /**< Silicon Debug EQ Control 2., offset: 0x22C */
  __IO uint32_t SD_EQ_CONTROL3_REG;                /**< Silicon Debug EQ Control 3., offset: 0x230 */
  uint8_t RESERVED_11[4];
  __I  uint32_t SD_EQ_STATUS1_REG;                 /**< Silicon Debug EQ Status 1., offset: 0x238 */
  __I  uint32_t SD_EQ_STATUS2_REG;                 /**< Silicon Debug EQ Status 2., offset: 0x23C */
  __I  uint32_t SD_EQ_STATUS3_REG;                 /**< Silicon Debug EQ Status 3., offset: 0x240 */
  uint8_t RESERVED_12[20];
  __I  uint32_t RASDP_EXT_CAP_HDR_OFF;             /**< PCIe Extended capability ID, Capability version and Next capability offset., offset: 0x258 */
  __I  uint32_t RASDP_VENDOR_SPECIFIC_HDR_OFF;     /**< Vendor Specific Header., offset: 0x25C */
  __IO uint32_t RASDP_ERROR_PROT_CTRL_OFF;         /**< ECC Error Correction and Control Register., offset: 0x260 */
  __IO uint32_t RASDP_CORR_COUNTER_CTRL_OFF;       /**< Corrected Error (1-bit ECC) Counter Selection and Control, offset: 0x264 */
  __I  uint32_t RASDP_CORR_COUNT_REPORT_OFF;       /**< Corrected Error (1-bit ECC) Counter Data Register., offset: 0x268 */
  __IO uint32_t RASDP_UNCORR_COUNTER_CTRL_OFF;     /**< Uncorrected Error (2-bit ECC and parity) Counter Selection and Control Register., offset: 0x26C */
  __I  uint32_t RASDP_UNCORR_COUNT_REPORT_OFF;     /**< Uncorrected Error (2-bit ECC and parity) Counter Data Register., offset: 0x270 */
  __IO uint32_t RASDP_ERROR_INJ_CTRL_OFF;          /**< Error Injection Control Register., offset: 0x274 */
  __I  uint32_t RASDP_CORR_ERROR_LOCATION_OFF;     /**< Corrected Errors Location, offset: 0x278 */
  __I  uint32_t RASDP_UNCORR_ERROR_LOCATION_OFF;   /**< Uncorrected Errors Location, offset: 0x27C */
  __IO uint32_t RASDP_ERROR_MODE_EN_OFF;           /**< RASDP error mode enable. The controller enters RASDP error mode (if ERROR_MODE_EN =1) upon detection of the first uncorrectable error., offset: 0x280 */
  __IO uint32_t RASDP_ERROR_MODE_CLEAR_OFF;        /**< RASDP Error Mode Clear Register., offset: 0x284 */
  __I  uint32_t RASDP_RAM_ADDR_CORR_ERROR_OFF;     /**< RAM Address where a corrected error (1-bit ECC) is detected., offset: 0x288 */
  __I  uint32_t RASDP_RAM_ADDR_UNCORR_ERROR_OFF;   /**< RAM Address where an uncorrected error (2-bit ECC) is detected., offset: 0x28C */
  __I  uint32_t VSECDMA_EXT_CAP_HDR_OFF;           /**< PCIe Extended Capability ID, Capability Version, and Next Capability Offset Register., offset: 0x290 */
  __I  uint32_t VSECDMA_VENDOR_SPECIFIC_HDR_OFF;   /**< Vendor Specific Header Register., offset: 0x294 */
  __I  uint32_t VSECDMA_DEVICE_INFORMATION_OFF;    /**< DMA and related AXI Bridge Implementation Information., offset: 0x298 */
  __I  uint32_t VSECDMA_NUM_CHAN_OFF;              /**< Number of Implemented Channels Register., offset: 0x29C */
  __I  uint32_t VSECDMA_UNROLL_ADDR_OFFSET_LOW_OFF; /**< DMA Register Map Start Address Offset Low Register., offset: 0x2A0 */
  __I  uint32_t VSECDMA_UNROLL_ADDR_OFFSET_HIGH_OFF; /**< DMA Register Map Start Address Offset High Register., offset: 0x2A4 */
  uint8_t RESERVED_13[1112];
  __IO uint32_t ACK_LATENCY_TIMER_OFF;             /**< Ack Latency Timer and Replay Timer Register., offset: 0x700 */
  __IO uint32_t VENDOR_SPEC_DLLP_OFF;              /**< Vendor Specific DLLP Register., offset: 0x704 */
  __IO uint32_t PORT_FORCE_OFF;                    /**< Port Force Link, offset: 0x708 */
  __IO uint32_t ACK_F_ASPM_CTRL_OFF;               /**< Ack Frequency and L0-L1 ASPM Control Register., offset: 0x70C */
  __IO uint32_t PORT_LINK_CTRL_OFF;                /**< Port Link Control Register., offset: 0x710 */
  __IO uint32_t LANE_SKEW_OFF;                     /**< Lane Skew Register., offset: 0x714 */
  __IO uint32_t TIMER_CTRL_MAX_FUNC_NUM_OFF;       /**< Timer Control and Max Function Number Register., offset: 0x718 */
  __IO uint32_t SYMBOL_TIMER_FILTER_1_OFF;         /**< Symbol Timer Register and Filter Mask 1 Register., offset: 0x71C */
  __IO uint32_t FILTER_MASK_2_OFF;                 /**< Filter Mask 2 Register., offset: 0x720 */
  __IO uint32_t AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF; /**< AMBA Multiple Outbound Decomposed NP SubRequests Control Register., offset: 0x724 */
  __I  uint32_t PL_DEBUG0_OFF;                     /**< Debug Register 0., offset: 0x728 */
  __I  uint32_t PL_DEBUG1_OFF;                     /**< Debug Register 1., offset: 0x72C */
  __I  uint32_t TX_P_FC_CREDIT_STATUS_OFF;         /**< Transmit Posted FC Credit Status., offset: 0x730 */
  __I  uint32_t TX_NP_FC_CREDIT_STATUS_OFF;        /**< Transmit Non-Posted FC Credit Status., offset: 0x734 */
  __I  uint32_t TX_CPL_FC_CREDIT_STATUS_OFF;       /**< Transmit Completion FC Credit Status, offset: 0x738 */
  __IO uint32_t QUEUE_STATUS_OFF;                  /**< Queue Status., offset: 0x73C */
  __I  uint32_t VC_TX_ARBI_1_OFF;                  /**< VC Transmit Arbitration Register 1., offset: 0x740 */
  __I  uint32_t VC_TX_ARBI_2_OFF;                  /**< VC Transmit Arbitration Register 2., offset: 0x744 */
  __IO uint32_t VC0_P_RX_Q_CTRL_OFF;               /**< Segmented-Buffer VC0 Posted Receive Queue Control., offset: 0x748 */
  __IO uint32_t VC0_NP_RX_Q_CTRL_OFF;              /**< Segmented-Buffer VC0 Non-Posted Receive Queue Control., offset: 0x74C */
  __IO uint32_t VC0_CPL_RX_Q_CTRL_OFF;             /**< Segmented-Buffer VC0 Completion Receive Queue Control., offset: 0x750 */
  uint8_t RESERVED_14[184];
  __IO uint32_t GEN2_CTRL_OFF;                     /**< Link Width and Speed Change Control Register., offset: 0x80C */
  __I  uint32_t PHY_STATUS_OFF;                    /**< PHY Status Register., offset: 0x810 */
  __IO uint32_t PHY_CONTROL_OFF;                   /**< PHY Control Register., offset: 0x814 */
  uint8_t RESERVED_15[4];
  __IO uint32_t TRGT_MAP_CTRL_OFF;                 /**< Programmable Target Map Control Register., offset: 0x81C */
  uint8_t RESERVED_16[108];
  __IO uint32_t CLOCK_GATING_CTRL_OFF;             /**< Clock Gating Control Register., offset: 0x88C */
  __IO uint32_t GEN3_RELATED_OFF;                  /**< Gen3 Control Register., offset: 0x890 */
  uint8_t RESERVED_17[20];
  __IO uint32_t GEN3_EQ_CONTROL_OFF;               /**< Gen3 EQ Control Register., offset: 0x8A8 */
  __IO uint32_t GEN3_EQ_FB_MODE_DIR_CHANGE_OFF;    /**< Gen3 EQ Direction Change Feedback Mode Control Register., offset: 0x8AC */
  uint8_t RESERVED_18[4];
  __IO uint32_t ORDER_RULE_CTRL_OFF;               /**< Order Rule Control Register., offset: 0x8B4 */
  __IO uint32_t PIPE_LOOPBACK_CONTROL_OFF;         /**< PIPE Loopback Control Register., offset: 0x8B8 */
  __IO uint32_t MISC_CONTROL_1_OFF;                /**< DBI Read-Only Write Enable Register., offset: 0x8BC */
  __IO uint32_t MULTI_LANE_CONTROL_OFF;            /**< UpConfigure Multi-lane Control Register., offset: 0x8C0 */
  __IO uint32_t PHY_INTEROP_CTRL_OFF;              /**< PHY Interoperability Control, offset: 0x8C4 */
  __IO uint32_t TRGT_CPL_LUT_DELETE_ENTRY_OFF;     /**< TRGT_CPL_LUT Delete Entry Control register., offset: 0x8C8 */
  __IO uint32_t LINK_FLUSH_CONTROL_OFF;            /**< Link Reset Request Flush Control Register., offset: 0x8CC */
  __IO uint32_t AMBA_ERROR_RESPONSE_DEFAULT_OFF;   /**< AXI Bridge Slave Error Response Register., offset: 0x8D0 */
  __IO uint32_t AMBA_LINK_TIMEOUT_OFF;             /**< Link Down AXI Bridge Slave Timeout Register., offset: 0x8D4 */
  __IO uint32_t AMBA_ORDERING_CTRL_OFF;            /**< AXI Bridge Ordering Control., offset: 0x8D8 */
  uint8_t RESERVED_19[4];
  __IO uint32_t COHERENCY_CONTROL_1_OFF;           /**< ACE Cache Coherency Control Register 1., offset: 0x8E0 */
  __IO uint32_t COHERENCY_CONTROL_2_OFF;           /**< ACE Cache Coherency Control Register 2., offset: 0x8E4 */
  __IO uint32_t COHERENCY_CONTROL_3_OFF;           /**< ACE Cache Coherency Control Register 3., offset: 0x8E8 */
  uint8_t RESERVED_20[4];
  __IO uint32_t AXI_MSTR_MSG_ADDR_LOW_OFF;         /**< Lower 32-bits of the Programmable AXI Address., offset: 0x8F0 */
  __IO uint32_t AXI_MSTR_MSG_ADDR_HIGH_OFF;        /**< Upper 32-bits of the Programmable AXI Address., offset: 0x8F4 */
  __I  uint32_t PCIE_VERSION_NUMBER_OFF;           /**< PCIe Controller IIP Release Version Number., offset: 0x8F8 */
  __I  uint32_t PCIE_VERSION_TYPE_OFF;             /**< PCIe Controller IIP Release Version Type., offset: 0x8FC */
  uint8_t RESERVED_21[48];
  __IO uint32_t INTERFACE_TIMER_CONTROL_OFF;       /**< Interface Timer Control Register., offset: 0x930 */
  __IO uint32_t INTERFACE_TIMER_TARGET_OFF;        /**< Interface Timer Target Register., offset: 0x934 */
  __IO uint32_t INTERFACE_TIMER_STATUS_OFF;        /**< Interface Timer Status Register., offset: 0x938 */
  uint8_t RESERVED_22[4];
  __IO uint32_t MSIX_ADDRESS_MATCH_LOW_OFF;        /**< MSI-X Address Match Low Register., offset: 0x940 */
  __IO uint32_t MSIX_ADDRESS_MATCH_HIGH_OFF;       /**< MSIX Address Match High Register., offset: 0x944 */
  __O  uint32_t MSIX_DOORBELL_OFF;                 /**< MSI-X Doorbell Register., offset: 0x948 */
  __IO uint32_t MSIX_RAM_CTRL_OFF;                 /**< MSI-X RAM power mode and debug control register., offset: 0x94C */
  uint8_t RESERVED_23[16];
  __IO uint32_t SAFETY_MASK_OFF;                   /**< Functional Safety Interrupt Events Mask Register., offset: 0x960 */
  __IO uint32_t SAFETY_STATUS_OFF;                 /**< Status for functional safety interrupt events., offset: 0x964 */
  uint8_t RESERVED_24[424];
  __I  uint32_t PL_APP_BUS_DEV_NUM_STATUS_OFF;     /**< Application driven bus and device number register., offset: 0xB10 */
  uint8_t RESERVED_25[8];
  __IO uint32_t PCIPM_TRAFFIC_CTRL_OFF;            /**< TLP Traffic during Non-D0 State Control Register., offset: 0xB1C */
  __IO uint32_t PL_CHK_REG_CONTROL_STATUS_OFF;     /**< CDM Register Checking Control and Status Register., offset: 0xB20 */
  __IO uint32_t PL_CHK_REG_START_END_OFF;          /**< CDM Register Checking First and Last address to check., offset: 0xB24 */
  __I  uint32_t PL_CHK_REG_ERR_ADDR_OFF;           /**< CDM Register Checking Error Address., offset: 0xB28 */
  __I  uint32_t PL_CHK_REG_ERR_PF_VF_OFF;          /**< CDM Register Checking error PF and VF Numbers., offset: 0xB2C */
  uint8_t RESERVED_26[16];
  __IO uint32_t AUX_CLK_FREQ_OFF;                  /**< Auxiliary Clock Frequency Control Register., offset: 0xB40 */
  uint8_t RESERVED_27[4];
  __IO uint32_t POWERDOWN_CTRL_STATUS_OFF;         /**< Powerdown Control and Status Register., offset: 0xB48 */
  uint8_t RESERVED_28[68];
  __IO uint32_t PIPE_RELATED_OFF;                  /**< PIPE Related Register., offset: 0xB90 */
  uint8_t RESERVED_29[128124];
  __O  uint32_t BAR0_MASK_REG;                     /**< BAR0 Mask, offset: 0x20010 */
  __O  uint32_t BAR1_MASK_REG;                     /**< BAR1 Mask, offset: 0x20014 */
  __O  uint32_t BAR2_MASK_REG;                     /**< BAR2 Mask, offset: 0x20018 */
  __O  uint32_t BAR3_MASK_REG;                     /**< BAR3 Mask, offset: 0x2001C */
  __O  uint32_t BAR4_MASK_REG;                     /**< BAR4 Mask, offset: 0x20020 */
  __O  uint32_t BAR5_MASK_REG;                     /**< BAR5 Mask, offset: 0x20024 */
  uint8_t RESERVED_30[8];
  __O  uint32_t EXP_ROM_BAR_MASK_REG;              /**< Expansion ROM BAR Mask Register., offset: 0x20030 */
  uint8_t RESERVED_31[262092];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_OUTBOUND_0; /**< iATU Region Control 1 Register., offset: 0x60000 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_OUTBOUND_0; /**< iATU Region Control 2 Register., offset: 0x60004 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0; /**< iATU Lower Base Address Register., offset: 0x60008 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0; /**< iATU Upper Base Address Register., offset: 0x6000C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_OUTBOUND_0;    /**< iATU Limit Address Register., offset: 0x60010 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0; /**< iATU Lower Target Address Register., offset: 0x60014 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0; /**< iATU Upper Target Address Register., offset: 0x60018 */
  uint8_t RESERVED_32[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0; /**< iATU Upper Limit Address Register., offset: 0x60020 */
  uint8_t RESERVED_33[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_INBOUND_0;  /**< iATU Region Control 1 Register., offset: 0x60100 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_INBOUND_0;  /**< iATU Region Control 2 Register., offset: 0x60104 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_INBOUND_0;  /**< iATU Lower Base Address Register., offset: 0x60108 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_INBOUND_0; /**< iATU Upper Base Address Register., offset: 0x6010C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_INBOUND_0;     /**< iATU Limit Address Register., offset: 0x60110 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_INBOUND_0; /**< iATU Lower Target Address Register., offset: 0x60114 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0; /**< iATU Upper Target Address Register., offset: 0x60118 */
  uint8_t RESERVED_34[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0; /**< iATU Upper Limit Address Register., offset: 0x60120 */
  uint8_t RESERVED_35[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_OUTBOUND_1; /**< iATU Region Control 1 Register., offset: 0x60200 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_OUTBOUND_1; /**< iATU Region Control 2 Register., offset: 0x60204 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1; /**< iATU Lower Base Address Register., offset: 0x60208 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1; /**< iATU Upper Base Address Register., offset: 0x6020C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_OUTBOUND_1;    /**< iATU Limit Address Register., offset: 0x60210 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1; /**< iATU Lower Target Address Register., offset: 0x60214 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1; /**< iATU Upper Target Address Register., offset: 0x60218 */
  uint8_t RESERVED_36[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1; /**< iATU Upper Limit Address Register., offset: 0x60220 */
  uint8_t RESERVED_37[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_INBOUND_1;  /**< iATU Region Control 1 Register., offset: 0x60300 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_INBOUND_1;  /**< iATU Region Control 2 Register., offset: 0x60304 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_INBOUND_1;  /**< iATU Lower Base Address Register., offset: 0x60308 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_INBOUND_1; /**< iATU Upper Base Address Register., offset: 0x6030C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_INBOUND_1;     /**< iATU Limit Address Register., offset: 0x60310 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_INBOUND_1; /**< iATU Lower Target Address Register., offset: 0x60314 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1; /**< iATU Upper Target Address Register., offset: 0x60318 */
  uint8_t RESERVED_38[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1; /**< iATU Upper Limit Address Register., offset: 0x60320 */
  uint8_t RESERVED_39[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_OUTBOUND_2; /**< iATU Region Control 1 Register., offset: 0x60400 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_OUTBOUND_2; /**< iATU Region Control 2 Register., offset: 0x60404 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2; /**< iATU Lower Base Address Register., offset: 0x60408 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2; /**< iATU Upper Base Address Register., offset: 0x6040C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_OUTBOUND_2;    /**< iATU Limit Address Register., offset: 0x60410 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2; /**< iATU Lower Target Address Register., offset: 0x60414 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2; /**< iATU Upper Target Address Register., offset: 0x60418 */
  uint8_t RESERVED_40[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2; /**< iATU Upper Limit Address Register., offset: 0x60420 */
  uint8_t RESERVED_41[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_INBOUND_2;  /**< iATU Region Control 1 Register., offset: 0x60500 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_INBOUND_2;  /**< iATU Region Control 2 Register., offset: 0x60504 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_INBOUND_2;  /**< iATU Lower Base Address Register., offset: 0x60508 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_INBOUND_2; /**< iATU Upper Base Address Register., offset: 0x6050C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_INBOUND_2;     /**< iATU Limit Address Register., offset: 0x60510 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_INBOUND_2; /**< iATU Lower Target Address Register., offset: 0x60514 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2; /**< iATU Upper Target Address Register., offset: 0x60518 */
  uint8_t RESERVED_42[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2; /**< iATU Upper Limit Address Register., offset: 0x60520 */
  uint8_t RESERVED_43[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_OUTBOUND_3; /**< iATU Region Control 1 Register., offset: 0x60600 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_OUTBOUND_3; /**< iATU Region Control 2 Register., offset: 0x60604 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3; /**< iATU Lower Base Address Register., offset: 0x60608 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3; /**< iATU Upper Base Address Register., offset: 0x6060C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_OUTBOUND_3;    /**< iATU Limit Address Register., offset: 0x60610 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3; /**< iATU Lower Target Address Register., offset: 0x60614 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3; /**< iATU Upper Target Address Register., offset: 0x60618 */
  uint8_t RESERVED_44[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3; /**< iATU Upper Limit Address Register., offset: 0x60620 */
  uint8_t RESERVED_45[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_INBOUND_3;  /**< iATU Region Control 1 Register., offset: 0x60700 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_INBOUND_3;  /**< iATU Region Control 2 Register., offset: 0x60704 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_INBOUND_3;  /**< iATU Lower Base Address Register., offset: 0x60708 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_INBOUND_3; /**< iATU Upper Base Address Register., offset: 0x6070C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_INBOUND_3;     /**< iATU Limit Address Register., offset: 0x60710 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_INBOUND_3; /**< iATU Lower Target Address Register., offset: 0x60714 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3; /**< iATU Upper Target Address Register., offset: 0x60718 */
  uint8_t RESERVED_46[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3; /**< iATU Upper Limit Address Register., offset: 0x60720 */
  uint8_t RESERVED_47[220];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_OUTBOUND_4; /**< iATU Region Control 1 Register., offset: 0x60800 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_OUTBOUND_4; /**< iATU Region Control 2 Register., offset: 0x60804 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4; /**< iATU Lower Base Address Register., offset: 0x60808 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4; /**< iATU Upper Base Address Register., offset: 0x6080C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_OUTBOUND_4;    /**< iATU Limit Address Register., offset: 0x60810 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4; /**< iATU Lower Target Address Register., offset: 0x60814 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4; /**< iATU Upper Target Address Register., offset: 0x60818 */
  uint8_t RESERVED_48[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4; /**< iATU Upper Limit Address Register., offset: 0x60820 */
  uint8_t RESERVED_49[476];
  __IO uint32_t IATU_REGION_CTRL_1_OFF_OUTBOUND_5; /**< iATU Region Control 1 Register., offset: 0x60A00 */
  __IO uint32_t IATU_REGION_CTRL_2_OFF_OUTBOUND_5; /**< iATU Region Control 2 Register., offset: 0x60A04 */
  __IO uint32_t IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5; /**< iATU Lower Base Address Register., offset: 0x60A08 */
  __IO uint32_t IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5; /**< iATU Upper Base Address Register., offset: 0x60A0C */
  __IO uint32_t IATU_LIMIT_ADDR_OFF_OUTBOUND_5;    /**< iATU Limit Address Register., offset: 0x60A10 */
  __IO uint32_t IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5; /**< iATU Lower Target Address Register., offset: 0x60A14 */
  __IO uint32_t IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5; /**< iATU Upper Target Address Register., offset: 0x60A18 */
  uint8_t RESERVED_50[4];
  __IO uint32_t IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5; /**< iATU Upper Limit Address Register., offset: 0x60A20 */
  uint8_t RESERVED_51[652940];
  __I  uint32_t SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG; /**< MSI-X Capability ID, Next Pointer, Control Register., offset: 0x1000B0 */
  __I  uint32_t SHADOW_MSIX_TABLE_OFFSET_REG;      /**< MSI-X Table Offset and BIR Register., offset: 0x1000B4 */
  __I  uint32_t SHADOW_MSIX_PBA_OFFSET_REG;        /**< MSI-X PBA Offset and BIR Register., offset: 0x1000B8 */
} SerDes_EP_PCIe_1_Type, *SerDes_EP_PCIe_1_MemMapPtr;

/** Number of instances of the SerDes_EP_PCIe_1 module. */
#define SerDes_EP_PCIe_1_INSTANCE_COUNT          (1u)

/* SerDes_EP_PCIe_1 - Peripheral instance base addresses */
/** Peripheral SERDES_EP_PCIE_1 base address */
#define IP_SERDES_EP_PCIE_1_BASE                 (0x44100000u)
/** Peripheral SERDES_EP_PCIE_1 base pointer */
#define IP_SERDES_EP_PCIE_1                      ((SerDes_EP_PCIe_1_Type *)IP_SERDES_EP_PCIE_1_BASE)
/** Array initializer of SerDes_EP_PCIe_1 peripheral base addresses */
#define IP_SerDes_EP_PCIe_1_BASE_ADDRS           { IP_SERDES_EP_PCIE_1_BASE }
/** Array initializer of SerDes_EP_PCIe_1 peripheral base pointers */
#define IP_SerDes_EP_PCIe_1_BASE_PTRS            { IP_SERDES_EP_PCIE_1 }

/* ----------------------------------------------------------------------------
   -- SerDes_EP_PCIe_1 Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SerDes_EP_PCIe_1_Register_Masks SerDes_EP_PCIe_1 Register Masks
 * @{
 */

/*! @name DEVICE_ID_VENDOR_ID_REG - Device ID and Vendor ID */
/*! @{ */

#define SerDes_EP_PCIe_1_DEVICE_ID_VENDOR_ID_REG_PCI_TYPE0_VENDOR_ID_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_DEVICE_ID_VENDOR_ID_REG_PCI_TYPE0_VENDOR_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_DEVICE_ID_VENDOR_ID_REG_PCI_TYPE0_VENDOR_ID_WIDTH (16U)
#define SerDes_EP_PCIe_1_DEVICE_ID_VENDOR_ID_REG_PCI_TYPE0_VENDOR_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_ID_VENDOR_ID_REG_PCI_TYPE0_VENDOR_ID_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_ID_VENDOR_ID_REG_PCI_TYPE0_VENDOR_ID_MASK)

#define SerDes_EP_PCIe_1_DEVICE_ID_VENDOR_ID_REG_PCI_TYPE0_DEVICE_ID_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_DEVICE_ID_VENDOR_ID_REG_PCI_TYPE0_DEVICE_ID_SHIFT (16U)
#define SerDes_EP_PCIe_1_DEVICE_ID_VENDOR_ID_REG_PCI_TYPE0_DEVICE_ID_WIDTH (16U)
#define SerDes_EP_PCIe_1_DEVICE_ID_VENDOR_ID_REG_PCI_TYPE0_DEVICE_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_ID_VENDOR_ID_REG_PCI_TYPE0_DEVICE_ID_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_ID_VENDOR_ID_REG_PCI_TYPE0_DEVICE_ID_MASK)
/*! @} */

/*! @name STATUS_COMMAND_REG - Status and Command Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_IO_EN_MASK (0x1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_IO_EN_SHIFT (0U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_IO_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_IO_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_IO_EN_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_IO_EN_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_MEM_SPACE_EN_MASK (0x2U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_MEM_SPACE_EN_SHIFT (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_MEM_SPACE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_MEM_SPACE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_MEM_SPACE_EN_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_MEM_SPACE_EN_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_BUS_MASTER_EN_MASK (0x4U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_BUS_MASTER_EN_SHIFT (2U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_BUS_MASTER_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_BUS_MASTER_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_BUS_MASTER_EN_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_BUS_MASTER_EN_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_SPECIAL_CYCLE_OPERATION_MASK (0x8U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_SPECIAL_CYCLE_OPERATION_SHIFT (3U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_SPECIAL_CYCLE_OPERATION_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_SPECIAL_CYCLE_OPERATION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_SPECIAL_CYCLE_OPERATION_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_SPECIAL_CYCLE_OPERATION_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_MWI_ENABLE_MASK (0x10U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_MWI_ENABLE_SHIFT (4U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_MWI_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_MWI_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_MWI_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_MWI_ENABLE_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_VGA_PALETTE_SNOOP_MASK (0x20U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_VGA_PALETTE_SNOOP_SHIFT (5U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_VGA_PALETTE_SNOOP_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_VGA_PALETTE_SNOOP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_VGA_PALETTE_SNOOP_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_VGA_PALETTE_SNOOP_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_PARITY_ERR_EN_MASK (0x40U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_PARITY_ERR_EN_SHIFT (6U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_PARITY_ERR_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_PARITY_ERR_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_PARITY_ERR_EN_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_PARITY_ERR_EN_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_IDSEL_STEPPING_MASK (0x80U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_IDSEL_STEPPING_SHIFT (7U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_IDSEL_STEPPING_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_IDSEL_STEPPING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_IDSEL_STEPPING_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_IDSEL_STEPPING_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_SERREN_MASK (0x100U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_SERREN_SHIFT (8U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_SERREN_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_SERREN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_SERREN_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_SERREN_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_9_MASK (0x200U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_9_SHIFT (9U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_9_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_9(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_9_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_9_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_INT_EN_MASK (0x400U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_INT_EN_SHIFT (10U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_INT_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_INT_EN_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE0_INT_EN_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_RESERV_MASK (0xF800U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_RESERV_SHIFT (11U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_RESERV_WIDTH (5U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_RESERV(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_RESERV_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_PCI_TYPE_RESERV_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_17_MASK (0x60000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_17_SHIFT (17U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_17_WIDTH (2U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_17(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_17_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_17_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_INT_STATUS_MASK (0x80000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_INT_STATUS_SHIFT (19U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_INT_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_INT_STATUS_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_INT_STATUS_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_CAP_LIST_MASK (0x100000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_CAP_LIST_SHIFT (20U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_CAP_LIST_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_CAP_LIST(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_CAP_LIST_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_CAP_LIST_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_FAST_66MHZ_CAP_MASK (0x200000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_FAST_66MHZ_CAP_SHIFT (21U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_FAST_66MHZ_CAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_FAST_66MHZ_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_FAST_66MHZ_CAP_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_FAST_66MHZ_CAP_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_22_MASK (0x400000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_22_SHIFT (22U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_22_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_22(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_22_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RSVDP_22_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_FAST_B2B_CAP_MASK (0x800000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_FAST_B2B_CAP_SHIFT (23U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_FAST_B2B_CAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_FAST_B2B_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_FAST_B2B_CAP_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_FAST_B2B_CAP_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_MASTER_DPE_MASK (0x1000000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_MASTER_DPE_SHIFT (24U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_MASTER_DPE_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_MASTER_DPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_MASTER_DPE_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_MASTER_DPE_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_DEV_SEL_TIMING_MASK (0x6000000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_DEV_SEL_TIMING_SHIFT (25U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_DEV_SEL_TIMING_WIDTH (2U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_DEV_SEL_TIMING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_DEV_SEL_TIMING_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_DEV_SEL_TIMING_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_SIGNALED_TARGET_ABORT_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_SIGNALED_TARGET_ABORT_SHIFT (27U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_SIGNALED_TARGET_ABORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_SIGNALED_TARGET_ABORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_SIGNALED_TARGET_ABORT_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_SIGNALED_TARGET_ABORT_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RCVD_TARGET_ABORT_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RCVD_TARGET_ABORT_SHIFT (28U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RCVD_TARGET_ABORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RCVD_TARGET_ABORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RCVD_TARGET_ABORT_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RCVD_TARGET_ABORT_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RCVD_MASTER_ABORT_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RCVD_MASTER_ABORT_SHIFT (29U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RCVD_MASTER_ABORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RCVD_MASTER_ABORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RCVD_MASTER_ABORT_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_RCVD_MASTER_ABORT_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_SIGNALED_SYS_ERR_MASK (0x40000000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_SIGNALED_SYS_ERR_SHIFT (30U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_SIGNALED_SYS_ERR_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_SIGNALED_SYS_ERR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_SIGNALED_SYS_ERR_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_SIGNALED_SYS_ERR_MASK)

#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_DETECTED_PARITY_ERR_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_DETECTED_PARITY_ERR_SHIFT (31U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_DETECTED_PARITY_ERR_WIDTH (1U)
#define SerDes_EP_PCIe_1_STATUS_COMMAND_REG_DETECTED_PARITY_ERR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_STATUS_COMMAND_REG_DETECTED_PARITY_ERR_SHIFT)) & SerDes_EP_PCIe_1_STATUS_COMMAND_REG_DETECTED_PARITY_ERR_MASK)
/*! @} */

/*! @name CLASS_CODE_REVISION_ID - Class Code and Revision ID */
/*! @{ */

#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_REVISION_ID_MASK (0xFFU)
#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_REVISION_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_REVISION_ID_WIDTH (8U)
#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_REVISION_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_REVISION_ID_SHIFT)) & SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_REVISION_ID_MASK)

#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_PROGRAM_INTERFACE_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_PROGRAM_INTERFACE_SHIFT (8U)
#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_PROGRAM_INTERFACE_WIDTH (8U)
#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_PROGRAM_INTERFACE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_PROGRAM_INTERFACE_SHIFT)) & SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_PROGRAM_INTERFACE_MASK)

#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_SUBCLASS_CODE_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_SUBCLASS_CODE_SHIFT (16U)
#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_SUBCLASS_CODE_WIDTH (8U)
#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_SUBCLASS_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_SUBCLASS_CODE_SHIFT)) & SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_SUBCLASS_CODE_MASK)

#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_BASE_CLASS_CODE_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_BASE_CLASS_CODE_SHIFT (24U)
#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_BASE_CLASS_CODE_WIDTH (8U)
#define SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_BASE_CLASS_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_BASE_CLASS_CODE_SHIFT)) & SerDes_EP_PCIe_1_CLASS_CODE_REVISION_ID_BASE_CLASS_CODE_MASK)
/*! @} */

/*! @name BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG - BIST, Header Type, Latency Timer, and Cache Line Size Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_CACHE_LINE_SIZE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_CACHE_LINE_SIZE_SHIFT (0U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_CACHE_LINE_SIZE_WIDTH (8U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_CACHE_LINE_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_CACHE_LINE_SIZE_SHIFT)) & SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_CACHE_LINE_SIZE_MASK)

#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_LATENCY_MASTER_TIMER_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_LATENCY_MASTER_TIMER_SHIFT (8U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_LATENCY_MASTER_TIMER_WIDTH (8U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_LATENCY_MASTER_TIMER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_LATENCY_MASTER_TIMER_SHIFT)) & SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_LATENCY_MASTER_TIMER_MASK)

#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_HEADER_TYPE_MASK (0x7F0000U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_HEADER_TYPE_SHIFT (16U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_HEADER_TYPE_WIDTH (7U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_HEADER_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_HEADER_TYPE_SHIFT)) & SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_HEADER_TYPE_MASK)

#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_MULTI_FUNC_MASK (0x800000U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_MULTI_FUNC_SHIFT (23U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_MULTI_FUNC_WIDTH (1U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_MULTI_FUNC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_MULTI_FUNC_SHIFT)) & SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_MULTI_FUNC_MASK)

#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_BIST_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_BIST_SHIFT (24U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_BIST_WIDTH (8U)
#define SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_BIST(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_BIST_SHIFT)) & SerDes_EP_PCIe_1_BIST_HEADER_TYPE_LATENCY_CACHE_LINE_SIZE_REG_BIST_MASK)
/*! @} */

/*! @name BAR0_REG - BAR0 */
/*! @{ */

#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_MEM_IO_MASK (0x1U)
#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_MEM_IO_SHIFT (0U)
#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_MEM_IO_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_MEM_IO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR0_REG_BAR0_MEM_IO_SHIFT)) & SerDes_EP_PCIe_1_BAR0_REG_BAR0_MEM_IO_MASK)

#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_TYPE_MASK (0x6U)
#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_TYPE_SHIFT (1U)
#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_TYPE_WIDTH (2U)
#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_TYPE(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR0_REG_BAR0_TYPE_SHIFT)) & SerDes_EP_PCIe_1_BAR0_REG_BAR0_TYPE_MASK)

#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_PREFETCH_MASK (0x8U)
#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_PREFETCH_SHIFT (3U)
#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_PREFETCH_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_PREFETCH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR0_REG_BAR0_PREFETCH_SHIFT)) & SerDes_EP_PCIe_1_BAR0_REG_BAR0_PREFETCH_MASK)

#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_START_MASK (0xFFFFFFF0U)
#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_START_SHIFT (4U)
#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_START_WIDTH (28U)
#define SerDes_EP_PCIe_1_BAR0_REG_BAR0_START(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR0_REG_BAR0_START_SHIFT)) & SerDes_EP_PCIe_1_BAR0_REG_BAR0_START_MASK)
/*! @} */

/*! @name BAR1_REG - BAR1 */
/*! @{ */

#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_MEM_IO_MASK (0x1U)
#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_MEM_IO_SHIFT (0U)
#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_MEM_IO_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_MEM_IO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR1_REG_BAR1_MEM_IO_SHIFT)) & SerDes_EP_PCIe_1_BAR1_REG_BAR1_MEM_IO_MASK)

#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_TYPE_MASK (0x6U)
#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_TYPE_SHIFT (1U)
#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_TYPE_WIDTH (2U)
#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_TYPE(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR1_REG_BAR1_TYPE_SHIFT)) & SerDes_EP_PCIe_1_BAR1_REG_BAR1_TYPE_MASK)

#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_PREFETCH_MASK (0x8U)
#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_PREFETCH_SHIFT (3U)
#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_PREFETCH_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_PREFETCH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR1_REG_BAR1_PREFETCH_SHIFT)) & SerDes_EP_PCIe_1_BAR1_REG_BAR1_PREFETCH_MASK)

#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_START_MASK (0xFFFFFFF0U)
#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_START_SHIFT (4U)
#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_START_WIDTH (28U)
#define SerDes_EP_PCIe_1_BAR1_REG_BAR1_START(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR1_REG_BAR1_START_SHIFT)) & SerDes_EP_PCIe_1_BAR1_REG_BAR1_START_MASK)
/*! @} */

/*! @name BAR2_REG - BAR2 */
/*! @{ */

#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_MEM_IO_MASK (0x1U)
#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_MEM_IO_SHIFT (0U)
#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_MEM_IO_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_MEM_IO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR2_REG_BAR2_MEM_IO_SHIFT)) & SerDes_EP_PCIe_1_BAR2_REG_BAR2_MEM_IO_MASK)

#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_TYPE_MASK (0x6U)
#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_TYPE_SHIFT (1U)
#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_TYPE_WIDTH (2U)
#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_TYPE(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR2_REG_BAR2_TYPE_SHIFT)) & SerDes_EP_PCIe_1_BAR2_REG_BAR2_TYPE_MASK)

#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_PREFETCH_MASK (0x8U)
#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_PREFETCH_SHIFT (3U)
#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_PREFETCH_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_PREFETCH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR2_REG_BAR2_PREFETCH_SHIFT)) & SerDes_EP_PCIe_1_BAR2_REG_BAR2_PREFETCH_MASK)

#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_START_MASK (0xFFFFFFF0U)
#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_START_SHIFT (4U)
#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_START_WIDTH (28U)
#define SerDes_EP_PCIe_1_BAR2_REG_BAR2_START(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR2_REG_BAR2_START_SHIFT)) & SerDes_EP_PCIe_1_BAR2_REG_BAR2_START_MASK)
/*! @} */

/*! @name BAR3_REG - BAR3 */
/*! @{ */

#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_MEM_IO_MASK (0x1U)
#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_MEM_IO_SHIFT (0U)
#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_MEM_IO_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_MEM_IO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR3_REG_BAR3_MEM_IO_SHIFT)) & SerDes_EP_PCIe_1_BAR3_REG_BAR3_MEM_IO_MASK)

#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_TYPE_MASK (0x6U)
#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_TYPE_SHIFT (1U)
#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_TYPE_WIDTH (2U)
#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_TYPE(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR3_REG_BAR3_TYPE_SHIFT)) & SerDes_EP_PCIe_1_BAR3_REG_BAR3_TYPE_MASK)

#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_PREFETCH_MASK (0x8U)
#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_PREFETCH_SHIFT (3U)
#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_PREFETCH_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_PREFETCH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR3_REG_BAR3_PREFETCH_SHIFT)) & SerDes_EP_PCIe_1_BAR3_REG_BAR3_PREFETCH_MASK)

#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_START_MASK (0xFFFFFFF0U)
#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_START_SHIFT (4U)
#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_START_WIDTH (28U)
#define SerDes_EP_PCIe_1_BAR3_REG_BAR3_START(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR3_REG_BAR3_START_SHIFT)) & SerDes_EP_PCIe_1_BAR3_REG_BAR3_START_MASK)
/*! @} */

/*! @name BAR4_REG - BAR4 */
/*! @{ */

#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_MEM_IO_MASK (0x1U)
#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_MEM_IO_SHIFT (0U)
#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_MEM_IO_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_MEM_IO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR4_REG_BAR4_MEM_IO_SHIFT)) & SerDes_EP_PCIe_1_BAR4_REG_BAR4_MEM_IO_MASK)

#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_TYPE_MASK (0x6U)
#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_TYPE_SHIFT (1U)
#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_TYPE_WIDTH (2U)
#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_TYPE(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR4_REG_BAR4_TYPE_SHIFT)) & SerDes_EP_PCIe_1_BAR4_REG_BAR4_TYPE_MASK)

#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_PREFETCH_MASK (0x8U)
#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_PREFETCH_SHIFT (3U)
#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_PREFETCH_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_PREFETCH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR4_REG_BAR4_PREFETCH_SHIFT)) & SerDes_EP_PCIe_1_BAR4_REG_BAR4_PREFETCH_MASK)

#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_START_MASK (0xFFFFFFF0U)
#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_START_SHIFT (4U)
#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_START_WIDTH (28U)
#define SerDes_EP_PCIe_1_BAR4_REG_BAR4_START(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR4_REG_BAR4_START_SHIFT)) & SerDes_EP_PCIe_1_BAR4_REG_BAR4_START_MASK)
/*! @} */

/*! @name BAR5_REG - BAR5 */
/*! @{ */

#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_MEM_IO_MASK (0x1U)
#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_MEM_IO_SHIFT (0U)
#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_MEM_IO_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_MEM_IO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR5_REG_BAR5_MEM_IO_SHIFT)) & SerDes_EP_PCIe_1_BAR5_REG_BAR5_MEM_IO_MASK)

#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_TYPE_MASK (0x6U)
#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_TYPE_SHIFT (1U)
#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_TYPE_WIDTH (2U)
#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_TYPE(x)   (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR5_REG_BAR5_TYPE_SHIFT)) & SerDes_EP_PCIe_1_BAR5_REG_BAR5_TYPE_MASK)

#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_PREFETCH_MASK (0x8U)
#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_PREFETCH_SHIFT (3U)
#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_PREFETCH_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_PREFETCH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR5_REG_BAR5_PREFETCH_SHIFT)) & SerDes_EP_PCIe_1_BAR5_REG_BAR5_PREFETCH_MASK)

#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_START_MASK (0xFFFFFFF0U)
#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_START_SHIFT (4U)
#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_START_WIDTH (28U)
#define SerDes_EP_PCIe_1_BAR5_REG_BAR5_START(x)  (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR5_REG_BAR5_START_SHIFT)) & SerDes_EP_PCIe_1_BAR5_REG_BAR5_START_MASK)
/*! @} */

/*! @name CARDBUS_CIS_PTR_REG - CardBus CIS Pointer Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_CARDBUS_CIS_PTR_REG_CARDBUS_CIS_POINTER_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_CARDBUS_CIS_PTR_REG_CARDBUS_CIS_POINTER_SHIFT (0U)
#define SerDes_EP_PCIe_1_CARDBUS_CIS_PTR_REG_CARDBUS_CIS_POINTER_WIDTH (32U)
#define SerDes_EP_PCIe_1_CARDBUS_CIS_PTR_REG_CARDBUS_CIS_POINTER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CARDBUS_CIS_PTR_REG_CARDBUS_CIS_POINTER_SHIFT)) & SerDes_EP_PCIe_1_CARDBUS_CIS_PTR_REG_CARDBUS_CIS_POINTER_MASK)
/*! @} */

/*! @name SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG - Subsystem ID and Subsystem Vendor ID Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG_SUBSYS_VENDOR_ID_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG_SUBSYS_VENDOR_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG_SUBSYS_VENDOR_ID_WIDTH (16U)
#define SerDes_EP_PCIe_1_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG_SUBSYS_VENDOR_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG_SUBSYS_VENDOR_ID_SHIFT)) & SerDes_EP_PCIe_1_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG_SUBSYS_VENDOR_ID_MASK)

#define SerDes_EP_PCIe_1_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG_SUBSYS_DEV_ID_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG_SUBSYS_DEV_ID_SHIFT (16U)
#define SerDes_EP_PCIe_1_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG_SUBSYS_DEV_ID_WIDTH (16U)
#define SerDes_EP_PCIe_1_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG_SUBSYS_DEV_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG_SUBSYS_DEV_ID_SHIFT)) & SerDes_EP_PCIe_1_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_REG_SUBSYS_DEV_ID_MASK)
/*! @} */

/*! @name EXP_ROM_BASE_ADDR_REG - Expansion ROM BAR Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_ENABLE_MASK (0x1U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_ENABLE_SHIFT (0U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_ENABLE_MASK)

#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_VALIDATION_STATUS_MASK (0xEU)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_VALIDATION_STATUS_SHIFT (1U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_VALIDATION_STATUS_WIDTH (3U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_VALIDATION_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_VALIDATION_STATUS_SHIFT)) & SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_VALIDATION_STATUS_MASK)

#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_VALIDATION_DETAILS_MASK (0xF0U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_VALIDATION_DETAILS_SHIFT (4U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_VALIDATION_DETAILS_WIDTH (4U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_VALIDATION_DETAILS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_VALIDATION_DETAILS_SHIFT)) & SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_ROM_BAR_VALIDATION_DETAILS_MASK)

#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_RSVDP_8_MASK (0x700U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_RSVDP_8_SHIFT (8U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_RSVDP_8_WIDTH (3U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_RSVDP_8_SHIFT)) & SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_RSVDP_8_MASK)

#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_EXP_ROM_BASE_ADDRESS_MASK (0xFFFFF800U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_EXP_ROM_BASE_ADDRESS_SHIFT (11U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_EXP_ROM_BASE_ADDRESS_WIDTH (21U)
#define SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_EXP_ROM_BASE_ADDRESS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_EXP_ROM_BASE_ADDRESS_SHIFT)) & SerDes_EP_PCIe_1_EXP_ROM_BASE_ADDR_REG_EXP_ROM_BASE_ADDRESS_MASK)
/*! @} */

/*! @name PCI_CAP_PTR_REG - Capabilities Pointer Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_PCI_CAP_PTR_REG_CAP_POINTER_MASK (0xFFU)
#define SerDes_EP_PCIe_1_PCI_CAP_PTR_REG_CAP_POINTER_SHIFT (0U)
#define SerDes_EP_PCIe_1_PCI_CAP_PTR_REG_CAP_POINTER_WIDTH (8U)
#define SerDes_EP_PCIe_1_PCI_CAP_PTR_REG_CAP_POINTER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_CAP_PTR_REG_CAP_POINTER_SHIFT)) & SerDes_EP_PCIe_1_PCI_CAP_PTR_REG_CAP_POINTER_MASK)

#define SerDes_EP_PCIe_1_PCI_CAP_PTR_REG_RSVDP_8_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_PCI_CAP_PTR_REG_RSVDP_8_SHIFT (8U)
#define SerDes_EP_PCIe_1_PCI_CAP_PTR_REG_RSVDP_8_WIDTH (24U)
#define SerDes_EP_PCIe_1_PCI_CAP_PTR_REG_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_CAP_PTR_REG_RSVDP_8_SHIFT)) & SerDes_EP_PCIe_1_PCI_CAP_PTR_REG_RSVDP_8_MASK)
/*! @} */

/*! @name MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG - Max_Lat, Min_Gnt, Interrupt Pin, and Interrupt Line Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_INT_LINE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_INT_LINE_SHIFT (0U)
#define SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_INT_LINE_WIDTH (8U)
#define SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_INT_LINE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_INT_LINE_SHIFT)) & SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_INT_LINE_MASK)

#define SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_INT_PIN_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_INT_PIN_SHIFT (8U)
#define SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_INT_PIN_WIDTH (8U)
#define SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_INT_PIN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_INT_PIN_SHIFT)) & SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_INT_PIN_MASK)

#define SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_RSVDP_16_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_RSVDP_16_SHIFT (16U)
#define SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_RSVDP_16_WIDTH (16U)
#define SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_RSVDP_16(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_RSVDP_16_SHIFT)) & SerDes_EP_PCIe_1_MAX_LATENCY_MIN_GRANT_INTERRUPT_PIN_INTERRUPT_LINE_REG_RSVDP_16_MASK)
/*! @} */

/*! @name CAP_ID_NXT_PTR_REG - Power Management Capabilities Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_CAP_ID_MASK (0xFFU)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_CAP_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_CAP_ID_WIDTH (8U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_CAP_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_CAP_ID_SHIFT)) & SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_CAP_ID_MASK)

#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_NEXT_POINTER_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_NEXT_POINTER_SHIFT (8U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_NEXT_POINTER_WIDTH (8U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_NEXT_POINTER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_NEXT_POINTER_SHIFT)) & SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_NEXT_POINTER_MASK)

#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_SPEC_VER_MASK (0x70000U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_SPEC_VER_SHIFT (16U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_SPEC_VER_WIDTH (3U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_SPEC_VER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_SPEC_VER_SHIFT)) & SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PM_SPEC_VER_MASK)

#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PME_CLK_MASK (0x80000U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PME_CLK_SHIFT (19U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PME_CLK_WIDTH (1U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PME_CLK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PME_CLK_SHIFT)) & SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PME_CLK_MASK)

#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_DSI_MASK (0x200000U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_DSI_SHIFT (21U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_DSI_WIDTH (1U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_DSI(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_DSI_SHIFT)) & SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_DSI_MASK)

#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_AUX_CURR_MASK (0x1C00000U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_AUX_CURR_SHIFT (22U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_AUX_CURR_WIDTH (3U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_AUX_CURR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_AUX_CURR_SHIFT)) & SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_AUX_CURR_MASK)

#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_D1_SUPPORT_MASK (0x2000000U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_D1_SUPPORT_SHIFT (25U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_D1_SUPPORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_D1_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_D1_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_D1_SUPPORT_MASK)

#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_D2_SUPPORT_MASK (0x4000000U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_D2_SUPPORT_SHIFT (26U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_D2_SUPPORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_D2_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_D2_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_D2_SUPPORT_MASK)

#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PME_SUPPORT_MASK (0xF8000000U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PME_SUPPORT_SHIFT (27U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PME_SUPPORT_WIDTH (5U)
#define SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PME_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PME_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_CAP_ID_NXT_PTR_REG_PME_SUPPORT_MASK)
/*! @} */

/*! @name CON_STATUS_REG - Power Management Control and Status Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_CON_STATUS_REG_POWER_STATE_MASK (0x3U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_POWER_STATE_SHIFT (0U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_POWER_STATE_WIDTH (2U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_POWER_STATE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CON_STATUS_REG_POWER_STATE_SHIFT)) & SerDes_EP_PCIe_1_CON_STATUS_REG_POWER_STATE_MASK)

#define SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_2_MASK (0x4U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_2_SHIFT (2U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_2_WIDTH (1U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_2_SHIFT)) & SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_2_MASK)

#define SerDes_EP_PCIe_1_CON_STATUS_REG_NO_SOFT_RST_MASK (0x8U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_NO_SOFT_RST_SHIFT (3U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_NO_SOFT_RST_WIDTH (1U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_NO_SOFT_RST(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CON_STATUS_REG_NO_SOFT_RST_SHIFT)) & SerDes_EP_PCIe_1_CON_STATUS_REG_NO_SOFT_RST_MASK)

#define SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_4_MASK (0xF0U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_4_SHIFT (4U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_4_WIDTH (4U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_4_SHIFT)) & SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_4_MASK)

#define SerDes_EP_PCIe_1_CON_STATUS_REG_PME_ENABLE_MASK (0x100U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_PME_ENABLE_SHIFT (8U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_PME_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_PME_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CON_STATUS_REG_PME_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_CON_STATUS_REG_PME_ENABLE_MASK)

#define SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_SELECT_MASK (0x1E00U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_SELECT_SHIFT (9U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_SELECT_WIDTH (4U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_SELECT_SHIFT)) & SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_SELECT_MASK)

#define SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_SCALE_MASK (0x6000U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_SCALE_SHIFT (13U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_SCALE_WIDTH (2U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_SCALE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_SCALE_SHIFT)) & SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_SCALE_MASK)

#define SerDes_EP_PCIe_1_CON_STATUS_REG_PME_STATUS_MASK (0x8000U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_PME_STATUS_SHIFT (15U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_PME_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_PME_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CON_STATUS_REG_PME_STATUS_SHIFT)) & SerDes_EP_PCIe_1_CON_STATUS_REG_PME_STATUS_MASK)

#define SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_16_MASK (0x3F0000U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_16_SHIFT (16U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_16_WIDTH (6U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_16(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_16_SHIFT)) & SerDes_EP_PCIe_1_CON_STATUS_REG_RSVDP_16_MASK)

#define SerDes_EP_PCIe_1_CON_STATUS_REG_B2_B3_SUPPORT_MASK (0x400000U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_B2_B3_SUPPORT_SHIFT (22U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_B2_B3_SUPPORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_B2_B3_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CON_STATUS_REG_B2_B3_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_CON_STATUS_REG_B2_B3_SUPPORT_MASK)

#define SerDes_EP_PCIe_1_CON_STATUS_REG_BUS_PWR_CLK_CON_EN_MASK (0x800000U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_BUS_PWR_CLK_CON_EN_SHIFT (23U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_BUS_PWR_CLK_CON_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_BUS_PWR_CLK_CON_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CON_STATUS_REG_BUS_PWR_CLK_CON_EN_SHIFT)) & SerDes_EP_PCIe_1_CON_STATUS_REG_BUS_PWR_CLK_CON_EN_MASK)

#define SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_REG_ADD_INFO_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_REG_ADD_INFO_SHIFT (24U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_REG_ADD_INFO_WIDTH (8U)
#define SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_REG_ADD_INFO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_REG_ADD_INFO_SHIFT)) & SerDes_EP_PCIe_1_CON_STATUS_REG_DATA_REG_ADD_INFO_MASK)
/*! @} */

/*! @name PCI_MSI_CAP_ID_NEXT_CTRL_REG - MSI Capability Header and Message Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_ID_MASK (0xFFU)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_ID_WIDTH (8U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_ID_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_ID_MASK)

#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_NEXT_OFFSET_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_NEXT_OFFSET_SHIFT (8U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_NEXT_OFFSET_WIDTH (8U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_NEXT_OFFSET_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_CAP_NEXT_OFFSET_MASK)

#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_ENABLE_MASK (0x10000U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_ENABLE_SHIFT (16U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_ENABLE_MASK)

#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_CAP_MASK (0xE0000U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_CAP_SHIFT (17U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_CAP_WIDTH (3U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_CAP_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_CAP_MASK)

#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_EN_MASK (0x700000U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_EN_SHIFT (20U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_EN_WIDTH (3U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_EN_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_MULTIPLE_MSG_EN_MASK)

#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_64_BIT_ADDR_CAP_MASK (0x800000U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_64_BIT_ADDR_CAP_SHIFT (23U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_64_BIT_ADDR_CAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_64_BIT_ADDR_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_64_BIT_ADDR_CAP_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_64_BIT_ADDR_CAP_MASK)

#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_PVM_SUPPORT_MASK (0x1000000U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_PVM_SUPPORT_SHIFT (24U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_PVM_SUPPORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_PVM_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_PVM_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_PVM_SUPPORT_MASK)

#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_CAP_MASK (0x2000000U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_CAP_SHIFT (25U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_CAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_CAP_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_CAP_MASK)

#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_EN_MASK (0x4000000U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_EN_SHIFT (26U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_EN_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_PCI_MSI_EXT_DATA_EN_MASK)

#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_RSVDP_27_MASK (0xF8000000U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_RSVDP_27_SHIFT (27U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_RSVDP_27_WIDTH (5U)
#define SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_RSVDP_27(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_RSVDP_27_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSI_CAP_ID_NEXT_CTRL_REG_RSVDP_27_MASK)
/*! @} */

/*! @name MSI_CAP_OFF_04H_REG - Message Address Register for MSI (Offset 04h). */
/*! @{ */

#define SerDes_EP_PCIe_1_MSI_CAP_OFF_04H_REG_RSVDP_0_MASK (0x3U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_04H_REG_RSVDP_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_04H_REG_RSVDP_0_WIDTH (2U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_04H_REG_RSVDP_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSI_CAP_OFF_04H_REG_RSVDP_0_SHIFT)) & SerDes_EP_PCIe_1_MSI_CAP_OFF_04H_REG_RSVDP_0_MASK)

#define SerDes_EP_PCIe_1_MSI_CAP_OFF_04H_REG_PCI_MSI_CAP_OFF_04H_MASK (0xFFFFFFFCU)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_04H_REG_PCI_MSI_CAP_OFF_04H_SHIFT (2U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_04H_REG_PCI_MSI_CAP_OFF_04H_WIDTH (30U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_04H_REG_PCI_MSI_CAP_OFF_04H(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSI_CAP_OFF_04H_REG_PCI_MSI_CAP_OFF_04H_SHIFT)) & SerDes_EP_PCIe_1_MSI_CAP_OFF_04H_REG_PCI_MSI_CAP_OFF_04H_MASK)
/*! @} */

/*! @name MSI_CAP_OFF_08H_REG - Message Address Register for MSI (Offset 08h). */
/*! @{ */

#define SerDes_EP_PCIe_1_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_08H_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_08H_SHIFT (0U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_08H_WIDTH (16U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_08H(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_08H_SHIFT)) & SerDes_EP_PCIe_1_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_08H_MASK)

#define SerDes_EP_PCIe_1_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_0AH_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_0AH_SHIFT (16U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_0AH_WIDTH (16U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_0AH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_0AH_SHIFT)) & SerDes_EP_PCIe_1_MSI_CAP_OFF_08H_REG_PCI_MSI_CAP_OFF_0AH_MASK)
/*! @} */

/*! @name MSI_CAP_OFF_0CH_REG - Message Address Register for MSI (Offset 0Ch). */
/*! @{ */

#define SerDes_EP_PCIe_1_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0CH_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0CH_SHIFT (0U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0CH_WIDTH (16U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0CH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0CH_SHIFT)) & SerDes_EP_PCIe_1_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0CH_MASK)

#define SerDes_EP_PCIe_1_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0EH_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0EH_SHIFT (16U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0EH_WIDTH (16U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0EH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0EH_SHIFT)) & SerDes_EP_PCIe_1_MSI_CAP_OFF_0CH_REG_PCI_MSI_CAP_OFF_0EH_MASK)
/*! @} */

/*! @name MSI_CAP_OFF_10H_REG - Message Address Register for MSI (Offset 10h). */
/*! @{ */

#define SerDes_EP_PCIe_1_MSI_CAP_OFF_10H_REG_PCI_MSI_CAP_OFF_10H_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_10H_REG_PCI_MSI_CAP_OFF_10H_SHIFT (0U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_10H_REG_PCI_MSI_CAP_OFF_10H_WIDTH (32U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_10H_REG_PCI_MSI_CAP_OFF_10H(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSI_CAP_OFF_10H_REG_PCI_MSI_CAP_OFF_10H_SHIFT)) & SerDes_EP_PCIe_1_MSI_CAP_OFF_10H_REG_PCI_MSI_CAP_OFF_10H_MASK)
/*! @} */

/*! @name MSI_CAP_OFF_14H_REG - Message Address Register for MSI (Offset 14h). */
/*! @{ */

#define SerDes_EP_PCIe_1_MSI_CAP_OFF_14H_REG_PCI_MSI_CAP_OFF_14H_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_14H_REG_PCI_MSI_CAP_OFF_14H_SHIFT (0U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_14H_REG_PCI_MSI_CAP_OFF_14H_WIDTH (32U)
#define SerDes_EP_PCIe_1_MSI_CAP_OFF_14H_REG_PCI_MSI_CAP_OFF_14H(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSI_CAP_OFF_14H_REG_PCI_MSI_CAP_OFF_14H_SHIFT)) & SerDes_EP_PCIe_1_MSI_CAP_OFF_14H_REG_PCI_MSI_CAP_OFF_14H_MASK)
/*! @} */

/*! @name PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG - PCI Express Capabilities, ID, Next Pointer Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_ID_MASK (0xFFU)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_ID_WIDTH (8U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_ID_SHIFT)) & SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_ID_MASK)

#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_NEXT_PTR_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_NEXT_PTR_SHIFT (8U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_NEXT_PTR_WIDTH (8U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_NEXT_PTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_NEXT_PTR_SHIFT)) & SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_NEXT_PTR_MASK)

#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_REG_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_REG_SHIFT (16U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_REG_WIDTH (4U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_REG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_REG_SHIFT)) & SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_CAP_REG_MASK)

#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_DEV_PORT_TYPE_MASK (0xF00000U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_DEV_PORT_TYPE_SHIFT (20U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_DEV_PORT_TYPE_WIDTH (4U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_DEV_PORT_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_DEV_PORT_TYPE_SHIFT)) & SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_DEV_PORT_TYPE_MASK)

#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_SLOT_IMP_MASK (0x1000000U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_SLOT_IMP_SHIFT (24U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_SLOT_IMP_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_SLOT_IMP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_SLOT_IMP_SHIFT)) & SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_SLOT_IMP_MASK)

#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_INT_MSG_NUM_MASK (0x3E000000U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_INT_MSG_NUM_SHIFT (25U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_INT_MSG_NUM_WIDTH (5U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_INT_MSG_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_INT_MSG_NUM_SHIFT)) & SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_PCIE_INT_MSG_NUM_MASK)

#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVD_MASK (0x40000000U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVD_SHIFT (30U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVD_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVD_SHIFT)) & SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVD_MASK)

#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVDP_31_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVDP_31_SHIFT (31U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVDP_31_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVDP_31(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVDP_31_SHIFT)) & SerDes_EP_PCIe_1_PCIE_CAP_ID_PCIE_NEXT_CAP_PTR_PCIE_CAP_REG_RSVDP_31_MASK)
/*! @} */

/*! @name DEVICE_CAPABILITIES_REG - Device Capabilities Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_MAX_PAYLOAD_SIZE_MASK (0x7U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_MAX_PAYLOAD_SIZE_SHIFT (0U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_MAX_PAYLOAD_SIZE_WIDTH (3U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_MAX_PAYLOAD_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_MAX_PAYLOAD_SIZE_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_MAX_PAYLOAD_SIZE_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_PHANTOM_FUNC_SUPPORT_MASK (0x18U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_PHANTOM_FUNC_SUPPORT_SHIFT (3U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_PHANTOM_FUNC_SUPPORT_WIDTH (2U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_PHANTOM_FUNC_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_PHANTOM_FUNC_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_PHANTOM_FUNC_SUPPORT_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EXT_TAG_SUPP_MASK (0x20U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EXT_TAG_SUPP_SHIFT (5U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EXT_TAG_SUPP_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EXT_TAG_SUPP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EXT_TAG_SUPP_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EXT_TAG_SUPP_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EP_L0S_ACCPT_LATENCY_MASK (0x1C0U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EP_L0S_ACCPT_LATENCY_SHIFT (6U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EP_L0S_ACCPT_LATENCY_WIDTH (3U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EP_L0S_ACCPT_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EP_L0S_ACCPT_LATENCY_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EP_L0S_ACCPT_LATENCY_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EP_L1_ACCPT_LATENCY_MASK (0xE00U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EP_L1_ACCPT_LATENCY_SHIFT (9U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EP_L1_ACCPT_LATENCY_WIDTH (3U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EP_L1_ACCPT_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EP_L1_ACCPT_LATENCY_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_EP_L1_ACCPT_LATENCY_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_12_MASK (0x7000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_12_SHIFT (12U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_12_WIDTH (3U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_12(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_12_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_12_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_ROLE_BASED_ERR_REPORT_MASK (0x8000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_ROLE_BASED_ERR_REPORT_SHIFT (15U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_ROLE_BASED_ERR_REPORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_ROLE_BASED_ERR_REPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_ROLE_BASED_ERR_REPORT_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_ROLE_BASED_ERR_REPORT_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_16_MASK (0x30000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_16_SHIFT (16U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_16_WIDTH (2U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_16(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_16_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_16_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_CAP_SLOT_PWR_LMT_VALUE_MASK (0x3FC0000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_CAP_SLOT_PWR_LMT_VALUE_SHIFT (18U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_CAP_SLOT_PWR_LMT_VALUE_WIDTH (8U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_CAP_SLOT_PWR_LMT_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_CAP_SLOT_PWR_LMT_VALUE_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_CAP_SLOT_PWR_LMT_VALUE_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_CAP_SLOT_PWR_LMT_SCALE_MASK (0xC000000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_CAP_SLOT_PWR_LMT_SCALE_SHIFT (26U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_CAP_SLOT_PWR_LMT_SCALE_WIDTH (2U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_CAP_SLOT_PWR_LMT_SCALE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_CAP_SLOT_PWR_LMT_SCALE_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_CAP_SLOT_PWR_LMT_SCALE_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_FLR_CAP_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_FLR_CAP_SHIFT (28U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_FLR_CAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_FLR_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_FLR_CAP_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_PCIE_CAP_FLR_CAP_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_29_MASK (0xE0000000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_29_SHIFT (29U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_29_WIDTH (3U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_29(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_29_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES_REG_RSVDP_29_MASK)
/*! @} */

/*! @name DEVICE_CONTROL_DEVICE_STATUS - Device Control and Device Status Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_REPORT_EN_MASK (0x1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_REPORT_EN_SHIFT (0U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_REPORT_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_REPORT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_REPORT_EN_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_REPORT_EN_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_REPORT_EN_MASK (0x2U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_REPORT_EN_SHIFT (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_REPORT_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_REPORT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_REPORT_EN_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_REPORT_EN_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_REPORT_EN_MASK (0x4U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_REPORT_EN_SHIFT (2U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_REPORT_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_REPORT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_REPORT_EN_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_REPORT_EN_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORT_REQ_REP_EN_MASK (0x8U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORT_REQ_REP_EN_SHIFT (3U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORT_REQ_REP_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORT_REQ_REP_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORT_REQ_REP_EN_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORT_REQ_REP_EN_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_REL_ORDER_MASK (0x10U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_REL_ORDER_SHIFT (4U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_REL_ORDER_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_REL_ORDER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_REL_ORDER_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_REL_ORDER_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_PAYLOAD_SIZE_CS_MASK (0xE0U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_PAYLOAD_SIZE_CS_SHIFT (5U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_PAYLOAD_SIZE_CS_WIDTH (3U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_PAYLOAD_SIZE_CS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_PAYLOAD_SIZE_CS_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_PAYLOAD_SIZE_CS_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EXT_TAG_EN_MASK (0x100U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EXT_TAG_EN_SHIFT (8U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EXT_TAG_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EXT_TAG_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EXT_TAG_EN_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EXT_TAG_EN_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_PHANTOM_FUNC_EN_MASK (0x200U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_PHANTOM_FUNC_EN_SHIFT (9U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_PHANTOM_FUNC_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_PHANTOM_FUNC_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_PHANTOM_FUNC_EN_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_PHANTOM_FUNC_EN_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_PM_EN_MASK (0x400U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_PM_EN_SHIFT (10U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_PM_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_PM_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_PM_EN_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_PM_EN_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_NO_SNOOP_MASK (0x800U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_NO_SNOOP_SHIFT (11U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_NO_SNOOP_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_NO_SNOOP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_NO_SNOOP_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_EN_NO_SNOOP_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_READ_REQ_SIZE_MASK (0x7000U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_READ_REQ_SIZE_SHIFT (12U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_READ_REQ_SIZE_WIDTH (3U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_READ_REQ_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_READ_REQ_SIZE_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_MAX_READ_REQ_SIZE_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_DETECTED_MASK (0x10000U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_DETECTED_SHIFT (16U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_DETECTED_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_DETECTED_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_CORR_ERR_DETECTED_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_DETECTED_MASK (0x20000U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_DETECTED_SHIFT (17U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_DETECTED_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_DETECTED_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_NON_FATAL_ERR_DETECTED_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_DETECTED_MASK (0x40000U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_DETECTED_SHIFT (18U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_DETECTED_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_DETECTED_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_FATAL_ERR_DETECTED_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORTED_REQ_DETECTED_MASK (0x80000U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORTED_REQ_DETECTED_SHIFT (19U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORTED_REQ_DETECTED_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORTED_REQ_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORTED_REQ_DETECTED_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_UNSUPPORTED_REQ_DETECTED_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_DETECTED_MASK (0x100000U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_DETECTED_SHIFT (20U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_DETECTED_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_DETECTED_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_AUX_POWER_DETECTED_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_TRANS_PENDING_MASK (0x200000U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_TRANS_PENDING_SHIFT (21U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_TRANS_PENDING_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_TRANS_PENDING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_TRANS_PENDING_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_PCIE_CAP_TRANS_PENDING_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_RSVDP_22_MASK (0xFFC00000U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_RSVDP_22_SHIFT (22U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_RSVDP_22_WIDTH (10U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_RSVDP_22(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_RSVDP_22_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL_DEVICE_STATUS_RSVDP_22_MASK)
/*! @} */

/*! @name LINK_CAPABILITIES_REG - Link Capabilities Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_SPEED_MASK (0xFU)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_SPEED_SHIFT (0U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_SPEED_WIDTH (4U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_SPEED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_SPEED_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_SPEED_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_WIDTH_MASK (0x3F0U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_WIDTH_SHIFT (4U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_WIDTH_WIDTH (6U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_WIDTH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_WIDTH_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_MAX_LINK_WIDTH_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_SUPPORT_MASK (0xC00U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_SUPPORT_SHIFT (10U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_SUPPORT_WIDTH (2U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_SUPPORT_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_L0S_EXIT_LATENCY_MASK (0x7000U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_L0S_EXIT_LATENCY_SHIFT (12U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_L0S_EXIT_LATENCY_WIDTH (3U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_L0S_EXIT_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_L0S_EXIT_LATENCY_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_L0S_EXIT_LATENCY_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_L1_EXIT_LATENCY_MASK (0x38000U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_L1_EXIT_LATENCY_SHIFT (15U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_L1_EXIT_LATENCY_WIDTH (3U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_L1_EXIT_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_L1_EXIT_LATENCY_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_L1_EXIT_LATENCY_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_CLOCK_POWER_MAN_MASK (0x40000U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_CLOCK_POWER_MAN_SHIFT (18U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_CLOCK_POWER_MAN_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_CLOCK_POWER_MAN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_CLOCK_POWER_MAN_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_CLOCK_POWER_MAN_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_SURPRISE_DOWN_ERR_REP_CAP_MASK (0x80000U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_SURPRISE_DOWN_ERR_REP_CAP_SHIFT (19U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_SURPRISE_DOWN_ERR_REP_CAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_SURPRISE_DOWN_ERR_REP_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_SURPRISE_DOWN_ERR_REP_CAP_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_SURPRISE_DOWN_ERR_REP_CAP_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_DLL_ACTIVE_REP_CAP_MASK (0x100000U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_DLL_ACTIVE_REP_CAP_SHIFT (20U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_DLL_ACTIVE_REP_CAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_DLL_ACTIVE_REP_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_DLL_ACTIVE_REP_CAP_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_DLL_ACTIVE_REP_CAP_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_LINK_BW_NOT_CAP_MASK (0x200000U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_LINK_BW_NOT_CAP_SHIFT (21U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_LINK_BW_NOT_CAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_LINK_BW_NOT_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_LINK_BW_NOT_CAP_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_LINK_BW_NOT_CAP_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_ASPM_OPT_COMPLIANCE_MASK (0x400000U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_ASPM_OPT_COMPLIANCE_SHIFT (22U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_ASPM_OPT_COMPLIANCE_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_ASPM_OPT_COMPLIANCE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_ASPM_OPT_COMPLIANCE_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_ASPM_OPT_COMPLIANCE_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_RSVDP_23_MASK (0x800000U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_RSVDP_23_SHIFT (23U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_RSVDP_23_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_RSVDP_23(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_RSVDP_23_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_RSVDP_23_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_PORT_NUM_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_PORT_NUM_SHIFT (24U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_PORT_NUM_WIDTH (8U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_PORT_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_PORT_NUM_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES_REG_PCIE_CAP_PORT_NUM_MASK)
/*! @} */

/*! @name LINK_CONTROL_LINK_STATUS_REG - Link Control and Link Status Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_CONTROL_MASK (0x3U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_CONTROL_SHIFT (0U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_CONTROL_WIDTH (2U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_CONTROL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_CONTROL_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_ACTIVE_STATE_LINK_PM_CONTROL_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_2_MASK (0x4U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_2_SHIFT (2U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_2_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_2_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_2_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RCB_MASK (0x8U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RCB_SHIFT (3U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RCB_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RCB(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RCB_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RCB_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_DISABLE_MASK (0x10U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_DISABLE_SHIFT (4U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_DISABLE_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RETRAIN_LINK_MASK (0x20U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RETRAIN_LINK_SHIFT (5U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RETRAIN_LINK_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RETRAIN_LINK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RETRAIN_LINK_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_RETRAIN_LINK_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_COMMON_CLK_CONFIG_MASK (0x40U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_COMMON_CLK_CONFIG_SHIFT (6U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_COMMON_CLK_CONFIG_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_COMMON_CLK_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_COMMON_CLK_CONFIG_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_COMMON_CLK_CONFIG_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EXTENDED_SYNCH_MASK (0x80U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EXTENDED_SYNCH_SHIFT (7U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EXTENDED_SYNCH_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EXTENDED_SYNCH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EXTENDED_SYNCH_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EXTENDED_SYNCH_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EN_CLK_POWER_MAN_MASK (0x100U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EN_CLK_POWER_MAN_SHIFT (8U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EN_CLK_POWER_MAN_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EN_CLK_POWER_MAN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EN_CLK_POWER_MAN_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_EN_CLK_POWER_MAN_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_HW_AUTO_WIDTH_DISABLE_MASK (0x200U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_HW_AUTO_WIDTH_DISABLE_SHIFT (9U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_HW_AUTO_WIDTH_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_HW_AUTO_WIDTH_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_HW_AUTO_WIDTH_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_HW_AUTO_WIDTH_DISABLE_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_INT_EN_MASK (0x400U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_INT_EN_SHIFT (10U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_INT_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_INT_EN_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_INT_EN_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_INT_EN_MASK (0x800U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_INT_EN_SHIFT (11U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_INT_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_INT_EN_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_INT_EN_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_12_MASK (0x3000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_12_SHIFT (12U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_12_WIDTH (2U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_12(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_12_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_12_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DRS_SIGNALING_CONTROL_MASK (0xC000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DRS_SIGNALING_CONTROL_SHIFT (14U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DRS_SIGNALING_CONTROL_WIDTH (2U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DRS_SIGNALING_CONTROL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DRS_SIGNALING_CONTROL_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DRS_SIGNALING_CONTROL_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_SPEED_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_SPEED_SHIFT (16U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_SPEED_WIDTH (4U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_SPEED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_SPEED_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_SPEED_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_NEGO_LINK_WIDTH_MASK (0x3F00000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_NEGO_LINK_WIDTH_SHIFT (20U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_NEGO_LINK_WIDTH_WIDTH (6U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_NEGO_LINK_WIDTH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_NEGO_LINK_WIDTH_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_NEGO_LINK_WIDTH_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_26_MASK (0x4000000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_26_SHIFT (26U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_26_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_26(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_26_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_RSVDP_26_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_TRAINING_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_TRAINING_SHIFT (27U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_TRAINING_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_TRAINING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_TRAINING_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_TRAINING_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_SLOT_CLK_CONFIG_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_SLOT_CLK_CONFIG_SHIFT (28U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_SLOT_CLK_CONFIG_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_SLOT_CLK_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_SLOT_CLK_CONFIG_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_SLOT_CLK_CONFIG_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DLL_ACTIVE_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DLL_ACTIVE_SHIFT (29U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DLL_ACTIVE_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DLL_ACTIVE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DLL_ACTIVE_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_DLL_ACTIVE_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_STATUS_MASK (0x40000000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_STATUS_SHIFT (30U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_STATUS_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_BW_MAN_STATUS_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_STATUS_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_STATUS_SHIFT (31U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_STATUS_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL_LINK_STATUS_REG_PCIE_CAP_LINK_AUTO_BW_STATUS_MASK)
/*! @} */

/*! @name DEVICE_CAPABILITIES2_REG - Device Capabilities 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_RANGE_MASK (0xFU)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_RANGE_SHIFT (0U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_RANGE_WIDTH (4U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_RANGE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_RANGE_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_RANGE_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SUPPORT_MASK (0x10U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SUPPORT_SHIFT (4U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SUPPORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SUPPORT_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_MASK (0x20U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_SHIFT (5U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ATOMIC_ROUTING_SUPP_MASK (0x40U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ATOMIC_ROUTING_SUPP_SHIFT (6U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ATOMIC_ROUTING_SUPP_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ATOMIC_ROUTING_SUPP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ATOMIC_ROUTING_SUPP_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_ATOMIC_ROUTING_SUPP_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_32_ATOMIC_CPL_SUPP_MASK (0x80U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_32_ATOMIC_CPL_SUPP_SHIFT (7U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_32_ATOMIC_CPL_SUPP_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_32_ATOMIC_CPL_SUPP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_32_ATOMIC_CPL_SUPP_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_32_ATOMIC_CPL_SUPP_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_64_ATOMIC_CPL_SUPP_MASK (0x100U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_64_ATOMIC_CPL_SUPP_SHIFT (8U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_64_ATOMIC_CPL_SUPP_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_64_ATOMIC_CPL_SUPP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_64_ATOMIC_CPL_SUPP_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_64_ATOMIC_CPL_SUPP_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_128_CAS_CPL_SUPP_MASK (0x200U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_128_CAS_CPL_SUPP_SHIFT (9U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_128_CAS_CPL_SUPP_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_128_CAS_CPL_SUPP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_128_CAS_CPL_SUPP_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_128_CAS_CPL_SUPP_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_NO_RO_EN_PR2PR_PAR_MASK (0x400U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_NO_RO_EN_PR2PR_PAR_SHIFT (10U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_NO_RO_EN_PR2PR_PAR_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_NO_RO_EN_PR2PR_PAR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_NO_RO_EN_PR2PR_PAR_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_NO_RO_EN_PR2PR_PAR_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_0_MASK (0x1000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_0_SHIFT (12U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_0_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_0_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_0_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_1_MASK (0x2000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_1_SHIFT (13U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_1_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_1_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP_TPH_CMPLT_SUPPORT_1_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_LN_SYS_CLS_MASK (0xC000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_LN_SYS_CLS_SHIFT (14U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_LN_SYS_CLS_WIDTH (2U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_LN_SYS_CLS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_LN_SYS_CLS_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_LN_SYS_CLS_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_COMP_SUPPORT_MASK (0x10000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_COMP_SUPPORT_SHIFT (16U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_COMP_SUPPORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_COMP_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_COMP_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_COMP_SUPPORT_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_REQ_SUPPORT_MASK (0x20000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_REQ_SUPPORT_SHIFT (17U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_REQ_SUPPORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_REQ_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_REQ_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_PCIE_CAP2_10_BIT_TAG_REQ_SUPPORT_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_RSVDP_24_MASK (0x7F000000U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_RSVDP_24_SHIFT (24U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_RSVDP_24_WIDTH (7U)
#define SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_RSVDP_24_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CAPABILITIES2_REG_RSVDP_24_MASK)
/*! @} */

/*! @name DEVICE_CONTROL2_DEVICE_STATUS2_REG - Device Control 2 and Status 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_VALUE_MASK (0xFU)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_VALUE_SHIFT (0U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_VALUE_WIDTH (4U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_VALUE_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_VALUE_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_MASK (0x10U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SHIFT (4U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_CPL_TIMEOUT_DISABLE_MASK)

#define SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_CS_MASK (0x20U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_CS_SHIFT (5U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_CS_WIDTH (1U)
#define SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_CS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_CS_SHIFT)) & SerDes_EP_PCIe_1_DEVICE_CONTROL2_DEVICE_STATUS2_REG_PCIE_CAP_ARI_FORWARD_SUPPORT_CS_MASK)
/*! @} */

/*! @name LINK_CAPABILITIES2_REG - Link Capabilities 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_0_MASK (0x1U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_0_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_0_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_0_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_PCIE_CAP_SUPPORT_LINK_SPEED_VECTOR_MASK (0xFEU)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_PCIE_CAP_SUPPORT_LINK_SPEED_VECTOR_SHIFT (1U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_PCIE_CAP_SUPPORT_LINK_SPEED_VECTOR_WIDTH (7U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_PCIE_CAP_SUPPORT_LINK_SPEED_VECTOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_PCIE_CAP_SUPPORT_LINK_SPEED_VECTOR_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_PCIE_CAP_SUPPORT_LINK_SPEED_VECTOR_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_PCIE_CAP_CROSS_LINK_SUPPORT_MASK (0x100U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_PCIE_CAP_CROSS_LINK_SUPPORT_SHIFT (8U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_PCIE_CAP_CROSS_LINK_SUPPORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_PCIE_CAP_CROSS_LINK_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_PCIE_CAP_CROSS_LINK_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_PCIE_CAP_CROSS_LINK_SUPPORT_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_9_MASK (0x7FFE00U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_9_SHIFT (9U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_9_WIDTH (14U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_9(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_9_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_9_MASK)

#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_25_MASK (0x7E000000U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_25_SHIFT (25U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_25_WIDTH (6U)
#define SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_25(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_25_SHIFT)) & SerDes_EP_PCIe_1_LINK_CAPABILITIES2_REG_RSVDP_25_MASK)
/*! @} */

/*! @name LINK_CONTROL2_LINK_STATUS2_REG - Link Control 2 and Status 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TARGET_LINK_SPEED_MASK (0xFU)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TARGET_LINK_SPEED_SHIFT (0U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TARGET_LINK_SPEED_WIDTH (4U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TARGET_LINK_SPEED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TARGET_LINK_SPEED_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TARGET_LINK_SPEED_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_COMPLIANCE_MASK (0x10U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_COMPLIANCE_SHIFT (4U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_COMPLIANCE_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_COMPLIANCE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_COMPLIANCE_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_COMPLIANCE_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_HW_AUTO_SPEED_DISABLE_MASK (0x20U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_HW_AUTO_SPEED_DISABLE_SHIFT (5U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_HW_AUTO_SPEED_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_HW_AUTO_SPEED_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_HW_AUTO_SPEED_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_HW_AUTO_SPEED_DISABLE_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_SEL_DEEMPHASIS_MASK (0x40U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_SEL_DEEMPHASIS_SHIFT (6U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_SEL_DEEMPHASIS_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_SEL_DEEMPHASIS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_SEL_DEEMPHASIS_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_SEL_DEEMPHASIS_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TX_MARGIN_MASK (0x380U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TX_MARGIN_SHIFT (7U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TX_MARGIN_WIDTH (3U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TX_MARGIN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TX_MARGIN_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_TX_MARGIN_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_MODIFIED_COMPLIANCE_MASK (0x400U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_MODIFIED_COMPLIANCE_SHIFT (10U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_MODIFIED_COMPLIANCE_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_MODIFIED_COMPLIANCE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_MODIFIED_COMPLIANCE_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_ENTER_MODIFIED_COMPLIANCE_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_SOS_MASK (0x800U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_SOS_SHIFT (11U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_SOS_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_SOS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_SOS_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_SOS_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_PRESET_MASK (0xF000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_PRESET_SHIFT (12U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_PRESET_WIDTH (4U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_PRESET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_PRESET_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_COMPLIANCE_PRESET_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_CURR_DEEMPHASIS_MASK (0x10000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_CURR_DEEMPHASIS_SHIFT (16U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_CURR_DEEMPHASIS_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_CURR_DEEMPHASIS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_CURR_DEEMPHASIS_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_CURR_DEEMPHASIS_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_MASK (0x20000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_SHIFT (17U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P1_MASK (0x40000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P1_SHIFT (18U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P1_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P1_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P1_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P2_MASK (0x80000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P2_SHIFT (19U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P2_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P2_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P2_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P3_MASK (0x100000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P3_SHIFT (20U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P3_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P3_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_EQ_CPL_P3_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_LINK_EQ_REQ_MASK (0x200000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_LINK_EQ_REQ_SHIFT (21U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_LINK_EQ_REQ_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_LINK_EQ_REQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_LINK_EQ_REQ_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_PCIE_CAP_LINK_EQ_REQ_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_RSVDP_26_MASK (0xC000000U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_RSVDP_26_SHIFT (26U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_RSVDP_26_WIDTH (2U)
#define SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_RSVDP_26(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_RSVDP_26_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL2_LINK_STATUS2_REG_RSVDP_26_MASK)
/*! @} */

/*! @name PCI_MSIX_CAP_ID_NEXT_CTRL_REG - MSI-X Capability ID, Next Pointer, Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_ID_MASK (0xFFU)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_ID_WIDTH (8U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_ID_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_ID_MASK)

#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_NEXT_OFFSET_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_NEXT_OFFSET_SHIFT (8U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_NEXT_OFFSET_WIDTH (8U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_NEXT_OFFSET_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_CAP_NEXT_OFFSET_MASK)

#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_MASK (0x7FF0000U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_SHIFT (16U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_WIDTH (11U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_MASK)

#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_RSVDP_27_MASK (0x38000000U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_RSVDP_27_SHIFT (27U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_RSVDP_27_WIDTH (3U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_RSVDP_27(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_RSVDP_27_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_RSVDP_27_MASK)

#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_FUNCTION_MASK_MASK (0x40000000U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_FUNCTION_MASK_SHIFT (30U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_FUNCTION_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_FUNCTION_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_FUNCTION_MASK_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_FUNCTION_MASK_MASK)

#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_ENABLE_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_ENABLE_SHIFT (31U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_ENABLE_MASK)
/*! @} */

/*! @name MSIX_TABLE_OFFSET_REG - MSI-X Table Offset and BIR Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_MASK (0x7U)
#define SerDes_EP_PCIe_1_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_SHIFT (0U)
#define SerDes_EP_PCIe_1_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_WIDTH (3U)
#define SerDes_EP_PCIe_1_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_SHIFT)) & SerDes_EP_PCIe_1_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_MASK)

#define SerDes_EP_PCIe_1_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_MASK (0xFFFFFFF8U)
#define SerDes_EP_PCIe_1_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_SHIFT (3U)
#define SerDes_EP_PCIe_1_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_WIDTH (29U)
#define SerDes_EP_PCIe_1_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_SHIFT)) & SerDes_EP_PCIe_1_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_MASK)
/*! @} */

/*! @name MSIX_PBA_OFFSET_REG - MSI-X PBA Offset and BIR Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_BIR_MASK (0x7U)
#define SerDes_EP_PCIe_1_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_BIR_SHIFT (0U)
#define SerDes_EP_PCIe_1_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_BIR_WIDTH (3U)
#define SerDes_EP_PCIe_1_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_BIR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_BIR_SHIFT)) & SerDes_EP_PCIe_1_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_BIR_MASK)

#define SerDes_EP_PCIe_1_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_MASK (0xFFFFFFF8U)
#define SerDes_EP_PCIe_1_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_SHIFT (3U)
#define SerDes_EP_PCIe_1_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_WIDTH (29U)
#define SerDes_EP_PCIe_1_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_SHIFT)) & SerDes_EP_PCIe_1_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_MASK)
/*! @} */

/*! @name AER_EXT_CAP_HDR_OFF - Advanced Error Reporting Extended Capability Header. */
/*! @{ */

#define SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_CAP_ID_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_CAP_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_CAP_ID_WIDTH (16U)
#define SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_CAP_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_CAP_ID_SHIFT)) & SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_CAP_ID_MASK)

#define SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_CAP_VERSION_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_CAP_VERSION_SHIFT (16U)
#define SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_CAP_VERSION_WIDTH (4U)
#define SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_CAP_VERSION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_CAP_VERSION_SHIFT)) & SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_CAP_VERSION_MASK)

#define SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_NEXT_OFFSET_MASK (0xFFF00000U)
#define SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_NEXT_OFFSET_SHIFT (20U)
#define SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_NEXT_OFFSET_WIDTH (12U)
#define SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_NEXT_OFFSET_SHIFT)) & SerDes_EP_PCIe_1_AER_EXT_CAP_HDR_OFF_NEXT_OFFSET_MASK)
/*! @} */

/*! @name UNCORR_ERR_STATUS_OFF - Uncorrectable Error Status Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_0_MASK (0xFU)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_0_WIDTH (4U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_0_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_0_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_DL_PROTOCOL_ERR_STATUS_MASK (0x10U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_DL_PROTOCOL_ERR_STATUS_SHIFT (4U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_DL_PROTOCOL_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_DL_PROTOCOL_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_DL_PROTOCOL_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_DL_PROTOCOL_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_SURPRISE_DOWN_ERR_STATUS_MASK (0x20U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_SURPRISE_DOWN_ERR_STATUS_SHIFT (5U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_SURPRISE_DOWN_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_SURPRISE_DOWN_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_SURPRISE_DOWN_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_SURPRISE_DOWN_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_6_MASK (0xFC0U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_6_SHIFT (6U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_6_WIDTH (6U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_6(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_6_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_6_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_POIS_TLP_ERR_STATUS_MASK (0x1000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_POIS_TLP_ERR_STATUS_SHIFT (12U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_POIS_TLP_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_POIS_TLP_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_POIS_TLP_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_POIS_TLP_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_FC_PROTOCOL_ERR_STATUS_MASK (0x2000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_FC_PROTOCOL_ERR_STATUS_SHIFT (13U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_FC_PROTOCOL_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_FC_PROTOCOL_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_FC_PROTOCOL_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_FC_PROTOCOL_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_CMPLT_TIMEOUT_ERR_STATUS_MASK (0x4000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_CMPLT_TIMEOUT_ERR_STATUS_SHIFT (14U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_CMPLT_TIMEOUT_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_CMPLT_TIMEOUT_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_CMPLT_TIMEOUT_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_CMPLT_TIMEOUT_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_CMPLT_ABORT_ERR_STATUS_MASK (0x8000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_CMPLT_ABORT_ERR_STATUS_SHIFT (15U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_CMPLT_ABORT_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_CMPLT_ABORT_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_CMPLT_ABORT_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_CMPLT_ABORT_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_UNEXP_CMPLT_ERR_STATUS_MASK (0x10000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_UNEXP_CMPLT_ERR_STATUS_SHIFT (16U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_UNEXP_CMPLT_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_UNEXP_CMPLT_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_UNEXP_CMPLT_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_UNEXP_CMPLT_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_REC_OVERFLOW_ERR_STATUS_MASK (0x20000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_REC_OVERFLOW_ERR_STATUS_SHIFT (17U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_REC_OVERFLOW_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_REC_OVERFLOW_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_REC_OVERFLOW_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_REC_OVERFLOW_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_MALF_TLP_ERR_STATUS_MASK (0x40000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_MALF_TLP_ERR_STATUS_SHIFT (18U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_MALF_TLP_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_MALF_TLP_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_MALF_TLP_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_MALF_TLP_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_ECRC_ERR_STATUS_MASK (0x80000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_ECRC_ERR_STATUS_SHIFT (19U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_ECRC_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_ECRC_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_ECRC_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_ECRC_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_UNSUPPORTED_REQ_ERR_STATUS_MASK (0x100000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_UNSUPPORTED_REQ_ERR_STATUS_SHIFT (20U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_UNSUPPORTED_REQ_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_UNSUPPORTED_REQ_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_UNSUPPORTED_REQ_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_UNSUPPORTED_REQ_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_INTERNAL_ERR_STATUS_MASK (0x400000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_INTERNAL_ERR_STATUS_SHIFT (22U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_INTERNAL_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_INTERNAL_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_INTERNAL_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_INTERNAL_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_23_MASK (0x800000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_23_SHIFT (23U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_23_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_23(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_23_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_23_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_27_MASK (0xF8000000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_27_SHIFT (27U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_27_WIDTH (5U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_27(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_27_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_STATUS_OFF_RSVDP_27_MASK)
/*! @} */

/*! @name UNCORR_ERR_MASK_OFF - Uncorrectable Error Mask Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_0_MASK (0xFU)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_0_WIDTH (4U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_0_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_0_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_DL_PROTOCOL_ERR_MASK_MASK (0x10U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_DL_PROTOCOL_ERR_MASK_SHIFT (4U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_DL_PROTOCOL_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_DL_PROTOCOL_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_DL_PROTOCOL_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_DL_PROTOCOL_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_SURPRISE_DOWN_ERR_MASK_MASK (0x20U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_SURPRISE_DOWN_ERR_MASK_SHIFT (5U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_SURPRISE_DOWN_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_SURPRISE_DOWN_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_SURPRISE_DOWN_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_SURPRISE_DOWN_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_6_MASK (0xFC0U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_6_SHIFT (6U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_6_WIDTH (6U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_6(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_6_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_6_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_POIS_TLP_ERR_MASK_MASK (0x1000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_POIS_TLP_ERR_MASK_SHIFT (12U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_POIS_TLP_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_POIS_TLP_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_POIS_TLP_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_POIS_TLP_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_FC_PROTOCOL_ERR_MASK_MASK (0x2000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_FC_PROTOCOL_ERR_MASK_SHIFT (13U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_FC_PROTOCOL_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_FC_PROTOCOL_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_FC_PROTOCOL_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_FC_PROTOCOL_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_CMPLT_TIMEOUT_ERR_MASK_MASK (0x4000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_CMPLT_TIMEOUT_ERR_MASK_SHIFT (14U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_CMPLT_TIMEOUT_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_CMPLT_TIMEOUT_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_CMPLT_TIMEOUT_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_CMPLT_TIMEOUT_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_CMPLT_ABORT_ERR_MASK_MASK (0x8000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_CMPLT_ABORT_ERR_MASK_SHIFT (15U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_CMPLT_ABORT_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_CMPLT_ABORT_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_CMPLT_ABORT_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_CMPLT_ABORT_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_UNEXP_CMPLT_ERR_MASK_MASK (0x10000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_UNEXP_CMPLT_ERR_MASK_SHIFT (16U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_UNEXP_CMPLT_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_UNEXP_CMPLT_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_UNEXP_CMPLT_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_UNEXP_CMPLT_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_REC_OVERFLOW_ERR_MASK_MASK (0x20000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_REC_OVERFLOW_ERR_MASK_SHIFT (17U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_REC_OVERFLOW_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_REC_OVERFLOW_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_REC_OVERFLOW_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_REC_OVERFLOW_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_MALF_TLP_ERR_MASK_MASK (0x40000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_MALF_TLP_ERR_MASK_SHIFT (18U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_MALF_TLP_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_MALF_TLP_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_MALF_TLP_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_MALF_TLP_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_ECRC_ERR_MASK_MASK (0x80000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_ECRC_ERR_MASK_SHIFT (19U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_ECRC_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_ECRC_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_ECRC_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_ECRC_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_UNSUPPORTED_REQ_ERR_MASK_MASK (0x100000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_UNSUPPORTED_REQ_ERR_MASK_SHIFT (20U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_UNSUPPORTED_REQ_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_UNSUPPORTED_REQ_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_UNSUPPORTED_REQ_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_UNSUPPORTED_REQ_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_INTERNAL_ERR_MASK_MASK (0x400000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_INTERNAL_ERR_MASK_SHIFT (22U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_INTERNAL_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_INTERNAL_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_INTERNAL_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_INTERNAL_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_23_MASK (0x800000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_23_SHIFT (23U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_23_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_23(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_23_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_23_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_ATOMIC_EGRESS_BLOCKED_ERR_MASK_MASK (0x1000000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_ATOMIC_EGRESS_BLOCKED_ERR_MASK_SHIFT (24U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_ATOMIC_EGRESS_BLOCKED_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_ATOMIC_EGRESS_BLOCKED_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_ATOMIC_EGRESS_BLOCKED_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_ATOMIC_EGRESS_BLOCKED_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_TLP_PRFX_BLOCKED_ERR_MASK_MASK (0x2000000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_TLP_PRFX_BLOCKED_ERR_MASK_SHIFT (25U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_TLP_PRFX_BLOCKED_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_TLP_PRFX_BLOCKED_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_TLP_PRFX_BLOCKED_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_TLP_PRFX_BLOCKED_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_26_MASK (0xFC000000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_26_SHIFT (26U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_26_WIDTH (6U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_26(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_26_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_MASK_OFF_RSVDP_26_MASK)
/*! @} */

/*! @name UNCORR_ERR_SEV_OFF - Uncorrectable Error Severity Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_0_MASK (0xFU)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_0_WIDTH (4U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_0_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_0_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_DL_PROTOCOL_ERR_SEVERITY_MASK (0x10U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_DL_PROTOCOL_ERR_SEVERITY_SHIFT (4U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_DL_PROTOCOL_ERR_SEVERITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_DL_PROTOCOL_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_DL_PROTOCOL_ERR_SEVERITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_DL_PROTOCOL_ERR_SEVERITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_SURPRISE_DOWN_ERR_SVRITY_MASK (0x20U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_SURPRISE_DOWN_ERR_SVRITY_SHIFT (5U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_SURPRISE_DOWN_ERR_SVRITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_SURPRISE_DOWN_ERR_SVRITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_SURPRISE_DOWN_ERR_SVRITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_SURPRISE_DOWN_ERR_SVRITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_6_MASK (0xFC0U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_6_SHIFT (6U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_6_WIDTH (6U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_6(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_6_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_6_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_POIS_TLP_ERR_SEVERITY_MASK (0x1000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_POIS_TLP_ERR_SEVERITY_SHIFT (12U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_POIS_TLP_ERR_SEVERITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_POIS_TLP_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_POIS_TLP_ERR_SEVERITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_POIS_TLP_ERR_SEVERITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_FC_PROTOCOL_ERR_SEVERITY_MASK (0x2000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_FC_PROTOCOL_ERR_SEVERITY_SHIFT (13U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_FC_PROTOCOL_ERR_SEVERITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_FC_PROTOCOL_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_FC_PROTOCOL_ERR_SEVERITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_FC_PROTOCOL_ERR_SEVERITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_CMPLT_TIMEOUT_ERR_SEVERITY_MASK (0x4000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_CMPLT_TIMEOUT_ERR_SEVERITY_SHIFT (14U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_CMPLT_TIMEOUT_ERR_SEVERITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_CMPLT_TIMEOUT_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_CMPLT_TIMEOUT_ERR_SEVERITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_CMPLT_TIMEOUT_ERR_SEVERITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_CMPLT_ABORT_ERR_SEVERITY_MASK (0x8000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_CMPLT_ABORT_ERR_SEVERITY_SHIFT (15U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_CMPLT_ABORT_ERR_SEVERITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_CMPLT_ABORT_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_CMPLT_ABORT_ERR_SEVERITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_CMPLT_ABORT_ERR_SEVERITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_UNEXP_CMPLT_ERR_SEVERITY_MASK (0x10000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_UNEXP_CMPLT_ERR_SEVERITY_SHIFT (16U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_UNEXP_CMPLT_ERR_SEVERITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_UNEXP_CMPLT_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_UNEXP_CMPLT_ERR_SEVERITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_UNEXP_CMPLT_ERR_SEVERITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_REC_OVERFLOW_ERR_SEVERITY_MASK (0x20000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_REC_OVERFLOW_ERR_SEVERITY_SHIFT (17U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_REC_OVERFLOW_ERR_SEVERITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_REC_OVERFLOW_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_REC_OVERFLOW_ERR_SEVERITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_REC_OVERFLOW_ERR_SEVERITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_MALF_TLP_ERR_SEVERITY_MASK (0x40000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_MALF_TLP_ERR_SEVERITY_SHIFT (18U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_MALF_TLP_ERR_SEVERITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_MALF_TLP_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_MALF_TLP_ERR_SEVERITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_MALF_TLP_ERR_SEVERITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_ECRC_ERR_SEVERITY_MASK (0x80000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_ECRC_ERR_SEVERITY_SHIFT (19U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_ECRC_ERR_SEVERITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_ECRC_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_ECRC_ERR_SEVERITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_ECRC_ERR_SEVERITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_UNSUPPORTED_REQ_ERR_SEVERITY_MASK (0x100000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_UNSUPPORTED_REQ_ERR_SEVERITY_SHIFT (20U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_UNSUPPORTED_REQ_ERR_SEVERITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_UNSUPPORTED_REQ_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_UNSUPPORTED_REQ_ERR_SEVERITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_UNSUPPORTED_REQ_ERR_SEVERITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_INTERNAL_ERR_SEVERITY_MASK (0x400000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_INTERNAL_ERR_SEVERITY_SHIFT (22U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_INTERNAL_ERR_SEVERITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_INTERNAL_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_INTERNAL_ERR_SEVERITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_INTERNAL_ERR_SEVERITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_23_MASK (0x800000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_23_SHIFT (23U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_23_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_23(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_23_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_23_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_TLP_PRFX_BLOCKED_ERR_SEVERITY_MASK (0x2000000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_TLP_PRFX_BLOCKED_ERR_SEVERITY_SHIFT (25U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_TLP_PRFX_BLOCKED_ERR_SEVERITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_TLP_PRFX_BLOCKED_ERR_SEVERITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_TLP_PRFX_BLOCKED_ERR_SEVERITY_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_TLP_PRFX_BLOCKED_ERR_SEVERITY_MASK)

#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_27_MASK (0xF8000000U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_27_SHIFT (27U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_27_WIDTH (5U)
#define SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_27(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_27_SHIFT)) & SerDes_EP_PCIe_1_UNCORR_ERR_SEV_OFF_RSVDP_27_MASK)
/*! @} */

/*! @name CORR_ERR_STATUS_OFF - Correctable Error Status Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RX_ERR_STATUS_MASK (0x1U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RX_ERR_STATUS_SHIFT (0U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RX_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RX_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RX_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RX_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_1_MASK (0x3EU)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_1_WIDTH (5U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_1_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_1_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_BAD_TLP_STATUS_MASK (0x40U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_BAD_TLP_STATUS_SHIFT (6U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_BAD_TLP_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_BAD_TLP_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_BAD_TLP_STATUS_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_BAD_TLP_STATUS_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_BAD_DLLP_STATUS_MASK (0x80U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_BAD_DLLP_STATUS_SHIFT (7U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_BAD_DLLP_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_BAD_DLLP_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_BAD_DLLP_STATUS_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_BAD_DLLP_STATUS_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_REPLAY_NO_ROLEOVER_STATUS_MASK (0x100U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_REPLAY_NO_ROLEOVER_STATUS_SHIFT (8U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_REPLAY_NO_ROLEOVER_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_REPLAY_NO_ROLEOVER_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_REPLAY_NO_ROLEOVER_STATUS_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_REPLAY_NO_ROLEOVER_STATUS_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_9_MASK (0xE00U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_9_SHIFT (9U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_9_WIDTH (3U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_9(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_9_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_9_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RPL_TIMER_TIMEOUT_STATUS_MASK (0x1000U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RPL_TIMER_TIMEOUT_STATUS_SHIFT (12U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RPL_TIMER_TIMEOUT_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RPL_TIMER_TIMEOUT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RPL_TIMER_TIMEOUT_STATUS_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RPL_TIMER_TIMEOUT_STATUS_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_ADVISORY_NON_FATAL_ERR_STATUS_MASK (0x2000U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_ADVISORY_NON_FATAL_ERR_STATUS_SHIFT (13U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_ADVISORY_NON_FATAL_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_ADVISORY_NON_FATAL_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_ADVISORY_NON_FATAL_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_ADVISORY_NON_FATAL_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_CORRECTED_INT_ERR_STATUS_MASK (0x4000U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_CORRECTED_INT_ERR_STATUS_SHIFT (14U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_CORRECTED_INT_ERR_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_CORRECTED_INT_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_CORRECTED_INT_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_CORRECTED_INT_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_HEADER_LOG_OVERFLOW_STATUS_MASK (0x8000U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_HEADER_LOG_OVERFLOW_STATUS_SHIFT (15U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_HEADER_LOG_OVERFLOW_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_HEADER_LOG_OVERFLOW_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_HEADER_LOG_OVERFLOW_STATUS_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_HEADER_LOG_OVERFLOW_STATUS_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_16_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_16_SHIFT (16U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_16_WIDTH (16U)
#define SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_16(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_16_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_STATUS_OFF_RSVDP_16_MASK)
/*! @} */

/*! @name CORR_ERR_MASK_OFF - Correctable Error Mask Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RX_ERR_MASK_MASK (0x1U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RX_ERR_MASK_SHIFT (0U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RX_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RX_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RX_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RX_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_1_MASK (0x3EU)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_1_WIDTH (5U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_1_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_1_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_BAD_TLP_MASK_MASK (0x40U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_BAD_TLP_MASK_SHIFT (6U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_BAD_TLP_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_BAD_TLP_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_BAD_TLP_MASK_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_BAD_TLP_MASK_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_BAD_DLLP_MASK_MASK (0x80U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_BAD_DLLP_MASK_SHIFT (7U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_BAD_DLLP_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_BAD_DLLP_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_BAD_DLLP_MASK_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_BAD_DLLP_MASK_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_REPLAY_NO_ROLEOVER_MASK_MASK (0x100U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_REPLAY_NO_ROLEOVER_MASK_SHIFT (8U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_REPLAY_NO_ROLEOVER_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_REPLAY_NO_ROLEOVER_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_REPLAY_NO_ROLEOVER_MASK_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_REPLAY_NO_ROLEOVER_MASK_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_9_MASK (0xE00U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_9_SHIFT (9U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_9_WIDTH (3U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_9(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_9_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_9_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RPL_TIMER_TIMEOUT_MASK_MASK (0x1000U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RPL_TIMER_TIMEOUT_MASK_SHIFT (12U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RPL_TIMER_TIMEOUT_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RPL_TIMER_TIMEOUT_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RPL_TIMER_TIMEOUT_MASK_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RPL_TIMER_TIMEOUT_MASK_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_ADVISORY_NON_FATAL_ERR_MASK_MASK (0x2000U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_ADVISORY_NON_FATAL_ERR_MASK_SHIFT (13U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_ADVISORY_NON_FATAL_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_ADVISORY_NON_FATAL_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_ADVISORY_NON_FATAL_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_ADVISORY_NON_FATAL_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_CORRECTED_INT_ERR_MASK_MASK (0x4000U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_CORRECTED_INT_ERR_MASK_SHIFT (14U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_CORRECTED_INT_ERR_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_CORRECTED_INT_ERR_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_CORRECTED_INT_ERR_MASK_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_CORRECTED_INT_ERR_MASK_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_HEADER_LOG_OVERFLOW_MASK_MASK (0x8000U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_HEADER_LOG_OVERFLOW_MASK_SHIFT (15U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_HEADER_LOG_OVERFLOW_MASK_WIDTH (1U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_HEADER_LOG_OVERFLOW_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_HEADER_LOG_OVERFLOW_MASK_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_HEADER_LOG_OVERFLOW_MASK_MASK)

#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_16_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_16_SHIFT (16U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_16_WIDTH (16U)
#define SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_16(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_16_SHIFT)) & SerDes_EP_PCIe_1_CORR_ERR_MASK_OFF_RSVDP_16_MASK)
/*! @} */

/*! @name ADV_ERR_CAP_CTRL_OFF - Advanced Error Capabilities and Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_FIRST_ERR_POINTER_MASK (0x1FU)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_FIRST_ERR_POINTER_SHIFT (0U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_FIRST_ERR_POINTER_WIDTH (5U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_FIRST_ERR_POINTER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_FIRST_ERR_POINTER_SHIFT)) & SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_FIRST_ERR_POINTER_MASK)

#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_CAP_MASK (0x20U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_CAP_SHIFT (5U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_CAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_CAP_SHIFT)) & SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_CAP_MASK)

#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_EN_MASK (0x40U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_EN_SHIFT (6U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_EN_SHIFT)) & SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_GEN_EN_MASK)

#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_CAP_MASK (0x80U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_CAP_SHIFT (7U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_CAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_CAP_SHIFT)) & SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_CAP_MASK)

#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_EN_MASK (0x100U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_EN_SHIFT (8U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_EN_SHIFT)) & SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_ECRC_CHECK_EN_MASK)

#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_CAP_MASK (0x200U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_CAP_SHIFT (9U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_CAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_CAP_SHIFT)) & SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_CAP_MASK)

#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_EN_MASK (0x400U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_EN_SHIFT (10U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_EN_SHIFT)) & SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_MULTIPLE_HEADER_EN_MASK)

#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_CTO_PRFX_HDR_LOG_CAP_MASK (0x1000U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_CTO_PRFX_HDR_LOG_CAP_SHIFT (12U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_CTO_PRFX_HDR_LOG_CAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_CTO_PRFX_HDR_LOG_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_CTO_PRFX_HDR_LOG_CAP_SHIFT)) & SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_CTO_PRFX_HDR_LOG_CAP_MASK)

#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_RSVDP_13_MASK (0xFFFFE000U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_RSVDP_13_SHIFT (13U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_RSVDP_13_WIDTH (19U)
#define SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_RSVDP_13(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_RSVDP_13_SHIFT)) & SerDes_EP_PCIe_1_ADV_ERR_CAP_CTRL_OFF_RSVDP_13_MASK)
/*! @} */

/*! @name HDR_LOG_0_OFF - Header Log Register 0. */
/*! @{ */

#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_FIRST_BYTE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_FIRST_BYTE_SHIFT (0U)
#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_FIRST_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_FIRST_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_FIRST_BYTE_MASK)

#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_SECOND_BYTE_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_SECOND_BYTE_SHIFT (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_SECOND_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_SECOND_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_SECOND_BYTE_MASK)

#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_THIRD_BYTE_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_THIRD_BYTE_SHIFT (16U)
#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_THIRD_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_THIRD_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_THIRD_BYTE_MASK)

#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_FOURTH_BYTE_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_FOURTH_BYTE_SHIFT (24U)
#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_FOURTH_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_FOURTH_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_0_OFF_FIRST_DWORD_FOURTH_BYTE_MASK)
/*! @} */

/*! @name HDR_LOG_1_OFF - Header Log Register 1. */
/*! @{ */

#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_FIRST_BYTE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_FIRST_BYTE_SHIFT (0U)
#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_FIRST_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_FIRST_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_FIRST_BYTE_MASK)

#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_SECOND_BYTE_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_SECOND_BYTE_SHIFT (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_SECOND_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_SECOND_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_SECOND_BYTE_MASK)

#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_THIRD_BYTE_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_THIRD_BYTE_SHIFT (16U)
#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_THIRD_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_THIRD_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_THIRD_BYTE_MASK)

#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_FOURTH_BYTE_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_FOURTH_BYTE_SHIFT (24U)
#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_FOURTH_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_FOURTH_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_1_OFF_SECOND_DWORD_FOURTH_BYTE_MASK)
/*! @} */

/*! @name HDR_LOG_2_OFF - Header Log Register 2. */
/*! @{ */

#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_FIRST_BYTE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_FIRST_BYTE_SHIFT (0U)
#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_FIRST_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_FIRST_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_FIRST_BYTE_MASK)

#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_SECOND_BYTE_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_SECOND_BYTE_SHIFT (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_SECOND_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_SECOND_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_SECOND_BYTE_MASK)

#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_THIRD_BYTE_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_THIRD_BYTE_SHIFT (16U)
#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_THIRD_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_THIRD_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_THIRD_BYTE_MASK)

#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_FOURTH_BYTE_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_FOURTH_BYTE_SHIFT (24U)
#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_FOURTH_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_FOURTH_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_2_OFF_THIRD_DWORD_FOURTH_BYTE_MASK)
/*! @} */

/*! @name HDR_LOG_3_OFF - Header Log Register 3. */
/*! @{ */

#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_FIRST_BYTE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_FIRST_BYTE_SHIFT (0U)
#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_FIRST_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_FIRST_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_FIRST_BYTE_MASK)

#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_SECOND_BYTE_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_SECOND_BYTE_SHIFT (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_SECOND_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_SECOND_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_SECOND_BYTE_MASK)

#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_THIRD_BYTE_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_THIRD_BYTE_SHIFT (16U)
#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_THIRD_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_THIRD_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_THIRD_BYTE_MASK)

#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_FOURTH_BYTE_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_FOURTH_BYTE_SHIFT (24U)
#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_FOURTH_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_FOURTH_BYTE_SHIFT)) & SerDes_EP_PCIe_1_HDR_LOG_3_OFF_FOURTH_DWORD_FOURTH_BYTE_MASK)
/*! @} */

/*! @name TLP_PREFIX_LOG_1_OFF - TLP Prefix Log Register 1. */
/*! @{ */

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FIRST_BYTE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FIRST_BYTE_SHIFT (0U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FIRST_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FIRST_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FIRST_BYTE_MASK)

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_SECOND_BYTE_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_SECOND_BYTE_SHIFT (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_SECOND_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_SECOND_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_SECOND_BYTE_MASK)

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_THIRD_BYTE_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_THIRD_BYTE_SHIFT (16U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_THIRD_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_THIRD_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_THIRD_BYTE_MASK)

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FOURTH_BYTE_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FOURTH_BYTE_SHIFT (24U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FOURTH_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FOURTH_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_1_OFF_CFG_TLP_PFX_LOG_1_FOURTH_BYTE_MASK)
/*! @} */

/*! @name TLP_PREFIX_LOG_2_OFF - TLP Prefix Log Register 2. */
/*! @{ */

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FIRST_BYTE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FIRST_BYTE_SHIFT (0U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FIRST_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FIRST_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FIRST_BYTE_MASK)

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_SECOND_BYTE_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_SECOND_BYTE_SHIFT (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_SECOND_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_SECOND_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_SECOND_BYTE_MASK)

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_THIRD_BYTE_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_THIRD_BYTE_SHIFT (16U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_THIRD_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_THIRD_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_THIRD_BYTE_MASK)

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FOURTH_BYTE_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FOURTH_BYTE_SHIFT (24U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FOURTH_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FOURTH_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_2_OFF_CFG_TLP_PFX_LOG_2_FOURTH_BYTE_MASK)
/*! @} */

/*! @name TLP_PREFIX_LOG_3_OFF - TLP Prefix Log Register 3. */
/*! @{ */

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FIRST_BYTE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FIRST_BYTE_SHIFT (0U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FIRST_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FIRST_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FIRST_BYTE_MASK)

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_SECOND_BYTE_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_SECOND_BYTE_SHIFT (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_SECOND_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_SECOND_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_SECOND_BYTE_MASK)

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_THIRD_BYTE_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_THIRD_BYTE_SHIFT (16U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_THIRD_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_THIRD_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_THIRD_BYTE_MASK)

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FOURTH_BYTE_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FOURTH_BYTE_SHIFT (24U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FOURTH_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FOURTH_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_3_OFF_CFG_TLP_PFX_LOG_3_FOURTH_BYTE_MASK)
/*! @} */

/*! @name TLP_PREFIX_LOG_4_OFF - TLP Prefix Log Register 4. */
/*! @{ */

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FIRST_BYTE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FIRST_BYTE_SHIFT (0U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FIRST_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FIRST_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FIRST_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FIRST_BYTE_MASK)

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_SECOND_BYTE_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_SECOND_BYTE_SHIFT (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_SECOND_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_SECOND_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_SECOND_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_SECOND_BYTE_MASK)

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_THIRD_BYTE_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_THIRD_BYTE_SHIFT (16U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_THIRD_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_THIRD_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_THIRD_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_THIRD_BYTE_MASK)

#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FOURTH_BYTE_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FOURTH_BYTE_SHIFT (24U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FOURTH_BYTE_WIDTH (8U)
#define SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FOURTH_BYTE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FOURTH_BYTE_SHIFT)) & SerDes_EP_PCIe_1_TLP_PREFIX_LOG_4_OFF_CFG_TLP_PFX_LOG_4_FOURTH_BYTE_MASK)
/*! @} */

/*! @name SPCIE_CAP_HEADER_REG - SPCIE Capability Header. */
/*! @{ */

#define SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_EXTENDED_CAP_ID_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_EXTENDED_CAP_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_EXTENDED_CAP_ID_WIDTH (16U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_EXTENDED_CAP_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_EXTENDED_CAP_ID_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_EXTENDED_CAP_ID_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_CAP_VERSION_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_CAP_VERSION_SHIFT (16U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_CAP_VERSION_WIDTH (4U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_CAP_VERSION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_CAP_VERSION_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_CAP_VERSION_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_NEXT_OFFSET_MASK (0xFFF00000U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_NEXT_OFFSET_SHIFT (20U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_NEXT_OFFSET_WIDTH (12U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_NEXT_OFFSET_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_HEADER_REG_NEXT_OFFSET_MASK)
/*! @} */

/*! @name LINK_CONTROL3_REG - Link Control 3 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_LINK_CONTROL3_REG_PERFORM_EQ_MASK (0x1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL3_REG_PERFORM_EQ_SHIFT (0U)
#define SerDes_EP_PCIe_1_LINK_CONTROL3_REG_PERFORM_EQ_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL3_REG_PERFORM_EQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL3_REG_PERFORM_EQ_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL3_REG_PERFORM_EQ_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL3_REG_EQ_REQ_INT_EN_MASK (0x2U)
#define SerDes_EP_PCIe_1_LINK_CONTROL3_REG_EQ_REQ_INT_EN_SHIFT (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL3_REG_EQ_REQ_INT_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_CONTROL3_REG_EQ_REQ_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL3_REG_EQ_REQ_INT_EN_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL3_REG_EQ_REQ_INT_EN_MASK)

#define SerDes_EP_PCIe_1_LINK_CONTROL3_REG_RSVDP_2_MASK (0xFFFFFFFCU)
#define SerDes_EP_PCIe_1_LINK_CONTROL3_REG_RSVDP_2_SHIFT (2U)
#define SerDes_EP_PCIe_1_LINK_CONTROL3_REG_RSVDP_2_WIDTH (30U)
#define SerDes_EP_PCIe_1_LINK_CONTROL3_REG_RSVDP_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_CONTROL3_REG_RSVDP_2_SHIFT)) & SerDes_EP_PCIe_1_LINK_CONTROL3_REG_RSVDP_2_MASK)
/*! @} */

/*! @name LANE_ERR_STATUS_REG - Lane Error Status Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_LANE_ERR_STATUS_REG_LANE_ERR_STATUS_MASK (0x3U)
#define SerDes_EP_PCIe_1_LANE_ERR_STATUS_REG_LANE_ERR_STATUS_SHIFT (0U)
#define SerDes_EP_PCIe_1_LANE_ERR_STATUS_REG_LANE_ERR_STATUS_WIDTH (2U)
#define SerDes_EP_PCIe_1_LANE_ERR_STATUS_REG_LANE_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LANE_ERR_STATUS_REG_LANE_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_LANE_ERR_STATUS_REG_LANE_ERR_STATUS_MASK)

#define SerDes_EP_PCIe_1_LANE_ERR_STATUS_REG_RSVDP_LANE_ERR_STATUS_MASK (0xFFFFFFFCU)
#define SerDes_EP_PCIe_1_LANE_ERR_STATUS_REG_RSVDP_LANE_ERR_STATUS_SHIFT (2U)
#define SerDes_EP_PCIe_1_LANE_ERR_STATUS_REG_RSVDP_LANE_ERR_STATUS_WIDTH (30U)
#define SerDes_EP_PCIe_1_LANE_ERR_STATUS_REG_RSVDP_LANE_ERR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LANE_ERR_STATUS_REG_RSVDP_LANE_ERR_STATUS_SHIFT)) & SerDes_EP_PCIe_1_LANE_ERR_STATUS_REG_RSVDP_LANE_ERR_STATUS_MASK)
/*! @} */

/*! @name SPCIE_CAP_OFF_0CH_REG - Lane Equalization Control Register for lanes 1 and 0. */
/*! @{ */

#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET0_MASK (0xFU)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET0_SHIFT (0U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET0_WIDTH (4U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET0_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET0_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT0_MASK (0x70U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT0_SHIFT (4U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT0_WIDTH (3U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT0_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT0_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_7_MASK (0x80U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_7_SHIFT (7U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_7_WIDTH (1U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_7(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_7_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_7_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET0_MASK (0xF00U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET0_SHIFT (8U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET0_WIDTH (4U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET0_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET0_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT0_MASK (0x7000U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT0_SHIFT (12U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT0_WIDTH (3U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT0_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT0_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_15_MASK (0x8000U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_15_SHIFT (15U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_15_WIDTH (1U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_15(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_15_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_15_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET1_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET1_SHIFT (16U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET1_WIDTH (4U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET1_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_TX_PRESET1_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT1_MASK (0x700000U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT1_SHIFT (20U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT1_WIDTH (3U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT1_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_DSP_RX_PRESET_HINT1_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_23_MASK (0x800000U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_23_SHIFT (23U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_23_WIDTH (1U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_23(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_23_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_23_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET1_MASK (0xF000000U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET1_SHIFT (24U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET1_WIDTH (4U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET1_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_TX_PRESET1_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT1_MASK (0x70000000U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT1_SHIFT (28U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT1_WIDTH (3U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT1_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_USP_RX_PRESET_HINT1_MASK)

#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_31_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_31_SHIFT (31U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_31_WIDTH (1U)
#define SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_31(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_31_SHIFT)) & SerDes_EP_PCIe_1_SPCIE_CAP_OFF_0CH_REG_RSVDP_31_MASK)
/*! @} */

/*! @name RAS_DES_CAP_HEADER_REG - Vendor-Specific Extended Capability Header. */
/*! @{ */

#define SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_EXTENDED_CAP_ID_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_EXTENDED_CAP_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_EXTENDED_CAP_ID_WIDTH (16U)
#define SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_EXTENDED_CAP_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_EXTENDED_CAP_ID_SHIFT)) & SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_EXTENDED_CAP_ID_MASK)

#define SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_CAP_VERSION_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_CAP_VERSION_SHIFT (16U)
#define SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_CAP_VERSION_WIDTH (4U)
#define SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_CAP_VERSION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_CAP_VERSION_SHIFT)) & SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_CAP_VERSION_MASK)

#define SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_NEXT_OFFSET_MASK (0xFFF00000U)
#define SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_NEXT_OFFSET_SHIFT (20U)
#define SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_NEXT_OFFSET_WIDTH (12U)
#define SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_NEXT_OFFSET_SHIFT)) & SerDes_EP_PCIe_1_RAS_DES_CAP_HEADER_REG_NEXT_OFFSET_MASK)
/*! @} */

/*! @name VENDOR_SPECIFIC_HEADER_REG - Vendor-Specific Header. */
/*! @{ */

#define SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_ID_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_ID_WIDTH (16U)
#define SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_ID_SHIFT)) & SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_ID_MASK)

#define SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_REV_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_REV_SHIFT (16U)
#define SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_REV_WIDTH (4U)
#define SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_REV(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_REV_SHIFT)) & SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_REV_MASK)

#define SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_LENGTH_MASK (0xFFF00000U)
#define SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_LENGTH_SHIFT (20U)
#define SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_LENGTH_WIDTH (12U)
#define SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_LENGTH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_LENGTH_SHIFT)) & SerDes_EP_PCIe_1_VENDOR_SPECIFIC_HEADER_REG_VSEC_LENGTH_MASK)
/*! @} */

/*! @name EVENT_COUNTER_CONTROL_REG - Event Counter Control. */
/*! @{ */

#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_CLEAR_MASK (0x3U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_CLEAR_SHIFT (0U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_CLEAR_WIDTH (2U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_CLEAR_SHIFT)) & SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_CLEAR_MASK)

#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_ENABLE_MASK (0x1CU)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_ENABLE_SHIFT (2U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_ENABLE_WIDTH (3U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_ENABLE_MASK)

#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_5_MASK (0x60U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_5_SHIFT (5U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_5_WIDTH (2U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_5_SHIFT)) & SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_5_MASK)

#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_STATUS_MASK (0x80U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_STATUS_SHIFT (7U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_STATUS_SHIFT)) & SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_STATUS_MASK)

#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_LANE_SELECT_MASK (0xF00U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_LANE_SELECT_SHIFT (8U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_LANE_SELECT_WIDTH (4U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_LANE_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_LANE_SELECT_SHIFT)) & SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_LANE_SELECT_MASK)

#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_12_MASK (0xF000U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_12_SHIFT (12U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_12_WIDTH (4U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_12(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_12_SHIFT)) & SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_12_MASK)

#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_EVENT_SELECT_MASK (0xFFF0000U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_EVENT_SELECT_SHIFT (16U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_EVENT_SELECT_WIDTH (12U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_EVENT_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_EVENT_SELECT_SHIFT)) & SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_EVENT_COUNTER_EVENT_SELECT_MASK)

#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_28_MASK (0xF0000000U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_28_SHIFT (28U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_28_WIDTH (4U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_28(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_28_SHIFT)) & SerDes_EP_PCIe_1_EVENT_COUNTER_CONTROL_REG_RSVDP_28_MASK)
/*! @} */

/*! @name EVENT_COUNTER_DATA_REG - Event Counter Data. */
/*! @{ */

#define SerDes_EP_PCIe_1_EVENT_COUNTER_DATA_REG_EVENT_COUNTER_DATA_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_DATA_REG_EVENT_COUNTER_DATA_SHIFT (0U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_DATA_REG_EVENT_COUNTER_DATA_WIDTH (32U)
#define SerDes_EP_PCIe_1_EVENT_COUNTER_DATA_REG_EVENT_COUNTER_DATA(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EVENT_COUNTER_DATA_REG_EVENT_COUNTER_DATA_SHIFT)) & SerDes_EP_PCIe_1_EVENT_COUNTER_DATA_REG_EVENT_COUNTER_DATA_MASK)
/*! @} */

/*! @name TIME_BASED_ANALYSIS_CONTROL_REG - Time-based Analysis Control. */
/*! @{ */

#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIMER_START_MASK (0x1U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIMER_START_SHIFT (0U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIMER_START_WIDTH (1U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIMER_START(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIMER_START_SHIFT)) & SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIMER_START_MASK)

#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_RSVDP_1_MASK (0xFEU)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_RSVDP_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_RSVDP_1_WIDTH (7U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_RSVDP_1_SHIFT)) & SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_RSVDP_1_MASK)

#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_DURATION_SELECT_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_DURATION_SELECT_SHIFT (8U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_DURATION_SELECT_WIDTH (8U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_DURATION_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_DURATION_SELECT_SHIFT)) & SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_DURATION_SELECT_MASK)

#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_RSVDP_16_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_RSVDP_16_SHIFT (16U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_RSVDP_16_WIDTH (8U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_RSVDP_16(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_RSVDP_16_SHIFT)) & SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_RSVDP_16_MASK)

#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_REPORT_SELECT_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_REPORT_SELECT_SHIFT (24U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_REPORT_SELECT_WIDTH (8U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_REPORT_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_REPORT_SELECT_SHIFT)) & SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_CONTROL_REG_TIME_BASED_REPORT_SELECT_MASK)
/*! @} */

/*! @name TIME_BASED_ANALYSIS_DATA_REG - Time-Based Analysis Data */
/*! @{ */

#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_DATA_REG_TIME_BASED_ANALYSIS_DATA_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_DATA_REG_TIME_BASED_ANALYSIS_DATA_SHIFT (0U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_DATA_REG_TIME_BASED_ANALYSIS_DATA_WIDTH (32U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_DATA_REG_TIME_BASED_ANALYSIS_DATA(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_DATA_REG_TIME_BASED_ANALYSIS_DATA_SHIFT)) & SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_DATA_REG_TIME_BASED_ANALYSIS_DATA_MASK)
/*! @} */

/*! @name TIME_BASED_ANALYSIS_DATA_63_32_REG - Upper 32 bits of Time-based Analysis Data. */
/*! @{ */

#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_DATA_63_32_REG_TIME_BASED_ANALYSIS_DATA_63_32_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_DATA_63_32_REG_TIME_BASED_ANALYSIS_DATA_63_32_SHIFT (0U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_DATA_63_32_REG_TIME_BASED_ANALYSIS_DATA_63_32_WIDTH (32U)
#define SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_DATA_63_32_REG_TIME_BASED_ANALYSIS_DATA_63_32(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_DATA_63_32_REG_TIME_BASED_ANALYSIS_DATA_63_32_SHIFT)) & SerDes_EP_PCIe_1_TIME_BASED_ANALYSIS_DATA_63_32_REG_TIME_BASED_ANALYSIS_DATA_63_32_MASK)
/*! @} */

/*! @name EINJ_ENABLE_REG - Error Injection Enable. */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION0_ENABLE_MASK (0x1U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION0_ENABLE_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION0_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION0_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION0_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION0_ENABLE_MASK)

#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION1_ENABLE_MASK (0x2U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION1_ENABLE_SHIFT (1U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION1_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION1_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION1_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION1_ENABLE_MASK)

#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION2_ENABLE_MASK (0x4U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION2_ENABLE_SHIFT (2U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION2_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION2_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION2_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION2_ENABLE_MASK)

#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION3_ENABLE_MASK (0x8U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION3_ENABLE_SHIFT (3U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION3_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION3_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION3_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION3_ENABLE_MASK)

#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION4_ENABLE_MASK (0x10U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION4_ENABLE_SHIFT (4U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION4_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION4_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION4_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION4_ENABLE_MASK)

#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION5_ENABLE_MASK (0x20U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION5_ENABLE_SHIFT (5U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION5_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION5_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION5_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION5_ENABLE_MASK)

#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION6_ENABLE_MASK (0x40U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION6_ENABLE_SHIFT (6U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION6_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION6_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION6_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_EINJ_ENABLE_REG_ERROR_INJECTION6_ENABLE_MASK)

#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_RSVDP_7_MASK (0xFFFFFF80U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_RSVDP_7_SHIFT (7U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_RSVDP_7_WIDTH (25U)
#define SerDes_EP_PCIe_1_EINJ_ENABLE_REG_RSVDP_7(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ_ENABLE_REG_RSVDP_7_SHIFT)) & SerDes_EP_PCIe_1_EINJ_ENABLE_REG_RSVDP_7_MASK)
/*! @} */

/*! @name EINJ0_CRC_REG - Error Injection Control 0 (CRC Error). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ0_CRC_REG_EINJ0_COUNT_MASK (0xFFU)
#define SerDes_EP_PCIe_1_EINJ0_CRC_REG_EINJ0_COUNT_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ0_CRC_REG_EINJ0_COUNT_WIDTH (8U)
#define SerDes_EP_PCIe_1_EINJ0_CRC_REG_EINJ0_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ0_CRC_REG_EINJ0_COUNT_SHIFT)) & SerDes_EP_PCIe_1_EINJ0_CRC_REG_EINJ0_COUNT_MASK)

#define SerDes_EP_PCIe_1_EINJ0_CRC_REG_EINJ0_CRC_TYPE_MASK (0xF00U)
#define SerDes_EP_PCIe_1_EINJ0_CRC_REG_EINJ0_CRC_TYPE_SHIFT (8U)
#define SerDes_EP_PCIe_1_EINJ0_CRC_REG_EINJ0_CRC_TYPE_WIDTH (4U)
#define SerDes_EP_PCIe_1_EINJ0_CRC_REG_EINJ0_CRC_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ0_CRC_REG_EINJ0_CRC_TYPE_SHIFT)) & SerDes_EP_PCIe_1_EINJ0_CRC_REG_EINJ0_CRC_TYPE_MASK)

#define SerDes_EP_PCIe_1_EINJ0_CRC_REG_RSVDP_12_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_EINJ0_CRC_REG_RSVDP_12_SHIFT (12U)
#define SerDes_EP_PCIe_1_EINJ0_CRC_REG_RSVDP_12_WIDTH (20U)
#define SerDes_EP_PCIe_1_EINJ0_CRC_REG_RSVDP_12(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ0_CRC_REG_RSVDP_12_SHIFT)) & SerDes_EP_PCIe_1_EINJ0_CRC_REG_RSVDP_12_MASK)
/*! @} */

/*! @name EINJ1_SEQNUM_REG - Error Injection Control 1 (Sequence Number Error).<br> */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_COUNT_MASK (0xFFU)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_COUNT_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_COUNT_WIDTH (8U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_COUNT_SHIFT)) & SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_COUNT_MASK)

#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_SEQNUM_TYPE_MASK (0x100U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_SEQNUM_TYPE_SHIFT (8U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_SEQNUM_TYPE_WIDTH (1U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_SEQNUM_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_SEQNUM_TYPE_SHIFT)) & SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_SEQNUM_TYPE_MASK)

#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_RSVDP_9_MASK (0xFE00U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_RSVDP_9_SHIFT (9U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_RSVDP_9_WIDTH (7U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_RSVDP_9(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_RSVDP_9_SHIFT)) & SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_RSVDP_9_MASK)

#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_BAD_SEQNUM_MASK (0x1FFF0000U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_BAD_SEQNUM_SHIFT (16U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_BAD_SEQNUM_WIDTH (13U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_BAD_SEQNUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_BAD_SEQNUM_SHIFT)) & SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_EINJ1_BAD_SEQNUM_MASK)

#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_RSVDP_29_MASK (0xE0000000U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_RSVDP_29_SHIFT (29U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_RSVDP_29_WIDTH (3U)
#define SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_RSVDP_29(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_RSVDP_29_SHIFT)) & SerDes_EP_PCIe_1_EINJ1_SEQNUM_REG_RSVDP_29_MASK)
/*! @} */

/*! @name EINJ2_DLLP_REG - Error Injection Control 2 (DLLP Error). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ2_DLLP_REG_EINJ2_COUNT_MASK (0xFFU)
#define SerDes_EP_PCIe_1_EINJ2_DLLP_REG_EINJ2_COUNT_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ2_DLLP_REG_EINJ2_COUNT_WIDTH (8U)
#define SerDes_EP_PCIe_1_EINJ2_DLLP_REG_EINJ2_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ2_DLLP_REG_EINJ2_COUNT_SHIFT)) & SerDes_EP_PCIe_1_EINJ2_DLLP_REG_EINJ2_COUNT_MASK)

#define SerDes_EP_PCIe_1_EINJ2_DLLP_REG_EINJ2_DLLP_TYPE_MASK (0x300U)
#define SerDes_EP_PCIe_1_EINJ2_DLLP_REG_EINJ2_DLLP_TYPE_SHIFT (8U)
#define SerDes_EP_PCIe_1_EINJ2_DLLP_REG_EINJ2_DLLP_TYPE_WIDTH (2U)
#define SerDes_EP_PCIe_1_EINJ2_DLLP_REG_EINJ2_DLLP_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ2_DLLP_REG_EINJ2_DLLP_TYPE_SHIFT)) & SerDes_EP_PCIe_1_EINJ2_DLLP_REG_EINJ2_DLLP_TYPE_MASK)

#define SerDes_EP_PCIe_1_EINJ2_DLLP_REG_RSVDP_10_MASK (0xFFFFFC00U)
#define SerDes_EP_PCIe_1_EINJ2_DLLP_REG_RSVDP_10_SHIFT (10U)
#define SerDes_EP_PCIe_1_EINJ2_DLLP_REG_RSVDP_10_WIDTH (22U)
#define SerDes_EP_PCIe_1_EINJ2_DLLP_REG_RSVDP_10(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ2_DLLP_REG_RSVDP_10_SHIFT)) & SerDes_EP_PCIe_1_EINJ2_DLLP_REG_RSVDP_10_MASK)
/*! @} */

/*! @name EINJ3_SYMBOL_REG - Error Injection Control 3 (Symbol Error). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_EINJ3_COUNT_MASK (0xFFU)
#define SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_EINJ3_COUNT_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_EINJ3_COUNT_WIDTH (8U)
#define SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_EINJ3_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_EINJ3_COUNT_SHIFT)) & SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_EINJ3_COUNT_MASK)

#define SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_EINJ3_SYMBOL_TYPE_MASK (0x700U)
#define SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_EINJ3_SYMBOL_TYPE_SHIFT (8U)
#define SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_EINJ3_SYMBOL_TYPE_WIDTH (3U)
#define SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_EINJ3_SYMBOL_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_EINJ3_SYMBOL_TYPE_SHIFT)) & SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_EINJ3_SYMBOL_TYPE_MASK)

#define SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_RSVDP_11_MASK (0xFFFFF800U)
#define SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_RSVDP_11_SHIFT (11U)
#define SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_RSVDP_11_WIDTH (21U)
#define SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_RSVDP_11(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_RSVDP_11_SHIFT)) & SerDes_EP_PCIe_1_EINJ3_SYMBOL_REG_RSVDP_11_MASK)
/*! @} */

/*! @name EINJ4_FC_REG - Error Injection Control 4 (FC Credit Error). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_COUNT_MASK (0xFFU)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_COUNT_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_COUNT_WIDTH (8U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_COUNT_SHIFT)) & SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_COUNT_MASK)

#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_UPDFC_TYPE_MASK (0x700U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_UPDFC_TYPE_SHIFT (8U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_UPDFC_TYPE_WIDTH (3U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_UPDFC_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_UPDFC_TYPE_SHIFT)) & SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_UPDFC_TYPE_MASK)

#define SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_11_MASK (0x800U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_11_SHIFT (11U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_11_WIDTH (1U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_11(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_11_SHIFT)) & SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_11_MASK)

#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_VC_NUMBER_MASK (0x7000U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_VC_NUMBER_SHIFT (12U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_VC_NUMBER_WIDTH (3U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_VC_NUMBER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_VC_NUMBER_SHIFT)) & SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_VC_NUMBER_MASK)

#define SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_15_MASK (0x8000U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_15_SHIFT (15U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_15_WIDTH (1U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_15(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_15_SHIFT)) & SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_15_MASK)

#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_BAD_UPDFC_VALUE_MASK (0x1FFF0000U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_BAD_UPDFC_VALUE_SHIFT (16U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_BAD_UPDFC_VALUE_WIDTH (13U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_BAD_UPDFC_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_BAD_UPDFC_VALUE_SHIFT)) & SerDes_EP_PCIe_1_EINJ4_FC_REG_EINJ4_BAD_UPDFC_VALUE_MASK)

#define SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_29_MASK (0xE0000000U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_29_SHIFT (29U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_29_WIDTH (3U)
#define SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_29(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_29_SHIFT)) & SerDes_EP_PCIe_1_EINJ4_FC_REG_RSVDP_29_MASK)
/*! @} */

/*! @name EINJ5_SP_TLP_REG - Error Injection Control 5 (Specific TLP Error). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_EINJ5_COUNT_MASK (0xFFU)
#define SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_EINJ5_COUNT_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_EINJ5_COUNT_WIDTH (8U)
#define SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_EINJ5_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_EINJ5_COUNT_SHIFT)) & SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_EINJ5_COUNT_MASK)

#define SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_EINJ5_SPECIFIED_TLP_MASK (0x100U)
#define SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_EINJ5_SPECIFIED_TLP_SHIFT (8U)
#define SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_EINJ5_SPECIFIED_TLP_WIDTH (1U)
#define SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_EINJ5_SPECIFIED_TLP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_EINJ5_SPECIFIED_TLP_SHIFT)) & SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_EINJ5_SPECIFIED_TLP_MASK)

#define SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_RSVDP_9_MASK (0xFFFFFE00U)
#define SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_RSVDP_9_SHIFT (9U)
#define SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_RSVDP_9_WIDTH (23U)
#define SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_RSVDP_9(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_RSVDP_9_SHIFT)) & SerDes_EP_PCIe_1_EINJ5_SP_TLP_REG_RSVDP_9_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_POINT_H0_REG - Error Injection Control 6 (Compare Point Header DWORD #0). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H0_REG_EINJ6_COMPARE_POINT_H0_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H0_REG_EINJ6_COMPARE_POINT_H0_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H0_REG_EINJ6_COMPARE_POINT_H0_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H0_REG_EINJ6_COMPARE_POINT_H0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H0_REG_EINJ6_COMPARE_POINT_H0_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H0_REG_EINJ6_COMPARE_POINT_H0_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_POINT_H1_REG - Error Injection Control 6 (Compare Point Header DWORD #1). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H1_REG_EINJ6_COMPARE_POINT_H1_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H1_REG_EINJ6_COMPARE_POINT_H1_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H1_REG_EINJ6_COMPARE_POINT_H1_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H1_REG_EINJ6_COMPARE_POINT_H1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H1_REG_EINJ6_COMPARE_POINT_H1_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H1_REG_EINJ6_COMPARE_POINT_H1_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_POINT_H2_REG - Error Injection Control 6 (Compare Point Header DWORD #2). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H2_REG_EINJ6_COMPARE_POINT_H2_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H2_REG_EINJ6_COMPARE_POINT_H2_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H2_REG_EINJ6_COMPARE_POINT_H2_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H2_REG_EINJ6_COMPARE_POINT_H2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H2_REG_EINJ6_COMPARE_POINT_H2_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H2_REG_EINJ6_COMPARE_POINT_H2_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_POINT_H3_REG - Error Injection Control 6 (Compare Point Header DWORD #3). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H3_REG_EINJ6_COMPARE_POINT_H3_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H3_REG_EINJ6_COMPARE_POINT_H3_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H3_REG_EINJ6_COMPARE_POINT_H3_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H3_REG_EINJ6_COMPARE_POINT_H3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H3_REG_EINJ6_COMPARE_POINT_H3_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_COMPARE_POINT_H3_REG_EINJ6_COMPARE_POINT_H3_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_VALUE_H0_REG - Error Injection Control 6 (Compare Value Header DWORD #0). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H0_REG_EINJ6_COMPARE_VALUE_H0_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H0_REG_EINJ6_COMPARE_VALUE_H0_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H0_REG_EINJ6_COMPARE_VALUE_H0_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H0_REG_EINJ6_COMPARE_VALUE_H0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H0_REG_EINJ6_COMPARE_VALUE_H0_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H0_REG_EINJ6_COMPARE_VALUE_H0_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_VALUE_H1_REG - Error Injection Control 6 (Compare Value Header DWORD #1). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H1_REG_EINJ6_COMPARE_VALUE_H1_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H1_REG_EINJ6_COMPARE_VALUE_H1_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H1_REG_EINJ6_COMPARE_VALUE_H1_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H1_REG_EINJ6_COMPARE_VALUE_H1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H1_REG_EINJ6_COMPARE_VALUE_H1_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H1_REG_EINJ6_COMPARE_VALUE_H1_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_VALUE_H2_REG - Error Injection Control 6 (Compare Value Header DWORD #2). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H2_REG_EINJ6_COMPARE_VALUE_H2_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H2_REG_EINJ6_COMPARE_VALUE_H2_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H2_REG_EINJ6_COMPARE_VALUE_H2_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H2_REG_EINJ6_COMPARE_VALUE_H2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H2_REG_EINJ6_COMPARE_VALUE_H2_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H2_REG_EINJ6_COMPARE_VALUE_H2_MASK)
/*! @} */

/*! @name EINJ6_COMPARE_VALUE_H3_REG - Error Injection Control 6 (Compare Value Header DWORD #3). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H3_REG_EINJ6_COMPARE_VALUE_H3_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H3_REG_EINJ6_COMPARE_VALUE_H3_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H3_REG_EINJ6_COMPARE_VALUE_H3_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H3_REG_EINJ6_COMPARE_VALUE_H3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H3_REG_EINJ6_COMPARE_VALUE_H3_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_COMPARE_VALUE_H3_REG_EINJ6_COMPARE_VALUE_H3_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_POINT_H0_REG - Error Injection Control 6 (Change Point Header DWORD #0). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H0_REG_EINJ6_CHANGE_POINT_H0_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H0_REG_EINJ6_CHANGE_POINT_H0_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H0_REG_EINJ6_CHANGE_POINT_H0_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H0_REG_EINJ6_CHANGE_POINT_H0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H0_REG_EINJ6_CHANGE_POINT_H0_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H0_REG_EINJ6_CHANGE_POINT_H0_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_POINT_H1_REG - Error Injection Control 6 (Change Point Header DWORD #1). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H1_REG_EINJ6_CHANGE_POINT_H1_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H1_REG_EINJ6_CHANGE_POINT_H1_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H1_REG_EINJ6_CHANGE_POINT_H1_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H1_REG_EINJ6_CHANGE_POINT_H1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H1_REG_EINJ6_CHANGE_POINT_H1_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H1_REG_EINJ6_CHANGE_POINT_H1_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_POINT_H2_REG - Error Injection Control 6 (Change Point Header DWORD #2). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H2_REG_EINJ6_CHANGE_POINT_H2_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H2_REG_EINJ6_CHANGE_POINT_H2_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H2_REG_EINJ6_CHANGE_POINT_H2_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H2_REG_EINJ6_CHANGE_POINT_H2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H2_REG_EINJ6_CHANGE_POINT_H2_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H2_REG_EINJ6_CHANGE_POINT_H2_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_POINT_H3_REG - Error Injection Control 6 (Change Point Header DWORD #3). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H3_REG_EINJ6_CHANGE_POINT_H3_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H3_REG_EINJ6_CHANGE_POINT_H3_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H3_REG_EINJ6_CHANGE_POINT_H3_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H3_REG_EINJ6_CHANGE_POINT_H3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H3_REG_EINJ6_CHANGE_POINT_H3_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_CHANGE_POINT_H3_REG_EINJ6_CHANGE_POINT_H3_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_VALUE_H0_REG - Error Injection Control 6 (Change Value Header DWORD #0). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H0_REG_EINJ6_CHANGE_VALUE_H0_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H0_REG_EINJ6_CHANGE_VALUE_H0_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H0_REG_EINJ6_CHANGE_VALUE_H0_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H0_REG_EINJ6_CHANGE_VALUE_H0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H0_REG_EINJ6_CHANGE_VALUE_H0_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H0_REG_EINJ6_CHANGE_VALUE_H0_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_VALUE_H1_REG - Error Injection Control 6 (Change Value Header DWORD #1). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H1_REG_EINJ6_CHANGE_VALUE_H1_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H1_REG_EINJ6_CHANGE_VALUE_H1_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H1_REG_EINJ6_CHANGE_VALUE_H1_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H1_REG_EINJ6_CHANGE_VALUE_H1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H1_REG_EINJ6_CHANGE_VALUE_H1_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H1_REG_EINJ6_CHANGE_VALUE_H1_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_VALUE_H2_REG - Error Injection Control 6 (Change Value Header DWORD #2). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H2_REG_EINJ6_CHANGE_VALUE_H2_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H2_REG_EINJ6_CHANGE_VALUE_H2_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H2_REG_EINJ6_CHANGE_VALUE_H2_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H2_REG_EINJ6_CHANGE_VALUE_H2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H2_REG_EINJ6_CHANGE_VALUE_H2_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H2_REG_EINJ6_CHANGE_VALUE_H2_MASK)
/*! @} */

/*! @name EINJ6_CHANGE_VALUE_H3_REG - Error Injection Control 6 (Change Value Header DWORD #3). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H3_REG_EINJ6_CHANGE_VALUE_H3_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H3_REG_EINJ6_CHANGE_VALUE_H3_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H3_REG_EINJ6_CHANGE_VALUE_H3_WIDTH (32U)
#define SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H3_REG_EINJ6_CHANGE_VALUE_H3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H3_REG_EINJ6_CHANGE_VALUE_H3_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_CHANGE_VALUE_H3_REG_EINJ6_CHANGE_VALUE_H3_MASK)
/*! @} */

/*! @name EINJ6_TLP_REG - Error Injection Control 6 (Packet Error). */
/*! @{ */

#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_COUNT_MASK (0xFFU)
#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_COUNT_SHIFT (0U)
#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_COUNT_WIDTH (8U)
#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_COUNT_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_COUNT_MASK)

#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_INVERTED_CONTROL_MASK (0x100U)
#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_INVERTED_CONTROL_SHIFT (8U)
#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_INVERTED_CONTROL_WIDTH (1U)
#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_INVERTED_CONTROL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_INVERTED_CONTROL_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_INVERTED_CONTROL_MASK)

#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_PACKET_TYPE_MASK (0xE00U)
#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_PACKET_TYPE_SHIFT (9U)
#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_PACKET_TYPE_WIDTH (3U)
#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_PACKET_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_PACKET_TYPE_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_TLP_REG_EINJ6_PACKET_TYPE_MASK)

#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_RSVDP_12_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_RSVDP_12_SHIFT (12U)
#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_RSVDP_12_WIDTH (20U)
#define SerDes_EP_PCIe_1_EINJ6_TLP_REG_RSVDP_12(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EINJ6_TLP_REG_RSVDP_12_SHIFT)) & SerDes_EP_PCIe_1_EINJ6_TLP_REG_RSVDP_12_MASK)
/*! @} */

/*! @name SD_CONTROL1_REG - Silicon Debug Control 1. */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_FORCE_DETECT_LANE_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_FORCE_DETECT_LANE_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_FORCE_DETECT_LANE_WIDTH (16U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_FORCE_DETECT_LANE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL1_REG_FORCE_DETECT_LANE_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL1_REG_FORCE_DETECT_LANE_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_FORCE_DETECT_LANE_EN_MASK (0x10000U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_FORCE_DETECT_LANE_EN_SHIFT (16U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_FORCE_DETECT_LANE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_FORCE_DETECT_LANE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL1_REG_FORCE_DETECT_LANE_EN_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL1_REG_FORCE_DETECT_LANE_EN_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_RSVDP_17_MASK (0xE0000U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_RSVDP_17_SHIFT (17U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_RSVDP_17_WIDTH (3U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_RSVDP_17(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL1_REG_RSVDP_17_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL1_REG_RSVDP_17_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_TX_EIOS_NUM_MASK (0x300000U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_TX_EIOS_NUM_SHIFT (20U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_TX_EIOS_NUM_WIDTH (2U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_TX_EIOS_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL1_REG_TX_EIOS_NUM_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL1_REG_TX_EIOS_NUM_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_LOW_POWER_INTERVAL_MASK (0xC00000U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_LOW_POWER_INTERVAL_SHIFT (22U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_LOW_POWER_INTERVAL_WIDTH (2U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_LOW_POWER_INTERVAL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL1_REG_LOW_POWER_INTERVAL_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL1_REG_LOW_POWER_INTERVAL_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_RSVDP_24_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_RSVDP_24_SHIFT (24U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_RSVDP_24_WIDTH (8U)
#define SerDes_EP_PCIe_1_SD_CONTROL1_REG_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL1_REG_RSVDP_24_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL1_REG_RSVDP_24_MASK)
/*! @} */

/*! @name SD_CONTROL2_REG - Silicon Debug Control 2. */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_HOLD_LTSSM_MASK (0x1U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_HOLD_LTSSM_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_HOLD_LTSSM_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_HOLD_LTSSM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL2_REG_HOLD_LTSSM_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL2_REG_HOLD_LTSSM_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RECOVERY_REQUEST_MASK (0x2U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RECOVERY_REQUEST_SHIFT (1U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RECOVERY_REQUEST_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RECOVERY_REQUEST(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL2_REG_RECOVERY_REQUEST_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL2_REG_RECOVERY_REQUEST_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_NOACK_FORCE_LINKDOWN_MASK (0x4U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_NOACK_FORCE_LINKDOWN_SHIFT (2U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_NOACK_FORCE_LINKDOWN_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_NOACK_FORCE_LINKDOWN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL2_REG_NOACK_FORCE_LINKDOWN_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL2_REG_NOACK_FORCE_LINKDOWN_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_3_MASK (0xF8U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_3_SHIFT (3U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_3_WIDTH (5U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_3_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_3_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_RECIDLE_TO_CONFIG_MASK (0x100U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_RECIDLE_TO_CONFIG_SHIFT (8U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_RECIDLE_TO_CONFIG_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_RECIDLE_TO_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_RECIDLE_TO_CONFIG_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_RECIDLE_TO_CONFIG_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_POLCOMP_TO_DETECT_MASK (0x200U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_POLCOMP_TO_DETECT_SHIFT (9U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_POLCOMP_TO_DETECT_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_POLCOMP_TO_DETECT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_POLCOMP_TO_DETECT_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_POLCOMP_TO_DETECT_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_LPBKSLV_TO_EXIT_MASK (0x400U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_LPBKSLV_TO_EXIT_SHIFT (10U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_LPBKSLV_TO_EXIT_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_LPBKSLV_TO_EXIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_LPBKSLV_TO_EXIT_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL2_REG_DIRECT_LPBKSLV_TO_EXIT_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_11_MASK (0xF800U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_11_SHIFT (11U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_11_WIDTH (5U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_11(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_11_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_11_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_FRAMING_ERR_RECOVERY_DISABLE_MASK (0x10000U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_FRAMING_ERR_RECOVERY_DISABLE_SHIFT (16U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_FRAMING_ERR_RECOVERY_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_FRAMING_ERR_RECOVERY_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL2_REG_FRAMING_ERR_RECOVERY_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL2_REG_FRAMING_ERR_RECOVERY_DISABLE_MASK)

#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_17_MASK (0xFFFE0000U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_17_SHIFT (17U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_17_WIDTH (15U)
#define SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_17(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_17_SHIFT)) & SerDes_EP_PCIe_1_SD_CONTROL2_REG_RSVDP_17_MASK)
/*! @} */

/*! @name SD_STATUS_L1LANE_REG - Silicon Debug Status(Layer1 Per-lane). */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_LANE_SELECT_MASK (0xFU)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_LANE_SELECT_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_LANE_SELECT_WIDTH (4U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_LANE_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_LANE_SELECT_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_LANE_SELECT_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_RSVDP_4_MASK (0xFFF0U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_RSVDP_4_SHIFT (4U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_RSVDP_4_WIDTH (12U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_RSVDP_4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_RSVDP_4_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_RSVDP_4_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXPOLARITY_MASK (0x10000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXPOLARITY_SHIFT (16U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXPOLARITY_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXPOLARITY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXPOLARITY_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXPOLARITY_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_DETECT_LANE_MASK (0x20000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_DETECT_LANE_SHIFT (17U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_DETECT_LANE_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_DETECT_LANE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_DETECT_LANE_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_DETECT_LANE_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXVALID_MASK (0x40000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXVALID_SHIFT (18U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXVALID_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXVALID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXVALID_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXVALID_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXELECIDLE_MASK (0x80000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXELECIDLE_SHIFT (19U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXELECIDLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXELECIDLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXELECIDLE_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_RXELECIDLE_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_TXELECIDLE_MASK (0x100000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_TXELECIDLE_SHIFT (20U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_TXELECIDLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_TXELECIDLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_TXELECIDLE_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_PIPE_TXELECIDLE_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_RSVDP_21_MASK (0xE00000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_RSVDP_21_SHIFT (21U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_RSVDP_21_WIDTH (3U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_RSVDP_21(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_RSVDP_21_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_RSVDP_21_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_DESKEW_POINTER_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_DESKEW_POINTER_SHIFT (24U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_DESKEW_POINTER_WIDTH (8U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_DESKEW_POINTER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_DESKEW_POINTER_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LANE_REG_DESKEW_POINTER_MASK)
/*! @} */

/*! @name SD_STATUS_L1LTSSM_REG - Silicon Debug Status(Layer1 LTSSM). */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_PTR_MASK (0x7FU)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_PTR_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_PTR_WIDTH (7U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_PTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_PTR_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_PTR_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_MASK (0x80U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_SHIFT (7U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_FRAMING_ERR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_FRAMING_ERR_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_PIPE_POWER_DOWN_MASK (0x700U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_PIPE_POWER_DOWN_SHIFT (8U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_PIPE_POWER_DOWN_WIDTH (3U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_PIPE_POWER_DOWN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_PIPE_POWER_DOWN_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_PIPE_POWER_DOWN_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_RSVDP_11_MASK (0x7800U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_RSVDP_11_SHIFT (11U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_RSVDP_11_WIDTH (4U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_RSVDP_11(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_RSVDP_11_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_RSVDP_11_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_LANE_REVERSAL_MASK (0x8000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_LANE_REVERSAL_SHIFT (15U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_LANE_REVERSAL_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_LANE_REVERSAL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_LANE_REVERSAL_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_LANE_REVERSAL_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_LTSSM_VARIABLE_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_LTSSM_VARIABLE_SHIFT (16U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_LTSSM_VARIABLE_WIDTH (16U)
#define SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_LTSSM_VARIABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_LTSSM_VARIABLE_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L1LTSSM_REG_LTSSM_VARIABLE_MASK)
/*! @} */

/*! @name SD_STATUS_PM_REG - Silicon Debug Status(PM). */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_INTERNAL_PM_MSTATE_MASK (0x1FU)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_INTERNAL_PM_MSTATE_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_INTERNAL_PM_MSTATE_WIDTH (5U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_INTERNAL_PM_MSTATE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_PM_REG_INTERNAL_PM_MSTATE_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_PM_REG_INTERNAL_PM_MSTATE_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_RSVDP_5_MASK (0xE0U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_RSVDP_5_SHIFT (5U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_RSVDP_5_WIDTH (3U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_RSVDP_5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_PM_REG_RSVDP_5_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_PM_REG_RSVDP_5_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_INTERNAL_PM_SSTATE_MASK (0xF00U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_INTERNAL_PM_SSTATE_SHIFT (8U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_INTERNAL_PM_SSTATE_WIDTH (4U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_INTERNAL_PM_SSTATE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_PM_REG_INTERNAL_PM_SSTATE_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_PM_REG_INTERNAL_PM_SSTATE_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_PME_RESEND_FLAG_MASK (0x1000U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_PME_RESEND_FLAG_SHIFT (12U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_PME_RESEND_FLAG_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_PME_RESEND_FLAG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_PM_REG_PME_RESEND_FLAG_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_PM_REG_PME_RESEND_FLAG_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_LATCHED_NFTS_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_LATCHED_NFTS_SHIFT (16U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_LATCHED_NFTS_WIDTH (8U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_LATCHED_NFTS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_PM_REG_LATCHED_NFTS_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_PM_REG_LATCHED_NFTS_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_RSVDP_24_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_RSVDP_24_SHIFT (24U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_RSVDP_24_WIDTH (8U)
#define SerDes_EP_PCIe_1_SD_STATUS_PM_REG_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_PM_REG_RSVDP_24_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_PM_REG_RSVDP_24_MASK)
/*! @} */

/*! @name SD_STATUS_L2_REG - Silicon Debug Status(Layer2). */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_TX_TLP_SEQ_NO_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_TX_TLP_SEQ_NO_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_TX_TLP_SEQ_NO_WIDTH (12U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_TX_TLP_SEQ_NO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L2_REG_TX_TLP_SEQ_NO_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L2_REG_TX_TLP_SEQ_NO_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_RX_ACK_SEQ_NO_MASK (0xFFF000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_RX_ACK_SEQ_NO_SHIFT (12U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_RX_ACK_SEQ_NO_WIDTH (12U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_RX_ACK_SEQ_NO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L2_REG_RX_ACK_SEQ_NO_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L2_REG_RX_ACK_SEQ_NO_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_DLCMSM_MASK (0x3000000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_DLCMSM_SHIFT (24U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_DLCMSM_WIDTH (2U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_DLCMSM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L2_REG_DLCMSM_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L2_REG_DLCMSM_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_FC_INIT1_MASK (0x4000000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_FC_INIT1_SHIFT (26U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_FC_INIT1_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_FC_INIT1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L2_REG_FC_INIT1_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L2_REG_FC_INIT1_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_FC_INIT2_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_FC_INIT2_SHIFT (27U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_FC_INIT2_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_FC_INIT2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L2_REG_FC_INIT2_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L2_REG_FC_INIT2_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_RSVDP_28_MASK (0xF0000000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_RSVDP_28_SHIFT (28U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_RSVDP_28_WIDTH (4U)
#define SerDes_EP_PCIe_1_SD_STATUS_L2_REG_RSVDP_28(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L2_REG_RSVDP_28_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L2_REG_RSVDP_28_MASK)
/*! @} */

/*! @name SD_STATUS_L3FC_REG - Silicon Debug Status(Layer3 FC). */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_VC_MASK (0x7U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_VC_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_VC_WIDTH (3U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_VC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_VC_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_VC_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_CREDIT_TYPE_MASK (0x8U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_CREDIT_TYPE_SHIFT (3U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_CREDIT_TYPE_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_CREDIT_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_CREDIT_TYPE_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_CREDIT_TYPE_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_TLP_TYPE_MASK (0x30U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_TLP_TYPE_SHIFT (4U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_TLP_TYPE_WIDTH (2U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_TLP_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_TLP_TYPE_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_TLP_TYPE_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_HD_MASK (0x40U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_HD_SHIFT (6U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_HD_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_HD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_HD_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_SEL_HD_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_RSVDP_7_MASK (0x80U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_RSVDP_7_SHIFT (7U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_RSVDP_7_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_RSVDP_7(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_RSVDP_7_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_RSVDP_7_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_DATA0_MASK (0xFFF00U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_DATA0_SHIFT (8U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_DATA0_WIDTH (12U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_DATA0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_DATA0_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_DATA0_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_DATA1_MASK (0xFFF00000U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_DATA1_SHIFT (20U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_DATA1_WIDTH (12U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_DATA1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_DATA1_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L3FC_REG_CREDIT_DATA1_MASK)
/*! @} */

/*! @name SD_STATUS_L3_REG - Silicon Debug Status(Layer3). */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_STATUS_L3_REG_MFTLP_POINTER_MASK (0x7FU)
#define SerDes_EP_PCIe_1_SD_STATUS_L3_REG_MFTLP_POINTER_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3_REG_MFTLP_POINTER_WIDTH (7U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3_REG_MFTLP_POINTER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L3_REG_MFTLP_POINTER_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L3_REG_MFTLP_POINTER_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L3_REG_MFTLP_STATUS_MASK (0x80U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3_REG_MFTLP_STATUS_SHIFT (7U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3_REG_MFTLP_STATUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3_REG_MFTLP_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L3_REG_MFTLP_STATUS_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L3_REG_MFTLP_STATUS_MASK)

#define SerDes_EP_PCIe_1_SD_STATUS_L3_REG_RSVDP_8_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3_REG_RSVDP_8_SHIFT (8U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3_REG_RSVDP_8_WIDTH (24U)
#define SerDes_EP_PCIe_1_SD_STATUS_L3_REG_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_STATUS_L3_REG_RSVDP_8_SHIFT)) & SerDes_EP_PCIe_1_SD_STATUS_L3_REG_RSVDP_8_MASK)
/*! @} */

/*! @name SD_EQ_CONTROL1_REG - Silicon Debug EQ Control 1. */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EQ_LANE_SEL_MASK (0xFU)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EQ_LANE_SEL_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EQ_LANE_SEL_WIDTH (4U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EQ_LANE_SEL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EQ_LANE_SEL_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EQ_LANE_SEL_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EQ_RATE_SEL_MASK (0x30U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EQ_RATE_SEL_SHIFT (4U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EQ_RATE_SEL_WIDTH (2U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EQ_RATE_SEL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EQ_RATE_SEL_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EQ_RATE_SEL_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_6_MASK (0xC0U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_6_SHIFT (6U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_6_WIDTH (2U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_6(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_6_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_6_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EXT_EQ_TIMEOUT_MASK (0x300U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EXT_EQ_TIMEOUT_SHIFT (8U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EXT_EQ_TIMEOUT_WIDTH (2U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EXT_EQ_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EXT_EQ_TIMEOUT_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EXT_EQ_TIMEOUT_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_10_MASK (0xFC00U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_10_SHIFT (10U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_10_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_10(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_10_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_10_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EVAL_INTERVAL_TIME_MASK (0x30000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EVAL_INTERVAL_TIME_SHIFT (16U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EVAL_INTERVAL_TIME_WIDTH (2U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EVAL_INTERVAL_TIME(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EVAL_INTERVAL_TIME_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_EVAL_INTERVAL_TIME_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_18_MASK (0x7C0000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_18_SHIFT (18U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_18_WIDTH (5U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_18(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_18_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_RSVDP_18_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_FOM_TARGET_ENABLE_MASK (0x800000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_FOM_TARGET_ENABLE_SHIFT (23U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_FOM_TARGET_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_FOM_TARGET_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_FOM_TARGET_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_FOM_TARGET_ENABLE_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_FOM_TARGET_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_FOM_TARGET_SHIFT (24U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_FOM_TARGET_WIDTH (8U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_FOM_TARGET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_FOM_TARGET_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL1_REG_FOM_TARGET_MASK)
/*! @} */

/*! @name SD_EQ_CONTROL2_REG - Silicon Debug EQ Control 2. */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRE_CURSOR_MASK (0x3FU)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRE_CURSOR_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRE_CURSOR_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRE_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRE_CURSOR_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRE_CURSOR_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_CURSOR_MASK (0xFC0U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_CURSOR_SHIFT (6U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_CURSOR_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_CURSOR_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_CURSOR_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_POST_CURSOR_MASK (0x3F000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_POST_CURSOR_SHIFT (12U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_POST_CURSOR_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_POST_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_POST_CURSOR_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_POST_CURSOR_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_MASK (0x1C0000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_SHIFT (18U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_WIDTH (3U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_RSVDP_21_MASK (0xE00000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_RSVDP_21_SHIFT (21U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_RSVDP_21_WIDTH (3U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_RSVDP_21(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_RSVDP_21_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_RSVDP_21_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_MASK (0xF000000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_SHIFT (24U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_WIDTH (4U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_COEF_ENABLE_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_COEF_ENABLE_SHIFT (28U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_COEF_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_COEF_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_COEF_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_COEF_ENABLE_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_ENABLE_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_ENABLE_SHIFT (29U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_RX_HINT_ENABLE_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_ENABLE_MASK (0x40000000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_ENABLE_SHIFT (30U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_FORCE_LOCAL_TX_PRESET_ENABLE_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_RSVDP_31_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_RSVDP_31_SHIFT (31U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_RSVDP_31_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_RSVDP_31(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_RSVDP_31_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL2_REG_RSVDP_31_MASK)
/*! @} */

/*! @name SD_EQ_CONTROL3_REG - Silicon Debug EQ Control 3. */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_PRE_CURSOR_MASK (0x3FU)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_PRE_CURSOR_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_PRE_CURSOR_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_PRE_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_PRE_CURSOR_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_PRE_CURSOR_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_CURSOR_MASK (0xFC0U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_CURSOR_SHIFT (6U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_CURSOR_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_CURSOR_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_CURSOR_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_POST_CURSOR_MASK (0x3F000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_POST_CURSOR_SHIFT (12U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_POST_CURSOR_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_POST_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_POST_CURSOR_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_POST_CURSOR_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_RSVDP_18_MASK (0xFFC0000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_RSVDP_18_SHIFT (18U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_RSVDP_18_WIDTH (10U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_RSVDP_18(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_RSVDP_18_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_RSVDP_18_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_COEF_ENABLE_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_COEF_ENABLE_SHIFT (28U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_COEF_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_COEF_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_COEF_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_FORCE_REMOTE_TX_COEF_ENABLE_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_RSVDP_29_MASK (0xE0000000U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_RSVDP_29_SHIFT (29U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_RSVDP_29_WIDTH (3U)
#define SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_RSVDP_29(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_RSVDP_29_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_CONTROL3_REG_RSVDP_29_MASK)
/*! @} */

/*! @name SD_EQ_STATUS1_REG - Silicon Debug EQ Status 1. */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_SEQUENCE_MASK (0x1U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_SEQUENCE_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_SEQUENCE_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_SEQUENCE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_SEQUENCE_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_SEQUENCE_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_CONVERGENCE_INFO_MASK (0x6U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_CONVERGENCE_INFO_SHIFT (1U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_CONVERGENCE_INFO_WIDTH (2U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_CONVERGENCE_INFO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_CONVERGENCE_INFO_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_CONVERGENCE_INFO_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_RSVDP_3_MASK (0x8U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_RSVDP_3_SHIFT (3U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_RSVDP_3_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_RSVDP_3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_RSVDP_3_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_RSVDP_3_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEA_VIOLATION_MASK (0x10U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEA_VIOLATION_SHIFT (4U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEA_VIOLATION_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEA_VIOLATION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEA_VIOLATION_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEA_VIOLATION_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEB_VIOLATION_MASK (0x20U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEB_VIOLATION_SHIFT (5U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEB_VIOLATION_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEB_VIOLATION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEB_VIOLATION_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEB_VIOLATION_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEC_VIOLATION_MASK (0x40U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEC_VIOLATION_SHIFT (6U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEC_VIOLATION_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEC_VIOLATION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEC_VIOLATION_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_RULEC_VIOLATION_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_REJECT_EVENT_MASK (0x80U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_REJECT_EVENT_SHIFT (7U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_REJECT_EVENT_WIDTH (1U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_REJECT_EVENT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_REJECT_EVENT_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_EQ_REJECT_EVENT_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_RSVDP_8_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_RSVDP_8_SHIFT (8U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_RSVDP_8_WIDTH (24U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_RSVDP_8_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS1_REG_RSVDP_8_MASK)
/*! @} */

/*! @name SD_EQ_STATUS2_REG - Silicon Debug EQ Status 2. */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_PRE_CURSOR_MASK (0x3FU)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_PRE_CURSOR_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_PRE_CURSOR_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_PRE_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_PRE_CURSOR_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_PRE_CURSOR_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_CURSOR_MASK (0xFC0U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_CURSOR_SHIFT (6U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_CURSOR_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_CURSOR_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_CURSOR_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_POST_CURSOR_MASK (0x3F000U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_POST_CURSOR_SHIFT (12U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_POST_CURSOR_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_POST_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_POST_CURSOR_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_POST_CURSOR_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_RX_HINT_MASK (0x1C0000U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_RX_HINT_SHIFT (18U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_RX_HINT_WIDTH (3U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_RX_HINT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_RX_HINT_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_RX_HINT_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_RSVDP_21_MASK (0xE00000U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_RSVDP_21_SHIFT (21U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_RSVDP_21_WIDTH (3U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_RSVDP_21(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_RSVDP_21_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_RSVDP_21_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_FOM_VALUE_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_FOM_VALUE_SHIFT (24U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_FOM_VALUE_WIDTH (8U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_FOM_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_FOM_VALUE_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS2_REG_EQ_LOCAL_FOM_VALUE_MASK)
/*! @} */

/*! @name SD_EQ_STATUS3_REG - Silicon Debug EQ Status 3. */
/*! @{ */

#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_PRE_CURSOR_MASK (0x3FU)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_PRE_CURSOR_SHIFT (0U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_PRE_CURSOR_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_PRE_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_PRE_CURSOR_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_PRE_CURSOR_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_CURSOR_MASK (0xFC0U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_CURSOR_SHIFT (6U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_CURSOR_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_CURSOR_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_CURSOR_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_POST_CURSOR_MASK (0x3F000U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_POST_CURSOR_SHIFT (12U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_POST_CURSOR_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_POST_CURSOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_POST_CURSOR_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_POST_CURSOR_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_LF_MASK (0xFC0000U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_LF_SHIFT (18U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_LF_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_LF(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_LF_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_LF_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_FS_MASK (0x3F000000U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_FS_SHIFT (24U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_FS_WIDTH (6U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_FS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_FS_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_EQ_REMOTE_FS_MASK)

#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_RSVDP_30_MASK (0xC0000000U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_RSVDP_30_SHIFT (30U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_RSVDP_30_WIDTH (2U)
#define SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_RSVDP_30(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_RSVDP_30_SHIFT)) & SerDes_EP_PCIe_1_SD_EQ_STATUS3_REG_RSVDP_30_MASK)
/*! @} */

/*! @name RASDP_EXT_CAP_HDR_OFF - PCIe Extended capability ID, Capability version and Next capability offset. */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_ID_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_ID_WIDTH (16U)
#define SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_ID_SHIFT)) & SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_ID_MASK)

#define SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_CAP_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_CAP_SHIFT (16U)
#define SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_CAP_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_CAP_SHIFT)) & SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_CAP_MASK)

#define SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_NEXT_OFFSET_MASK (0xFFF00000U)
#define SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_NEXT_OFFSET_SHIFT (20U)
#define SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_NEXT_OFFSET_WIDTH (12U)
#define SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_NEXT_OFFSET_SHIFT)) & SerDes_EP_PCIe_1_RASDP_EXT_CAP_HDR_OFF_NEXT_OFFSET_MASK)
/*! @} */

/*! @name RASDP_VENDOR_SPECIFIC_HDR_OFF - Vendor Specific Header. */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_WIDTH (16U)
#define SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_SHIFT)) & SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_MASK)

#define SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_SHIFT (16U)
#define SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_SHIFT)) & SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_MASK)

#define SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_MASK (0xFFF00000U)
#define SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_SHIFT (20U)
#define SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_WIDTH (12U)
#define SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_SHIFT)) & SerDes_EP_PCIe_1_RASDP_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_MASK)
/*! @} */

/*! @name RASDP_ERROR_PROT_CTRL_OFF - ECC Error Correction and Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_TX_MASK (0x1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_TX_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_TX_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_TX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_TX_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_TX_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_MASTER_MASK (0x2U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_MASTER_SHIFT (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_MASTER_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_MASTER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_MASTER_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_MASTER_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_OUTBOUND_MASK (0x4U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_OUTBOUND_SHIFT (2U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_OUTBOUND_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_OUTBOUND_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_OUTBOUND_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_WRITE_MASK (0x8U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_WRITE_SHIFT (3U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_WRITE_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_WRITE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_WRITE_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_WRITE_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_TX_MASK (0x10U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_TX_SHIFT (4U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_TX_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_TX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_TX_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_TX_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_TX_MASK (0x20U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_TX_SHIFT (5U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_TX_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_TX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_TX_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_TX_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_TX_MASK (0x40U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_TX_SHIFT (6U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_TX_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_TX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_TX_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_TX_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_CXS_TX_MASK (0x80U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_CXS_TX_SHIFT (7U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_CXS_TX_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_CXS_TX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_CXS_TX_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_CXS_TX_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DTIM_TX_MASK (0x100U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DTIM_TX_SHIFT (8U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DTIM_TX_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DTIM_TX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DTIM_TX_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DTIM_TX_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_RSVDP_9_MASK (0xFE00U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_RSVDP_9_SHIFT (9U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_RSVDP_9_WIDTH (7U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_RSVDP_9(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_RSVDP_9_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_RSVDP_9_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_RX_MASK (0x10000U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_RX_SHIFT (16U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_RX_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_RX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_RX_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_RX_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_COMPLETION_MASK (0x20000U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_COMPLETION_SHIFT (17U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_COMPLETION_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_COMPLETION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_COMPLETION_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_COMPLETION_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_REQUEST_MASK (0x40000U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_REQUEST_SHIFT (18U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_REQUEST_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_REQUEST(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_REQUEST_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_AXI_BRIDGE_INBOUND_REQUEST_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_READ_MASK (0x80000U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_READ_SHIFT (19U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_READ_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_READ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_READ_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_DMA_READ_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_RX_MASK (0x100000U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_RX_SHIFT (20U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_RX_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_RX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_RX_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER2_RX_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_RX_MASK (0x200000U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_RX_SHIFT (21U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_RX_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_RX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_RX_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_LAYER3_RX_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_RX_MASK (0x400000U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_RX_SHIFT (22U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_RX_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_RX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_RX_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_ADM_RX_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_CXS_RX_MASK (0x800000U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_CXS_RX_SHIFT (23U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_CXS_RX_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_CXS_RX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_CXS_RX_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_ERROR_PROT_DISABLE_CXS_RX_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_RSVDP_24_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_RSVDP_24_SHIFT (24U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_RSVDP_24_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_RSVDP_24_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_PROT_CTRL_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name RASDP_CORR_COUNTER_CTRL_OFF - Corrected Error (1-bit ECC) Counter Selection and Control */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_CLEAR_COUNTERS_MASK (0x1U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_CLEAR_COUNTERS_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_CLEAR_COUNTERS_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_CLEAR_COUNTERS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_CLEAR_COUNTERS_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_CLEAR_COUNTERS_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_RSVDP_1_MASK (0xEU)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_RSVDP_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_RSVDP_1_WIDTH (3U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_RSVDP_1_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_RSVDP_1_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_EN_COUNTERS_MASK (0x10U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_EN_COUNTERS_SHIFT (4U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_EN_COUNTERS_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_EN_COUNTERS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_EN_COUNTERS_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_EN_COUNTERS_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_RSVDP_5_MASK (0xFFFE0U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_RSVDP_5_SHIFT (5U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_RSVDP_5_WIDTH (15U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_RSVDP_5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_RSVDP_5_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_RSVDP_5_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_REGION_MASK (0xF00000U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_REGION_SHIFT (20U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_REGION_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_REGION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_REGION_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_REGION_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_SHIFT (24U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_COUNTER_CTRL_OFF_CORR_COUNTER_SELECTION_MASK)
/*! @} */

/*! @name RASDP_CORR_COUNT_REPORT_OFF - Corrected Error (1-bit ECC) Counter Data Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_MASK (0xFFU)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_RSVDP_8_MASK (0xFFF00U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_RSVDP_8_SHIFT (8U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_RSVDP_8_WIDTH (12U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_RSVDP_8_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_RSVDP_8_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_REGION_MASK (0xF00000U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_REGION_SHIFT (20U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_REGION_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_REGION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_REGION_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_REGION_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_SHIFT (24U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_COUNT_REPORT_OFF_CORR_COUNTER_SELECTED_MASK)
/*! @} */

/*! @name RASDP_UNCORR_COUNTER_CTRL_OFF - Uncorrected Error (2-bit ECC and parity) Counter Selection and Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_CLEAR_COUNTERS_MASK (0x1U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_CLEAR_COUNTERS_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_CLEAR_COUNTERS_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_CLEAR_COUNTERS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_CLEAR_COUNTERS_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_CLEAR_COUNTERS_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_RSVDP_1_MASK (0xEU)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_RSVDP_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_RSVDP_1_WIDTH (3U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_RSVDP_1_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_RSVDP_1_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_EN_COUNTERS_MASK (0x10U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_EN_COUNTERS_SHIFT (4U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_EN_COUNTERS_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_EN_COUNTERS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_EN_COUNTERS_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_EN_COUNTERS_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_RSVDP_5_MASK (0xFFFE0U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_RSVDP_5_SHIFT (5U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_RSVDP_5_WIDTH (15U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_RSVDP_5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_RSVDP_5_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_RSVDP_5_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_REGION_MASK (0xF00000U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_REGION_SHIFT (20U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_REGION_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_REGION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_REGION_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_REGION_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_SHIFT (24U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_COUNTER_CTRL_OFF_UNCORR_COUNTER_SELECTION_MASK)
/*! @} */

/*! @name RASDP_UNCORR_COUNT_REPORT_OFF - Uncorrected Error (2-bit ECC and parity) Counter Data Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_MASK (0xFFU)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_RSVDP_8_MASK (0xFFF00U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_RSVDP_8_SHIFT (8U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_RSVDP_8_WIDTH (12U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_RSVDP_8_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_RSVDP_8_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_REGION_MASK (0xF00000U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_REGION_SHIFT (20U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_REGION_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_REGION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_REGION_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_REGION_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_SHIFT (24U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_COUNT_REPORT_OFF_UNCORR_COUNTER_SELECTED_MASK)
/*! @} */

/*! @name RASDP_ERROR_INJ_CTRL_OFF - Error Injection Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_EN_MASK (0x1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_EN_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_EN_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_EN_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_1_MASK (0xEU)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_1_WIDTH (3U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_1_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_1_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_TYPE_MASK (0x30U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_TYPE_SHIFT (4U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_TYPE_WIDTH (2U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_TYPE_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_TYPE_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_6_MASK (0xC0U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_6_SHIFT (6U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_6_WIDTH (2U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_6(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_6_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_6_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_COUNT_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_COUNT_SHIFT (8U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_COUNT_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_COUNT_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_COUNT_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_LOC_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_LOC_SHIFT (16U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_LOC_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_LOC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_LOC_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_ERROR_INJ_LOC_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_24_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_24_SHIFT (24U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_24_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_24_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_INJ_CTRL_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name RASDP_CORR_ERROR_LOCATION_OFF - Corrected Errors Location */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_RSVDP_0_MASK (0xFU)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_RSVDP_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_RSVDP_0_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_RSVDP_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_RSVDP_0_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_RSVDP_0_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_REG_FIRST_CORR_ERROR_MASK (0xF0U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_REG_FIRST_CORR_ERROR_SHIFT (4U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_REG_FIRST_CORR_ERROR_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_REG_FIRST_CORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_REG_FIRST_CORR_ERROR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_REG_FIRST_CORR_ERROR_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_LOC_FIRST_CORR_ERROR_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_LOC_FIRST_CORR_ERROR_SHIFT (8U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_LOC_FIRST_CORR_ERROR_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_LOC_FIRST_CORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_LOC_FIRST_CORR_ERROR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_LOC_FIRST_CORR_ERROR_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_RSVDP_16_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_RSVDP_16_SHIFT (16U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_RSVDP_16_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_RSVDP_16(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_RSVDP_16_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_RSVDP_16_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_REG_LAST_CORR_ERROR_MASK (0xF00000U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_REG_LAST_CORR_ERROR_SHIFT (20U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_REG_LAST_CORR_ERROR_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_REG_LAST_CORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_REG_LAST_CORR_ERROR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_REG_LAST_CORR_ERROR_MASK)

#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_LOC_LAST_CORR_ERROR_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_LOC_LAST_CORR_ERROR_SHIFT (24U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_LOC_LAST_CORR_ERROR_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_LOC_LAST_CORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_LOC_LAST_CORR_ERROR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_CORR_ERROR_LOCATION_OFF_LOC_LAST_CORR_ERROR_MASK)
/*! @} */

/*! @name RASDP_UNCORR_ERROR_LOCATION_OFF - Uncorrected Errors Location */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_RSVDP_0_MASK (0xFU)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_RSVDP_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_RSVDP_0_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_RSVDP_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_RSVDP_0_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_RSVDP_0_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_FIRST_UNCORR_ERROR_MASK (0xF0U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_FIRST_UNCORR_ERROR_SHIFT (4U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_FIRST_UNCORR_ERROR_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_FIRST_UNCORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_FIRST_UNCORR_ERROR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_FIRST_UNCORR_ERROR_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_FIRST_UNCORR_ERROR_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_FIRST_UNCORR_ERROR_SHIFT (8U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_FIRST_UNCORR_ERROR_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_FIRST_UNCORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_FIRST_UNCORR_ERROR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_FIRST_UNCORR_ERROR_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_RSVDP_16_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_RSVDP_16_SHIFT (16U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_RSVDP_16_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_RSVDP_16(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_RSVDP_16_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_RSVDP_16_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_LAST_UNCORR_ERROR_MASK (0xF00000U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_LAST_UNCORR_ERROR_SHIFT (20U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_LAST_UNCORR_ERROR_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_LAST_UNCORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_LAST_UNCORR_ERROR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_REG_LAST_UNCORR_ERROR_MASK)

#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_LAST_UNCORR_ERROR_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_LAST_UNCORR_ERROR_SHIFT (24U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_LAST_UNCORR_ERROR_WIDTH (8U)
#define SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_LAST_UNCORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_LAST_UNCORR_ERROR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_UNCORR_ERROR_LOCATION_OFF_LOC_LAST_UNCORR_ERROR_MASK)
/*! @} */

/*! @name RASDP_ERROR_MODE_EN_OFF - RASDP error mode enable. The controller enters RASDP error mode (if ERROR_MODE_EN =1) upon detection of the first uncorrectable error. */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_ERROR_MODE_EN_MASK (0x1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_ERROR_MODE_EN_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_ERROR_MODE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_ERROR_MODE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_ERROR_MODE_EN_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_ERROR_MODE_EN_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_AUTO_LINK_DOWN_EN_MASK (0x2U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_AUTO_LINK_DOWN_EN_SHIFT (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_AUTO_LINK_DOWN_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_AUTO_LINK_DOWN_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_AUTO_LINK_DOWN_EN_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_AUTO_LINK_DOWN_EN_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_RSVDP_2_MASK (0xFFFFFFFCU)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_RSVDP_2_SHIFT (2U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_RSVDP_2_WIDTH (30U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_RSVDP_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_RSVDP_2_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_MODE_EN_OFF_RSVDP_2_MASK)
/*! @} */

/*! @name RASDP_ERROR_MODE_CLEAR_OFF - RASDP Error Mode Clear Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_CLEAR_OFF_ERROR_MODE_CLEAR_MASK (0x1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_CLEAR_OFF_ERROR_MODE_CLEAR_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_CLEAR_OFF_ERROR_MODE_CLEAR_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_CLEAR_OFF_ERROR_MODE_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_MODE_CLEAR_OFF_ERROR_MODE_CLEAR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_MODE_CLEAR_OFF_ERROR_MODE_CLEAR_MASK)

#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_CLEAR_OFF_RSVDP_1_MASK (0xFFFFFFFEU)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_CLEAR_OFF_RSVDP_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_CLEAR_OFF_RSVDP_1_WIDTH (31U)
#define SerDes_EP_PCIe_1_RASDP_ERROR_MODE_CLEAR_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_ERROR_MODE_CLEAR_OFF_RSVDP_1_SHIFT)) & SerDes_EP_PCIe_1_RASDP_ERROR_MODE_CLEAR_OFF_RSVDP_1_MASK)
/*! @} */

/*! @name RASDP_RAM_ADDR_CORR_ERROR_OFF - RAM Address where a corrected error (1-bit ECC) is detected. */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_ADDR_CORR_ERROR_MASK (0x7FFFFFFU)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_ADDR_CORR_ERROR_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_ADDR_CORR_ERROR_WIDTH (27U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_ADDR_CORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_ADDR_CORR_ERROR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_ADDR_CORR_ERROR_MASK)

#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RSVDP_27_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RSVDP_27_SHIFT (27U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RSVDP_27_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RSVDP_27(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RSVDP_27_SHIFT)) & SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RSVDP_27_MASK)

#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_INDEX_CORR_ERROR_MASK (0xF0000000U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_INDEX_CORR_ERROR_SHIFT (28U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_INDEX_CORR_ERROR_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_INDEX_CORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_INDEX_CORR_ERROR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_RAM_ADDR_CORR_ERROR_OFF_RAM_INDEX_CORR_ERROR_MASK)
/*! @} */

/*! @name RASDP_RAM_ADDR_UNCORR_ERROR_OFF - RAM Address where an uncorrected error (2-bit ECC) is detected. */
/*! @{ */

#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_ADDR_UNCORR_ERROR_MASK (0x7FFFFFFU)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_ADDR_UNCORR_ERROR_SHIFT (0U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_ADDR_UNCORR_ERROR_WIDTH (27U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_ADDR_UNCORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_ADDR_UNCORR_ERROR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_ADDR_UNCORR_ERROR_MASK)

#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RSVDP_27_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RSVDP_27_SHIFT (27U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RSVDP_27_WIDTH (1U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RSVDP_27(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RSVDP_27_SHIFT)) & SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RSVDP_27_MASK)

#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_INDEX_UNCORR_ERROR_MASK (0xF0000000U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_INDEX_UNCORR_ERROR_SHIFT (28U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_INDEX_UNCORR_ERROR_WIDTH (4U)
#define SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_INDEX_UNCORR_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_INDEX_UNCORR_ERROR_SHIFT)) & SerDes_EP_PCIe_1_RASDP_RAM_ADDR_UNCORR_ERROR_OFF_RAM_INDEX_UNCORR_ERROR_MASK)
/*! @} */

/*! @name VSECDMA_EXT_CAP_HDR_OFF - PCIe Extended Capability ID, Capability Version, and Next Capability Offset Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_ID_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_ID_WIDTH (16U)
#define SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_ID_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_ID_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_CAP_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_CAP_SHIFT (16U)
#define SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_CAP_WIDTH (4U)
#define SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_CAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_CAP_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_CAP_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_NEXT_OFFSET_MASK (0xFFF00000U)
#define SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_NEXT_OFFSET_SHIFT (20U)
#define SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_NEXT_OFFSET_WIDTH (12U)
#define SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_NEXT_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_NEXT_OFFSET_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_EXT_CAP_HDR_OFF_NEXT_OFFSET_MASK)
/*! @} */

/*! @name VSECDMA_VENDOR_SPECIFIC_HDR_OFF - Vendor Specific Header Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_WIDTH (16U)
#define SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_ID_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_MASK (0xF0000U)
#define SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_SHIFT (16U)
#define SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_WIDTH (4U)
#define SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_REV_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_MASK (0xFFF00000U)
#define SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_SHIFT (20U)
#define SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_WIDTH (12U)
#define SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_VENDOR_SPECIFIC_HDR_OFF_VSEC_LENGTH_MASK)
/*! @} */

/*! @name VSECDMA_DEVICE_INFORMATION_OFF - DMA and related AXI Bridge Implementation Information. */
/*! @{ */

#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MAP_FORMAT_MASK (0x7U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MAP_FORMAT_SHIFT (0U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MAP_FORMAT_WIDTH (3U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MAP_FORMAT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MAP_FORMAT_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MAP_FORMAT_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_RSVDP_3_MASK (0xF8U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_RSVDP_3_SHIFT (3U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_RSVDP_3_WIDTH (5U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_RSVDP_3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_RSVDP_3_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_RSVDP_3_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_BARN_MASK (0x700U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_BARN_SHIFT (8U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_BARN_WIDTH (3U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_BARN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_BARN_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_BARN_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_PFN_MASK (0xF800U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_PFN_SHIFT (11U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_PFN_WIDTH (5U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_PFN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_PFN_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_PFN_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_CHANNEL_SEPARATION_MASK (0x70000U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_CHANNEL_SEPARATION_SHIFT (16U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_CHANNEL_SEPARATION_WIDTH (3U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_CHANNEL_SEPARATION(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_CHANNEL_SEPARATION_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_CHANNEL_SEPARATION_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_AXI_MASK (0x80000U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_AXI_SHIFT (19U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_AXI_WIDTH (1U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_AXI(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_AXI_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_AXI_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_BUS_WIDTH_MASK (0x700000U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_BUS_WIDTH_SHIFT (20U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_BUS_WIDTH_WIDTH (3U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_BUS_WIDTH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_BUS_WIDTH_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_BUS_WIDTH_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_BURST_LENGTH_MASK (0x3800000U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_BURST_LENGTH_SHIFT (23U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_BURST_LENGTH_WIDTH (3U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_BURST_LENGTH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_BURST_LENGTH_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_BURST_LENGTH_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_PAGE_BOUNDARY_POINTER_WIDTH_MASK (0x3C000000U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_PAGE_BOUNDARY_POINTER_WIDTH_SHIFT (26U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_PAGE_BOUNDARY_POINTER_WIDTH_WIDTH (4U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_PAGE_BOUNDARY_POINTER_WIDTH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_PAGE_BOUNDARY_POINTER_WIDTH_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_MASTER_PAGE_BOUNDARY_POINTER_WIDTH_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_RSVDP_30_MASK (0xC0000000U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_RSVDP_30_SHIFT (30U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_RSVDP_30_WIDTH (2U)
#define SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_RSVDP_30(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_RSVDP_30_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_DEVICE_INFORMATION_OFF_RSVDP_30_MASK)
/*! @} */

/*! @name VSECDMA_NUM_CHAN_OFF - Number of Implemented Channels Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_NUM_DMA_WR_CHAN_MASK (0x3FFU)
#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_NUM_DMA_WR_CHAN_SHIFT (0U)
#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_NUM_DMA_WR_CHAN_WIDTH (10U)
#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_NUM_DMA_WR_CHAN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_NUM_DMA_WR_CHAN_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_NUM_DMA_WR_CHAN_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_RSVDP_10_MASK (0xFC00U)
#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_RSVDP_10_SHIFT (10U)
#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_RSVDP_10_WIDTH (6U)
#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_RSVDP_10(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_RSVDP_10_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_RSVDP_10_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_NUM_DMA_RD_CHAN_MASK (0x3FF0000U)
#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_NUM_DMA_RD_CHAN_SHIFT (16U)
#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_NUM_DMA_RD_CHAN_WIDTH (10U)
#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_NUM_DMA_RD_CHAN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_NUM_DMA_RD_CHAN_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_NUM_DMA_RD_CHAN_MASK)

#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_RSVDP_26_MASK (0xFC000000U)
#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_RSVDP_26_SHIFT (26U)
#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_RSVDP_26_WIDTH (6U)
#define SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_RSVDP_26(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_RSVDP_26_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_NUM_CHAN_OFF_RSVDP_26_MASK)
/*! @} */

/*! @name VSECDMA_UNROLL_ADDR_OFFSET_LOW_OFF - DMA Register Map Start Address Offset Low Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_VSECDMA_UNROLL_ADDR_OFFSET_LOW_OFF_UNROLL_ADDR_OFFSET_LOW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_VSECDMA_UNROLL_ADDR_OFFSET_LOW_OFF_UNROLL_ADDR_OFFSET_LOW_SHIFT (0U)
#define SerDes_EP_PCIe_1_VSECDMA_UNROLL_ADDR_OFFSET_LOW_OFF_UNROLL_ADDR_OFFSET_LOW_WIDTH (32U)
#define SerDes_EP_PCIe_1_VSECDMA_UNROLL_ADDR_OFFSET_LOW_OFF_UNROLL_ADDR_OFFSET_LOW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_UNROLL_ADDR_OFFSET_LOW_OFF_UNROLL_ADDR_OFFSET_LOW_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_UNROLL_ADDR_OFFSET_LOW_OFF_UNROLL_ADDR_OFFSET_LOW_MASK)
/*! @} */

/*! @name VSECDMA_UNROLL_ADDR_OFFSET_HIGH_OFF - DMA Register Map Start Address Offset High Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_VSECDMA_UNROLL_ADDR_OFFSET_HIGH_OFF_UNROLL_ADDR_OFFSET_HIGH_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_VSECDMA_UNROLL_ADDR_OFFSET_HIGH_OFF_UNROLL_ADDR_OFFSET_HIGH_SHIFT (0U)
#define SerDes_EP_PCIe_1_VSECDMA_UNROLL_ADDR_OFFSET_HIGH_OFF_UNROLL_ADDR_OFFSET_HIGH_WIDTH (32U)
#define SerDes_EP_PCIe_1_VSECDMA_UNROLL_ADDR_OFFSET_HIGH_OFF_UNROLL_ADDR_OFFSET_HIGH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VSECDMA_UNROLL_ADDR_OFFSET_HIGH_OFF_UNROLL_ADDR_OFFSET_HIGH_SHIFT)) & SerDes_EP_PCIe_1_VSECDMA_UNROLL_ADDR_OFFSET_HIGH_OFF_UNROLL_ADDR_OFFSET_HIGH_MASK)
/*! @} */

/*! @name ACK_LATENCY_TIMER_OFF - Ack Latency Timer and Replay Timer Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_ACK_LATENCY_TIMER_OFF_ROUND_TRIP_LATENCY_TIME_LIMIT_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_ACK_LATENCY_TIMER_OFF_ROUND_TRIP_LATENCY_TIME_LIMIT_SHIFT (0U)
#define SerDes_EP_PCIe_1_ACK_LATENCY_TIMER_OFF_ROUND_TRIP_LATENCY_TIME_LIMIT_WIDTH (16U)
#define SerDes_EP_PCIe_1_ACK_LATENCY_TIMER_OFF_ROUND_TRIP_LATENCY_TIME_LIMIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ACK_LATENCY_TIMER_OFF_ROUND_TRIP_LATENCY_TIME_LIMIT_SHIFT)) & SerDes_EP_PCIe_1_ACK_LATENCY_TIMER_OFF_ROUND_TRIP_LATENCY_TIME_LIMIT_MASK)

#define SerDes_EP_PCIe_1_ACK_LATENCY_TIMER_OFF_REPLAY_TIME_LIMIT_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_ACK_LATENCY_TIMER_OFF_REPLAY_TIME_LIMIT_SHIFT (16U)
#define SerDes_EP_PCIe_1_ACK_LATENCY_TIMER_OFF_REPLAY_TIME_LIMIT_WIDTH (16U)
#define SerDes_EP_PCIe_1_ACK_LATENCY_TIMER_OFF_REPLAY_TIME_LIMIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ACK_LATENCY_TIMER_OFF_REPLAY_TIME_LIMIT_SHIFT)) & SerDes_EP_PCIe_1_ACK_LATENCY_TIMER_OFF_REPLAY_TIME_LIMIT_MASK)
/*! @} */

/*! @name VENDOR_SPEC_DLLP_OFF - Vendor Specific DLLP Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_VENDOR_SPEC_DLLP_OFF_VENDOR_SPEC_DLLP_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_VENDOR_SPEC_DLLP_OFF_VENDOR_SPEC_DLLP_SHIFT (0U)
#define SerDes_EP_PCIe_1_VENDOR_SPEC_DLLP_OFF_VENDOR_SPEC_DLLP_WIDTH (32U)
#define SerDes_EP_PCIe_1_VENDOR_SPEC_DLLP_OFF_VENDOR_SPEC_DLLP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VENDOR_SPEC_DLLP_OFF_VENDOR_SPEC_DLLP_SHIFT)) & SerDes_EP_PCIe_1_VENDOR_SPEC_DLLP_OFF_VENDOR_SPEC_DLLP_MASK)
/*! @} */

/*! @name PORT_FORCE_OFF - Port Force Link */
/*! @{ */

#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_LINK_NUM_MASK (0xFFU)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_LINK_NUM_SHIFT (0U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_LINK_NUM_WIDTH (8U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_LINK_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_FORCE_OFF_LINK_NUM_SHIFT)) & SerDes_EP_PCIe_1_PORT_FORCE_OFF_LINK_NUM_MASK)

#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_FORCED_LTSSM_MASK (0xF00U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_FORCED_LTSSM_SHIFT (8U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_FORCED_LTSSM_WIDTH (4U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_FORCED_LTSSM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_FORCE_OFF_FORCED_LTSSM_SHIFT)) & SerDes_EP_PCIe_1_PORT_FORCE_OFF_FORCED_LTSSM_MASK)

#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_RSVDP_12_MASK (0x7000U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_RSVDP_12_SHIFT (12U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_RSVDP_12_WIDTH (3U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_RSVDP_12(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_FORCE_OFF_RSVDP_12_SHIFT)) & SerDes_EP_PCIe_1_PORT_FORCE_OFF_RSVDP_12_MASK)

#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_FORCE_EN_MASK (0x8000U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_FORCE_EN_SHIFT (15U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_FORCE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_FORCE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_FORCE_OFF_FORCE_EN_SHIFT)) & SerDes_EP_PCIe_1_PORT_FORCE_OFF_FORCE_EN_MASK)

#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_LINK_STATE_MASK (0x3F0000U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_LINK_STATE_SHIFT (16U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_LINK_STATE_WIDTH (6U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_LINK_STATE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_FORCE_OFF_LINK_STATE_SHIFT)) & SerDes_EP_PCIe_1_PORT_FORCE_OFF_LINK_STATE_MASK)

#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_SUPPORT_PART_LANES_RXEI_EXIT_MASK (0x400000U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_SUPPORT_PART_LANES_RXEI_EXIT_SHIFT (22U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_SUPPORT_PART_LANES_RXEI_EXIT_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_SUPPORT_PART_LANES_RXEI_EXIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_FORCE_OFF_SUPPORT_PART_LANES_RXEI_EXIT_SHIFT)) & SerDes_EP_PCIe_1_PORT_FORCE_OFF_SUPPORT_PART_LANES_RXEI_EXIT_MASK)

#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_RSVDP_24_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_RSVDP_24_SHIFT (24U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_RSVDP_24_WIDTH (8U)
#define SerDes_EP_PCIe_1_PORT_FORCE_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_FORCE_OFF_RSVDP_24_SHIFT)) & SerDes_EP_PCIe_1_PORT_FORCE_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name ACK_F_ASPM_CTRL_OFF - Ack Frequency and L0-L1 ASPM Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ACK_FREQ_MASK (0xFFU)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ACK_FREQ_SHIFT (0U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ACK_FREQ_WIDTH (8U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ACK_FREQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ACK_FREQ_SHIFT)) & SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ACK_FREQ_MASK)

#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ACK_N_FTS_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ACK_N_FTS_SHIFT (8U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ACK_N_FTS_WIDTH (8U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ACK_N_FTS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ACK_N_FTS_SHIFT)) & SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ACK_N_FTS_MASK)

#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_COMMON_CLK_N_FTS_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_COMMON_CLK_N_FTS_SHIFT (16U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_COMMON_CLK_N_FTS_WIDTH (8U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_COMMON_CLK_N_FTS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_COMMON_CLK_N_FTS_SHIFT)) & SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_COMMON_CLK_N_FTS_MASK)

#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_L0S_ENTRANCE_LATENCY_MASK (0x7000000U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_L0S_ENTRANCE_LATENCY_SHIFT (24U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_L0S_ENTRANCE_LATENCY_WIDTH (3U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_L0S_ENTRANCE_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_L0S_ENTRANCE_LATENCY_SHIFT)) & SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_L0S_ENTRANCE_LATENCY_MASK)

#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_L1_ENTRANCE_LATENCY_MASK (0x38000000U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_L1_ENTRANCE_LATENCY_SHIFT (27U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_L1_ENTRANCE_LATENCY_WIDTH (3U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_L1_ENTRANCE_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_L1_ENTRANCE_LATENCY_SHIFT)) & SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_L1_ENTRANCE_LATENCY_MASK)

#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ENTER_ASPM_MASK (0x40000000U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ENTER_ASPM_SHIFT (30U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ENTER_ASPM_WIDTH (1U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ENTER_ASPM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ENTER_ASPM_SHIFT)) & SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_ENTER_ASPM_MASK)

#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_RSVDP_31_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_RSVDP_31_SHIFT (31U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_RSVDP_31_WIDTH (1U)
#define SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_RSVDP_31(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_RSVDP_31_SHIFT)) & SerDes_EP_PCIe_1_ACK_F_ASPM_CTRL_OFF_RSVDP_31_MASK)
/*! @} */

/*! @name PORT_LINK_CTRL_OFF - Port Link Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_VENDOR_SPECIFIC_DLLP_REQ_MASK (0x1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_VENDOR_SPECIFIC_DLLP_REQ_SHIFT (0U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_VENDOR_SPECIFIC_DLLP_REQ_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_VENDOR_SPECIFIC_DLLP_REQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_VENDOR_SPECIFIC_DLLP_REQ_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_VENDOR_SPECIFIC_DLLP_REQ_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_SCRAMBLE_DISABLE_MASK (0x2U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_SCRAMBLE_DISABLE_SHIFT (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_SCRAMBLE_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_SCRAMBLE_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_SCRAMBLE_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_SCRAMBLE_DISABLE_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LOOPBACK_ENABLE_MASK (0x4U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LOOPBACK_ENABLE_SHIFT (2U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LOOPBACK_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LOOPBACK_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LOOPBACK_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LOOPBACK_ENABLE_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RESET_ASSERT_MASK (0x8U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RESET_ASSERT_SHIFT (3U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RESET_ASSERT_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RESET_ASSERT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RESET_ASSERT_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RESET_ASSERT_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_4_MASK (0x10U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_4_SHIFT (4U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_4_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_4_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_4_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_DLL_LINK_EN_MASK (0x20U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_DLL_LINK_EN_SHIFT (5U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_DLL_LINK_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_DLL_LINK_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_DLL_LINK_EN_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_DLL_LINK_EN_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_DISABLE_MASK (0x40U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_DISABLE_SHIFT (6U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_DISABLE_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_FAST_LINK_MODE_MASK (0x80U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_FAST_LINK_MODE_SHIFT (7U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_FAST_LINK_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_FAST_LINK_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_FAST_LINK_MODE_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_FAST_LINK_MODE_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_RATE_MASK (0xF00U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_RATE_SHIFT (8U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_RATE_WIDTH (4U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_RATE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_RATE_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_RATE_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_12_MASK (0xF000U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_12_SHIFT (12U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_12_WIDTH (4U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_12(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_12_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_12_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_CAPABLE_MASK (0x3F0000U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_CAPABLE_SHIFT (16U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_CAPABLE_WIDTH (6U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_CAPABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_CAPABLE_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_LINK_CAPABLE_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_BEACON_ENABLE_MASK (0x1000000U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_BEACON_ENABLE_SHIFT (24U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_BEACON_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_BEACON_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_BEACON_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_BEACON_ENABLE_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_CORRUPT_LCRC_ENABLE_MASK (0x2000000U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_CORRUPT_LCRC_ENABLE_SHIFT (25U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_CORRUPT_LCRC_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_CORRUPT_LCRC_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_CORRUPT_LCRC_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_CORRUPT_LCRC_ENABLE_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_EXTENDED_SYNCH_MASK (0x4000000U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_EXTENDED_SYNCH_SHIFT (26U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_EXTENDED_SYNCH_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_EXTENDED_SYNCH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_EXTENDED_SYNCH_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_EXTENDED_SYNCH_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_TRANSMIT_LANE_REVERSALE_ENABLE_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_TRANSMIT_LANE_REVERSALE_ENABLE_SHIFT (27U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_TRANSMIT_LANE_REVERSALE_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_TRANSMIT_LANE_REVERSALE_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_TRANSMIT_LANE_REVERSALE_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_TRANSMIT_LANE_REVERSALE_ENABLE_MASK)

#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_28_MASK (0xF0000000U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_28_SHIFT (28U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_28_WIDTH (4U)
#define SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_28(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_28_SHIFT)) & SerDes_EP_PCIe_1_PORT_LINK_CTRL_OFF_RSVDP_28_MASK)
/*! @} */

/*! @name LANE_SKEW_OFF - Lane Skew Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_INSERT_LANE_SKEW_MASK (0xFFFFFFU)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_INSERT_LANE_SKEW_SHIFT (0U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_INSERT_LANE_SKEW_WIDTH (24U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_INSERT_LANE_SKEW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LANE_SKEW_OFF_INSERT_LANE_SKEW_SHIFT)) & SerDes_EP_PCIe_1_LANE_SKEW_OFF_INSERT_LANE_SKEW_MASK)

#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_FLOW_CTRL_DISABLE_MASK (0x1000000U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_FLOW_CTRL_DISABLE_SHIFT (24U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_FLOW_CTRL_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_FLOW_CTRL_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LANE_SKEW_OFF_FLOW_CTRL_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_LANE_SKEW_OFF_FLOW_CTRL_DISABLE_MASK)

#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_ACK_NAK_DISABLE_MASK (0x2000000U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_ACK_NAK_DISABLE_SHIFT (25U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_ACK_NAK_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_ACK_NAK_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LANE_SKEW_OFF_ACK_NAK_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_LANE_SKEW_OFF_ACK_NAK_DISABLE_MASK)

#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_ELASTIC_BUFFER_MODE_MASK (0x4000000U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_ELASTIC_BUFFER_MODE_SHIFT (26U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_ELASTIC_BUFFER_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_ELASTIC_BUFFER_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LANE_SKEW_OFF_ELASTIC_BUFFER_MODE_SHIFT)) & SerDes_EP_PCIe_1_LANE_SKEW_OFF_ELASTIC_BUFFER_MODE_MASK)

#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_IMPLEMENT_NUM_LANES_MASK (0x78000000U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_IMPLEMENT_NUM_LANES_SHIFT (27U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_IMPLEMENT_NUM_LANES_WIDTH (4U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_IMPLEMENT_NUM_LANES(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LANE_SKEW_OFF_IMPLEMENT_NUM_LANES_SHIFT)) & SerDes_EP_PCIe_1_LANE_SKEW_OFF_IMPLEMENT_NUM_LANES_MASK)

#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_DISABLE_LANE_TO_LANE_DESKEW_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_DISABLE_LANE_TO_LANE_DESKEW_SHIFT (31U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_DISABLE_LANE_TO_LANE_DESKEW_WIDTH (1U)
#define SerDes_EP_PCIe_1_LANE_SKEW_OFF_DISABLE_LANE_TO_LANE_DESKEW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LANE_SKEW_OFF_DISABLE_LANE_TO_LANE_DESKEW_SHIFT)) & SerDes_EP_PCIe_1_LANE_SKEW_OFF_DISABLE_LANE_TO_LANE_DESKEW_MASK)
/*! @} */

/*! @name TIMER_CTRL_MAX_FUNC_NUM_OFF - Timer Control and Max Function Number Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_MAX_FUNC_NUM_MASK (0xFFU)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_MAX_FUNC_NUM_SHIFT (0U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_MAX_FUNC_NUM_WIDTH (8U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_MAX_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_MAX_FUNC_NUM_SHIFT)) & SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_MAX_FUNC_NUM_MASK)

#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_RSVDP_8_MASK (0x3F00U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_RSVDP_8_SHIFT (8U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_RSVDP_8_WIDTH (6U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_RSVDP_8_SHIFT)) & SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_RSVDP_8_MASK)

#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_REPLAY_TIMER_MASK (0x7C000U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_REPLAY_TIMER_SHIFT (14U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_REPLAY_TIMER_WIDTH (5U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_REPLAY_TIMER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_REPLAY_TIMER_SHIFT)) & SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_REPLAY_TIMER_MASK)

#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_ACK_NAK_MASK (0xF80000U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_ACK_NAK_SHIFT (19U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_ACK_NAK_WIDTH (5U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_ACK_NAK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_ACK_NAK_SHIFT)) & SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_TIMER_MOD_ACK_NAK_MASK)

#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_UPDATE_FREQ_TIMER_MASK (0x1F000000U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_UPDATE_FREQ_TIMER_SHIFT (24U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_UPDATE_FREQ_TIMER_WIDTH (5U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_UPDATE_FREQ_TIMER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_UPDATE_FREQ_TIMER_SHIFT)) & SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_UPDATE_FREQ_TIMER_MASK)

#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_FAST_LINK_SCALING_FACTOR_MASK (0x60000000U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_FAST_LINK_SCALING_FACTOR_SHIFT (29U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_FAST_LINK_SCALING_FACTOR_WIDTH (2U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_FAST_LINK_SCALING_FACTOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_FAST_LINK_SCALING_FACTOR_SHIFT)) & SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_FAST_LINK_SCALING_FACTOR_MASK)

#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_RSVDP_31_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_RSVDP_31_SHIFT (31U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_RSVDP_31_WIDTH (1U)
#define SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_RSVDP_31(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_RSVDP_31_SHIFT)) & SerDes_EP_PCIe_1_TIMER_CTRL_MAX_FUNC_NUM_OFF_RSVDP_31_MASK)
/*! @} */

/*! @name SYMBOL_TIMER_FILTER_1_OFF - Symbol Timer Register and Filter Mask 1 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_SKP_INT_VAL_MASK (0x7FFU)
#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_SKP_INT_VAL_SHIFT (0U)
#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_SKP_INT_VAL_WIDTH (11U)
#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_SKP_INT_VAL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_SKP_INT_VAL_SHIFT)) & SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_SKP_INT_VAL_MASK)

#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_EIDLE_TIMER_MASK (0x7800U)
#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_EIDLE_TIMER_SHIFT (11U)
#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_EIDLE_TIMER_WIDTH (4U)
#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_EIDLE_TIMER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_EIDLE_TIMER_SHIFT)) & SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_EIDLE_TIMER_MASK)

#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_DISABLE_FC_WD_TIMER_MASK (0x8000U)
#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_DISABLE_FC_WD_TIMER_SHIFT (15U)
#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_DISABLE_FC_WD_TIMER_WIDTH (1U)
#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_DISABLE_FC_WD_TIMER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_DISABLE_FC_WD_TIMER_SHIFT)) & SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_DISABLE_FC_WD_TIMER_MASK)

#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_MASK_RADM_1_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_MASK_RADM_1_SHIFT (16U)
#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_MASK_RADM_1_WIDTH (16U)
#define SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_MASK_RADM_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_MASK_RADM_1_SHIFT)) & SerDes_EP_PCIe_1_SYMBOL_TIMER_FILTER_1_OFF_MASK_RADM_1_MASK)
/*! @} */

/*! @name FILTER_MASK_2_OFF - Filter Mask 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_FILTER_MASK_2_OFF_MASK_RADM_2_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_FILTER_MASK_2_OFF_MASK_RADM_2_SHIFT (0U)
#define SerDes_EP_PCIe_1_FILTER_MASK_2_OFF_MASK_RADM_2_WIDTH (32U)
#define SerDes_EP_PCIe_1_FILTER_MASK_2_OFF_MASK_RADM_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_FILTER_MASK_2_OFF_MASK_RADM_2_SHIFT)) & SerDes_EP_PCIe_1_FILTER_MASK_2_OFF_MASK_RADM_2_MASK)
/*! @} */

/*! @name AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF - AMBA Multiple Outbound Decomposed NP SubRequests Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_OB_RD_SPLIT_BURST_EN_MASK (0x1U)
#define SerDes_EP_PCIe_1_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_OB_RD_SPLIT_BURST_EN_SHIFT (0U)
#define SerDes_EP_PCIe_1_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_OB_RD_SPLIT_BURST_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_OB_RD_SPLIT_BURST_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_OB_RD_SPLIT_BURST_EN_SHIFT)) & SerDes_EP_PCIe_1_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_OB_RD_SPLIT_BURST_EN_MASK)

#define SerDes_EP_PCIe_1_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_RSVDP_1_MASK (0xFFFFFFFEU)
#define SerDes_EP_PCIe_1_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_RSVDP_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_RSVDP_1_WIDTH (31U)
#define SerDes_EP_PCIe_1_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_RSVDP_1_SHIFT)) & SerDes_EP_PCIe_1_AMBA_MUL_OB_DECOMP_NP_SUB_REQ_CTRL_OFF_RSVDP_1_MASK)
/*! @} */

/*! @name PL_DEBUG0_OFF - Debug Register 0. */
/*! @{ */

#define SerDes_EP_PCIe_1_PL_DEBUG0_OFF_DEB_REG_0_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_PL_DEBUG0_OFF_DEB_REG_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_PL_DEBUG0_OFF_DEB_REG_0_WIDTH (32U)
#define SerDes_EP_PCIe_1_PL_DEBUG0_OFF_DEB_REG_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_DEBUG0_OFF_DEB_REG_0_SHIFT)) & SerDes_EP_PCIe_1_PL_DEBUG0_OFF_DEB_REG_0_MASK)
/*! @} */

/*! @name PL_DEBUG1_OFF - Debug Register 1. */
/*! @{ */

#define SerDes_EP_PCIe_1_PL_DEBUG1_OFF_DEB_REG_1_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_PL_DEBUG1_OFF_DEB_REG_1_SHIFT (0U)
#define SerDes_EP_PCIe_1_PL_DEBUG1_OFF_DEB_REG_1_WIDTH (32U)
#define SerDes_EP_PCIe_1_PL_DEBUG1_OFF_DEB_REG_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_DEBUG1_OFF_DEB_REG_1_SHIFT)) & SerDes_EP_PCIe_1_PL_DEBUG1_OFF_DEB_REG_1_MASK)
/*! @} */

/*! @name TX_P_FC_CREDIT_STATUS_OFF - Transmit Posted FC Credit Status. */
/*! @{ */

#define SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_TX_P_DATA_FC_CREDIT_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_TX_P_DATA_FC_CREDIT_SHIFT (0U)
#define SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_TX_P_DATA_FC_CREDIT_WIDTH (12U)
#define SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_TX_P_DATA_FC_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_TX_P_DATA_FC_CREDIT_SHIFT)) & SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_TX_P_DATA_FC_CREDIT_MASK)

#define SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_TX_P_HEADER_FC_CREDIT_MASK (0xFF000U)
#define SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_TX_P_HEADER_FC_CREDIT_SHIFT (12U)
#define SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_TX_P_HEADER_FC_CREDIT_WIDTH (8U)
#define SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_TX_P_HEADER_FC_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_TX_P_HEADER_FC_CREDIT_SHIFT)) & SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_TX_P_HEADER_FC_CREDIT_MASK)

#define SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_RSVDP_TX_P_FC_CREDIT_STATUS_MASK (0xFFF00000U)
#define SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_RSVDP_TX_P_FC_CREDIT_STATUS_SHIFT (20U)
#define SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_RSVDP_TX_P_FC_CREDIT_STATUS_WIDTH (12U)
#define SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_RSVDP_TX_P_FC_CREDIT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_RSVDP_TX_P_FC_CREDIT_STATUS_SHIFT)) & SerDes_EP_PCIe_1_TX_P_FC_CREDIT_STATUS_OFF_RSVDP_TX_P_FC_CREDIT_STATUS_MASK)
/*! @} */

/*! @name TX_NP_FC_CREDIT_STATUS_OFF - Transmit Non-Posted FC Credit Status. */
/*! @{ */

#define SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_DATA_FC_CREDIT_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_DATA_FC_CREDIT_SHIFT (0U)
#define SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_DATA_FC_CREDIT_WIDTH (12U)
#define SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_DATA_FC_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_DATA_FC_CREDIT_SHIFT)) & SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_DATA_FC_CREDIT_MASK)

#define SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_HEADER_FC_CREDIT_MASK (0xFF000U)
#define SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_HEADER_FC_CREDIT_SHIFT (12U)
#define SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_HEADER_FC_CREDIT_WIDTH (8U)
#define SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_HEADER_FC_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_HEADER_FC_CREDIT_SHIFT)) & SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_TX_NP_HEADER_FC_CREDIT_MASK)

#define SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_RSVDP_TX_NP_FC_CREDIT_STATUS_MASK (0xFFF00000U)
#define SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_RSVDP_TX_NP_FC_CREDIT_STATUS_SHIFT (20U)
#define SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_RSVDP_TX_NP_FC_CREDIT_STATUS_WIDTH (12U)
#define SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_RSVDP_TX_NP_FC_CREDIT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_RSVDP_TX_NP_FC_CREDIT_STATUS_SHIFT)) & SerDes_EP_PCIe_1_TX_NP_FC_CREDIT_STATUS_OFF_RSVDP_TX_NP_FC_CREDIT_STATUS_MASK)
/*! @} */

/*! @name TX_CPL_FC_CREDIT_STATUS_OFF - Transmit Completion FC Credit Status */
/*! @{ */

#define SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_DATA_FC_CREDIT_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_DATA_FC_CREDIT_SHIFT (0U)
#define SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_DATA_FC_CREDIT_WIDTH (12U)
#define SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_DATA_FC_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_DATA_FC_CREDIT_SHIFT)) & SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_DATA_FC_CREDIT_MASK)

#define SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_HEADER_FC_CREDIT_MASK (0xFF000U)
#define SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_HEADER_FC_CREDIT_SHIFT (12U)
#define SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_HEADER_FC_CREDIT_WIDTH (8U)
#define SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_HEADER_FC_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_HEADER_FC_CREDIT_SHIFT)) & SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_TX_CPL_HEADER_FC_CREDIT_MASK)

#define SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_RSVDP_TX_CPL_FC_CREDIT_STATUS_MASK (0xFFF00000U)
#define SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_RSVDP_TX_CPL_FC_CREDIT_STATUS_SHIFT (20U)
#define SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_RSVDP_TX_CPL_FC_CREDIT_STATUS_WIDTH (12U)
#define SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_RSVDP_TX_CPL_FC_CREDIT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_RSVDP_TX_CPL_FC_CREDIT_STATUS_SHIFT)) & SerDes_EP_PCIe_1_TX_CPL_FC_CREDIT_STATUS_OFF_RSVDP_TX_CPL_FC_CREDIT_STATUS_MASK)
/*! @} */

/*! @name QUEUE_STATUS_OFF - Queue Status. */
/*! @{ */

#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_TLP_FC_CREDIT_NON_RETURN_MASK (0x1U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_TLP_FC_CREDIT_NON_RETURN_SHIFT (0U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_TLP_FC_CREDIT_NON_RETURN_WIDTH (1U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_TLP_FC_CREDIT_NON_RETURN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_TLP_FC_CREDIT_NON_RETURN_SHIFT)) & SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_TLP_FC_CREDIT_NON_RETURN_MASK)

#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TX_RETRY_BUFFER_NE_MASK (0x2U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TX_RETRY_BUFFER_NE_SHIFT (1U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TX_RETRY_BUFFER_NE_WIDTH (1U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TX_RETRY_BUFFER_NE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TX_RETRY_BUFFER_NE_SHIFT)) & SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TX_RETRY_BUFFER_NE_MASK)

#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_QUEUE_NON_EMPTY_MASK (0x4U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_QUEUE_NON_EMPTY_SHIFT (2U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_QUEUE_NON_EMPTY_WIDTH (1U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_QUEUE_NON_EMPTY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_QUEUE_NON_EMPTY_SHIFT)) & SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_QUEUE_NON_EMPTY_MASK)

#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_QUEUE_OVERFLOW_MASK (0x8U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_QUEUE_OVERFLOW_SHIFT (3U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_QUEUE_OVERFLOW_WIDTH (1U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_QUEUE_OVERFLOW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_QUEUE_OVERFLOW_SHIFT)) & SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_QUEUE_OVERFLOW_MASK)

#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RSVDP_4_MASK (0x1FF0U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RSVDP_4_SHIFT (4U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RSVDP_4_WIDTH (9U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RSVDP_4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RSVDP_4_SHIFT)) & SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RSVDP_4_MASK)

#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_NON_EMPTY_MASK (0x2000U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_NON_EMPTY_SHIFT (13U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_NON_EMPTY_WIDTH (1U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_NON_EMPTY(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_NON_EMPTY_SHIFT)) & SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RX_SERIALIZATION_Q_NON_EMPTY_MASK)

#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_MASK (0x1FFF0000U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_SHIFT (16U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_WIDTH (13U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_SHIFT)) & SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_MASK)

#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RSVDP_29_MASK (0x60000000U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RSVDP_29_SHIFT (29U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RSVDP_29_WIDTH (2U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RSVDP_29(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RSVDP_29_SHIFT)) & SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_RSVDP_29_MASK)

#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_EN_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_EN_SHIFT (31U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_EN_SHIFT)) & SerDes_EP_PCIe_1_QUEUE_STATUS_OFF_TIMER_MOD_FLOW_CONTROL_EN_MASK)
/*! @} */

/*! @name VC_TX_ARBI_1_OFF - VC Transmit Arbitration Register 1. */
/*! @{ */

#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_0_MASK (0xFFU)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_0_WIDTH (8U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_0_SHIFT)) & SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_0_MASK)

#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_1_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_1_SHIFT (8U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_1_WIDTH (8U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_1_SHIFT)) & SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_1_MASK)

#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_2_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_2_SHIFT (16U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_2_WIDTH (8U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_2_SHIFT)) & SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_2_MASK)

#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_3_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_3_SHIFT (24U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_3_WIDTH (8U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_3_SHIFT)) & SerDes_EP_PCIe_1_VC_TX_ARBI_1_OFF_WRR_WEIGHT_VC_3_MASK)
/*! @} */

/*! @name VC_TX_ARBI_2_OFF - VC Transmit Arbitration Register 2. */
/*! @{ */

#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_4_MASK (0xFFU)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_4_SHIFT (0U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_4_WIDTH (8U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_4_SHIFT)) & SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_4_MASK)

#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_5_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_5_SHIFT (8U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_5_WIDTH (8U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_5_SHIFT)) & SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_5_MASK)

#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_6_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_6_SHIFT (16U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_6_WIDTH (8U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_6(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_6_SHIFT)) & SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_6_MASK)

#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_7_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_7_SHIFT (24U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_7_WIDTH (8U)
#define SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_7(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_7_SHIFT)) & SerDes_EP_PCIe_1_VC_TX_ARBI_2_OFF_WRR_WEIGHT_VC_7_MASK)
/*! @} */

/*! @name VC0_P_RX_Q_CTRL_OFF - Segmented-Buffer VC0 Posted Receive Queue Control. */
/*! @{ */

#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_CREDIT_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_CREDIT_SHIFT (0U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_CREDIT_WIDTH (12U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_CREDIT_SHIFT)) & SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_CREDIT_MASK)

#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_HEADER_CREDIT_MASK (0xFF000U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_HEADER_CREDIT_SHIFT (12U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_HEADER_CREDIT_WIDTH (8U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_HEADER_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_HEADER_CREDIT_SHIFT)) & SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_HEADER_CREDIT_MASK)

#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_RESERVED4_MASK (0x100000U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_RESERVED4_SHIFT (20U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_RESERVED4_WIDTH (1U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_RESERVED4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_RESERVED4_SHIFT)) & SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_RESERVED4_MASK)

#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_TLP_Q_MODE_MASK (0xE00000U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_TLP_Q_MODE_SHIFT (21U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_TLP_Q_MODE_WIDTH (3U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_TLP_Q_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_TLP_Q_MODE_SHIFT)) & SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_TLP_Q_MODE_MASK)

#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_HDR_SCALE_MASK (0x3000000U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_HDR_SCALE_SHIFT (24U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_HDR_SCALE_WIDTH (2U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_HDR_SCALE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_HDR_SCALE_SHIFT)) & SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_HDR_SCALE_MASK)

#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_SCALE_MASK (0xC000000U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_SCALE_SHIFT (26U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_SCALE_WIDTH (2U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_SCALE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_SCALE_SHIFT)) & SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC0_P_DATA_SCALE_MASK)

#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_RESERVED5_MASK (0x30000000U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_RESERVED5_SHIFT (28U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_RESERVED5_WIDTH (2U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_RESERVED5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_RESERVED5_SHIFT)) & SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_RESERVED5_MASK)

#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_TLP_TYPE_ORDERING_VC0_MASK (0x40000000U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_TLP_TYPE_ORDERING_VC0_SHIFT (30U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_TLP_TYPE_ORDERING_VC0_WIDTH (1U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_TLP_TYPE_ORDERING_VC0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_TLP_TYPE_ORDERING_VC0_SHIFT)) & SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_TLP_TYPE_ORDERING_VC0_MASK)

#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC_ORDERING_RX_Q_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC_ORDERING_RX_Q_SHIFT (31U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC_ORDERING_RX_Q_WIDTH (1U)
#define SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC_ORDERING_RX_Q(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC_ORDERING_RX_Q_SHIFT)) & SerDes_EP_PCIe_1_VC0_P_RX_Q_CTRL_OFF_VC_ORDERING_RX_Q_MASK)
/*! @} */

/*! @name VC0_NP_RX_Q_CTRL_OFF - Segmented-Buffer VC0 Non-Posted Receive Queue Control. */
/*! @{ */

#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_CREDIT_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_CREDIT_SHIFT (0U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_CREDIT_WIDTH (12U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_CREDIT_SHIFT)) & SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_CREDIT_MASK)

#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HEADER_CREDIT_MASK (0xFF000U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HEADER_CREDIT_SHIFT (12U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HEADER_CREDIT_WIDTH (8U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HEADER_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HEADER_CREDIT_SHIFT)) & SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HEADER_CREDIT_MASK)

#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_RESERVED6_MASK (0x100000U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_RESERVED6_SHIFT (20U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_RESERVED6_WIDTH (1U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_RESERVED6(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_RESERVED6_SHIFT)) & SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_RESERVED6_MASK)

#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_TLP_Q_MODE_MASK (0xE00000U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_TLP_Q_MODE_SHIFT (21U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_TLP_Q_MODE_WIDTH (3U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_TLP_Q_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_TLP_Q_MODE_SHIFT)) & SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_TLP_Q_MODE_MASK)

#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HDR_SCALE_MASK (0x3000000U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HDR_SCALE_SHIFT (24U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HDR_SCALE_WIDTH (2U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HDR_SCALE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HDR_SCALE_SHIFT)) & SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_HDR_SCALE_MASK)

#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_SCALE_MASK (0xC000000U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_SCALE_SHIFT (26U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_SCALE_WIDTH (2U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_SCALE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_SCALE_SHIFT)) & SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_VC0_NP_DATA_SCALE_MASK)

#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_RESERVED7_MASK (0xF0000000U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_RESERVED7_SHIFT (28U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_RESERVED7_WIDTH (4U)
#define SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_RESERVED7(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_RESERVED7_SHIFT)) & SerDes_EP_PCIe_1_VC0_NP_RX_Q_CTRL_OFF_RESERVED7_MASK)
/*! @} */

/*! @name VC0_CPL_RX_Q_CTRL_OFF - Segmented-Buffer VC0 Completion Receive Queue Control. */
/*! @{ */

#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_CREDIT_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_CREDIT_SHIFT (0U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_CREDIT_WIDTH (12U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_CREDIT_SHIFT)) & SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_CREDIT_MASK)

#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HEADER_CREDIT_MASK (0xFF000U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HEADER_CREDIT_SHIFT (12U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HEADER_CREDIT_WIDTH (8U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HEADER_CREDIT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HEADER_CREDIT_SHIFT)) & SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HEADER_CREDIT_MASK)

#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_RESERVED8_MASK (0x100000U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_RESERVED8_SHIFT (20U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_RESERVED8_WIDTH (1U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_RESERVED8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_RESERVED8_SHIFT)) & SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_RESERVED8_MASK)

#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_TLP_Q_MODE_MASK (0xE00000U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_TLP_Q_MODE_SHIFT (21U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_TLP_Q_MODE_WIDTH (3U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_TLP_Q_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_TLP_Q_MODE_SHIFT)) & SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_TLP_Q_MODE_MASK)

#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HDR_SCALE_MASK (0x3000000U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HDR_SCALE_SHIFT (24U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HDR_SCALE_WIDTH (2U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HDR_SCALE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HDR_SCALE_SHIFT)) & SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_HDR_SCALE_MASK)

#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_SCALE_MASK (0xC000000U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_SCALE_SHIFT (26U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_SCALE_WIDTH (2U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_SCALE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_SCALE_SHIFT)) & SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_VC0_CPL_DATA_SCALE_MASK)

#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_RESERVED9_MASK (0xF0000000U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_RESERVED9_SHIFT (28U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_RESERVED9_WIDTH (4U)
#define SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_RESERVED9(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_RESERVED9_SHIFT)) & SerDes_EP_PCIe_1_VC0_CPL_RX_Q_CTRL_OFF_RESERVED9_MASK)
/*! @} */

/*! @name GEN2_CTRL_OFF - Link Width and Speed Change Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_FAST_TRAINING_SEQ_MASK (0xFFU)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_FAST_TRAINING_SEQ_SHIFT (0U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_FAST_TRAINING_SEQ_WIDTH (8U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_FAST_TRAINING_SEQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_FAST_TRAINING_SEQ_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_FAST_TRAINING_SEQ_MASK)

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_NUM_OF_LANES_MASK (0x1F00U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_NUM_OF_LANES_SHIFT (8U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_NUM_OF_LANES_WIDTH (5U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_NUM_OF_LANES(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_NUM_OF_LANES_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_NUM_OF_LANES_MASK)

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_PRE_DET_LANE_MASK (0xE000U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_PRE_DET_LANE_SHIFT (13U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_PRE_DET_LANE_WIDTH (3U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_PRE_DET_LANE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_PRE_DET_LANE_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_PRE_DET_LANE_MASK)

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_AUTO_LANE_FLIP_CTRL_EN_MASK (0x10000U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_AUTO_LANE_FLIP_CTRL_EN_SHIFT (16U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_AUTO_LANE_FLIP_CTRL_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_AUTO_LANE_FLIP_CTRL_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_AUTO_LANE_FLIP_CTRL_EN_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_AUTO_LANE_FLIP_CTRL_EN_MASK)

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_DIRECT_SPEED_CHANGE_MASK (0x20000U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_DIRECT_SPEED_CHANGE_SHIFT (17U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_DIRECT_SPEED_CHANGE_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_DIRECT_SPEED_CHANGE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_DIRECT_SPEED_CHANGE_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_DIRECT_SPEED_CHANGE_MASK)

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_CONFIG_PHY_TX_CHANGE_MASK (0x40000U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_CONFIG_PHY_TX_CHANGE_SHIFT (18U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_CONFIG_PHY_TX_CHANGE_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_CONFIG_PHY_TX_CHANGE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_CONFIG_PHY_TX_CHANGE_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_CONFIG_PHY_TX_CHANGE_MASK)

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_CONFIG_TX_COMP_RX_MASK (0x80000U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_CONFIG_TX_COMP_RX_SHIFT (19U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_CONFIG_TX_COMP_RX_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_CONFIG_TX_COMP_RX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_CONFIG_TX_COMP_RX_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_CONFIG_TX_COMP_RX_MASK)

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SEL_DEEMPHASIS_MASK (0x100000U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SEL_DEEMPHASIS_SHIFT (20U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SEL_DEEMPHASIS_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SEL_DEEMPHASIS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SEL_DEEMPHASIS_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SEL_DEEMPHASIS_MASK)

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_GEN1_EI_INFERENCE_MASK (0x200000U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_GEN1_EI_INFERENCE_SHIFT (21U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_GEN1_EI_INFERENCE_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_GEN1_EI_INFERENCE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_GEN1_EI_INFERENCE_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_GEN1_EI_INFERENCE_MASK)

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SELECT_DEEMPH_VAR_MUX_MASK (0x400000U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SELECT_DEEMPH_VAR_MUX_SHIFT (22U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SELECT_DEEMPH_VAR_MUX_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SELECT_DEEMPH_VAR_MUX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SELECT_DEEMPH_VAR_MUX_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SELECT_DEEMPH_VAR_MUX_MASK)

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SELECTABLE_DEEMPH_BIT_MUX_MASK (0x800000U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SELECTABLE_DEEMPH_BIT_MUX_SHIFT (23U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SELECTABLE_DEEMPH_BIT_MUX_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SELECTABLE_DEEMPH_BIT_MUX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SELECTABLE_DEEMPH_BIT_MUX_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_SELECTABLE_DEEMPH_BIT_MUX_MASK)

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_LANE_UNDER_TEST_MASK (0xF000000U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_LANE_UNDER_TEST_SHIFT (24U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_LANE_UNDER_TEST_WIDTH (4U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_LANE_UNDER_TEST(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_LANE_UNDER_TEST_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_LANE_UNDER_TEST_MASK)

#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_FORCE_LANE_FLIP_MASK (0x40000000U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_FORCE_LANE_FLIP_SHIFT (30U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_FORCE_LANE_FLIP_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN2_CTRL_OFF_FORCE_LANE_FLIP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN2_CTRL_OFF_FORCE_LANE_FLIP_SHIFT)) & SerDes_EP_PCIe_1_GEN2_CTRL_OFF_FORCE_LANE_FLIP_MASK)
/*! @} */

/*! @name PHY_STATUS_OFF - PHY Status Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_PHY_STATUS_OFF_PHY_STATUS_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_PHY_STATUS_OFF_PHY_STATUS_SHIFT (0U)
#define SerDes_EP_PCIe_1_PHY_STATUS_OFF_PHY_STATUS_WIDTH (32U)
#define SerDes_EP_PCIe_1_PHY_STATUS_OFF_PHY_STATUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PHY_STATUS_OFF_PHY_STATUS_SHIFT)) & SerDes_EP_PCIe_1_PHY_STATUS_OFF_PHY_STATUS_MASK)
/*! @} */

/*! @name PHY_CONTROL_OFF - PHY Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_PHY_CONTROL_OFF_PHY_CONTROL_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_PHY_CONTROL_OFF_PHY_CONTROL_SHIFT (0U)
#define SerDes_EP_PCIe_1_PHY_CONTROL_OFF_PHY_CONTROL_WIDTH (32U)
#define SerDes_EP_PCIe_1_PHY_CONTROL_OFF_PHY_CONTROL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PHY_CONTROL_OFF_PHY_CONTROL_SHIFT)) & SerDes_EP_PCIe_1_PHY_CONTROL_OFF_PHY_CONTROL_MASK)
/*! @} */

/*! @name TRGT_MAP_CTRL_OFF - Programmable Target Map Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_PF_MASK (0x3FU)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_PF_SHIFT (0U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_PF_WIDTH (6U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_PF(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_PF_SHIFT)) & SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_PF_MASK)

#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_ROM_MASK (0x40U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_ROM_SHIFT (6U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_ROM_WIDTH (1U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_ROM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_ROM_SHIFT)) & SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_ROM_MASK)

#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_13_15_MASK (0xE000U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_13_15_SHIFT (13U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_13_15_WIDTH (3U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_13_15(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_13_15_SHIFT)) & SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_13_15_MASK)

#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_INDEX_MASK (0x1F0000U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_INDEX_SHIFT (16U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_INDEX_WIDTH (5U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_INDEX(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_INDEX_SHIFT)) & SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_INDEX_MASK)

#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_21_31_MASK (0xFFE00000U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_21_31_SHIFT (21U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_21_31_WIDTH (11U)
#define SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_21_31(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_21_31_SHIFT)) & SerDes_EP_PCIe_1_TRGT_MAP_CTRL_OFF_TARGET_MAP_RESERVED_21_31_MASK)
/*! @} */

/*! @name CLOCK_GATING_CTRL_OFF - Clock Gating Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_RADM_CLK_GATING_EN_MASK (0x1U)
#define SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_RADM_CLK_GATING_EN_SHIFT (0U)
#define SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_RADM_CLK_GATING_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_RADM_CLK_GATING_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_RADM_CLK_GATING_EN_SHIFT)) & SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_RADM_CLK_GATING_EN_MASK)

#define SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_AXI_CLK_GATING_EN_MASK (0x2U)
#define SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_AXI_CLK_GATING_EN_SHIFT (1U)
#define SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_AXI_CLK_GATING_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_AXI_CLK_GATING_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_AXI_CLK_GATING_EN_SHIFT)) & SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_AXI_CLK_GATING_EN_MASK)

#define SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_RSVDP_2_MASK (0xFFFFFFFCU)
#define SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_RSVDP_2_SHIFT (2U)
#define SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_RSVDP_2_WIDTH (30U)
#define SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_RSVDP_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_RSVDP_2_SHIFT)) & SerDes_EP_PCIe_1_CLOCK_GATING_CTRL_OFF_RSVDP_2_MASK)
/*! @} */

/*! @name GEN3_RELATED_OFF - Gen3 Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_ZRXDC_NONCOMPL_MASK (0x1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_ZRXDC_NONCOMPL_SHIFT (0U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_ZRXDC_NONCOMPL_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_ZRXDC_NONCOMPL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_ZRXDC_NONCOMPL_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_ZRXDC_NONCOMPL_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_NO_SEED_VALUE_CHANGE_MASK (0x2U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_NO_SEED_VALUE_CHANGE_SHIFT (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_NO_SEED_VALUE_CHANGE_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_NO_SEED_VALUE_CHANGE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_NO_SEED_VALUE_CHANGE_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_NO_SEED_VALUE_CHANGE_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_2_MASK (0xFCU)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_2_SHIFT (2U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_2_WIDTH (6U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_2_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_2_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_DISABLE_SCRAMBLER_GEN_3_MASK (0x100U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_DISABLE_SCRAMBLER_GEN_3_SHIFT (8U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_DISABLE_SCRAMBLER_GEN_3_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_DISABLE_SCRAMBLER_GEN_3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_DISABLE_SCRAMBLER_GEN_3_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_DISABLE_SCRAMBLER_GEN_3_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_PHASE_2_3_MASK (0x200U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_PHASE_2_3_SHIFT (9U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_PHASE_2_3_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_PHASE_2_3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_PHASE_2_3_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_PHASE_2_3_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_EIEOS_CNT_MASK (0x400U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_EIEOS_CNT_SHIFT (10U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_EIEOS_CNT_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_EIEOS_CNT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_EIEOS_CNT_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_EIEOS_CNT_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_REDO_MASK (0x800U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_REDO_SHIFT (11U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_REDO_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_REDO(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_REDO_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_EQ_REDO_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RXEQ_PH01_EN_MASK (0x1000U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RXEQ_PH01_EN_SHIFT (12U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RXEQ_PH01_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RXEQ_PH01_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RXEQ_PH01_EN_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RXEQ_PH01_EN_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RXEQ_RGRDLESS_RXTS_MASK (0x2000U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RXEQ_RGRDLESS_RXTS_SHIFT (13U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RXEQ_RGRDLESS_RXTS_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RXEQ_RGRDLESS_RXTS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RXEQ_RGRDLESS_RXTS_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RXEQ_RGRDLESS_RXTS_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_14_MASK (0xC000U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_14_SHIFT (14U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_14_WIDTH (2U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_14(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_14_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_14_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_EQUALIZATION_DISABLE_MASK (0x10000U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_EQUALIZATION_DISABLE_SHIFT (16U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_EQUALIZATION_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_EQUALIZATION_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_EQUALIZATION_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_EQUALIZATION_DISABLE_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_DLLP_XMT_DELAY_DISABLE_MASK (0x20000U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_DLLP_XMT_DELAY_DISABLE_SHIFT (17U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_DLLP_XMT_DELAY_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_DLLP_XMT_DELAY_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_DLLP_XMT_DELAY_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_DLLP_XMT_DELAY_DISABLE_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_DC_BALANCE_DISABLE_MASK (0x40000U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_DC_BALANCE_DISABLE_SHIFT (18U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_DC_BALANCE_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_DC_BALANCE_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_DC_BALANCE_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_DC_BALANCE_DISABLE_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_19_MASK (0x180000U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_19_SHIFT (19U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_19_WIDTH (2U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_19(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_19_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_19_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_EQ_INVREQ_EVAL_DIFF_DISABLE_MASK (0x800000U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_EQ_INVREQ_EVAL_DIFF_DISABLE_SHIFT (23U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_EQ_INVREQ_EVAL_DIFF_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_EQ_INVREQ_EVAL_DIFF_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_EQ_INVREQ_EVAL_DIFF_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_GEN3_EQ_INVREQ_EVAL_DIFF_DISABLE_MASK)

#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_26_MASK (0xFC000000U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_26_SHIFT (26U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_26_WIDTH (6U)
#define SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_26(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_26_SHIFT)) & SerDes_EP_PCIe_1_GEN3_RELATED_OFF_RSVDP_26_MASK)
/*! @} */

/*! @name GEN3_EQ_CONTROL_OFF - Gen3 EQ Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FB_MODE_MASK (0xFU)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FB_MODE_SHIFT (0U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FB_MODE_WIDTH (4U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FB_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FB_MODE_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FB_MODE_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PHASE23_EXIT_MODE_MASK (0x10U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PHASE23_EXIT_MODE_SHIFT (4U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PHASE23_EXIT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PHASE23_EXIT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PHASE23_EXIT_MODE_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PHASE23_EXIT_MODE_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_EVAL_2MS_DISABLE_MASK (0x20U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_EVAL_2MS_DISABLE_SHIFT (5U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_EVAL_2MS_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_EVAL_2MS_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_EVAL_2MS_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_EVAL_2MS_DISABLE_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_LOWER_RATE_EQ_REDO_ENABLE_MASK (0x40U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_LOWER_RATE_EQ_REDO_ENABLE_SHIFT (6U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_LOWER_RATE_EQ_REDO_ENABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_LOWER_RATE_EQ_REDO_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_LOWER_RATE_EQ_REDO_ENABLE_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_LOWER_RATE_EQ_REDO_ENABLE_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_RSVDP_7_MASK (0x80U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_RSVDP_7_SHIFT (7U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_RSVDP_7_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_RSVDP_7(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_RSVDP_7_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_RSVDP_7_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_VEC_MASK (0xFFFF00U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_VEC_SHIFT (8U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_VEC_WIDTH (16U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_VEC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_VEC_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_VEC_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FOM_INC_INITIAL_EVAL_MASK (0x1000000U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FOM_INC_INITIAL_EVAL_SHIFT (24U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FOM_INC_INITIAL_EVAL_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FOM_INC_INITIAL_EVAL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FOM_INC_INITIAL_EVAL_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_FOM_INC_INITIAL_EVAL_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_AS_COEF_MASK (0x2000000U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_AS_COEF_SHIFT (25U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_AS_COEF_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_AS_COEF(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_AS_COEF_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_EQ_PSET_REQ_AS_COEF_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_REQ_SEND_CONSEC_EIEOS_FOR_PSET_MAP_MASK (0x4000000U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_REQ_SEND_CONSEC_EIEOS_FOR_PSET_MAP_SHIFT (26U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_REQ_SEND_CONSEC_EIEOS_FOR_PSET_MAP_WIDTH (1U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_REQ_SEND_CONSEC_EIEOS_FOR_PSET_MAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_REQ_SEND_CONSEC_EIEOS_FOR_PSET_MAP_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_GEN3_REQ_SEND_CONSEC_EIEOS_FOR_PSET_MAP_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_RSVDP_27_MASK (0xF8000000U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_RSVDP_27_SHIFT (27U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_RSVDP_27_WIDTH (5U)
#define SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_RSVDP_27(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_RSVDP_27_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_CONTROL_OFF_RSVDP_27_MASK)
/*! @} */

/*! @name GEN3_EQ_FB_MODE_DIR_CHANGE_OFF - Gen3 EQ Direction Change Feedback Mode Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_T_MIN_PHASE23_MASK (0x1FU)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_T_MIN_PHASE23_SHIFT (0U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_T_MIN_PHASE23_WIDTH (5U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_T_MIN_PHASE23(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_T_MIN_PHASE23_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_T_MIN_PHASE23_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_N_EVALS_MASK (0x3E0U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_N_EVALS_SHIFT (5U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_N_EVALS_WIDTH (5U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_N_EVALS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_N_EVALS_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_N_EVALS_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_PRE_CUSROR_DELTA_MASK (0x3C00U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_PRE_CUSROR_DELTA_SHIFT (10U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_PRE_CUSROR_DELTA_WIDTH (4U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_PRE_CUSROR_DELTA(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_PRE_CUSROR_DELTA_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_PRE_CUSROR_DELTA_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_POST_CUSROR_DELTA_MASK (0x3C000U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_POST_CUSROR_DELTA_SHIFT (14U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_POST_CUSROR_DELTA_WIDTH (4U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_POST_CUSROR_DELTA(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_POST_CUSROR_DELTA_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_GEN3_EQ_FMDC_MAX_POST_CUSROR_DELTA_MASK)

#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_RSVDP_18_MASK (0xFFFC0000U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_RSVDP_18_SHIFT (18U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_RSVDP_18_WIDTH (14U)
#define SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_RSVDP_18(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_RSVDP_18_SHIFT)) & SerDes_EP_PCIe_1_GEN3_EQ_FB_MODE_DIR_CHANGE_OFF_RSVDP_18_MASK)
/*! @} */

/*! @name ORDER_RULE_CTRL_OFF - Order Rule Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_NP_PASS_P_MASK (0xFFU)
#define SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_NP_PASS_P_SHIFT (0U)
#define SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_NP_PASS_P_WIDTH (8U)
#define SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_NP_PASS_P(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_NP_PASS_P_SHIFT)) & SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_NP_PASS_P_MASK)

#define SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_CPL_PASS_P_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_CPL_PASS_P_SHIFT (8U)
#define SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_CPL_PASS_P_WIDTH (8U)
#define SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_CPL_PASS_P(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_CPL_PASS_P_SHIFT)) & SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_CPL_PASS_P_MASK)

#define SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_RSVDP_16_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_RSVDP_16_SHIFT (16U)
#define SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_RSVDP_16_WIDTH (16U)
#define SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_RSVDP_16(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_RSVDP_16_SHIFT)) & SerDes_EP_PCIe_1_ORDER_RULE_CTRL_OFF_RSVDP_16_MASK)
/*! @} */

/*! @name PIPE_LOOPBACK_CONTROL_OFF - PIPE Loopback Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_LPBK_RXVALID_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_LPBK_RXVALID_SHIFT (0U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_LPBK_RXVALID_WIDTH (16U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_LPBK_RXVALID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_LPBK_RXVALID_SHIFT)) & SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_LPBK_RXVALID_MASK)

#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_LANE_MASK (0x3F0000U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_LANE_SHIFT (16U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_LANE_WIDTH (6U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_LANE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_LANE_SHIFT)) & SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_LANE_MASK)

#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RSVDP_22_MASK (0xC00000U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RSVDP_22_SHIFT (22U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RSVDP_22_WIDTH (2U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RSVDP_22(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RSVDP_22_SHIFT)) & SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RSVDP_22_MASK)

#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_VALUE_MASK (0x7000000U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_VALUE_SHIFT (24U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_VALUE_WIDTH (3U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_VALUE_SHIFT)) & SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RXSTATUS_VALUE_MASK)

#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RSVDP_27_MASK (0x78000000U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RSVDP_27_SHIFT (27U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RSVDP_27_WIDTH (4U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RSVDP_27(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RSVDP_27_SHIFT)) & SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_RSVDP_27_MASK)

#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_PIPE_LOOPBACK_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_PIPE_LOOPBACK_SHIFT (31U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_PIPE_LOOPBACK_WIDTH (1U)
#define SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_PIPE_LOOPBACK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_PIPE_LOOPBACK_SHIFT)) & SerDes_EP_PCIe_1_PIPE_LOOPBACK_CONTROL_OFF_PIPE_LOOPBACK_MASK)
/*! @} */

/*! @name MISC_CONTROL_1_OFF - DBI Read-Only Write Enable Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_DBI_RO_WR_EN_MASK (0x1U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_DBI_RO_WR_EN_SHIFT (0U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_DBI_RO_WR_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_DBI_RO_WR_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_DBI_RO_WR_EN_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_DBI_RO_WR_EN_MASK)

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_DEFAULT_TARGET_MASK (0x2U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_DEFAULT_TARGET_SHIFT (1U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_DEFAULT_TARGET_WIDTH (1U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_DEFAULT_TARGET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_DEFAULT_TARGET_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_DEFAULT_TARGET_MASK)

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_UR_CA_MASK_4_TRGT1_MASK (0x4U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_UR_CA_MASK_4_TRGT1_SHIFT (2U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_UR_CA_MASK_4_TRGT1_WIDTH (1U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_UR_CA_MASK_4_TRGT1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_UR_CA_MASK_4_TRGT1_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_UR_CA_MASK_4_TRGT1_MASK)

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_SIMPLIFIED_REPLAY_TIMER_MASK (0x8U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_SIMPLIFIED_REPLAY_TIMER_SHIFT (3U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_SIMPLIFIED_REPLAY_TIMER_WIDTH (1U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_SIMPLIFIED_REPLAY_TIMER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_SIMPLIFIED_REPLAY_TIMER_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_SIMPLIFIED_REPLAY_TIMER_MASK)

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_ARI_DEVICE_NUMBER_MASK (0x20U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_ARI_DEVICE_NUMBER_SHIFT (5U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_ARI_DEVICE_NUMBER_WIDTH (1U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_ARI_DEVICE_NUMBER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_ARI_DEVICE_NUMBER_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_ARI_DEVICE_NUMBER_MASK)

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CPLQ_MNG_EN_MASK (0x40U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CPLQ_MNG_EN_SHIFT (6U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CPLQ_MNG_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CPLQ_MNG_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CPLQ_MNG_EN_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CPLQ_MNG_EN_MASK)

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CFG_TLP_BYPASS_EN_REG_MASK (0x80U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CFG_TLP_BYPASS_EN_REG_SHIFT (7U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CFG_TLP_BYPASS_EN_REG_WIDTH (1U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CFG_TLP_BYPASS_EN_REG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CFG_TLP_BYPASS_EN_REG_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CFG_TLP_BYPASS_EN_REG_MASK)

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CONFIG_LIMIT_REG_MASK (0x3FF00U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CONFIG_LIMIT_REG_SHIFT (8U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CONFIG_LIMIT_REG_WIDTH (10U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CONFIG_LIMIT_REG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CONFIG_LIMIT_REG_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_CONFIG_LIMIT_REG_MASK)

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_TARGET_ABOVE_CONFIG_LIMIT_REG_MASK (0xC0000U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_TARGET_ABOVE_CONFIG_LIMIT_REG_SHIFT (18U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_TARGET_ABOVE_CONFIG_LIMIT_REG_WIDTH (2U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_TARGET_ABOVE_CONFIG_LIMIT_REG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_TARGET_ABOVE_CONFIG_LIMIT_REG_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_TARGET_ABOVE_CONFIG_LIMIT_REG_MASK)

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_P2P_TRACK_CPL_TO_REG_MASK (0x100000U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_P2P_TRACK_CPL_TO_REG_SHIFT (20U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_P2P_TRACK_CPL_TO_REG_WIDTH (1U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_P2P_TRACK_CPL_TO_REG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_P2P_TRACK_CPL_TO_REG_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_P2P_TRACK_CPL_TO_REG_MASK)

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_P2P_ERR_RPT_CTRL_MASK (0x200000U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_P2P_ERR_RPT_CTRL_SHIFT (21U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_P2P_ERR_RPT_CTRL_WIDTH (1U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_P2P_ERR_RPT_CTRL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_P2P_ERR_RPT_CTRL_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_P2P_ERR_RPT_CTRL_MASK)

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_PORT_LOGIC_WR_DISABLE_MASK (0x400000U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_PORT_LOGIC_WR_DISABLE_SHIFT (22U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_PORT_LOGIC_WR_DISABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_PORT_LOGIC_WR_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_PORT_LOGIC_WR_DISABLE_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_PORT_LOGIC_WR_DISABLE_MASK)

#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_RSVDP_23_MASK (0xFF800000U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_RSVDP_23_SHIFT (23U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_RSVDP_23_WIDTH (9U)
#define SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_RSVDP_23(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_RSVDP_23_SHIFT)) & SerDes_EP_PCIe_1_MISC_CONTROL_1_OFF_RSVDP_23_MASK)
/*! @} */

/*! @name MULTI_LANE_CONTROL_OFF - UpConfigure Multi-lane Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_TARGET_LINK_WIDTH_MASK (0x3FU)
#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_TARGET_LINK_WIDTH_SHIFT (0U)
#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_TARGET_LINK_WIDTH_WIDTH (6U)
#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_TARGET_LINK_WIDTH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_TARGET_LINK_WIDTH_SHIFT)) & SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_TARGET_LINK_WIDTH_MASK)

#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_DIRECT_LINK_WIDTH_CHANGE_MASK (0x40U)
#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_DIRECT_LINK_WIDTH_CHANGE_SHIFT (6U)
#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_DIRECT_LINK_WIDTH_CHANGE_WIDTH (1U)
#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_DIRECT_LINK_WIDTH_CHANGE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_DIRECT_LINK_WIDTH_CHANGE_SHIFT)) & SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_DIRECT_LINK_WIDTH_CHANGE_MASK)

#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_UPCONFIGURE_SUPPORT_MASK (0x80U)
#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_UPCONFIGURE_SUPPORT_SHIFT (7U)
#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_UPCONFIGURE_SUPPORT_WIDTH (1U)
#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_UPCONFIGURE_SUPPORT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_UPCONFIGURE_SUPPORT_SHIFT)) & SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_UPCONFIGURE_SUPPORT_MASK)

#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_RSVDP_8_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_RSVDP_8_SHIFT (8U)
#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_RSVDP_8_WIDTH (24U)
#define SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_RSVDP_8_SHIFT)) & SerDes_EP_PCIe_1_MULTI_LANE_CONTROL_OFF_RSVDP_8_MASK)
/*! @} */

/*! @name PHY_INTEROP_CTRL_OFF - PHY Interoperability Control */
/*! @{ */

#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RXSTANDBY_CONTROL_MASK (0x7FU)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RXSTANDBY_CONTROL_SHIFT (0U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RXSTANDBY_CONTROL_WIDTH (7U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RXSTANDBY_CONTROL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RXSTANDBY_CONTROL_SHIFT)) & SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RXSTANDBY_CONTROL_MASK)

#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RSVDP_7_MASK (0x80U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RSVDP_7_SHIFT (7U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RSVDP_7_WIDTH (1U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RSVDP_7(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RSVDP_7_SHIFT)) & SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RSVDP_7_MASK)

#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_L1_NOWAIT_P1_MASK (0x200U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_L1_NOWAIT_P1_SHIFT (9U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_L1_NOWAIT_P1_WIDTH (1U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_L1_NOWAIT_P1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_L1_NOWAIT_P1_SHIFT)) & SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_L1_NOWAIT_P1_MASK)

#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_L1_CLK_SEL_MASK (0x400U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_L1_CLK_SEL_SHIFT (10U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_L1_CLK_SEL_WIDTH (1U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_L1_CLK_SEL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_L1_CLK_SEL_SHIFT)) & SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_L1_CLK_SEL_MASK)

#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_PHY_RST_TIMER_MASK (0x3F000U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_PHY_RST_TIMER_SHIFT (12U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_PHY_RST_TIMER_WIDTH (6U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_PHY_RST_TIMER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_PHY_RST_TIMER_SHIFT)) & SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_PHY_RST_TIMER_MASK)

#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RSVDP_18_MASK (0xFFFC0000U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RSVDP_18_SHIFT (18U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RSVDP_18_WIDTH (14U)
#define SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RSVDP_18(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RSVDP_18_SHIFT)) & SerDes_EP_PCIe_1_PHY_INTEROP_CTRL_OFF_RSVDP_18_MASK)
/*! @} */

/*! @name TRGT_CPL_LUT_DELETE_ENTRY_OFF - TRGT_CPL_LUT Delete Entry Control register. */
/*! @{ */

#define SerDes_EP_PCIe_1_TRGT_CPL_LUT_DELETE_ENTRY_OFF_LOOK_UP_ID_MASK (0x7FFFFFFFU)
#define SerDes_EP_PCIe_1_TRGT_CPL_LUT_DELETE_ENTRY_OFF_LOOK_UP_ID_SHIFT (0U)
#define SerDes_EP_PCIe_1_TRGT_CPL_LUT_DELETE_ENTRY_OFF_LOOK_UP_ID_WIDTH (31U)
#define SerDes_EP_PCIe_1_TRGT_CPL_LUT_DELETE_ENTRY_OFF_LOOK_UP_ID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TRGT_CPL_LUT_DELETE_ENTRY_OFF_LOOK_UP_ID_SHIFT)) & SerDes_EP_PCIe_1_TRGT_CPL_LUT_DELETE_ENTRY_OFF_LOOK_UP_ID_MASK)

#define SerDes_EP_PCIe_1_TRGT_CPL_LUT_DELETE_ENTRY_OFF_DELETE_EN_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_TRGT_CPL_LUT_DELETE_ENTRY_OFF_DELETE_EN_SHIFT (31U)
#define SerDes_EP_PCIe_1_TRGT_CPL_LUT_DELETE_ENTRY_OFF_DELETE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_TRGT_CPL_LUT_DELETE_ENTRY_OFF_DELETE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_TRGT_CPL_LUT_DELETE_ENTRY_OFF_DELETE_EN_SHIFT)) & SerDes_EP_PCIe_1_TRGT_CPL_LUT_DELETE_ENTRY_OFF_DELETE_EN_MASK)
/*! @} */

/*! @name LINK_FLUSH_CONTROL_OFF - Link Reset Request Flush Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_AUTO_FLUSH_EN_MASK (0x1U)
#define SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_AUTO_FLUSH_EN_SHIFT (0U)
#define SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_AUTO_FLUSH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_AUTO_FLUSH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_AUTO_FLUSH_EN_SHIFT)) & SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_AUTO_FLUSH_EN_MASK)

#define SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_RSVDP_1_MASK (0xFFFFFEU)
#define SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_RSVDP_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_RSVDP_1_WIDTH (23U)
#define SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_RSVDP_1_SHIFT)) & SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_RSVDP_1_MASK)

#define SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_RSVD_I_8_MASK (0xFF000000U)
#define SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_RSVD_I_8_SHIFT (24U)
#define SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_RSVD_I_8_WIDTH (8U)
#define SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_RSVD_I_8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_RSVD_I_8_SHIFT)) & SerDes_EP_PCIe_1_LINK_FLUSH_CONTROL_OFF_RSVD_I_8_MASK)
/*! @} */

/*! @name AMBA_ERROR_RESPONSE_DEFAULT_OFF - AXI Bridge Slave Error Response Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_GLOBAL_MASK (0x1U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_GLOBAL_SHIFT (0U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_GLOBAL_WIDTH (1U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_GLOBAL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_GLOBAL_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_GLOBAL_MASK)

#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_1_MASK (0x2U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_1_WIDTH (1U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_1_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_1_MASK)

#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_VENDORID_MASK (0x4U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_VENDORID_SHIFT (2U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_VENDORID_WIDTH (1U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_VENDORID(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_VENDORID_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_VENDORID_MASK)

#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_CRS_MASK (0x18U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_CRS_SHIFT (3U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_CRS_WIDTH (2U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_CRS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_CRS_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_CRS_MASK)

#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_5_MASK (0x3E0U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_5_SHIFT (5U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_5_WIDTH (5U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_5_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_5_MASK)

#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_MAP_MASK (0xFC00U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_MAP_SHIFT (10U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_MAP_WIDTH (6U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_MAP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_MAP_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_AMBA_ERROR_RESPONSE_MAP_MASK)

#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_16_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_16_SHIFT (16U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_16_WIDTH (16U)
#define SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_16(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_16_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ERROR_RESPONSE_DEFAULT_OFF_RSVDP_16_MASK)
/*! @} */

/*! @name AMBA_LINK_TIMEOUT_OFF - Link Down AXI Bridge Slave Timeout Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_PERIOD_DEFAULT_MASK (0xFFU)
#define SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_PERIOD_DEFAULT_SHIFT (0U)
#define SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_PERIOD_DEFAULT_WIDTH (8U)
#define SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_PERIOD_DEFAULT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_PERIOD_DEFAULT_SHIFT)) & SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_PERIOD_DEFAULT_MASK)

#define SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_ENABLE_DEFAULT_MASK (0x100U)
#define SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_ENABLE_DEFAULT_SHIFT (8U)
#define SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_ENABLE_DEFAULT_WIDTH (1U)
#define SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_ENABLE_DEFAULT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_ENABLE_DEFAULT_SHIFT)) & SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_LINK_TIMEOUT_ENABLE_DEFAULT_MASK)

#define SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_RSVDP_9_MASK (0xFFFFFE00U)
#define SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_RSVDP_9_SHIFT (9U)
#define SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_RSVDP_9_WIDTH (23U)
#define SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_RSVDP_9(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_RSVDP_9_SHIFT)) & SerDes_EP_PCIe_1_AMBA_LINK_TIMEOUT_OFF_RSVDP_9_MASK)
/*! @} */

/*! @name AMBA_ORDERING_CTRL_OFF - AXI Bridge Ordering Control. */
/*! @{ */

#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_0_MASK (0x1U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_0_WIDTH (1U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_0_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_0_MASK)

#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_SNP_EN_MASK (0x2U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_SNP_EN_SHIFT (1U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_SNP_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_SNP_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_SNP_EN_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_SNP_EN_MASK)

#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_2_MASK (0x4U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_2_SHIFT (2U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_2_WIDTH (1U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_2_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_2_MASK)

#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ORDR_P_EVENT_SEL_MASK (0x18U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ORDR_P_EVENT_SEL_SHIFT (3U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ORDR_P_EVENT_SEL_WIDTH (2U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ORDR_P_EVENT_SEL(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ORDR_P_EVENT_SEL_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ORDR_P_EVENT_SEL_MASK)

#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_5_MASK (0x60U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_5_SHIFT (5U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_5_WIDTH (2U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_5_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_5_MASK)

#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ZEROLREAD_FW_MASK (0x80U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ZEROLREAD_FW_SHIFT (7U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ZEROLREAD_FW_WIDTH (1U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ZEROLREAD_FW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ZEROLREAD_FW_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_AX_MSTR_ZEROLREAD_FW_MASK)

#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_8_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_8_SHIFT (8U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_8_WIDTH (24U)
#define SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_8_SHIFT)) & SerDes_EP_PCIe_1_AMBA_ORDERING_CTRL_OFF_RSVDP_8_MASK)
/*! @} */

/*! @name COHERENCY_CONTROL_1_OFF - ACE Cache Coherency Control Register 1. */
/*! @{ */

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_VALUE_MASK (0x1U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_VALUE_SHIFT (0U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_VALUE_WIDTH (1U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_VALUE_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_VALUE_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_RSVDP_1_MASK (0x2U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_RSVDP_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_RSVDP_1_WIDTH (1U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_RSVDP_1_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_RSVDP_1_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_BOUNDARY_LOW_ADDR_MASK (0xFFFFFFFCU)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_BOUNDARY_LOW_ADDR_SHIFT (2U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_BOUNDARY_LOW_ADDR_WIDTH (30U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_BOUNDARY_LOW_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_BOUNDARY_LOW_ADDR_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_1_OFF_CFG_MEMTYPE_BOUNDARY_LOW_ADDR_MASK)
/*! @} */

/*! @name COHERENCY_CONTROL_2_OFF - ACE Cache Coherency Control Register 2. */
/*! @{ */

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_2_OFF_CFG_MEMTYPE_BOUNDARY_HIGH_ADDR_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_2_OFF_CFG_MEMTYPE_BOUNDARY_HIGH_ADDR_SHIFT (0U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_2_OFF_CFG_MEMTYPE_BOUNDARY_HIGH_ADDR_WIDTH (32U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_2_OFF_CFG_MEMTYPE_BOUNDARY_HIGH_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_2_OFF_CFG_MEMTYPE_BOUNDARY_HIGH_ADDR_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_2_OFF_CFG_MEMTYPE_BOUNDARY_HIGH_ADDR_MASK)
/*! @} */

/*! @name COHERENCY_CONTROL_3_OFF - ACE Cache Coherency Control Register 3. */
/*! @{ */

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_MODE_MASK (0x3U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_MODE_SHIFT (0U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_MODE_WIDTH (2U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_MODE_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_MODE_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_2_MASK (0x4U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_2_SHIFT (2U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_2_WIDTH (1U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_2_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_2_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_MODE_MASK (0x78U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_MODE_SHIFT (3U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_MODE_WIDTH (4U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_MODE_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_MODE_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_7_MASK (0x80U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_7_SHIFT (7U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_7_WIDTH (1U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_7(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_7_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_7_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_MODE_MASK (0x300U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_MODE_SHIFT (8U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_MODE_WIDTH (2U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_MODE_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_MODE_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_10_MASK (0x400U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_10_SHIFT (10U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_10_WIDTH (1U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_10(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_10_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_10_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_MODE_MASK (0x7800U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_MODE_SHIFT (11U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_MODE_WIDTH (4U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_MODE_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_MODE_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_15_MASK (0x8000U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_15_SHIFT (15U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_15_WIDTH (1U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_15(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_15_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_15_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_VALUE_MASK (0x30000U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_VALUE_SHIFT (16U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_VALUE_WIDTH (2U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_VALUE_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARDOMAIN_VALUE_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_18_MASK (0x40000U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_18_SHIFT (18U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_18_WIDTH (1U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_18(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_18_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_18_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_VALUE_MASK (0x780000U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_VALUE_SHIFT (19U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_VALUE_WIDTH (4U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_VALUE_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_ARCACHE_VALUE_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_23_MASK (0x800000U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_23_SHIFT (23U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_23_WIDTH (1U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_23(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_23_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_23_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_VALUE_MASK (0x3000000U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_VALUE_SHIFT (24U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_VALUE_WIDTH (2U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_VALUE_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWDOMAIN_VALUE_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_26_MASK (0x4000000U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_26_SHIFT (26U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_26_WIDTH (1U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_26(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_26_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_26_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_VALUE_MASK (0x78000000U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_VALUE_SHIFT (27U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_VALUE_WIDTH (4U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_VALUE_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_CFG_MSTR_AWCACHE_VALUE_MASK)

#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_31_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_31_SHIFT (31U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_31_WIDTH (1U)
#define SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_31(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_31_SHIFT)) & SerDes_EP_PCIe_1_COHERENCY_CONTROL_3_OFF_RSVDP_31_MASK)
/*! @} */

/*! @name AXI_MSTR_MSG_ADDR_LOW_OFF - Lower 32-bits of the Programmable AXI Address. */
/*! @{ */

#define SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_RESERVED_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_RESERVED_SHIFT (0U)
#define SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_RESERVED_WIDTH (12U)
#define SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_RESERVED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_RESERVED_SHIFT)) & SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_RESERVED_MASK)

#define SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_SHIFT (12U)
#define SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_WIDTH (20U)
#define SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_SHIFT)) & SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_LOW_OFF_CFG_AXIMSTR_MSG_ADDR_LOW_MASK)
/*! @} */

/*! @name AXI_MSTR_MSG_ADDR_HIGH_OFF - Upper 32-bits of the Programmable AXI Address. */
/*! @{ */

#define SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_HIGH_OFF_CFG_AXIMSTR_MSG_ADDR_HIGH_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_HIGH_OFF_CFG_AXIMSTR_MSG_ADDR_HIGH_SHIFT (0U)
#define SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_HIGH_OFF_CFG_AXIMSTR_MSG_ADDR_HIGH_WIDTH (32U)
#define SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_HIGH_OFF_CFG_AXIMSTR_MSG_ADDR_HIGH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_HIGH_OFF_CFG_AXIMSTR_MSG_ADDR_HIGH_SHIFT)) & SerDes_EP_PCIe_1_AXI_MSTR_MSG_ADDR_HIGH_OFF_CFG_AXIMSTR_MSG_ADDR_HIGH_MASK)
/*! @} */

/*! @name PCIE_VERSION_NUMBER_OFF - PCIe Controller IIP Release Version Number. */
/*! @{ */

#define SerDes_EP_PCIe_1_PCIE_VERSION_NUMBER_OFF_VERSION_NUMBER_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_PCIE_VERSION_NUMBER_OFF_VERSION_NUMBER_SHIFT (0U)
#define SerDes_EP_PCIe_1_PCIE_VERSION_NUMBER_OFF_VERSION_NUMBER_WIDTH (32U)
#define SerDes_EP_PCIe_1_PCIE_VERSION_NUMBER_OFF_VERSION_NUMBER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIE_VERSION_NUMBER_OFF_VERSION_NUMBER_SHIFT)) & SerDes_EP_PCIe_1_PCIE_VERSION_NUMBER_OFF_VERSION_NUMBER_MASK)
/*! @} */

/*! @name PCIE_VERSION_TYPE_OFF - PCIe Controller IIP Release Version Type. */
/*! @{ */

#define SerDes_EP_PCIe_1_PCIE_VERSION_TYPE_OFF_VERSION_TYPE_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_PCIE_VERSION_TYPE_OFF_VERSION_TYPE_SHIFT (0U)
#define SerDes_EP_PCIe_1_PCIE_VERSION_TYPE_OFF_VERSION_TYPE_WIDTH (32U)
#define SerDes_EP_PCIe_1_PCIE_VERSION_TYPE_OFF_VERSION_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIE_VERSION_TYPE_OFF_VERSION_TYPE_SHIFT)) & SerDes_EP_PCIe_1_PCIE_VERSION_TYPE_OFF_VERSION_TYPE_MASK)
/*! @} */

/*! @name INTERFACE_TIMER_CONTROL_OFF - Interface Timer Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_EN_MASK (0x1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_EN_SHIFT (0U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_EN_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_EN_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_AER_EN_MASK (0x2U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_AER_EN_SHIFT (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_AER_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_AER_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_AER_EN_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_AER_EN_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_SCALING_MASK (0xCU)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_SCALING_SHIFT (2U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_SCALING_WIDTH (2U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_SCALING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_SCALING_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_INTERFACE_TIMER_SCALING_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_FORCE_PENDING_MASK (0x10U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_FORCE_PENDING_SHIFT (4U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_FORCE_PENDING_WIDTH (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_FORCE_PENDING(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_FORCE_PENDING_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_FORCE_PENDING_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_RSVDP_5_MASK (0xFFFFFFE0U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_RSVDP_5_SHIFT (5U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_RSVDP_5_WIDTH (27U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_RSVDP_5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_RSVDP_5_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_CONTROL_OFF_RSVDP_5_MASK)
/*! @} */

/*! @name INTERFACE_TIMER_TARGET_OFF - Interface Timer Target Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_TARGET_OFF_INTERFACE_TIMER_TARGET_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_TARGET_OFF_INTERFACE_TIMER_TARGET_SHIFT (0U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_TARGET_OFF_INTERFACE_TIMER_TARGET_WIDTH (16U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_TARGET_OFF_INTERFACE_TIMER_TARGET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_TARGET_OFF_INTERFACE_TIMER_TARGET_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_TARGET_OFF_INTERFACE_TIMER_TARGET_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_TARGET_OFF_RSVDP_16_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_TARGET_OFF_RSVDP_16_SHIFT (16U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_TARGET_OFF_RSVDP_16_WIDTH (16U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_TARGET_OFF_RSVDP_16(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_TARGET_OFF_RSVDP_16_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_TARGET_OFF_RSVDP_16_MASK)
/*! @} */

/*! @name INTERFACE_TIMER_STATUS_OFF - Interface Timer Status Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MESSAGE_INTERFACE_TIMEOUT_MASK (0x1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MESSAGE_INTERFACE_TIMEOUT_SHIFT (0U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MESSAGE_INTERFACE_TIMEOUT_WIDTH (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MESSAGE_INTERFACE_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MESSAGE_INTERFACE_TIMEOUT_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MESSAGE_INTERFACE_TIMEOUT_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CPL_INTERFACE_TIMEOUT_MASK (0x2U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CPL_INTERFACE_TIMEOUT_SHIFT (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CPL_INTERFACE_TIMEOUT_WIDTH (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CPL_INTERFACE_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CPL_INTERFACE_TIMEOUT_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CPL_INTERFACE_TIMEOUT_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CLIENT1_INTERFACE_TIMEOUT_MASK (0x8U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CLIENT1_INTERFACE_TIMEOUT_SHIFT (3U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CLIENT1_INTERFACE_TIMEOUT_WIDTH (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CLIENT1_INTERFACE_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CLIENT1_INTERFACE_TIMEOUT_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CLIENT1_INTERFACE_TIMEOUT_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CLIENT2_INTERFACE_TIMEOUT_MASK (0x10U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CLIENT2_INTERFACE_TIMEOUT_SHIFT (4U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CLIENT2_INTERFACE_TIMEOUT_WIDTH (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CLIENT2_INTERFACE_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CLIENT2_INTERFACE_TIMEOUT_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_CLIENT2_INTERFACE_TIMEOUT_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MASTER_WR_RES_TIMEOUT_MASK (0x20U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MASTER_WR_RES_TIMEOUT_SHIFT (5U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MASTER_WR_RES_TIMEOUT_WIDTH (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MASTER_WR_RES_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MASTER_WR_RES_TIMEOUT_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MASTER_WR_RES_TIMEOUT_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MASTER_RD_DATA_TIMEOUT_MASK (0x40U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MASTER_RD_DATA_TIMEOUT_SHIFT (6U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MASTER_RD_DATA_TIMEOUT_WIDTH (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MASTER_RD_DATA_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MASTER_RD_DATA_TIMEOUT_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_MASTER_RD_DATA_TIMEOUT_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_ADD_TIMEOUT_MASK (0x200U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_ADD_TIMEOUT_SHIFT (9U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_ADD_TIMEOUT_WIDTH (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_ADD_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_ADD_TIMEOUT_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_ADD_TIMEOUT_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_DATA_TIMEOUT_MASK (0x400U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_DATA_TIMEOUT_SHIFT (10U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_DATA_TIMEOUT_WIDTH (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_DATA_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_DATA_TIMEOUT_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_WR_DATA_TIMEOUT_MASK)

#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_RD_ADD_TIMEOUT_MASK (0x800U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_RD_ADD_TIMEOUT_SHIFT (11U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_RD_ADD_TIMEOUT_WIDTH (1U)
#define SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_RD_ADD_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_RD_ADD_TIMEOUT_SHIFT)) & SerDes_EP_PCIe_1_INTERFACE_TIMER_STATUS_OFF_SLAVE_RD_ADD_TIMEOUT_MASK)
/*! @} */

/*! @name MSIX_ADDRESS_MATCH_LOW_OFF - MSI-X Address Match Low Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_EN_MASK (0x1U)
#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_EN_SHIFT (0U)
#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_RESERVED_1_MASK (0x2U)
#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_RESERVED_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_RESERVED_1_WIDTH (1U)
#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_RESERVED_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_RESERVED_1_SHIFT)) & SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_RESERVED_1_MASK)

#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_LOW_MASK (0xFFFFFFFCU)
#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_LOW_SHIFT (2U)
#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_LOW_WIDTH (30U)
#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_LOW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_LOW_SHIFT)) & SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_LOW_OFF_MSIX_ADDRESS_MATCH_LOW_MASK)
/*! @} */

/*! @name MSIX_ADDRESS_MATCH_HIGH_OFF - MSIX Address Match High Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_HIGH_OFF_MSIX_ADDRESS_MATCH_HIGH_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_HIGH_OFF_MSIX_ADDRESS_MATCH_HIGH_SHIFT (0U)
#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_HIGH_OFF_MSIX_ADDRESS_MATCH_HIGH_WIDTH (32U)
#define SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_HIGH_OFF_MSIX_ADDRESS_MATCH_HIGH(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_HIGH_OFF_MSIX_ADDRESS_MATCH_HIGH_SHIFT)) & SerDes_EP_PCIe_1_MSIX_ADDRESS_MATCH_HIGH_OFF_MSIX_ADDRESS_MATCH_HIGH_MASK)
/*! @} */

/*! @name MSIX_DOORBELL_OFF - MSI-X Doorbell Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VECTOR_MASK (0x7FFU)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VECTOR_SHIFT (0U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VECTOR_WIDTH (11U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VECTOR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VECTOR_SHIFT)) & SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VECTOR_MASK)

#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_11_MASK (0x800U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_11_SHIFT (11U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_11_WIDTH (1U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_11(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_11_SHIFT)) & SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_11_MASK)

#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_TC_MASK (0x7000U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_TC_SHIFT (12U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_TC_WIDTH (3U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_TC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_TC_SHIFT)) & SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_TC_MASK)

#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_ACTIVE_MASK (0x8000U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_ACTIVE_SHIFT (15U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_ACTIVE_WIDTH (1U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_ACTIVE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_ACTIVE_SHIFT)) & SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_ACTIVE_MASK)

#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_MASK (0xFF0000U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_SHIFT (16U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_WIDTH (8U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_SHIFT)) & SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_VF_MASK)

#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_PF_MASK (0x1F000000U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_PF_SHIFT (24U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_PF_WIDTH (5U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_PF(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_PF_SHIFT)) & SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_PF_MASK)

#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_29_31_MASK (0xE0000000U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_29_31_SHIFT (29U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_29_31_WIDTH (3U)
#define SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_29_31(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_29_31_SHIFT)) & SerDes_EP_PCIe_1_MSIX_DOORBELL_OFF_MSIX_DOORBELL_RESERVED_29_31_MASK)
/*! @} */

/*! @name MSIX_RAM_CTRL_OFF - MSI-X RAM power mode and debug control register. */
/*! @{ */

#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_DS_MASK (0x1U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_DS_SHIFT (0U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_DS_WIDTH (1U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_DS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_DS_SHIFT)) & SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_DS_MASK)

#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_SD_MASK (0x2U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_SD_SHIFT (1U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_SD_WIDTH (1U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_SD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_SD_SHIFT)) & SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_TABLE_SD_MASK)

#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_2_7_MASK (0xFCU)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_2_7_SHIFT (2U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_2_7_WIDTH (6U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_2_7(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_2_7_SHIFT)) & SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_2_7_MASK)

#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_DS_MASK (0x100U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_DS_SHIFT (8U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_DS_WIDTH (1U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_DS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_DS_SHIFT)) & SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_DS_MASK)

#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_SD_MASK (0x200U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_SD_SHIFT (9U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_SD_WIDTH (1U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_SD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_SD_SHIFT)) & SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_PBA_SD_MASK)

#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_10_15_MASK (0xFC00U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_10_15_SHIFT (10U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_10_15_WIDTH (6U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_10_15(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_10_15_SHIFT)) & SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_10_15_MASK)

#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_BYPASS_MASK (0x10000U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_BYPASS_SHIFT (16U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_BYPASS_MASK)

#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_17_23_MASK (0xFE0000U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_17_23_SHIFT (17U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_17_23_WIDTH (7U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_17_23(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_17_23_SHIFT)) & SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_17_23_MASK)

#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_TABLE_MASK (0x1000000U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_TABLE_SHIFT (24U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_TABLE_WIDTH (1U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_TABLE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_TABLE_SHIFT)) & SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_TABLE_MASK)

#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_PBA_MASK (0x2000000U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_PBA_SHIFT (25U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_PBA_WIDTH (1U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_PBA(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_PBA_SHIFT)) & SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_DBG_PBA_MASK)

#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_26_31_MASK (0xFC000000U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_26_31_SHIFT (26U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_26_31_WIDTH (6U)
#define SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_26_31(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_26_31_SHIFT)) & SerDes_EP_PCIe_1_MSIX_RAM_CTRL_OFF_MSIX_RAM_CTRL_RESERVED_26_31_MASK)
/*! @} */

/*! @name SAFETY_MASK_OFF - Functional Safety Interrupt Events Mask Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_0_MASK (0x1U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_0_WIDTH (1U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_0_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_0_MASK)

#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_1_MASK (0x2U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_1_WIDTH (1U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_1_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_1_MASK)

#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_2_MASK (0x4U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_2_SHIFT (2U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_2_WIDTH (1U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_2_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_2_MASK)

#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_3_MASK (0x8U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_3_SHIFT (3U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_3_WIDTH (1U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_3_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_3_MASK)

#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_4_MASK (0x10U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_4_SHIFT (4U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_4_WIDTH (1U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_4_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_4_MASK)

#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_5_MASK (0x20U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_5_SHIFT (5U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_5_WIDTH (1U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_5_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_MASK_OFF_SAFETY_INT_MASK_5_MASK)

#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_RSVDP_6_MASK (0xFFFFFFC0U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_RSVDP_6_SHIFT (6U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_RSVDP_6_WIDTH (26U)
#define SerDes_EP_PCIe_1_SAFETY_MASK_OFF_RSVDP_6(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_MASK_OFF_RSVDP_6_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_MASK_OFF_RSVDP_6_MASK)
/*! @} */

/*! @name SAFETY_STATUS_OFF - Status for functional safety interrupt events. */
/*! @{ */

#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_0_MASK (0x1U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_0_WIDTH (1U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_0_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_0_MASK)

#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_1_MASK (0x2U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_1_SHIFT (1U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_1_WIDTH (1U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_1_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_1_MASK)

#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_2_MASK (0x4U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_2_SHIFT (2U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_2_WIDTH (1U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_2_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_2_MASK)

#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_3_MASK (0x8U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_3_SHIFT (3U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_3_WIDTH (1U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_3(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_3_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_3_MASK)

#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_4_MASK (0x10U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_4_SHIFT (4U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_4_WIDTH (1U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_4(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_4_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_4_MASK)

#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_5_MASK (0x20U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_5_SHIFT (5U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_5_WIDTH (1U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_5_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_SAFETY_INT_STATUS_5_MASK)

#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_RSVDP_6_MASK (0xFFFFFFC0U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_RSVDP_6_SHIFT (6U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_RSVDP_6_WIDTH (26U)
#define SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_RSVDP_6(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_RSVDP_6_SHIFT)) & SerDes_EP_PCIe_1_SAFETY_STATUS_OFF_RSVDP_6_MASK)
/*! @} */

/*! @name PL_APP_BUS_DEV_NUM_STATUS_OFF - Application driven bus and device number register. */
/*! @{ */

#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RSVDP_0_MASK (0x7U)
#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RSVDP_0_SHIFT (0U)
#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RSVDP_0_WIDTH (3U)
#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RSVDP_0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RSVDP_0_SHIFT)) & SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RSVDP_0_MASK)

#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RC_DSW_DEV_NUM_MASK (0xF8U)
#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RC_DSW_DEV_NUM_SHIFT (3U)
#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RC_DSW_DEV_NUM_WIDTH (5U)
#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RC_DSW_DEV_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RC_DSW_DEV_NUM_SHIFT)) & SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RC_DSW_DEV_NUM_MASK)

#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RC_DSW_BUS_NUM_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RC_DSW_BUS_NUM_SHIFT (8U)
#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RC_DSW_BUS_NUM_WIDTH (8U)
#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RC_DSW_BUS_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RC_DSW_BUS_NUM_SHIFT)) & SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RC_DSW_BUS_NUM_MASK)

#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RSVDP_16_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RSVDP_16_SHIFT (16U)
#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RSVDP_16_WIDTH (16U)
#define SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RSVDP_16(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RSVDP_16_SHIFT)) & SerDes_EP_PCIe_1_PL_APP_BUS_DEV_NUM_STATUS_OFF_RSVDP_16_MASK)
/*! @} */

/*! @name PCIPM_TRAFFIC_CTRL_OFF - TLP Traffic during Non-D0 State Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_VDM_TRAFFIC_BLOCKED_MASK (0x1U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_VDM_TRAFFIC_BLOCKED_SHIFT (0U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_VDM_TRAFFIC_BLOCKED_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_VDM_TRAFFIC_BLOCKED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_VDM_TRAFFIC_BLOCKED_SHIFT)) & SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_VDM_TRAFFIC_BLOCKED_MASK)

#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT0_BLOCKED_MASK (0x2U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT0_BLOCKED_SHIFT (1U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT0_BLOCKED_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT0_BLOCKED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT0_BLOCKED_SHIFT)) & SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT0_BLOCKED_MASK)

#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT1_BLOCKED_MASK (0x4U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT1_BLOCKED_SHIFT (2U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT1_BLOCKED_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT1_BLOCKED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT1_BLOCKED_SHIFT)) & SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT1_BLOCKED_MASK)

#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT2_BLOCKED_MASK (0x8U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT2_BLOCKED_SHIFT (3U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT2_BLOCKED_WIDTH (1U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT2_BLOCKED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT2_BLOCKED_SHIFT)) & SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_NEW_TLP_CLIENT2_BLOCKED_MASK)

#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_RESERVED_4_7_MASK (0xF0U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_RESERVED_4_7_SHIFT (4U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_RESERVED_4_7_WIDTH (4U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_RESERVED_4_7(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_RESERVED_4_7_SHIFT)) & SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_PCIPM_RESERVED_4_7_MASK)

#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_RSVDP_8_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_RSVDP_8_SHIFT (8U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_RSVDP_8_WIDTH (24U)
#define SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_RSVDP_8_SHIFT)) & SerDes_EP_PCIe_1_PCIPM_TRAFFIC_CTRL_OFF_RSVDP_8_MASK)
/*! @} */

/*! @name PL_CHK_REG_CONTROL_STATUS_OFF - CDM Register Checking Control and Status Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_START_MASK (0x1U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_START_SHIFT (0U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_START_WIDTH (1U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_START(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_START_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_START_MASK)

#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_CONTINUOUS_MASK (0x2U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_CONTINUOUS_SHIFT (1U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_CONTINUOUS_WIDTH (1U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_CONTINUOUS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_CONTINUOUS_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_CONTINUOUS_MASK)

#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_RSVDP_2_MASK (0xFFFCU)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_RSVDP_2_SHIFT (2U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_RSVDP_2_WIDTH (14U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_RSVDP_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_RSVDP_2_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_RSVDP_2_MASK)

#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPARISON_ERROR_MASK (0x10000U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPARISON_ERROR_SHIFT (16U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPARISON_ERROR_WIDTH (1U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPARISON_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPARISON_ERROR_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPARISON_ERROR_MASK)

#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_LOGIC_ERROR_MASK (0x20000U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_LOGIC_ERROR_SHIFT (17U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_LOGIC_ERROR_WIDTH (1U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_LOGIC_ERROR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_LOGIC_ERROR_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_LOGIC_ERROR_MASK)

#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPLETE_MASK (0x40000U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPLETE_SHIFT (18U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPLETE_WIDTH (1U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPLETE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPLETE_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_CHK_REG_COMPLETE_MASK)

#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_RSVDP_19_MASK (0xFFF80000U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_RSVDP_19_SHIFT (19U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_RSVDP_19_WIDTH (13U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_RSVDP_19(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_RSVDP_19_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_CONTROL_STATUS_OFF_RSVDP_19_MASK)
/*! @} */

/*! @name PL_CHK_REG_START_END_OFF - CDM Register Checking First and Last address to check. */
/*! @{ */

#define SerDes_EP_PCIe_1_PL_CHK_REG_START_END_OFF_CHK_REG_START_ADDR_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_PL_CHK_REG_START_END_OFF_CHK_REG_START_ADDR_SHIFT (0U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_START_END_OFF_CHK_REG_START_ADDR_WIDTH (16U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_START_END_OFF_CHK_REG_START_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_START_END_OFF_CHK_REG_START_ADDR_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_START_END_OFF_CHK_REG_START_ADDR_MASK)

#define SerDes_EP_PCIe_1_PL_CHK_REG_START_END_OFF_CHK_REG_END_ADDR_MASK (0xFFFF0000U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_START_END_OFF_CHK_REG_END_ADDR_SHIFT (16U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_START_END_OFF_CHK_REG_END_ADDR_WIDTH (16U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_START_END_OFF_CHK_REG_END_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_START_END_OFF_CHK_REG_END_ADDR_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_START_END_OFF_CHK_REG_END_ADDR_MASK)
/*! @} */

/*! @name PL_CHK_REG_ERR_ADDR_OFF - CDM Register Checking Error Address. */
/*! @{ */

#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_ADDR_OFF_CHK_REG_ERR_ADDR_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_ADDR_OFF_CHK_REG_ERR_ADDR_SHIFT (0U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_ADDR_OFF_CHK_REG_ERR_ADDR_WIDTH (32U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_ADDR_OFF_CHK_REG_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_ERR_ADDR_OFF_CHK_REG_ERR_ADDR_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_ERR_ADDR_OFF_CHK_REG_ERR_ADDR_MASK)
/*! @} */

/*! @name PL_CHK_REG_ERR_PF_VF_OFF - CDM Register Checking error PF and VF Numbers. */
/*! @{ */

#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_PF_ERR_NUMBER_MASK (0x1FU)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_PF_ERR_NUMBER_SHIFT (0U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_PF_ERR_NUMBER_WIDTH (5U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_PF_ERR_NUMBER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_PF_ERR_NUMBER_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_PF_ERR_NUMBER_MASK)

#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_RSVDP_5_MASK (0xFFE0U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_RSVDP_5_SHIFT (5U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_RSVDP_5_WIDTH (11U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_RSVDP_5(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_RSVDP_5_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_RSVDP_5_MASK)

#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_VF_ERR_NUMBER_MASK (0xFFF0000U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_VF_ERR_NUMBER_SHIFT (16U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_VF_ERR_NUMBER_WIDTH (12U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_VF_ERR_NUMBER(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_VF_ERR_NUMBER_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_CHK_REG_VF_ERR_NUMBER_MASK)

#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_RSVDP_28_MASK (0xF0000000U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_RSVDP_28_SHIFT (28U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_RSVDP_28_WIDTH (4U)
#define SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_RSVDP_28(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_RSVDP_28_SHIFT)) & SerDes_EP_PCIe_1_PL_CHK_REG_ERR_PF_VF_OFF_RSVDP_28_MASK)
/*! @} */

/*! @name AUX_CLK_FREQ_OFF - Auxiliary Clock Frequency Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_AUX_CLK_FREQ_OFF_AUX_CLK_FREQ_MASK (0x3FFU)
#define SerDes_EP_PCIe_1_AUX_CLK_FREQ_OFF_AUX_CLK_FREQ_SHIFT (0U)
#define SerDes_EP_PCIe_1_AUX_CLK_FREQ_OFF_AUX_CLK_FREQ_WIDTH (10U)
#define SerDes_EP_PCIe_1_AUX_CLK_FREQ_OFF_AUX_CLK_FREQ(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AUX_CLK_FREQ_OFF_AUX_CLK_FREQ_SHIFT)) & SerDes_EP_PCIe_1_AUX_CLK_FREQ_OFF_AUX_CLK_FREQ_MASK)

#define SerDes_EP_PCIe_1_AUX_CLK_FREQ_OFF_RSVDP_10_MASK (0xFFFFFC00U)
#define SerDes_EP_PCIe_1_AUX_CLK_FREQ_OFF_RSVDP_10_SHIFT (10U)
#define SerDes_EP_PCIe_1_AUX_CLK_FREQ_OFF_RSVDP_10_WIDTH (22U)
#define SerDes_EP_PCIe_1_AUX_CLK_FREQ_OFF_RSVDP_10(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_AUX_CLK_FREQ_OFF_RSVDP_10_SHIFT)) & SerDes_EP_PCIe_1_AUX_CLK_FREQ_OFF_RSVDP_10_MASK)
/*! @} */

/*! @name POWERDOWN_CTRL_STATUS_OFF - Powerdown Control and Status Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_FORCE_MASK (0x1U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_FORCE_SHIFT (0U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_FORCE_WIDTH (1U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_FORCE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_FORCE_SHIFT)) & SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_FORCE_MASK)

#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_VMAIN_ACK_MASK (0x2U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_VMAIN_ACK_SHIFT (1U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_VMAIN_ACK_WIDTH (1U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_VMAIN_ACK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_VMAIN_ACK_SHIFT)) & SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_VMAIN_ACK_MASK)

#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_RSVDP_2_MASK (0xCU)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_RSVDP_2_SHIFT (2U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_RSVDP_2_WIDTH (2U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_RSVDP_2(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_RSVDP_2_SHIFT)) & SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_RSVDP_2_MASK)

#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_MAC_POWERDOWN_MASK (0xF0U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_MAC_POWERDOWN_SHIFT (4U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_MAC_POWERDOWN_WIDTH (4U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_MAC_POWERDOWN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_MAC_POWERDOWN_SHIFT)) & SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_MAC_POWERDOWN_MASK)

#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_PHY_POWERDOWN_MASK (0xF00U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_PHY_POWERDOWN_SHIFT (8U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_PHY_POWERDOWN_WIDTH (4U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_PHY_POWERDOWN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_PHY_POWERDOWN_SHIFT)) & SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_POWERDOWN_PHY_POWERDOWN_MASK)

#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_RSVDP_12_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_RSVDP_12_SHIFT (12U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_RSVDP_12_WIDTH (20U)
#define SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_RSVDP_12(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_RSVDP_12_SHIFT)) & SerDes_EP_PCIe_1_POWERDOWN_CTRL_STATUS_OFF_RSVDP_12_MASK)
/*! @} */

/*! @name PIPE_RELATED_OFF - PIPE Related Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_PIPE_RELATED_OFF_PIPE_GARBAGE_DATA_MODE_MASK (0x100U)
#define SerDes_EP_PCIe_1_PIPE_RELATED_OFF_PIPE_GARBAGE_DATA_MODE_SHIFT (8U)
#define SerDes_EP_PCIe_1_PIPE_RELATED_OFF_PIPE_GARBAGE_DATA_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_PIPE_RELATED_OFF_PIPE_GARBAGE_DATA_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PIPE_RELATED_OFF_PIPE_GARBAGE_DATA_MODE_SHIFT)) & SerDes_EP_PCIe_1_PIPE_RELATED_OFF_PIPE_GARBAGE_DATA_MODE_MASK)

#define SerDes_EP_PCIe_1_PIPE_RELATED_OFF_RSVDP_9_MASK (0xFFFFFE00U)
#define SerDes_EP_PCIe_1_PIPE_RELATED_OFF_RSVDP_9_SHIFT (9U)
#define SerDes_EP_PCIe_1_PIPE_RELATED_OFF_RSVDP_9_WIDTH (23U)
#define SerDes_EP_PCIe_1_PIPE_RELATED_OFF_RSVDP_9(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_PIPE_RELATED_OFF_RSVDP_9_SHIFT)) & SerDes_EP_PCIe_1_PIPE_RELATED_OFF_RSVDP_9_MASK)
/*! @} */

/*! @name BAR0_MASK_REG - BAR0 Mask */
/*! @{ */

#define SerDes_EP_PCIe_1_BAR0_MASK_REG_PCI_TYPE0_BAR0_ENABLED_MASK (0x1U)
#define SerDes_EP_PCIe_1_BAR0_MASK_REG_PCI_TYPE0_BAR0_ENABLED_SHIFT (0U)
#define SerDes_EP_PCIe_1_BAR0_MASK_REG_PCI_TYPE0_BAR0_ENABLED_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR0_MASK_REG_PCI_TYPE0_BAR0_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR0_MASK_REG_PCI_TYPE0_BAR0_ENABLED_SHIFT)) & SerDes_EP_PCIe_1_BAR0_MASK_REG_PCI_TYPE0_BAR0_ENABLED_MASK)

#define SerDes_EP_PCIe_1_BAR0_MASK_REG_PCI_TYPE0_BAR0_MASK_MASK (0xFFFFFFFEU)
#define SerDes_EP_PCIe_1_BAR0_MASK_REG_PCI_TYPE0_BAR0_MASK_SHIFT (1U)
#define SerDes_EP_PCIe_1_BAR0_MASK_REG_PCI_TYPE0_BAR0_MASK_WIDTH (31U)
#define SerDes_EP_PCIe_1_BAR0_MASK_REG_PCI_TYPE0_BAR0_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR0_MASK_REG_PCI_TYPE0_BAR0_MASK_SHIFT)) & SerDes_EP_PCIe_1_BAR0_MASK_REG_PCI_TYPE0_BAR0_MASK_MASK)
/*! @} */

/*! @name BAR1_MASK_REG - BAR1 Mask */
/*! @{ */

#define SerDes_EP_PCIe_1_BAR1_MASK_REG_PCI_TYPE0_BAR1_ENABLED_MASK (0x1U)
#define SerDes_EP_PCIe_1_BAR1_MASK_REG_PCI_TYPE0_BAR1_ENABLED_SHIFT (0U)
#define SerDes_EP_PCIe_1_BAR1_MASK_REG_PCI_TYPE0_BAR1_ENABLED_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR1_MASK_REG_PCI_TYPE0_BAR1_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR1_MASK_REG_PCI_TYPE0_BAR1_ENABLED_SHIFT)) & SerDes_EP_PCIe_1_BAR1_MASK_REG_PCI_TYPE0_BAR1_ENABLED_MASK)

#define SerDes_EP_PCIe_1_BAR1_MASK_REG_PCI_TYPE0_BAR1_MASK_MASK (0xFFFFFFFEU)
#define SerDes_EP_PCIe_1_BAR1_MASK_REG_PCI_TYPE0_BAR1_MASK_SHIFT (1U)
#define SerDes_EP_PCIe_1_BAR1_MASK_REG_PCI_TYPE0_BAR1_MASK_WIDTH (31U)
#define SerDes_EP_PCIe_1_BAR1_MASK_REG_PCI_TYPE0_BAR1_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR1_MASK_REG_PCI_TYPE0_BAR1_MASK_SHIFT)) & SerDes_EP_PCIe_1_BAR1_MASK_REG_PCI_TYPE0_BAR1_MASK_MASK)
/*! @} */

/*! @name BAR2_MASK_REG - BAR2 Mask */
/*! @{ */

#define SerDes_EP_PCIe_1_BAR2_MASK_REG_PCI_TYPE0_BAR2_ENABLED_MASK (0x1U)
#define SerDes_EP_PCIe_1_BAR2_MASK_REG_PCI_TYPE0_BAR2_ENABLED_SHIFT (0U)
#define SerDes_EP_PCIe_1_BAR2_MASK_REG_PCI_TYPE0_BAR2_ENABLED_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR2_MASK_REG_PCI_TYPE0_BAR2_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR2_MASK_REG_PCI_TYPE0_BAR2_ENABLED_SHIFT)) & SerDes_EP_PCIe_1_BAR2_MASK_REG_PCI_TYPE0_BAR2_ENABLED_MASK)

#define SerDes_EP_PCIe_1_BAR2_MASK_REG_PCI_TYPE0_BAR2_MASK_MASK (0xFFFFFFFEU)
#define SerDes_EP_PCIe_1_BAR2_MASK_REG_PCI_TYPE0_BAR2_MASK_SHIFT (1U)
#define SerDes_EP_PCIe_1_BAR2_MASK_REG_PCI_TYPE0_BAR2_MASK_WIDTH (31U)
#define SerDes_EP_PCIe_1_BAR2_MASK_REG_PCI_TYPE0_BAR2_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR2_MASK_REG_PCI_TYPE0_BAR2_MASK_SHIFT)) & SerDes_EP_PCIe_1_BAR2_MASK_REG_PCI_TYPE0_BAR2_MASK_MASK)
/*! @} */

/*! @name BAR3_MASK_REG - BAR3 Mask */
/*! @{ */

#define SerDes_EP_PCIe_1_BAR3_MASK_REG_PCI_TYPE0_BAR3_ENABLED_MASK (0x1U)
#define SerDes_EP_PCIe_1_BAR3_MASK_REG_PCI_TYPE0_BAR3_ENABLED_SHIFT (0U)
#define SerDes_EP_PCIe_1_BAR3_MASK_REG_PCI_TYPE0_BAR3_ENABLED_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR3_MASK_REG_PCI_TYPE0_BAR3_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR3_MASK_REG_PCI_TYPE0_BAR3_ENABLED_SHIFT)) & SerDes_EP_PCIe_1_BAR3_MASK_REG_PCI_TYPE0_BAR3_ENABLED_MASK)

#define SerDes_EP_PCIe_1_BAR3_MASK_REG_PCI_TYPE0_BAR3_MASK_MASK (0xFFFFFFFEU)
#define SerDes_EP_PCIe_1_BAR3_MASK_REG_PCI_TYPE0_BAR3_MASK_SHIFT (1U)
#define SerDes_EP_PCIe_1_BAR3_MASK_REG_PCI_TYPE0_BAR3_MASK_WIDTH (31U)
#define SerDes_EP_PCIe_1_BAR3_MASK_REG_PCI_TYPE0_BAR3_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR3_MASK_REG_PCI_TYPE0_BAR3_MASK_SHIFT)) & SerDes_EP_PCIe_1_BAR3_MASK_REG_PCI_TYPE0_BAR3_MASK_MASK)
/*! @} */

/*! @name BAR4_MASK_REG - BAR4 Mask */
/*! @{ */

#define SerDes_EP_PCIe_1_BAR4_MASK_REG_PCI_TYPE0_BAR4_ENABLED_MASK (0x1U)
#define SerDes_EP_PCIe_1_BAR4_MASK_REG_PCI_TYPE0_BAR4_ENABLED_SHIFT (0U)
#define SerDes_EP_PCIe_1_BAR4_MASK_REG_PCI_TYPE0_BAR4_ENABLED_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR4_MASK_REG_PCI_TYPE0_BAR4_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR4_MASK_REG_PCI_TYPE0_BAR4_ENABLED_SHIFT)) & SerDes_EP_PCIe_1_BAR4_MASK_REG_PCI_TYPE0_BAR4_ENABLED_MASK)

#define SerDes_EP_PCIe_1_BAR4_MASK_REG_PCI_TYPE0_BAR4_MASK_MASK (0xFFFFFFFEU)
#define SerDes_EP_PCIe_1_BAR4_MASK_REG_PCI_TYPE0_BAR4_MASK_SHIFT (1U)
#define SerDes_EP_PCIe_1_BAR4_MASK_REG_PCI_TYPE0_BAR4_MASK_WIDTH (31U)
#define SerDes_EP_PCIe_1_BAR4_MASK_REG_PCI_TYPE0_BAR4_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR4_MASK_REG_PCI_TYPE0_BAR4_MASK_SHIFT)) & SerDes_EP_PCIe_1_BAR4_MASK_REG_PCI_TYPE0_BAR4_MASK_MASK)
/*! @} */

/*! @name BAR5_MASK_REG - BAR5 Mask */
/*! @{ */

#define SerDes_EP_PCIe_1_BAR5_MASK_REG_PCI_TYPE0_BAR5_ENABLED_MASK (0x1U)
#define SerDes_EP_PCIe_1_BAR5_MASK_REG_PCI_TYPE0_BAR5_ENABLED_SHIFT (0U)
#define SerDes_EP_PCIe_1_BAR5_MASK_REG_PCI_TYPE0_BAR5_ENABLED_WIDTH (1U)
#define SerDes_EP_PCIe_1_BAR5_MASK_REG_PCI_TYPE0_BAR5_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR5_MASK_REG_PCI_TYPE0_BAR5_ENABLED_SHIFT)) & SerDes_EP_PCIe_1_BAR5_MASK_REG_PCI_TYPE0_BAR5_ENABLED_MASK)

#define SerDes_EP_PCIe_1_BAR5_MASK_REG_PCI_TYPE0_BAR5_MASK_MASK (0xFFFFFFFEU)
#define SerDes_EP_PCIe_1_BAR5_MASK_REG_PCI_TYPE0_BAR5_MASK_SHIFT (1U)
#define SerDes_EP_PCIe_1_BAR5_MASK_REG_PCI_TYPE0_BAR5_MASK_WIDTH (31U)
#define SerDes_EP_PCIe_1_BAR5_MASK_REG_PCI_TYPE0_BAR5_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_BAR5_MASK_REG_PCI_TYPE0_BAR5_MASK_SHIFT)) & SerDes_EP_PCIe_1_BAR5_MASK_REG_PCI_TYPE0_BAR5_MASK_MASK)
/*! @} */

/*! @name EXP_ROM_BAR_MASK_REG - Expansion ROM BAR Mask Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_EXP_ROM_BAR_MASK_REG_ROM_BAR_ENABLED_MASK (0x1U)
#define SerDes_EP_PCIe_1_EXP_ROM_BAR_MASK_REG_ROM_BAR_ENABLED_SHIFT (0U)
#define SerDes_EP_PCIe_1_EXP_ROM_BAR_MASK_REG_ROM_BAR_ENABLED_WIDTH (1U)
#define SerDes_EP_PCIe_1_EXP_ROM_BAR_MASK_REG_ROM_BAR_ENABLED(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EXP_ROM_BAR_MASK_REG_ROM_BAR_ENABLED_SHIFT)) & SerDes_EP_PCIe_1_EXP_ROM_BAR_MASK_REG_ROM_BAR_ENABLED_MASK)

#define SerDes_EP_PCIe_1_EXP_ROM_BAR_MASK_REG_ROM_MASK_MASK (0xFFFFFFFEU)
#define SerDes_EP_PCIe_1_EXP_ROM_BAR_MASK_REG_ROM_MASK_SHIFT (1U)
#define SerDes_EP_PCIe_1_EXP_ROM_BAR_MASK_REG_ROM_MASK_WIDTH (31U)
#define SerDes_EP_PCIe_1_EXP_ROM_BAR_MASK_REG_ROM_MASK(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_EXP_ROM_BAR_MASK_REG_ROM_MASK_SHIFT)) & SerDes_EP_PCIe_1_EXP_ROM_BAR_MASK_REG_ROM_MASK_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_OUTBOUND_0 - iATU Region Control 1 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TYPE_MASK (0x1FU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TYPE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TYPE_WIDTH (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TYPE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TYPE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TC_MASK (0xE0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TC_SHIFT (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TC_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TC_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TC_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TD_MASK (0x100U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TD_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_TD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_ATTR_MASK (0x600U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_ATTR_SHIFT (9U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_ATTR_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_ATTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_ATTR_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_ATTR_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_INCREASE_REGION_SIZE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_INCREASE_REGION_SIZE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_INCREASE_REGION_SIZE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_INCREASE_REGION_SIZE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_INCREASE_REGION_SIZE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_CTRL_1_FUNC_NUM_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_CTRL_1_FUNC_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_CTRL_1_FUNC_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_0_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_OUTBOUND_0 - iATU Region Control 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_MSG_CODE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_MSG_CODE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_MSG_CODE_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_MSG_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_MSG_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_MSG_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SUBSTITUTE_EN_MASK (0x10000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SUBSTITUTE_EN_SHIFT (16U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SUBSTITUTE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SUBSTITUTE_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TAG_SUBSTITUTE_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_FUNC_BYPASS_MASK (0x80000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_FUNC_BYPASS_SHIFT (19U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_FUNC_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_FUNC_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_FUNC_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_FUNC_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_SNP_MASK (0x100000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_SNP_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_SNP_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_SNP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_SNP_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_SNP_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TLP_HEADER_FIELDS_BYPASS_MASK (0x200000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TLP_HEADER_FIELDS_BYPASS_SHIFT (21U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TLP_HEADER_FIELDS_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TLP_HEADER_FIELDS_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TLP_HEADER_FIELDS_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_TLP_HEADER_FIELDS_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INHIBIT_PAYLOAD_MASK (0x400000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INHIBIT_PAYLOAD_SHIFT (22U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INHIBIT_PAYLOAD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INHIBIT_PAYLOAD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INHIBIT_PAYLOAD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INHIBIT_PAYLOAD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_HEADER_SUBSTITUTE_EN_MASK (0x800000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_HEADER_SUBSTITUTE_EN_SHIFT (23U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_HEADER_SUBSTITUTE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_HEADER_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_HEADER_SUBSTITUTE_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_HEADER_SUBSTITUTE_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_DMA_BYPASS_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_DMA_BYPASS_SHIFT (27U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_DMA_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_DMA_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_DMA_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_DMA_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_CFG_SHIFT_MODE_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_CFG_SHIFT_MODE_SHIFT (28U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_CFG_SHIFT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_CFG_SHIFT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_CFG_SHIFT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INVERT_MODE_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INVERT_MODE_SHIFT (29U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INVERT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INVERT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_INVERT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_REGION_EN_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_REGION_EN_SHIFT (31U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_REGION_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_REGION_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_0_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0 - iATU Lower Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0 - iATU Upper Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0_UPPER_BASE_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0_UPPER_BASE_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0_UPPER_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_OUTBOUND_0 - iATU Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_CBUF_INCR_MASK (0xFU)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_CBUF_INCR_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_CBUF_INCR_WIDTH (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_CBUF_INCR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_CBUF_INCR_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_CBUF_INCR_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_HW_MASK (0xFF0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_HW_SHIFT (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_HW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_0_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0 - iATU Lower Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0_LWR_TARGET_RW_OUTBOUND_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0_LWR_TARGET_RW_OUTBOUND_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0_LWR_TARGET_RW_OUTBOUND_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0_LWR_TARGET_RW_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0_LWR_TARGET_RW_OUTBOUND_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0_LWR_TARGET_RW_OUTBOUND_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0 - iATU Upper Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0_UPPER_TARGET_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0_UPPER_TARGET_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0_UPPER_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0 - iATU Upper Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_RW_MASK)

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_INBOUND_0 - iATU Region Control 1 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TYPE_MASK (0x1FU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TYPE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TYPE_WIDTH (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TYPE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TYPE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TC_MASK (0xE0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TC_SHIFT (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TC_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TC_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TC_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TD_MASK (0x100U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TD_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_TD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_ATTR_MASK (0x600U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_ATTR_SHIFT (9U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_ATTR_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_ATTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_ATTR_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_ATTR_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_INCREASE_REGION_SIZE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_INCREASE_REGION_SIZE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_INCREASE_REGION_SIZE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_INCREASE_REGION_SIZE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_INCREASE_REGION_SIZE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_CTRL_1_FUNC_NUM_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_CTRL_1_FUNC_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_CTRL_1_FUNC_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_0_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_INBOUND_0 - iATU Region Control 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_CODE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_CODE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_CODE_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_BAR_NUM_MASK (0x700U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_BAR_NUM_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_BAR_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_BAR_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_BAR_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_BAR_NUM_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_TYPE_MATCH_MODE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_TYPE_MATCH_MODE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_TYPE_MATCH_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_TYPE_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_TYPE_MATCH_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_TYPE_MATCH_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_TC_MATCH_EN_MASK (0x4000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_TC_MATCH_EN_SHIFT (14U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_TC_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_TC_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_TC_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_TC_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_TD_MATCH_EN_MASK (0x8000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_TD_MATCH_EN_SHIFT (15U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_TD_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_TD_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_TD_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_TD_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_ATTR_MATCH_EN_MASK (0x10000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_ATTR_MATCH_EN_SHIFT (16U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_ATTR_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_ATTR_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_ATTR_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_ATTR_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUNC_NUM_MATCH_EN_MASK (0x80000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUNC_NUM_MATCH_EN_SHIFT (19U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUNC_NUM_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUNC_NUM_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUNC_NUM_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUNC_NUM_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_CODE_MATCH_EN_MASK (0x200000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_CODE_MATCH_EN_SHIFT (21U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_CODE_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_CODE_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_CODE_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MSG_CODE_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_SINGLE_ADDR_LOC_TRANS_EN_MASK (0x800000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_SINGLE_ADDR_LOC_TRANS_EN_SHIFT (23U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_SINGLE_ADDR_LOC_TRANS_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_SINGLE_ADDR_LOC_TRANS_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_SINGLE_ADDR_LOC_TRANS_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_SINGLE_ADDR_LOC_TRANS_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_RESPONSE_CODE_MASK (0x3000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_RESPONSE_CODE_SHIFT (24U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_RESPONSE_CODE_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_RESPONSE_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_RESPONSE_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_RESPONSE_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUZZY_TYPE_MATCH_CODE_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUZZY_TYPE_MATCH_CODE_SHIFT (27U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUZZY_TYPE_MATCH_CODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUZZY_TYPE_MATCH_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUZZY_TYPE_MATCH_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_FUZZY_TYPE_MATCH_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_CFG_SHIFT_MODE_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_CFG_SHIFT_MODE_SHIFT (28U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_CFG_SHIFT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_CFG_SHIFT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_CFG_SHIFT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_INVERT_MODE_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_INVERT_MODE_SHIFT (29U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_INVERT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_INVERT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_INVERT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MATCH_MODE_MASK (0x40000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MATCH_MODE_SHIFT (30U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MATCH_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MATCH_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_MATCH_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_REGION_EN_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_REGION_EN_SHIFT (31U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_REGION_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_REGION_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_0_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_INBOUND_0 - iATU Lower Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_0_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_INBOUND_0 - iATU Upper Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_0_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_0_UPPER_BASE_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_0_UPPER_BASE_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_0_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_0_UPPER_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_0_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_INBOUND_0 - iATU Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_CBUF_INCR_MASK (0xFU)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_CBUF_INCR_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_CBUF_INCR_WIDTH (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_CBUF_INCR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_CBUF_INCR_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_CBUF_INCR_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_HW_MASK (0xFF0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_HW_SHIFT (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_HW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_0_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_INBOUND_0 - iATU Lower Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_0_LWR_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0 - iATU Upper Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0_UPPER_TARGET_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0_UPPER_TARGET_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0_UPPER_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_0_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0 - iATU Upper Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_RW_MASK)

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_0_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_OUTBOUND_1 - iATU Region Control 1 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TYPE_MASK (0x1FU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TYPE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TYPE_WIDTH (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TYPE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TYPE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TC_MASK (0xE0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TC_SHIFT (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TC_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TC_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TC_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TD_MASK (0x100U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TD_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_TD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_ATTR_MASK (0x600U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_ATTR_SHIFT (9U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_ATTR_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_ATTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_ATTR_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_ATTR_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_INCREASE_REGION_SIZE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_INCREASE_REGION_SIZE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_INCREASE_REGION_SIZE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_INCREASE_REGION_SIZE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_INCREASE_REGION_SIZE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_CTRL_1_FUNC_NUM_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_CTRL_1_FUNC_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_CTRL_1_FUNC_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_1_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_OUTBOUND_1 - iATU Region Control 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_MSG_CODE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_MSG_CODE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_MSG_CODE_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_MSG_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_MSG_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_MSG_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SUBSTITUTE_EN_MASK (0x10000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SUBSTITUTE_EN_SHIFT (16U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SUBSTITUTE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SUBSTITUTE_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TAG_SUBSTITUTE_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_FUNC_BYPASS_MASK (0x80000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_FUNC_BYPASS_SHIFT (19U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_FUNC_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_FUNC_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_FUNC_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_FUNC_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_SNP_MASK (0x100000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_SNP_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_SNP_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_SNP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_SNP_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_SNP_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TLP_HEADER_FIELDS_BYPASS_MASK (0x200000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TLP_HEADER_FIELDS_BYPASS_SHIFT (21U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TLP_HEADER_FIELDS_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TLP_HEADER_FIELDS_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TLP_HEADER_FIELDS_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_TLP_HEADER_FIELDS_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INHIBIT_PAYLOAD_MASK (0x400000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INHIBIT_PAYLOAD_SHIFT (22U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INHIBIT_PAYLOAD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INHIBIT_PAYLOAD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INHIBIT_PAYLOAD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INHIBIT_PAYLOAD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_HEADER_SUBSTITUTE_EN_MASK (0x800000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_HEADER_SUBSTITUTE_EN_SHIFT (23U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_HEADER_SUBSTITUTE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_HEADER_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_HEADER_SUBSTITUTE_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_HEADER_SUBSTITUTE_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_DMA_BYPASS_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_DMA_BYPASS_SHIFT (27U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_DMA_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_DMA_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_DMA_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_DMA_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_CFG_SHIFT_MODE_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_CFG_SHIFT_MODE_SHIFT (28U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_CFG_SHIFT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_CFG_SHIFT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_CFG_SHIFT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INVERT_MODE_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INVERT_MODE_SHIFT (29U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INVERT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INVERT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_INVERT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_REGION_EN_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_REGION_EN_SHIFT (31U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_REGION_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_REGION_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_1_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1 - iATU Lower Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1 - iATU Upper Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1_UPPER_BASE_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1_UPPER_BASE_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1_UPPER_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_OUTBOUND_1 - iATU Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_CBUF_INCR_MASK (0xFU)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_CBUF_INCR_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_CBUF_INCR_WIDTH (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_CBUF_INCR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_CBUF_INCR_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_CBUF_INCR_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_HW_MASK (0xFF0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_HW_SHIFT (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_HW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_1_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1 - iATU Lower Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1_LWR_TARGET_RW_OUTBOUND_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1_LWR_TARGET_RW_OUTBOUND_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1_LWR_TARGET_RW_OUTBOUND_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1_LWR_TARGET_RW_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1_LWR_TARGET_RW_OUTBOUND_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1_LWR_TARGET_RW_OUTBOUND_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1 - iATU Upper Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1_UPPER_TARGET_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1_UPPER_TARGET_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1_UPPER_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1 - iATU Upper Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_RW_MASK)

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_INBOUND_1 - iATU Region Control 1 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TYPE_MASK (0x1FU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TYPE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TYPE_WIDTH (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TYPE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TYPE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TC_MASK (0xE0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TC_SHIFT (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TC_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TC_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TC_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TD_MASK (0x100U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TD_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_TD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_ATTR_MASK (0x600U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_ATTR_SHIFT (9U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_ATTR_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_ATTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_ATTR_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_ATTR_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_INCREASE_REGION_SIZE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_INCREASE_REGION_SIZE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_INCREASE_REGION_SIZE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_INCREASE_REGION_SIZE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_INCREASE_REGION_SIZE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_CTRL_1_FUNC_NUM_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_CTRL_1_FUNC_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_CTRL_1_FUNC_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_1_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_INBOUND_1 - iATU Region Control 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_CODE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_CODE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_CODE_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_BAR_NUM_MASK (0x700U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_BAR_NUM_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_BAR_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_BAR_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_BAR_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_BAR_NUM_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_TYPE_MATCH_MODE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_TYPE_MATCH_MODE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_TYPE_MATCH_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_TYPE_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_TYPE_MATCH_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_TYPE_MATCH_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_TC_MATCH_EN_MASK (0x4000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_TC_MATCH_EN_SHIFT (14U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_TC_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_TC_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_TC_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_TC_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_TD_MATCH_EN_MASK (0x8000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_TD_MATCH_EN_SHIFT (15U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_TD_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_TD_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_TD_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_TD_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_ATTR_MATCH_EN_MASK (0x10000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_ATTR_MATCH_EN_SHIFT (16U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_ATTR_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_ATTR_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_ATTR_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_ATTR_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUNC_NUM_MATCH_EN_MASK (0x80000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUNC_NUM_MATCH_EN_SHIFT (19U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUNC_NUM_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUNC_NUM_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUNC_NUM_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUNC_NUM_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_CODE_MATCH_EN_MASK (0x200000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_CODE_MATCH_EN_SHIFT (21U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_CODE_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_CODE_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_CODE_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MSG_CODE_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_SINGLE_ADDR_LOC_TRANS_EN_MASK (0x800000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_SINGLE_ADDR_LOC_TRANS_EN_SHIFT (23U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_SINGLE_ADDR_LOC_TRANS_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_SINGLE_ADDR_LOC_TRANS_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_SINGLE_ADDR_LOC_TRANS_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_SINGLE_ADDR_LOC_TRANS_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_RESPONSE_CODE_MASK (0x3000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_RESPONSE_CODE_SHIFT (24U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_RESPONSE_CODE_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_RESPONSE_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_RESPONSE_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_RESPONSE_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUZZY_TYPE_MATCH_CODE_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUZZY_TYPE_MATCH_CODE_SHIFT (27U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUZZY_TYPE_MATCH_CODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUZZY_TYPE_MATCH_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUZZY_TYPE_MATCH_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_FUZZY_TYPE_MATCH_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_CFG_SHIFT_MODE_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_CFG_SHIFT_MODE_SHIFT (28U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_CFG_SHIFT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_CFG_SHIFT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_CFG_SHIFT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_INVERT_MODE_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_INVERT_MODE_SHIFT (29U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_INVERT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_INVERT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_INVERT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MATCH_MODE_MASK (0x40000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MATCH_MODE_SHIFT (30U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MATCH_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MATCH_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_MATCH_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_REGION_EN_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_REGION_EN_SHIFT (31U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_REGION_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_REGION_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_1_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_INBOUND_1 - iATU Lower Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_1_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_INBOUND_1 - iATU Upper Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_1_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_1_UPPER_BASE_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_1_UPPER_BASE_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_1_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_1_UPPER_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_1_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_INBOUND_1 - iATU Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_CBUF_INCR_MASK (0xFU)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_CBUF_INCR_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_CBUF_INCR_WIDTH (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_CBUF_INCR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_CBUF_INCR_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_CBUF_INCR_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_HW_MASK (0xFF0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_HW_SHIFT (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_HW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_1_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_INBOUND_1 - iATU Lower Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_1_LWR_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1 - iATU Upper Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1_UPPER_TARGET_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1_UPPER_TARGET_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1_UPPER_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_1_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1 - iATU Upper Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_RW_MASK)

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_1_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_OUTBOUND_2 - iATU Region Control 1 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TYPE_MASK (0x1FU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TYPE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TYPE_WIDTH (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TYPE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TYPE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TC_MASK (0xE0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TC_SHIFT (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TC_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TC_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TC_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TD_MASK (0x100U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TD_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_TD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_ATTR_MASK (0x600U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_ATTR_SHIFT (9U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_ATTR_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_ATTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_ATTR_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_ATTR_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_INCREASE_REGION_SIZE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_INCREASE_REGION_SIZE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_INCREASE_REGION_SIZE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_INCREASE_REGION_SIZE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_INCREASE_REGION_SIZE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_CTRL_1_FUNC_NUM_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_CTRL_1_FUNC_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_CTRL_1_FUNC_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_2_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_OUTBOUND_2 - iATU Region Control 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_MSG_CODE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_MSG_CODE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_MSG_CODE_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_MSG_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_MSG_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_MSG_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SUBSTITUTE_EN_MASK (0x10000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SUBSTITUTE_EN_SHIFT (16U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SUBSTITUTE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SUBSTITUTE_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TAG_SUBSTITUTE_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_FUNC_BYPASS_MASK (0x80000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_FUNC_BYPASS_SHIFT (19U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_FUNC_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_FUNC_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_FUNC_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_FUNC_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_SNP_MASK (0x100000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_SNP_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_SNP_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_SNP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_SNP_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_SNP_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TLP_HEADER_FIELDS_BYPASS_MASK (0x200000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TLP_HEADER_FIELDS_BYPASS_SHIFT (21U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TLP_HEADER_FIELDS_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TLP_HEADER_FIELDS_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TLP_HEADER_FIELDS_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_TLP_HEADER_FIELDS_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INHIBIT_PAYLOAD_MASK (0x400000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INHIBIT_PAYLOAD_SHIFT (22U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INHIBIT_PAYLOAD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INHIBIT_PAYLOAD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INHIBIT_PAYLOAD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INHIBIT_PAYLOAD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_HEADER_SUBSTITUTE_EN_MASK (0x800000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_HEADER_SUBSTITUTE_EN_SHIFT (23U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_HEADER_SUBSTITUTE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_HEADER_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_HEADER_SUBSTITUTE_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_HEADER_SUBSTITUTE_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_DMA_BYPASS_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_DMA_BYPASS_SHIFT (27U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_DMA_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_DMA_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_DMA_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_DMA_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_CFG_SHIFT_MODE_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_CFG_SHIFT_MODE_SHIFT (28U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_CFG_SHIFT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_CFG_SHIFT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_CFG_SHIFT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INVERT_MODE_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INVERT_MODE_SHIFT (29U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INVERT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INVERT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_INVERT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_REGION_EN_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_REGION_EN_SHIFT (31U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_REGION_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_REGION_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_2_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2 - iATU Lower Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2 - iATU Upper Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2_UPPER_BASE_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2_UPPER_BASE_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2_UPPER_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_OUTBOUND_2 - iATU Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_CBUF_INCR_MASK (0xFU)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_CBUF_INCR_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_CBUF_INCR_WIDTH (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_CBUF_INCR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_CBUF_INCR_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_CBUF_INCR_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_HW_MASK (0xFF0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_HW_SHIFT (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_HW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_2_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2 - iATU Lower Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2_LWR_TARGET_RW_OUTBOUND_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2_LWR_TARGET_RW_OUTBOUND_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2_LWR_TARGET_RW_OUTBOUND_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2_LWR_TARGET_RW_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2_LWR_TARGET_RW_OUTBOUND_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2_LWR_TARGET_RW_OUTBOUND_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2 - iATU Upper Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2_UPPER_TARGET_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2_UPPER_TARGET_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2_UPPER_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2 - iATU Upper Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_RW_MASK)

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_INBOUND_2 - iATU Region Control 1 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TYPE_MASK (0x1FU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TYPE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TYPE_WIDTH (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TYPE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TYPE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TC_MASK (0xE0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TC_SHIFT (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TC_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TC_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TC_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TD_MASK (0x100U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TD_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_TD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_ATTR_MASK (0x600U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_ATTR_SHIFT (9U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_ATTR_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_ATTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_ATTR_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_ATTR_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_INCREASE_REGION_SIZE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_INCREASE_REGION_SIZE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_INCREASE_REGION_SIZE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_INCREASE_REGION_SIZE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_INCREASE_REGION_SIZE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_CTRL_1_FUNC_NUM_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_CTRL_1_FUNC_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_CTRL_1_FUNC_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_2_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_INBOUND_2 - iATU Region Control 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_CODE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_CODE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_CODE_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_BAR_NUM_MASK (0x700U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_BAR_NUM_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_BAR_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_BAR_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_BAR_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_BAR_NUM_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_TYPE_MATCH_MODE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_TYPE_MATCH_MODE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_TYPE_MATCH_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_TYPE_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_TYPE_MATCH_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_TYPE_MATCH_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_TC_MATCH_EN_MASK (0x4000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_TC_MATCH_EN_SHIFT (14U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_TC_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_TC_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_TC_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_TC_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_TD_MATCH_EN_MASK (0x8000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_TD_MATCH_EN_SHIFT (15U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_TD_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_TD_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_TD_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_TD_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_ATTR_MATCH_EN_MASK (0x10000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_ATTR_MATCH_EN_SHIFT (16U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_ATTR_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_ATTR_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_ATTR_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_ATTR_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUNC_NUM_MATCH_EN_MASK (0x80000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUNC_NUM_MATCH_EN_SHIFT (19U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUNC_NUM_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUNC_NUM_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUNC_NUM_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUNC_NUM_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_CODE_MATCH_EN_MASK (0x200000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_CODE_MATCH_EN_SHIFT (21U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_CODE_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_CODE_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_CODE_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MSG_CODE_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_SINGLE_ADDR_LOC_TRANS_EN_MASK (0x800000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_SINGLE_ADDR_LOC_TRANS_EN_SHIFT (23U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_SINGLE_ADDR_LOC_TRANS_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_SINGLE_ADDR_LOC_TRANS_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_SINGLE_ADDR_LOC_TRANS_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_SINGLE_ADDR_LOC_TRANS_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_RESPONSE_CODE_MASK (0x3000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_RESPONSE_CODE_SHIFT (24U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_RESPONSE_CODE_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_RESPONSE_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_RESPONSE_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_RESPONSE_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUZZY_TYPE_MATCH_CODE_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUZZY_TYPE_MATCH_CODE_SHIFT (27U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUZZY_TYPE_MATCH_CODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUZZY_TYPE_MATCH_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUZZY_TYPE_MATCH_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_FUZZY_TYPE_MATCH_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_CFG_SHIFT_MODE_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_CFG_SHIFT_MODE_SHIFT (28U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_CFG_SHIFT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_CFG_SHIFT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_CFG_SHIFT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_INVERT_MODE_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_INVERT_MODE_SHIFT (29U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_INVERT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_INVERT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_INVERT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MATCH_MODE_MASK (0x40000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MATCH_MODE_SHIFT (30U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MATCH_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MATCH_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_MATCH_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_REGION_EN_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_REGION_EN_SHIFT (31U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_REGION_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_REGION_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_2_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_INBOUND_2 - iATU Lower Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_2_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_INBOUND_2 - iATU Upper Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_2_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_2_UPPER_BASE_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_2_UPPER_BASE_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_2_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_2_UPPER_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_2_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_INBOUND_2 - iATU Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_CBUF_INCR_MASK (0xFU)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_CBUF_INCR_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_CBUF_INCR_WIDTH (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_CBUF_INCR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_CBUF_INCR_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_CBUF_INCR_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_HW_MASK (0xFF0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_HW_SHIFT (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_HW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_2_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_INBOUND_2 - iATU Lower Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_2_LWR_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2 - iATU Upper Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2_UPPER_TARGET_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2_UPPER_TARGET_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2_UPPER_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_2_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2 - iATU Upper Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_RW_MASK)

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_2_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_OUTBOUND_3 - iATU Region Control 1 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TYPE_MASK (0x1FU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TYPE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TYPE_WIDTH (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TYPE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TYPE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TC_MASK (0xE0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TC_SHIFT (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TC_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TC_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TC_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TD_MASK (0x100U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TD_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_TD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_ATTR_MASK (0x600U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_ATTR_SHIFT (9U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_ATTR_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_ATTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_ATTR_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_ATTR_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_INCREASE_REGION_SIZE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_INCREASE_REGION_SIZE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_INCREASE_REGION_SIZE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_INCREASE_REGION_SIZE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_INCREASE_REGION_SIZE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_CTRL_1_FUNC_NUM_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_CTRL_1_FUNC_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_CTRL_1_FUNC_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_3_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_OUTBOUND_3 - iATU Region Control 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_MSG_CODE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_MSG_CODE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_MSG_CODE_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_MSG_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_MSG_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_MSG_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SUBSTITUTE_EN_MASK (0x10000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SUBSTITUTE_EN_SHIFT (16U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SUBSTITUTE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SUBSTITUTE_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TAG_SUBSTITUTE_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_FUNC_BYPASS_MASK (0x80000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_FUNC_BYPASS_SHIFT (19U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_FUNC_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_FUNC_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_FUNC_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_FUNC_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_SNP_MASK (0x100000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_SNP_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_SNP_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_SNP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_SNP_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_SNP_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TLP_HEADER_FIELDS_BYPASS_MASK (0x200000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TLP_HEADER_FIELDS_BYPASS_SHIFT (21U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TLP_HEADER_FIELDS_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TLP_HEADER_FIELDS_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TLP_HEADER_FIELDS_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_TLP_HEADER_FIELDS_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INHIBIT_PAYLOAD_MASK (0x400000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INHIBIT_PAYLOAD_SHIFT (22U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INHIBIT_PAYLOAD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INHIBIT_PAYLOAD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INHIBIT_PAYLOAD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INHIBIT_PAYLOAD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_HEADER_SUBSTITUTE_EN_MASK (0x800000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_HEADER_SUBSTITUTE_EN_SHIFT (23U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_HEADER_SUBSTITUTE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_HEADER_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_HEADER_SUBSTITUTE_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_HEADER_SUBSTITUTE_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_DMA_BYPASS_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_DMA_BYPASS_SHIFT (27U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_DMA_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_DMA_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_DMA_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_DMA_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_CFG_SHIFT_MODE_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_CFG_SHIFT_MODE_SHIFT (28U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_CFG_SHIFT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_CFG_SHIFT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_CFG_SHIFT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INVERT_MODE_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INVERT_MODE_SHIFT (29U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INVERT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INVERT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_INVERT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_REGION_EN_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_REGION_EN_SHIFT (31U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_REGION_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_REGION_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_3_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3 - iATU Lower Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3 - iATU Upper Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3_UPPER_BASE_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3_UPPER_BASE_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3_UPPER_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_OUTBOUND_3 - iATU Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_CBUF_INCR_MASK (0xFU)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_CBUF_INCR_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_CBUF_INCR_WIDTH (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_CBUF_INCR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_CBUF_INCR_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_CBUF_INCR_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_HW_MASK (0xFF0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_HW_SHIFT (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_HW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_3_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3 - iATU Lower Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3_LWR_TARGET_RW_OUTBOUND_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3_LWR_TARGET_RW_OUTBOUND_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3_LWR_TARGET_RW_OUTBOUND_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3_LWR_TARGET_RW_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3_LWR_TARGET_RW_OUTBOUND_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3_LWR_TARGET_RW_OUTBOUND_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3 - iATU Upper Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3_UPPER_TARGET_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3_UPPER_TARGET_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3_UPPER_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3 - iATU Upper Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_RW_MASK)

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_INBOUND_3 - iATU Region Control 1 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TYPE_MASK (0x1FU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TYPE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TYPE_WIDTH (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TYPE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TYPE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TC_MASK (0xE0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TC_SHIFT (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TC_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TC_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TC_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TD_MASK (0x100U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TD_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_TD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_ATTR_MASK (0x600U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_ATTR_SHIFT (9U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_ATTR_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_ATTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_ATTR_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_ATTR_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_INCREASE_REGION_SIZE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_INCREASE_REGION_SIZE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_INCREASE_REGION_SIZE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_INCREASE_REGION_SIZE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_INCREASE_REGION_SIZE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_CTRL_1_FUNC_NUM_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_CTRL_1_FUNC_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_CTRL_1_FUNC_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_INBOUND_3_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_INBOUND_3 - iATU Region Control 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_CODE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_CODE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_CODE_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_BAR_NUM_MASK (0x700U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_BAR_NUM_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_BAR_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_BAR_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_BAR_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_BAR_NUM_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_TYPE_MATCH_MODE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_TYPE_MATCH_MODE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_TYPE_MATCH_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_TYPE_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_TYPE_MATCH_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_TYPE_MATCH_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_TC_MATCH_EN_MASK (0x4000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_TC_MATCH_EN_SHIFT (14U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_TC_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_TC_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_TC_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_TC_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_TD_MATCH_EN_MASK (0x8000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_TD_MATCH_EN_SHIFT (15U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_TD_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_TD_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_TD_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_TD_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_ATTR_MATCH_EN_MASK (0x10000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_ATTR_MATCH_EN_SHIFT (16U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_ATTR_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_ATTR_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_ATTR_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_ATTR_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUNC_NUM_MATCH_EN_MASK (0x80000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUNC_NUM_MATCH_EN_SHIFT (19U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUNC_NUM_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUNC_NUM_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUNC_NUM_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUNC_NUM_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_CODE_MATCH_EN_MASK (0x200000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_CODE_MATCH_EN_SHIFT (21U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_CODE_MATCH_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_CODE_MATCH_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_CODE_MATCH_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MSG_CODE_MATCH_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_SINGLE_ADDR_LOC_TRANS_EN_MASK (0x800000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_SINGLE_ADDR_LOC_TRANS_EN_SHIFT (23U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_SINGLE_ADDR_LOC_TRANS_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_SINGLE_ADDR_LOC_TRANS_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_SINGLE_ADDR_LOC_TRANS_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_SINGLE_ADDR_LOC_TRANS_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_RESPONSE_CODE_MASK (0x3000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_RESPONSE_CODE_SHIFT (24U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_RESPONSE_CODE_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_RESPONSE_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_RESPONSE_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_RESPONSE_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUZZY_TYPE_MATCH_CODE_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUZZY_TYPE_MATCH_CODE_SHIFT (27U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUZZY_TYPE_MATCH_CODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUZZY_TYPE_MATCH_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUZZY_TYPE_MATCH_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_FUZZY_TYPE_MATCH_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_CFG_SHIFT_MODE_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_CFG_SHIFT_MODE_SHIFT (28U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_CFG_SHIFT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_CFG_SHIFT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_CFG_SHIFT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_INVERT_MODE_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_INVERT_MODE_SHIFT (29U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_INVERT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_INVERT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_INVERT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MATCH_MODE_MASK (0x40000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MATCH_MODE_SHIFT (30U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MATCH_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MATCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MATCH_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_MATCH_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_REGION_EN_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_REGION_EN_SHIFT (31U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_REGION_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_REGION_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_INBOUND_3_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_INBOUND_3 - iATU Lower Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_INBOUND_3_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_INBOUND_3 - iATU Upper Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_3_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_3_UPPER_BASE_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_3_UPPER_BASE_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_3_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_3_UPPER_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_INBOUND_3_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_INBOUND_3 - iATU Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_CBUF_INCR_MASK (0xFU)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_CBUF_INCR_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_CBUF_INCR_WIDTH (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_CBUF_INCR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_CBUF_INCR_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_CBUF_INCR_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_HW_MASK (0xFF0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_HW_SHIFT (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_HW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_INBOUND_3_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_INBOUND_3 - iATU Lower Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_INBOUND_3_LWR_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3 - iATU Upper Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3_UPPER_TARGET_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3_UPPER_TARGET_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3_UPPER_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_INBOUND_3_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3 - iATU Upper Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_RW_MASK)

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_INBOUND_3_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_OUTBOUND_4 - iATU Region Control 1 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TYPE_MASK (0x1FU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TYPE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TYPE_WIDTH (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TYPE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TYPE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TC_MASK (0xE0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TC_SHIFT (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TC_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TC_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TC_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TD_MASK (0x100U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TD_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_TD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_ATTR_MASK (0x600U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_ATTR_SHIFT (9U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_ATTR_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_ATTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_ATTR_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_ATTR_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_INCREASE_REGION_SIZE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_INCREASE_REGION_SIZE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_INCREASE_REGION_SIZE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_INCREASE_REGION_SIZE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_INCREASE_REGION_SIZE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_CTRL_1_FUNC_NUM_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_CTRL_1_FUNC_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_CTRL_1_FUNC_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_4_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_OUTBOUND_4 - iATU Region Control 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_MSG_CODE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_MSG_CODE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_MSG_CODE_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_MSG_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_MSG_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_MSG_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SUBSTITUTE_EN_MASK (0x10000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SUBSTITUTE_EN_SHIFT (16U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SUBSTITUTE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SUBSTITUTE_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TAG_SUBSTITUTE_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_FUNC_BYPASS_MASK (0x80000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_FUNC_BYPASS_SHIFT (19U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_FUNC_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_FUNC_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_FUNC_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_FUNC_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_SNP_MASK (0x100000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_SNP_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_SNP_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_SNP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_SNP_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_SNP_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TLP_HEADER_FIELDS_BYPASS_MASK (0x200000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TLP_HEADER_FIELDS_BYPASS_SHIFT (21U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TLP_HEADER_FIELDS_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TLP_HEADER_FIELDS_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TLP_HEADER_FIELDS_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_TLP_HEADER_FIELDS_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INHIBIT_PAYLOAD_MASK (0x400000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INHIBIT_PAYLOAD_SHIFT (22U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INHIBIT_PAYLOAD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INHIBIT_PAYLOAD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INHIBIT_PAYLOAD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INHIBIT_PAYLOAD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_HEADER_SUBSTITUTE_EN_MASK (0x800000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_HEADER_SUBSTITUTE_EN_SHIFT (23U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_HEADER_SUBSTITUTE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_HEADER_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_HEADER_SUBSTITUTE_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_HEADER_SUBSTITUTE_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_DMA_BYPASS_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_DMA_BYPASS_SHIFT (27U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_DMA_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_DMA_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_DMA_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_DMA_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_CFG_SHIFT_MODE_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_CFG_SHIFT_MODE_SHIFT (28U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_CFG_SHIFT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_CFG_SHIFT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_CFG_SHIFT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INVERT_MODE_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INVERT_MODE_SHIFT (29U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INVERT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INVERT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_INVERT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_REGION_EN_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_REGION_EN_SHIFT (31U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_REGION_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_REGION_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_4_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4 - iATU Lower Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4 - iATU Upper Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4_UPPER_BASE_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4_UPPER_BASE_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4_UPPER_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_OUTBOUND_4 - iATU Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_CBUF_INCR_MASK (0xFU)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_CBUF_INCR_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_CBUF_INCR_WIDTH (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_CBUF_INCR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_CBUF_INCR_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_CBUF_INCR_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_HW_MASK (0xFF0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_HW_SHIFT (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_HW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_4_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4 - iATU Lower Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4_LWR_TARGET_RW_OUTBOUND_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4_LWR_TARGET_RW_OUTBOUND_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4_LWR_TARGET_RW_OUTBOUND_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4_LWR_TARGET_RW_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4_LWR_TARGET_RW_OUTBOUND_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4_LWR_TARGET_RW_OUTBOUND_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4 - iATU Upper Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4_UPPER_TARGET_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4_UPPER_TARGET_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4_UPPER_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4 - iATU Upper Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_RW_MASK)

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_1_OFF_OUTBOUND_5 - iATU Region Control 1 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TYPE_MASK (0x1FU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TYPE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TYPE_WIDTH (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TYPE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TYPE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TYPE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TC_MASK (0xE0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TC_SHIFT (5U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TC_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TC(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TC_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TC_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TD_MASK (0x100U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TD_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_TD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_ATTR_MASK (0x600U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_ATTR_SHIFT (9U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_ATTR_WIDTH (2U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_ATTR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_ATTR_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_ATTR_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_INCREASE_REGION_SIZE_MASK (0x2000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_INCREASE_REGION_SIZE_SHIFT (13U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_INCREASE_REGION_SIZE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_INCREASE_REGION_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_INCREASE_REGION_SIZE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_INCREASE_REGION_SIZE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_CTRL_1_FUNC_NUM_MASK (0x700000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_CTRL_1_FUNC_NUM_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_CTRL_1_FUNC_NUM_WIDTH (3U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_CTRL_1_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_CTRL_1_FUNC_NUM_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_1_OFF_OUTBOUND_5_CTRL_1_FUNC_NUM_MASK)
/*! @} */

/*! @name IATU_REGION_CTRL_2_OFF_OUTBOUND_5 - iATU Region Control 2 Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_MSG_CODE_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_MSG_CODE_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_MSG_CODE_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_MSG_CODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_MSG_CODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_MSG_CODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_MASK (0xFF00U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SUBSTITUTE_EN_MASK (0x10000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SUBSTITUTE_EN_SHIFT (16U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SUBSTITUTE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SUBSTITUTE_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TAG_SUBSTITUTE_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_FUNC_BYPASS_MASK (0x80000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_FUNC_BYPASS_SHIFT (19U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_FUNC_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_FUNC_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_FUNC_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_FUNC_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_SNP_MASK (0x100000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_SNP_SHIFT (20U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_SNP_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_SNP(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_SNP_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_SNP_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TLP_HEADER_FIELDS_BYPASS_MASK (0x200000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TLP_HEADER_FIELDS_BYPASS_SHIFT (21U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TLP_HEADER_FIELDS_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TLP_HEADER_FIELDS_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TLP_HEADER_FIELDS_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_TLP_HEADER_FIELDS_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INHIBIT_PAYLOAD_MASK (0x400000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INHIBIT_PAYLOAD_SHIFT (22U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INHIBIT_PAYLOAD_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INHIBIT_PAYLOAD(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INHIBIT_PAYLOAD_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INHIBIT_PAYLOAD_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_HEADER_SUBSTITUTE_EN_MASK (0x800000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_HEADER_SUBSTITUTE_EN_SHIFT (23U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_HEADER_SUBSTITUTE_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_HEADER_SUBSTITUTE_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_HEADER_SUBSTITUTE_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_HEADER_SUBSTITUTE_EN_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_DMA_BYPASS_MASK (0x8000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_DMA_BYPASS_SHIFT (27U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_DMA_BYPASS_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_DMA_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_DMA_BYPASS_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_DMA_BYPASS_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_CFG_SHIFT_MODE_MASK (0x10000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_CFG_SHIFT_MODE_SHIFT (28U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_CFG_SHIFT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_CFG_SHIFT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_CFG_SHIFT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_CFG_SHIFT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INVERT_MODE_MASK (0x20000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INVERT_MODE_SHIFT (29U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INVERT_MODE_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INVERT_MODE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INVERT_MODE_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_INVERT_MODE_MASK)

#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_REGION_EN_MASK (0x80000000U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_REGION_EN_SHIFT (31U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_REGION_EN_WIDTH (1U)
#define SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_REGION_EN(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_REGION_EN_SHIFT)) & SerDes_EP_PCIe_1_IATU_REGION_CTRL_2_OFF_OUTBOUND_5_REGION_EN_MASK)
/*! @} */

/*! @name IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5 - iATU Lower Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_HW_MASK (0xFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_HW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_HW_WIDTH (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5_LWR_BASE_RW_MASK)
/*! @} */

/*! @name IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5 - iATU Upper Base Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5_UPPER_BASE_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5_UPPER_BASE_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5_UPPER_BASE_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5_UPPER_BASE_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5_UPPER_BASE_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5_UPPER_BASE_RW_MASK)
/*! @} */

/*! @name IATU_LIMIT_ADDR_OFF_OUTBOUND_5 - iATU Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_CBUF_INCR_MASK (0xFU)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_CBUF_INCR_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_CBUF_INCR_WIDTH (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_CBUF_INCR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_CBUF_INCR_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_CBUF_INCR_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_HW_MASK (0xFF0U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_HW_SHIFT (4U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_HW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_HW_MASK)

#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_RW_MASK (0xFFFFF000U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_RW_SHIFT (12U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_RW_WIDTH (20U)
#define SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_LIMIT_ADDR_OFF_OUTBOUND_5_LIMIT_ADDR_RW_MASK)
/*! @} */

/*! @name IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5 - iATU Lower Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5_LWR_TARGET_RW_OUTBOUND_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5_LWR_TARGET_RW_OUTBOUND_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5_LWR_TARGET_RW_OUTBOUND_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5_LWR_TARGET_RW_OUTBOUND(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5_LWR_TARGET_RW_OUTBOUND_SHIFT)) & SerDes_EP_PCIe_1_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5_LWR_TARGET_RW_OUTBOUND_MASK)
/*! @} */

/*! @name IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5 - iATU Upper Target Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5_UPPER_TARGET_RW_MASK (0xFFFFFFFFU)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5_UPPER_TARGET_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5_UPPER_TARGET_RW_WIDTH (32U)
#define SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5_UPPER_TARGET_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5_UPPER_TARGET_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5_UPPER_TARGET_RW_MASK)
/*! @} */

/*! @name IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5 - iATU Upper Limit Address Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_RW_MASK (0xFFU)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_RW_SHIFT (0U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_RW_WIDTH (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_RW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_RW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_RW_MASK)

#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_HW_MASK (0xFFFFFF00U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_HW_SHIFT (8U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_HW_WIDTH (24U)
#define SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_HW(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_HW_SHIFT)) & SerDes_EP_PCIe_1_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5_UPPR_LIMIT_ADDR_HW_MASK)
/*! @} */

/*! @name SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG - MSI-X Capability ID, Next Pointer, Control Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_RESERVED0_MASK (0xFFFFU)
#define SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_RESERVED0_SHIFT (0U)
#define SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_RESERVED0_WIDTH (16U)
#define SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_RESERVED0_SHIFT)) & SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_RESERVED0_MASK)

#define SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_MASK (0x7FF0000U)
#define SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_SHIFT (16U)
#define SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_WIDTH (11U)
#define SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_SHIFT)) & SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_TABLE_SIZE_MASK)

#define SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_RESERVED1_MASK (0xF8000000U)
#define SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_RESERVED1_SHIFT (27U)
#define SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_RESERVED1_WIDTH (5U)
#define SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_RESERVED1_SHIFT)) & SerDes_EP_PCIe_1_SHADOW_PCI_MSIX_CAP_ID_NEXT_CTRL_REG_PCI_MSIX_RESERVED1_MASK)
/*! @} */

/*! @name SHADOW_MSIX_TABLE_OFFSET_REG - MSI-X Table Offset and BIR Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_SHADOW_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_MASK (0x7U)
#define SerDes_EP_PCIe_1_SHADOW_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_SHIFT (0U)
#define SerDes_EP_PCIe_1_SHADOW_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_WIDTH (3U)
#define SerDes_EP_PCIe_1_SHADOW_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SHADOW_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_SHIFT)) & SerDes_EP_PCIe_1_SHADOW_MSIX_TABLE_OFFSET_REG_PCI_MSIX_BIR_MASK)

#define SerDes_EP_PCIe_1_SHADOW_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_MASK (0xFFFFFFF8U)
#define SerDes_EP_PCIe_1_SHADOW_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_SHIFT (3U)
#define SerDes_EP_PCIe_1_SHADOW_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_WIDTH (29U)
#define SerDes_EP_PCIe_1_SHADOW_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SHADOW_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_SHIFT)) & SerDes_EP_PCIe_1_SHADOW_MSIX_TABLE_OFFSET_REG_PCI_MSIX_TABLE_OFFSET_MASK)
/*! @} */

/*! @name SHADOW_MSIX_PBA_OFFSET_REG - MSI-X PBA Offset and BIR Register. */
/*! @{ */

#define SerDes_EP_PCIe_1_SHADOW_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_BIR_MASK (0x7U)
#define SerDes_EP_PCIe_1_SHADOW_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_BIR_SHIFT (0U)
#define SerDes_EP_PCIe_1_SHADOW_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_BIR_WIDTH (3U)
#define SerDes_EP_PCIe_1_SHADOW_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_BIR(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SHADOW_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_BIR_SHIFT)) & SerDes_EP_PCIe_1_SHADOW_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_BIR_MASK)

#define SerDes_EP_PCIe_1_SHADOW_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_MASK (0xFFFFFFF8U)
#define SerDes_EP_PCIe_1_SHADOW_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_SHIFT (3U)
#define SerDes_EP_PCIe_1_SHADOW_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_WIDTH (29U)
#define SerDes_EP_PCIe_1_SHADOW_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << SerDes_EP_PCIe_1_SHADOW_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_SHIFT)) & SerDes_EP_PCIe_1_SHADOW_MSIX_PBA_OFFSET_REG_PCI_MSIX_PBA_OFFSET_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SerDes_EP_PCIe_1_Register_Masks */

/*!
 * @}
 */ /* end of group SerDes_EP_PCIe_1_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_SerDes_EP_PCIe_1_H_) */
