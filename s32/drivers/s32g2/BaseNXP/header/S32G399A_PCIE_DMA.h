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
 * @file S32G399A_PCIE_DMA.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_PCIE_DMA
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
#if !defined(S32G399A_PCIE_DMA_H_)  /* Check if memory map has not been already included */
#define S32G399A_PCIE_DMA_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- PCIE_DMA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PCIE_DMA_Peripheral_Access_Layer PCIE_DMA Peripheral Access Layer
 * @{
 */

/** PCIE_DMA - Register Layout Typedef */
typedef struct {
  __IO uint32_t DMA_CTRL_DATA_ARB_PRIOR_OFF;       /**< DMA Arbitration Scheme for TRGT1 Interface., offset: 0x0 */
  uint8_t RESERVED_0[4];
  __IO uint32_t DMA_CTRL_OFF;                      /**< DMA Number of Channels Register., offset: 0x8 */
  __IO uint32_t DMA_WRITE_ENGINE_EN_OFF;           /**< DMA Write Engine Enable, offset: 0xC */
  __IO uint32_t DMA_WRITE_DOORBELL_OFF;            /**< DMA Write Doorbell Register., offset: 0x10 */
  uint8_t RESERVED_1[4];
  __IO uint32_t DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF; /**< DMA Write Engine Channel Arbitration Weight Low Register., offset: 0x18 */
  __IO uint32_t DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF; /**< DMA Write Engine Channel Arbitration Weight High Register., offset: 0x1C */
  uint8_t RESERVED_2[12];
  __IO uint32_t DMA_READ_ENGINE_EN_OFF;            /**< DMA Read Engine Enable, offset: 0x2C */
  __IO uint32_t DMA_READ_DOORBELL_OFF;             /**< DMA Read Doorbell Register., offset: 0x30 */
  uint8_t RESERVED_3[4];
  __IO uint32_t DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF; /**< DMA Read Engine Channel Arbitration Weight Low Register., offset: 0x38 */
  __IO uint32_t DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF; /**< DMA Read Engine Channel Arbitration Weight High Register., offset: 0x3C */
  uint8_t RESERVED_4[12];
  __IO uint32_t DMA_WRITE_INT_STATUS_OFF;          /**< DMA Write Interrupt Status Register., offset: 0x4C */
  uint8_t RESERVED_5[4];
  __IO uint32_t DMA_WRITE_INT_MASK_OFF;            /**< DMA Write Interrupt Mask Register., offset: 0x54 */
  __IO uint32_t DMA_WRITE_INT_CLEAR_OFF;           /**< DMA Write Interrupt Clear Register., offset: 0x58 */
  __I  uint32_t DMA_WRITE_ERR_STATUS_OFF;          /**< DMA Write Error Status Register., offset: 0x5C */
  __IO uint32_t DMA_WRITE_DONE_IMWR_LOW_OFF;       /**< DMA Write Done IMWr Address Low Register., offset: 0x60 */
  __IO uint32_t DMA_WRITE_DONE_IMWR_HIGH_OFF;      /**< DMA Write Done IMWr Interrupt Address High Register., offset: 0x64 */
  __IO uint32_t DMA_WRITE_ABORT_IMWR_LOW_OFF;      /**< DMA Write Abort IMWr Address Low Register., offset: 0x68 */
  __IO uint32_t DMA_WRITE_ABORT_IMWR_HIGH_OFF;     /**< DMA Write Abort IMWr Address High Register., offset: 0x6C */
  __IO uint32_t DMA_WRITE_CH01_IMWR_DATA_OFF;      /**< DMA Write Channel 1 and 0 IMWr Data Register., offset: 0x70 */
  __IO uint32_t DMA_WRITE_CH23_IMWR_DATA_OFF;      /**< DMA Write Channel 3 and 2 IMWr Data Register., offset: 0x74 */
  __IO uint32_t DMA_WRITE_CH45_IMWR_DATA_OFF;      /**< DMA Write Channel 5 and 4 IMWr Data Register., offset: 0x78 */
  __IO uint32_t DMA_WRITE_CH67_IMWR_DATA_OFF;      /**< DMA Write Channel 7 and 6 IMWr Data Register., offset: 0x7C */
  uint8_t RESERVED_6[16];
  __IO uint32_t DMA_WRITE_LINKED_LIST_ERR_EN_OFF;  /**< DMA Write Linked List Error Enable Register., offset: 0x90 */
  uint8_t RESERVED_7[12];
  __IO uint32_t DMA_READ_INT_STATUS_OFF;           /**< DMA Read Interrupt Status Register., offset: 0xA0 */
  uint8_t RESERVED_8[4];
  __IO uint32_t DMA_READ_INT_MASK_OFF;             /**< DMA Read Interrupt Mask Register., offset: 0xA8 */
  __IO uint32_t DMA_READ_INT_CLEAR_OFF;            /**< DMA Read Interrupt Clear Register., offset: 0xAC */
  uint8_t RESERVED_9[4];
  __I  uint32_t DMA_READ_ERR_STATUS_LOW_OFF;       /**< DMA Read Error Status Low Register., offset: 0xB4 */
  __I  uint32_t DMA_READ_ERR_STATUS_HIGH_OFF;      /**< DMA Read Error Status High Register., offset: 0xB8 */
  uint8_t RESERVED_10[8];
  __IO uint32_t DMA_READ_LINKED_LIST_ERR_EN_OFF;   /**< DMA Read Linked List Error Enable Register., offset: 0xC4 */
  uint8_t RESERVED_11[4];
  __IO uint32_t DMA_READ_DONE_IMWR_LOW_OFF;        /**< DMA Read Done IMWr Address Low Register., offset: 0xCC */
  __IO uint32_t DMA_READ_DONE_IMWR_HIGH_OFF;       /**< DMA Read Done IMWr Address High Register., offset: 0xD0 */
  __IO uint32_t DMA_READ_ABORT_IMWR_LOW_OFF;       /**< DMA Read Abort IMWr Address Low Register., offset: 0xD4 */
  __IO uint32_t DMA_READ_ABORT_IMWR_HIGH_OFF;      /**< DMA Read Abort IMWr Address High Register., offset: 0xD8 */
  __IO uint32_t DMA_READ_CH01_IMWR_DATA_OFF;       /**< DMA Read Channel 1 and 0 IMWr Data Register., offset: 0xDC */
  __IO uint32_t DMA_READ_CH23_IMWR_DATA_OFF;       /**< DMA Read Channel 3 and 2 IMWr Data Register., offset: 0xE0 */
  __IO uint32_t DMA_READ_CH45_IMWR_DATA_OFF;       /**< DMA Read Channel 5 and 4 IMWr Data Register., offset: 0xE4 */
  __IO uint32_t DMA_READ_CH67_IMWR_DATA_OFF;       /**< DMA Read Channel 7 and 6 IMWr Data Register., offset: 0xE8 */
  uint8_t RESERVED_12[28];
  __I  uint32_t DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF; /**< DMA Write Engine Handshake Counter Channel 0/1/2/3 Register., offset: 0x108 */
  __I  uint32_t DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF; /**< DMA Write Engine Handshake Counter Channel 4/5/6/7 Register., offset: 0x10C */
  uint8_t RESERVED_13[8];
  __I  uint32_t DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF; /**< DMA Read Engine Handshake Counter Channel 0/1/2/3 Register., offset: 0x118 */
  __I  uint32_t DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF; /**< DMA Read Engine Handshake Counter Channel 4/5/6/7 Register., offset: 0x11C */
  uint8_t RESERVED_14[8];
  __IO uint32_t DMA_WRITE_CH0_PWR_EN_OFF;          /**< DMA Write Channel 0 Power Enable Register., offset: 0x128 */
  __IO uint32_t DMA_WRITE_CH1_PWR_EN_OFF;          /**< DMA Write Channel 1 Power Enable Register., offset: 0x12C */
  __IO uint32_t DMA_WRITE_CH2_PWR_EN_OFF;          /**< DMA Write Channel 2 Power Enable Register., offset: 0x130 */
  __IO uint32_t DMA_WRITE_CH3_PWR_EN_OFF;          /**< DMA Write Channel 3 Power Enable Register., offset: 0x134 */
  uint8_t RESERVED_15[48];
  __IO uint32_t DMA_READ_CH0_PWR_EN_OFF;           /**< DMA Read Channel 0 Power Enable Register., offset: 0x168 */
  __IO uint32_t DMA_READ_CH1_PWR_EN_OFF;           /**< DMA Read Channel 1 Power Enable Register., offset: 0x16C */
  __IO uint32_t DMA_READ_CH2_PWR_EN_OFF;           /**< DMA Read Channel 2 Power Enable Register., offset: 0x170 */
  __IO uint32_t DMA_READ_CH3_PWR_EN_OFF;           /**< DMA Read Channel 3 Power Enable Register., offset: 0x174 */
  uint8_t RESERVED_16[136];
  __IO uint32_t DMA_CH_CONTROL1_OFF_WRCH_0;        /**< DMA Write Channel Control 1 Register., offset: 0x200 */
  uint8_t RESERVED_17[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_WRCH_0;      /**< DMA Write Transfer Size Register., offset: 0x208 */
  __IO uint32_t DMA_SAR_LOW_OFF_WRCH_0;            /**< DMA Write SAR Low Register., offset: 0x20C */
  __IO uint32_t DMA_SAR_HIGH_OFF_WRCH_0;           /**< DMA Write SAR High Register., offset: 0x210 */
  __IO uint32_t DMA_DAR_LOW_OFF_WRCH_0;            /**< DMA Write DAR Low Register., offset: 0x214 */
  __IO uint32_t DMA_DAR_HIGH_OFF_WRCH_0;           /**< DMA Write DAR High Register., offset: 0x218 */
  __IO uint32_t DMA_LLP_LOW_OFF_WRCH_0;            /**< DMA Write Linked List Pointer Low Register., offset: 0x21C */
  __IO uint32_t DMA_LLP_HIGH_OFF_WRCH_0;           /**< DMA Write Linked List Pointer High Register., offset: 0x220 */
  uint8_t RESERVED_18[220];
  __IO uint32_t DMA_CH_CONTROL1_OFF_RDCH_0;        /**< DMA Read Channel Control 1 Register., offset: 0x300 */
  uint8_t RESERVED_19[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_RDCH_0;      /**< DMA Read Transfer Size Register., offset: 0x308 */
  __IO uint32_t DMA_SAR_LOW_OFF_RDCH_0;            /**< DMA Read SAR Low Register., offset: 0x30C */
  __IO uint32_t DMA_SAR_HIGH_OFF_RDCH_0;           /**< DMA Read SAR High Register., offset: 0x310 */
  __IO uint32_t DMA_DAR_LOW_OFF_RDCH_0;            /**< DMA Read DAR Low Register., offset: 0x314 */
  __IO uint32_t DMA_DAR_HIGH_OFF_RDCH_0;           /**< DMA Read DAR High Register., offset: 0x318 */
  __IO uint32_t DMA_LLP_LOW_OFF_RDCH_0;            /**< DMA Read Linked List Pointer Low Register., offset: 0x31C */
  __IO uint32_t DMA_LLP_HIGH_OFF_RDCH_0;           /**< DMA Read Linked List Pointer High Register., offset: 0x320 */
  uint8_t RESERVED_20[220];
  __IO uint32_t DMA_CH_CONTROL1_OFF_WRCH_1;        /**< DMA Write Channel Control 1 Register., offset: 0x400 */
  uint8_t RESERVED_21[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_WRCH_1;      /**< DMA Write Transfer Size Register., offset: 0x408 */
  __IO uint32_t DMA_SAR_LOW_OFF_WRCH_1;            /**< DMA Write SAR Low Register., offset: 0x40C */
  __IO uint32_t DMA_SAR_HIGH_OFF_WRCH_1;           /**< DMA Write SAR High Register., offset: 0x410 */
  __IO uint32_t DMA_DAR_LOW_OFF_WRCH_1;            /**< DMA Write DAR Low Register., offset: 0x414 */
  __IO uint32_t DMA_DAR_HIGH_OFF_WRCH_1;           /**< DMA Write DAR High Register., offset: 0x418 */
  __IO uint32_t DMA_LLP_LOW_OFF_WRCH_1;            /**< DMA Write Linked List Pointer Low Register., offset: 0x41C */
  __IO uint32_t DMA_LLP_HIGH_OFF_WRCH_1;           /**< DMA Write Linked List Pointer High Register., offset: 0x420 */
  uint8_t RESERVED_22[220];
  __IO uint32_t DMA_CH_CONTROL1_OFF_RDCH_1;        /**< DMA Read Channel Control 1 Register., offset: 0x500 */
  uint8_t RESERVED_23[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_RDCH_1;      /**< DMA Read Transfer Size Register., offset: 0x508 */
  __IO uint32_t DMA_SAR_LOW_OFF_RDCH_1;            /**< DMA Read SAR Low Register., offset: 0x50C */
  __IO uint32_t DMA_SAR_HIGH_OFF_RDCH_1;           /**< DMA Read SAR High Register., offset: 0x510 */
  __IO uint32_t DMA_DAR_LOW_OFF_RDCH_1;            /**< DMA Read DAR Low Register., offset: 0x514 */
  __IO uint32_t DMA_DAR_HIGH_OFF_RDCH_1;           /**< DMA Read DAR High Register., offset: 0x518 */
  __IO uint32_t DMA_LLP_LOW_OFF_RDCH_1;            /**< DMA Read Linked List Pointer Low Register., offset: 0x51C */
  __IO uint32_t DMA_LLP_HIGH_OFF_RDCH_1;           /**< DMA Read Linked List Pointer High Register., offset: 0x520 */
  uint8_t RESERVED_24[220];
  __IO uint32_t DMA_CH_CONTROL1_OFF_WRCH_2;        /**< DMA Write Channel Control 1 Register., offset: 0x600 */
  uint8_t RESERVED_25[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_WRCH_2;      /**< DMA Write Transfer Size Register., offset: 0x608 */
  __IO uint32_t DMA_SAR_LOW_OFF_WRCH_2;            /**< DMA Write SAR Low Register., offset: 0x60C */
  __IO uint32_t DMA_SAR_HIGH_OFF_WRCH_2;           /**< DMA Write SAR High Register., offset: 0x610 */
  __IO uint32_t DMA_DAR_LOW_OFF_WRCH_2;            /**< DMA Write DAR Low Register., offset: 0x614 */
  __IO uint32_t DMA_DAR_HIGH_OFF_WRCH_2;           /**< DMA Write DAR High Register., offset: 0x618 */
  __IO uint32_t DMA_LLP_LOW_OFF_WRCH_2;            /**< DMA Write Linked List Pointer Low Register., offset: 0x61C */
  __IO uint32_t DMA_LLP_HIGH_OFF_WRCH_2;           /**< DMA Write Linked List Pointer High Register., offset: 0x620 */
  uint8_t RESERVED_26[220];
  __IO uint32_t DMA_CH_CONTROL1_OFF_RDCH_2;        /**< DMA Read Channel Control 1 Register., offset: 0x700 */
  uint8_t RESERVED_27[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_RDCH_2;      /**< DMA Read Transfer Size Register., offset: 0x708 */
  __IO uint32_t DMA_SAR_LOW_OFF_RDCH_2;            /**< DMA Read SAR Low Register., offset: 0x70C */
  __IO uint32_t DMA_SAR_HIGH_OFF_RDCH_2;           /**< DMA Read SAR High Register., offset: 0x710 */
  __IO uint32_t DMA_DAR_LOW_OFF_RDCH_2;            /**< DMA Read DAR Low Register., offset: 0x714 */
  __IO uint32_t DMA_DAR_HIGH_OFF_RDCH_2;           /**< DMA Read DAR High Register., offset: 0x718 */
  __IO uint32_t DMA_LLP_LOW_OFF_RDCH_2;            /**< DMA Read Linked List Pointer Low Register., offset: 0x71C */
  __IO uint32_t DMA_LLP_HIGH_OFF_RDCH_2;           /**< DMA Read Linked List Pointer High Register., offset: 0x720 */
  uint8_t RESERVED_28[220];
  __IO uint32_t DMA_CH_CONTROL1_OFF_WRCH_3;        /**< DMA Write Channel Control 1 Register., offset: 0x800 */
  uint8_t RESERVED_29[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_WRCH_3;      /**< DMA Write Transfer Size Register., offset: 0x808 */
  __IO uint32_t DMA_SAR_LOW_OFF_WRCH_3;            /**< DMA Write SAR Low Register., offset: 0x80C */
  __IO uint32_t DMA_SAR_HIGH_OFF_WRCH_3;           /**< DMA Write SAR High Register., offset: 0x810 */
  __IO uint32_t DMA_DAR_LOW_OFF_WRCH_3;            /**< DMA Write DAR Low Register., offset: 0x814 */
  __IO uint32_t DMA_DAR_HIGH_OFF_WRCH_3;           /**< DMA Write DAR High Register., offset: 0x818 */
  __IO uint32_t DMA_LLP_LOW_OFF_WRCH_3;            /**< DMA Write Linked List Pointer Low Register., offset: 0x81C */
  __IO uint32_t DMA_LLP_HIGH_OFF_WRCH_3;           /**< DMA Write Linked List Pointer High Register., offset: 0x820 */
  uint8_t RESERVED_30[220];
  __IO uint32_t DMA_CH_CONTROL1_OFF_RDCH_3;        /**< DMA Read Channel Control 1 Register., offset: 0x900 */
  uint8_t RESERVED_31[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_RDCH_3;      /**< DMA Read Transfer Size Register., offset: 0x908 */
  __IO uint32_t DMA_SAR_LOW_OFF_RDCH_3;            /**< DMA Read SAR Low Register., offset: 0x90C */
  __IO uint32_t DMA_SAR_HIGH_OFF_RDCH_3;           /**< DMA Read SAR High Register., offset: 0x910 */
  __IO uint32_t DMA_DAR_LOW_OFF_RDCH_3;            /**< DMA Read DAR Low Register., offset: 0x914 */
  __IO uint32_t DMA_DAR_HIGH_OFF_RDCH_3;           /**< DMA Read DAR High Register., offset: 0x918 */
  __IO uint32_t DMA_LLP_LOW_OFF_RDCH_3;            /**< DMA Read Linked List Pointer Low Register., offset: 0x91C */
  __IO uint32_t DMA_LLP_HIGH_OFF_RDCH_3;           /**< DMA Read Linked List Pointer High Register., offset: 0x920 */
} PCIE_DMA_Type, *PCIE_DMA_MemMapPtr;

/** Number of instances of the PCIE_DMA module. */
#define PCIE_DMA_INSTANCE_COUNT                  (1u)

/* PCIE_DMA - Peripheral instance base addresses */
/** Peripheral PCIE_DMA base address */
#define IP_PCIE_DMA_BASE                         (0x40470000u)
/** Peripheral PCIE_DMA base pointer */
#define IP_PCIE_DMA                              ((PCIE_DMA_Type *)IP_PCIE_DMA_BASE)
/** Array initializer of PCIE_DMA peripheral base addresses */
#define IP_PCIE_DMA_BASE_ADDRS                   { IP_PCIE_DMA_BASE }
/** Array initializer of PCIE_DMA peripheral base pointers */
#define IP_PCIE_DMA_BASE_PTRS                    { IP_PCIE_DMA }

/* ----------------------------------------------------------------------------
   -- PCIE_DMA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PCIE_DMA_Register_Masks PCIE_DMA Register Masks
 * @{
 */

/*! @name DMA_CTRL_DATA_ARB_PRIOR_OFF - DMA Arbitration Scheme for TRGT1 Interface. */
/*! @{ */

#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RTRGT1_WEIGHT_MASK (0x7U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RTRGT1_WEIGHT_SHIFT (0U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RTRGT1_WEIGHT_WIDTH (3U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RTRGT1_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RTRGT1_WEIGHT_SHIFT)) & PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RTRGT1_WEIGHT_MASK)

#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_WR_CTRL_TRGT_WEIGHT_MASK (0x38U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_WR_CTRL_TRGT_WEIGHT_SHIFT (3U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_WR_CTRL_TRGT_WEIGHT_WIDTH (3U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_WR_CTRL_TRGT_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_WR_CTRL_TRGT_WEIGHT_SHIFT)) & PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_WR_CTRL_TRGT_WEIGHT_MASK)

#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RD_CTRL_TRGT_WEIGHT_MASK (0x1C0U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RD_CTRL_TRGT_WEIGHT_SHIFT (6U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RD_CTRL_TRGT_WEIGHT_WIDTH (3U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RD_CTRL_TRGT_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RD_CTRL_TRGT_WEIGHT_SHIFT)) & PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RD_CTRL_TRGT_WEIGHT_MASK)

#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RDBUFF_TRGT_WEIGHT_MASK (0xE00U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RDBUFF_TRGT_WEIGHT_SHIFT (9U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RDBUFF_TRGT_WEIGHT_WIDTH (3U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RDBUFF_TRGT_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RDBUFF_TRGT_WEIGHT_SHIFT)) & PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RDBUFF_TRGT_WEIGHT_MASK)

#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_VERSION_MASK (0x1F000U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_VERSION_SHIFT (12U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_VERSION_WIDTH (5U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_VERSION(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_VERSION_SHIFT)) & PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_VERSION_MASK)

#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RSVDP_17_MASK (0xFFFE0000U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RSVDP_17_SHIFT (17U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RSVDP_17_WIDTH (15U)
#define PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RSVDP_17(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RSVDP_17_SHIFT)) & PCIE_DMA_DMA_CTRL_DATA_ARB_PRIOR_OFF_RSVDP_17_MASK)
/*! @} */

/*! @name DMA_CTRL_OFF - DMA Number of Channels Register. */
/*! @{ */

#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_WR_CHAN_MASK (0xFU)
#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_WR_CHAN_SHIFT (0U)
#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_WR_CHAN_WIDTH (4U)
#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_WR_CHAN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_WR_CHAN_SHIFT)) & PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_WR_CHAN_MASK)

#define PCIE_DMA_DMA_CTRL_OFF_RSVDP_4_MASK       (0xFFF0U)
#define PCIE_DMA_DMA_CTRL_OFF_RSVDP_4_SHIFT      (4U)
#define PCIE_DMA_DMA_CTRL_OFF_RSVDP_4_WIDTH      (12U)
#define PCIE_DMA_DMA_CTRL_OFF_RSVDP_4(x)         (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_OFF_RSVDP_4_SHIFT)) & PCIE_DMA_DMA_CTRL_OFF_RSVDP_4_MASK)

#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_RD_CHAN_MASK (0xF0000U)
#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_RD_CHAN_SHIFT (16U)
#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_RD_CHAN_WIDTH (4U)
#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_RD_CHAN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_RD_CHAN_SHIFT)) & PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_RD_CHAN_MASK)

#define PCIE_DMA_DMA_CTRL_OFF_RSVDP_20_MASK      (0xF00000U)
#define PCIE_DMA_DMA_CTRL_OFF_RSVDP_20_SHIFT     (20U)
#define PCIE_DMA_DMA_CTRL_OFF_RSVDP_20_WIDTH     (4U)
#define PCIE_DMA_DMA_CTRL_OFF_RSVDP_20(x)        (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_OFF_RSVDP_20_SHIFT)) & PCIE_DMA_DMA_CTRL_OFF_RSVDP_20_MASK)

#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_WR_MASK (0x1000000U)
#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_WR_SHIFT (24U)
#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_WR_WIDTH (1U)
#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_WR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_WR_SHIFT)) & PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_WR_MASK)

#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_RD_MASK (0x2000000U)
#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_RD_SHIFT (25U)
#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_RD_WIDTH (1U)
#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_RD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_RD_SHIFT)) & PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_RD_MASK)

#define PCIE_DMA_DMA_CTRL_OFF_RSVDP_26_MASK      (0xFC000000U)
#define PCIE_DMA_DMA_CTRL_OFF_RSVDP_26_SHIFT     (26U)
#define PCIE_DMA_DMA_CTRL_OFF_RSVDP_26_WIDTH     (6U)
#define PCIE_DMA_DMA_CTRL_OFF_RSVDP_26(x)        (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_OFF_RSVDP_26_SHIFT)) & PCIE_DMA_DMA_CTRL_OFF_RSVDP_26_MASK)
/*! @} */

/*! @name DMA_WRITE_ENGINE_EN_OFF - DMA Write Engine Enable */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_MASK (0x1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_RSVDP_1_MASK (0xFFFEU)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_RSVDP_1_SHIFT (1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_RSVDP_1_WIDTH (15U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_RSVDP_1_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_RSVDP_1_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH0_MASK (0x10000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH0_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH0_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH0_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH0_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH1_MASK (0x20000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH1_SHIFT (17U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH1_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH1_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH1_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH2_MASK (0x40000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH2_SHIFT (18U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH2_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH2_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH2_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH3_MASK (0x80000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH3_SHIFT (19U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH3_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH3_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH3_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH4_MASK (0x100000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH4_SHIFT (20U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH4_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH4(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH4_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH4_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH5_MASK (0x200000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH5_SHIFT (21U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH5_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH5_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH5_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH6_MASK (0x400000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH6_SHIFT (22U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH6_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH6(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH6_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH6_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH7_MASK (0x800000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH7_SHIFT (23U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH7_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH7(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH7_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_EN_HSHAKE_CH7_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_RSVDP_24_MASK (0xFF000000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_RSVDP_24_SHIFT (24U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_RSVDP_24_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_RSVDP_24_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name DMA_WRITE_DOORBELL_OFF - DMA Write Doorbell Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_DOORBELL_NUM_MASK (0x7U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_DOORBELL_NUM_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_DOORBELL_NUM_WIDTH (3U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_DOORBELL_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_DOORBELL_NUM_SHIFT)) & PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_DOORBELL_NUM_MASK)

#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_RSVDP_3_MASK (0x7FFFFFF8U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_RSVDP_3_SHIFT (3U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_RSVDP_3_WIDTH (28U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_RSVDP_3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_DOORBELL_OFF_RSVDP_3_SHIFT)) & PCIE_DMA_DMA_WRITE_DOORBELL_OFF_RSVDP_3_MASK)

#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_STOP_MASK (0x80000000U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_STOP_SHIFT (31U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_STOP_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_STOP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_STOP_SHIFT)) & PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_STOP_MASK)
/*! @} */

/*! @name DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF - DMA Write Engine Channel Arbitration Weight Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL0_WEIGHT_MASK (0x1FU)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL0_WEIGHT_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL0_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL0_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL0_WEIGHT_SHIFT)) & PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL0_WEIGHT_MASK)

#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL1_WEIGHT_MASK (0x3E0U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL1_WEIGHT_SHIFT (5U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL1_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL1_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL1_WEIGHT_SHIFT)) & PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL1_WEIGHT_MASK)

#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL2_WEIGHT_MASK (0x7C00U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL2_WEIGHT_SHIFT (10U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL2_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL2_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL2_WEIGHT_SHIFT)) & PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL2_WEIGHT_MASK)

#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL3_WEIGHT_MASK (0xF8000U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL3_WEIGHT_SHIFT (15U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL3_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL3_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL3_WEIGHT_SHIFT)) & PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_WRITE_CHANNEL3_WEIGHT_MASK)

#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_RSVDP_20_MASK (0xFFF00000U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_RSVDP_20_SHIFT (20U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_RSVDP_20_WIDTH (12U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_RSVDP_20(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_RSVDP_20_SHIFT)) & PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF_RSVDP_20_MASK)
/*! @} */

/*! @name DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF - DMA Write Engine Channel Arbitration Weight High Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL4_WEIGHT_MASK (0x1FU)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL4_WEIGHT_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL4_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL4_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL4_WEIGHT_SHIFT)) & PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL4_WEIGHT_MASK)

#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL5_WEIGHT_MASK (0x3E0U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL5_WEIGHT_SHIFT (5U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL5_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL5_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL5_WEIGHT_SHIFT)) & PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL5_WEIGHT_MASK)

#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL6_WEIGHT_MASK (0x7C00U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL6_WEIGHT_SHIFT (10U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL6_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL6_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL6_WEIGHT_SHIFT)) & PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL6_WEIGHT_MASK)

#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL7_WEIGHT_MASK (0xF8000U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL7_WEIGHT_SHIFT (15U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL7_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL7_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL7_WEIGHT_SHIFT)) & PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_WRITE_CHANNEL7_WEIGHT_MASK)

#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_RSVDP_20_MASK (0xFFF00000U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_RSVDP_20_SHIFT (20U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_RSVDP_20_WIDTH (12U)
#define PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_RSVDP_20(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_RSVDP_20_SHIFT)) & PCIE_DMA_DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF_RSVDP_20_MASK)
/*! @} */

/*! @name DMA_READ_ENGINE_EN_OFF - DMA Read Engine Enable */
/*! @{ */

#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_MASK (0x1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_WIDTH (1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_RSVDP_1_MASK (0xFFFEU)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_RSVDP_1_SHIFT (1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_RSVDP_1_WIDTH (15U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_EN_OFF_RSVDP_1_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_EN_OFF_RSVDP_1_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH0_MASK (0x10000U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH0_SHIFT (16U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH0_WIDTH (1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH0_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH0_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH1_MASK (0x20000U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH1_SHIFT (17U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH1_WIDTH (1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH1_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH1_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH2_MASK (0x40000U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH2_SHIFT (18U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH2_WIDTH (1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH2_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH2_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH3_MASK (0x80000U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH3_SHIFT (19U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH3_WIDTH (1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH3_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH3_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH4_MASK (0x100000U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH4_SHIFT (20U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH4_WIDTH (1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH4(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH4_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH4_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH5_MASK (0x200000U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH5_SHIFT (21U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH5_WIDTH (1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH5_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH5_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH6_MASK (0x400000U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH6_SHIFT (22U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH6_WIDTH (1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH6(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH6_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH6_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH7_MASK (0x800000U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH7_SHIFT (23U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH7_WIDTH (1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH7(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH7_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_EN_HSHAKE_CH7_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_RSVDP_24_MASK (0xFF000000U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_RSVDP_24_SHIFT (24U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_RSVDP_24_WIDTH (8U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_EN_OFF_RSVDP_24_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_EN_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name DMA_READ_DOORBELL_OFF - DMA Read Doorbell Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_DOORBELL_NUM_MASK (0x7U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_DOORBELL_NUM_SHIFT (0U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_DOORBELL_NUM_WIDTH (3U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_DOORBELL_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_DOORBELL_NUM_SHIFT)) & PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_DOORBELL_NUM_MASK)

#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RSVDP_3_MASK (0x7FFFFFF8U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RSVDP_3_SHIFT (3U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RSVDP_3_WIDTH (28U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RSVDP_3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_DOORBELL_OFF_RSVDP_3_SHIFT)) & PCIE_DMA_DMA_READ_DOORBELL_OFF_RSVDP_3_MASK)

#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_STOP_MASK (0x80000000U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_STOP_SHIFT (31U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_STOP_WIDTH (1U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_STOP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_STOP_SHIFT)) & PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_STOP_MASK)
/*! @} */

/*! @name DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF - DMA Read Engine Channel Arbitration Weight Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL0_WEIGHT_MASK (0x1FU)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL0_WEIGHT_SHIFT (0U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL0_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL0_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL0_WEIGHT_SHIFT)) & PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL0_WEIGHT_MASK)

#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL1_WEIGHT_MASK (0x3E0U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL1_WEIGHT_SHIFT (5U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL1_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL1_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL1_WEIGHT_SHIFT)) & PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL1_WEIGHT_MASK)

#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL2_WEIGHT_MASK (0x7C00U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL2_WEIGHT_SHIFT (10U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL2_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL2_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL2_WEIGHT_SHIFT)) & PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL2_WEIGHT_MASK)

#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL3_WEIGHT_MASK (0xF8000U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL3_WEIGHT_SHIFT (15U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL3_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL3_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL3_WEIGHT_SHIFT)) & PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_READ_CHANNEL3_WEIGHT_MASK)

#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_RSVDP_20_MASK (0xFFF00000U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_RSVDP_20_SHIFT (20U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_RSVDP_20_WIDTH (12U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_RSVDP_20(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_RSVDP_20_SHIFT)) & PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF_RSVDP_20_MASK)
/*! @} */

/*! @name DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF - DMA Read Engine Channel Arbitration Weight High Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL4_WEIGHT_MASK (0x1FU)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL4_WEIGHT_SHIFT (0U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL4_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL4_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL4_WEIGHT_SHIFT)) & PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL4_WEIGHT_MASK)

#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL5_WEIGHT_MASK (0x3E0U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL5_WEIGHT_SHIFT (5U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL5_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL5_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL5_WEIGHT_SHIFT)) & PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL5_WEIGHT_MASK)

#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL6_WEIGHT_MASK (0x7C00U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL6_WEIGHT_SHIFT (10U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL6_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL6_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL6_WEIGHT_SHIFT)) & PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL6_WEIGHT_MASK)

#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL7_WEIGHT_MASK (0xF8000U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL7_WEIGHT_SHIFT (15U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL7_WEIGHT_WIDTH (5U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL7_WEIGHT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL7_WEIGHT_SHIFT)) & PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_READ_CHANNEL7_WEIGHT_MASK)

#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_RSVDP_20_MASK (0xFFF00000U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_RSVDP_20_SHIFT (20U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_RSVDP_20_WIDTH (12U)
#define PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_RSVDP_20(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_RSVDP_20_SHIFT)) & PCIE_DMA_DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF_RSVDP_20_MASK)
/*! @} */

/*! @name DMA_WRITE_INT_STATUS_OFF - DMA Write Interrupt Status Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_DONE_INT_STATUS_MASK (0xFFU)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_DONE_INT_STATUS_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_DONE_INT_STATUS_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_DONE_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_DONE_INT_STATUS_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_DONE_INT_STATUS_MASK)

#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_RSVDP_8_MASK (0xFF00U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_RSVDP_8_SHIFT (8U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_RSVDP_8_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_RSVDP_8_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_RSVDP_8_MASK)

#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_ABORT_INT_STATUS_MASK (0xFF0000U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_ABORT_INT_STATUS_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_ABORT_INT_STATUS_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_ABORT_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_ABORT_INT_STATUS_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_ABORT_INT_STATUS_MASK)

#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_RSVDP_24_MASK (0xFF000000U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_RSVDP_24_SHIFT (24U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_RSVDP_24_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_RSVDP_24_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name DMA_WRITE_INT_MASK_OFF - DMA Write Interrupt Mask Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_DONE_INT_MASK_MASK (0xFU)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_DONE_INT_MASK_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_DONE_INT_MASK_WIDTH (4U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_DONE_INT_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_DONE_INT_MASK_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_DONE_INT_MASK_MASK)

#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_RSVDP_8_MASK (0xFF00U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_RSVDP_8_SHIFT (8U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_RSVDP_8_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_MASK_OFF_RSVDP_8_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_MASK_OFF_RSVDP_8_MASK)

#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_ABORT_INT_MASK_MASK (0xF0000U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_ABORT_INT_MASK_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_ABORT_INT_MASK_WIDTH (4U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_ABORT_INT_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_ABORT_INT_MASK_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_ABORT_INT_MASK_MASK)

#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_RSVDP_24_MASK (0xFF000000U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_RSVDP_24_SHIFT (24U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_RSVDP_24_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_MASK_OFF_RSVDP_24_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_MASK_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name DMA_WRITE_INT_CLEAR_OFF - DMA Write Interrupt Clear Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_DONE_INT_CLEAR_MASK (0xFU)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_DONE_INT_CLEAR_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_DONE_INT_CLEAR_WIDTH (4U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_DONE_INT_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_DONE_INT_CLEAR_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_DONE_INT_CLEAR_MASK)

#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_RSVDP_8_MASK (0xFF00U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_RSVDP_8_SHIFT (8U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_RSVDP_8_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_RSVDP_8_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_RSVDP_8_MASK)

#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_ABORT_INT_CLEAR_MASK (0xF0000U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_ABORT_INT_CLEAR_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_ABORT_INT_CLEAR_WIDTH (4U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_ABORT_INT_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_ABORT_INT_CLEAR_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_ABORT_INT_CLEAR_MASK)

#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_RSVDP_24_MASK (0xFF000000U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_RSVDP_24_SHIFT (24U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_RSVDP_24_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_RSVDP_24_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name DMA_WRITE_ERR_STATUS_OFF - DMA Write Error Status Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_APP_READ_ERR_DETECT_MASK (0xFFU)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_APP_READ_ERR_DETECT_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_APP_READ_ERR_DETECT_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_APP_READ_ERR_DETECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_APP_READ_ERR_DETECT_SHIFT)) & PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_APP_READ_ERR_DETECT_MASK)

#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_RSVDP_8_MASK (0xFF00U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_RSVDP_8_SHIFT (8U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_RSVDP_8_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_RSVDP_8_SHIFT)) & PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_RSVDP_8_MASK)

#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_LINKLIST_ELEMENT_FETCH_ERR_DETECT_MASK (0xFF0000U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_LINKLIST_ELEMENT_FETCH_ERR_DETECT_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_LINKLIST_ELEMENT_FETCH_ERR_DETECT_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_LINKLIST_ELEMENT_FETCH_ERR_DETECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_LINKLIST_ELEMENT_FETCH_ERR_DETECT_SHIFT)) & PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_LINKLIST_ELEMENT_FETCH_ERR_DETECT_MASK)

#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_RSVDP_24_MASK (0xFF000000U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_RSVDP_24_SHIFT (24U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_RSVDP_24_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_RSVDP_24_SHIFT)) & PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name DMA_WRITE_DONE_IMWR_LOW_OFF - DMA Write Done IMWr Address Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_DONE_IMWR_LOW_OFF_DMA_WRITE_DONE_LOW_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_WRITE_DONE_IMWR_LOW_OFF_DMA_WRITE_DONE_LOW_REG_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_DONE_IMWR_LOW_OFF_DMA_WRITE_DONE_LOW_REG_WIDTH (32U)
#define PCIE_DMA_DMA_WRITE_DONE_IMWR_LOW_OFF_DMA_WRITE_DONE_LOW_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_DONE_IMWR_LOW_OFF_DMA_WRITE_DONE_LOW_REG_SHIFT)) & PCIE_DMA_DMA_WRITE_DONE_IMWR_LOW_OFF_DMA_WRITE_DONE_LOW_REG_MASK)
/*! @} */

/*! @name DMA_WRITE_DONE_IMWR_HIGH_OFF - DMA Write Done IMWr Interrupt Address High Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_DONE_IMWR_HIGH_OFF_DMA_WRITE_DONE_HIGH_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_WRITE_DONE_IMWR_HIGH_OFF_DMA_WRITE_DONE_HIGH_REG_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_DONE_IMWR_HIGH_OFF_DMA_WRITE_DONE_HIGH_REG_WIDTH (32U)
#define PCIE_DMA_DMA_WRITE_DONE_IMWR_HIGH_OFF_DMA_WRITE_DONE_HIGH_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_DONE_IMWR_HIGH_OFF_DMA_WRITE_DONE_HIGH_REG_SHIFT)) & PCIE_DMA_DMA_WRITE_DONE_IMWR_HIGH_OFF_DMA_WRITE_DONE_HIGH_REG_MASK)
/*! @} */

/*! @name DMA_WRITE_ABORT_IMWR_LOW_OFF - DMA Write Abort IMWr Address Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_LOW_OFF_DMA_WRITE_ABORT_LOW_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_LOW_OFF_DMA_WRITE_ABORT_LOW_REG_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_LOW_OFF_DMA_WRITE_ABORT_LOW_REG_WIDTH (32U)
#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_LOW_OFF_DMA_WRITE_ABORT_LOW_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ABORT_IMWR_LOW_OFF_DMA_WRITE_ABORT_LOW_REG_SHIFT)) & PCIE_DMA_DMA_WRITE_ABORT_IMWR_LOW_OFF_DMA_WRITE_ABORT_LOW_REG_MASK)
/*! @} */

/*! @name DMA_WRITE_ABORT_IMWR_HIGH_OFF - DMA Write Abort IMWr Address High Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_HIGH_OFF_DMA_WRITE_ABORT_HIGH_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_HIGH_OFF_DMA_WRITE_ABORT_HIGH_REG_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_HIGH_OFF_DMA_WRITE_ABORT_HIGH_REG_WIDTH (32U)
#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_HIGH_OFF_DMA_WRITE_ABORT_HIGH_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ABORT_IMWR_HIGH_OFF_DMA_WRITE_ABORT_HIGH_REG_SHIFT)) & PCIE_DMA_DMA_WRITE_ABORT_IMWR_HIGH_OFF_DMA_WRITE_ABORT_HIGH_REG_MASK)
/*! @} */

/*! @name DMA_WRITE_CH01_IMWR_DATA_OFF - DMA Write Channel 1 and 0 IMWr Data Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_CH01_IMWR_DATA_OFF_WR_CHANNEL_0_DATA_MASK (0xFFFFU)
#define PCIE_DMA_DMA_WRITE_CH01_IMWR_DATA_OFF_WR_CHANNEL_0_DATA_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_CH01_IMWR_DATA_OFF_WR_CHANNEL_0_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_WRITE_CH01_IMWR_DATA_OFF_WR_CHANNEL_0_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH01_IMWR_DATA_OFF_WR_CHANNEL_0_DATA_SHIFT)) & PCIE_DMA_DMA_WRITE_CH01_IMWR_DATA_OFF_WR_CHANNEL_0_DATA_MASK)

#define PCIE_DMA_DMA_WRITE_CH01_IMWR_DATA_OFF_WR_CHANNEL_1_DATA_MASK (0xFFFF0000U)
#define PCIE_DMA_DMA_WRITE_CH01_IMWR_DATA_OFF_WR_CHANNEL_1_DATA_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_CH01_IMWR_DATA_OFF_WR_CHANNEL_1_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_WRITE_CH01_IMWR_DATA_OFF_WR_CHANNEL_1_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH01_IMWR_DATA_OFF_WR_CHANNEL_1_DATA_SHIFT)) & PCIE_DMA_DMA_WRITE_CH01_IMWR_DATA_OFF_WR_CHANNEL_1_DATA_MASK)
/*! @} */

/*! @name DMA_WRITE_CH23_IMWR_DATA_OFF - DMA Write Channel 3 and 2 IMWr Data Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_CH23_IMWR_DATA_OFF_WR_CHANNEL_2_DATA_MASK (0xFFFFU)
#define PCIE_DMA_DMA_WRITE_CH23_IMWR_DATA_OFF_WR_CHANNEL_2_DATA_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_CH23_IMWR_DATA_OFF_WR_CHANNEL_2_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_WRITE_CH23_IMWR_DATA_OFF_WR_CHANNEL_2_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH23_IMWR_DATA_OFF_WR_CHANNEL_2_DATA_SHIFT)) & PCIE_DMA_DMA_WRITE_CH23_IMWR_DATA_OFF_WR_CHANNEL_2_DATA_MASK)

#define PCIE_DMA_DMA_WRITE_CH23_IMWR_DATA_OFF_WR_CHANNEL_3_DATA_MASK (0xFFFF0000U)
#define PCIE_DMA_DMA_WRITE_CH23_IMWR_DATA_OFF_WR_CHANNEL_3_DATA_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_CH23_IMWR_DATA_OFF_WR_CHANNEL_3_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_WRITE_CH23_IMWR_DATA_OFF_WR_CHANNEL_3_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH23_IMWR_DATA_OFF_WR_CHANNEL_3_DATA_SHIFT)) & PCIE_DMA_DMA_WRITE_CH23_IMWR_DATA_OFF_WR_CHANNEL_3_DATA_MASK)
/*! @} */

/*! @name DMA_WRITE_CH45_IMWR_DATA_OFF - DMA Write Channel 5 and 4 IMWr Data Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_CH45_IMWR_DATA_OFF_WR_CHANNEL_4_DATA_MASK (0xFFFFU)
#define PCIE_DMA_DMA_WRITE_CH45_IMWR_DATA_OFF_WR_CHANNEL_4_DATA_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_CH45_IMWR_DATA_OFF_WR_CHANNEL_4_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_WRITE_CH45_IMWR_DATA_OFF_WR_CHANNEL_4_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH45_IMWR_DATA_OFF_WR_CHANNEL_4_DATA_SHIFT)) & PCIE_DMA_DMA_WRITE_CH45_IMWR_DATA_OFF_WR_CHANNEL_4_DATA_MASK)

#define PCIE_DMA_DMA_WRITE_CH45_IMWR_DATA_OFF_WR_CHANNEL_5_DATA_MASK (0xFFFF0000U)
#define PCIE_DMA_DMA_WRITE_CH45_IMWR_DATA_OFF_WR_CHANNEL_5_DATA_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_CH45_IMWR_DATA_OFF_WR_CHANNEL_5_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_WRITE_CH45_IMWR_DATA_OFF_WR_CHANNEL_5_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH45_IMWR_DATA_OFF_WR_CHANNEL_5_DATA_SHIFT)) & PCIE_DMA_DMA_WRITE_CH45_IMWR_DATA_OFF_WR_CHANNEL_5_DATA_MASK)
/*! @} */

/*! @name DMA_WRITE_CH67_IMWR_DATA_OFF - DMA Write Channel 7 and 6 IMWr Data Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_CH67_IMWR_DATA_OFF_WR_CHANNEL_6_DATA_MASK (0xFFFFU)
#define PCIE_DMA_DMA_WRITE_CH67_IMWR_DATA_OFF_WR_CHANNEL_6_DATA_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_CH67_IMWR_DATA_OFF_WR_CHANNEL_6_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_WRITE_CH67_IMWR_DATA_OFF_WR_CHANNEL_6_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH67_IMWR_DATA_OFF_WR_CHANNEL_6_DATA_SHIFT)) & PCIE_DMA_DMA_WRITE_CH67_IMWR_DATA_OFF_WR_CHANNEL_6_DATA_MASK)

#define PCIE_DMA_DMA_WRITE_CH67_IMWR_DATA_OFF_WR_CHANNEL_7_DATA_MASK (0xFFFF0000U)
#define PCIE_DMA_DMA_WRITE_CH67_IMWR_DATA_OFF_WR_CHANNEL_7_DATA_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_CH67_IMWR_DATA_OFF_WR_CHANNEL_7_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_WRITE_CH67_IMWR_DATA_OFF_WR_CHANNEL_7_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH67_IMWR_DATA_OFF_WR_CHANNEL_7_DATA_SHIFT)) & PCIE_DMA_DMA_WRITE_CH67_IMWR_DATA_OFF_WR_CHANNEL_7_DATA_MASK)
/*! @} */

/*! @name DMA_WRITE_LINKED_LIST_ERR_EN_OFF - DMA Write Linked List Error Enable Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLRAIE_MASK (0xFU)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLRAIE_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLRAIE_WIDTH (4U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLRAIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLRAIE_SHIFT)) & PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLRAIE_MASK)

#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_RSVDP_8_MASK (0xFF00U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_RSVDP_8_SHIFT (8U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_RSVDP_8_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_RSVDP_8_SHIFT)) & PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_RSVDP_8_MASK)

#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLLAIE_MASK (0xF0000U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLLAIE_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLLAIE_WIDTH (4U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLLAIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLLAIE_SHIFT)) & PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLLAIE_MASK)

#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_RSVDP_24_MASK (0xFF000000U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_RSVDP_24_SHIFT (24U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_RSVDP_24_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_RSVDP_24_SHIFT)) & PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name DMA_READ_INT_STATUS_OFF - DMA Read Interrupt Status Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_DONE_INT_STATUS_MASK (0xFFU)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_DONE_INT_STATUS_SHIFT (0U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_DONE_INT_STATUS_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_DONE_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_DONE_INT_STATUS_SHIFT)) & PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_DONE_INT_STATUS_MASK)

#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RSVDP_8_MASK (0xFF00U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RSVDP_8_SHIFT (8U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RSVDP_8_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_STATUS_OFF_RSVDP_8_SHIFT)) & PCIE_DMA_DMA_READ_INT_STATUS_OFF_RSVDP_8_MASK)

#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_ABORT_INT_STATUS_MASK (0xFF0000U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_ABORT_INT_STATUS_SHIFT (16U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_ABORT_INT_STATUS_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_ABORT_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_ABORT_INT_STATUS_SHIFT)) & PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_ABORT_INT_STATUS_MASK)

#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RSVDP_24_MASK (0xFF000000U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RSVDP_24_SHIFT (24U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RSVDP_24_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_STATUS_OFF_RSVDP_24_SHIFT)) & PCIE_DMA_DMA_READ_INT_STATUS_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name DMA_READ_INT_MASK_OFF - DMA Read Interrupt Mask Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_DONE_INT_MASK_MASK (0xFU)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_DONE_INT_MASK_SHIFT (0U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_DONE_INT_MASK_WIDTH (4U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_DONE_INT_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_DONE_INT_MASK_SHIFT)) & PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_DONE_INT_MASK_MASK)

#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RSVDP_8_MASK (0xFF00U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RSVDP_8_SHIFT (8U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RSVDP_8_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_MASK_OFF_RSVDP_8_SHIFT)) & PCIE_DMA_DMA_READ_INT_MASK_OFF_RSVDP_8_MASK)

#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_ABORT_INT_MASK_MASK (0xF0000U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_ABORT_INT_MASK_SHIFT (16U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_ABORT_INT_MASK_WIDTH (4U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_ABORT_INT_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_ABORT_INT_MASK_SHIFT)) & PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_ABORT_INT_MASK_MASK)

#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RSVDP_24_MASK (0xFF000000U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RSVDP_24_SHIFT (24U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RSVDP_24_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_MASK_OFF_RSVDP_24_SHIFT)) & PCIE_DMA_DMA_READ_INT_MASK_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name DMA_READ_INT_CLEAR_OFF - DMA Read Interrupt Clear Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_DONE_INT_CLEAR_MASK (0xFFU)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_DONE_INT_CLEAR_SHIFT (0U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_DONE_INT_CLEAR_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_DONE_INT_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_DONE_INT_CLEAR_SHIFT)) & PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_DONE_INT_CLEAR_MASK)

#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RSVDP_8_MASK (0xFF00U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RSVDP_8_SHIFT (8U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RSVDP_8_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RSVDP_8_SHIFT)) & PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RSVDP_8_MASK)

#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_ABORT_INT_CLEAR_MASK (0xFF0000U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_ABORT_INT_CLEAR_SHIFT (16U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_ABORT_INT_CLEAR_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_ABORT_INT_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_ABORT_INT_CLEAR_SHIFT)) & PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_ABORT_INT_CLEAR_MASK)

#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RSVDP_24_MASK (0xFF000000U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RSVDP_24_SHIFT (24U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RSVDP_24_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RSVDP_24_SHIFT)) & PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name DMA_READ_ERR_STATUS_LOW_OFF - DMA Read Error Status Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_APP_WR_ERR_DETECT_MASK (0xFFU)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_APP_WR_ERR_DETECT_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_APP_WR_ERR_DETECT_WIDTH (8U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_APP_WR_ERR_DETECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_APP_WR_ERR_DETECT_SHIFT)) & PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_APP_WR_ERR_DETECT_MASK)

#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_RSVDP_8_MASK (0xFF00U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_RSVDP_8_SHIFT (8U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_RSVDP_8_WIDTH (8U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_RSVDP_8_SHIFT)) & PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_RSVDP_8_MASK)

#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_LINK_LIST_ELEMENT_FETCH_ERR_DETECT_MASK (0xFF0000U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_LINK_LIST_ELEMENT_FETCH_ERR_DETECT_SHIFT (16U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_LINK_LIST_ELEMENT_FETCH_ERR_DETECT_WIDTH (8U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_LINK_LIST_ELEMENT_FETCH_ERR_DETECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_LINK_LIST_ELEMENT_FETCH_ERR_DETECT_SHIFT)) & PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_LINK_LIST_ELEMENT_FETCH_ERR_DETECT_MASK)

#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_RSVDP_24_MASK (0xFF000000U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_RSVDP_24_SHIFT (24U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_RSVDP_24_WIDTH (8U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_RSVDP_24_SHIFT)) & PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name DMA_READ_ERR_STATUS_HIGH_OFF - DMA Read Error Status High Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_UNSUPPORTED_REQ_MASK (0xFFU)
#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_UNSUPPORTED_REQ_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_UNSUPPORTED_REQ_WIDTH (8U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_UNSUPPORTED_REQ(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_UNSUPPORTED_REQ_SHIFT)) & PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_UNSUPPORTED_REQ_MASK)

#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_CPL_ABORT_MASK (0xFF00U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_CPL_ABORT_SHIFT (8U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_CPL_ABORT_WIDTH (8U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_CPL_ABORT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_CPL_ABORT_SHIFT)) & PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_CPL_ABORT_MASK)

#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_CPL_TIMEOUT_MASK (0xFF0000U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_CPL_TIMEOUT_SHIFT (16U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_CPL_TIMEOUT_WIDTH (8U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_CPL_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_CPL_TIMEOUT_SHIFT)) & PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_CPL_TIMEOUT_MASK)

#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_DATA_POISIONING_MASK (0xFF000000U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_DATA_POISIONING_SHIFT (24U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_DATA_POISIONING_WIDTH (8U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_DATA_POISIONING(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_DATA_POISIONING_SHIFT)) & PCIE_DMA_DMA_READ_ERR_STATUS_HIGH_OFF_DATA_POISIONING_MASK)
/*! @} */

/*! @name DMA_READ_LINKED_LIST_ERR_EN_OFF - DMA Read Linked List Error Enable Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLRAIE_MASK (0xFU)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLRAIE_SHIFT (0U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLRAIE_WIDTH (4U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLRAIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLRAIE_SHIFT)) & PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLRAIE_MASK)

#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RSVDP_8_MASK (0xFF00U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RSVDP_8_SHIFT (8U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RSVDP_8_WIDTH (8U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RSVDP_8(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RSVDP_8_SHIFT)) & PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RSVDP_8_MASK)

#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLLAIE_MASK (0xF0000U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLLAIE_SHIFT (16U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLLAIE_WIDTH (4U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLLAIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLLAIE_SHIFT)) & PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLLAIE_MASK)

#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RSVDP_24_MASK (0xFF000000U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RSVDP_24_SHIFT (24U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RSVDP_24_WIDTH (8U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RSVDP_24(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RSVDP_24_SHIFT)) & PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RSVDP_24_MASK)
/*! @} */

/*! @name DMA_READ_DONE_IMWR_LOW_OFF - DMA Read Done IMWr Address Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_DONE_IMWR_LOW_OFF_DMA_READ_DONE_LOW_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_READ_DONE_IMWR_LOW_OFF_DMA_READ_DONE_LOW_REG_SHIFT (0U)
#define PCIE_DMA_DMA_READ_DONE_IMWR_LOW_OFF_DMA_READ_DONE_LOW_REG_WIDTH (32U)
#define PCIE_DMA_DMA_READ_DONE_IMWR_LOW_OFF_DMA_READ_DONE_LOW_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_DONE_IMWR_LOW_OFF_DMA_READ_DONE_LOW_REG_SHIFT)) & PCIE_DMA_DMA_READ_DONE_IMWR_LOW_OFF_DMA_READ_DONE_LOW_REG_MASK)
/*! @} */

/*! @name DMA_READ_DONE_IMWR_HIGH_OFF - DMA Read Done IMWr Address High Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_DONE_IMWR_HIGH_OFF_DMA_READ_DONE_HIGH_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_READ_DONE_IMWR_HIGH_OFF_DMA_READ_DONE_HIGH_REG_SHIFT (0U)
#define PCIE_DMA_DMA_READ_DONE_IMWR_HIGH_OFF_DMA_READ_DONE_HIGH_REG_WIDTH (32U)
#define PCIE_DMA_DMA_READ_DONE_IMWR_HIGH_OFF_DMA_READ_DONE_HIGH_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_DONE_IMWR_HIGH_OFF_DMA_READ_DONE_HIGH_REG_SHIFT)) & PCIE_DMA_DMA_READ_DONE_IMWR_HIGH_OFF_DMA_READ_DONE_HIGH_REG_MASK)
/*! @} */

/*! @name DMA_READ_ABORT_IMWR_LOW_OFF - DMA Read Abort IMWr Address Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_ABORT_IMWR_LOW_OFF_DMA_READ_ABORT_LOW_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_READ_ABORT_IMWR_LOW_OFF_DMA_READ_ABORT_LOW_REG_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ABORT_IMWR_LOW_OFF_DMA_READ_ABORT_LOW_REG_WIDTH (32U)
#define PCIE_DMA_DMA_READ_ABORT_IMWR_LOW_OFF_DMA_READ_ABORT_LOW_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ABORT_IMWR_LOW_OFF_DMA_READ_ABORT_LOW_REG_SHIFT)) & PCIE_DMA_DMA_READ_ABORT_IMWR_LOW_OFF_DMA_READ_ABORT_LOW_REG_MASK)
/*! @} */

/*! @name DMA_READ_ABORT_IMWR_HIGH_OFF - DMA Read Abort IMWr Address High Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_ABORT_IMWR_HIGH_OFF_DMA_READ_ABORT_HIGH_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_READ_ABORT_IMWR_HIGH_OFF_DMA_READ_ABORT_HIGH_REG_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ABORT_IMWR_HIGH_OFF_DMA_READ_ABORT_HIGH_REG_WIDTH (32U)
#define PCIE_DMA_DMA_READ_ABORT_IMWR_HIGH_OFF_DMA_READ_ABORT_HIGH_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ABORT_IMWR_HIGH_OFF_DMA_READ_ABORT_HIGH_REG_SHIFT)) & PCIE_DMA_DMA_READ_ABORT_IMWR_HIGH_OFF_DMA_READ_ABORT_HIGH_REG_MASK)
/*! @} */

/*! @name DMA_READ_CH01_IMWR_DATA_OFF - DMA Read Channel 1 and 0 IMWr Data Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_CH01_IMWR_DATA_OFF_RD_CHANNEL_0_DATA_MASK (0xFFFFU)
#define PCIE_DMA_DMA_READ_CH01_IMWR_DATA_OFF_RD_CHANNEL_0_DATA_SHIFT (0U)
#define PCIE_DMA_DMA_READ_CH01_IMWR_DATA_OFF_RD_CHANNEL_0_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_READ_CH01_IMWR_DATA_OFF_RD_CHANNEL_0_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH01_IMWR_DATA_OFF_RD_CHANNEL_0_DATA_SHIFT)) & PCIE_DMA_DMA_READ_CH01_IMWR_DATA_OFF_RD_CHANNEL_0_DATA_MASK)

#define PCIE_DMA_DMA_READ_CH01_IMWR_DATA_OFF_RD_CHANNEL_1_DATA_MASK (0xFFFF0000U)
#define PCIE_DMA_DMA_READ_CH01_IMWR_DATA_OFF_RD_CHANNEL_1_DATA_SHIFT (16U)
#define PCIE_DMA_DMA_READ_CH01_IMWR_DATA_OFF_RD_CHANNEL_1_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_READ_CH01_IMWR_DATA_OFF_RD_CHANNEL_1_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH01_IMWR_DATA_OFF_RD_CHANNEL_1_DATA_SHIFT)) & PCIE_DMA_DMA_READ_CH01_IMWR_DATA_OFF_RD_CHANNEL_1_DATA_MASK)
/*! @} */

/*! @name DMA_READ_CH23_IMWR_DATA_OFF - DMA Read Channel 3 and 2 IMWr Data Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_CH23_IMWR_DATA_OFF_RD_CHANNEL_2_DATA_MASK (0xFFFFU)
#define PCIE_DMA_DMA_READ_CH23_IMWR_DATA_OFF_RD_CHANNEL_2_DATA_SHIFT (0U)
#define PCIE_DMA_DMA_READ_CH23_IMWR_DATA_OFF_RD_CHANNEL_2_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_READ_CH23_IMWR_DATA_OFF_RD_CHANNEL_2_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH23_IMWR_DATA_OFF_RD_CHANNEL_2_DATA_SHIFT)) & PCIE_DMA_DMA_READ_CH23_IMWR_DATA_OFF_RD_CHANNEL_2_DATA_MASK)

#define PCIE_DMA_DMA_READ_CH23_IMWR_DATA_OFF_RD_CHANNEL_3_DATA_MASK (0xFFFF0000U)
#define PCIE_DMA_DMA_READ_CH23_IMWR_DATA_OFF_RD_CHANNEL_3_DATA_SHIFT (16U)
#define PCIE_DMA_DMA_READ_CH23_IMWR_DATA_OFF_RD_CHANNEL_3_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_READ_CH23_IMWR_DATA_OFF_RD_CHANNEL_3_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH23_IMWR_DATA_OFF_RD_CHANNEL_3_DATA_SHIFT)) & PCIE_DMA_DMA_READ_CH23_IMWR_DATA_OFF_RD_CHANNEL_3_DATA_MASK)
/*! @} */

/*! @name DMA_READ_CH45_IMWR_DATA_OFF - DMA Read Channel 5 and 4 IMWr Data Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_CH45_IMWR_DATA_OFF_RD_CHANNEL_4_DATA_MASK (0xFFFFU)
#define PCIE_DMA_DMA_READ_CH45_IMWR_DATA_OFF_RD_CHANNEL_4_DATA_SHIFT (0U)
#define PCIE_DMA_DMA_READ_CH45_IMWR_DATA_OFF_RD_CHANNEL_4_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_READ_CH45_IMWR_DATA_OFF_RD_CHANNEL_4_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH45_IMWR_DATA_OFF_RD_CHANNEL_4_DATA_SHIFT)) & PCIE_DMA_DMA_READ_CH45_IMWR_DATA_OFF_RD_CHANNEL_4_DATA_MASK)

#define PCIE_DMA_DMA_READ_CH45_IMWR_DATA_OFF_RD_CHANNEL_5_DATA_MASK (0xFFFF0000U)
#define PCIE_DMA_DMA_READ_CH45_IMWR_DATA_OFF_RD_CHANNEL_5_DATA_SHIFT (16U)
#define PCIE_DMA_DMA_READ_CH45_IMWR_DATA_OFF_RD_CHANNEL_5_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_READ_CH45_IMWR_DATA_OFF_RD_CHANNEL_5_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH45_IMWR_DATA_OFF_RD_CHANNEL_5_DATA_SHIFT)) & PCIE_DMA_DMA_READ_CH45_IMWR_DATA_OFF_RD_CHANNEL_5_DATA_MASK)
/*! @} */

/*! @name DMA_READ_CH67_IMWR_DATA_OFF - DMA Read Channel 7 and 6 IMWr Data Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_CH67_IMWR_DATA_OFF_RD_CHANNEL_6_DATA_MASK (0xFFFFU)
#define PCIE_DMA_DMA_READ_CH67_IMWR_DATA_OFF_RD_CHANNEL_6_DATA_SHIFT (0U)
#define PCIE_DMA_DMA_READ_CH67_IMWR_DATA_OFF_RD_CHANNEL_6_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_READ_CH67_IMWR_DATA_OFF_RD_CHANNEL_6_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH67_IMWR_DATA_OFF_RD_CHANNEL_6_DATA_SHIFT)) & PCIE_DMA_DMA_READ_CH67_IMWR_DATA_OFF_RD_CHANNEL_6_DATA_MASK)

#define PCIE_DMA_DMA_READ_CH67_IMWR_DATA_OFF_RD_CHANNEL_7_DATA_MASK (0xFFFF0000U)
#define PCIE_DMA_DMA_READ_CH67_IMWR_DATA_OFF_RD_CHANNEL_7_DATA_SHIFT (16U)
#define PCIE_DMA_DMA_READ_CH67_IMWR_DATA_OFF_RD_CHANNEL_7_DATA_WIDTH (16U)
#define PCIE_DMA_DMA_READ_CH67_IMWR_DATA_OFF_RD_CHANNEL_7_DATA(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH67_IMWR_DATA_OFF_RD_CHANNEL_7_DATA_SHIFT)) & PCIE_DMA_DMA_READ_CH67_IMWR_DATA_OFF_RD_CHANNEL_7_DATA_MASK)
/*! @} */

/*! @name DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF - DMA Write Engine Handshake Counter Channel 0/1/2/3 Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH0_MASK (0x1FU)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH0_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH0_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH0_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH0_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_5_MASK (0xE0U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_5_SHIFT (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_5_WIDTH (3U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_5_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_5_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH1_MASK (0x1F00U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH1_SHIFT (8U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH1_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH1_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH1_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_13_MASK (0xE000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_13_SHIFT (13U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_13_WIDTH (3U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_13(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_13_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_13_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH2_MASK (0x1F0000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH2_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH2_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH2_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH2_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_21_MASK (0xE00000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_21_SHIFT (21U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_21_WIDTH (3U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_21(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_21_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_21_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH3_MASK (0x1F000000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH3_SHIFT (24U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH3_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH3_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH3_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_29_MASK (0xE0000000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_29_SHIFT (29U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_29_WIDTH (3U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_29(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_29_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_29_MASK)
/*! @} */

/*! @name DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF - DMA Write Engine Handshake Counter Channel 4/5/6/7 Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH4_MASK (0x1FU)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH4_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH4_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH4(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH4_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH4_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_5_MASK (0xE0U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_5_SHIFT (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_5_WIDTH (3U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_5_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_5_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH5_MASK (0x1F00U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH5_SHIFT (8U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH5_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH5_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH5_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_13_MASK (0xE000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_13_SHIFT (13U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_13_WIDTH (3U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_13(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_13_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_13_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH6_MASK (0x1F0000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH6_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH6_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH6(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH6_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH6_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_21_MASK (0xE00000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_21_SHIFT (21U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_21_WIDTH (3U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_21(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_21_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_21_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH7_MASK (0x1F000000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH7_SHIFT (24U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH7_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH7(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH7_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH7_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_29_MASK (0xE0000000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_29_SHIFT (29U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_29_WIDTH (3U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_29(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_29_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_29_MASK)
/*! @} */

/*! @name DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF - DMA Read Engine Handshake Counter Channel 0/1/2/3 Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH0_MASK (0x1FU)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH0_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH0_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH0_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH0_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_5_MASK (0xE0U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_5_SHIFT (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_5_WIDTH (3U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_5_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_5_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH1_MASK (0x1F00U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH1_SHIFT (8U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH1_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH1_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH1_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_13_MASK (0xE000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_13_SHIFT (13U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_13_WIDTH (3U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_13(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_13_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_13_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH2_MASK (0x1F0000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH2_SHIFT (16U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH2_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH2_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH2_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_21_MASK (0xE00000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_21_SHIFT (21U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_21_WIDTH (3U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_21(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_21_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_21_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH3_MASK (0x1F000000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH3_SHIFT (24U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH3_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH3_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH3_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_29_MASK (0xE0000000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_29_SHIFT (29U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_29_WIDTH (3U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_29(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_29_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_RSVDP_29_MASK)
/*! @} */

/*! @name DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF - DMA Read Engine Handshake Counter Channel 4/5/6/7 Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH4_MASK (0x1FU)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH4_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH4_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH4(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH4_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH4_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_5_MASK (0xE0U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_5_SHIFT (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_5_WIDTH (3U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_5_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_5_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH5_MASK (0x1F00U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH5_SHIFT (8U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH5_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH5_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH5_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_13_MASK (0xE000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_13_SHIFT (13U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_13_WIDTH (3U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_13(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_13_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_13_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH6_MASK (0x1F0000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH6_SHIFT (16U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH6_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH6(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH6_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH6_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_21_MASK (0xE00000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_21_SHIFT (21U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_21_WIDTH (3U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_21(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_21_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_21_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH7_MASK (0x1F000000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH7_SHIFT (24U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH7_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH7(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH7_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH7_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_29_MASK (0xE0000000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_29_SHIFT (29U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_29_WIDTH (3U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_29(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_29_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_RSVDP_29_MASK)
/*! @} */

/*! @name DMA_WRITE_CH0_PWR_EN_OFF - DMA Write Channel 0 Power Enable Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_CH0_PWR_EN_OFF_DMA_WRITE_CH0_PWR_EN_MASK (0x1U)
#define PCIE_DMA_DMA_WRITE_CH0_PWR_EN_OFF_DMA_WRITE_CH0_PWR_EN_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_CH0_PWR_EN_OFF_DMA_WRITE_CH0_PWR_EN_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_CH0_PWR_EN_OFF_DMA_WRITE_CH0_PWR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH0_PWR_EN_OFF_DMA_WRITE_CH0_PWR_EN_SHIFT)) & PCIE_DMA_DMA_WRITE_CH0_PWR_EN_OFF_DMA_WRITE_CH0_PWR_EN_MASK)

#define PCIE_DMA_DMA_WRITE_CH0_PWR_EN_OFF_RSVDP_1_MASK (0xFFFFFFFEU)
#define PCIE_DMA_DMA_WRITE_CH0_PWR_EN_OFF_RSVDP_1_SHIFT (1U)
#define PCIE_DMA_DMA_WRITE_CH0_PWR_EN_OFF_RSVDP_1_WIDTH (31U)
#define PCIE_DMA_DMA_WRITE_CH0_PWR_EN_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH0_PWR_EN_OFF_RSVDP_1_SHIFT)) & PCIE_DMA_DMA_WRITE_CH0_PWR_EN_OFF_RSVDP_1_MASK)
/*! @} */

/*! @name DMA_WRITE_CH1_PWR_EN_OFF - DMA Write Channel 1 Power Enable Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_CH1_PWR_EN_OFF_DMA_WRITE_CH1_PWR_EN_MASK (0x1U)
#define PCIE_DMA_DMA_WRITE_CH1_PWR_EN_OFF_DMA_WRITE_CH1_PWR_EN_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_CH1_PWR_EN_OFF_DMA_WRITE_CH1_PWR_EN_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_CH1_PWR_EN_OFF_DMA_WRITE_CH1_PWR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH1_PWR_EN_OFF_DMA_WRITE_CH1_PWR_EN_SHIFT)) & PCIE_DMA_DMA_WRITE_CH1_PWR_EN_OFF_DMA_WRITE_CH1_PWR_EN_MASK)

#define PCIE_DMA_DMA_WRITE_CH1_PWR_EN_OFF_RSVDP_1_MASK (0xFFFFFFFEU)
#define PCIE_DMA_DMA_WRITE_CH1_PWR_EN_OFF_RSVDP_1_SHIFT (1U)
#define PCIE_DMA_DMA_WRITE_CH1_PWR_EN_OFF_RSVDP_1_WIDTH (31U)
#define PCIE_DMA_DMA_WRITE_CH1_PWR_EN_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH1_PWR_EN_OFF_RSVDP_1_SHIFT)) & PCIE_DMA_DMA_WRITE_CH1_PWR_EN_OFF_RSVDP_1_MASK)
/*! @} */

/*! @name DMA_WRITE_CH2_PWR_EN_OFF - DMA Write Channel 2 Power Enable Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_CH2_PWR_EN_OFF_DMA_WRITE_CH2_PWR_EN_MASK (0x1U)
#define PCIE_DMA_DMA_WRITE_CH2_PWR_EN_OFF_DMA_WRITE_CH2_PWR_EN_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_CH2_PWR_EN_OFF_DMA_WRITE_CH2_PWR_EN_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_CH2_PWR_EN_OFF_DMA_WRITE_CH2_PWR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH2_PWR_EN_OFF_DMA_WRITE_CH2_PWR_EN_SHIFT)) & PCIE_DMA_DMA_WRITE_CH2_PWR_EN_OFF_DMA_WRITE_CH2_PWR_EN_MASK)

#define PCIE_DMA_DMA_WRITE_CH2_PWR_EN_OFF_RSVDP_1_MASK (0xFFFFFFFEU)
#define PCIE_DMA_DMA_WRITE_CH2_PWR_EN_OFF_RSVDP_1_SHIFT (1U)
#define PCIE_DMA_DMA_WRITE_CH2_PWR_EN_OFF_RSVDP_1_WIDTH (31U)
#define PCIE_DMA_DMA_WRITE_CH2_PWR_EN_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH2_PWR_EN_OFF_RSVDP_1_SHIFT)) & PCIE_DMA_DMA_WRITE_CH2_PWR_EN_OFF_RSVDP_1_MASK)
/*! @} */

/*! @name DMA_WRITE_CH3_PWR_EN_OFF - DMA Write Channel 3 Power Enable Register. */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_CH3_PWR_EN_OFF_DMA_WRITE_CH3_PWR_EN_MASK (0x1U)
#define PCIE_DMA_DMA_WRITE_CH3_PWR_EN_OFF_DMA_WRITE_CH3_PWR_EN_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_CH3_PWR_EN_OFF_DMA_WRITE_CH3_PWR_EN_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_CH3_PWR_EN_OFF_DMA_WRITE_CH3_PWR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH3_PWR_EN_OFF_DMA_WRITE_CH3_PWR_EN_SHIFT)) & PCIE_DMA_DMA_WRITE_CH3_PWR_EN_OFF_DMA_WRITE_CH3_PWR_EN_MASK)

#define PCIE_DMA_DMA_WRITE_CH3_PWR_EN_OFF_RSVDP_1_MASK (0xFFFFFFFEU)
#define PCIE_DMA_DMA_WRITE_CH3_PWR_EN_OFF_RSVDP_1_SHIFT (1U)
#define PCIE_DMA_DMA_WRITE_CH3_PWR_EN_OFF_RSVDP_1_WIDTH (31U)
#define PCIE_DMA_DMA_WRITE_CH3_PWR_EN_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_CH3_PWR_EN_OFF_RSVDP_1_SHIFT)) & PCIE_DMA_DMA_WRITE_CH3_PWR_EN_OFF_RSVDP_1_MASK)
/*! @} */

/*! @name DMA_READ_CH0_PWR_EN_OFF - DMA Read Channel 0 Power Enable Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_CH0_PWR_EN_OFF_DMA_READ_CH0_PWR_EN_MASK (0x1U)
#define PCIE_DMA_DMA_READ_CH0_PWR_EN_OFF_DMA_READ_CH0_PWR_EN_SHIFT (0U)
#define PCIE_DMA_DMA_READ_CH0_PWR_EN_OFF_DMA_READ_CH0_PWR_EN_WIDTH (1U)
#define PCIE_DMA_DMA_READ_CH0_PWR_EN_OFF_DMA_READ_CH0_PWR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH0_PWR_EN_OFF_DMA_READ_CH0_PWR_EN_SHIFT)) & PCIE_DMA_DMA_READ_CH0_PWR_EN_OFF_DMA_READ_CH0_PWR_EN_MASK)

#define PCIE_DMA_DMA_READ_CH0_PWR_EN_OFF_RSVDP_1_MASK (0xFFFFFFFEU)
#define PCIE_DMA_DMA_READ_CH0_PWR_EN_OFF_RSVDP_1_SHIFT (1U)
#define PCIE_DMA_DMA_READ_CH0_PWR_EN_OFF_RSVDP_1_WIDTH (31U)
#define PCIE_DMA_DMA_READ_CH0_PWR_EN_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH0_PWR_EN_OFF_RSVDP_1_SHIFT)) & PCIE_DMA_DMA_READ_CH0_PWR_EN_OFF_RSVDP_1_MASK)
/*! @} */

/*! @name DMA_READ_CH1_PWR_EN_OFF - DMA Read Channel 1 Power Enable Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_CH1_PWR_EN_OFF_DMA_READ_CH1_PWR_EN_MASK (0x1U)
#define PCIE_DMA_DMA_READ_CH1_PWR_EN_OFF_DMA_READ_CH1_PWR_EN_SHIFT (0U)
#define PCIE_DMA_DMA_READ_CH1_PWR_EN_OFF_DMA_READ_CH1_PWR_EN_WIDTH (1U)
#define PCIE_DMA_DMA_READ_CH1_PWR_EN_OFF_DMA_READ_CH1_PWR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH1_PWR_EN_OFF_DMA_READ_CH1_PWR_EN_SHIFT)) & PCIE_DMA_DMA_READ_CH1_PWR_EN_OFF_DMA_READ_CH1_PWR_EN_MASK)

#define PCIE_DMA_DMA_READ_CH1_PWR_EN_OFF_RSVDP_1_MASK (0xFFFFFFFEU)
#define PCIE_DMA_DMA_READ_CH1_PWR_EN_OFF_RSVDP_1_SHIFT (1U)
#define PCIE_DMA_DMA_READ_CH1_PWR_EN_OFF_RSVDP_1_WIDTH (31U)
#define PCIE_DMA_DMA_READ_CH1_PWR_EN_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH1_PWR_EN_OFF_RSVDP_1_SHIFT)) & PCIE_DMA_DMA_READ_CH1_PWR_EN_OFF_RSVDP_1_MASK)
/*! @} */

/*! @name DMA_READ_CH2_PWR_EN_OFF - DMA Read Channel 2 Power Enable Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_CH2_PWR_EN_OFF_DMA_READ_CH2_PWR_EN_MASK (0x1U)
#define PCIE_DMA_DMA_READ_CH2_PWR_EN_OFF_DMA_READ_CH2_PWR_EN_SHIFT (0U)
#define PCIE_DMA_DMA_READ_CH2_PWR_EN_OFF_DMA_READ_CH2_PWR_EN_WIDTH (1U)
#define PCIE_DMA_DMA_READ_CH2_PWR_EN_OFF_DMA_READ_CH2_PWR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH2_PWR_EN_OFF_DMA_READ_CH2_PWR_EN_SHIFT)) & PCIE_DMA_DMA_READ_CH2_PWR_EN_OFF_DMA_READ_CH2_PWR_EN_MASK)

#define PCIE_DMA_DMA_READ_CH2_PWR_EN_OFF_RSVDP_1_MASK (0xFFFFFFFEU)
#define PCIE_DMA_DMA_READ_CH2_PWR_EN_OFF_RSVDP_1_SHIFT (1U)
#define PCIE_DMA_DMA_READ_CH2_PWR_EN_OFF_RSVDP_1_WIDTH (31U)
#define PCIE_DMA_DMA_READ_CH2_PWR_EN_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH2_PWR_EN_OFF_RSVDP_1_SHIFT)) & PCIE_DMA_DMA_READ_CH2_PWR_EN_OFF_RSVDP_1_MASK)
/*! @} */

/*! @name DMA_READ_CH3_PWR_EN_OFF - DMA Read Channel 3 Power Enable Register. */
/*! @{ */

#define PCIE_DMA_DMA_READ_CH3_PWR_EN_OFF_DMA_READ_CH3_PWR_EN_MASK (0x1U)
#define PCIE_DMA_DMA_READ_CH3_PWR_EN_OFF_DMA_READ_CH3_PWR_EN_SHIFT (0U)
#define PCIE_DMA_DMA_READ_CH3_PWR_EN_OFF_DMA_READ_CH3_PWR_EN_WIDTH (1U)
#define PCIE_DMA_DMA_READ_CH3_PWR_EN_OFF_DMA_READ_CH3_PWR_EN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH3_PWR_EN_OFF_DMA_READ_CH3_PWR_EN_SHIFT)) & PCIE_DMA_DMA_READ_CH3_PWR_EN_OFF_DMA_READ_CH3_PWR_EN_MASK)

#define PCIE_DMA_DMA_READ_CH3_PWR_EN_OFF_RSVDP_1_MASK (0xFFFFFFFEU)
#define PCIE_DMA_DMA_READ_CH3_PWR_EN_OFF_RSVDP_1_SHIFT (1U)
#define PCIE_DMA_DMA_READ_CH3_PWR_EN_OFF_RSVDP_1_WIDTH (31U)
#define PCIE_DMA_DMA_READ_CH3_PWR_EN_OFF_RSVDP_1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_CH3_PWR_EN_OFF_RSVDP_1_SHIFT)) & PCIE_DMA_DMA_READ_CH3_PWR_EN_OFF_RSVDP_1_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_WRCH_0 - DMA Write Channel Control 1 Register. */
/*! @{ */

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CB_MASK (0x1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CB_SHIFT (0U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_TCB_MASK (0x2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_TCB_SHIFT (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_TCB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_TCB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_TCB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_TCB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LLP_MASK (0x4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LLP_SHIFT (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LLP_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LLP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LLP_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LLP_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LIE_MASK (0x8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LIE_SHIFT (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_RIE_MASK (0x10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_RIE_SHIFT (4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_RIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_RIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_RIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_RIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CS_MASK (0x60U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CS_SHIFT (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CS_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED0_MASK (0x80U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED0_SHIFT (7U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED0_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED0_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED0_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CCS_MASK (0x100U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CCS_SHIFT (8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CCS_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CCS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CCS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_CCS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LLE_MASK (0x200U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LLE_SHIFT (9U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LLE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LLE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_LLE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED1_MASK (0xC00U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED1_SHIFT (10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED1_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED1_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED1_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_FUNC_NUM_MASK (0x1F000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_FUNC_NUM_SHIFT (12U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_FUNC_NUM_WIDTH (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_FUNC_NUM_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_FUNC_NUM_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_MEM_TYPE_MASK (0x400000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_MEM_TYPE_SHIFT (22U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_MEM_TYPE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_MEM_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_MEM_TYPE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_MEM_TYPE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_NS_DST_MASK (0x800000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_NS_DST_SHIFT (23U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_NS_DST_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_NS_DST(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_NS_DST_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_NS_DST_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_NS_SRC_MASK (0x1000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_NS_SRC_SHIFT (24U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_NS_SRC_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_NS_SRC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_NS_SRC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_NS_SRC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RO_MASK (0x2000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RO_SHIFT (25U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RO_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RO(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RO_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RO_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED5_MASK (0x4000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED5_SHIFT (26U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED5_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED5_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED5_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_TC_MASK (0x38000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_TC_SHIFT (27U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_TC_WIDTH (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_TC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_TC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_AT_MASK (0xC0000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_AT_SHIFT (30U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_AT_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_AT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_AT_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_AT_MASK)
/*! @} */

/*! @name DMA_TRANSFER_SIZE_OFF_WRCH_0 - DMA Write Transfer Size Register. */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_0_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_0_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_0_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_0_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_0_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_0_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_WRCH_0 - DMA Write SAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_0_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_0_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_0_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_0_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_0_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_0_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_WRCH_0 - DMA Write SAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_0_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_0_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_0_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_0_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_0_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_0_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_WRCH_0 - DMA Write DAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_0_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_0_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_0_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_0_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_0_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_0_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_WRCH_0 - DMA Write DAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_0_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_0_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_0_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_0_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_0_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_0_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_WRCH_0 - DMA Write Linked List Pointer Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_0_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_0_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_0_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_0_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_0_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_0_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_WRCH_0 - DMA Write Linked List Pointer High Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_0_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_0_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_0_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_0_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_0_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_0_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_RDCH_0 - DMA Read Channel Control 1 Register. */
/*! @{ */

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CB_MASK (0x1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CB_SHIFT (0U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_TCB_MASK (0x2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_TCB_SHIFT (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_TCB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_TCB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_TCB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_TCB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LLP_MASK (0x4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LLP_SHIFT (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LLP_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LLP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LLP_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LLP_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LIE_MASK (0x8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LIE_SHIFT (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_RIE_MASK (0x10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_RIE_SHIFT (4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_RIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_RIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_RIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_RIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CS_MASK (0x60U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CS_SHIFT (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CS_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED0_MASK (0x80U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED0_SHIFT (7U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED0_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED0_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED0_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CCS_MASK (0x100U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CCS_SHIFT (8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CCS_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CCS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CCS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_CCS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LLE_MASK (0x200U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LLE_SHIFT (9U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LLE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LLE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_LLE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED1_MASK (0xC00U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED1_SHIFT (10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED1_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED1_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED1_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_FUNC_NUM_MASK (0x1F000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_FUNC_NUM_SHIFT (12U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_FUNC_NUM_WIDTH (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_FUNC_NUM_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_FUNC_NUM_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_MEM_TYPE_MASK (0x400000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_MEM_TYPE_SHIFT (22U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_MEM_TYPE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_MEM_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_MEM_TYPE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_MEM_TYPE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_NS_DST_MASK (0x800000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_NS_DST_SHIFT (23U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_NS_DST_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_NS_DST(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_NS_DST_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_NS_DST_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_NS_SRC_MASK (0x1000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_NS_SRC_SHIFT (24U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_NS_SRC_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_NS_SRC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_NS_SRC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_NS_SRC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RO_MASK (0x2000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RO_SHIFT (25U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RO_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RO(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RO_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RO_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED5_MASK (0x4000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED5_SHIFT (26U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED5_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED5_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED5_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_TC_MASK (0x38000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_TC_SHIFT (27U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_TC_WIDTH (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_TC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_TC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_AT_MASK (0xC0000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_AT_SHIFT (30U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_AT_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_AT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_AT_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_AT_MASK)
/*! @} */

/*! @name DMA_TRANSFER_SIZE_OFF_RDCH_0 - DMA Read Transfer Size Register. */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_0_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_0_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_0_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_0_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_0_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_0_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_RDCH_0 - DMA Read SAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_0_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_0_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_0_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_0_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_0_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_0_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_RDCH_0 - DMA Read SAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_0_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_0_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_0_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_0_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_0_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_0_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_RDCH_0 - DMA Read DAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_0_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_0_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_0_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_0_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_0_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_0_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_RDCH_0 - DMA Read DAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_0_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_0_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_0_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_0_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_0_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_0_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_RDCH_0 - DMA Read Linked List Pointer Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_0_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_0_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_0_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_0_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_0_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_0_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_RDCH_0 - DMA Read Linked List Pointer High Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_0_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_0_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_0_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_0_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_0_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_0_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_WRCH_1 - DMA Write Channel Control 1 Register. */
/*! @{ */

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CB_MASK (0x1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CB_SHIFT (0U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_TCB_MASK (0x2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_TCB_SHIFT (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_TCB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_TCB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_TCB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_TCB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LLP_MASK (0x4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LLP_SHIFT (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LLP_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LLP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LLP_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LLP_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LIE_MASK (0x8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LIE_SHIFT (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_RIE_MASK (0x10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_RIE_SHIFT (4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_RIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_RIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_RIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_RIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CS_MASK (0x60U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CS_SHIFT (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CS_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED0_MASK (0x80U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED0_SHIFT (7U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED0_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED0_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED0_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CCS_MASK (0x100U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CCS_SHIFT (8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CCS_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CCS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CCS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_CCS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LLE_MASK (0x200U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LLE_SHIFT (9U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LLE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LLE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_LLE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED1_MASK (0xC00U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED1_SHIFT (10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED1_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED1_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED1_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_FUNC_NUM_MASK (0x1F000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_FUNC_NUM_SHIFT (12U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_FUNC_NUM_WIDTH (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_FUNC_NUM_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_FUNC_NUM_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_MEM_TYPE_MASK (0x400000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_MEM_TYPE_SHIFT (22U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_MEM_TYPE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_MEM_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_MEM_TYPE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_MEM_TYPE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_NS_DST_MASK (0x800000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_NS_DST_SHIFT (23U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_NS_DST_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_NS_DST(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_NS_DST_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_NS_DST_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_NS_SRC_MASK (0x1000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_NS_SRC_SHIFT (24U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_NS_SRC_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_NS_SRC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_NS_SRC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_NS_SRC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RO_MASK (0x2000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RO_SHIFT (25U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RO_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RO(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RO_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RO_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED5_MASK (0x4000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED5_SHIFT (26U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED5_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED5_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED5_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_TC_MASK (0x38000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_TC_SHIFT (27U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_TC_WIDTH (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_TC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_TC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_AT_MASK (0xC0000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_AT_SHIFT (30U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_AT_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_AT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_AT_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_AT_MASK)
/*! @} */

/*! @name DMA_TRANSFER_SIZE_OFF_WRCH_1 - DMA Write Transfer Size Register. */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_1_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_1_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_1_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_1_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_1_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_1_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_WRCH_1 - DMA Write SAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_1_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_1_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_1_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_1_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_1_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_1_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_WRCH_1 - DMA Write SAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_1_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_1_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_1_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_1_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_1_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_1_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_WRCH_1 - DMA Write DAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_1_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_1_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_1_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_1_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_1_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_1_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_WRCH_1 - DMA Write DAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_1_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_1_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_1_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_1_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_1_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_1_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_WRCH_1 - DMA Write Linked List Pointer Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_1_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_1_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_1_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_1_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_1_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_1_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_WRCH_1 - DMA Write Linked List Pointer High Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_1_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_1_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_1_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_1_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_1_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_1_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_RDCH_1 - DMA Read Channel Control 1 Register. */
/*! @{ */

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CB_MASK (0x1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CB_SHIFT (0U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_TCB_MASK (0x2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_TCB_SHIFT (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_TCB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_TCB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_TCB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_TCB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LLP_MASK (0x4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LLP_SHIFT (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LLP_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LLP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LLP_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LLP_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LIE_MASK (0x8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LIE_SHIFT (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_RIE_MASK (0x10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_RIE_SHIFT (4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_RIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_RIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_RIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_RIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CS_MASK (0x60U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CS_SHIFT (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CS_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED0_MASK (0x80U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED0_SHIFT (7U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED0_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED0_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED0_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CCS_MASK (0x100U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CCS_SHIFT (8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CCS_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CCS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CCS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_CCS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LLE_MASK (0x200U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LLE_SHIFT (9U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LLE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LLE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_LLE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED1_MASK (0xC00U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED1_SHIFT (10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED1_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED1_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED1_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_FUNC_NUM_MASK (0x1F000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_FUNC_NUM_SHIFT (12U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_FUNC_NUM_WIDTH (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_FUNC_NUM_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_FUNC_NUM_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_MEM_TYPE_MASK (0x400000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_MEM_TYPE_SHIFT (22U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_MEM_TYPE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_MEM_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_MEM_TYPE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_MEM_TYPE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_NS_DST_MASK (0x800000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_NS_DST_SHIFT (23U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_NS_DST_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_NS_DST(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_NS_DST_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_NS_DST_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_NS_SRC_MASK (0x1000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_NS_SRC_SHIFT (24U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_NS_SRC_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_NS_SRC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_NS_SRC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_NS_SRC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RO_MASK (0x2000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RO_SHIFT (25U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RO_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RO(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RO_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RO_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED5_MASK (0x4000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED5_SHIFT (26U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED5_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED5_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED5_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_TC_MASK (0x38000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_TC_SHIFT (27U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_TC_WIDTH (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_TC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_TC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_AT_MASK (0xC0000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_AT_SHIFT (30U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_AT_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_AT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_AT_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_AT_MASK)
/*! @} */

/*! @name DMA_TRANSFER_SIZE_OFF_RDCH_1 - DMA Read Transfer Size Register. */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_1_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_1_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_1_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_1_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_1_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_1_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_RDCH_1 - DMA Read SAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_1_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_1_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_1_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_1_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_1_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_1_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_RDCH_1 - DMA Read SAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_1_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_1_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_1_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_1_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_1_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_1_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_RDCH_1 - DMA Read DAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_1_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_1_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_1_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_1_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_1_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_1_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_RDCH_1 - DMA Read DAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_1_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_1_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_1_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_1_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_1_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_1_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_RDCH_1 - DMA Read Linked List Pointer Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_1_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_1_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_1_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_1_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_1_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_1_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_RDCH_1 - DMA Read Linked List Pointer High Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_1_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_1_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_1_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_1_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_1_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_1_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_WRCH_2 - DMA Write Channel Control 1 Register. */
/*! @{ */

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CB_MASK (0x1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CB_SHIFT (0U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_TCB_MASK (0x2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_TCB_SHIFT (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_TCB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_TCB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_TCB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_TCB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LLP_MASK (0x4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LLP_SHIFT (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LLP_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LLP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LLP_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LLP_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LIE_MASK (0x8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LIE_SHIFT (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_RIE_MASK (0x10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_RIE_SHIFT (4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_RIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_RIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_RIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_RIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CS_MASK (0x60U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CS_SHIFT (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CS_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED0_MASK (0x80U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED0_SHIFT (7U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED0_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED0_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED0_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CCS_MASK (0x100U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CCS_SHIFT (8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CCS_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CCS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CCS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_CCS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LLE_MASK (0x200U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LLE_SHIFT (9U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LLE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LLE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_LLE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED1_MASK (0xC00U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED1_SHIFT (10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED1_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED1_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED1_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_FUNC_NUM_MASK (0x1F000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_FUNC_NUM_SHIFT (12U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_FUNC_NUM_WIDTH (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_FUNC_NUM_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_FUNC_NUM_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_MEM_TYPE_MASK (0x400000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_MEM_TYPE_SHIFT (22U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_MEM_TYPE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_MEM_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_MEM_TYPE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_MEM_TYPE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_NS_DST_MASK (0x800000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_NS_DST_SHIFT (23U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_NS_DST_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_NS_DST(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_NS_DST_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_NS_DST_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_NS_SRC_MASK (0x1000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_NS_SRC_SHIFT (24U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_NS_SRC_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_NS_SRC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_NS_SRC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_NS_SRC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RO_MASK (0x2000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RO_SHIFT (25U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RO_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RO(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RO_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RO_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED5_MASK (0x4000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED5_SHIFT (26U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED5_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED5_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED5_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_TC_MASK (0x38000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_TC_SHIFT (27U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_TC_WIDTH (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_TC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_TC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_AT_MASK (0xC0000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_AT_SHIFT (30U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_AT_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_AT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_AT_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_AT_MASK)
/*! @} */

/*! @name DMA_TRANSFER_SIZE_OFF_WRCH_2 - DMA Write Transfer Size Register. */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_2_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_2_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_2_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_2_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_2_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_2_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_WRCH_2 - DMA Write SAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_2_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_2_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_2_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_2_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_2_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_2_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_WRCH_2 - DMA Write SAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_2_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_2_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_2_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_2_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_2_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_2_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_WRCH_2 - DMA Write DAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_2_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_2_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_2_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_2_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_2_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_2_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_WRCH_2 - DMA Write DAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_2_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_2_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_2_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_2_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_2_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_2_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_WRCH_2 - DMA Write Linked List Pointer Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_2_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_2_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_2_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_2_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_2_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_2_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_WRCH_2 - DMA Write Linked List Pointer High Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_2_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_2_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_2_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_2_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_2_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_2_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_RDCH_2 - DMA Read Channel Control 1 Register. */
/*! @{ */

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CB_MASK (0x1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CB_SHIFT (0U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_TCB_MASK (0x2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_TCB_SHIFT (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_TCB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_TCB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_TCB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_TCB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LLP_MASK (0x4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LLP_SHIFT (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LLP_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LLP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LLP_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LLP_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LIE_MASK (0x8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LIE_SHIFT (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_RIE_MASK (0x10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_RIE_SHIFT (4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_RIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_RIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_RIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_RIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CS_MASK (0x60U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CS_SHIFT (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CS_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED0_MASK (0x80U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED0_SHIFT (7U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED0_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED0_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED0_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CCS_MASK (0x100U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CCS_SHIFT (8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CCS_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CCS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CCS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_CCS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LLE_MASK (0x200U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LLE_SHIFT (9U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LLE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LLE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_LLE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED1_MASK (0xC00U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED1_SHIFT (10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED1_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED1_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED1_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_FUNC_NUM_MASK (0x1F000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_FUNC_NUM_SHIFT (12U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_FUNC_NUM_WIDTH (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_FUNC_NUM_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_FUNC_NUM_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_MEM_TYPE_MASK (0x400000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_MEM_TYPE_SHIFT (22U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_MEM_TYPE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_MEM_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_MEM_TYPE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_MEM_TYPE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_NS_DST_MASK (0x800000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_NS_DST_SHIFT (23U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_NS_DST_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_NS_DST(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_NS_DST_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_NS_DST_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_NS_SRC_MASK (0x1000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_NS_SRC_SHIFT (24U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_NS_SRC_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_NS_SRC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_NS_SRC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_NS_SRC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RO_MASK (0x2000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RO_SHIFT (25U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RO_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RO(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RO_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RO_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED5_MASK (0x4000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED5_SHIFT (26U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED5_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED5_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED5_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_TC_MASK (0x38000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_TC_SHIFT (27U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_TC_WIDTH (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_TC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_TC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_AT_MASK (0xC0000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_AT_SHIFT (30U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_AT_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_AT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_AT_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_AT_MASK)
/*! @} */

/*! @name DMA_TRANSFER_SIZE_OFF_RDCH_2 - DMA Read Transfer Size Register. */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_2_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_2_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_2_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_2_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_2_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_2_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_RDCH_2 - DMA Read SAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_2_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_2_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_2_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_2_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_2_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_2_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_RDCH_2 - DMA Read SAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_2_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_2_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_2_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_2_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_2_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_2_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_RDCH_2 - DMA Read DAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_2_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_2_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_2_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_2_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_2_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_2_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_RDCH_2 - DMA Read DAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_2_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_2_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_2_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_2_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_2_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_2_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_RDCH_2 - DMA Read Linked List Pointer Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_2_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_2_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_2_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_2_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_2_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_2_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_RDCH_2 - DMA Read Linked List Pointer High Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_2_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_2_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_2_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_2_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_2_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_2_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_WRCH_3 - DMA Write Channel Control 1 Register. */
/*! @{ */

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CB_MASK (0x1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CB_SHIFT (0U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_TCB_MASK (0x2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_TCB_SHIFT (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_TCB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_TCB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_TCB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_TCB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LLP_MASK (0x4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LLP_SHIFT (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LLP_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LLP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LLP_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LLP_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LIE_MASK (0x8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LIE_SHIFT (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_RIE_MASK (0x10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_RIE_SHIFT (4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_RIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_RIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_RIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_RIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CS_MASK (0x60U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CS_SHIFT (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CS_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED0_MASK (0x80U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED0_SHIFT (7U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED0_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED0_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED0_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CCS_MASK (0x100U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CCS_SHIFT (8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CCS_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CCS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CCS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_CCS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LLE_MASK (0x200U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LLE_SHIFT (9U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LLE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LLE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_LLE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED1_MASK (0xC00U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED1_SHIFT (10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED1_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED1_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED1_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_FUNC_NUM_MASK (0x1F000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_FUNC_NUM_SHIFT (12U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_FUNC_NUM_WIDTH (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_FUNC_NUM_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_FUNC_NUM_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_MEM_TYPE_MASK (0x400000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_MEM_TYPE_SHIFT (22U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_MEM_TYPE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_MEM_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_MEM_TYPE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_MEM_TYPE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_NS_DST_MASK (0x800000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_NS_DST_SHIFT (23U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_NS_DST_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_NS_DST(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_NS_DST_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_NS_DST_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_NS_SRC_MASK (0x1000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_NS_SRC_SHIFT (24U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_NS_SRC_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_NS_SRC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_NS_SRC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_NS_SRC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RO_MASK (0x2000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RO_SHIFT (25U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RO_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RO(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RO_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RO_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED5_MASK (0x4000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED5_SHIFT (26U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED5_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED5_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED5_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_TC_MASK (0x38000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_TC_SHIFT (27U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_TC_WIDTH (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_TC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_TC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_AT_MASK (0xC0000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_AT_SHIFT (30U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_AT_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_AT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_AT_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_AT_MASK)
/*! @} */

/*! @name DMA_TRANSFER_SIZE_OFF_WRCH_3 - DMA Write Transfer Size Register. */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_3_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_3_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_3_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_3_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_3_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_3_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_WRCH_3 - DMA Write SAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_3_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_3_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_3_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_3_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_3_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_3_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_WRCH_3 - DMA Write SAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_3_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_3_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_3_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_3_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_3_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_3_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_WRCH_3 - DMA Write DAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_3_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_3_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_3_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_3_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_3_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_3_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_WRCH_3 - DMA Write DAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_3_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_3_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_3_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_3_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_3_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_3_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_WRCH_3 - DMA Write Linked List Pointer Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_3_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_3_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_3_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_3_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_3_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_3_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_WRCH_3 - DMA Write Linked List Pointer High Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_3_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_3_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_3_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_3_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_3_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_3_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_RDCH_3 - DMA Read Channel Control 1 Register. */
/*! @{ */

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CB_MASK (0x1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CB_SHIFT (0U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_TCB_MASK (0x2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_TCB_SHIFT (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_TCB_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_TCB(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_TCB_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_TCB_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LLP_MASK (0x4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LLP_SHIFT (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LLP_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LLP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LLP_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LLP_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LIE_MASK (0x8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LIE_SHIFT (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_RIE_MASK (0x10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_RIE_SHIFT (4U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_RIE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_RIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_RIE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_RIE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CS_MASK (0x60U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CS_SHIFT (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CS_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED0_MASK (0x80U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED0_SHIFT (7U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED0_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED0_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED0_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CCS_MASK (0x100U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CCS_SHIFT (8U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CCS_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CCS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CCS_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_CCS_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LLE_MASK (0x200U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LLE_SHIFT (9U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LLE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LLE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LLE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_LLE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED1_MASK (0xC00U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED1_SHIFT (10U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED1_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED1_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED1_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_FUNC_NUM_MASK (0x1F000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_FUNC_NUM_SHIFT (12U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_FUNC_NUM_WIDTH (5U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_FUNC_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_FUNC_NUM_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_FUNC_NUM_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_MEM_TYPE_MASK (0x400000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_MEM_TYPE_SHIFT (22U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_MEM_TYPE_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_MEM_TYPE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_MEM_TYPE_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_MEM_TYPE_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_NS_DST_MASK (0x800000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_NS_DST_SHIFT (23U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_NS_DST_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_NS_DST(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_NS_DST_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_NS_DST_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_NS_SRC_MASK (0x1000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_NS_SRC_SHIFT (24U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_NS_SRC_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_NS_SRC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_NS_SRC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_NS_SRC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RO_MASK (0x2000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RO_SHIFT (25U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RO_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RO(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RO_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RO_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED5_MASK (0x4000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED5_SHIFT (26U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED5_WIDTH (1U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED5_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED5_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_TC_MASK (0x38000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_TC_SHIFT (27U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_TC_WIDTH (3U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_TC(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_TC_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_TC_MASK)

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_AT_MASK (0xC0000000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_AT_SHIFT (30U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_AT_WIDTH (2U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_AT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_AT_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_AT_MASK)
/*! @} */

/*! @name DMA_TRANSFER_SIZE_OFF_RDCH_3 - DMA Read Transfer Size Register. */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_3_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_3_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_3_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_3_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_3_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_3_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_RDCH_3 - DMA Read SAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_3_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_3_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_3_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_3_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_3_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_3_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_RDCH_3 - DMA Read SAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_3_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_3_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_3_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_3_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_3_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_3_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_RDCH_3 - DMA Read DAR Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_3_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_3_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_3_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_3_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_3_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_3_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_RDCH_3 - DMA Read DAR High Register. */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_3_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_3_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_3_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_3_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_3_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_3_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_RDCH_3 - DMA Read Linked List Pointer Low Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_3_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_3_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_3_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_3_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_3_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_3_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_RDCH_3 - DMA Read Linked List Pointer High Register. */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_3_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_3_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_3_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_3_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_3_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_3_LLP_HIGH_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group PCIE_DMA_Register_Masks */

/*!
 * @}
 */ /* end of group PCIE_DMA_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_PCIE_DMA_H_) */
