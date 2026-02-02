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
 * @file S32R45_PCIE_DMA.h
 * @version 2.4
 * @date 2022-02-14
 * @brief Peripheral Access Layer for S32R45_PCIE_DMA
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
#if !defined(S32R45_PCIE_DMA_H_)  /* Check if memory map has not been already included */
#define S32R45_PCIE_DMA_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- PCIE_DMA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PCIE_DMA_Peripheral_Access_Layer PCIE_DMA Peripheral Access Layer
 * @{
 */

/** PCIE_DMA - Register Layout Typedef */
typedef struct {
  __IO uint32_t DMA_CTRL_DATA_ARB_PRIOR_OFF;       /**< DMA arbitration scheme for TRGT1 interface, offset: 0x0 */
  uint8_t RESERVED_0[4];
  __IO uint32_t DMA_CTRL_OFF;                      /**< DMA number of channels, offset: 0x8 */
  __IO uint32_t DMA_WRITE_ENGINE_EN_OFF;           /**< DMA write engine enable, offset: 0xC */
  __IO uint32_t DMA_WRITE_DOORBELL_OFF;            /**< DMA write doorbell, offset: 0x10 */
  uint8_t RESERVED_1[4];
  __IO uint32_t DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF; /**< DMA write engine channel arbitration weight low, offset: 0x18 */
  __IO uint32_t DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF; /**< DMA write engine channel arbitration weight high, offset: 0x1C */
  uint8_t RESERVED_2[12];
  __IO uint32_t DMA_READ_ENGINE_EN_OFF;            /**< DMA read engine enable, offset: 0x2C */
  __IO uint32_t DMA_READ_DOORBELL_OFF;             /**< DMA read doorbell, offset: 0x30 */
  uint8_t RESERVED_3[4];
  __IO uint32_t DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF; /**< DMA read engine channel arbitration weight low, offset: 0x38 */
  __IO uint32_t DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF; /**< DMA read engine channel arbitration weight high, offset: 0x3C */
  uint8_t RESERVED_4[12];
  __IO uint32_t DMA_WRITE_INT_STATUS_OFF;          /**< DMA write interrupt status, offset: 0x4C */
  uint8_t RESERVED_5[4];
  __IO uint32_t DMA_WRITE_INT_MASK_OFF;            /**< DMA write interrupt mask, offset: 0x54 */
  __IO uint32_t DMA_WRITE_INT_CLEAR_OFF;           /**< DMA write interrupt clear, offset: 0x58 */
  __I  uint32_t DMA_WRITE_ERR_STATUS_OFF;          /**< DMA write error status, offset: 0x5C */
  __IO uint32_t DMA_WRITE_DONE_IMWR_LOW_OFF;       /**< DMA write done IMWr address low, offset: 0x60 */
  __IO uint32_t DMA_WRITE_DONE_IMWR_HIGH_OFF;      /**< DMA write done IMWr interrupt address high, offset: 0x64 */
  __IO uint32_t DMA_WRITE_ABORT_IMWR_LOW_OFF;      /**< DMA write abort IMWr address low, offset: 0x68 */
  __IO uint32_t DMA_WRITE_ABORT_IMWR_HIGH_OFF;     /**< DMA write abort IMWr address high, offset: 0x6C */
  __IO uint32_t DMA_WRITE_CH01_IMWR_DATA_OFF;      /**< DMA write channel 0 and 1 IMWr data, offset: 0x70 */
  __IO uint32_t DMA_WRITE_CH23_IMWR_DATA_OFF;      /**< DMA write channel 2 and 3 IMWr data, offset: 0x74 */
  __IO uint32_t DMA_WRITE_CH45_IMWR_DATA_OFF;      /**< DMA write channel 4 and 5 IMWr data, offset: 0x78 */
  __IO uint32_t DMA_WRITE_CH67_IMWR_DATA_OFF;      /**< DMA write channel 6 and 7 IMWr data, offset: 0x7C */
  uint8_t RESERVED_6[16];
  __IO uint32_t DMA_WRITE_LINKED_LIST_ERR_EN_OFF;  /**< DMA write linked list error enable, offset: 0x90 */
  uint8_t RESERVED_7[12];
  __IO uint32_t DMA_READ_INT_STATUS_OFF;           /**< DMA read interrupt status, offset: 0xA0 */
  uint8_t RESERVED_8[4];
  __IO uint32_t DMA_READ_INT_MASK_OFF;             /**< DMA read interrupt mask, offset: 0xA8 */
  __O  uint32_t DMA_READ_INT_CLEAR_OFF;            /**< DMA read interrupt clear, offset: 0xAC */
  uint8_t RESERVED_9[4];
  __I  uint32_t DMA_READ_ERR_STATUS_LOW_OFF;       /**< DMA read error status low, offset: 0xB4 */
  __I  uint32_t DMA_READ_ERR_STATUS_HIGH_OFF;      /**< DMA read error status high, offset: 0xB8 */
  uint8_t RESERVED_10[8];
  __IO uint32_t DMA_READ_LINKED_LIST_ERR_EN_OFF;   /**< DMA read linked list error enable, offset: 0xC4 */
  uint8_t RESERVED_11[4];
  __IO uint32_t DMA_READ_DONE_IMWR_LOW_OFF;        /**< DMA read done IMWr address low, offset: 0xCC */
  __IO uint32_t DMA_READ_DONE_IMWR_HIGH_OFF;       /**< DMA read done IMWr address high, offset: 0xD0 */
  __IO uint32_t DMA_READ_ABORT_IMWR_LOW_OFF;       /**< DMA Read Abort IMWr Address Low, offset: 0xD4 */
  __IO uint32_t DMA_READ_ABORT_IMWR_HIGH_OFF;      /**< DMA Read Abort IMWr Address High, offset: 0xD8 */
  __IO uint32_t DMA_READ_CH01_IMWR_DATA_OFF;       /**< DMA Read Channel 0 And 1 IMWr Data, offset: 0xDC */
  __IO uint32_t DMA_READ_CH23_IMWR_DATA_OFF;       /**< DMA Read Channel 2 And 3 IMWr Data, offset: 0xE0 */
  __IO uint32_t DMA_READ_CH45_IMWR_DATA_OFF;       /**< DMA read channel 4 and 5 IMWr data, offset: 0xE4 */
  __IO uint32_t DMA_READ_CH67_IMWR_DATA_OFF;       /**< DMA read channel 6 and 7 IMWr data, offset: 0xE8 */
  uint8_t RESERVED_12[28];
  __I  uint32_t DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF; /**< DMA write engine handshake counter channel 0/1/2/3, offset: 0x108 */
  __I  uint32_t DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF; /**< DMA write engine handshake counter channel 4/5/6/7, offset: 0x10C */
  uint8_t RESERVED_13[8];
  __I  uint32_t DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF; /**< DMA read engine handshake counter channel 0/1/2/3, offset: 0x118 */
  __I  uint32_t DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF; /**< DMA read engine handshake counter channel 4/5/6/7, offset: 0x11C */
  uint8_t RESERVED_14[224];
  __IO uint32_t DMA_CH_CONTROL1_OFF_WRCH_0;        /**< DMA write channel control 1, offset: 0x200 */
  uint8_t RESERVED_15[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_WRCH_0;      /**< DMA write transfer size, offset: 0x208 */
  __IO uint32_t DMA_SAR_LOW_OFF_WRCH_0;            /**< DMA write SAR low, offset: 0x20C */
  __IO uint32_t DMA_SAR_HIGH_OFF_WRCH_0;           /**< DMA write SAR high, offset: 0x210 */
  __IO uint32_t DMA_DAR_LOW_OFF_WRCH_0;            /**< DMA write DAR low, offset: 0x214 */
  __IO uint32_t DMA_DAR_HIGH_OFF_WRCH_0;           /**< DMA write DAR high, offset: 0x218 */
  __IO uint32_t DMA_LLP_LOW_OFF_WRCH_0;            /**< DMA write linked list pointer low, offset: 0x21C */
  __IO uint32_t DMA_LLP_HIGH_OFF_WRCH_0;           /**< DMA write linked list pointer high, offset: 0x220 */
  uint8_t RESERVED_16[220];
  __IO uint32_t DMA_CH_CONTROL1_OFF_RDCH_0;        /**< DMA read channel control 1, offset: 0x300 */
  uint8_t RESERVED_17[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_RDCH_0;      /**< DMA read transfer size, offset: 0x308 */
  __IO uint32_t DMA_SAR_LOW_OFF_RDCH_0;            /**< DMA read SAR low, offset: 0x30C */
  __IO uint32_t DMA_SAR_HIGH_OFF_RDCH_0;           /**< DMA read SAR high, offset: 0x310 */
  __IO uint32_t DMA_DAR_LOW_OFF_RDCH_0;            /**< DMA read DAR low, offset: 0x314 */
  __IO uint32_t DMA_DAR_HIGH_OFF_RDCH_0;           /**< DMA read DAR high, offset: 0x318 */
  __IO uint32_t DMA_LLP_LOW_OFF_RDCH_0;            /**< DMA read linked list pointer low, offset: 0x31C */
  uint8_t RESERVED_18[224];
  __IO uint32_t DMA_CH_CONTROL1_OFF_WRCH_1;        /**< DMA write channel control 1, offset: 0x400 */
  uint8_t RESERVED_19[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_WRCH_1;      /**< DMA write transfer size, offset: 0x408 */
  __IO uint32_t DMA_SAR_LOW_OFF_WRCH_1;            /**< DMA write SAR low, offset: 0x40C */
  __IO uint32_t DMA_SAR_HIGH_OFF_WRCH_1;           /**< DMA write SAR high, offset: 0x410 */
  __IO uint32_t DMA_DAR_LOW_OFF_WRCH_1;            /**< DMA write DAR low, offset: 0x414 */
  __IO uint32_t DMA_DAR_HIGH_OFF_WRCH_1;           /**< DMA write DAR high, offset: 0x418 */
  __IO uint32_t DMA_LLP_LOW_OFF_WRCH_1;            /**< DMA write linked list pointer low, offset: 0x41C */
  __IO uint32_t DMA_LLP_HIGH_OFF_WRCH_1;           /**< DMA write linked list pointer high, offset: 0x420 */
  uint8_t RESERVED_20[220];
  __IO uint32_t DMA_CH_CONTROL1_OFF_RDCH_1;        /**< DMA read channel control 1, offset: 0x500 */
  uint8_t RESERVED_21[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_RDCH_1;      /**< DMA read transfer size, offset: 0x508 */
  __IO uint32_t DMA_SAR_LOW_OFF_RDCH_1;            /**< DMA read SAR low, offset: 0x50C */
  __IO uint32_t DMA_SAR_HIGH_OFF_RDCH_1;           /**< DMA read SAR high, offset: 0x510 */
  __IO uint32_t DMA_DAR_LOW_OFF_RDCH_1;            /**< DMA read DAR low, offset: 0x514 */
  __IO uint32_t DMA_DAR_HIGH_OFF_RDCH_1;           /**< DMA read DAR high, offset: 0x518 */
  __IO uint32_t DMA_LLP_LOW_OFF_RDCH_1;            /**< DMA read linked list pointer low, offset: 0x51C */
  uint8_t RESERVED_22[224];
  __IO uint32_t DMA_CH_CONTROL1_OFF_WRCH_2;        /**< DMA write channel control 1, offset: 0x600 */
  uint8_t RESERVED_23[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_WRCH_2;      /**< DMA write transfer size, offset: 0x608 */
  __IO uint32_t DMA_SAR_LOW_OFF_WRCH_2;            /**< DMA write SAR low, offset: 0x60C */
  __IO uint32_t DMA_SAR_HIGH_OFF_WRCH_2;           /**< DMA write SAR high, offset: 0x610 */
  __IO uint32_t DMA_DAR_LOW_OFF_WRCH_2;            /**< DMA write DAR low, offset: 0x614 */
  __IO uint32_t DMA_DAR_HIGH_OFF_WRCH_2;           /**< DMA write DAR high, offset: 0x618 */
  __IO uint32_t DMA_LLP_LOW_OFF_WRCH_2;            /**< DMA write linked list pointer low, offset: 0x61C */
  __IO uint32_t DMA_LLP_HIGH_OFF_WRCH_2;           /**< DMA write linked list pointer high, offset: 0x620 */
  uint8_t RESERVED_24[28];
  __IO uint32_t DMA_LLP_HIGH_OFF_RDCH_0;           /**< DMA read linked list pointer high, offset: 0x640 */
  uint8_t RESERVED_25[188];
  __IO uint32_t DMA_CH_CONTROL1_OFF_RDCH_2;        /**< DMA read channel control 1, offset: 0x700 */
  uint8_t RESERVED_26[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_RDCH_2;      /**< DMA read transfer size, offset: 0x708 */
  __IO uint32_t DMA_SAR_LOW_OFF_RDCH_2;            /**< DMA read SAR low, offset: 0x70C */
  __IO uint32_t DMA_SAR_HIGH_OFF_RDCH_2;           /**< DMA read SAR high, offset: 0x710 */
  __IO uint32_t DMA_DAR_LOW_OFF_RDCH_2;            /**< DMA read DAR low, offset: 0x714 */
  __IO uint32_t DMA_DAR_HIGH_OFF_RDCH_2;           /**< DMA read DAR high, offset: 0x718 */
  __IO uint32_t DMA_LLP_LOW_OFF_RDCH_2;            /**< DMA read linked list pointer low, offset: 0x71C */
  uint8_t RESERVED_27[224];
  __IO uint32_t DMA_CH_CONTROL1_OFF_WRCH_3;        /**< DMA write channel control 1, offset: 0x800 */
  uint8_t RESERVED_28[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_WRCH_3;      /**< DMA write transfer size, offset: 0x808 */
  __IO uint32_t DMA_SAR_LOW_OFF_WRCH_3;            /**< DMA write SAR low, offset: 0x80C */
  __IO uint32_t DMA_SAR_HIGH_OFF_WRCH_3;           /**< DMA write SAR high, offset: 0x810 */
  __IO uint32_t DMA_DAR_LOW_OFF_WRCH_3;            /**< DMA write DAR low, offset: 0x814 */
  __IO uint32_t DMA_DAR_HIGH_OFF_WRCH_3;           /**< DMA write DAR high, offset: 0x818 */
  __IO uint32_t DMA_LLP_LOW_OFF_WRCH_3;            /**< DMA write linked list pointer low, offset: 0x81C */
  __IO uint32_t DMA_LLP_HIGH_OFF_WRCH_3;           /**< DMA write linked list pointer high, offset: 0x820 */
  uint8_t RESERVED_29[28];
  __IO uint32_t DMA_LLP_HIGH_OFF_RDCH_1;           /**< DMA read linked list pointer high, offset: 0x840 */
  uint8_t RESERVED_30[188];
  __IO uint32_t DMA_CH_CONTROL1_OFF_RDCH_3;        /**< DMA read channel control 1, offset: 0x900 */
  uint8_t RESERVED_31[4];
  __IO uint32_t DMA_TRANSFER_SIZE_OFF_RDCH_3;      /**< DMA read transfer size, offset: 0x908 */
  __IO uint32_t DMA_SAR_LOW_OFF_RDCH_3;            /**< DMA read SAR low, offset: 0x90C */
  __IO uint32_t DMA_SAR_HIGH_OFF_RDCH_3;           /**< DMA read SAR high, offset: 0x910 */
  __IO uint32_t DMA_DAR_LOW_OFF_RDCH_3;            /**< DMA read DAR low, offset: 0x914 */
  __IO uint32_t DMA_DAR_HIGH_OFF_RDCH_3;           /**< DMA read DAR high, offset: 0x918 */
  __IO uint32_t DMA_LLP_LOW_OFF_RDCH_3;            /**< DMA read linked list pointer low, offset: 0x91C */
  uint8_t RESERVED_32[288];
  __IO uint32_t DMA_LLP_HIGH_OFF_RDCH_2;           /**< DMA read linked list pointer high, offset: 0xA40 */
  uint8_t RESERVED_33[508];
  __IO uint32_t DMA_LLP_HIGH_OFF_RDCH_3;           /**< DMA read linked list pointer high, offset: 0xC40 */
} PCIE_DMA_Type, *PCIE_DMA_MemMapPtr;

/** Number of instances of the PCIE_DMA module. */
#define PCIE_DMA_INSTANCE_COUNT                  (1u)

/* PCIE_DMA - Peripheral instance base addresses */
/** Peripheral PCIE_DMA base address */
#define IP_PCIE_DMA_BASE                         (0x70000u)
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

/*! @name DMA_CTRL_DATA_ARB_PRIOR_OFF - DMA arbitration scheme for TRGT1 interface */
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
/*! @} */

/*! @name DMA_CTRL_OFF - DMA number of channels */
/*! @{ */

#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_WR_CHAN_MASK (0xFU)
#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_WR_CHAN_SHIFT (0U)
#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_WR_CHAN_WIDTH (4U)
#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_WR_CHAN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_WR_CHAN_SHIFT)) & PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_WR_CHAN_MASK)

#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_RD_CHAN_MASK (0xF0000U)
#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_RD_CHAN_SHIFT (16U)
#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_RD_CHAN_WIDTH (4U)
#define PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_RD_CHAN(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_RD_CHAN_SHIFT)) & PCIE_DMA_DMA_CTRL_OFF_NUM_DMA_RD_CHAN_MASK)

#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_WR_MASK (0x1000000U)
#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_WR_SHIFT (24U)
#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_WR_WIDTH (1U)
#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_WR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_WR_SHIFT)) & PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_WR_MASK)

#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_RD_MASK (0x2000000U)
#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_RD_SHIFT (25U)
#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_RD_WIDTH (1U)
#define PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_RD(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_RD_SHIFT)) & PCIE_DMA_DMA_CTRL_OFF_DIS_C2W_CACHE_RD_MASK)
/*! @} */

/*! @name DMA_WRITE_ENGINE_EN_OFF - DMA write engine enable */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_MASK (0x1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_EN_OFF_DMA_WRITE_ENGINE_MASK)

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
/*! @} */

/*! @name DMA_WRITE_DOORBELL_OFF - DMA write doorbell */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_DOORBELL_NUM_MASK (0x7U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_DOORBELL_NUM_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_DOORBELL_NUM_WIDTH (3U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_DOORBELL_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_DOORBELL_NUM_SHIFT)) & PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_DOORBELL_NUM_MASK)

#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_STOP_MASK (0x80000000U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_STOP_SHIFT (31U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_STOP_WIDTH (1U)
#define PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_STOP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_STOP_SHIFT)) & PCIE_DMA_DMA_WRITE_DOORBELL_OFF_WR_STOP_MASK)
/*! @} */

/*! @name DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF - DMA write engine channel arbitration weight low */
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
/*! @} */

/*! @name DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF - DMA write engine channel arbitration weight high */
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
/*! @} */

/*! @name DMA_READ_ENGINE_EN_OFF - DMA read engine enable */
/*! @{ */

#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_MASK (0x1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_WIDTH (1U)
#define PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_EN_OFF_DMA_READ_ENGINE_MASK)

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
/*! @} */

/*! @name DMA_READ_DOORBELL_OFF - DMA read doorbell */
/*! @{ */

#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_DOORBELL_NUM_MASK (0x7U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_DOORBELL_NUM_SHIFT (0U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_DOORBELL_NUM_WIDTH (3U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_DOORBELL_NUM(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_DOORBELL_NUM_SHIFT)) & PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_DOORBELL_NUM_MASK)

#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_STOP_MASK (0x80000000U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_STOP_SHIFT (31U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_STOP_WIDTH (1U)
#define PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_STOP(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_STOP_SHIFT)) & PCIE_DMA_DMA_READ_DOORBELL_OFF_RD_STOP_MASK)
/*! @} */

/*! @name DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF - DMA read engine channel arbitration weight low */
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
/*! @} */

/*! @name DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF - DMA read engine channel arbitration weight high */
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
/*! @} */

/*! @name DMA_WRITE_INT_STATUS_OFF - DMA write interrupt status */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_DONE_INT_STATUS_MASK (0xFFU)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_DONE_INT_STATUS_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_DONE_INT_STATUS_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_DONE_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_DONE_INT_STATUS_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_DONE_INT_STATUS_MASK)

#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_ABORT_INT_STATUS_MASK (0xFF0000U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_ABORT_INT_STATUS_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_ABORT_INT_STATUS_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_ABORT_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_ABORT_INT_STATUS_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_STATUS_OFF_WR_ABORT_INT_STATUS_MASK)
/*! @} */

/*! @name DMA_WRITE_INT_MASK_OFF - DMA write interrupt mask */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_DONE_INT_MASK_MASK (0xFU)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_DONE_INT_MASK_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_DONE_INT_MASK_WIDTH (4U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_DONE_INT_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_DONE_INT_MASK_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_DONE_INT_MASK_MASK)

#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_ABORT_INT_MASK_MASK (0xF0000U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_ABORT_INT_MASK_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_ABORT_INT_MASK_WIDTH (4U)
#define PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_ABORT_INT_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_ABORT_INT_MASK_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_MASK_OFF_WR_ABORT_INT_MASK_MASK)
/*! @} */

/*! @name DMA_WRITE_INT_CLEAR_OFF - DMA write interrupt clear */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_DONE_INT_CLEAR_MASK (0xFU)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_DONE_INT_CLEAR_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_DONE_INT_CLEAR_WIDTH (4U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_DONE_INT_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_DONE_INT_CLEAR_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_DONE_INT_CLEAR_MASK)

#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_ABORT_INT_CLEAR_MASK (0xF0000U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_ABORT_INT_CLEAR_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_ABORT_INT_CLEAR_WIDTH (4U)
#define PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_ABORT_INT_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_ABORT_INT_CLEAR_SHIFT)) & PCIE_DMA_DMA_WRITE_INT_CLEAR_OFF_WR_ABORT_INT_CLEAR_MASK)
/*! @} */

/*! @name DMA_WRITE_ERR_STATUS_OFF - DMA write error status */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_APP_READ_ERR_DETECT_MASK (0xFFU)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_APP_READ_ERR_DETECT_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_APP_READ_ERR_DETECT_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_APP_READ_ERR_DETECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_APP_READ_ERR_DETECT_SHIFT)) & PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_APP_READ_ERR_DETECT_MASK)

#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_LINKLIST_ELEMENT_FETCH_ERR_DETECT_MASK (0xFF0000U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_LINKLIST_ELEMENT_FETCH_ERR_DETECT_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_LINKLIST_ELEMENT_FETCH_ERR_DETECT_WIDTH (8U)
#define PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_LINKLIST_ELEMENT_FETCH_ERR_DETECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_LINKLIST_ELEMENT_FETCH_ERR_DETECT_SHIFT)) & PCIE_DMA_DMA_WRITE_ERR_STATUS_OFF_LINKLIST_ELEMENT_FETCH_ERR_DETECT_MASK)
/*! @} */

/*! @name DMA_WRITE_DONE_IMWR_LOW_OFF - DMA write done IMWr address low */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_DONE_IMWR_LOW_OFF_DMA_WRITE_DONE_LOW_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_WRITE_DONE_IMWR_LOW_OFF_DMA_WRITE_DONE_LOW_REG_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_DONE_IMWR_LOW_OFF_DMA_WRITE_DONE_LOW_REG_WIDTH (32U)
#define PCIE_DMA_DMA_WRITE_DONE_IMWR_LOW_OFF_DMA_WRITE_DONE_LOW_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_DONE_IMWR_LOW_OFF_DMA_WRITE_DONE_LOW_REG_SHIFT)) & PCIE_DMA_DMA_WRITE_DONE_IMWR_LOW_OFF_DMA_WRITE_DONE_LOW_REG_MASK)
/*! @} */

/*! @name DMA_WRITE_DONE_IMWR_HIGH_OFF - DMA write done IMWr interrupt address high */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_DONE_IMWR_HIGH_OFF_DMA_WRITE_DONE_HIGH_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_WRITE_DONE_IMWR_HIGH_OFF_DMA_WRITE_DONE_HIGH_REG_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_DONE_IMWR_HIGH_OFF_DMA_WRITE_DONE_HIGH_REG_WIDTH (32U)
#define PCIE_DMA_DMA_WRITE_DONE_IMWR_HIGH_OFF_DMA_WRITE_DONE_HIGH_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_DONE_IMWR_HIGH_OFF_DMA_WRITE_DONE_HIGH_REG_SHIFT)) & PCIE_DMA_DMA_WRITE_DONE_IMWR_HIGH_OFF_DMA_WRITE_DONE_HIGH_REG_MASK)
/*! @} */

/*! @name DMA_WRITE_ABORT_IMWR_LOW_OFF - DMA write abort IMWr address low */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_LOW_OFF_DMA_WRITE_ABORT_LOW_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_LOW_OFF_DMA_WRITE_ABORT_LOW_REG_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_LOW_OFF_DMA_WRITE_ABORT_LOW_REG_WIDTH (32U)
#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_LOW_OFF_DMA_WRITE_ABORT_LOW_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ABORT_IMWR_LOW_OFF_DMA_WRITE_ABORT_LOW_REG_SHIFT)) & PCIE_DMA_DMA_WRITE_ABORT_IMWR_LOW_OFF_DMA_WRITE_ABORT_LOW_REG_MASK)
/*! @} */

/*! @name DMA_WRITE_ABORT_IMWR_HIGH_OFF - DMA write abort IMWr address high */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_HIGH_OFF_DMA_WRITE_ABORT_HIGH_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_HIGH_OFF_DMA_WRITE_ABORT_HIGH_REG_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_HIGH_OFF_DMA_WRITE_ABORT_HIGH_REG_WIDTH (32U)
#define PCIE_DMA_DMA_WRITE_ABORT_IMWR_HIGH_OFF_DMA_WRITE_ABORT_HIGH_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ABORT_IMWR_HIGH_OFF_DMA_WRITE_ABORT_HIGH_REG_SHIFT)) & PCIE_DMA_DMA_WRITE_ABORT_IMWR_HIGH_OFF_DMA_WRITE_ABORT_HIGH_REG_MASK)
/*! @} */

/*! @name DMA_WRITE_CH01_IMWR_DATA_OFF - DMA write channel 0 and 1 IMWr data */
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

/*! @name DMA_WRITE_CH23_IMWR_DATA_OFF - DMA write channel 2 and 3 IMWr data */
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

/*! @name DMA_WRITE_CH45_IMWR_DATA_OFF - DMA write channel 4 and 5 IMWr data */
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

/*! @name DMA_WRITE_CH67_IMWR_DATA_OFF - DMA write channel 6 and 7 IMWr data */
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

/*! @name DMA_WRITE_LINKED_LIST_ERR_EN_OFF - DMA write linked list error enable */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLRAIE_MASK (0xFU)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLRAIE_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLRAIE_WIDTH (4U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLRAIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLRAIE_SHIFT)) & PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLRAIE_MASK)

#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLLAIE_MASK (0xF0000U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLLAIE_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLLAIE_WIDTH (4U)
#define PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLLAIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLLAIE_SHIFT)) & PCIE_DMA_DMA_WRITE_LINKED_LIST_ERR_EN_OFF_WR_CHANNEL_LLLAIE_MASK)
/*! @} */

/*! @name DMA_READ_INT_STATUS_OFF - DMA read interrupt status */
/*! @{ */

#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_DONE_INT_STATUS_MASK (0xFFU)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_DONE_INT_STATUS_SHIFT (0U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_DONE_INT_STATUS_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_DONE_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_DONE_INT_STATUS_SHIFT)) & PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_DONE_INT_STATUS_MASK)

#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_ABORT_INT_STATUS_MASK (0xFF0000U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_ABORT_INT_STATUS_SHIFT (16U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_ABORT_INT_STATUS_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_ABORT_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_ABORT_INT_STATUS_SHIFT)) & PCIE_DMA_DMA_READ_INT_STATUS_OFF_RD_ABORT_INT_STATUS_MASK)
/*! @} */

/*! @name DMA_READ_INT_MASK_OFF - DMA read interrupt mask */
/*! @{ */

#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_DONE_INT_MASK_MASK (0xFU)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_DONE_INT_MASK_SHIFT (0U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_DONE_INT_MASK_WIDTH (4U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_DONE_INT_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_DONE_INT_MASK_SHIFT)) & PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_DONE_INT_MASK_MASK)

#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_ABORT_INT_MASK_MASK (0xF0000U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_ABORT_INT_MASK_SHIFT (16U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_ABORT_INT_MASK_WIDTH (4U)
#define PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_ABORT_INT_MASK(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_ABORT_INT_MASK_SHIFT)) & PCIE_DMA_DMA_READ_INT_MASK_OFF_RD_ABORT_INT_MASK_MASK)
/*! @} */

/*! @name DMA_READ_INT_CLEAR_OFF - DMA read interrupt clear */
/*! @{ */

#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_DONE_INT_CLEAR_MASK (0xFFU)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_DONE_INT_CLEAR_SHIFT (0U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_DONE_INT_CLEAR_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_DONE_INT_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_DONE_INT_CLEAR_SHIFT)) & PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_DONE_INT_CLEAR_MASK)

#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_ABORT_INT_CLEAR_MASK (0xFF0000U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_ABORT_INT_CLEAR_SHIFT (16U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_ABORT_INT_CLEAR_WIDTH (8U)
#define PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_ABORT_INT_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_ABORT_INT_CLEAR_SHIFT)) & PCIE_DMA_DMA_READ_INT_CLEAR_OFF_RD_ABORT_INT_CLEAR_MASK)
/*! @} */

/*! @name DMA_READ_ERR_STATUS_LOW_OFF - DMA read error status low */
/*! @{ */

#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_APP_WR_ERR_DETECT_MASK (0xFFU)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_APP_WR_ERR_DETECT_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_APP_WR_ERR_DETECT_WIDTH (8U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_APP_WR_ERR_DETECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_APP_WR_ERR_DETECT_SHIFT)) & PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_APP_WR_ERR_DETECT_MASK)

#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_LINK_LIST_ELEMENT_FETCH_ERR_DETECT_MASK (0xFF0000U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_LINK_LIST_ELEMENT_FETCH_ERR_DETECT_SHIFT (16U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_LINK_LIST_ELEMENT_FETCH_ERR_DETECT_WIDTH (8U)
#define PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_LINK_LIST_ELEMENT_FETCH_ERR_DETECT(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_LINK_LIST_ELEMENT_FETCH_ERR_DETECT_SHIFT)) & PCIE_DMA_DMA_READ_ERR_STATUS_LOW_OFF_LINK_LIST_ELEMENT_FETCH_ERR_DETECT_MASK)
/*! @} */

/*! @name DMA_READ_ERR_STATUS_HIGH_OFF - DMA read error status high */
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

/*! @name DMA_READ_LINKED_LIST_ERR_EN_OFF - DMA read linked list error enable */
/*! @{ */

#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLRAIE_MASK (0xFU)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLRAIE_SHIFT (0U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLRAIE_WIDTH (4U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLRAIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLRAIE_SHIFT)) & PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLRAIE_MASK)

#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLLAIE_MASK (0xF0000U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLLAIE_SHIFT (16U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLLAIE_WIDTH (4U)
#define PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLLAIE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLLAIE_SHIFT)) & PCIE_DMA_DMA_READ_LINKED_LIST_ERR_EN_OFF_RD_CHANNEL_LLLAIE_MASK)
/*! @} */

/*! @name DMA_READ_DONE_IMWR_LOW_OFF - DMA read done IMWr address low */
/*! @{ */

#define PCIE_DMA_DMA_READ_DONE_IMWR_LOW_OFF_DMA_READ_DONE_LOW_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_READ_DONE_IMWR_LOW_OFF_DMA_READ_DONE_LOW_REG_SHIFT (0U)
#define PCIE_DMA_DMA_READ_DONE_IMWR_LOW_OFF_DMA_READ_DONE_LOW_REG_WIDTH (32U)
#define PCIE_DMA_DMA_READ_DONE_IMWR_LOW_OFF_DMA_READ_DONE_LOW_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_DONE_IMWR_LOW_OFF_DMA_READ_DONE_LOW_REG_SHIFT)) & PCIE_DMA_DMA_READ_DONE_IMWR_LOW_OFF_DMA_READ_DONE_LOW_REG_MASK)
/*! @} */

/*! @name DMA_READ_DONE_IMWR_HIGH_OFF - DMA read done IMWr address high */
/*! @{ */

#define PCIE_DMA_DMA_READ_DONE_IMWR_HIGH_OFF_DMA_READ_DONE_HIGH_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_READ_DONE_IMWR_HIGH_OFF_DMA_READ_DONE_HIGH_REG_SHIFT (0U)
#define PCIE_DMA_DMA_READ_DONE_IMWR_HIGH_OFF_DMA_READ_DONE_HIGH_REG_WIDTH (32U)
#define PCIE_DMA_DMA_READ_DONE_IMWR_HIGH_OFF_DMA_READ_DONE_HIGH_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_DONE_IMWR_HIGH_OFF_DMA_READ_DONE_HIGH_REG_SHIFT)) & PCIE_DMA_DMA_READ_DONE_IMWR_HIGH_OFF_DMA_READ_DONE_HIGH_REG_MASK)
/*! @} */

/*! @name DMA_READ_ABORT_IMWR_LOW_OFF - DMA Read Abort IMWr Address Low */
/*! @{ */

#define PCIE_DMA_DMA_READ_ABORT_IMWR_LOW_OFF_DMA_READ_ABORT_LOW_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_READ_ABORT_IMWR_LOW_OFF_DMA_READ_ABORT_LOW_REG_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ABORT_IMWR_LOW_OFF_DMA_READ_ABORT_LOW_REG_WIDTH (32U)
#define PCIE_DMA_DMA_READ_ABORT_IMWR_LOW_OFF_DMA_READ_ABORT_LOW_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ABORT_IMWR_LOW_OFF_DMA_READ_ABORT_LOW_REG_SHIFT)) & PCIE_DMA_DMA_READ_ABORT_IMWR_LOW_OFF_DMA_READ_ABORT_LOW_REG_MASK)
/*! @} */

/*! @name DMA_READ_ABORT_IMWR_HIGH_OFF - DMA Read Abort IMWr Address High */
/*! @{ */

#define PCIE_DMA_DMA_READ_ABORT_IMWR_HIGH_OFF_DMA_READ_ABORT_HIGH_REG_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_READ_ABORT_IMWR_HIGH_OFF_DMA_READ_ABORT_HIGH_REG_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ABORT_IMWR_HIGH_OFF_DMA_READ_ABORT_HIGH_REG_WIDTH (32U)
#define PCIE_DMA_DMA_READ_ABORT_IMWR_HIGH_OFF_DMA_READ_ABORT_HIGH_REG(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ABORT_IMWR_HIGH_OFF_DMA_READ_ABORT_HIGH_REG_SHIFT)) & PCIE_DMA_DMA_READ_ABORT_IMWR_HIGH_OFF_DMA_READ_ABORT_HIGH_REG_MASK)
/*! @} */

/*! @name DMA_READ_CH01_IMWR_DATA_OFF - DMA Read Channel 0 And 1 IMWr Data */
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

/*! @name DMA_READ_CH23_IMWR_DATA_OFF - DMA Read Channel 2 And 3 IMWr Data */
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

/*! @name DMA_READ_CH45_IMWR_DATA_OFF - DMA read channel 4 and 5 IMWr data */
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

/*! @name DMA_READ_CH67_IMWR_DATA_OFF - DMA read channel 6 and 7 IMWr data */
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

/*! @name DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF - DMA write engine handshake counter channel 0/1/2/3 */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH0_MASK (0x1FU)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH0_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH0_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH0_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH0_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH1_MASK (0x1F00U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH1_SHIFT (8U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH1_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH1_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH1_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH2_MASK (0x1F0000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH2_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH2_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH2_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH2_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH3_MASK (0x1F000000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH3_SHIFT (24U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH3_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH3_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH3_MASK)
/*! @} */

/*! @name DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF - DMA write engine handshake counter channel 4/5/6/7 */
/*! @{ */

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH4_MASK (0x1FU)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH4_SHIFT (0U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH4_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH4(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH4_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH4_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH5_MASK (0x1F00U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH5_SHIFT (8U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH5_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH5_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH5_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH6_MASK (0x1F0000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH6_SHIFT (16U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH6_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH6(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH6_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH6_MASK)

#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH7_MASK (0x1F000000U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH7_SHIFT (24U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH7_WIDTH (5U)
#define PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH7(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH7_SHIFT)) & PCIE_DMA_DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_WRITE_ENGINE_HSHAKE_CNT_CH7_MASK)
/*! @} */

/*! @name DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF - DMA read engine handshake counter channel 0/1/2/3 */
/*! @{ */

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH0_MASK (0x1FU)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH0_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH0_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH0(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH0_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH0_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH1_MASK (0x1F00U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH1_SHIFT (8U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH1_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH1(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH1_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH1_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH2_MASK (0x1F0000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH2_SHIFT (16U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH2_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH2_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH2_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH3_MASK (0x1F000000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH3_SHIFT (24U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH3_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH3(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH3_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_LOW_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH3_MASK)
/*! @} */

/*! @name DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF - DMA read engine handshake counter channel 4/5/6/7 */
/*! @{ */

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH4_MASK (0x1FU)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH4_SHIFT (0U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH4_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH4(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH4_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH4_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH5_MASK (0x1F00U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH5_SHIFT (8U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH5_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH5(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH5_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH5_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH6_MASK (0x1F0000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH6_SHIFT (16U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH6_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH6(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH6_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH6_MASK)

#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH7_MASK (0x1F000000U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH7_SHIFT (24U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH7_WIDTH (5U)
#define PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH7(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH7_SHIFT)) & PCIE_DMA_DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF_DMA_READ_ENGINE_HSHAKE_CNT_CH7_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_WRCH_0 - DMA write channel control 1 */
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

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED2_MASK (0x7E0000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED2_SHIFT (17U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED2_WIDTH (6U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED2_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_0_DMA_RESERVED2_MASK)

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

/*! @name DMA_TRANSFER_SIZE_OFF_WRCH_0 - DMA write transfer size */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_0_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_0_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_0_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_0_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_0_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_0_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_WRCH_0 - DMA write SAR low */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_0_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_0_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_0_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_0_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_0_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_0_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_WRCH_0 - DMA write SAR high */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_0_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_0_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_0_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_0_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_0_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_0_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_WRCH_0 - DMA write DAR low */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_0_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_0_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_0_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_0_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_0_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_0_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_WRCH_0 - DMA write DAR high */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_0_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_0_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_0_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_0_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_0_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_0_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_WRCH_0 - DMA write linked list pointer low */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_0_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_0_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_0_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_0_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_0_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_0_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_WRCH_0 - DMA write linked list pointer high */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_0_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_0_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_0_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_0_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_0_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_0_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_RDCH_0 - DMA read channel control 1 */
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

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED2_MASK (0x7E0000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED2_SHIFT (17U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED2_WIDTH (6U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED2_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_0_DMA_RESERVED2_MASK)

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

/*! @name DMA_TRANSFER_SIZE_OFF_RDCH_0 - DMA read transfer size */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_0_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_0_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_0_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_0_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_0_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_0_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_RDCH_0 - DMA read SAR low */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_0_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_0_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_0_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_0_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_0_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_0_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_RDCH_0 - DMA read SAR high */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_0_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_0_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_0_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_0_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_0_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_0_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_RDCH_0 - DMA read DAR low */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_0_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_0_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_0_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_0_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_0_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_0_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_RDCH_0 - DMA read DAR high */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_0_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_0_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_0_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_0_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_0_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_0_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_RDCH_0 - DMA read linked list pointer low */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_0_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_0_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_0_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_0_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_0_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_0_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_WRCH_1 - DMA write channel control 1 */
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

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED2_MASK (0x7E0000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED2_SHIFT (17U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED2_WIDTH (6U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED2_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_1_DMA_RESERVED2_MASK)

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

/*! @name DMA_TRANSFER_SIZE_OFF_WRCH_1 - DMA write transfer size */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_1_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_1_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_1_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_1_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_1_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_1_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_WRCH_1 - DMA write SAR low */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_1_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_1_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_1_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_1_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_1_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_1_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_WRCH_1 - DMA write SAR high */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_1_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_1_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_1_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_1_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_1_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_1_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_WRCH_1 - DMA write DAR low */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_1_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_1_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_1_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_1_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_1_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_1_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_WRCH_1 - DMA write DAR high */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_1_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_1_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_1_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_1_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_1_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_1_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_WRCH_1 - DMA write linked list pointer low */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_1_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_1_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_1_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_1_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_1_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_1_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_WRCH_1 - DMA write linked list pointer high */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_1_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_1_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_1_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_1_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_1_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_1_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_RDCH_1 - DMA read channel control 1 */
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

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED2_MASK (0x7E0000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED2_SHIFT (17U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED2_WIDTH (6U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED2_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_1_DMA_RESERVED2_MASK)

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

/*! @name DMA_TRANSFER_SIZE_OFF_RDCH_1 - DMA read transfer size */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_1_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_1_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_1_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_1_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_1_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_1_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_RDCH_1 - DMA read SAR low */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_1_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_1_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_1_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_1_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_1_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_1_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_RDCH_1 - DMA read SAR high */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_1_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_1_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_1_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_1_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_1_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_1_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_RDCH_1 - DMA read DAR low */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_1_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_1_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_1_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_1_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_1_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_1_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_RDCH_1 - DMA read DAR high */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_1_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_1_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_1_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_1_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_1_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_1_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_RDCH_1 - DMA read linked list pointer low */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_1_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_1_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_1_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_1_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_1_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_1_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_WRCH_2 - DMA write channel control 1 */
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

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED2_MASK (0x7E0000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED2_SHIFT (17U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED2_WIDTH (6U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED2_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_2_DMA_RESERVED2_MASK)

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

/*! @name DMA_TRANSFER_SIZE_OFF_WRCH_2 - DMA write transfer size */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_2_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_2_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_2_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_2_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_2_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_2_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_WRCH_2 - DMA write SAR low */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_2_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_2_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_2_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_2_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_2_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_2_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_WRCH_2 - DMA write SAR high */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_2_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_2_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_2_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_2_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_2_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_2_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_WRCH_2 - DMA write DAR low */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_2_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_2_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_2_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_2_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_2_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_2_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_WRCH_2 - DMA write DAR high */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_2_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_2_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_2_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_2_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_2_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_2_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_WRCH_2 - DMA write linked list pointer low */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_2_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_2_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_2_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_2_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_2_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_2_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_WRCH_2 - DMA write linked list pointer high */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_2_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_2_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_2_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_2_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_2_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_2_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_RDCH_0 - DMA read linked list pointer high */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_0_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_0_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_0_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_0_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_0_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_0_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_RDCH_2 - DMA read channel control 1 */
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

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED2_MASK (0x7E0000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED2_SHIFT (17U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED2_WIDTH (6U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED2_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_2_DMA_RESERVED2_MASK)

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

/*! @name DMA_TRANSFER_SIZE_OFF_RDCH_2 - DMA read transfer size */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_2_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_2_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_2_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_2_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_2_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_2_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_RDCH_2 - DMA read SAR low */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_2_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_2_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_2_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_2_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_2_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_2_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_RDCH_2 - DMA read SAR high */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_2_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_2_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_2_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_2_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_2_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_2_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_RDCH_2 - DMA read DAR low */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_2_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_2_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_2_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_2_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_2_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_2_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_RDCH_2 - DMA read DAR high */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_2_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_2_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_2_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_2_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_2_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_2_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_RDCH_2 - DMA read linked list pointer low */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_2_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_2_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_2_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_2_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_2_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_2_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_WRCH_3 - DMA write channel control 1 */
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

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED2_MASK (0x7E0000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED2_SHIFT (17U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED2_WIDTH (6U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED2_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_WRCH_3_DMA_RESERVED2_MASK)

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

/*! @name DMA_TRANSFER_SIZE_OFF_WRCH_3 - DMA write transfer size */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_3_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_3_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_3_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_3_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_3_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_WRCH_3_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_WRCH_3 - DMA write SAR low */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_3_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_3_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_3_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_3_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_3_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_WRCH_3_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_WRCH_3 - DMA write SAR high */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_3_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_3_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_3_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_3_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_3_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_WRCH_3_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_WRCH_3 - DMA write DAR low */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_3_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_3_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_3_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_3_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_3_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_WRCH_3_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_WRCH_3 - DMA write DAR high */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_3_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_3_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_3_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_3_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_3_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_WRCH_3_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_WRCH_3 - DMA write linked list pointer low */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_3_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_3_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_3_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_3_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_3_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_WRCH_3_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_WRCH_3 - DMA write linked list pointer high */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_3_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_3_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_3_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_3_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_3_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_WRCH_3_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_RDCH_1 - DMA read linked list pointer high */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_1_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_1_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_1_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_1_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_1_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_1_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_CH_CONTROL1_OFF_RDCH_3 - DMA read channel control 1 */
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

#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED2_MASK (0x7E0000U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED2_SHIFT (17U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED2_WIDTH (6U)
#define PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED2(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED2_SHIFT)) & PCIE_DMA_DMA_CH_CONTROL1_OFF_RDCH_3_DMA_RESERVED2_MASK)

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

/*! @name DMA_TRANSFER_SIZE_OFF_RDCH_3 - DMA read transfer size */
/*! @{ */

#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_3_DMA_TRANSFER_SIZE_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_3_DMA_TRANSFER_SIZE_SHIFT (0U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_3_DMA_TRANSFER_SIZE_WIDTH (32U)
#define PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_3_DMA_TRANSFER_SIZE(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_3_DMA_TRANSFER_SIZE_SHIFT)) & PCIE_DMA_DMA_TRANSFER_SIZE_OFF_RDCH_3_DMA_TRANSFER_SIZE_MASK)
/*! @} */

/*! @name DMA_SAR_LOW_OFF_RDCH_3 - DMA read SAR low */
/*! @{ */

#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_3_SRC_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_3_SRC_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_3_SRC_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_3_SRC_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_3_SRC_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_SAR_LOW_OFF_RDCH_3_SRC_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_SAR_HIGH_OFF_RDCH_3 - DMA read SAR high */
/*! @{ */

#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_3_SRC_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_3_SRC_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_3_SRC_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_3_SRC_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_3_SRC_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_SAR_HIGH_OFF_RDCH_3_SRC_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_DAR_LOW_OFF_RDCH_3 - DMA read DAR low */
/*! @{ */

#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_3_DST_ADDR_REG_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_3_DST_ADDR_REG_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_3_DST_ADDR_REG_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_3_DST_ADDR_REG_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_3_DST_ADDR_REG_LOW_SHIFT)) & PCIE_DMA_DMA_DAR_LOW_OFF_RDCH_3_DST_ADDR_REG_LOW_MASK)
/*! @} */

/*! @name DMA_DAR_HIGH_OFF_RDCH_3 - DMA read DAR high */
/*! @{ */

#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_3_DST_ADDR_REG_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_3_DST_ADDR_REG_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_3_DST_ADDR_REG_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_3_DST_ADDR_REG_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_3_DST_ADDR_REG_HIGH_SHIFT)) & PCIE_DMA_DMA_DAR_HIGH_OFF_RDCH_3_DST_ADDR_REG_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_LOW_OFF_RDCH_3 - DMA read linked list pointer low */
/*! @{ */

#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_3_LLP_LOW_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_3_LLP_LOW_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_3_LLP_LOW_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_3_LLP_LOW(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_3_LLP_LOW_SHIFT)) & PCIE_DMA_DMA_LLP_LOW_OFF_RDCH_3_LLP_LOW_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_RDCH_2 - DMA read linked list pointer high */
/*! @{ */

#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_2_LLP_HIGH_MASK (0xFFFFFFFFU)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_2_LLP_HIGH_SHIFT (0U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_2_LLP_HIGH_WIDTH (32U)
#define PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_2_LLP_HIGH(x) (((uint32_t)(((uint32_t)(x)) << PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_2_LLP_HIGH_SHIFT)) & PCIE_DMA_DMA_LLP_HIGH_OFF_RDCH_2_LLP_HIGH_MASK)
/*! @} */

/*! @name DMA_LLP_HIGH_OFF_RDCH_3 - DMA read linked list pointer high */
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

#endif  /* #if !defined(S32R45_PCIE_DMA_H_) */
