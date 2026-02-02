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
 * @file S32R45_VSPA.h
 * @version 2.4
 * @date 2022-02-14
 * @brief Peripheral Access Layer for S32R45_VSPA
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
#if !defined(S32R45_VSPA_H_)  /* Check if memory map has not been already included */
#define S32R45_VSPA_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- VSPA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_Peripheral_Access_Layer VSPA Peripheral Access Layer
 * @{
 */

/** VSPA - Size of Registers Arrays */
#define VSPA_VCPU_HOST_FLAGS_COUNT                2u
#define VSPA_HOST_VCPU_FLAGS_COUNT                2u
#define VSPA_AXISLV_FLAGS_COUNT                   2u
#define VSPA_AXISLV_GOEN_COUNT                    2u
#define VSPA_RAG_SET_COUNT                        8u
#define VSPA_GP_IN_COUNT                          8u
#define VSPA_GP_OUT_COUNT                         20u
#define VSPA_CTOACR_COUNT                         4u

/** VSPA - Register Layout Typedef */
typedef struct {
  __I  uint32_t HWVERSION;                         /**< VSPA Hardware Version, offset: 0x0 */
  __IO uint32_t SWVERSION;                         /**< VCPU Software Version, offset: 0x4 */
  __IO uint32_t CONTROL;                           /**< VCPU System Control register, offset: 0x8 */
  __IO uint32_t IRQEN;                             /**< VSPA Interrupt Enable register, offset: 0xC */
  __IO uint32_t STATUS;                            /**< VSPA Source 1 Info, offset: 0x10 */
  __IO uint32_t VCPU_HOST_FLAGS[VSPA_VCPU_HOST_FLAGS_COUNT]; /**< VCPU to Host flags register a, array offset: 0x14, array step: 0x4 */
  __IO uint32_t HOST_VCPU_FLAGS[VSPA_HOST_VCPU_FLAGS_COUNT]; /**< Host to VCPU Flags register a, array offset: 0x1C, array step: 0x4 */
  uint8_t RESERVED_0[4];
  __IO uint32_t EXT_GO_ENA;                        /**< External Go Enable, offset: 0x28 */
  __IO uint32_t EXT_GO_STAT;                       /**< External Go Status, offset: 0x2C */
  __I  uint32_t ILLOP_STATUS;                      /**< VSPA VCPU Illegal Opcode Address, offset: 0x30 */
  uint8_t RESERVED_1[12];
  __I  uint32_t PARAM0;                            /**< VSPA Parameters 0, offset: 0x40 */
  __I  uint32_t PARAM1;                            /**< VSPA Parameters 1, offset: 0x44 */
  __I  uint32_t PARAM2;                            /**< VSPA Parameters 2, offset: 0x48 */
  __I  uint32_t DMEM0_SIZE;                        /**< VCPU DMEM Size, offset: 0x4C */
  uint8_t RESERVED_2[16];
  __IO uint32_t AXISLV_FLAGS[VSPA_AXISLV_FLAGS_COUNT]; /**< AXI Slave flags register a, array offset: 0x60, array step: 0x4 */
  __IO uint32_t AXISLV_GOEN[VSPA_AXISLV_GOEN_COUNT]; /**< AXI Slave Go Enable register a, array offset: 0x68, array step: 0x4 */
  __I  uint32_t PLAT_IN_0;                         /**< Platform Input, offset: 0x70 */
  uint8_t RESERVED_3[12];
  __IO uint32_t PLAT_OUT_0;                        /**< Platform Output, offset: 0x80 */
  uint8_t RESERVED_4[20];
  __IO uint32_t CYC_COUNTER_MSB;                   /**< Cycle counter MSB register, offset: 0x98 */
  __IO uint32_t CYC_COUNTER_LSB;                   /**< Cycle Counter LSB Register, offset: 0x9C */
  uint8_t RESERVED_5[16];
  __O  uint32_t DMA_DMEM_PRAM_ADDR;                /**< DMEM/PRAM Address, offset: 0xB0 */
  __O  uint32_t DMA_AXI_ADDRESS;                   /**< DMA AXI Address, offset: 0xB4 */
  __O  uint32_t DMA_AXI_BYTE_CNT;                  /**< AXI Byte Count register, offset: 0xB8 */
  __O  uint32_t DMA_XFR_CTRL;                      /**< DMA Transfer Control register, offset: 0xBC */
  __IO uint32_t DMA_STAT_ABORT;                    /**< DMA Status/Abort Control, offset: 0xC0 */
  __IO uint32_t DMA_IRQ_STAT;                      /**< DMA IRQ Status, offset: 0xC4 */
  __IO uint32_t DMA_COMP_STAT;                     /**< DMA Complete Status, offset: 0xC8 */
  __IO uint32_t DMA_XFRERR_STAT;                   /**< DMA Transfer Error Status, offset: 0xCC */
  __IO uint32_t DMA_CFGERR_STAT;                   /**< DMA Configuration Error Status, offset: 0xD0 */
  __I  uint32_t DMA_XRUN_STAT;                     /**< DMA Transfer Running Status, offset: 0xD4 */
  __IO uint32_t DMA_GO_STAT;                       /**< DMA Go Status, offset: 0xD8 */
  __I  uint32_t DMA_FIFO_STAT;                     /**< DMA FIFO Availability Status, offset: 0xDC */
  uint8_t RESERVED_6[32];
  __IO uint32_t LD_RF_CONTROL;                     /**< Load Register File Control register (Slow read register), offset: 0x100 */
  __IO uint32_t LD_RF_TB_REAL_0;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x104 */
  __IO uint32_t LD_RF_TB_IMAG_0;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x108 */
  __IO uint32_t LD_RF_TB_REAL_1;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x10C */
  __IO uint32_t LD_RF_TB_IMAG_1;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x110 */
  __IO uint32_t LD_RF_TB_REAL_2;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x114 */
  __IO uint32_t LD_RF_TB_IMAG_2;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x118 */
  __IO uint32_t LD_RF_TB_REAL_3;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x11C */
  __IO uint32_t LD_RF_TB_IMAG_3;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x120 */
  __IO uint32_t LD_RF_TB_REAL_4;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x124 */
  __IO uint32_t LD_RF_TB_IMAG_4;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x128 */
  __IO uint32_t LD_RF_TB_REAL_5;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x12C */
  __IO uint32_t LD_RF_TB_IMAG_5;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x130 */
  __IO uint32_t LD_RF_TB_REAL_6;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x134 */
  __IO uint32_t LD_RF_TB_IMAG_6;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x138 */
  __IO uint32_t LD_RF_TB_REAL_7;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x13C */
  __IO uint32_t LD_RF_TB_IMAG_7;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x140 */
  uint8_t RESERVED_7[60];
  __IO uint32_t VCPU_GO_ADDR;                      /**< VCPU Go Address, offset: 0x180 */
  __IO uint32_t VCPU_GO_STACK;                     /**< VCPU Go Stack, offset: 0x184 */
  uint8_t RESERVED_8[632];
  __I  uint32_t VCPU_MODE0;                        /**< VCPU Mode 0, offset: 0x400 */
  __I  uint32_t VCPU_MODE1;                        /**< VCPU Mode 1, offset: 0x404 */
  __I  uint32_t VCPU_CREG0;                        /**< VCPU CREG 0, offset: 0x408 */
  __I  uint32_t VCPU_CREG1;                        /**< VCPU CREG 1, offset: 0x40C */
  __I  uint32_t ST_UL_VEC_LEN;                     /**< Store Unalign Vector Length, offset: 0x410 */
  __I  uint32_t VP_CONTROL;                        /**< Vector Predicate Control, offset: 0x414 */
  __I  uint32_t XC_CONTROL;                        /**< Extended Condition Control, offset: 0x418 */
  __I  uint32_t VCPU_CREG2;                        /**< VCPU CREG 2, offset: 0x41C */
  uint8_t RESERVED_9[96];
  struct {                                         /* offset: 0x480, array step: 0x8 */
    __I  uint32_t S0S1;                              /**< RAG set rS0 & rS1 registers, array offset: 0x480, array step: 0x8 */
    __I  uint32_t S2VST;                             /**< RAG set rS2, rV & rSt registers, array offset: 0x484, array step: 0x8 */
  } RAG_SET[VSPA_RAG_SET_COUNT];
  uint8_t RESERVED_10[64];
  __I  uint32_t GP_IN[VSPA_GP_IN_COUNT];           /**< General Purpose Input registers [8 registers], array offset: 0x500, array step: 0x4 */
  uint8_t RESERVED_11[96];
  __IO uint32_t GP_OUT[VSPA_GP_OUT_COUNT];         /**< General Purpose Output registers [20 registers], array offset: 0x580, array step: 0x4 */
  uint8_t RESERVED_12[48];
  __O  uint32_t DQM_SMALL;                         /**< VCPU to DQM Trace Small Outbox register, offset: 0x600 */
  __O  uint32_t DQM_LARGE_MSB;                     /**< VCPU to DQM Trace Large MSB Outbox register, offset: 0x604 */
  __O  uint32_t DQM_LARGE_LSB;                     /**< VCPU to DQM Trace Large LSB Outbox register, offset: 0x608 */
  uint8_t RESERVED_13[20];
  __O  uint32_t VCPU_DBG_OUT_32;                   /**< VCPU to Debugger 32-bit Outbox register, offset: 0x620 */
  __O  uint32_t VCPU_DBG_OUT_64_MSB;               /**< VCPU to Debugger 64-bit MSB Outbox register, offset: 0x624 */
  __O  uint32_t VCPU_DBG_OUT_64_LSB;               /**< VCPU to Debugger 64-bit LSB Outbox register, offset: 0x628 */
  __I  uint32_t VCPU_DBG_IN_32;                    /**< Debugger to VCPU 32-bit Inbox register, offset: 0x62C */
  __I  uint32_t VCPU_DBG_IN_64_MSB;                /**< Debugger to VCPU 64-bit MSB Inbox register, offset: 0x630 */
  __I  uint32_t VCPU_DBG_IN_64_LSB;                /**< Debugger to VCPU 64-bit LSB Inbox register, offset: 0x634 */
  __I  uint32_t VCPU_DBG_MBOX_STATUS;              /**< VCPU to Debugger Mailbox Status register, offset: 0x638 */
  uint8_t RESERVED_14[4];
  __O  uint32_t VCPU_OUT_0_MSB;                    /**< VCPU to host outbox message n MSB register, offset: 0x640 */
  __O  uint32_t VCPU_OUT_0_LSB;                    /**< VCPU to host outbox message n LSB register, offset: 0x644 */
  __O  uint32_t VCPU_OUT_1_MSB;                    /**< VCPU to host outbox message n MSB register, offset: 0x648 */
  __O  uint32_t VCPU_OUT_1_LSB;                    /**< VCPU to host outbox message n LSB register, offset: 0x64C */
  __I  uint32_t VCPU_IN_0_MSB;                     /**< VCPU from Host Inbox Message n MSB, offset: 0x650 */
  __I  uint32_t VCPU_IN_0_LSB;                     /**< VCPU from host inbox message n LSB register, offset: 0x654 */
  __I  uint32_t VCPU_IN_1_MSB;                     /**< VCPU from Host Inbox Message n MSB, offset: 0x658 */
  __I  uint32_t VCPU_IN_1_LSB;                     /**< VCPU from host inbox message n LSB register, offset: 0x65C */
  __I  uint32_t VCPU_MBOX_STATUS;                  /**< VCPU to Host Mailbox Status register, offset: 0x660 */
  uint8_t RESERVED_15[28];
  __O  uint32_t HOST_OUT_0_MSB;                    /**< Host to VCPU Outbox Message n MSB register, offset: 0x680 */
  __O  uint32_t HOST_OUT_0_LSB;                    /**< Host to VCPU Outbox Message n LSB register, offset: 0x684 */
  __O  uint32_t HOST_OUT_1_MSB;                    /**< Host to VCPU Outbox Message n MSB register, offset: 0x688 */
  __O  uint32_t HOST_OUT_1_LSB;                    /**< Host to VCPU Outbox Message n LSB register, offset: 0x68C */
  __I  uint32_t HOST_IN_0_MSB;                     /**< Host from VCPU Inbox Message n MSB, offset: 0x690 */
  __I  uint32_t HOST_IN_0_LSB;                     /**< Host from VCPU Inbox Message n LSB Register, offset: 0x694 */
  __I  uint32_t HOST_IN_1_MSB;                     /**< Host from VCPU Inbox Message n MSB, offset: 0x698 */
  __I  uint32_t HOST_IN_1_LSB;                     /**< Host from VCPU Inbox Message n LSB Register, offset: 0x69C */
  __I  uint32_t HOST_MBOX_STATUS;                  /**< Host Mailbox Status Register, offset: 0x6A0 */
  uint8_t RESERVED_16[92];
  __IO uint32_t IPPUCONTROL;                       /**< IPPU Control register, offset: 0x700 */
  __I  uint32_t IPPUSTATUS;                        /**< IPPU Status register, offset: 0x704 */
  __IO uint32_t IPPURC;                            /**< IPPU Run Control register, offset: 0x708 */
  __IO uint32_t IPPUARGBASEADDR;                   /**< IPPU Arg Base Address register, offset: 0x70C */
  __I  uint32_t IPPUHWVER;                         /**< IPPU Hardware Version, offset: 0x710 */
  __IO uint32_t IPPUSWVER;                         /**< IPPU Software Version, offset: 0x714 */
  uint8_t RESERVED_17[232];
  __IO uint32_t GDBEN;                             /**< Global Debug Enable register, offset: 0x800 */
  __IO uint32_t RCR;                               /**< Debug Run Control register, offset: 0x804 */
  __I  uint32_t RCSTATUS;                          /**< Debug Run Control Status register, offset: 0x808 */
  __IO uint32_t TC1;                               /**< Trace Control register 1, offset: 0x80C */
  uint8_t RESERVED_18[44];
  __IO uint32_t HACR;                              /**< Debug Halt Action Control register, offset: 0x83C */
  __IO uint32_t RACR;                              /**< Debug Resume Action Control register, offset: 0x840 */
  __IO uint32_t PTSACR;                            /**< Debug Program Trace Sync Action Control register, offset: 0x844 */
  __IO uint32_t PSTACR;                            /**< Debug Program Trace Start Action Control register, offset: 0x848 */
  __IO uint32_t PSPACR;                            /**< Debug Program Trace Stop Action Control register, offset: 0x84C */
  __IO uint32_t DSTACR;                            /**< Debug Data Trace Start Action Control register, offset: 0x850 */
  __IO uint32_t DSPACR;                            /**< Debug Data Trace Stop Action Control register, offset: 0x854 */
  __IO uint32_t DTMACR;                            /**< Debug Data Trace Message Generation Action Control register, offset: 0x858 */
  __IO uint32_t WPMACR;                            /**< Debug WPM Generation Action Control register, offset: 0x85C */
  __IO uint32_t TSMCR;                             /**< Debug TSM Control register, offset: 0x860 */
  __I  uint32_t TSMCNT_U;                          /**< Debug VSPA Timestamp Counter (Upper) register, offset: 0x864 */
  __I  uint32_t TSMCNT_L;                          /**< Debug VSPA Timestamp Counter (Lower) register, offset: 0x868 */
  uint8_t RESERVED_19[4];
  __IO uint32_t RAVAP;                             /**< Debug VSP Architecture Visibility Address Pointer register, offset: 0x870 */
  __IO uint32_t RAVFD;                             /**< Debug VSP Architecture Visibility Fixed Data register, offset: 0x874 */
  __IO uint32_t RAVID;                             /**< Debug VSP Architecture Visibility Incrementing Data register, offset: 0x878 */
  __I  uint32_t DVR;                               /**< Debug Verification register, offset: 0x87C */
  __IO uint32_t CTOACR[VSPA_CTOACR_COUNT];         /**< Debug Cross Trigger Out a Action Control registers, array offset: 0x880, array step: 0x4 */
  uint8_t RESERVED_20[112];
  __IO uint32_t DC0CS;                             /**< Debug Comparator Control and Status register, offset: 0x900 */
  __IO uint32_t DC0D;                              /**< Debug Comparator a Data register, offset: 0x904 */
  __IO uint32_t C0AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x908 */
  __IO uint32_t C0DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x90C */
  __IO uint32_t C0TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x910 */
  __IO uint32_t DC1CS;                             /**< Debug Comparator Control and Status register, offset: 0x914 */
  __IO uint32_t DC1D;                              /**< Debug Comparator a Data register, offset: 0x918 */
  __IO uint32_t C1AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x91C */
  __IO uint32_t C1DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x920 */
  __IO uint32_t C1TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x924 */
  __IO uint32_t DC2CS;                             /**< Debug Comparator Control and Status register, offset: 0x928 */
  __IO uint32_t DC2D;                              /**< Debug Comparator a Data register, offset: 0x92C */
  __IO uint32_t C2AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x930 */
  __IO uint32_t C2DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x934 */
  __IO uint32_t C2TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x938 */
  __IO uint32_t DC3CS;                             /**< Debug Comparator Control and Status register, offset: 0x93C */
  __IO uint32_t DC3D;                              /**< Debug Comparator a Data register, offset: 0x940 */
  __IO uint32_t C3AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x944 */
  __IO uint32_t C3DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x948 */
  __IO uint32_t C3TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x94C */
  __IO uint32_t DC4CS;                             /**< Debug Comparator Control and Status register, offset: 0x950 */
  __IO uint32_t DC4D;                              /**< Debug Comparator a Data register, offset: 0x954 */
  __IO uint32_t C4AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x958 */
  __IO uint32_t C4DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x95C */
  __IO uint32_t C4TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x960 */
  __IO uint32_t DC5CS;                             /**< Debug Comparator Control and Status register, offset: 0x964 */
  __IO uint32_t DC5D;                              /**< Debug Comparator a Data register, offset: 0x968 */
  __IO uint32_t C5AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x96C */
  __IO uint32_t C5DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x970 */
  __IO uint32_t C5TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x974 */
  __IO uint32_t DC6CS;                             /**< Debug Comparator Control and Status register, offset: 0x978 */
  __IO uint32_t DC6D;                              /**< Debug Comparator a Data register, offset: 0x97C */
  __IO uint32_t C6AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x980 */
  __IO uint32_t C6DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x984 */
  __IO uint32_t C6TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x988 */
  __IO uint32_t DC7CS;                             /**< Debug Comparator Control and Status register, offset: 0x98C */
  __IO uint32_t DC7D;                              /**< Debug Comparator a Data register, offset: 0x990 */
  __IO uint32_t C7AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x994 */
  __IO uint32_t C7DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x998 */
  __IO uint32_t C7TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x99C */
  uint8_t RESERVED_21[1152];
  __O  uint32_t OUT_32;                            /**< Debug to VSP 32-bit Outbox register, offset: 0xE20 */
  __O  uint32_t OUT_64_MSB;                        /**< Debug to VSP 64-bit MSB Outbox register, offset: 0xE24 */
  __O  uint32_t OUT_64_LSB;                        /**< Debug to VSP 64-bit LSB Outbox register, offset: 0xE28 */
  __I  uint32_t IN_32;                             /**< VSP to Debugger 32-bit Inbox register, offset: 0xE2C */
  __I  uint32_t IN_64_MSB;                         /**< VSP to Debugger 64-bit MSB Inbox register, offset: 0xE30 */
  __I  uint32_t IN_64_LSB;                         /**< VSP to Debugger 64-bit LSB Inbox register, offset: 0xE34 */
  __I  uint32_t MBOX_STATUS;                       /**< Debugger to VSP Mailbox Status register, offset: 0xE38 */
  uint8_t RESERVED_22[196];
  __I  uint32_t PARAM_0;                           /**< Debug Parameter 0 Register, offset: 0xF00 */
  uint8_t RESERVED_23[204];
  __I  uint32_t PIDR4;                             /**< Peripheral ID4 register, offset: 0xFD0 */
  __I  uint32_t PIDR5;                             /**< Peripheral ID5 register, offset: 0xFD4 */
  __I  uint32_t PIDR6;                             /**< Peripheral ID6 register, offset: 0xFD8 */
  __I  uint32_t PIDR7;                             /**< Peripheral ID7 register, offset: 0xFDC */
  __I  uint32_t PIDR0;                             /**< Peripheral ID0 register, offset: 0xFE0 */
  __I  uint32_t PIDR1;                             /**< Peripheral ID1 register, offset: 0xFE4 */
  __I  uint32_t PIDR2;                             /**< Peripheral ID2 register, offset: 0xFE8 */
  __I  uint32_t PIDR3;                             /**< Peripheral ID3 register, offset: 0xFEC */
  __I  uint32_t CIDR0;                             /**< Component ID0 register, offset: 0xFF0 */
  __I  uint32_t CIDR1;                             /**< Component ID1 register, offset: 0xFF4 */
  __I  uint32_t CIDR2;                             /**< Component ID2 register, offset: 0xFF8 */
  __I  uint32_t CIDR3;                             /**< Component ID3 register, offset: 0xFFC */
} VSPA_Type, *VSPA_MemMapPtr;

/** Number of instances of the VSPA module. */
#define VSPA_INSTANCE_COUNT                      (4u)

/* VSPA - Peripheral instance base addresses */
/** Peripheral LAX_0 base address */
#define IP_LAX_0_BASE                            (0x44028000u)
/** Peripheral LAX_0 base pointer */
#define IP_LAX_0                                 ((VSPA_Type *)IP_LAX_0_BASE)
/** Peripheral LAX_1 base address */
#define IP_LAX_1_BASE                            (0x44029000u)
/** Peripheral LAX_1 base pointer */
#define IP_LAX_1                                 ((VSPA_Type *)IP_LAX_1_BASE)
/** Peripheral LAX_0_DBG base address */
#define IP_LAX_0_DBG_BASE                        (0x51139000u)
/** Peripheral LAX_0_DBG base pointer */
#define IP_LAX_0_DBG                             ((VSPA_Type *)IP_LAX_0_DBG_BASE)
/** Peripheral LAX_1_DBG base address */
#define IP_LAX_1_DBG_BASE                        (0x5113A000u)
/** Peripheral LAX_1_DBG base pointer */
#define IP_LAX_1_DBG                             ((VSPA_Type *)IP_LAX_1_DBG_BASE)
/** Array initializer of VSPA peripheral base addresses */
#define IP_VSPA_BASE_ADDRS                       { IP_LAX_0_BASE, IP_LAX_1_BASE, IP_LAX_0_DBG_BASE, IP_LAX_1_DBG_BASE }
/** Array initializer of VSPA peripheral base pointers */
#define IP_VSPA_BASE_PTRS                        { IP_LAX_0, IP_LAX_1, IP_LAX_0_DBG, IP_LAX_1_DBG }

/* ----------------------------------------------------------------------------
   -- VSPA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_Register_Masks VSPA Register Masks
 * @{
 */

/*! @name HWVERSION - VSPA Hardware Version */
/*! @{ */

#define VSPA_HWVERSION_vspa_hw_version_MASK      (0xFFFFFFFFU)
#define VSPA_HWVERSION_vspa_hw_version_SHIFT     (0U)
#define VSPA_HWVERSION_vspa_hw_version_WIDTH     (32U)
#define VSPA_HWVERSION_vspa_hw_version(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_HWVERSION_vspa_hw_version_SHIFT)) & VSPA_HWVERSION_vspa_hw_version_MASK)
/*! @} */

/*! @name SWVERSION - VCPU Software Version */
/*! @{ */

#define VSPA_SWVERSION_pram_ucode_version_15_0_MASK (0xFFFFU)
#define VSPA_SWVERSION_pram_ucode_version_15_0_SHIFT (0U)
#define VSPA_SWVERSION_pram_ucode_version_15_0_WIDTH (16U)
#define VSPA_SWVERSION_pram_ucode_version_15_0(x) (((uint32_t)(((uint32_t)(x)) << VSPA_SWVERSION_pram_ucode_version_15_0_SHIFT)) & VSPA_SWVERSION_pram_ucode_version_15_0_MASK)

#define VSPA_SWVERSION_pram_ucode_version_31_16_MASK (0xFFFF0000U)
#define VSPA_SWVERSION_pram_ucode_version_31_16_SHIFT (16U)
#define VSPA_SWVERSION_pram_ucode_version_31_16_WIDTH (16U)
#define VSPA_SWVERSION_pram_ucode_version_31_16(x) (((uint32_t)(((uint32_t)(x)) << VSPA_SWVERSION_pram_ucode_version_31_16_SHIFT)) & VSPA_SWVERSION_pram_ucode_version_31_16_MASK)
/*! @} */

/*! @name CONTROL - VCPU System Control register */
/*! @{ */

#define VSPA_CONTROL_host_go_MASK                (0x1U)
#define VSPA_CONTROL_host_go_SHIFT               (0U)
#define VSPA_CONTROL_host_go_WIDTH               (1U)
#define VSPA_CONTROL_host_go(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_host_go_SHIFT)) & VSPA_CONTROL_host_go_MASK)

#define VSPA_CONTROL_ippu_go_MASK                (0x2U)
#define VSPA_CONTROL_ippu_go_SHIFT               (1U)
#define VSPA_CONTROL_ippu_go_WIDTH               (1U)
#define VSPA_CONTROL_ippu_go(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_ippu_go_SHIFT)) & VSPA_CONTROL_ippu_go_MASK)

#define VSPA_CONTROL_dma_go_MASK                 (0x4U)
#define VSPA_CONTROL_dma_go_SHIFT                (2U)
#define VSPA_CONTROL_dma_go_WIDTH                (1U)
#define VSPA_CONTROL_dma_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_dma_go_SHIFT)) & VSPA_CONTROL_dma_go_MASK)

#define VSPA_CONTROL_ext_go_MASK                 (0x8U)
#define VSPA_CONTROL_ext_go_SHIFT                (3U)
#define VSPA_CONTROL_ext_go_WIDTH                (1U)
#define VSPA_CONTROL_ext_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_ext_go_SHIFT)) & VSPA_CONTROL_ext_go_MASK)

#define VSPA_CONTROL_vcpu_go_MASK                (0x10U)
#define VSPA_CONTROL_vcpu_go_SHIFT               (4U)
#define VSPA_CONTROL_vcpu_go_WIDTH               (1U)
#define VSPA_CONTROL_vcpu_go(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_vcpu_go_SHIFT)) & VSPA_CONTROL_vcpu_go_MASK)

#define VSPA_CONTROL_debug_msg_go_MASK           (0x20U)
#define VSPA_CONTROL_debug_msg_go_SHIFT          (5U)
#define VSPA_CONTROL_debug_msg_go_WIDTH          (1U)
#define VSPA_CONTROL_debug_msg_go(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_debug_msg_go_SHIFT)) & VSPA_CONTROL_debug_msg_go_MASK)

#define VSPA_CONTROL_host_vsp_flags_go_MASK      (0x40U)
#define VSPA_CONTROL_host_vsp_flags_go_SHIFT     (6U)
#define VSPA_CONTROL_host_vsp_flags_go_WIDTH     (1U)
#define VSPA_CONTROL_host_vsp_flags_go(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_host_vsp_flags_go_SHIFT)) & VSPA_CONTROL_host_vsp_flags_go_MASK)

#define VSPA_CONTROL_axislv_go_MASK              (0x100U)
#define VSPA_CONTROL_axislv_go_SHIFT             (8U)
#define VSPA_CONTROL_axislv_go_WIDTH             (1U)
#define VSPA_CONTROL_axislv_go(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_axislv_go_SHIFT)) & VSPA_CONTROL_axislv_go_MASK)

#define VSPA_CONTROL_debug_msg_go_en_MASK        (0x200U)
#define VSPA_CONTROL_debug_msg_go_en_SHIFT       (9U)
#define VSPA_CONTROL_debug_msg_go_en_WIDTH       (1U)
#define VSPA_CONTROL_debug_msg_go_en(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_debug_msg_go_en_SHIFT)) & VSPA_CONTROL_debug_msg_go_en_MASK)

#define VSPA_CONTROL_host_vsp_flags0_go_en_MASK  (0x800U)
#define VSPA_CONTROL_host_vsp_flags0_go_en_SHIFT (11U)
#define VSPA_CONTROL_host_vsp_flags0_go_en_WIDTH (1U)
#define VSPA_CONTROL_host_vsp_flags0_go_en(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_host_vsp_flags0_go_en_SHIFT)) & VSPA_CONTROL_host_vsp_flags0_go_en_MASK)

#define VSPA_CONTROL_host_vsp_flags1_go_en_MASK  (0x1000U)
#define VSPA_CONTROL_host_vsp_flags1_go_en_SHIFT (12U)
#define VSPA_CONTROL_host_vsp_flags1_go_en_WIDTH (1U)
#define VSPA_CONTROL_host_vsp_flags1_go_en(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_host_vsp_flags1_go_en_SHIFT)) & VSPA_CONTROL_host_vsp_flags1_go_en_MASK)

#define VSPA_CONTROL_dma_halt_req_MASK           (0x20000U)
#define VSPA_CONTROL_dma_halt_req_SHIFT          (17U)
#define VSPA_CONTROL_dma_halt_req_WIDTH          (1U)
#define VSPA_CONTROL_dma_halt_req(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_dma_halt_req_SHIFT)) & VSPA_CONTROL_dma_halt_req_MASK)

#define VSPA_CONTROL_vspa_soft_rst_req_MASK      (0x40000U)
#define VSPA_CONTROL_vspa_soft_rst_req_SHIFT     (18U)
#define VSPA_CONTROL_vspa_soft_rst_req_WIDTH     (1U)
#define VSPA_CONTROL_vspa_soft_rst_req(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_vspa_soft_rst_req_SHIFT)) & VSPA_CONTROL_vspa_soft_rst_req_MASK)

#define VSPA_CONTROL_host_sent_msg0_go_MASK      (0x100000U)
#define VSPA_CONTROL_host_sent_msg0_go_SHIFT     (20U)
#define VSPA_CONTROL_host_sent_msg0_go_WIDTH     (1U)
#define VSPA_CONTROL_host_sent_msg0_go(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_host_sent_msg0_go_SHIFT)) & VSPA_CONTROL_host_sent_msg0_go_MASK)

#define VSPA_CONTROL_host_sent_msg1_go_MASK      (0x200000U)
#define VSPA_CONTROL_host_sent_msg1_go_SHIFT     (21U)
#define VSPA_CONTROL_host_sent_msg1_go_WIDTH     (1U)
#define VSPA_CONTROL_host_sent_msg1_go(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_host_sent_msg1_go_SHIFT)) & VSPA_CONTROL_host_sent_msg1_go_MASK)

#define VSPA_CONTROL_host_read_msg0_go_MASK      (0x400000U)
#define VSPA_CONTROL_host_read_msg0_go_SHIFT     (22U)
#define VSPA_CONTROL_host_read_msg0_go_WIDTH     (1U)
#define VSPA_CONTROL_host_read_msg0_go(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_host_read_msg0_go_SHIFT)) & VSPA_CONTROL_host_read_msg0_go_MASK)

#define VSPA_CONTROL_host_read_msg1_go_MASK      (0x800000U)
#define VSPA_CONTROL_host_read_msg1_go_SHIFT     (23U)
#define VSPA_CONTROL_host_read_msg1_go_WIDTH     (1U)
#define VSPA_CONTROL_host_read_msg1_go(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_host_read_msg1_go_SHIFT)) & VSPA_CONTROL_host_read_msg1_go_MASK)

#define VSPA_CONTROL_host_msg0_go_en_MASK        (0x1000000U)
#define VSPA_CONTROL_host_msg0_go_en_SHIFT       (24U)
#define VSPA_CONTROL_host_msg0_go_en_WIDTH       (1U)
#define VSPA_CONTROL_host_msg0_go_en(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_host_msg0_go_en_SHIFT)) & VSPA_CONTROL_host_msg0_go_en_MASK)

#define VSPA_CONTROL_host_msg1_go_en_MASK        (0x2000000U)
#define VSPA_CONTROL_host_msg1_go_en_SHIFT       (25U)
#define VSPA_CONTROL_host_msg1_go_en_WIDTH       (1U)
#define VSPA_CONTROL_host_msg1_go_en(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_host_msg1_go_en_SHIFT)) & VSPA_CONTROL_host_msg1_go_en_MASK)

#define VSPA_CONTROL_host_read_msg0_go_en_MASK   (0x4000000U)
#define VSPA_CONTROL_host_read_msg0_go_en_SHIFT  (26U)
#define VSPA_CONTROL_host_read_msg0_go_en_WIDTH  (1U)
#define VSPA_CONTROL_host_read_msg0_go_en(x)     (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_host_read_msg0_go_en_SHIFT)) & VSPA_CONTROL_host_read_msg0_go_en_MASK)

#define VSPA_CONTROL_host_read_msg1_go_en_MASK   (0x8000000U)
#define VSPA_CONTROL_host_read_msg1_go_en_SHIFT  (27U)
#define VSPA_CONTROL_host_read_msg1_go_en_WIDTH  (1U)
#define VSPA_CONTROL_host_read_msg1_go_en(x)     (((uint32_t)(((uint32_t)(x)) << VSPA_CONTROL_host_read_msg1_go_en_SHIFT)) & VSPA_CONTROL_host_read_msg1_go_en_MASK)
/*! @} */

/*! @name IRQEN - VSPA Interrupt Enable register */
/*! @{ */

#define VSPA_IRQEN_irqen_done_MASK               (0x1U)
#define VSPA_IRQEN_irqen_done_SHIFT              (0U)
#define VSPA_IRQEN_irqen_done_WIDTH              (1U)
#define VSPA_IRQEN_irqen_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_IRQEN_irqen_done_SHIFT)) & VSPA_IRQEN_irqen_done_MASK)

#define VSPA_IRQEN_irqen_ippu_done_MASK          (0x2U)
#define VSPA_IRQEN_irqen_ippu_done_SHIFT         (1U)
#define VSPA_IRQEN_irqen_ippu_done_WIDTH         (1U)
#define VSPA_IRQEN_irqen_ippu_done(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_IRQEN_irqen_ippu_done_SHIFT)) & VSPA_IRQEN_irqen_ippu_done_MASK)

#define VSPA_IRQEN_irqen_flags0_MASK             (0x4U)
#define VSPA_IRQEN_irqen_flags0_SHIFT            (2U)
#define VSPA_IRQEN_irqen_flags0_WIDTH            (1U)
#define VSPA_IRQEN_irqen_flags0(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_IRQEN_irqen_flags0_SHIFT)) & VSPA_IRQEN_irqen_flags0_MASK)

#define VSPA_IRQEN_irqen_flags1_MASK             (0x8U)
#define VSPA_IRQEN_irqen_flags1_SHIFT            (3U)
#define VSPA_IRQEN_irqen_flags1_WIDTH            (1U)
#define VSPA_IRQEN_irqen_flags1(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_IRQEN_irqen_flags1_SHIFT)) & VSPA_IRQEN_irqen_flags1_MASK)

#define VSPA_IRQEN_irqen_dma_cmp_MASK            (0x10U)
#define VSPA_IRQEN_irqen_dma_cmp_SHIFT           (4U)
#define VSPA_IRQEN_irqen_dma_cmp_WIDTH           (1U)
#define VSPA_IRQEN_irqen_dma_cmp(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_IRQEN_irqen_dma_cmp_SHIFT)) & VSPA_IRQEN_irqen_dma_cmp_MASK)

#define VSPA_IRQEN_irqen_dma_error_MASK          (0x20U)
#define VSPA_IRQEN_irqen_dma_error_SHIFT         (5U)
#define VSPA_IRQEN_irqen_dma_error_WIDTH         (1U)
#define VSPA_IRQEN_irqen_dma_error(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_IRQEN_irqen_dma_error_SHIFT)) & VSPA_IRQEN_irqen_dma_error_MASK)

#define VSPA_IRQEN_irqen_vcpu_iit_MASK           (0x80U)
#define VSPA_IRQEN_irqen_vcpu_iit_SHIFT          (7U)
#define VSPA_IRQEN_irqen_vcpu_iit_WIDTH          (1U)
#define VSPA_IRQEN_irqen_vcpu_iit(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_IRQEN_irqen_vcpu_iit_SHIFT)) & VSPA_IRQEN_irqen_vcpu_iit_MASK)

#define VSPA_IRQEN_irqen_vcpu_sent_msg0_MASK     (0x1000U)
#define VSPA_IRQEN_irqen_vcpu_sent_msg0_SHIFT    (12U)
#define VSPA_IRQEN_irqen_vcpu_sent_msg0_WIDTH    (1U)
#define VSPA_IRQEN_irqen_vcpu_sent_msg0(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_IRQEN_irqen_vcpu_sent_msg0_SHIFT)) & VSPA_IRQEN_irqen_vcpu_sent_msg0_MASK)

#define VSPA_IRQEN_irqen_vcpu_sent_msg1_MASK     (0x2000U)
#define VSPA_IRQEN_irqen_vcpu_sent_msg1_SHIFT    (13U)
#define VSPA_IRQEN_irqen_vcpu_sent_msg1_WIDTH    (1U)
#define VSPA_IRQEN_irqen_vcpu_sent_msg1(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_IRQEN_irqen_vcpu_sent_msg1_SHIFT)) & VSPA_IRQEN_irqen_vcpu_sent_msg1_MASK)

#define VSPA_IRQEN_irqen_vcpu_read_msg0_MASK     (0x4000U)
#define VSPA_IRQEN_irqen_vcpu_read_msg0_SHIFT    (14U)
#define VSPA_IRQEN_irqen_vcpu_read_msg0_WIDTH    (1U)
#define VSPA_IRQEN_irqen_vcpu_read_msg0(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_IRQEN_irqen_vcpu_read_msg0_SHIFT)) & VSPA_IRQEN_irqen_vcpu_read_msg0_MASK)

#define VSPA_IRQEN_irqen_vcpu_read_msg1_MASK     (0x8000U)
#define VSPA_IRQEN_irqen_vcpu_read_msg1_SHIFT    (15U)
#define VSPA_IRQEN_irqen_vcpu_read_msg1_WIDTH    (1U)
#define VSPA_IRQEN_irqen_vcpu_read_msg1(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_IRQEN_irqen_vcpu_read_msg1_SHIFT)) & VSPA_IRQEN_irqen_vcpu_read_msg1_MASK)
/*! @} */

/*! @name STATUS - VSPA Source 1 Info */
/*! @{ */

#define VSPA_STATUS_done_MASK                    (0x1U)
#define VSPA_STATUS_done_SHIFT                   (0U)
#define VSPA_STATUS_done_WIDTH                   (1U)
#define VSPA_STATUS_done(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_done_SHIFT)) & VSPA_STATUS_done_MASK)

#define VSPA_STATUS_irq_pend_ippu_done_MASK      (0x2U)
#define VSPA_STATUS_irq_pend_ippu_done_SHIFT     (1U)
#define VSPA_STATUS_irq_pend_ippu_done_WIDTH     (1U)
#define VSPA_STATUS_irq_pend_ippu_done(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_irq_pend_ippu_done_SHIFT)) & VSPA_STATUS_irq_pend_ippu_done_MASK)

#define VSPA_STATUS_irq_pend_flags0_MASK         (0x4U)
#define VSPA_STATUS_irq_pend_flags0_SHIFT        (2U)
#define VSPA_STATUS_irq_pend_flags0_WIDTH        (1U)
#define VSPA_STATUS_irq_pend_flags0(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_irq_pend_flags0_SHIFT)) & VSPA_STATUS_irq_pend_flags0_MASK)

#define VSPA_STATUS_irq_pend_flags1_MASK         (0x8U)
#define VSPA_STATUS_irq_pend_flags1_SHIFT        (3U)
#define VSPA_STATUS_irq_pend_flags1_WIDTH        (1U)
#define VSPA_STATUS_irq_pend_flags1(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_irq_pend_flags1_SHIFT)) & VSPA_STATUS_irq_pend_flags1_MASK)

#define VSPA_STATUS_irq_pend_dma_comp_MASK       (0x10U)
#define VSPA_STATUS_irq_pend_dma_comp_SHIFT      (4U)
#define VSPA_STATUS_irq_pend_dma_comp_WIDTH      (1U)
#define VSPA_STATUS_irq_pend_dma_comp(x)         (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_irq_pend_dma_comp_SHIFT)) & VSPA_STATUS_irq_pend_dma_comp_MASK)

#define VSPA_STATUS_irq_pend_dma_error_MASK      (0x20U)
#define VSPA_STATUS_irq_pend_dma_error_SHIFT     (5U)
#define VSPA_STATUS_irq_pend_dma_error_WIDTH     (1U)
#define VSPA_STATUS_irq_pend_dma_error(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_irq_pend_dma_error_SHIFT)) & VSPA_STATUS_irq_pend_dma_error_MASK)

#define VSPA_STATUS_vcpu_iit_MASK                (0x80U)
#define VSPA_STATUS_vcpu_iit_SHIFT               (7U)
#define VSPA_STATUS_vcpu_iit_WIDTH               (1U)
#define VSPA_STATUS_vcpu_iit(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_vcpu_iit_SHIFT)) & VSPA_STATUS_vcpu_iit_MASK)

#define VSPA_STATUS_busy_MASK                    (0x100U)
#define VSPA_STATUS_busy_SHIFT                   (8U)
#define VSPA_STATUS_busy_WIDTH                   (1U)
#define VSPA_STATUS_busy(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_busy_SHIFT)) & VSPA_STATUS_busy_MASK)

#define VSPA_STATUS_vcpu_sent_msg0_MASK          (0x1000U)
#define VSPA_STATUS_vcpu_sent_msg0_SHIFT         (12U)
#define VSPA_STATUS_vcpu_sent_msg0_WIDTH         (1U)
#define VSPA_STATUS_vcpu_sent_msg0(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_vcpu_sent_msg0_SHIFT)) & VSPA_STATUS_vcpu_sent_msg0_MASK)

#define VSPA_STATUS_vcpu_sent_msg1_MASK          (0x2000U)
#define VSPA_STATUS_vcpu_sent_msg1_SHIFT         (13U)
#define VSPA_STATUS_vcpu_sent_msg1_WIDTH         (1U)
#define VSPA_STATUS_vcpu_sent_msg1(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_vcpu_sent_msg1_SHIFT)) & VSPA_STATUS_vcpu_sent_msg1_MASK)

#define VSPA_STATUS_vcpu_read_msg0_MASK          (0x4000U)
#define VSPA_STATUS_vcpu_read_msg0_SHIFT         (14U)
#define VSPA_STATUS_vcpu_read_msg0_WIDTH         (1U)
#define VSPA_STATUS_vcpu_read_msg0(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_vcpu_read_msg0_SHIFT)) & VSPA_STATUS_vcpu_read_msg0_MASK)

#define VSPA_STATUS_vcpu_read_msg1_MASK          (0x8000U)
#define VSPA_STATUS_vcpu_read_msg1_SHIFT         (15U)
#define VSPA_STATUS_vcpu_read_msg1_WIDTH         (1U)
#define VSPA_STATUS_vcpu_read_msg1(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_vcpu_read_msg1_SHIFT)) & VSPA_STATUS_vcpu_read_msg1_MASK)

#define VSPA_STATUS_dma_halt_ack_MASK            (0x20000U)
#define VSPA_STATUS_dma_halt_ack_SHIFT           (17U)
#define VSPA_STATUS_dma_halt_ack_WIDTH           (1U)
#define VSPA_STATUS_dma_halt_ack(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_STATUS_dma_halt_ack_SHIFT)) & VSPA_STATUS_dma_halt_ack_MASK)
/*! @} */

/*! @name VCPU_HOST_FLAGS - VCPU to Host flags register a */
/*! @{ */

#define VSPA_VCPU_HOST_FLAGS_flagn_MASK          (0xFFFFFFFFU)
#define VSPA_VCPU_HOST_FLAGS_flagn_SHIFT         (0U)
#define VSPA_VCPU_HOST_FLAGS_flagn_WIDTH         (32U)
#define VSPA_VCPU_HOST_FLAGS_flagn(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_HOST_FLAGS_flagn_SHIFT)) & VSPA_VCPU_HOST_FLAGS_flagn_MASK)
/*! @} */

/*! @name HOST_VCPU_FLAGS - Host to VCPU Flags register a */
/*! @{ */

#define VSPA_HOST_VCPU_FLAGS_flagn_MASK          (0xFFFFFFFFU)
#define VSPA_HOST_VCPU_FLAGS_flagn_SHIFT         (0U)
#define VSPA_HOST_VCPU_FLAGS_flagn_WIDTH         (32U)
#define VSPA_HOST_VCPU_FLAGS_flagn(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_VCPU_FLAGS_flagn_SHIFT)) & VSPA_HOST_VCPU_FLAGS_flagn_MASK)
/*! @} */

/*! @name EXT_GO_ENA - External Go Enable */
/*! @{ */

#define VSPA_EXT_GO_ENA_ext_go_ena_MASK          (0xFFFFFFFFU)
#define VSPA_EXT_GO_ENA_ext_go_ena_SHIFT         (0U)
#define VSPA_EXT_GO_ENA_ext_go_ena_WIDTH         (32U)
#define VSPA_EXT_GO_ENA_ext_go_ena(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_EXT_GO_ENA_ext_go_ena_SHIFT)) & VSPA_EXT_GO_ENA_ext_go_ena_MASK)
/*! @} */

/*! @name EXT_GO_STAT - External Go Status */
/*! @{ */

#define VSPA_EXT_GO_STAT_ext_go_stat_MASK        (0xFFFFFFFFU)
#define VSPA_EXT_GO_STAT_ext_go_stat_SHIFT       (0U)
#define VSPA_EXT_GO_STAT_ext_go_stat_WIDTH       (32U)
#define VSPA_EXT_GO_STAT_ext_go_stat(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_EXT_GO_STAT_ext_go_stat_SHIFT)) & VSPA_EXT_GO_STAT_ext_go_stat_MASK)
/*! @} */

/*! @name ILLOP_STATUS - VSPA VCPU Illegal Opcode Address */
/*! @{ */

#define VSPA_ILLOP_STATUS_vcpu_illop_addr_MASK   (0x1FFFFFFU)
#define VSPA_ILLOP_STATUS_vcpu_illop_addr_SHIFT  (0U)
#define VSPA_ILLOP_STATUS_vcpu_illop_addr_WIDTH  (25U)
#define VSPA_ILLOP_STATUS_vcpu_illop_addr(x)     (((uint32_t)(((uint32_t)(x)) << VSPA_ILLOP_STATUS_vcpu_illop_addr_SHIFT)) & VSPA_ILLOP_STATUS_vcpu_illop_addr_MASK)
/*! @} */

/*! @name PARAM0 - VSPA Parameters 0 */
/*! @{ */

#define VSPA_PARAM0_atid_value_MASK              (0x7FU)
#define VSPA_PARAM0_atid_value_SHIFT             (0U)
#define VSPA_PARAM0_atid_value_WIDTH             (7U)
#define VSPA_PARAM0_atid_value(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_atid_value_SHIFT)) & VSPA_PARAM0_atid_value_MASK)

#define VSPA_PARAM0_st_llr8_qam_enable_MASK      (0x80U)
#define VSPA_PARAM0_st_llr8_qam_enable_SHIFT     (7U)
#define VSPA_PARAM0_st_llr8_qam_enable_WIDTH     (1U)
#define VSPA_PARAM0_st_llr8_qam_enable(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_st_llr8_qam_enable_SHIFT)) & VSPA_PARAM0_st_llr8_qam_enable_MASK)

#define VSPA_PARAM0_unalign_MASK                 (0x700U)
#define VSPA_PARAM0_unalign_SHIFT                (8U)
#define VSPA_PARAM0_unalign_WIDTH                (3U)
#define VSPA_PARAM0_unalign(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_unalign_SHIFT)) & VSPA_PARAM0_unalign_MASK)

#define VSPA_PARAM0_cgu_present_MASK             (0x800U)
#define VSPA_PARAM0_cgu_present_SHIFT            (11U)
#define VSPA_PARAM0_cgu_present_WIDTH            (1U)
#define VSPA_PARAM0_cgu_present(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_cgu_present_SHIFT)) & VSPA_PARAM0_cgu_present_MASK)

#define VSPA_PARAM0_atan_present_MASK            (0x1000U)
#define VSPA_PARAM0_atan_present_SHIFT           (12U)
#define VSPA_PARAM0_atan_present_WIDTH           (1U)
#define VSPA_PARAM0_atan_present(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_atan_present_SHIFT)) & VSPA_PARAM0_atan_present_MASK)

#define VSPA_PARAM0_rcp_present_MASK             (0x2000U)
#define VSPA_PARAM0_rcp_present_SHIFT            (13U)
#define VSPA_PARAM0_rcp_present_WIDTH            (1U)
#define VSPA_PARAM0_rcp_present(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_rcp_present_SHIFT)) & VSPA_PARAM0_rcp_present_MASK)

#define VSPA_PARAM0_rrt_present_MASK             (0x4000U)
#define VSPA_PARAM0_rrt_present_SHIFT            (14U)
#define VSPA_PARAM0_rrt_present_WIDTH            (1U)
#define VSPA_PARAM0_rrt_present(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_rrt_present_SHIFT)) & VSPA_PARAM0_rrt_present_MASK)

#define VSPA_PARAM0_srt_present_MASK             (0x8000U)
#define VSPA_PARAM0_srt_present_SHIFT            (15U)
#define VSPA_PARAM0_srt_present_WIDTH            (1U)
#define VSPA_PARAM0_srt_present(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_srt_present_SHIFT)) & VSPA_PARAM0_srt_present_MASK)

#define VSPA_PARAM0_cmm_present_MASK             (0x10000U)
#define VSPA_PARAM0_cmm_present_SHIFT            (16U)
#define VSPA_PARAM0_cmm_present_WIDTH            (1U)
#define VSPA_PARAM0_cmm_present(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_cmm_present_SHIFT)) & VSPA_PARAM0_cmm_present_MASK)

#define VSPA_PARAM0_nco_present_MASK             (0x20000U)
#define VSPA_PARAM0_nco_present_SHIFT            (17U)
#define VSPA_PARAM0_nco_present_WIDTH            (1U)
#define VSPA_PARAM0_nco_present(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_nco_present_SHIFT)) & VSPA_PARAM0_nco_present_MASK)

#define VSPA_PARAM0_dma_di_eng_MASK              (0x40000U)
#define VSPA_PARAM0_dma_di_eng_SHIFT             (18U)
#define VSPA_PARAM0_dma_di_eng_WIDTH             (1U)
#define VSPA_PARAM0_dma_di_eng(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_dma_di_eng_SHIFT)) & VSPA_PARAM0_dma_di_eng_MASK)

#define VSPA_PARAM0_thread_protection_MASK       (0x80000U)
#define VSPA_PARAM0_thread_protection_SHIFT      (19U)
#define VSPA_PARAM0_thread_protection_WIDTH      (1U)
#define VSPA_PARAM0_thread_protection(x)         (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_thread_protection_SHIFT)) & VSPA_PARAM0_thread_protection_MASK)

#define VSPA_PARAM0_lut_table_count_MASK         (0x7F00000U)
#define VSPA_PARAM0_lut_table_count_SHIFT        (20U)
#define VSPA_PARAM0_lut_table_count_WIDTH        (7U)
#define VSPA_PARAM0_lut_table_count(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_lut_table_count_SHIFT)) & VSPA_PARAM0_lut_table_count_MASK)

#define VSPA_PARAM0_axi_sideband_width_MASK      (0x38000000U)
#define VSPA_PARAM0_axi_sideband_width_SHIFT     (27U)
#define VSPA_PARAM0_axi_sideband_width_WIDTH     (3U)
#define VSPA_PARAM0_axi_sideband_width(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_axi_sideband_width_SHIFT)) & VSPA_PARAM0_axi_sideband_width_MASK)

#define VSPA_PARAM0_vcpu_isolate_MASK            (0x40000000U)
#define VSPA_PARAM0_vcpu_isolate_SHIFT           (30U)
#define VSPA_PARAM0_vcpu_isolate_WIDTH           (1U)
#define VSPA_PARAM0_vcpu_isolate(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_vcpu_isolate_SHIFT)) & VSPA_PARAM0_vcpu_isolate_MASK)

#define VSPA_PARAM0_ippu_isolate_MASK            (0x80000000U)
#define VSPA_PARAM0_ippu_isolate_SHIFT           (31U)
#define VSPA_PARAM0_ippu_isolate_WIDTH           (1U)
#define VSPA_PARAM0_ippu_isolate(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM0_ippu_isolate_SHIFT)) & VSPA_PARAM0_ippu_isolate_MASK)
/*! @} */

/*! @name PARAM1 - VSPA Parameters 1 */
/*! @{ */

#define VSPA_PARAM1_gp_in_MASK                   (0xFFU)
#define VSPA_PARAM1_gp_in_SHIFT                  (0U)
#define VSPA_PARAM1_gp_in_WIDTH                  (8U)
#define VSPA_PARAM1_gp_in(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM1_gp_in_SHIFT)) & VSPA_PARAM1_gp_in_MASK)

#define VSPA_PARAM1_gp_out_MASK                  (0xFF00U)
#define VSPA_PARAM1_gp_out_SHIFT                 (8U)
#define VSPA_PARAM1_gp_out_WIDTH                 (8U)
#define VSPA_PARAM1_gp_out(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM1_gp_out_SHIFT)) & VSPA_PARAM1_gp_out_MASK)

#define VSPA_PARAM1_dma_cnt_MASK                 (0xFF0000U)
#define VSPA_PARAM1_dma_cnt_SHIFT                (16U)
#define VSPA_PARAM1_dma_cnt_WIDTH                (8U)
#define VSPA_PARAM1_dma_cnt(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM1_dma_cnt_SHIFT)) & VSPA_PARAM1_dma_cnt_MASK)

#define VSPA_PARAM1_axi_id_width_MASK            (0xF000000U)
#define VSPA_PARAM1_axi_id_width_SHIFT           (24U)
#define VSPA_PARAM1_axi_id_width_WIDTH           (4U)
#define VSPA_PARAM1_axi_id_width(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM1_axi_id_width_SHIFT)) & VSPA_PARAM1_axi_id_width_MASK)

#define VSPA_PARAM1_axi_data_width_MASK          (0x70000000U)
#define VSPA_PARAM1_axi_data_width_SHIFT         (28U)
#define VSPA_PARAM1_axi_data_width_WIDTH         (3U)
#define VSPA_PARAM1_axi_data_width(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM1_axi_data_width_SHIFT)) & VSPA_PARAM1_axi_data_width_MASK)

#define VSPA_PARAM1_rsse_MASK                    (0x80000000U)
#define VSPA_PARAM1_rsse_SHIFT                   (31U)
#define VSPA_PARAM1_rsse_WIDTH                   (1U)
#define VSPA_PARAM1_rsse(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM1_rsse_SHIFT)) & VSPA_PARAM1_rsse_MASK)
/*! @} */

/*! @name PARAM2 - VSPA Parameters 2 */
/*! @{ */

#define VSPA_PARAM2_nau_MASK                     (0xFFU)
#define VSPA_PARAM2_nau_SHIFT                    (0U)
#define VSPA_PARAM2_nau_WIDTH                    (8U)
#define VSPA_PARAM2_nau(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_nau_SHIFT)) & VSPA_PARAM2_nau_MASK)

#define VSPA_PARAM2_float16_nco_padd_MASK        (0x100U)
#define VSPA_PARAM2_float16_nco_padd_SHIFT       (8U)
#define VSPA_PARAM2_float16_nco_padd_WIDTH       (1U)
#define VSPA_PARAM2_float16_nco_padd(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_float16_nco_padd_SHIFT)) & VSPA_PARAM2_float16_nco_padd_MASK)

#define VSPA_PARAM2_scalar_fp_present_MASK       (0x200U)
#define VSPA_PARAM2_scalar_fp_present_SHIFT      (9U)
#define VSPA_PARAM2_scalar_fp_present_WIDTH      (1U)
#define VSPA_PARAM2_scalar_fp_present(x)         (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_scalar_fp_present_SHIFT)) & VSPA_PARAM2_scalar_fp_present_MASK)

#define VSPA_PARAM2_exp_present_MASK             (0x400U)
#define VSPA_PARAM2_exp_present_SHIFT            (10U)
#define VSPA_PARAM2_exp_present_WIDTH            (1U)
#define VSPA_PARAM2_exp_present(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_exp_present_SHIFT)) & VSPA_PARAM2_exp_present_MASK)

#define VSPA_PARAM2_log2_present_MASK            (0x800U)
#define VSPA_PARAM2_log2_present_SHIFT           (11U)
#define VSPA_PARAM2_log2_present_WIDTH           (1U)
#define VSPA_PARAM2_log2_present(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_log2_present_SHIFT)) & VSPA_PARAM2_log2_present_MASK)

#define VSPA_PARAM2_sin_cos_present_MASK         (0x1000U)
#define VSPA_PARAM2_sin_cos_present_SHIFT        (12U)
#define VSPA_PARAM2_sin_cos_present_WIDTH        (1U)
#define VSPA_PARAM2_sin_cos_present(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_sin_cos_present_SHIFT)) & VSPA_PARAM2_sin_cos_present_MASK)

#define VSPA_PARAM2_ippu_vinx_present_MASK       (0x2000U)
#define VSPA_PARAM2_ippu_vinx_present_SHIFT      (13U)
#define VSPA_PARAM2_ippu_vinx_present_WIDTH      (1U)
#define VSPA_PARAM2_ippu_vinx_present(x)         (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_ippu_vinx_present_SHIFT)) & VSPA_PARAM2_ippu_vinx_present_MASK)

#define VSPA_PARAM2_vec_pred_present_MASK        (0x4000U)
#define VSPA_PARAM2_vec_pred_present_SHIFT       (14U)
#define VSPA_PARAM2_vec_pred_present_WIDTH       (1U)
#define VSPA_PARAM2_vec_pred_present(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_vec_pred_present_SHIFT)) & VSPA_PARAM2_vec_pred_present_MASK)

#define VSPA_PARAM2_vec_red_present_MASK         (0x8000U)
#define VSPA_PARAM2_vec_red_present_SHIFT        (15U)
#define VSPA_PARAM2_vec_red_present_WIDTH        (1U)
#define VSPA_PARAM2_vec_red_present(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_vec_red_present_SHIFT)) & VSPA_PARAM2_vec_red_present_MASK)

#define VSPA_PARAM2_dma_rd_eng_count_MASK        (0x1F0000U)
#define VSPA_PARAM2_dma_rd_eng_count_SHIFT       (16U)
#define VSPA_PARAM2_dma_rd_eng_count_WIDTH       (5U)
#define VSPA_PARAM2_dma_rd_eng_count(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_dma_rd_eng_count_SHIFT)) & VSPA_PARAM2_dma_rd_eng_count_MASK)

#define VSPA_PARAM2_dma_parity_present_MASK      (0x200000U)
#define VSPA_PARAM2_dma_parity_present_SHIFT     (21U)
#define VSPA_PARAM2_dma_parity_present_WIDTH     (1U)
#define VSPA_PARAM2_dma_parity_present(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_dma_parity_present_SHIFT)) & VSPA_PARAM2_dma_parity_present_MASK)

#define VSPA_PARAM2_float16_MASK                 (0x400000U)
#define VSPA_PARAM2_float16_SHIFT                (22U)
#define VSPA_PARAM2_float16_WIDTH                (1U)
#define VSPA_PARAM2_float16(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_float16_SHIFT)) & VSPA_PARAM2_float16_MASK)

#define VSPA_PARAM2_float64_MASK                 (0x800000U)
#define VSPA_PARAM2_float64_SHIFT                (23U)
#define VSPA_PARAM2_float64_WIDTH                (1U)
#define VSPA_PARAM2_float64(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_float64_SHIFT)) & VSPA_PARAM2_float64_MASK)

#define VSPA_PARAM2_rf_2scomp_present_MASK       (0x7000000U)
#define VSPA_PARAM2_rf_2scomp_present_SHIFT      (24U)
#define VSPA_PARAM2_rf_2scomp_present_WIDTH      (3U)
#define VSPA_PARAM2_rf_2scomp_present(x)         (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_rf_2scomp_present_SHIFT)) & VSPA_PARAM2_rf_2scomp_present_MASK)

#define VSPA_PARAM2_ld_elem_reorder_MASK         (0x8000000U)
#define VSPA_PARAM2_ld_elem_reorder_SHIFT        (27U)
#define VSPA_PARAM2_ld_elem_reorder_WIDTH        (1U)
#define VSPA_PARAM2_ld_elem_reorder(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_ld_elem_reorder_SHIFT)) & VSPA_PARAM2_ld_elem_reorder_MASK)

#define VSPA_PARAM2_fecu_present_MASK            (0x40000000U)
#define VSPA_PARAM2_fecu_present_SHIFT           (30U)
#define VSPA_PARAM2_fecu_present_WIDTH           (1U)
#define VSPA_PARAM2_fecu_present(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_fecu_present_SHIFT)) & VSPA_PARAM2_fecu_present_MASK)

#define VSPA_PARAM2_ippu_present_MASK            (0x80000000U)
#define VSPA_PARAM2_ippu_present_SHIFT           (31U)
#define VSPA_PARAM2_ippu_present_WIDTH           (1U)
#define VSPA_PARAM2_ippu_present(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM2_ippu_present_SHIFT)) & VSPA_PARAM2_ippu_present_MASK)
/*! @} */

/*! @name DMEM0_SIZE - VCPU DMEM Size */
/*! @{ */

#define VSPA_DMEM0_SIZE_dmem0_size_MASK          (0xFFFFFFFFU)
#define VSPA_DMEM0_SIZE_dmem0_size_SHIFT         (0U)
#define VSPA_DMEM0_SIZE_dmem0_size_WIDTH         (32U)
#define VSPA_DMEM0_SIZE_dmem0_size(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_DMEM0_SIZE_dmem0_size_SHIFT)) & VSPA_DMEM0_SIZE_dmem0_size_MASK)
/*! @} */

/*! @name AXISLV_FLAGS - AXI Slave flags register a */
/*! @{ */

#define VSPA_AXISLV_FLAGS_axislv_flagn_MASK      (0xFFFFFFFFU)
#define VSPA_AXISLV_FLAGS_axislv_flagn_SHIFT     (0U)
#define VSPA_AXISLV_FLAGS_axislv_flagn_WIDTH     (32U)
#define VSPA_AXISLV_FLAGS_axislv_flagn(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_AXISLV_FLAGS_axislv_flagn_SHIFT)) & VSPA_AXISLV_FLAGS_axislv_flagn_MASK)
/*! @} */

/*! @name AXISLV_GOEN - AXI Slave Go Enable register a */
/*! @{ */

#define VSPA_AXISLV_GOEN_axislv_goenn_MASK       (0xFFFFFFFFU)
#define VSPA_AXISLV_GOEN_axislv_goenn_SHIFT      (0U)
#define VSPA_AXISLV_GOEN_axislv_goenn_WIDTH      (32U)
#define VSPA_AXISLV_GOEN_axislv_goenn(x)         (((uint32_t)(((uint32_t)(x)) << VSPA_AXISLV_GOEN_axislv_goenn_SHIFT)) & VSPA_AXISLV_GOEN_axislv_goenn_MASK)
/*! @} */

/*! @name PLAT_IN_0 - Platform Input */
/*! @{ */

#define VSPA_PLAT_IN_0_plat_in_MASK              (0xFFFFFFFFU)
#define VSPA_PLAT_IN_0_plat_in_SHIFT             (0U)
#define VSPA_PLAT_IN_0_plat_in_WIDTH             (32U)
#define VSPA_PLAT_IN_0_plat_in(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_PLAT_IN_0_plat_in_SHIFT)) & VSPA_PLAT_IN_0_plat_in_MASK)
/*! @} */

/*! @name PLAT_OUT_0 - Platform Output */
/*! @{ */

#define VSPA_PLAT_OUT_0_plat_out_MASK            (0xFFFFFFFFU)
#define VSPA_PLAT_OUT_0_plat_out_SHIFT           (0U)
#define VSPA_PLAT_OUT_0_plat_out_WIDTH           (32U)
#define VSPA_PLAT_OUT_0_plat_out(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_PLAT_OUT_0_plat_out_SHIFT)) & VSPA_PLAT_OUT_0_plat_out_MASK)
/*! @} */

/*! @name CYC_COUNTER_MSB - Cycle counter MSB register */
/*! @{ */

#define VSPA_CYC_COUNTER_MSB_cyc_cnt_msb_MASK    (0xFFFFU)
#define VSPA_CYC_COUNTER_MSB_cyc_cnt_msb_SHIFT   (0U)
#define VSPA_CYC_COUNTER_MSB_cyc_cnt_msb_WIDTH   (16U)
#define VSPA_CYC_COUNTER_MSB_cyc_cnt_msb(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_CYC_COUNTER_MSB_cyc_cnt_msb_SHIFT)) & VSPA_CYC_COUNTER_MSB_cyc_cnt_msb_MASK)

#define VSPA_CYC_COUNTER_MSB_cyn_cnt_en_MASK     (0x80000000U)
#define VSPA_CYC_COUNTER_MSB_cyn_cnt_en_SHIFT    (31U)
#define VSPA_CYC_COUNTER_MSB_cyn_cnt_en_WIDTH    (1U)
#define VSPA_CYC_COUNTER_MSB_cyn_cnt_en(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_CYC_COUNTER_MSB_cyn_cnt_en_SHIFT)) & VSPA_CYC_COUNTER_MSB_cyn_cnt_en_MASK)
/*! @} */

/*! @name CYC_COUNTER_LSB - Cycle Counter LSB Register */
/*! @{ */

#define VSPA_CYC_COUNTER_LSB_cyc_cnt_lsb_MASK    (0xFFFFFFFFU)
#define VSPA_CYC_COUNTER_LSB_cyc_cnt_lsb_SHIFT   (0U)
#define VSPA_CYC_COUNTER_LSB_cyc_cnt_lsb_WIDTH   (32U)
#define VSPA_CYC_COUNTER_LSB_cyc_cnt_lsb(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_CYC_COUNTER_LSB_cyc_cnt_lsb_SHIFT)) & VSPA_CYC_COUNTER_LSB_cyc_cnt_lsb_MASK)
/*! @} */

/*! @name DMA_DMEM_PRAM_ADDR - DMEM/PRAM Address */
/*! @{ */

#define VSPA_DMA_DMEM_PRAM_ADDR_starting_address_MASK (0x1FFFFFU)
#define VSPA_DMA_DMEM_PRAM_ADDR_starting_address_SHIFT (0U)
#define VSPA_DMA_DMEM_PRAM_ADDR_starting_address_WIDTH (21U)
#define VSPA_DMA_DMEM_PRAM_ADDR_starting_address(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_DMEM_PRAM_ADDR_starting_address_SHIFT)) & VSPA_DMA_DMEM_PRAM_ADDR_starting_address_MASK)
/*! @} */

/*! @name DMA_AXI_ADDRESS - DMA AXI Address */
/*! @{ */

#define VSPA_DMA_AXI_ADDRESS_starting_address_MASK (0xFFFFFFFFU)
#define VSPA_DMA_AXI_ADDRESS_starting_address_SHIFT (0U)
#define VSPA_DMA_AXI_ADDRESS_starting_address_WIDTH (32U)
#define VSPA_DMA_AXI_ADDRESS_starting_address(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_AXI_ADDRESS_starting_address_SHIFT)) & VSPA_DMA_AXI_ADDRESS_starting_address_MASK)
/*! @} */

/*! @name DMA_AXI_BYTE_CNT - AXI Byte Count register */
/*! @{ */

#define VSPA_DMA_AXI_BYTE_CNT_count_MASK         (0xFFFFU)
#define VSPA_DMA_AXI_BYTE_CNT_count_SHIFT        (0U)
#define VSPA_DMA_AXI_BYTE_CNT_count_WIDTH        (16U)
#define VSPA_DMA_AXI_BYTE_CNT_count(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_AXI_BYTE_CNT_count_SHIFT)) & VSPA_DMA_AXI_BYTE_CNT_count_MASK)
/*! @} */

/*! @name DMA_XFR_CTRL - DMA Transfer Control register */
/*! @{ */

#define VSPA_DMA_XFR_CTRL_channel_select_MASK    (0x1FU)
#define VSPA_DMA_XFR_CTRL_channel_select_SHIFT   (0U)
#define VSPA_DMA_XFR_CTRL_channel_select_WIDTH   (5U)
#define VSPA_DMA_XFR_CTRL_channel_select(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_channel_select_SHIFT)) & VSPA_DMA_XFR_CTRL_channel_select_MASK)

#define VSPA_DMA_XFR_CTRL_int_to_single_precision_MASK (0x20U)
#define VSPA_DMA_XFR_CTRL_int_to_single_precision_SHIFT (5U)
#define VSPA_DMA_XFR_CTRL_int_to_single_precision_WIDTH (1U)
#define VSPA_DMA_XFR_CTRL_int_to_single_precision(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_int_to_single_precision_SHIFT)) & VSPA_DMA_XFR_CTRL_int_to_single_precision_MASK)

#define VSPA_DMA_XFR_CTRL_br32_MASK              (0x40U)
#define VSPA_DMA_XFR_CTRL_br32_SHIFT             (6U)
#define VSPA_DMA_XFR_CTRL_br32_WIDTH             (1U)
#define VSPA_DMA_XFR_CTRL_br32(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_br32_SHIFT)) & VSPA_DMA_XFR_CTRL_br32_MASK)

#define VSPA_DMA_XFR_CTRL_multi_burst_MASK       (0x80U)
#define VSPA_DMA_XFR_CTRL_multi_burst_SHIFT      (7U)
#define VSPA_DMA_XFR_CTRL_multi_burst_WIDTH      (1U)
#define VSPA_DMA_XFR_CTRL_multi_burst(x)         (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_multi_burst_SHIFT)) & VSPA_DMA_XFR_CTRL_multi_burst_MASK)

#define VSPA_DMA_XFR_CTRL_trans_mode_select_MASK (0x700U)
#define VSPA_DMA_XFR_CTRL_trans_mode_select_SHIFT (8U)
#define VSPA_DMA_XFR_CTRL_trans_mode_select_WIDTH (3U)
#define VSPA_DMA_XFR_CTRL_trans_mode_select(x)   (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_trans_mode_select_SHIFT)) & VSPA_DMA_XFR_CTRL_trans_mode_select_MASK)

#define VSPA_DMA_XFR_CTRL_burst_type_MASK        (0x800U)
#define VSPA_DMA_XFR_CTRL_burst_type_SHIFT       (11U)
#define VSPA_DMA_XFR_CTRL_burst_type_WIDTH       (1U)
#define VSPA_DMA_XFR_CTRL_burst_type(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_burst_type_SHIFT)) & VSPA_DMA_XFR_CTRL_burst_type_MASK)

#define VSPA_DMA_XFR_CTRL_ippu_go_en_MASK        (0x1000U)
#define VSPA_DMA_XFR_CTRL_ippu_go_en_SHIFT       (12U)
#define VSPA_DMA_XFR_CTRL_ippu_go_en_WIDTH       (1U)
#define VSPA_DMA_XFR_CTRL_ippu_go_en(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_ippu_go_en_SHIFT)) & VSPA_DMA_XFR_CTRL_ippu_go_en_MASK)

#define VSPA_DMA_XFR_CTRL_vcpu_go_en_MASK        (0x2000U)
#define VSPA_DMA_XFR_CTRL_vcpu_go_en_SHIFT       (13U)
#define VSPA_DMA_XFR_CTRL_vcpu_go_en_WIDTH       (1U)
#define VSPA_DMA_XFR_CTRL_vcpu_go_en(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_vcpu_go_en_SHIFT)) & VSPA_DMA_XFR_CTRL_vcpu_go_en_MASK)

#define VSPA_DMA_XFR_CTRL_irq_en_MASK            (0x4000U)
#define VSPA_DMA_XFR_CTRL_irq_en_SHIFT           (14U)
#define VSPA_DMA_XFR_CTRL_irq_en_WIDTH           (1U)
#define VSPA_DMA_XFR_CTRL_irq_en(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_irq_en_SHIFT)) & VSPA_DMA_XFR_CTRL_irq_en_MASK)

#define VSPA_DMA_XFR_CTRL_ptr_rst_MASK           (0x8000U)
#define VSPA_DMA_XFR_CTRL_ptr_rst_SHIFT          (15U)
#define VSPA_DMA_XFR_CTRL_ptr_rst_WIDTH          (1U)
#define VSPA_DMA_XFR_CTRL_ptr_rst(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_ptr_rst_SHIFT)) & VSPA_DMA_XFR_CTRL_ptr_rst_MASK)

#define VSPA_DMA_XFR_CTRL_ext_trig_MASK          (0x10000U)
#define VSPA_DMA_XFR_CTRL_ext_trig_SHIFT         (16U)
#define VSPA_DMA_XFR_CTRL_ext_trig_WIDTH         (1U)
#define VSPA_DMA_XFR_CTRL_ext_trig(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_ext_trig_SHIFT)) & VSPA_DMA_XFR_CTRL_ext_trig_MASK)

#define VSPA_DMA_XFR_CTRL_ippu_trig_MASK         (0x20000U)
#define VSPA_DMA_XFR_CTRL_ippu_trig_SHIFT        (17U)
#define VSPA_DMA_XFR_CTRL_ippu_trig_WIDTH        (1U)
#define VSPA_DMA_XFR_CTRL_ippu_trig(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_ippu_trig_SHIFT)) & VSPA_DMA_XFR_CTRL_ippu_trig_MASK)

#define VSPA_DMA_XFR_CTRL_di_mode_MASK           (0x1C0000U)
#define VSPA_DMA_XFR_CTRL_di_mode_SHIFT          (18U)
#define VSPA_DMA_XFR_CTRL_di_mode_WIDTH          (3U)
#define VSPA_DMA_XFR_CTRL_di_mode(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_di_mode_SHIFT)) & VSPA_DMA_XFR_CTRL_di_mode_MASK)

#define VSPA_DMA_XFR_CTRL_sideband_MASK          (0xFF000000U)
#define VSPA_DMA_XFR_CTRL_sideband_SHIFT         (24U)
#define VSPA_DMA_XFR_CTRL_sideband_WIDTH         (8U)
#define VSPA_DMA_XFR_CTRL_sideband(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFR_CTRL_sideband_SHIFT)) & VSPA_DMA_XFR_CTRL_sideband_MASK)
/*! @} */

/*! @name DMA_STAT_ABORT - DMA Status/Abort Control */
/*! @{ */

#define VSPA_DMA_STAT_ABORT_dma_chan_n_MASK      (0xFFFFFFFFU)
#define VSPA_DMA_STAT_ABORT_dma_chan_n_SHIFT     (0U)
#define VSPA_DMA_STAT_ABORT_dma_chan_n_WIDTH     (32U)
#define VSPA_DMA_STAT_ABORT_dma_chan_n(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_STAT_ABORT_dma_chan_n_SHIFT)) & VSPA_DMA_STAT_ABORT_dma_chan_n_MASK)
/*! @} */

/*! @name DMA_IRQ_STAT - DMA IRQ Status */
/*! @{ */

#define VSPA_DMA_IRQ_STAT_irq_chan_n_MASK        (0xFFFFFFFFU)
#define VSPA_DMA_IRQ_STAT_irq_chan_n_SHIFT       (0U)
#define VSPA_DMA_IRQ_STAT_irq_chan_n_WIDTH       (32U)
#define VSPA_DMA_IRQ_STAT_irq_chan_n(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_IRQ_STAT_irq_chan_n_SHIFT)) & VSPA_DMA_IRQ_STAT_irq_chan_n_MASK)
/*! @} */

/*! @name DMA_COMP_STAT - DMA Complete Status */
/*! @{ */

#define VSPA_DMA_COMP_STAT_dma_comp_chan_n_MASK  (0xFFFFFFFFU)
#define VSPA_DMA_COMP_STAT_dma_comp_chan_n_SHIFT (0U)
#define VSPA_DMA_COMP_STAT_dma_comp_chan_n_WIDTH (32U)
#define VSPA_DMA_COMP_STAT_dma_comp_chan_n(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_COMP_STAT_dma_comp_chan_n_SHIFT)) & VSPA_DMA_COMP_STAT_dma_comp_chan_n_MASK)
/*! @} */

/*! @name DMA_XFRERR_STAT - DMA Transfer Error Status */
/*! @{ */

#define VSPA_DMA_XFRERR_STAT_xfr_error_chan_n_MASK (0xFFFFFFFFU)
#define VSPA_DMA_XFRERR_STAT_xfr_error_chan_n_SHIFT (0U)
#define VSPA_DMA_XFRERR_STAT_xfr_error_chan_n_WIDTH (32U)
#define VSPA_DMA_XFRERR_STAT_xfr_error_chan_n(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XFRERR_STAT_xfr_error_chan_n_SHIFT)) & VSPA_DMA_XFRERR_STAT_xfr_error_chan_n_MASK)
/*! @} */

/*! @name DMA_CFGERR_STAT - DMA Configuration Error Status */
/*! @{ */

#define VSPA_DMA_CFGERR_STAT_cfg_error_chan_n_MASK (0xFFFFFFFFU)
#define VSPA_DMA_CFGERR_STAT_cfg_error_chan_n_SHIFT (0U)
#define VSPA_DMA_CFGERR_STAT_cfg_error_chan_n_WIDTH (32U)
#define VSPA_DMA_CFGERR_STAT_cfg_error_chan_n(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_CFGERR_STAT_cfg_error_chan_n_SHIFT)) & VSPA_DMA_CFGERR_STAT_cfg_error_chan_n_MASK)
/*! @} */

/*! @name DMA_XRUN_STAT - DMA Transfer Running Status */
/*! @{ */

#define VSPA_DMA_XRUN_STAT_xfr_run_chan_n_MASK   (0xFFFFFFFFU)
#define VSPA_DMA_XRUN_STAT_xfr_run_chan_n_SHIFT  (0U)
#define VSPA_DMA_XRUN_STAT_xfr_run_chan_n_WIDTH  (32U)
#define VSPA_DMA_XRUN_STAT_xfr_run_chan_n(x)     (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_XRUN_STAT_xfr_run_chan_n_SHIFT)) & VSPA_DMA_XRUN_STAT_xfr_run_chan_n_MASK)
/*! @} */

/*! @name DMA_GO_STAT - DMA Go Status */
/*! @{ */

#define VSPA_DMA_GO_STAT_dma_go_chan_n_MASK      (0xFFFFFFFFU)
#define VSPA_DMA_GO_STAT_dma_go_chan_n_SHIFT     (0U)
#define VSPA_DMA_GO_STAT_dma_go_chan_n_WIDTH     (32U)
#define VSPA_DMA_GO_STAT_dma_go_chan_n(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_GO_STAT_dma_go_chan_n_SHIFT)) & VSPA_DMA_GO_STAT_dma_go_chan_n_MASK)
/*! @} */

/*! @name DMA_FIFO_STAT - DMA FIFO Availability Status */
/*! @{ */

#define VSPA_DMA_FIFO_STAT_fifo_avail_chan_n_MASK (0xFFFFFFFFU)
#define VSPA_DMA_FIFO_STAT_fifo_avail_chan_n_SHIFT (0U)
#define VSPA_DMA_FIFO_STAT_fifo_avail_chan_n_WIDTH (32U)
#define VSPA_DMA_FIFO_STAT_fifo_avail_chan_n(x)  (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_FIFO_STAT_fifo_avail_chan_n_SHIFT)) & VSPA_DMA_FIFO_STAT_fifo_avail_chan_n_MASK)
/*! @} */

/*! @name LD_RF_CONTROL - Load Register File Control register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_CONTROL_mode_MASK             (0xFU)
#define VSPA_LD_RF_CONTROL_mode_SHIFT            (0U)
#define VSPA_LD_RF_CONTROL_mode_WIDTH            (4U)
#define VSPA_LD_RF_CONTROL_mode(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_CONTROL_mode_SHIFT)) & VSPA_LD_RF_CONTROL_mode_MASK)

#define VSPA_LD_RF_CONTROL_imag_MASK             (0x10U)
#define VSPA_LD_RF_CONTROL_imag_SHIFT            (4U)
#define VSPA_LD_RF_CONTROL_imag_WIDTH            (1U)
#define VSPA_LD_RF_CONTROL_imag(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_CONTROL_imag_SHIFT)) & VSPA_LD_RF_CONTROL_imag_MASK)

#define VSPA_LD_RF_CONTROL_Cplx_MASK             (0x20U)
#define VSPA_LD_RF_CONTROL_Cplx_SHIFT            (5U)
#define VSPA_LD_RF_CONTROL_Cplx_WIDTH            (1U)
#define VSPA_LD_RF_CONTROL_Cplx(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_CONTROL_Cplx_SHIFT)) & VSPA_LD_RF_CONTROL_Cplx_MASK)

#define VSPA_LD_RF_CONTROL_SignPol_MASK          (0xC0U)
#define VSPA_LD_RF_CONTROL_SignPol_SHIFT         (6U)
#define VSPA_LD_RF_CONTROL_SignPol_WIDTH         (2U)
#define VSPA_LD_RF_CONTROL_SignPol(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_CONTROL_SignPol_SHIFT)) & VSPA_LD_RF_CONTROL_SignPol_MASK)

#define VSPA_LD_RF_CONTROL_Size2sComp_MASK       (0xF00U)
#define VSPA_LD_RF_CONTROL_Size2sComp_SHIFT      (8U)
#define VSPA_LD_RF_CONTROL_Size2sComp_WIDTH      (4U)
#define VSPA_LD_RF_CONTROL_Size2sComp(x)         (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_CONTROL_Size2sComp_SHIFT)) & VSPA_LD_RF_CONTROL_Size2sComp_MASK)

#define VSPA_LD_RF_CONTROL_tblWriteEn_b_MASK     (0x8000U)
#define VSPA_LD_RF_CONTROL_tblWriteEn_b_SHIFT    (15U)
#define VSPA_LD_RF_CONTROL_tblWriteEn_b_WIDTH    (1U)
#define VSPA_LD_RF_CONTROL_tblWriteEn_b(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_CONTROL_tblWriteEn_b_SHIFT)) & VSPA_LD_RF_CONTROL_tblWriteEn_b_MASK)

#define VSPA_LD_RF_CONTROL_Ilsb_MASK             (0xF0000U)
#define VSPA_LD_RF_CONTROL_Ilsb_SHIFT            (16U)
#define VSPA_LD_RF_CONTROL_Ilsb_WIDTH            (4U)
#define VSPA_LD_RF_CONTROL_Ilsb(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_CONTROL_Ilsb_SHIFT)) & VSPA_LD_RF_CONTROL_Ilsb_MASK)

#define VSPA_LD_RF_CONTROL_Isign_MASK            (0xF00000U)
#define VSPA_LD_RF_CONTROL_Isign_SHIFT           (20U)
#define VSPA_LD_RF_CONTROL_Isign_WIDTH           (4U)
#define VSPA_LD_RF_CONTROL_Isign(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_CONTROL_Isign_SHIFT)) & VSPA_LD_RF_CONTROL_Isign_MASK)

#define VSPA_LD_RF_CONTROL_Qlsb_MASK             (0xF000000U)
#define VSPA_LD_RF_CONTROL_Qlsb_SHIFT            (24U)
#define VSPA_LD_RF_CONTROL_Qlsb_WIDTH            (4U)
#define VSPA_LD_RF_CONTROL_Qlsb(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_CONTROL_Qlsb_SHIFT)) & VSPA_LD_RF_CONTROL_Qlsb_MASK)

#define VSPA_LD_RF_CONTROL_Qsign_MASK            (0xF0000000U)
#define VSPA_LD_RF_CONTROL_Qsign_SHIFT           (28U)
#define VSPA_LD_RF_CONTROL_Qsign_WIDTH           (4U)
#define VSPA_LD_RF_CONTROL_Qsign(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_CONTROL_Qsign_SHIFT)) & VSPA_LD_RF_CONTROL_Qsign_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_0 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_REAL_0_cp0_MASK            (0xFU)
#define VSPA_LD_RF_TB_REAL_0_cp0_SHIFT           (0U)
#define VSPA_LD_RF_TB_REAL_0_cp0_WIDTH           (4U)
#define VSPA_LD_RF_TB_REAL_0_cp0(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_0_cp0_SHIFT)) & VSPA_LD_RF_TB_REAL_0_cp0_MASK)

#define VSPA_LD_RF_TB_REAL_0_cp1_MASK            (0xF0U)
#define VSPA_LD_RF_TB_REAL_0_cp1_SHIFT           (4U)
#define VSPA_LD_RF_TB_REAL_0_cp1_WIDTH           (4U)
#define VSPA_LD_RF_TB_REAL_0_cp1(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_0_cp1_SHIFT)) & VSPA_LD_RF_TB_REAL_0_cp1_MASK)

#define VSPA_LD_RF_TB_REAL_0_cp2_MASK            (0xF00U)
#define VSPA_LD_RF_TB_REAL_0_cp2_SHIFT           (8U)
#define VSPA_LD_RF_TB_REAL_0_cp2_WIDTH           (4U)
#define VSPA_LD_RF_TB_REAL_0_cp2(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_0_cp2_SHIFT)) & VSPA_LD_RF_TB_REAL_0_cp2_MASK)

#define VSPA_LD_RF_TB_REAL_0_cp3_MASK            (0xF000U)
#define VSPA_LD_RF_TB_REAL_0_cp3_SHIFT           (12U)
#define VSPA_LD_RF_TB_REAL_0_cp3_WIDTH           (4U)
#define VSPA_LD_RF_TB_REAL_0_cp3(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_0_cp3_SHIFT)) & VSPA_LD_RF_TB_REAL_0_cp3_MASK)

#define VSPA_LD_RF_TB_REAL_0_cp4_MASK            (0xF0000U)
#define VSPA_LD_RF_TB_REAL_0_cp4_SHIFT           (16U)
#define VSPA_LD_RF_TB_REAL_0_cp4_WIDTH           (4U)
#define VSPA_LD_RF_TB_REAL_0_cp4(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_0_cp4_SHIFT)) & VSPA_LD_RF_TB_REAL_0_cp4_MASK)

#define VSPA_LD_RF_TB_REAL_0_cp5_MASK            (0xF00000U)
#define VSPA_LD_RF_TB_REAL_0_cp5_SHIFT           (20U)
#define VSPA_LD_RF_TB_REAL_0_cp5_WIDTH           (4U)
#define VSPA_LD_RF_TB_REAL_0_cp5(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_0_cp5_SHIFT)) & VSPA_LD_RF_TB_REAL_0_cp5_MASK)

#define VSPA_LD_RF_TB_REAL_0_cp6_MASK            (0xF000000U)
#define VSPA_LD_RF_TB_REAL_0_cp6_SHIFT           (24U)
#define VSPA_LD_RF_TB_REAL_0_cp6_WIDTH           (4U)
#define VSPA_LD_RF_TB_REAL_0_cp6(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_0_cp6_SHIFT)) & VSPA_LD_RF_TB_REAL_0_cp6_MASK)

#define VSPA_LD_RF_TB_REAL_0_cp7_MASK            (0xF0000000U)
#define VSPA_LD_RF_TB_REAL_0_cp7_SHIFT           (28U)
#define VSPA_LD_RF_TB_REAL_0_cp7_WIDTH           (4U)
#define VSPA_LD_RF_TB_REAL_0_cp7(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_0_cp7_SHIFT)) & VSPA_LD_RF_TB_REAL_0_cp7_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_0 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_IMAG_0_cp0_MASK            (0xFU)
#define VSPA_LD_RF_TB_IMAG_0_cp0_SHIFT           (0U)
#define VSPA_LD_RF_TB_IMAG_0_cp0_WIDTH           (4U)
#define VSPA_LD_RF_TB_IMAG_0_cp0(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_0_cp0_SHIFT)) & VSPA_LD_RF_TB_IMAG_0_cp0_MASK)

#define VSPA_LD_RF_TB_IMAG_0_cp1_MASK            (0xF0U)
#define VSPA_LD_RF_TB_IMAG_0_cp1_SHIFT           (4U)
#define VSPA_LD_RF_TB_IMAG_0_cp1_WIDTH           (4U)
#define VSPA_LD_RF_TB_IMAG_0_cp1(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_0_cp1_SHIFT)) & VSPA_LD_RF_TB_IMAG_0_cp1_MASK)

#define VSPA_LD_RF_TB_IMAG_0_cp2_MASK            (0xF00U)
#define VSPA_LD_RF_TB_IMAG_0_cp2_SHIFT           (8U)
#define VSPA_LD_RF_TB_IMAG_0_cp2_WIDTH           (4U)
#define VSPA_LD_RF_TB_IMAG_0_cp2(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_0_cp2_SHIFT)) & VSPA_LD_RF_TB_IMAG_0_cp2_MASK)

#define VSPA_LD_RF_TB_IMAG_0_cp3_MASK            (0xF000U)
#define VSPA_LD_RF_TB_IMAG_0_cp3_SHIFT           (12U)
#define VSPA_LD_RF_TB_IMAG_0_cp3_WIDTH           (4U)
#define VSPA_LD_RF_TB_IMAG_0_cp3(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_0_cp3_SHIFT)) & VSPA_LD_RF_TB_IMAG_0_cp3_MASK)

#define VSPA_LD_RF_TB_IMAG_0_cp4_MASK            (0xF0000U)
#define VSPA_LD_RF_TB_IMAG_0_cp4_SHIFT           (16U)
#define VSPA_LD_RF_TB_IMAG_0_cp4_WIDTH           (4U)
#define VSPA_LD_RF_TB_IMAG_0_cp4(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_0_cp4_SHIFT)) & VSPA_LD_RF_TB_IMAG_0_cp4_MASK)

#define VSPA_LD_RF_TB_IMAG_0_cp5_MASK            (0xF00000U)
#define VSPA_LD_RF_TB_IMAG_0_cp5_SHIFT           (20U)
#define VSPA_LD_RF_TB_IMAG_0_cp5_WIDTH           (4U)
#define VSPA_LD_RF_TB_IMAG_0_cp5(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_0_cp5_SHIFT)) & VSPA_LD_RF_TB_IMAG_0_cp5_MASK)

#define VSPA_LD_RF_TB_IMAG_0_cp6_MASK            (0xF000000U)
#define VSPA_LD_RF_TB_IMAG_0_cp6_SHIFT           (24U)
#define VSPA_LD_RF_TB_IMAG_0_cp6_WIDTH           (4U)
#define VSPA_LD_RF_TB_IMAG_0_cp6(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_0_cp6_SHIFT)) & VSPA_LD_RF_TB_IMAG_0_cp6_MASK)

#define VSPA_LD_RF_TB_IMAG_0_cp7_MASK            (0xF0000000U)
#define VSPA_LD_RF_TB_IMAG_0_cp7_SHIFT           (28U)
#define VSPA_LD_RF_TB_IMAG_0_cp7_WIDTH           (4U)
#define VSPA_LD_RF_TB_IMAG_0_cp7(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_0_cp7_SHIFT)) & VSPA_LD_RF_TB_IMAG_0_cp7_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_1 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_REAL_1_cp8_MASK            (0xFU)
#define VSPA_LD_RF_TB_REAL_1_cp8_SHIFT           (0U)
#define VSPA_LD_RF_TB_REAL_1_cp8_WIDTH           (4U)
#define VSPA_LD_RF_TB_REAL_1_cp8(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_1_cp8_SHIFT)) & VSPA_LD_RF_TB_REAL_1_cp8_MASK)

#define VSPA_LD_RF_TB_REAL_1_cp9_MASK            (0xF0U)
#define VSPA_LD_RF_TB_REAL_1_cp9_SHIFT           (4U)
#define VSPA_LD_RF_TB_REAL_1_cp9_WIDTH           (4U)
#define VSPA_LD_RF_TB_REAL_1_cp9(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_1_cp9_SHIFT)) & VSPA_LD_RF_TB_REAL_1_cp9_MASK)

#define VSPA_LD_RF_TB_REAL_1_cp10_MASK           (0xF00U)
#define VSPA_LD_RF_TB_REAL_1_cp10_SHIFT          (8U)
#define VSPA_LD_RF_TB_REAL_1_cp10_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_1_cp10(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_1_cp10_SHIFT)) & VSPA_LD_RF_TB_REAL_1_cp10_MASK)

#define VSPA_LD_RF_TB_REAL_1_cp11_MASK           (0xF000U)
#define VSPA_LD_RF_TB_REAL_1_cp11_SHIFT          (12U)
#define VSPA_LD_RF_TB_REAL_1_cp11_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_1_cp11(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_1_cp11_SHIFT)) & VSPA_LD_RF_TB_REAL_1_cp11_MASK)

#define VSPA_LD_RF_TB_REAL_1_cp12_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_REAL_1_cp12_SHIFT          (16U)
#define VSPA_LD_RF_TB_REAL_1_cp12_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_1_cp12(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_1_cp12_SHIFT)) & VSPA_LD_RF_TB_REAL_1_cp12_MASK)

#define VSPA_LD_RF_TB_REAL_1_cp13_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_REAL_1_cp13_SHIFT          (20U)
#define VSPA_LD_RF_TB_REAL_1_cp13_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_1_cp13(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_1_cp13_SHIFT)) & VSPA_LD_RF_TB_REAL_1_cp13_MASK)

#define VSPA_LD_RF_TB_REAL_1_cp14_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_REAL_1_cp14_SHIFT          (24U)
#define VSPA_LD_RF_TB_REAL_1_cp14_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_1_cp14(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_1_cp14_SHIFT)) & VSPA_LD_RF_TB_REAL_1_cp14_MASK)

#define VSPA_LD_RF_TB_REAL_1_cp15_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_REAL_1_cp15_SHIFT          (28U)
#define VSPA_LD_RF_TB_REAL_1_cp15_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_1_cp15(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_1_cp15_SHIFT)) & VSPA_LD_RF_TB_REAL_1_cp15_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_1 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_IMAG_1_cp8_MASK            (0xFU)
#define VSPA_LD_RF_TB_IMAG_1_cp8_SHIFT           (0U)
#define VSPA_LD_RF_TB_IMAG_1_cp8_WIDTH           (4U)
#define VSPA_LD_RF_TB_IMAG_1_cp8(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_1_cp8_SHIFT)) & VSPA_LD_RF_TB_IMAG_1_cp8_MASK)

#define VSPA_LD_RF_TB_IMAG_1_cp9_MASK            (0xF0U)
#define VSPA_LD_RF_TB_IMAG_1_cp9_SHIFT           (4U)
#define VSPA_LD_RF_TB_IMAG_1_cp9_WIDTH           (4U)
#define VSPA_LD_RF_TB_IMAG_1_cp9(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_1_cp9_SHIFT)) & VSPA_LD_RF_TB_IMAG_1_cp9_MASK)

#define VSPA_LD_RF_TB_IMAG_1_cp10_MASK           (0xF00U)
#define VSPA_LD_RF_TB_IMAG_1_cp10_SHIFT          (8U)
#define VSPA_LD_RF_TB_IMAG_1_cp10_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_1_cp10(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_1_cp10_SHIFT)) & VSPA_LD_RF_TB_IMAG_1_cp10_MASK)

#define VSPA_LD_RF_TB_IMAG_1_cp11_MASK           (0xF000U)
#define VSPA_LD_RF_TB_IMAG_1_cp11_SHIFT          (12U)
#define VSPA_LD_RF_TB_IMAG_1_cp11_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_1_cp11(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_1_cp11_SHIFT)) & VSPA_LD_RF_TB_IMAG_1_cp11_MASK)

#define VSPA_LD_RF_TB_IMAG_1_cp12_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_IMAG_1_cp12_SHIFT          (16U)
#define VSPA_LD_RF_TB_IMAG_1_cp12_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_1_cp12(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_1_cp12_SHIFT)) & VSPA_LD_RF_TB_IMAG_1_cp12_MASK)

#define VSPA_LD_RF_TB_IMAG_1_cp13_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_IMAG_1_cp13_SHIFT          (20U)
#define VSPA_LD_RF_TB_IMAG_1_cp13_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_1_cp13(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_1_cp13_SHIFT)) & VSPA_LD_RF_TB_IMAG_1_cp13_MASK)

#define VSPA_LD_RF_TB_IMAG_1_cp14_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_IMAG_1_cp14_SHIFT          (24U)
#define VSPA_LD_RF_TB_IMAG_1_cp14_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_1_cp14(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_1_cp14_SHIFT)) & VSPA_LD_RF_TB_IMAG_1_cp14_MASK)

#define VSPA_LD_RF_TB_IMAG_1_cp15_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_IMAG_1_cp15_SHIFT          (28U)
#define VSPA_LD_RF_TB_IMAG_1_cp15_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_1_cp15(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_1_cp15_SHIFT)) & VSPA_LD_RF_TB_IMAG_1_cp15_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_2 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_REAL_2_cp16_MASK           (0xFU)
#define VSPA_LD_RF_TB_REAL_2_cp16_SHIFT          (0U)
#define VSPA_LD_RF_TB_REAL_2_cp16_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_2_cp16(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_2_cp16_SHIFT)) & VSPA_LD_RF_TB_REAL_2_cp16_MASK)

#define VSPA_LD_RF_TB_REAL_2_cp17_MASK           (0xF0U)
#define VSPA_LD_RF_TB_REAL_2_cp17_SHIFT          (4U)
#define VSPA_LD_RF_TB_REAL_2_cp17_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_2_cp17(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_2_cp17_SHIFT)) & VSPA_LD_RF_TB_REAL_2_cp17_MASK)

#define VSPA_LD_RF_TB_REAL_2_cp18_MASK           (0xF00U)
#define VSPA_LD_RF_TB_REAL_2_cp18_SHIFT          (8U)
#define VSPA_LD_RF_TB_REAL_2_cp18_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_2_cp18(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_2_cp18_SHIFT)) & VSPA_LD_RF_TB_REAL_2_cp18_MASK)

#define VSPA_LD_RF_TB_REAL_2_cp19_MASK           (0xF000U)
#define VSPA_LD_RF_TB_REAL_2_cp19_SHIFT          (12U)
#define VSPA_LD_RF_TB_REAL_2_cp19_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_2_cp19(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_2_cp19_SHIFT)) & VSPA_LD_RF_TB_REAL_2_cp19_MASK)

#define VSPA_LD_RF_TB_REAL_2_cp20_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_REAL_2_cp20_SHIFT          (16U)
#define VSPA_LD_RF_TB_REAL_2_cp20_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_2_cp20(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_2_cp20_SHIFT)) & VSPA_LD_RF_TB_REAL_2_cp20_MASK)

#define VSPA_LD_RF_TB_REAL_2_cp21_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_REAL_2_cp21_SHIFT          (20U)
#define VSPA_LD_RF_TB_REAL_2_cp21_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_2_cp21(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_2_cp21_SHIFT)) & VSPA_LD_RF_TB_REAL_2_cp21_MASK)

#define VSPA_LD_RF_TB_REAL_2_cp22_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_REAL_2_cp22_SHIFT          (24U)
#define VSPA_LD_RF_TB_REAL_2_cp22_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_2_cp22(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_2_cp22_SHIFT)) & VSPA_LD_RF_TB_REAL_2_cp22_MASK)

#define VSPA_LD_RF_TB_REAL_2_cp23_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_REAL_2_cp23_SHIFT          (28U)
#define VSPA_LD_RF_TB_REAL_2_cp23_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_2_cp23(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_2_cp23_SHIFT)) & VSPA_LD_RF_TB_REAL_2_cp23_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_2 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_IMAG_2_cp16_MASK           (0xFU)
#define VSPA_LD_RF_TB_IMAG_2_cp16_SHIFT          (0U)
#define VSPA_LD_RF_TB_IMAG_2_cp16_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_2_cp16(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_2_cp16_SHIFT)) & VSPA_LD_RF_TB_IMAG_2_cp16_MASK)

#define VSPA_LD_RF_TB_IMAG_2_cp17_MASK           (0xF0U)
#define VSPA_LD_RF_TB_IMAG_2_cp17_SHIFT          (4U)
#define VSPA_LD_RF_TB_IMAG_2_cp17_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_2_cp17(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_2_cp17_SHIFT)) & VSPA_LD_RF_TB_IMAG_2_cp17_MASK)

#define VSPA_LD_RF_TB_IMAG_2_cp18_MASK           (0xF00U)
#define VSPA_LD_RF_TB_IMAG_2_cp18_SHIFT          (8U)
#define VSPA_LD_RF_TB_IMAG_2_cp18_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_2_cp18(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_2_cp18_SHIFT)) & VSPA_LD_RF_TB_IMAG_2_cp18_MASK)

#define VSPA_LD_RF_TB_IMAG_2_cp19_MASK           (0xF000U)
#define VSPA_LD_RF_TB_IMAG_2_cp19_SHIFT          (12U)
#define VSPA_LD_RF_TB_IMAG_2_cp19_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_2_cp19(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_2_cp19_SHIFT)) & VSPA_LD_RF_TB_IMAG_2_cp19_MASK)

#define VSPA_LD_RF_TB_IMAG_2_cp20_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_IMAG_2_cp20_SHIFT          (16U)
#define VSPA_LD_RF_TB_IMAG_2_cp20_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_2_cp20(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_2_cp20_SHIFT)) & VSPA_LD_RF_TB_IMAG_2_cp20_MASK)

#define VSPA_LD_RF_TB_IMAG_2_cp21_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_IMAG_2_cp21_SHIFT          (20U)
#define VSPA_LD_RF_TB_IMAG_2_cp21_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_2_cp21(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_2_cp21_SHIFT)) & VSPA_LD_RF_TB_IMAG_2_cp21_MASK)

#define VSPA_LD_RF_TB_IMAG_2_cp22_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_IMAG_2_cp22_SHIFT          (24U)
#define VSPA_LD_RF_TB_IMAG_2_cp22_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_2_cp22(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_2_cp22_SHIFT)) & VSPA_LD_RF_TB_IMAG_2_cp22_MASK)

#define VSPA_LD_RF_TB_IMAG_2_cp23_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_IMAG_2_cp23_SHIFT          (28U)
#define VSPA_LD_RF_TB_IMAG_2_cp23_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_2_cp23(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_2_cp23_SHIFT)) & VSPA_LD_RF_TB_IMAG_2_cp23_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_3 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_REAL_3_cp24_MASK           (0xFU)
#define VSPA_LD_RF_TB_REAL_3_cp24_SHIFT          (0U)
#define VSPA_LD_RF_TB_REAL_3_cp24_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_3_cp24(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_3_cp24_SHIFT)) & VSPA_LD_RF_TB_REAL_3_cp24_MASK)

#define VSPA_LD_RF_TB_REAL_3_cp25_MASK           (0xF0U)
#define VSPA_LD_RF_TB_REAL_3_cp25_SHIFT          (4U)
#define VSPA_LD_RF_TB_REAL_3_cp25_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_3_cp25(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_3_cp25_SHIFT)) & VSPA_LD_RF_TB_REAL_3_cp25_MASK)

#define VSPA_LD_RF_TB_REAL_3_cp26_MASK           (0xF00U)
#define VSPA_LD_RF_TB_REAL_3_cp26_SHIFT          (8U)
#define VSPA_LD_RF_TB_REAL_3_cp26_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_3_cp26(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_3_cp26_SHIFT)) & VSPA_LD_RF_TB_REAL_3_cp26_MASK)

#define VSPA_LD_RF_TB_REAL_3_cp27_MASK           (0xF000U)
#define VSPA_LD_RF_TB_REAL_3_cp27_SHIFT          (12U)
#define VSPA_LD_RF_TB_REAL_3_cp27_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_3_cp27(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_3_cp27_SHIFT)) & VSPA_LD_RF_TB_REAL_3_cp27_MASK)

#define VSPA_LD_RF_TB_REAL_3_cp28_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_REAL_3_cp28_SHIFT          (16U)
#define VSPA_LD_RF_TB_REAL_3_cp28_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_3_cp28(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_3_cp28_SHIFT)) & VSPA_LD_RF_TB_REAL_3_cp28_MASK)

#define VSPA_LD_RF_TB_REAL_3_cp29_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_REAL_3_cp29_SHIFT          (20U)
#define VSPA_LD_RF_TB_REAL_3_cp29_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_3_cp29(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_3_cp29_SHIFT)) & VSPA_LD_RF_TB_REAL_3_cp29_MASK)

#define VSPA_LD_RF_TB_REAL_3_cp30_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_REAL_3_cp30_SHIFT          (24U)
#define VSPA_LD_RF_TB_REAL_3_cp30_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_3_cp30(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_3_cp30_SHIFT)) & VSPA_LD_RF_TB_REAL_3_cp30_MASK)

#define VSPA_LD_RF_TB_REAL_3_cp31_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_REAL_3_cp31_SHIFT          (28U)
#define VSPA_LD_RF_TB_REAL_3_cp31_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_3_cp31(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_3_cp31_SHIFT)) & VSPA_LD_RF_TB_REAL_3_cp31_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_3 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_IMAG_3_cp24_MASK           (0xFU)
#define VSPA_LD_RF_TB_IMAG_3_cp24_SHIFT          (0U)
#define VSPA_LD_RF_TB_IMAG_3_cp24_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_3_cp24(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_3_cp24_SHIFT)) & VSPA_LD_RF_TB_IMAG_3_cp24_MASK)

#define VSPA_LD_RF_TB_IMAG_3_cp25_MASK           (0xF0U)
#define VSPA_LD_RF_TB_IMAG_3_cp25_SHIFT          (4U)
#define VSPA_LD_RF_TB_IMAG_3_cp25_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_3_cp25(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_3_cp25_SHIFT)) & VSPA_LD_RF_TB_IMAG_3_cp25_MASK)

#define VSPA_LD_RF_TB_IMAG_3_cp26_MASK           (0xF00U)
#define VSPA_LD_RF_TB_IMAG_3_cp26_SHIFT          (8U)
#define VSPA_LD_RF_TB_IMAG_3_cp26_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_3_cp26(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_3_cp26_SHIFT)) & VSPA_LD_RF_TB_IMAG_3_cp26_MASK)

#define VSPA_LD_RF_TB_IMAG_3_cp27_MASK           (0xF000U)
#define VSPA_LD_RF_TB_IMAG_3_cp27_SHIFT          (12U)
#define VSPA_LD_RF_TB_IMAG_3_cp27_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_3_cp27(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_3_cp27_SHIFT)) & VSPA_LD_RF_TB_IMAG_3_cp27_MASK)

#define VSPA_LD_RF_TB_IMAG_3_cp28_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_IMAG_3_cp28_SHIFT          (16U)
#define VSPA_LD_RF_TB_IMAG_3_cp28_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_3_cp28(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_3_cp28_SHIFT)) & VSPA_LD_RF_TB_IMAG_3_cp28_MASK)

#define VSPA_LD_RF_TB_IMAG_3_cp29_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_IMAG_3_cp29_SHIFT          (20U)
#define VSPA_LD_RF_TB_IMAG_3_cp29_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_3_cp29(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_3_cp29_SHIFT)) & VSPA_LD_RF_TB_IMAG_3_cp29_MASK)

#define VSPA_LD_RF_TB_IMAG_3_cp30_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_IMAG_3_cp30_SHIFT          (24U)
#define VSPA_LD_RF_TB_IMAG_3_cp30_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_3_cp30(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_3_cp30_SHIFT)) & VSPA_LD_RF_TB_IMAG_3_cp30_MASK)

#define VSPA_LD_RF_TB_IMAG_3_cp31_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_IMAG_3_cp31_SHIFT          (28U)
#define VSPA_LD_RF_TB_IMAG_3_cp31_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_3_cp31(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_3_cp31_SHIFT)) & VSPA_LD_RF_TB_IMAG_3_cp31_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_4 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_REAL_4_cp32_MASK           (0xFU)
#define VSPA_LD_RF_TB_REAL_4_cp32_SHIFT          (0U)
#define VSPA_LD_RF_TB_REAL_4_cp32_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_4_cp32(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_4_cp32_SHIFT)) & VSPA_LD_RF_TB_REAL_4_cp32_MASK)

#define VSPA_LD_RF_TB_REAL_4_cp33_MASK           (0xF0U)
#define VSPA_LD_RF_TB_REAL_4_cp33_SHIFT          (4U)
#define VSPA_LD_RF_TB_REAL_4_cp33_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_4_cp33(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_4_cp33_SHIFT)) & VSPA_LD_RF_TB_REAL_4_cp33_MASK)

#define VSPA_LD_RF_TB_REAL_4_cp34_MASK           (0xF00U)
#define VSPA_LD_RF_TB_REAL_4_cp34_SHIFT          (8U)
#define VSPA_LD_RF_TB_REAL_4_cp34_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_4_cp34(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_4_cp34_SHIFT)) & VSPA_LD_RF_TB_REAL_4_cp34_MASK)

#define VSPA_LD_RF_TB_REAL_4_cp35_MASK           (0xF000U)
#define VSPA_LD_RF_TB_REAL_4_cp35_SHIFT          (12U)
#define VSPA_LD_RF_TB_REAL_4_cp35_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_4_cp35(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_4_cp35_SHIFT)) & VSPA_LD_RF_TB_REAL_4_cp35_MASK)

#define VSPA_LD_RF_TB_REAL_4_cp36_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_REAL_4_cp36_SHIFT          (16U)
#define VSPA_LD_RF_TB_REAL_4_cp36_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_4_cp36(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_4_cp36_SHIFT)) & VSPA_LD_RF_TB_REAL_4_cp36_MASK)

#define VSPA_LD_RF_TB_REAL_4_cp37_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_REAL_4_cp37_SHIFT          (20U)
#define VSPA_LD_RF_TB_REAL_4_cp37_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_4_cp37(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_4_cp37_SHIFT)) & VSPA_LD_RF_TB_REAL_4_cp37_MASK)

#define VSPA_LD_RF_TB_REAL_4_cp38_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_REAL_4_cp38_SHIFT          (24U)
#define VSPA_LD_RF_TB_REAL_4_cp38_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_4_cp38(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_4_cp38_SHIFT)) & VSPA_LD_RF_TB_REAL_4_cp38_MASK)

#define VSPA_LD_RF_TB_REAL_4_cp39_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_REAL_4_cp39_SHIFT          (28U)
#define VSPA_LD_RF_TB_REAL_4_cp39_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_4_cp39(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_4_cp39_SHIFT)) & VSPA_LD_RF_TB_REAL_4_cp39_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_4 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_IMAG_4_cp32_MASK           (0xFU)
#define VSPA_LD_RF_TB_IMAG_4_cp32_SHIFT          (0U)
#define VSPA_LD_RF_TB_IMAG_4_cp32_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_4_cp32(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_4_cp32_SHIFT)) & VSPA_LD_RF_TB_IMAG_4_cp32_MASK)

#define VSPA_LD_RF_TB_IMAG_4_cp33_MASK           (0xF0U)
#define VSPA_LD_RF_TB_IMAG_4_cp33_SHIFT          (4U)
#define VSPA_LD_RF_TB_IMAG_4_cp33_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_4_cp33(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_4_cp33_SHIFT)) & VSPA_LD_RF_TB_IMAG_4_cp33_MASK)

#define VSPA_LD_RF_TB_IMAG_4_cp34_MASK           (0xF00U)
#define VSPA_LD_RF_TB_IMAG_4_cp34_SHIFT          (8U)
#define VSPA_LD_RF_TB_IMAG_4_cp34_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_4_cp34(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_4_cp34_SHIFT)) & VSPA_LD_RF_TB_IMAG_4_cp34_MASK)

#define VSPA_LD_RF_TB_IMAG_4_cp35_MASK           (0xF000U)
#define VSPA_LD_RF_TB_IMAG_4_cp35_SHIFT          (12U)
#define VSPA_LD_RF_TB_IMAG_4_cp35_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_4_cp35(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_4_cp35_SHIFT)) & VSPA_LD_RF_TB_IMAG_4_cp35_MASK)

#define VSPA_LD_RF_TB_IMAG_4_cp36_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_IMAG_4_cp36_SHIFT          (16U)
#define VSPA_LD_RF_TB_IMAG_4_cp36_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_4_cp36(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_4_cp36_SHIFT)) & VSPA_LD_RF_TB_IMAG_4_cp36_MASK)

#define VSPA_LD_RF_TB_IMAG_4_cp37_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_IMAG_4_cp37_SHIFT          (20U)
#define VSPA_LD_RF_TB_IMAG_4_cp37_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_4_cp37(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_4_cp37_SHIFT)) & VSPA_LD_RF_TB_IMAG_4_cp37_MASK)

#define VSPA_LD_RF_TB_IMAG_4_cp38_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_IMAG_4_cp38_SHIFT          (24U)
#define VSPA_LD_RF_TB_IMAG_4_cp38_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_4_cp38(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_4_cp38_SHIFT)) & VSPA_LD_RF_TB_IMAG_4_cp38_MASK)

#define VSPA_LD_RF_TB_IMAG_4_cp39_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_IMAG_4_cp39_SHIFT          (28U)
#define VSPA_LD_RF_TB_IMAG_4_cp39_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_4_cp39(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_4_cp39_SHIFT)) & VSPA_LD_RF_TB_IMAG_4_cp39_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_5 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_REAL_5_cp40_MASK           (0xFU)
#define VSPA_LD_RF_TB_REAL_5_cp40_SHIFT          (0U)
#define VSPA_LD_RF_TB_REAL_5_cp40_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_5_cp40(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_5_cp40_SHIFT)) & VSPA_LD_RF_TB_REAL_5_cp40_MASK)

#define VSPA_LD_RF_TB_REAL_5_cp41_MASK           (0xF0U)
#define VSPA_LD_RF_TB_REAL_5_cp41_SHIFT          (4U)
#define VSPA_LD_RF_TB_REAL_5_cp41_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_5_cp41(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_5_cp41_SHIFT)) & VSPA_LD_RF_TB_REAL_5_cp41_MASK)

#define VSPA_LD_RF_TB_REAL_5_cp42_MASK           (0xF00U)
#define VSPA_LD_RF_TB_REAL_5_cp42_SHIFT          (8U)
#define VSPA_LD_RF_TB_REAL_5_cp42_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_5_cp42(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_5_cp42_SHIFT)) & VSPA_LD_RF_TB_REAL_5_cp42_MASK)

#define VSPA_LD_RF_TB_REAL_5_cp43_MASK           (0xF000U)
#define VSPA_LD_RF_TB_REAL_5_cp43_SHIFT          (12U)
#define VSPA_LD_RF_TB_REAL_5_cp43_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_5_cp43(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_5_cp43_SHIFT)) & VSPA_LD_RF_TB_REAL_5_cp43_MASK)

#define VSPA_LD_RF_TB_REAL_5_cp44_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_REAL_5_cp44_SHIFT          (16U)
#define VSPA_LD_RF_TB_REAL_5_cp44_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_5_cp44(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_5_cp44_SHIFT)) & VSPA_LD_RF_TB_REAL_5_cp44_MASK)

#define VSPA_LD_RF_TB_REAL_5_cp45_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_REAL_5_cp45_SHIFT          (20U)
#define VSPA_LD_RF_TB_REAL_5_cp45_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_5_cp45(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_5_cp45_SHIFT)) & VSPA_LD_RF_TB_REAL_5_cp45_MASK)

#define VSPA_LD_RF_TB_REAL_5_cp46_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_REAL_5_cp46_SHIFT          (24U)
#define VSPA_LD_RF_TB_REAL_5_cp46_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_5_cp46(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_5_cp46_SHIFT)) & VSPA_LD_RF_TB_REAL_5_cp46_MASK)

#define VSPA_LD_RF_TB_REAL_5_cp47_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_REAL_5_cp47_SHIFT          (28U)
#define VSPA_LD_RF_TB_REAL_5_cp47_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_5_cp47(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_5_cp47_SHIFT)) & VSPA_LD_RF_TB_REAL_5_cp47_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_5 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_IMAG_5_cp40_MASK           (0xFU)
#define VSPA_LD_RF_TB_IMAG_5_cp40_SHIFT          (0U)
#define VSPA_LD_RF_TB_IMAG_5_cp40_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_5_cp40(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_5_cp40_SHIFT)) & VSPA_LD_RF_TB_IMAG_5_cp40_MASK)

#define VSPA_LD_RF_TB_IMAG_5_cp41_MASK           (0xF0U)
#define VSPA_LD_RF_TB_IMAG_5_cp41_SHIFT          (4U)
#define VSPA_LD_RF_TB_IMAG_5_cp41_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_5_cp41(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_5_cp41_SHIFT)) & VSPA_LD_RF_TB_IMAG_5_cp41_MASK)

#define VSPA_LD_RF_TB_IMAG_5_cp42_MASK           (0xF00U)
#define VSPA_LD_RF_TB_IMAG_5_cp42_SHIFT          (8U)
#define VSPA_LD_RF_TB_IMAG_5_cp42_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_5_cp42(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_5_cp42_SHIFT)) & VSPA_LD_RF_TB_IMAG_5_cp42_MASK)

#define VSPA_LD_RF_TB_IMAG_5_cp43_MASK           (0xF000U)
#define VSPA_LD_RF_TB_IMAG_5_cp43_SHIFT          (12U)
#define VSPA_LD_RF_TB_IMAG_5_cp43_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_5_cp43(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_5_cp43_SHIFT)) & VSPA_LD_RF_TB_IMAG_5_cp43_MASK)

#define VSPA_LD_RF_TB_IMAG_5_cp44_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_IMAG_5_cp44_SHIFT          (16U)
#define VSPA_LD_RF_TB_IMAG_5_cp44_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_5_cp44(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_5_cp44_SHIFT)) & VSPA_LD_RF_TB_IMAG_5_cp44_MASK)

#define VSPA_LD_RF_TB_IMAG_5_cp45_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_IMAG_5_cp45_SHIFT          (20U)
#define VSPA_LD_RF_TB_IMAG_5_cp45_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_5_cp45(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_5_cp45_SHIFT)) & VSPA_LD_RF_TB_IMAG_5_cp45_MASK)

#define VSPA_LD_RF_TB_IMAG_5_cp46_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_IMAG_5_cp46_SHIFT          (24U)
#define VSPA_LD_RF_TB_IMAG_5_cp46_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_5_cp46(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_5_cp46_SHIFT)) & VSPA_LD_RF_TB_IMAG_5_cp46_MASK)

#define VSPA_LD_RF_TB_IMAG_5_cp47_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_IMAG_5_cp47_SHIFT          (28U)
#define VSPA_LD_RF_TB_IMAG_5_cp47_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_5_cp47(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_5_cp47_SHIFT)) & VSPA_LD_RF_TB_IMAG_5_cp47_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_6 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_REAL_6_cp48_MASK           (0xFU)
#define VSPA_LD_RF_TB_REAL_6_cp48_SHIFT          (0U)
#define VSPA_LD_RF_TB_REAL_6_cp48_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_6_cp48(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_6_cp48_SHIFT)) & VSPA_LD_RF_TB_REAL_6_cp48_MASK)

#define VSPA_LD_RF_TB_REAL_6_cp49_MASK           (0xF0U)
#define VSPA_LD_RF_TB_REAL_6_cp49_SHIFT          (4U)
#define VSPA_LD_RF_TB_REAL_6_cp49_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_6_cp49(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_6_cp49_SHIFT)) & VSPA_LD_RF_TB_REAL_6_cp49_MASK)

#define VSPA_LD_RF_TB_REAL_6_cp50_MASK           (0xF00U)
#define VSPA_LD_RF_TB_REAL_6_cp50_SHIFT          (8U)
#define VSPA_LD_RF_TB_REAL_6_cp50_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_6_cp50(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_6_cp50_SHIFT)) & VSPA_LD_RF_TB_REAL_6_cp50_MASK)

#define VSPA_LD_RF_TB_REAL_6_cp51_MASK           (0xF000U)
#define VSPA_LD_RF_TB_REAL_6_cp51_SHIFT          (12U)
#define VSPA_LD_RF_TB_REAL_6_cp51_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_6_cp51(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_6_cp51_SHIFT)) & VSPA_LD_RF_TB_REAL_6_cp51_MASK)

#define VSPA_LD_RF_TB_REAL_6_cp52_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_REAL_6_cp52_SHIFT          (16U)
#define VSPA_LD_RF_TB_REAL_6_cp52_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_6_cp52(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_6_cp52_SHIFT)) & VSPA_LD_RF_TB_REAL_6_cp52_MASK)

#define VSPA_LD_RF_TB_REAL_6_cp53_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_REAL_6_cp53_SHIFT          (20U)
#define VSPA_LD_RF_TB_REAL_6_cp53_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_6_cp53(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_6_cp53_SHIFT)) & VSPA_LD_RF_TB_REAL_6_cp53_MASK)

#define VSPA_LD_RF_TB_REAL_6_cp54_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_REAL_6_cp54_SHIFT          (24U)
#define VSPA_LD_RF_TB_REAL_6_cp54_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_6_cp54(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_6_cp54_SHIFT)) & VSPA_LD_RF_TB_REAL_6_cp54_MASK)

#define VSPA_LD_RF_TB_REAL_6_cp55_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_REAL_6_cp55_SHIFT          (28U)
#define VSPA_LD_RF_TB_REAL_6_cp55_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_6_cp55(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_6_cp55_SHIFT)) & VSPA_LD_RF_TB_REAL_6_cp55_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_6 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_IMAG_6_cp48_MASK           (0xFU)
#define VSPA_LD_RF_TB_IMAG_6_cp48_SHIFT          (0U)
#define VSPA_LD_RF_TB_IMAG_6_cp48_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_6_cp48(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_6_cp48_SHIFT)) & VSPA_LD_RF_TB_IMAG_6_cp48_MASK)

#define VSPA_LD_RF_TB_IMAG_6_cp49_MASK           (0xF0U)
#define VSPA_LD_RF_TB_IMAG_6_cp49_SHIFT          (4U)
#define VSPA_LD_RF_TB_IMAG_6_cp49_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_6_cp49(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_6_cp49_SHIFT)) & VSPA_LD_RF_TB_IMAG_6_cp49_MASK)

#define VSPA_LD_RF_TB_IMAG_6_cp50_MASK           (0xF00U)
#define VSPA_LD_RF_TB_IMAG_6_cp50_SHIFT          (8U)
#define VSPA_LD_RF_TB_IMAG_6_cp50_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_6_cp50(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_6_cp50_SHIFT)) & VSPA_LD_RF_TB_IMAG_6_cp50_MASK)

#define VSPA_LD_RF_TB_IMAG_6_cp51_MASK           (0xF000U)
#define VSPA_LD_RF_TB_IMAG_6_cp51_SHIFT          (12U)
#define VSPA_LD_RF_TB_IMAG_6_cp51_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_6_cp51(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_6_cp51_SHIFT)) & VSPA_LD_RF_TB_IMAG_6_cp51_MASK)

#define VSPA_LD_RF_TB_IMAG_6_cp52_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_IMAG_6_cp52_SHIFT          (16U)
#define VSPA_LD_RF_TB_IMAG_6_cp52_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_6_cp52(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_6_cp52_SHIFT)) & VSPA_LD_RF_TB_IMAG_6_cp52_MASK)

#define VSPA_LD_RF_TB_IMAG_6_cp53_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_IMAG_6_cp53_SHIFT          (20U)
#define VSPA_LD_RF_TB_IMAG_6_cp53_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_6_cp53(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_6_cp53_SHIFT)) & VSPA_LD_RF_TB_IMAG_6_cp53_MASK)

#define VSPA_LD_RF_TB_IMAG_6_cp54_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_IMAG_6_cp54_SHIFT          (24U)
#define VSPA_LD_RF_TB_IMAG_6_cp54_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_6_cp54(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_6_cp54_SHIFT)) & VSPA_LD_RF_TB_IMAG_6_cp54_MASK)

#define VSPA_LD_RF_TB_IMAG_6_cp55_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_IMAG_6_cp55_SHIFT          (28U)
#define VSPA_LD_RF_TB_IMAG_6_cp55_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_6_cp55(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_6_cp55_SHIFT)) & VSPA_LD_RF_TB_IMAG_6_cp55_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_7 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_REAL_7_cp56_MASK           (0xFU)
#define VSPA_LD_RF_TB_REAL_7_cp56_SHIFT          (0U)
#define VSPA_LD_RF_TB_REAL_7_cp56_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_7_cp56(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_7_cp56_SHIFT)) & VSPA_LD_RF_TB_REAL_7_cp56_MASK)

#define VSPA_LD_RF_TB_REAL_7_cp57_MASK           (0xF0U)
#define VSPA_LD_RF_TB_REAL_7_cp57_SHIFT          (4U)
#define VSPA_LD_RF_TB_REAL_7_cp57_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_7_cp57(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_7_cp57_SHIFT)) & VSPA_LD_RF_TB_REAL_7_cp57_MASK)

#define VSPA_LD_RF_TB_REAL_7_cp58_MASK           (0xF00U)
#define VSPA_LD_RF_TB_REAL_7_cp58_SHIFT          (8U)
#define VSPA_LD_RF_TB_REAL_7_cp58_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_7_cp58(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_7_cp58_SHIFT)) & VSPA_LD_RF_TB_REAL_7_cp58_MASK)

#define VSPA_LD_RF_TB_REAL_7_cp59_MASK           (0xF000U)
#define VSPA_LD_RF_TB_REAL_7_cp59_SHIFT          (12U)
#define VSPA_LD_RF_TB_REAL_7_cp59_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_7_cp59(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_7_cp59_SHIFT)) & VSPA_LD_RF_TB_REAL_7_cp59_MASK)

#define VSPA_LD_RF_TB_REAL_7_cp60_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_REAL_7_cp60_SHIFT          (16U)
#define VSPA_LD_RF_TB_REAL_7_cp60_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_7_cp60(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_7_cp60_SHIFT)) & VSPA_LD_RF_TB_REAL_7_cp60_MASK)

#define VSPA_LD_RF_TB_REAL_7_cp61_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_REAL_7_cp61_SHIFT          (20U)
#define VSPA_LD_RF_TB_REAL_7_cp61_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_7_cp61(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_7_cp61_SHIFT)) & VSPA_LD_RF_TB_REAL_7_cp61_MASK)

#define VSPA_LD_RF_TB_REAL_7_cp62_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_REAL_7_cp62_SHIFT          (24U)
#define VSPA_LD_RF_TB_REAL_7_cp62_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_7_cp62(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_7_cp62_SHIFT)) & VSPA_LD_RF_TB_REAL_7_cp62_MASK)

#define VSPA_LD_RF_TB_REAL_7_cp63_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_REAL_7_cp63_SHIFT          (28U)
#define VSPA_LD_RF_TB_REAL_7_cp63_WIDTH          (4U)
#define VSPA_LD_RF_TB_REAL_7_cp63(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_REAL_7_cp63_SHIFT)) & VSPA_LD_RF_TB_REAL_7_cp63_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_7 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */

#define VSPA_LD_RF_TB_IMAG_7_cp56_MASK           (0xFU)
#define VSPA_LD_RF_TB_IMAG_7_cp56_SHIFT          (0U)
#define VSPA_LD_RF_TB_IMAG_7_cp56_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_7_cp56(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_7_cp56_SHIFT)) & VSPA_LD_RF_TB_IMAG_7_cp56_MASK)

#define VSPA_LD_RF_TB_IMAG_7_cp57_MASK           (0xF0U)
#define VSPA_LD_RF_TB_IMAG_7_cp57_SHIFT          (4U)
#define VSPA_LD_RF_TB_IMAG_7_cp57_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_7_cp57(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_7_cp57_SHIFT)) & VSPA_LD_RF_TB_IMAG_7_cp57_MASK)

#define VSPA_LD_RF_TB_IMAG_7_cp58_MASK           (0xF00U)
#define VSPA_LD_RF_TB_IMAG_7_cp58_SHIFT          (8U)
#define VSPA_LD_RF_TB_IMAG_7_cp58_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_7_cp58(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_7_cp58_SHIFT)) & VSPA_LD_RF_TB_IMAG_7_cp58_MASK)

#define VSPA_LD_RF_TB_IMAG_7_cp59_MASK           (0xF000U)
#define VSPA_LD_RF_TB_IMAG_7_cp59_SHIFT          (12U)
#define VSPA_LD_RF_TB_IMAG_7_cp59_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_7_cp59(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_7_cp59_SHIFT)) & VSPA_LD_RF_TB_IMAG_7_cp59_MASK)

#define VSPA_LD_RF_TB_IMAG_7_cp60_MASK           (0xF0000U)
#define VSPA_LD_RF_TB_IMAG_7_cp60_SHIFT          (16U)
#define VSPA_LD_RF_TB_IMAG_7_cp60_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_7_cp60(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_7_cp60_SHIFT)) & VSPA_LD_RF_TB_IMAG_7_cp60_MASK)

#define VSPA_LD_RF_TB_IMAG_7_cp61_MASK           (0xF00000U)
#define VSPA_LD_RF_TB_IMAG_7_cp61_SHIFT          (20U)
#define VSPA_LD_RF_TB_IMAG_7_cp61_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_7_cp61(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_7_cp61_SHIFT)) & VSPA_LD_RF_TB_IMAG_7_cp61_MASK)

#define VSPA_LD_RF_TB_IMAG_7_cp62_MASK           (0xF000000U)
#define VSPA_LD_RF_TB_IMAG_7_cp62_SHIFT          (24U)
#define VSPA_LD_RF_TB_IMAG_7_cp62_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_7_cp62(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_7_cp62_SHIFT)) & VSPA_LD_RF_TB_IMAG_7_cp62_MASK)

#define VSPA_LD_RF_TB_IMAG_7_cp63_MASK           (0xF0000000U)
#define VSPA_LD_RF_TB_IMAG_7_cp63_SHIFT          (28U)
#define VSPA_LD_RF_TB_IMAG_7_cp63_WIDTH          (4U)
#define VSPA_LD_RF_TB_IMAG_7_cp63(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_LD_RF_TB_IMAG_7_cp63_SHIFT)) & VSPA_LD_RF_TB_IMAG_7_cp63_MASK)
/*! @} */

/*! @name VCPU_GO_ADDR - VCPU Go Address */
/*! @{ */

#define VSPA_VCPU_GO_ADDR_vcpu_go_addr_MASK      (0x1FFFFFEU)
#define VSPA_VCPU_GO_ADDR_vcpu_go_addr_SHIFT     (1U)
#define VSPA_VCPU_GO_ADDR_vcpu_go_addr_WIDTH     (24U)
#define VSPA_VCPU_GO_ADDR_vcpu_go_addr(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_GO_ADDR_vcpu_go_addr_SHIFT)) & VSPA_VCPU_GO_ADDR_vcpu_go_addr_MASK)
/*! @} */

/*! @name VCPU_GO_STACK - VCPU Go Stack */
/*! @{ */

#define VSPA_VCPU_GO_STACK_vcpu_go_stack_MASK    (0xFFFFFU)
#define VSPA_VCPU_GO_STACK_vcpu_go_stack_SHIFT   (0U)
#define VSPA_VCPU_GO_STACK_vcpu_go_stack_WIDTH   (20U)
#define VSPA_VCPU_GO_STACK_vcpu_go_stack(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_GO_STACK_vcpu_go_stack_SHIFT)) & VSPA_VCPU_GO_STACK_vcpu_go_stack_MASK)
/*! @} */

/*! @name VCPU_MODE0 - VCPU Mode 0 */
/*! @{ */

#define VSPA_VCPU_MODE0_s0Mode_MASK              (0xFU)
#define VSPA_VCPU_MODE0_s0Mode_SHIFT             (0U)
#define VSPA_VCPU_MODE0_s0Mode_WIDTH             (4U)
#define VSPA_VCPU_MODE0_s0Mode(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE0_s0Mode_SHIFT)) & VSPA_VCPU_MODE0_s0Mode_MASK)

#define VSPA_VCPU_MODE0_s0Conj_MASK              (0x40U)
#define VSPA_VCPU_MODE0_s0Conj_SHIFT             (6U)
#define VSPA_VCPU_MODE0_s0Conj_WIDTH             (1U)
#define VSPA_VCPU_MODE0_s0Conj(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE0_s0Conj_SHIFT)) & VSPA_VCPU_MODE0_s0Conj_MASK)

#define VSPA_VCPU_MODE0_s0chs_MASK               (0x80U)
#define VSPA_VCPU_MODE0_s0chs_SHIFT              (7U)
#define VSPA_VCPU_MODE0_s0chs_WIDTH              (1U)
#define VSPA_VCPU_MODE0_s0chs(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE0_s0chs_SHIFT)) & VSPA_VCPU_MODE0_s0chs_MASK)

#define VSPA_VCPU_MODE0_s1Mode_MASK              (0x1F00U)
#define VSPA_VCPU_MODE0_s1Mode_SHIFT             (8U)
#define VSPA_VCPU_MODE0_s1Mode_WIDTH             (5U)
#define VSPA_VCPU_MODE0_s1Mode(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE0_s1Mode_SHIFT)) & VSPA_VCPU_MODE0_s1Mode_MASK)

#define VSPA_VCPU_MODE0_order_g_MASK             (0x70000U)
#define VSPA_VCPU_MODE0_order_g_SHIFT            (16U)
#define VSPA_VCPU_MODE0_order_g_WIDTH            (3U)
#define VSPA_VCPU_MODE0_order_g(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE0_order_g_SHIFT)) & VSPA_VCPU_MODE0_order_g_MASK)

#define VSPA_VCPU_MODE0_order_i_MASK             (0x700000U)
#define VSPA_VCPU_MODE0_order_i_SHIFT            (20U)
#define VSPA_VCPU_MODE0_order_i_WIDTH            (3U)
#define VSPA_VCPU_MODE0_order_i(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE0_order_i_SHIFT)) & VSPA_VCPU_MODE0_order_i_MASK)

#define VSPA_VCPU_MODE0_s2Mode_MASK              (0x7000000U)
#define VSPA_VCPU_MODE0_s2Mode_SHIFT             (24U)
#define VSPA_VCPU_MODE0_s2Mode_WIDTH             (3U)
#define VSPA_VCPU_MODE0_s2Mode(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE0_s2Mode_SHIFT)) & VSPA_VCPU_MODE0_s2Mode_MASK)

#define VSPA_VCPU_MODE0_fftSmode_MASK            (0x20000000U)
#define VSPA_VCPU_MODE0_fftSmode_SHIFT           (29U)
#define VSPA_VCPU_MODE0_fftSmode_WIDTH           (1U)
#define VSPA_VCPU_MODE0_fftSmode(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE0_fftSmode_SHIFT)) & VSPA_VCPU_MODE0_fftSmode_MASK)

#define VSPA_VCPU_MODE0_wrMode_MASK              (0x40000000U)
#define VSPA_VCPU_MODE0_wrMode_SHIFT             (30U)
#define VSPA_VCPU_MODE0_wrMode_WIDTH             (1U)
#define VSPA_VCPU_MODE0_wrMode(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE0_wrMode_SHIFT)) & VSPA_VCPU_MODE0_wrMode_MASK)

#define VSPA_VCPU_MODE0_fftVmode_MASK            (0x80000000U)
#define VSPA_VCPU_MODE0_fftVmode_SHIFT           (31U)
#define VSPA_VCPU_MODE0_fftVmode_WIDTH           (1U)
#define VSPA_VCPU_MODE0_fftVmode(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE0_fftVmode_SHIFT)) & VSPA_VCPU_MODE0_fftVmode_MASK)
/*! @} */

/*! @name VCPU_MODE1 - VCPU Mode 1 */
/*! @{ */

#define VSPA_VCPU_MODE1_rorMode_MASK             (0x3FU)
#define VSPA_VCPU_MODE1_rorMode_SHIFT            (0U)
#define VSPA_VCPU_MODE1_rorMode_WIDTH            (6U)
#define VSPA_VCPU_MODE1_rorMode(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE1_rorMode_SHIFT)) & VSPA_VCPU_MODE1_rorMode_MASK)

#define VSPA_VCPU_MODE1_rolMode_MASK             (0x1F00U)
#define VSPA_VCPU_MODE1_rolMode_SHIFT            (8U)
#define VSPA_VCPU_MODE1_rolMode_WIDTH            (5U)
#define VSPA_VCPU_MODE1_rolMode(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE1_rolMode_SHIFT)) & VSPA_VCPU_MODE1_rolMode_MASK)

#define VSPA_VCPU_MODE1_AUprec_MASK              (0x30000U)
#define VSPA_VCPU_MODE1_AUprec_SHIFT             (16U)
#define VSPA_VCPU_MODE1_AUprec_WIDTH             (2U)
#define VSPA_VCPU_MODE1_AUprec(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE1_AUprec_SHIFT)) & VSPA_VCPU_MODE1_AUprec_MASK)

#define VSPA_VCPU_MODE1_S0prec_MASK              (0xC0000U)
#define VSPA_VCPU_MODE1_S0prec_SHIFT             (18U)
#define VSPA_VCPU_MODE1_S0prec_WIDTH             (2U)
#define VSPA_VCPU_MODE1_S0prec(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE1_S0prec_SHIFT)) & VSPA_VCPU_MODE1_S0prec_MASK)

#define VSPA_VCPU_MODE1_S1prec_MASK              (0x300000U)
#define VSPA_VCPU_MODE1_S1prec_SHIFT             (20U)
#define VSPA_VCPU_MODE1_S1prec_WIDTH             (2U)
#define VSPA_VCPU_MODE1_S1prec(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE1_S1prec_SHIFT)) & VSPA_VCPU_MODE1_S1prec_MASK)

#define VSPA_VCPU_MODE1_S2prec_MASK              (0xC00000U)
#define VSPA_VCPU_MODE1_S2prec_SHIFT             (22U)
#define VSPA_VCPU_MODE1_S2prec_WIDTH             (2U)
#define VSPA_VCPU_MODE1_S2prec(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE1_S2prec_SHIFT)) & VSPA_VCPU_MODE1_S2prec_MASK)

#define VSPA_VCPU_MODE1_Vprec_MASK               (0x3000000U)
#define VSPA_VCPU_MODE1_Vprec_SHIFT              (24U)
#define VSPA_VCPU_MODE1_Vprec_WIDTH              (2U)
#define VSPA_VCPU_MODE1_Vprec(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE1_Vprec_SHIFT)) & VSPA_VCPU_MODE1_Vprec_MASK)

#define VSPA_VCPU_MODE1_paddEna_MASK             (0x4000000U)
#define VSPA_VCPU_MODE1_paddEna_SHIFT            (26U)
#define VSPA_VCPU_MODE1_paddEna_WIDTH            (1U)
#define VSPA_VCPU_MODE1_paddEna(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MODE1_paddEna_SHIFT)) & VSPA_VCPU_MODE1_paddEna_MASK)
/*! @} */

/*! @name VCPU_CREG0 - VCPU CREG 0 */
/*! @{ */

#define VSPA_VCPU_CREG0_ALLAU_MASK               (0x2U)
#define VSPA_VCPU_CREG0_ALLAU_SHIFT              (1U)
#define VSPA_VCPU_CREG0_ALLAU_WIDTH              (1U)
#define VSPA_VCPU_CREG0_ALLAU(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_ALLAU_SHIFT)) & VSPA_VCPU_CREG0_ALLAU_MASK)

#define VSPA_VCPU_CREG0_AUOM_MASK                (0xCU)
#define VSPA_VCPU_CREG0_AUOM_SHIFT               (2U)
#define VSPA_VCPU_CREG0_AUOM_WIDTH               (2U)
#define VSPA_VCPU_CREG0_AUOM(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_AUOM_SHIFT)) & VSPA_VCPU_CREG0_AUOM_MASK)

#define VSPA_VCPU_CREG0_halfScale_MASK           (0x10U)
#define VSPA_VCPU_CREG0_halfScale_SHIFT          (4U)
#define VSPA_VCPU_CREG0_halfScale_WIDTH          (1U)
#define VSPA_VCPU_CREG0_halfScale(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_halfScale_SHIFT)) & VSPA_VCPU_CREG0_halfScale_MASK)

#define VSPA_VCPU_CREG0_halfScale1_MASK          (0x20U)
#define VSPA_VCPU_CREG0_halfScale1_SHIFT         (5U)
#define VSPA_VCPU_CREG0_halfScale1_WIDTH         (1U)
#define VSPA_VCPU_CREG0_halfScale1(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_halfScale1_SHIFT)) & VSPA_VCPU_CREG0_halfScale1_MASK)

#define VSPA_VCPU_CREG0_auOutSel_MASK            (0xC0U)
#define VSPA_VCPU_CREG0_auOutSel_SHIFT           (6U)
#define VSPA_VCPU_CREG0_auOutSel_WIDTH           (2U)
#define VSPA_VCPU_CREG0_auOutSel(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_auOutSel_SHIFT)) & VSPA_VCPU_CREG0_auOutSel_MASK)

#define VSPA_VCPU_CREG0_angle_MASK               (0x100U)
#define VSPA_VCPU_CREG0_angle_SHIFT              (8U)
#define VSPA_VCPU_CREG0_angle_WIDTH              (1U)
#define VSPA_VCPU_CREG0_angle(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_angle_SHIFT)) & VSPA_VCPU_CREG0_angle_MASK)

#define VSPA_VCPU_CREG0_angle1_MASK              (0x200U)
#define VSPA_VCPU_CREG0_angle1_SHIFT             (9U)
#define VSPA_VCPU_CREG0_angle1_WIDTH             (1U)
#define VSPA_VCPU_CREG0_angle1(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_angle1_SHIFT)) & VSPA_VCPU_CREG0_angle1_MASK)

#define VSPA_VCPU_CREG0_H_index_MASK             (0x3C00U)
#define VSPA_VCPU_CREG0_H_index_SHIFT            (10U)
#define VSPA_VCPU_CREG0_H_index_WIDTH            (4U)
#define VSPA_VCPU_CREG0_H_index(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_H_index_SHIFT)) & VSPA_VCPU_CREG0_H_index_MASK)

#define VSPA_VCPU_CREG0_signMode_MASK            (0x1C000U)
#define VSPA_VCPU_CREG0_signMode_SHIFT           (14U)
#define VSPA_VCPU_CREG0_signMode_WIDTH           (3U)
#define VSPA_VCPU_CREG0_signMode(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_signMode_SHIFT)) & VSPA_VCPU_CREG0_signMode_MASK)

#define VSPA_VCPU_CREG0_ccUpdate_MASK            (0x40000U)
#define VSPA_VCPU_CREG0_ccUpdate_SHIFT           (18U)
#define VSPA_VCPU_CREG0_ccUpdate_WIDTH           (1U)
#define VSPA_VCPU_CREG0_ccUpdate(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_ccUpdate_SHIFT)) & VSPA_VCPU_CREG0_ccUpdate_MASK)

#define VSPA_VCPU_CREG0_vspa_mode_MASK           (0x180000U)
#define VSPA_VCPU_CREG0_vspa_mode_SHIFT          (19U)
#define VSPA_VCPU_CREG0_vspa_mode_WIDTH          (2U)
#define VSPA_VCPU_CREG0_vspa_mode(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_vspa_mode_SHIFT)) & VSPA_VCPU_CREG0_vspa_mode_MASK)

#define VSPA_VCPU_CREG0_rotate3_en_MASK          (0xC00000U)
#define VSPA_VCPU_CREG0_rotate3_en_SHIFT         (22U)
#define VSPA_VCPU_CREG0_rotate3_en_WIDTH         (2U)
#define VSPA_VCPU_CREG0_rotate3_en(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_rotate3_en_SHIFT)) & VSPA_VCPU_CREG0_rotate3_en_MASK)

#define VSPA_VCPU_CREG0_sau_mode_MASK            (0x3000000U)
#define VSPA_VCPU_CREG0_sau_mode_SHIFT           (24U)
#define VSPA_VCPU_CREG0_sau_mode_WIDTH           (2U)
#define VSPA_VCPU_CREG0_sau_mode(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_sau_mode_SHIFT)) & VSPA_VCPU_CREG0_sau_mode_MASK)

#define VSPA_VCPU_CREG0_elRev_MASK               (0xC000000U)
#define VSPA_VCPU_CREG0_elRev_SHIFT              (26U)
#define VSPA_VCPU_CREG0_elRev_WIDTH              (2U)
#define VSPA_VCPU_CREG0_elRev(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_elRev_SHIFT)) & VSPA_VCPU_CREG0_elRev_MASK)

#define VSPA_VCPU_CREG0_ffts_mode_MASK           (0x20000000U)
#define VSPA_VCPU_CREG0_ffts_mode_SHIFT          (29U)
#define VSPA_VCPU_CREG0_ffts_mode_WIDTH          (1U)
#define VSPA_VCPU_CREG0_ffts_mode(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_ffts_mode_SHIFT)) & VSPA_VCPU_CREG0_ffts_mode_MASK)

#define VSPA_VCPU_CREG0_wr_mode_MASK             (0x40000000U)
#define VSPA_VCPU_CREG0_wr_mode_SHIFT            (30U)
#define VSPA_VCPU_CREG0_wr_mode_WIDTH            (1U)
#define VSPA_VCPU_CREG0_wr_mode(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_wr_mode_SHIFT)) & VSPA_VCPU_CREG0_wr_mode_MASK)

#define VSPA_VCPU_CREG0_fftv_mode_MASK           (0x80000000U)
#define VSPA_VCPU_CREG0_fftv_mode_SHIFT          (31U)
#define VSPA_VCPU_CREG0_fftv_mode_WIDTH          (1U)
#define VSPA_VCPU_CREG0_fftv_mode(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG0_fftv_mode_SHIFT)) & VSPA_VCPU_CREG0_fftv_mode_MASK)
/*! @} */

/*! @name VCPU_CREG1 - VCPU CREG 1 */
/*! @{ */

#define VSPA_VCPU_CREG1_interpP_MASK             (0xFU)
#define VSPA_VCPU_CREG1_interpP_SHIFT            (0U)
#define VSPA_VCPU_CREG1_interpP_WIDTH            (4U)
#define VSPA_VCPU_CREG1_interpP(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG1_interpP_SHIFT)) & VSPA_VCPU_CREG1_interpP_MASK)

#define VSPA_VCPU_CREG1_interpD_MASK             (0xF0U)
#define VSPA_VCPU_CREG1_interpD_SHIFT            (4U)
#define VSPA_VCPU_CREG1_interpD_WIDTH            (4U)
#define VSPA_VCPU_CREG1_interpD(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG1_interpD_SHIFT)) & VSPA_VCPU_CREG1_interpD_MASK)

#define VSPA_VCPU_CREG1_interpN_MASK             (0xF00U)
#define VSPA_VCPU_CREG1_interpN_SHIFT            (8U)
#define VSPA_VCPU_CREG1_interpN_WIDTH            (4U)
#define VSPA_VCPU_CREG1_interpN(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG1_interpN_SHIFT)) & VSPA_VCPU_CREG1_interpN_MASK)

#define VSPA_VCPU_CREG1_readIndex_MASK           (0xFF000U)
#define VSPA_VCPU_CREG1_readIndex_SHIFT          (12U)
#define VSPA_VCPU_CREG1_readIndex_WIDTH          (8U)
#define VSPA_VCPU_CREG1_readIndex(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG1_readIndex_SHIFT)) & VSPA_VCPU_CREG1_readIndex_MASK)
/*! @} */

/*! @name ST_UL_VEC_LEN - Store Unalign Vector Length */
/*! @{ */

#define VSPA_ST_UL_VEC_LEN_ST_VEC_LEN_MASK       (0x7FFFFU)
#define VSPA_ST_UL_VEC_LEN_ST_VEC_LEN_SHIFT      (0U)
#define VSPA_ST_UL_VEC_LEN_ST_VEC_LEN_WIDTH      (19U)
#define VSPA_ST_UL_VEC_LEN_ST_VEC_LEN(x)         (((uint32_t)(((uint32_t)(x)) << VSPA_ST_UL_VEC_LEN_ST_VEC_LEN_SHIFT)) & VSPA_ST_UL_VEC_LEN_ST_VEC_LEN_MASK)

#define VSPA_ST_UL_VEC_LEN_ST_ROT_COUNT_MASK     (0x3F00000U)
#define VSPA_ST_UL_VEC_LEN_ST_ROT_COUNT_SHIFT    (20U)
#define VSPA_ST_UL_VEC_LEN_ST_ROT_COUNT_WIDTH    (6U)
#define VSPA_ST_UL_VEC_LEN_ST_ROT_COUNT(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_ST_UL_VEC_LEN_ST_ROT_COUNT_SHIFT)) & VSPA_ST_UL_VEC_LEN_ST_ROT_COUNT_MASK)

#define VSPA_ST_UL_VEC_LEN_State_MASK            (0xC0000000U)
#define VSPA_ST_UL_VEC_LEN_State_SHIFT           (30U)
#define VSPA_ST_UL_VEC_LEN_State_WIDTH           (2U)
#define VSPA_ST_UL_VEC_LEN_State(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_ST_UL_VEC_LEN_State_SHIFT)) & VSPA_ST_UL_VEC_LEN_State_MASK)
/*! @} */

/*! @name VP_CONTROL - Vector Predicate Control */
/*! @{ */

#define VSPA_VP_CONTROL_ACT_MODE_MASK            (0xFU)
#define VSPA_VP_CONTROL_ACT_MODE_SHIFT           (0U)
#define VSPA_VP_CONTROL_ACT_MODE_WIDTH           (4U)
#define VSPA_VP_CONTROL_ACT_MODE(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VP_CONTROL_ACT_MODE_SHIFT)) & VSPA_VP_CONTROL_ACT_MODE_MASK)

#define VSPA_VP_CONTROL_ACT_PTR_MASK             (0x30U)
#define VSPA_VP_CONTROL_ACT_PTR_SHIFT            (4U)
#define VSPA_VP_CONTROL_ACT_PTR_WIDTH            (2U)
#define VSPA_VP_CONTROL_ACT_PTR(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_VP_CONTROL_ACT_PTR_SHIFT)) & VSPA_VP_CONTROL_ACT_PTR_MASK)

#define VSPA_VP_CONTROL_ACT_INCR_MASK            (0x40U)
#define VSPA_VP_CONTROL_ACT_INCR_SHIFT           (6U)
#define VSPA_VP_CONTROL_ACT_INCR_WIDTH           (1U)
#define VSPA_VP_CONTROL_ACT_INCR(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VP_CONTROL_ACT_INCR_SHIFT)) & VSPA_VP_CONTROL_ACT_INCR_MASK)

#define VSPA_VP_CONTROL_CAP_MODE_MASK            (0x300U)
#define VSPA_VP_CONTROL_CAP_MODE_SHIFT           (8U)
#define VSPA_VP_CONTROL_CAP_MODE_WIDTH           (2U)
#define VSPA_VP_CONTROL_CAP_MODE(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VP_CONTROL_CAP_MODE_SHIFT)) & VSPA_VP_CONTROL_CAP_MODE_MASK)

#define VSPA_VP_CONTROL_CAP_PTR_MASK             (0xC00U)
#define VSPA_VP_CONTROL_CAP_PTR_SHIFT            (10U)
#define VSPA_VP_CONTROL_CAP_PTR_WIDTH            (2U)
#define VSPA_VP_CONTROL_CAP_PTR(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_VP_CONTROL_CAP_PTR_SHIFT)) & VSPA_VP_CONTROL_CAP_PTR_MASK)

#define VSPA_VP_CONTROL_CAP_INCR_MASK            (0x1000U)
#define VSPA_VP_CONTROL_CAP_INCR_SHIFT           (12U)
#define VSPA_VP_CONTROL_CAP_INCR_WIDTH           (1U)
#define VSPA_VP_CONTROL_CAP_INCR(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VP_CONTROL_CAP_INCR_SHIFT)) & VSPA_VP_CONTROL_CAP_INCR_MASK)
/*! @} */

/*! @name XC_CONTROL - Extended Condition Control */
/*! @{ */

#define VSPA_XC_CONTROL_BR_XC_MODE_MASK          (0xFU)
#define VSPA_XC_CONTROL_BR_XC_MODE_SHIFT         (0U)
#define VSPA_XC_CONTROL_BR_XC_MODE_WIDTH         (4U)
#define VSPA_XC_CONTROL_BR_XC_MODE(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_XC_CONTROL_BR_XC_MODE_SHIFT)) & VSPA_XC_CONTROL_BR_XC_MODE_MASK)
/*! @} */

/*! @name VCPU_CREG2 - VCPU CREG 2 */
/*! @{ */

#define VSPA_VCPU_CREG2_signOpS0_MASK            (0xFU)
#define VSPA_VCPU_CREG2_signOpS0_SHIFT           (0U)
#define VSPA_VCPU_CREG2_signOpS0_WIDTH           (4U)
#define VSPA_VCPU_CREG2_signOpS0(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG2_signOpS0_SHIFT)) & VSPA_VCPU_CREG2_signOpS0_MASK)

#define VSPA_VCPU_CREG2_signOpS1_MASK            (0xF0U)
#define VSPA_VCPU_CREG2_signOpS1_SHIFT           (4U)
#define VSPA_VCPU_CREG2_signOpS1_WIDTH           (4U)
#define VSPA_VCPU_CREG2_signOpS1(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG2_signOpS1_SHIFT)) & VSPA_VCPU_CREG2_signOpS1_MASK)

#define VSPA_VCPU_CREG2_signOpS2_MASK            (0xF00U)
#define VSPA_VCPU_CREG2_signOpS2_SHIFT           (8U)
#define VSPA_VCPU_CREG2_signOpS2_WIDTH           (4U)
#define VSPA_VCPU_CREG2_signOpS2(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_CREG2_signOpS2_SHIFT)) & VSPA_VCPU_CREG2_signOpS2_MASK)
/*! @} */

/*! @name S0S1 - RAG set rS0 & rS1 registers */
/*! @{ */

#define VSPA_S0S1_rS0_ptr_MASK                   (0x1FFU)
#define VSPA_S0S1_rS0_ptr_SHIFT                  (0U)
#define VSPA_S0S1_rS0_ptr_WIDTH                  (9U)
#define VSPA_S0S1_rS0_ptr(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_S0S1_rS0_ptr_SHIFT)) & VSPA_S0S1_rS0_ptr_MASK)

#define VSPA_S0S1_rS1_ptr_MASK                   (0x1FF0000U)
#define VSPA_S0S1_rS1_ptr_SHIFT                  (16U)
#define VSPA_S0S1_rS1_ptr_WIDTH                  (9U)
#define VSPA_S0S1_rS1_ptr(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_S0S1_rS1_ptr_SHIFT)) & VSPA_S0S1_rS1_ptr_MASK)
/*! @} */

/*! @name S2VST - RAG set rS2, rV & rSt registers */
/*! @{ */

#define VSPA_S2VST_rS2_ptr_MASK                  (0x1FFU)
#define VSPA_S2VST_rS2_ptr_SHIFT                 (0U)
#define VSPA_S2VST_rS2_ptr_WIDTH                 (9U)
#define VSPA_S2VST_rS2_ptr(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_S2VST_rS2_ptr_SHIFT)) & VSPA_S2VST_rS2_ptr_MASK)

#define VSPA_S2VST_rV_ptr_MASK                   (0x1FF0000U)
#define VSPA_S2VST_rV_ptr_SHIFT                  (16U)
#define VSPA_S2VST_rV_ptr_WIDTH                  (9U)
#define VSPA_S2VST_rV_ptr(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_S2VST_rV_ptr_SHIFT)) & VSPA_S2VST_rV_ptr_MASK)

#define VSPA_S2VST_rSt_ptr_MASK                  (0x70000000U)
#define VSPA_S2VST_rSt_ptr_SHIFT                 (28U)
#define VSPA_S2VST_rSt_ptr_WIDTH                 (3U)
#define VSPA_S2VST_rSt_ptr(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_S2VST_rSt_ptr_SHIFT)) & VSPA_S2VST_rSt_ptr_MASK)
/*! @} */

/*! @name GP_IN - General Purpose Input registers [8 registers] */
/*! @{ */

#define VSPA_GP_IN_gp_in_data_MASK               (0xFFFFFFFFU)
#define VSPA_GP_IN_gp_in_data_SHIFT              (0U)
#define VSPA_GP_IN_gp_in_data_WIDTH              (32U)
#define VSPA_GP_IN_gp_in_data(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_GP_IN_gp_in_data_SHIFT)) & VSPA_GP_IN_gp_in_data_MASK)
/*! @} */

/*! @name GP_OUT - General Purpose Output registers [20 registers] */
/*! @{ */

#define VSPA_GP_OUT_gp_out_data_MASK             (0xFFFFFFFFU)
#define VSPA_GP_OUT_gp_out_data_SHIFT            (0U)
#define VSPA_GP_OUT_gp_out_data_WIDTH            (32U)
#define VSPA_GP_OUT_gp_out_data(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_GP_OUT_gp_out_data_SHIFT)) & VSPA_GP_OUT_gp_out_data_MASK)
/*! @} */

/*! @name DQM_SMALL - VCPU to DQM Trace Small Outbox register */
/*! @{ */

#define VSPA_DQM_SMALL_vcpu_dqm_out_small_MASK   (0x1FFFFFFU)
#define VSPA_DQM_SMALL_vcpu_dqm_out_small_SHIFT  (0U)
#define VSPA_DQM_SMALL_vcpu_dqm_out_small_WIDTH  (25U)
#define VSPA_DQM_SMALL_vcpu_dqm_out_small(x)     (((uint32_t)(((uint32_t)(x)) << VSPA_DQM_SMALL_vcpu_dqm_out_small_SHIFT)) & VSPA_DQM_SMALL_vcpu_dqm_out_small_MASK)
/*! @} */

/*! @name DQM_LARGE_MSB - VCPU to DQM Trace Large MSB Outbox register */
/*! @{ */

#define VSPA_DQM_LARGE_MSB_vcpu_dqm_out_large_msb_MASK (0x1FFFFFFU)
#define VSPA_DQM_LARGE_MSB_vcpu_dqm_out_large_msb_SHIFT (0U)
#define VSPA_DQM_LARGE_MSB_vcpu_dqm_out_large_msb_WIDTH (25U)
#define VSPA_DQM_LARGE_MSB_vcpu_dqm_out_large_msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DQM_LARGE_MSB_vcpu_dqm_out_large_msb_SHIFT)) & VSPA_DQM_LARGE_MSB_vcpu_dqm_out_large_msb_MASK)
/*! @} */

/*! @name DQM_LARGE_LSB - VCPU to DQM Trace Large LSB Outbox register */
/*! @{ */

#define VSPA_DQM_LARGE_LSB_vcpu_dqm_out_large_lsb_MASK (0xFFFFFFFFU)
#define VSPA_DQM_LARGE_LSB_vcpu_dqm_out_large_lsb_SHIFT (0U)
#define VSPA_DQM_LARGE_LSB_vcpu_dqm_out_large_lsb_WIDTH (32U)
#define VSPA_DQM_LARGE_LSB_vcpu_dqm_out_large_lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DQM_LARGE_LSB_vcpu_dqm_out_large_lsb_SHIFT)) & VSPA_DQM_LARGE_LSB_vcpu_dqm_out_large_lsb_MASK)
/*! @} */

/*! @name VCPU_DBG_OUT_32 - VCPU to Debugger 32-bit Outbox register */
/*! @{ */

#define VSPA_VCPU_DBG_OUT_32_vcpu_outbox32_MASK  (0xFFFFFFFFU)
#define VSPA_VCPU_DBG_OUT_32_vcpu_outbox32_SHIFT (0U)
#define VSPA_VCPU_DBG_OUT_32_vcpu_outbox32_WIDTH (32U)
#define VSPA_VCPU_DBG_OUT_32_vcpu_outbox32(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_DBG_OUT_32_vcpu_outbox32_SHIFT)) & VSPA_VCPU_DBG_OUT_32_vcpu_outbox32_MASK)
/*! @} */

/*! @name VCPU_DBG_OUT_64_MSB - VCPU to Debugger 64-bit MSB Outbox register */
/*! @{ */

#define VSPA_VCPU_DBG_OUT_64_MSB_vcpu_outbox64msb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_DBG_OUT_64_MSB_vcpu_outbox64msb_SHIFT (0U)
#define VSPA_VCPU_DBG_OUT_64_MSB_vcpu_outbox64msb_WIDTH (32U)
#define VSPA_VCPU_DBG_OUT_64_MSB_vcpu_outbox64msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_DBG_OUT_64_MSB_vcpu_outbox64msb_SHIFT)) & VSPA_VCPU_DBG_OUT_64_MSB_vcpu_outbox64msb_MASK)
/*! @} */

/*! @name VCPU_DBG_OUT_64_LSB - VCPU to Debugger 64-bit LSB Outbox register */
/*! @{ */

#define VSPA_VCPU_DBG_OUT_64_LSB_vcpu_outbox64lsb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_DBG_OUT_64_LSB_vcpu_outbox64lsb_SHIFT (0U)
#define VSPA_VCPU_DBG_OUT_64_LSB_vcpu_outbox64lsb_WIDTH (32U)
#define VSPA_VCPU_DBG_OUT_64_LSB_vcpu_outbox64lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_DBG_OUT_64_LSB_vcpu_outbox64lsb_SHIFT)) & VSPA_VCPU_DBG_OUT_64_LSB_vcpu_outbox64lsb_MASK)
/*! @} */

/*! @name VCPU_DBG_IN_32 - Debugger to VCPU 32-bit Inbox register */
/*! @{ */

#define VSPA_VCPU_DBG_IN_32_vcpu_inbox32_MASK    (0xFFFFFFFFU)
#define VSPA_VCPU_DBG_IN_32_vcpu_inbox32_SHIFT   (0U)
#define VSPA_VCPU_DBG_IN_32_vcpu_inbox32_WIDTH   (32U)
#define VSPA_VCPU_DBG_IN_32_vcpu_inbox32(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_DBG_IN_32_vcpu_inbox32_SHIFT)) & VSPA_VCPU_DBG_IN_32_vcpu_inbox32_MASK)
/*! @} */

/*! @name VCPU_DBG_IN_64_MSB - Debugger to VCPU 64-bit MSB Inbox register */
/*! @{ */

#define VSPA_VCPU_DBG_IN_64_MSB_vcpu_inbox64msb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_DBG_IN_64_MSB_vcpu_inbox64msb_SHIFT (0U)
#define VSPA_VCPU_DBG_IN_64_MSB_vcpu_inbox64msb_WIDTH (32U)
#define VSPA_VCPU_DBG_IN_64_MSB_vcpu_inbox64msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_DBG_IN_64_MSB_vcpu_inbox64msb_SHIFT)) & VSPA_VCPU_DBG_IN_64_MSB_vcpu_inbox64msb_MASK)
/*! @} */

/*! @name VCPU_DBG_IN_64_LSB - Debugger to VCPU 64-bit LSB Inbox register */
/*! @{ */

#define VSPA_VCPU_DBG_IN_64_LSB_vcpu_inbox64lsb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_DBG_IN_64_LSB_vcpu_inbox64lsb_SHIFT (0U)
#define VSPA_VCPU_DBG_IN_64_LSB_vcpu_inbox64lsb_WIDTH (32U)
#define VSPA_VCPU_DBG_IN_64_LSB_vcpu_inbox64lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_DBG_IN_64_LSB_vcpu_inbox64lsb_SHIFT)) & VSPA_VCPU_DBG_IN_64_LSB_vcpu_inbox64lsb_MASK)
/*! @} */

/*! @name VCPU_DBG_MBOX_STATUS - VCPU to Debugger Mailbox Status register */
/*! @{ */

#define VSPA_VCPU_DBG_MBOX_STATUS_msg_out_valid_32bit_MASK (0x1U)
#define VSPA_VCPU_DBG_MBOX_STATUS_msg_out_valid_32bit_SHIFT (0U)
#define VSPA_VCPU_DBG_MBOX_STATUS_msg_out_valid_32bit_WIDTH (1U)
#define VSPA_VCPU_DBG_MBOX_STATUS_msg_out_valid_32bit(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_DBG_MBOX_STATUS_msg_out_valid_32bit_SHIFT)) & VSPA_VCPU_DBG_MBOX_STATUS_msg_out_valid_32bit_MASK)

#define VSPA_VCPU_DBG_MBOX_STATUS_msg_out_valid_64bit_MASK (0x2U)
#define VSPA_VCPU_DBG_MBOX_STATUS_msg_out_valid_64bit_SHIFT (1U)
#define VSPA_VCPU_DBG_MBOX_STATUS_msg_out_valid_64bit_WIDTH (1U)
#define VSPA_VCPU_DBG_MBOX_STATUS_msg_out_valid_64bit(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_DBG_MBOX_STATUS_msg_out_valid_64bit_SHIFT)) & VSPA_VCPU_DBG_MBOX_STATUS_msg_out_valid_64bit_MASK)

#define VSPA_VCPU_DBG_MBOX_STATUS_msg_in_valid_32bit_MASK (0x4U)
#define VSPA_VCPU_DBG_MBOX_STATUS_msg_in_valid_32bit_SHIFT (2U)
#define VSPA_VCPU_DBG_MBOX_STATUS_msg_in_valid_32bit_WIDTH (1U)
#define VSPA_VCPU_DBG_MBOX_STATUS_msg_in_valid_32bit(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_DBG_MBOX_STATUS_msg_in_valid_32bit_SHIFT)) & VSPA_VCPU_DBG_MBOX_STATUS_msg_in_valid_32bit_MASK)

#define VSPA_VCPU_DBG_MBOX_STATUS_msg_in_valid_64bit_MASK (0x8U)
#define VSPA_VCPU_DBG_MBOX_STATUS_msg_in_valid_64bit_SHIFT (3U)
#define VSPA_VCPU_DBG_MBOX_STATUS_msg_in_valid_64bit_WIDTH (1U)
#define VSPA_VCPU_DBG_MBOX_STATUS_msg_in_valid_64bit(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_DBG_MBOX_STATUS_msg_in_valid_64bit_SHIFT)) & VSPA_VCPU_DBG_MBOX_STATUS_msg_in_valid_64bit_MASK)
/*! @} */

/*! @name VCPU_OUT_0_MSB - VCPU to host outbox message n MSB register */
/*! @{ */

#define VSPA_VCPU_OUT_0_MSB_vcpu_out_n_msb_MASK  (0xFFFFFFFFU)
#define VSPA_VCPU_OUT_0_MSB_vcpu_out_n_msb_SHIFT (0U)
#define VSPA_VCPU_OUT_0_MSB_vcpu_out_n_msb_WIDTH (32U)
#define VSPA_VCPU_OUT_0_MSB_vcpu_out_n_msb(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_OUT_0_MSB_vcpu_out_n_msb_SHIFT)) & VSPA_VCPU_OUT_0_MSB_vcpu_out_n_msb_MASK)
/*! @} */

/*! @name VCPU_OUT_0_LSB - VCPU to host outbox message n LSB register */
/*! @{ */

#define VSPA_VCPU_OUT_0_LSB_vcpu_out_n_lsb_MASK  (0xFFFFFFFFU)
#define VSPA_VCPU_OUT_0_LSB_vcpu_out_n_lsb_SHIFT (0U)
#define VSPA_VCPU_OUT_0_LSB_vcpu_out_n_lsb_WIDTH (32U)
#define VSPA_VCPU_OUT_0_LSB_vcpu_out_n_lsb(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_OUT_0_LSB_vcpu_out_n_lsb_SHIFT)) & VSPA_VCPU_OUT_0_LSB_vcpu_out_n_lsb_MASK)
/*! @} */

/*! @name VCPU_OUT_1_MSB - VCPU to host outbox message n MSB register */
/*! @{ */

#define VSPA_VCPU_OUT_1_MSB_vcpu_out_n_msb_MASK  (0xFFFFFFFFU)
#define VSPA_VCPU_OUT_1_MSB_vcpu_out_n_msb_SHIFT (0U)
#define VSPA_VCPU_OUT_1_MSB_vcpu_out_n_msb_WIDTH (32U)
#define VSPA_VCPU_OUT_1_MSB_vcpu_out_n_msb(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_OUT_1_MSB_vcpu_out_n_msb_SHIFT)) & VSPA_VCPU_OUT_1_MSB_vcpu_out_n_msb_MASK)
/*! @} */

/*! @name VCPU_OUT_1_LSB - VCPU to host outbox message n LSB register */
/*! @{ */

#define VSPA_VCPU_OUT_1_LSB_vcpu_out_n_lsb_MASK  (0xFFFFFFFFU)
#define VSPA_VCPU_OUT_1_LSB_vcpu_out_n_lsb_SHIFT (0U)
#define VSPA_VCPU_OUT_1_LSB_vcpu_out_n_lsb_WIDTH (32U)
#define VSPA_VCPU_OUT_1_LSB_vcpu_out_n_lsb(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_OUT_1_LSB_vcpu_out_n_lsb_SHIFT)) & VSPA_VCPU_OUT_1_LSB_vcpu_out_n_lsb_MASK)
/*! @} */

/*! @name VCPU_IN_0_MSB - VCPU from Host Inbox Message n MSB */
/*! @{ */

#define VSPA_VCPU_IN_0_MSB_vcpu_in_n_msb_MASK    (0xFFFFFFFFU)
#define VSPA_VCPU_IN_0_MSB_vcpu_in_n_msb_SHIFT   (0U)
#define VSPA_VCPU_IN_0_MSB_vcpu_in_n_msb_WIDTH   (32U)
#define VSPA_VCPU_IN_0_MSB_vcpu_in_n_msb(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_IN_0_MSB_vcpu_in_n_msb_SHIFT)) & VSPA_VCPU_IN_0_MSB_vcpu_in_n_msb_MASK)
/*! @} */

/*! @name VCPU_IN_0_LSB - VCPU from host inbox message n LSB register */
/*! @{ */

#define VSPA_VCPU_IN_0_LSB_vcpu_in_n_lsb_MASK    (0xFFFFFFFFU)
#define VSPA_VCPU_IN_0_LSB_vcpu_in_n_lsb_SHIFT   (0U)
#define VSPA_VCPU_IN_0_LSB_vcpu_in_n_lsb_WIDTH   (32U)
#define VSPA_VCPU_IN_0_LSB_vcpu_in_n_lsb(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_IN_0_LSB_vcpu_in_n_lsb_SHIFT)) & VSPA_VCPU_IN_0_LSB_vcpu_in_n_lsb_MASK)
/*! @} */

/*! @name VCPU_IN_1_MSB - VCPU from Host Inbox Message n MSB */
/*! @{ */

#define VSPA_VCPU_IN_1_MSB_vcpu_in_n_msb_MASK    (0xFFFFFFFFU)
#define VSPA_VCPU_IN_1_MSB_vcpu_in_n_msb_SHIFT   (0U)
#define VSPA_VCPU_IN_1_MSB_vcpu_in_n_msb_WIDTH   (32U)
#define VSPA_VCPU_IN_1_MSB_vcpu_in_n_msb(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_IN_1_MSB_vcpu_in_n_msb_SHIFT)) & VSPA_VCPU_IN_1_MSB_vcpu_in_n_msb_MASK)
/*! @} */

/*! @name VCPU_IN_1_LSB - VCPU from host inbox message n LSB register */
/*! @{ */

#define VSPA_VCPU_IN_1_LSB_vcpu_in_n_lsb_MASK    (0xFFFFFFFFU)
#define VSPA_VCPU_IN_1_LSB_vcpu_in_n_lsb_SHIFT   (0U)
#define VSPA_VCPU_IN_1_LSB_vcpu_in_n_lsb_WIDTH   (32U)
#define VSPA_VCPU_IN_1_LSB_vcpu_in_n_lsb(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_IN_1_LSB_vcpu_in_n_lsb_SHIFT)) & VSPA_VCPU_IN_1_LSB_vcpu_in_n_lsb_MASK)
/*! @} */

/*! @name VCPU_MBOX_STATUS - VCPU to Host Mailbox Status register */
/*! @{ */

#define VSPA_VCPU_MBOX_STATUS_msg_out_0_valid_MASK (0x1U)
#define VSPA_VCPU_MBOX_STATUS_msg_out_0_valid_SHIFT (0U)
#define VSPA_VCPU_MBOX_STATUS_msg_out_0_valid_WIDTH (1U)
#define VSPA_VCPU_MBOX_STATUS_msg_out_0_valid(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MBOX_STATUS_msg_out_0_valid_SHIFT)) & VSPA_VCPU_MBOX_STATUS_msg_out_0_valid_MASK)

#define VSPA_VCPU_MBOX_STATUS_msg_out_1_valid_MASK (0x2U)
#define VSPA_VCPU_MBOX_STATUS_msg_out_1_valid_SHIFT (1U)
#define VSPA_VCPU_MBOX_STATUS_msg_out_1_valid_WIDTH (1U)
#define VSPA_VCPU_MBOX_STATUS_msg_out_1_valid(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MBOX_STATUS_msg_out_1_valid_SHIFT)) & VSPA_VCPU_MBOX_STATUS_msg_out_1_valid_MASK)

#define VSPA_VCPU_MBOX_STATUS_msg_in_0_valid_MASK (0x4U)
#define VSPA_VCPU_MBOX_STATUS_msg_in_0_valid_SHIFT (2U)
#define VSPA_VCPU_MBOX_STATUS_msg_in_0_valid_WIDTH (1U)
#define VSPA_VCPU_MBOX_STATUS_msg_in_0_valid(x)  (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MBOX_STATUS_msg_in_0_valid_SHIFT)) & VSPA_VCPU_MBOX_STATUS_msg_in_0_valid_MASK)

#define VSPA_VCPU_MBOX_STATUS_msg_in_1_valid_MASK (0x8U)
#define VSPA_VCPU_MBOX_STATUS_msg_in_1_valid_SHIFT (3U)
#define VSPA_VCPU_MBOX_STATUS_msg_in_1_valid_WIDTH (1U)
#define VSPA_VCPU_MBOX_STATUS_msg_in_1_valid(x)  (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_MBOX_STATUS_msg_in_1_valid_SHIFT)) & VSPA_VCPU_MBOX_STATUS_msg_in_1_valid_MASK)
/*! @} */

/*! @name HOST_OUT_0_MSB - Host to VCPU Outbox Message n MSB register */
/*! @{ */

#define VSPA_HOST_OUT_0_MSB_host_out_n_msb_MASK  (0xFFFFFFFFU)
#define VSPA_HOST_OUT_0_MSB_host_out_n_msb_SHIFT (0U)
#define VSPA_HOST_OUT_0_MSB_host_out_n_msb_WIDTH (32U)
#define VSPA_HOST_OUT_0_MSB_host_out_n_msb(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_OUT_0_MSB_host_out_n_msb_SHIFT)) & VSPA_HOST_OUT_0_MSB_host_out_n_msb_MASK)
/*! @} */

/*! @name HOST_OUT_0_LSB - Host to VCPU Outbox Message n LSB register */
/*! @{ */

#define VSPA_HOST_OUT_0_LSB_host_out_n_lsb_MASK  (0xFFFFFFFFU)
#define VSPA_HOST_OUT_0_LSB_host_out_n_lsb_SHIFT (0U)
#define VSPA_HOST_OUT_0_LSB_host_out_n_lsb_WIDTH (32U)
#define VSPA_HOST_OUT_0_LSB_host_out_n_lsb(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_OUT_0_LSB_host_out_n_lsb_SHIFT)) & VSPA_HOST_OUT_0_LSB_host_out_n_lsb_MASK)
/*! @} */

/*! @name HOST_OUT_1_MSB - Host to VCPU Outbox Message n MSB register */
/*! @{ */

#define VSPA_HOST_OUT_1_MSB_host_out_n_msb_MASK  (0xFFFFFFFFU)
#define VSPA_HOST_OUT_1_MSB_host_out_n_msb_SHIFT (0U)
#define VSPA_HOST_OUT_1_MSB_host_out_n_msb_WIDTH (32U)
#define VSPA_HOST_OUT_1_MSB_host_out_n_msb(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_OUT_1_MSB_host_out_n_msb_SHIFT)) & VSPA_HOST_OUT_1_MSB_host_out_n_msb_MASK)
/*! @} */

/*! @name HOST_OUT_1_LSB - Host to VCPU Outbox Message n LSB register */
/*! @{ */

#define VSPA_HOST_OUT_1_LSB_host_out_n_lsb_MASK  (0xFFFFFFFFU)
#define VSPA_HOST_OUT_1_LSB_host_out_n_lsb_SHIFT (0U)
#define VSPA_HOST_OUT_1_LSB_host_out_n_lsb_WIDTH (32U)
#define VSPA_HOST_OUT_1_LSB_host_out_n_lsb(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_OUT_1_LSB_host_out_n_lsb_SHIFT)) & VSPA_HOST_OUT_1_LSB_host_out_n_lsb_MASK)
/*! @} */

/*! @name HOST_IN_0_MSB - Host from VCPU Inbox Message n MSB */
/*! @{ */

#define VSPA_HOST_IN_0_MSB_host_in_n_msb_MASK    (0xFFFFFFFFU)
#define VSPA_HOST_IN_0_MSB_host_in_n_msb_SHIFT   (0U)
#define VSPA_HOST_IN_0_MSB_host_in_n_msb_WIDTH   (32U)
#define VSPA_HOST_IN_0_MSB_host_in_n_msb(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_IN_0_MSB_host_in_n_msb_SHIFT)) & VSPA_HOST_IN_0_MSB_host_in_n_msb_MASK)
/*! @} */

/*! @name HOST_IN_0_LSB - Host from VCPU Inbox Message n LSB Register */
/*! @{ */

#define VSPA_HOST_IN_0_LSB_host_in_n_lsb_MASK    (0xFFFFFFFFU)
#define VSPA_HOST_IN_0_LSB_host_in_n_lsb_SHIFT   (0U)
#define VSPA_HOST_IN_0_LSB_host_in_n_lsb_WIDTH   (32U)
#define VSPA_HOST_IN_0_LSB_host_in_n_lsb(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_IN_0_LSB_host_in_n_lsb_SHIFT)) & VSPA_HOST_IN_0_LSB_host_in_n_lsb_MASK)
/*! @} */

/*! @name HOST_IN_1_MSB - Host from VCPU Inbox Message n MSB */
/*! @{ */

#define VSPA_HOST_IN_1_MSB_host_in_n_msb_MASK    (0xFFFFFFFFU)
#define VSPA_HOST_IN_1_MSB_host_in_n_msb_SHIFT   (0U)
#define VSPA_HOST_IN_1_MSB_host_in_n_msb_WIDTH   (32U)
#define VSPA_HOST_IN_1_MSB_host_in_n_msb(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_IN_1_MSB_host_in_n_msb_SHIFT)) & VSPA_HOST_IN_1_MSB_host_in_n_msb_MASK)
/*! @} */

/*! @name HOST_IN_1_LSB - Host from VCPU Inbox Message n LSB Register */
/*! @{ */

#define VSPA_HOST_IN_1_LSB_host_in_n_lsb_MASK    (0xFFFFFFFFU)
#define VSPA_HOST_IN_1_LSB_host_in_n_lsb_SHIFT   (0U)
#define VSPA_HOST_IN_1_LSB_host_in_n_lsb_WIDTH   (32U)
#define VSPA_HOST_IN_1_LSB_host_in_n_lsb(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_IN_1_LSB_host_in_n_lsb_SHIFT)) & VSPA_HOST_IN_1_LSB_host_in_n_lsb_MASK)
/*! @} */

/*! @name HOST_MBOX_STATUS - Host Mailbox Status Register */
/*! @{ */

#define VSPA_HOST_MBOX_STATUS_msg_out_0_valid_MASK (0x1U)
#define VSPA_HOST_MBOX_STATUS_msg_out_0_valid_SHIFT (0U)
#define VSPA_HOST_MBOX_STATUS_msg_out_0_valid_WIDTH (1U)
#define VSPA_HOST_MBOX_STATUS_msg_out_0_valid(x) (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_MBOX_STATUS_msg_out_0_valid_SHIFT)) & VSPA_HOST_MBOX_STATUS_msg_out_0_valid_MASK)

#define VSPA_HOST_MBOX_STATUS_msg_out_1_valid_MASK (0x2U)
#define VSPA_HOST_MBOX_STATUS_msg_out_1_valid_SHIFT (1U)
#define VSPA_HOST_MBOX_STATUS_msg_out_1_valid_WIDTH (1U)
#define VSPA_HOST_MBOX_STATUS_msg_out_1_valid(x) (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_MBOX_STATUS_msg_out_1_valid_SHIFT)) & VSPA_HOST_MBOX_STATUS_msg_out_1_valid_MASK)

#define VSPA_HOST_MBOX_STATUS_msg_in_0_valid_MASK (0x4U)
#define VSPA_HOST_MBOX_STATUS_msg_in_0_valid_SHIFT (2U)
#define VSPA_HOST_MBOX_STATUS_msg_in_0_valid_WIDTH (1U)
#define VSPA_HOST_MBOX_STATUS_msg_in_0_valid(x)  (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_MBOX_STATUS_msg_in_0_valid_SHIFT)) & VSPA_HOST_MBOX_STATUS_msg_in_0_valid_MASK)

#define VSPA_HOST_MBOX_STATUS_msg_in_1_valid_MASK (0x8U)
#define VSPA_HOST_MBOX_STATUS_msg_in_1_valid_SHIFT (3U)
#define VSPA_HOST_MBOX_STATUS_msg_in_1_valid_WIDTH (1U)
#define VSPA_HOST_MBOX_STATUS_msg_in_1_valid(x)  (((uint32_t)(((uint32_t)(x)) << VSPA_HOST_MBOX_STATUS_msg_in_1_valid_SHIFT)) & VSPA_HOST_MBOX_STATUS_msg_in_1_valid_MASK)
/*! @} */

/*! @name IPPUCONTROL - IPPU Control register */
/*! @{ */

#define VSPA_IPPUCONTROL_ippu_start_address_MASK (0xFFFFU)
#define VSPA_IPPUCONTROL_ippu_start_address_SHIFT (0U)
#define VSPA_IPPUCONTROL_ippu_start_address_WIDTH (16U)
#define VSPA_IPPUCONTROL_ippu_start_address(x)   (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUCONTROL_ippu_start_address_SHIFT)) & VSPA_IPPUCONTROL_ippu_start_address_MASK)

#define VSPA_IPPUCONTROL_ippu_irq_en_MASK        (0x400000U)
#define VSPA_IPPUCONTROL_ippu_irq_en_SHIFT       (22U)
#define VSPA_IPPUCONTROL_ippu_irq_en_WIDTH       (1U)
#define VSPA_IPPUCONTROL_ippu_irq_en(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUCONTROL_ippu_irq_en_SHIFT)) & VSPA_IPPUCONTROL_ippu_irq_en_MASK)

#define VSPA_IPPUCONTROL_vcpu_go_en_MASK         (0x800000U)
#define VSPA_IPPUCONTROL_vcpu_go_en_SHIFT        (23U)
#define VSPA_IPPUCONTROL_vcpu_go_en_WIDTH        (1U)
#define VSPA_IPPUCONTROL_vcpu_go_en(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUCONTROL_vcpu_go_en_SHIFT)) & VSPA_IPPUCONTROL_vcpu_go_en_MASK)

#define VSPA_IPPUCONTROL_ippu_legacy_mem_addr_MASK (0x1000000U)
#define VSPA_IPPUCONTROL_ippu_legacy_mem_addr_SHIFT (24U)
#define VSPA_IPPUCONTROL_ippu_legacy_mem_addr_WIDTH (1U)
#define VSPA_IPPUCONTROL_ippu_legacy_mem_addr(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUCONTROL_ippu_legacy_mem_addr_SHIFT)) & VSPA_IPPUCONTROL_ippu_legacy_mem_addr_MASK)

#define VSPA_IPPUCONTROL_ippu_dma_trigger_MASK   (0x8000000U)
#define VSPA_IPPUCONTROL_ippu_dma_trigger_SHIFT  (27U)
#define VSPA_IPPUCONTROL_ippu_dma_trigger_WIDTH  (1U)
#define VSPA_IPPUCONTROL_ippu_dma_trigger(x)     (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUCONTROL_ippu_dma_trigger_SHIFT)) & VSPA_IPPUCONTROL_ippu_dma_trigger_MASK)

#define VSPA_IPPUCONTROL_start_type_MASK         (0xE0000000U)
#define VSPA_IPPUCONTROL_start_type_SHIFT        (29U)
#define VSPA_IPPUCONTROL_start_type_WIDTH        (3U)
#define VSPA_IPPUCONTROL_start_type(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUCONTROL_start_type_SHIFT)) & VSPA_IPPUCONTROL_start_type_MASK)
/*! @} */

/*! @name IPPUSTATUS - IPPU Status register */
/*! @{ */

#define VSPA_IPPUSTATUS_ippu_pc_MASK             (0xFFFFU)
#define VSPA_IPPUSTATUS_ippu_pc_SHIFT            (0U)
#define VSPA_IPPUSTATUS_ippu_pc_WIDTH            (16U)
#define VSPA_IPPUSTATUS_ippu_pc(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUSTATUS_ippu_pc_SHIFT)) & VSPA_IPPUSTATUS_ippu_pc_MASK)

#define VSPA_IPPUSTATUS_cmd_fifo_full_MASK       (0x100000U)
#define VSPA_IPPUSTATUS_cmd_fifo_full_SHIFT      (20U)
#define VSPA_IPPUSTATUS_cmd_fifo_full_WIDTH      (1U)
#define VSPA_IPPUSTATUS_cmd_fifo_full(x)         (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUSTATUS_cmd_fifo_full_SHIFT)) & VSPA_IPPUSTATUS_cmd_fifo_full_MASK)

#define VSPA_IPPUSTATUS_ru_ip_busy_MASK          (0x200000U)
#define VSPA_IPPUSTATUS_ru_ip_busy_SHIFT         (21U)
#define VSPA_IPPUSTATUS_ru_ip_busy_WIDTH         (1U)
#define VSPA_IPPUSTATUS_ru_ip_busy(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUSTATUS_ru_ip_busy_SHIFT)) & VSPA_IPPUSTATUS_ru_ip_busy_MASK)

#define VSPA_IPPUSTATUS_command_fifo_depth_MASK  (0xC00000U)
#define VSPA_IPPUSTATUS_command_fifo_depth_SHIFT (22U)
#define VSPA_IPPUSTATUS_command_fifo_depth_WIDTH (2U)
#define VSPA_IPPUSTATUS_command_fifo_depth(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUSTATUS_command_fifo_depth_SHIFT)) & VSPA_IPPUSTATUS_command_fifo_depth_MASK)

#define VSPA_IPPUSTATUS_cmd_last_MASK            (0x6000000U)
#define VSPA_IPPUSTATUS_cmd_last_SHIFT           (25U)
#define VSPA_IPPUSTATUS_cmd_last_WIDTH           (2U)
#define VSPA_IPPUSTATUS_cmd_last(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUSTATUS_cmd_last_SHIFT)) & VSPA_IPPUSTATUS_cmd_last_MASK)

#define VSPA_IPPUSTATUS_cmd_error_MASK           (0x8000000U)
#define VSPA_IPPUSTATUS_cmd_error_SHIFT          (27U)
#define VSPA_IPPUSTATUS_cmd_error_WIDTH          (1U)
#define VSPA_IPPUSTATUS_cmd_error(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUSTATUS_cmd_error_SHIFT)) & VSPA_IPPUSTATUS_cmd_error_MASK)

#define VSPA_IPPUSTATUS_ippu_done_MASK           (0x10000000U)
#define VSPA_IPPUSTATUS_ippu_done_SHIFT          (28U)
#define VSPA_IPPUSTATUS_ippu_done_WIDTH          (1U)
#define VSPA_IPPUSTATUS_ippu_done(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUSTATUS_ippu_done_SHIFT)) & VSPA_IPPUSTATUS_ippu_done_MASK)

#define VSPA_IPPUSTATUS_ippu_aborted_MASK        (0x20000000U)
#define VSPA_IPPUSTATUS_ippu_aborted_SHIFT       (29U)
#define VSPA_IPPUSTATUS_ippu_aborted_WIDTH       (1U)
#define VSPA_IPPUSTATUS_ippu_aborted(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUSTATUS_ippu_aborted_SHIFT)) & VSPA_IPPUSTATUS_ippu_aborted_MASK)

#define VSPA_IPPUSTATUS_ippu_suspended_MASK      (0x40000000U)
#define VSPA_IPPUSTATUS_ippu_suspended_SHIFT     (30U)
#define VSPA_IPPUSTATUS_ippu_suspended_WIDTH     (1U)
#define VSPA_IPPUSTATUS_ippu_suspended(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUSTATUS_ippu_suspended_SHIFT)) & VSPA_IPPUSTATUS_ippu_suspended_MASK)

#define VSPA_IPPUSTATUS_ippu_active_MASK         (0x80000000U)
#define VSPA_IPPUSTATUS_ippu_active_SHIFT        (31U)
#define VSPA_IPPUSTATUS_ippu_active_WIDTH        (1U)
#define VSPA_IPPUSTATUS_ippu_active(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUSTATUS_ippu_active_SHIFT)) & VSPA_IPPUSTATUS_ippu_active_MASK)
/*! @} */

/*! @name IPPURC - IPPU Run Control register */
/*! @{ */

#define VSPA_IPPURC_ippu_abort_MASK              (0x20000000U)
#define VSPA_IPPURC_ippu_abort_SHIFT             (29U)
#define VSPA_IPPURC_ippu_abort_WIDTH             (1U)
#define VSPA_IPPURC_ippu_abort(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_IPPURC_ippu_abort_SHIFT)) & VSPA_IPPURC_ippu_abort_MASK)

#define VSPA_IPPURC_ippu_suspend_MASK            (0x40000000U)
#define VSPA_IPPURC_ippu_suspend_SHIFT           (30U)
#define VSPA_IPPURC_ippu_suspend_WIDTH           (1U)
#define VSPA_IPPURC_ippu_suspend(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_IPPURC_ippu_suspend_SHIFT)) & VSPA_IPPURC_ippu_suspend_MASK)

#define VSPA_IPPURC_clear_cmd_fifo_error_MASK    (0x80000000U)
#define VSPA_IPPURC_clear_cmd_fifo_error_SHIFT   (31U)
#define VSPA_IPPURC_clear_cmd_fifo_error_WIDTH   (1U)
#define VSPA_IPPURC_clear_cmd_fifo_error(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_IPPURC_clear_cmd_fifo_error_SHIFT)) & VSPA_IPPURC_clear_cmd_fifo_error_MASK)
/*! @} */

/*! @name IPPUARGBASEADDR - IPPU Arg Base Address register */
/*! @{ */

#define VSPA_IPPUARGBASEADDR_ippu_arg_base_addr_MASK (0x7FFFFU)
#define VSPA_IPPUARGBASEADDR_ippu_arg_base_addr_SHIFT (0U)
#define VSPA_IPPUARGBASEADDR_ippu_arg_base_addr_WIDTH (19U)
#define VSPA_IPPUARGBASEADDR_ippu_arg_base_addr(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUARGBASEADDR_ippu_arg_base_addr_SHIFT)) & VSPA_IPPUARGBASEADDR_ippu_arg_base_addr_MASK)
/*! @} */

/*! @name IPPUHWVER - IPPU Hardware Version */
/*! @{ */

#define VSPA_IPPUHWVER_ippu_hw_version_MASK      (0xFFFFFFFFU)
#define VSPA_IPPUHWVER_ippu_hw_version_SHIFT     (0U)
#define VSPA_IPPUHWVER_ippu_hw_version_WIDTH     (32U)
#define VSPA_IPPUHWVER_ippu_hw_version(x)        (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUHWVER_ippu_hw_version_SHIFT)) & VSPA_IPPUHWVER_ippu_hw_version_MASK)
/*! @} */

/*! @name IPPUSWVER - IPPU Software Version */
/*! @{ */

#define VSPA_IPPUSWVER_ippu_code_version_MASK    (0xFFFFFFFFU)
#define VSPA_IPPUSWVER_ippu_code_version_SHIFT   (0U)
#define VSPA_IPPUSWVER_ippu_code_version_WIDTH   (32U)
#define VSPA_IPPUSWVER_ippu_code_version(x)      (((uint32_t)(((uint32_t)(x)) << VSPA_IPPUSWVER_ippu_code_version_SHIFT)) & VSPA_IPPUSWVER_ippu_code_version_MASK)
/*! @} */

/*! @name GDBEN - Global Debug Enable register */
/*! @{ */

#define VSPA_GDBEN_idbg_en_MASK                  (0x1U)
#define VSPA_GDBEN_idbg_en_SHIFT                 (0U)
#define VSPA_GDBEN_idbg_en_WIDTH                 (1U)
#define VSPA_GDBEN_idbg_en(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_GDBEN_idbg_en_SHIFT)) & VSPA_GDBEN_idbg_en_MASK)

#define VSPA_GDBEN_nidbg_en_MASK                 (0x2U)
#define VSPA_GDBEN_nidbg_en_SHIFT                (1U)
#define VSPA_GDBEN_nidbg_en_WIDTH                (1U)
#define VSPA_GDBEN_nidbg_en(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_GDBEN_nidbg_en_SHIFT)) & VSPA_GDBEN_nidbg_en_MASK)
/*! @} */

/*! @name RCR - Debug Run Control register */
/*! @{ */

#define VSPA_RCR_single_step_MASK                (0x1U)
#define VSPA_RCR_single_step_SHIFT               (0U)
#define VSPA_RCR_single_step_WIDTH               (1U)
#define VSPA_RCR_single_step(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_RCR_single_step_SHIFT)) & VSPA_RCR_single_step_MASK)

#define VSPA_RCR_resume_MASK                     (0x2U)
#define VSPA_RCR_resume_SHIFT                    (1U)
#define VSPA_RCR_resume_WIDTH                    (1U)
#define VSPA_RCR_resume(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_RCR_resume_SHIFT)) & VSPA_RCR_resume_MASK)

#define VSPA_RCR_force_halt_MASK                 (0x4U)
#define VSPA_RCR_force_halt_SHIFT                (2U)
#define VSPA_RCR_force_halt_WIDTH                (1U)
#define VSPA_RCR_force_halt(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_RCR_force_halt_SHIFT)) & VSPA_RCR_force_halt_MASK)

#define VSPA_RCR_halt_cyc_counter_MASK           (0x100U)
#define VSPA_RCR_halt_cyc_counter_SHIFT          (8U)
#define VSPA_RCR_halt_cyc_counter_WIDTH          (1U)
#define VSPA_RCR_halt_cyc_counter(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_RCR_halt_cyc_counter_SHIFT)) & VSPA_RCR_halt_cyc_counter_MASK)
/*! @} */

/*! @name RCSTATUS - Debug Run Control Status register */
/*! @{ */

#define VSPA_RCSTATUS_cmpn_MASK                  (0xFFU)
#define VSPA_RCSTATUS_cmpn_SHIFT                 (0U)
#define VSPA_RCSTATUS_cmpn_WIDTH                 (8U)
#define VSPA_RCSTATUS_cmpn(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_cmpn_SHIFT)) & VSPA_RCSTATUS_cmpn_MASK)

#define VSPA_RCSTATUS_halted_MASK                (0x2000U)
#define VSPA_RCSTATUS_halted_SHIFT               (13U)
#define VSPA_RCSTATUS_halted_WIDTH               (1U)
#define VSPA_RCSTATUS_halted(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_halted_SHIFT)) & VSPA_RCSTATUS_halted_MASK)

#define VSPA_RCSTATUS_forced_halt_MASK           (0x4000U)
#define VSPA_RCSTATUS_forced_halt_SHIFT          (14U)
#define VSPA_RCSTATUS_forced_halt_WIDTH          (1U)
#define VSPA_RCSTATUS_forced_halt(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_forced_halt_SHIFT)) & VSPA_RCSTATUS_forced_halt_MASK)

#define VSPA_RCSTATUS_dbg_halt_req_MASK          (0x8000U)
#define VSPA_RCSTATUS_dbg_halt_req_SHIFT         (15U)
#define VSPA_RCSTATUS_dbg_halt_req_WIDTH         (1U)
#define VSPA_RCSTATUS_dbg_halt_req(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_dbg_halt_req_SHIFT)) & VSPA_RCSTATUS_dbg_halt_req_MASK)

#define VSPA_RCSTATUS_ctinn_MASK                 (0xF0000U)
#define VSPA_RCSTATUS_ctinn_SHIFT                (16U)
#define VSPA_RCSTATUS_ctinn_WIDTH                (4U)
#define VSPA_RCSTATUS_ctinn(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_ctinn_SHIFT)) & VSPA_RCSTATUS_ctinn_MASK)

#define VSPA_RCSTATUS_irq_input_MASK             (0x4000000U)
#define VSPA_RCSTATUS_irq_input_SHIFT            (26U)
#define VSPA_RCSTATUS_irq_input_WIDTH            (1U)
#define VSPA_RCSTATUS_irq_input(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_irq_input_SHIFT)) & VSPA_RCSTATUS_irq_input_MASK)

#define VSPA_RCSTATUS_prot_fault_MASK            (0x8000000U)
#define VSPA_RCSTATUS_prot_fault_SHIFT           (27U)
#define VSPA_RCSTATUS_prot_fault_WIDTH           (1U)
#define VSPA_RCSTATUS_prot_fault(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_prot_fault_SHIFT)) & VSPA_RCSTATUS_prot_fault_MASK)

#define VSPA_RCSTATUS_iit_MASK                   (0x10000000U)
#define VSPA_RCSTATUS_iit_SHIFT                  (28U)
#define VSPA_RCSTATUS_iit_WIDTH                  (1U)
#define VSPA_RCSTATUS_iit(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_iit_SHIFT)) & VSPA_RCSTATUS_iit_MASK)

#define VSPA_RCSTATUS_swb_MASK                   (0x20000000U)
#define VSPA_RCSTATUS_swb_SHIFT                  (29U)
#define VSPA_RCSTATUS_swb_WIDTH                  (1U)
#define VSPA_RCSTATUS_swb(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_swb_SHIFT)) & VSPA_RCSTATUS_swb_MASK)

#define VSPA_RCSTATUS_vcpu_done_MASK             (0x40000000U)
#define VSPA_RCSTATUS_vcpu_done_SHIFT            (30U)
#define VSPA_RCSTATUS_vcpu_done_WIDTH            (1U)
#define VSPA_RCSTATUS_vcpu_done(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_vcpu_done_SHIFT)) & VSPA_RCSTATUS_vcpu_done_MASK)

#define VSPA_RCSTATUS_vcpu_go_MASK               (0x80000000U)
#define VSPA_RCSTATUS_vcpu_go_SHIFT              (31U)
#define VSPA_RCSTATUS_vcpu_go_WIDTH              (1U)
#define VSPA_RCSTATUS_vcpu_go(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_vcpu_go_SHIFT)) & VSPA_RCSTATUS_vcpu_go_MASK)
/*! @} */

/*! @name TC1 - Trace Control register 1 */
/*! @{ */

#define VSPA_TC1_dqm_en_MASK                     (0x1U)
#define VSPA_TC1_dqm_en_SHIFT                    (0U)
#define VSPA_TC1_dqm_en_WIDTH                    (1U)
#define VSPA_TC1_dqm_en(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dqm_en_SHIFT)) & VSPA_TC1_dqm_en_MASK)

#define VSPA_TC1_wpt_en_MASK                     (0x2U)
#define VSPA_TC1_wpt_en_SHIFT                    (1U)
#define VSPA_TC1_wpt_en_WIDTH                    (1U)
#define VSPA_TC1_wpt_en(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_wpt_en_SHIFT)) & VSPA_TC1_wpt_en_MASK)

#define VSPA_TC1_dtm_tr_start_MASK               (0x4U)
#define VSPA_TC1_dtm_tr_start_SHIFT              (2U)
#define VSPA_TC1_dtm_tr_start_WIDTH              (1U)
#define VSPA_TC1_dtm_tr_start(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dtm_tr_start_SHIFT)) & VSPA_TC1_dtm_tr_start_MASK)

#define VSPA_TC1_dtm_tr_stop_MASK                (0x8U)
#define VSPA_TC1_dtm_tr_stop_SHIFT               (3U)
#define VSPA_TC1_dtm_tr_stop_WIDTH               (1U)
#define VSPA_TC1_dtm_tr_stop(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dtm_tr_stop_SHIFT)) & VSPA_TC1_dtm_tr_stop_MASK)

#define VSPA_TC1_dtm_trig_en_MASK                (0x10U)
#define VSPA_TC1_dtm_trig_en_SHIFT               (4U)
#define VSPA_TC1_dtm_trig_en_WIDTH               (1U)
#define VSPA_TC1_dtm_trig_en(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dtm_trig_en_SHIFT)) & VSPA_TC1_dtm_trig_en_MASK)

#define VSPA_TC1_ptm_tr_start_MASK               (0x20U)
#define VSPA_TC1_ptm_tr_start_SHIFT              (5U)
#define VSPA_TC1_ptm_tr_start_WIDTH              (1U)
#define VSPA_TC1_ptm_tr_start(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_ptm_tr_start_SHIFT)) & VSPA_TC1_ptm_tr_start_MASK)

#define VSPA_TC1_ptm_tr_stop_MASK                (0x40U)
#define VSPA_TC1_ptm_tr_stop_SHIFT               (6U)
#define VSPA_TC1_ptm_tr_stop_WIDTH               (1U)
#define VSPA_TC1_ptm_tr_stop(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_ptm_tr_stop_SHIFT)) & VSPA_TC1_ptm_tr_stop_MASK)

#define VSPA_TC1_ptm_trig_en_MASK                (0x80U)
#define VSPA_TC1_ptm_trig_en_SHIFT               (7U)
#define VSPA_TC1_ptm_trig_en_WIDTH               (1U)
#define VSPA_TC1_ptm_trig_en(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_ptm_trig_en_SHIFT)) & VSPA_TC1_ptm_trig_en_MASK)

#define VSPA_TC1_dt_status_MASK                  (0x1000U)
#define VSPA_TC1_dt_status_SHIFT                 (12U)
#define VSPA_TC1_dt_status_WIDTH                 (1U)
#define VSPA_TC1_dt_status(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dt_status_SHIFT)) & VSPA_TC1_dt_status_MASK)

#define VSPA_TC1_pt_status_MASK                  (0x2000U)
#define VSPA_TC1_pt_status_SHIFT                 (13U)
#define VSPA_TC1_pt_status_WIDTH                 (1U)
#define VSPA_TC1_pt_status(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_pt_status_SHIFT)) & VSPA_TC1_pt_status_MASK)

#define VSPA_TC1_dbg_fifo_empty_MASK             (0x4000U)
#define VSPA_TC1_dbg_fifo_empty_SHIFT            (14U)
#define VSPA_TC1_dbg_fifo_empty_WIDTH            (1U)
#define VSPA_TC1_dbg_fifo_empty(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dbg_fifo_empty_SHIFT)) & VSPA_TC1_dbg_fifo_empty_MASK)

#define VSPA_TC1_tam_period_MASK                 (0x70000U)
#define VSPA_TC1_tam_period_SHIFT                (16U)
#define VSPA_TC1_tam_period_WIDTH                (3U)
#define VSPA_TC1_tam_period(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_tam_period_SHIFT)) & VSPA_TC1_tam_period_MASK)

#define VSPA_TC1_hwlte_MASK                      (0x2000000U)
#define VSPA_TC1_hwlte_SHIFT                     (25U)
#define VSPA_TC1_hwlte_WIDTH                     (1U)
#define VSPA_TC1_hwlte(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_hwlte_SHIFT)) & VSPA_TC1_hwlte_MASK)

#define VSPA_TC1_rse_MASK                        (0x4000000U)
#define VSPA_TC1_rse_SHIFT                       (26U)
#define VSPA_TC1_rse_WIDTH                       (1U)
#define VSPA_TC1_rse(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_rse_SHIFT)) & VSPA_TC1_rse_MASK)

#define VSPA_TC1_dbsue_MASK                      (0x8000000U)
#define VSPA_TC1_dbsue_SHIFT                     (27U)
#define VSPA_TC1_dbsue_WIDTH                     (1U)
#define VSPA_TC1_dbsue(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dbsue_SHIFT)) & VSPA_TC1_dbsue_MASK)
/*! @} */

/*! @name HACR - Debug Halt Action Control register */
/*! @{ */

#define VSPA_HACR_cmpn_MASK                      (0xFFU)
#define VSPA_HACR_cmpn_SHIFT                     (0U)
#define VSPA_HACR_cmpn_WIDTH                     (8U)
#define VSPA_HACR_cmpn(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_HACR_cmpn_SHIFT)) & VSPA_HACR_cmpn_MASK)

#define VSPA_HACR_ctinn_MASK                     (0xF0000U)
#define VSPA_HACR_ctinn_SHIFT                    (16U)
#define VSPA_HACR_ctinn_WIDTH                    (4U)
#define VSPA_HACR_ctinn(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_HACR_ctinn_SHIFT)) & VSPA_HACR_ctinn_MASK)

#define VSPA_HACR_vcpu_illop_MASK                (0x10000000U)
#define VSPA_HACR_vcpu_illop_SHIFT               (28U)
#define VSPA_HACR_vcpu_illop_WIDTH               (1U)
#define VSPA_HACR_vcpu_illop(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_HACR_vcpu_illop_SHIFT)) & VSPA_HACR_vcpu_illop_MASK)

#define VSPA_HACR_swb_MASK                       (0x20000000U)
#define VSPA_HACR_swb_SHIFT                      (29U)
#define VSPA_HACR_swb_WIDTH                      (1U)
#define VSPA_HACR_swb(x)                         (((uint32_t)(((uint32_t)(x)) << VSPA_HACR_swb_SHIFT)) & VSPA_HACR_swb_MASK)

#define VSPA_HACR_vcpu_done_MASK                 (0x40000000U)
#define VSPA_HACR_vcpu_done_SHIFT                (30U)
#define VSPA_HACR_vcpu_done_WIDTH                (1U)
#define VSPA_HACR_vcpu_done(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_HACR_vcpu_done_SHIFT)) & VSPA_HACR_vcpu_done_MASK)

#define VSPA_HACR_vcpu_go_MASK                   (0x80000000U)
#define VSPA_HACR_vcpu_go_SHIFT                  (31U)
#define VSPA_HACR_vcpu_go_WIDTH                  (1U)
#define VSPA_HACR_vcpu_go(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_HACR_vcpu_go_SHIFT)) & VSPA_HACR_vcpu_go_MASK)
/*! @} */

/*! @name RACR - Debug Resume Action Control register */
/*! @{ */

#define VSPA_RACR_cmpn_MASK                      (0xFFU)
#define VSPA_RACR_cmpn_SHIFT                     (0U)
#define VSPA_RACR_cmpn_WIDTH                     (8U)
#define VSPA_RACR_cmpn(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_RACR_cmpn_SHIFT)) & VSPA_RACR_cmpn_MASK)

#define VSPA_RACR_ctinn_MASK                     (0xF0000U)
#define VSPA_RACR_ctinn_SHIFT                    (16U)
#define VSPA_RACR_ctinn_WIDTH                    (4U)
#define VSPA_RACR_ctinn(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_RACR_ctinn_SHIFT)) & VSPA_RACR_ctinn_MASK)

#define VSPA_RACR_swb_MASK                       (0x20000000U)
#define VSPA_RACR_swb_SHIFT                      (29U)
#define VSPA_RACR_swb_WIDTH                      (1U)
#define VSPA_RACR_swb(x)                         (((uint32_t)(((uint32_t)(x)) << VSPA_RACR_swb_SHIFT)) & VSPA_RACR_swb_MASK)

#define VSPA_RACR_vcpu_done_MASK                 (0x40000000U)
#define VSPA_RACR_vcpu_done_SHIFT                (30U)
#define VSPA_RACR_vcpu_done_WIDTH                (1U)
#define VSPA_RACR_vcpu_done(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_RACR_vcpu_done_SHIFT)) & VSPA_RACR_vcpu_done_MASK)

#define VSPA_RACR_vcpu_go_MASK                   (0x80000000U)
#define VSPA_RACR_vcpu_go_SHIFT                  (31U)
#define VSPA_RACR_vcpu_go_WIDTH                  (1U)
#define VSPA_RACR_vcpu_go(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_RACR_vcpu_go_SHIFT)) & VSPA_RACR_vcpu_go_MASK)
/*! @} */

/*! @name PTSACR - Debug Program Trace Sync Action Control register */
/*! @{ */

#define VSPA_PTSACR_cmpn_MASK                    (0xFFU)
#define VSPA_PTSACR_cmpn_SHIFT                   (0U)
#define VSPA_PTSACR_cmpn_WIDTH                   (8U)
#define VSPA_PTSACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PTSACR_cmpn_SHIFT)) & VSPA_PTSACR_cmpn_MASK)

#define VSPA_PTSACR_ctinn_MASK                   (0xF0000U)
#define VSPA_PTSACR_ctinn_SHIFT                  (16U)
#define VSPA_PTSACR_ctinn_WIDTH                  (4U)
#define VSPA_PTSACR_ctinn(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PTSACR_ctinn_SHIFT)) & VSPA_PTSACR_ctinn_MASK)

#define VSPA_PTSACR_swb_MASK                     (0x20000000U)
#define VSPA_PTSACR_swb_SHIFT                    (29U)
#define VSPA_PTSACR_swb_WIDTH                    (1U)
#define VSPA_PTSACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_PTSACR_swb_SHIFT)) & VSPA_PTSACR_swb_MASK)
/*! @} */

/*! @name PSTACR - Debug Program Trace Start Action Control register */
/*! @{ */

#define VSPA_PSTACR_cmpn_MASK                    (0xFFU)
#define VSPA_PSTACR_cmpn_SHIFT                   (0U)
#define VSPA_PSTACR_cmpn_WIDTH                   (8U)
#define VSPA_PSTACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PSTACR_cmpn_SHIFT)) & VSPA_PSTACR_cmpn_MASK)

#define VSPA_PSTACR_ctinn_MASK                   (0xF0000U)
#define VSPA_PSTACR_ctinn_SHIFT                  (16U)
#define VSPA_PSTACR_ctinn_WIDTH                  (4U)
#define VSPA_PSTACR_ctinn(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PSTACR_ctinn_SHIFT)) & VSPA_PSTACR_ctinn_MASK)

#define VSPA_PSTACR_swb_MASK                     (0x20000000U)
#define VSPA_PSTACR_swb_SHIFT                    (29U)
#define VSPA_PSTACR_swb_WIDTH                    (1U)
#define VSPA_PSTACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_PSTACR_swb_SHIFT)) & VSPA_PSTACR_swb_MASK)

#define VSPA_PSTACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_PSTACR_vcpu_done_SHIFT              (30U)
#define VSPA_PSTACR_vcpu_done_WIDTH              (1U)
#define VSPA_PSTACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_PSTACR_vcpu_done_SHIFT)) & VSPA_PSTACR_vcpu_done_MASK)

#define VSPA_PSTACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_PSTACR_vcpu_go_SHIFT                (31U)
#define VSPA_PSTACR_vcpu_go_WIDTH                (1U)
#define VSPA_PSTACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_PSTACR_vcpu_go_SHIFT)) & VSPA_PSTACR_vcpu_go_MASK)
/*! @} */

/*! @name PSPACR - Debug Program Trace Stop Action Control register */
/*! @{ */

#define VSPA_PSPACR_cmpn_MASK                    (0xFFU)
#define VSPA_PSPACR_cmpn_SHIFT                   (0U)
#define VSPA_PSPACR_cmpn_WIDTH                   (8U)
#define VSPA_PSPACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PSPACR_cmpn_SHIFT)) & VSPA_PSPACR_cmpn_MASK)

#define VSPA_PSPACR_ctinn_MASK                   (0xF0000U)
#define VSPA_PSPACR_ctinn_SHIFT                  (16U)
#define VSPA_PSPACR_ctinn_WIDTH                  (4U)
#define VSPA_PSPACR_ctinn(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PSPACR_ctinn_SHIFT)) & VSPA_PSPACR_ctinn_MASK)

#define VSPA_PSPACR_swb_MASK                     (0x20000000U)
#define VSPA_PSPACR_swb_SHIFT                    (29U)
#define VSPA_PSPACR_swb_WIDTH                    (1U)
#define VSPA_PSPACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_PSPACR_swb_SHIFT)) & VSPA_PSPACR_swb_MASK)

#define VSPA_PSPACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_PSPACR_vcpu_done_SHIFT              (30U)
#define VSPA_PSPACR_vcpu_done_WIDTH              (1U)
#define VSPA_PSPACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_PSPACR_vcpu_done_SHIFT)) & VSPA_PSPACR_vcpu_done_MASK)

#define VSPA_PSPACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_PSPACR_vcpu_go_SHIFT                (31U)
#define VSPA_PSPACR_vcpu_go_WIDTH                (1U)
#define VSPA_PSPACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_PSPACR_vcpu_go_SHIFT)) & VSPA_PSPACR_vcpu_go_MASK)
/*! @} */

/*! @name DSTACR - Debug Data Trace Start Action Control register */
/*! @{ */

#define VSPA_DSTACR_cmpn_MASK                    (0xFFU)
#define VSPA_DSTACR_cmpn_SHIFT                   (0U)
#define VSPA_DSTACR_cmpn_WIDTH                   (8U)
#define VSPA_DSTACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DSTACR_cmpn_SHIFT)) & VSPA_DSTACR_cmpn_MASK)

#define VSPA_DSTACR_ctinn_MASK                   (0xF0000U)
#define VSPA_DSTACR_ctinn_SHIFT                  (16U)
#define VSPA_DSTACR_ctinn_WIDTH                  (4U)
#define VSPA_DSTACR_ctinn(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DSTACR_ctinn_SHIFT)) & VSPA_DSTACR_ctinn_MASK)

#define VSPA_DSTACR_swb_MASK                     (0x20000000U)
#define VSPA_DSTACR_swb_SHIFT                    (29U)
#define VSPA_DSTACR_swb_WIDTH                    (1U)
#define VSPA_DSTACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_DSTACR_swb_SHIFT)) & VSPA_DSTACR_swb_MASK)

#define VSPA_DSTACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_DSTACR_vcpu_done_SHIFT              (30U)
#define VSPA_DSTACR_vcpu_done_WIDTH              (1U)
#define VSPA_DSTACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DSTACR_vcpu_done_SHIFT)) & VSPA_DSTACR_vcpu_done_MASK)

#define VSPA_DSTACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_DSTACR_vcpu_go_SHIFT                (31U)
#define VSPA_DSTACR_vcpu_go_WIDTH                (1U)
#define VSPA_DSTACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DSTACR_vcpu_go_SHIFT)) & VSPA_DSTACR_vcpu_go_MASK)
/*! @} */

/*! @name DSPACR - Debug Data Trace Stop Action Control register */
/*! @{ */

#define VSPA_DSPACR_cmpn_MASK                    (0xFFU)
#define VSPA_DSPACR_cmpn_SHIFT                   (0U)
#define VSPA_DSPACR_cmpn_WIDTH                   (8U)
#define VSPA_DSPACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DSPACR_cmpn_SHIFT)) & VSPA_DSPACR_cmpn_MASK)

#define VSPA_DSPACR_ctinn_MASK                   (0xF0000U)
#define VSPA_DSPACR_ctinn_SHIFT                  (16U)
#define VSPA_DSPACR_ctinn_WIDTH                  (4U)
#define VSPA_DSPACR_ctinn(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DSPACR_ctinn_SHIFT)) & VSPA_DSPACR_ctinn_MASK)

#define VSPA_DSPACR_swb_MASK                     (0x20000000U)
#define VSPA_DSPACR_swb_SHIFT                    (29U)
#define VSPA_DSPACR_swb_WIDTH                    (1U)
#define VSPA_DSPACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_DSPACR_swb_SHIFT)) & VSPA_DSPACR_swb_MASK)

#define VSPA_DSPACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_DSPACR_vcpu_done_SHIFT              (30U)
#define VSPA_DSPACR_vcpu_done_WIDTH              (1U)
#define VSPA_DSPACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DSPACR_vcpu_done_SHIFT)) & VSPA_DSPACR_vcpu_done_MASK)

#define VSPA_DSPACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_DSPACR_vcpu_go_SHIFT                (31U)
#define VSPA_DSPACR_vcpu_go_WIDTH                (1U)
#define VSPA_DSPACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DSPACR_vcpu_go_SHIFT)) & VSPA_DSPACR_vcpu_go_MASK)
/*! @} */

/*! @name DTMACR - Debug Data Trace Message Generation Action Control register */
/*! @{ */

#define VSPA_DTMACR_cmpn_MASK                    (0xFFU)
#define VSPA_DTMACR_cmpn_SHIFT                   (0U)
#define VSPA_DTMACR_cmpn_WIDTH                   (8U)
#define VSPA_DTMACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DTMACR_cmpn_SHIFT)) & VSPA_DTMACR_cmpn_MASK)
/*! @} */

/*! @name WPMACR - Debug WPM Generation Action Control register */
/*! @{ */

#define VSPA_WPMACR_cmpn_MASK                    (0xFFU)
#define VSPA_WPMACR_cmpn_SHIFT                   (0U)
#define VSPA_WPMACR_cmpn_WIDTH                   (8U)
#define VSPA_WPMACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_WPMACR_cmpn_SHIFT)) & VSPA_WPMACR_cmpn_MASK)

#define VSPA_WPMACR_ctinn_MASK                   (0xF0000U)
#define VSPA_WPMACR_ctinn_SHIFT                  (16U)
#define VSPA_WPMACR_ctinn_WIDTH                  (4U)
#define VSPA_WPMACR_ctinn(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_WPMACR_ctinn_SHIFT)) & VSPA_WPMACR_ctinn_MASK)

#define VSPA_WPMACR_vcpu_illop_MASK              (0x10000000U)
#define VSPA_WPMACR_vcpu_illop_SHIFT             (28U)
#define VSPA_WPMACR_vcpu_illop_WIDTH             (1U)
#define VSPA_WPMACR_vcpu_illop(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_WPMACR_vcpu_illop_SHIFT)) & VSPA_WPMACR_vcpu_illop_MASK)

#define VSPA_WPMACR_swb_MASK                     (0x20000000U)
#define VSPA_WPMACR_swb_SHIFT                    (29U)
#define VSPA_WPMACR_swb_WIDTH                    (1U)
#define VSPA_WPMACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_WPMACR_swb_SHIFT)) & VSPA_WPMACR_swb_MASK)

#define VSPA_WPMACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_WPMACR_vcpu_done_SHIFT              (30U)
#define VSPA_WPMACR_vcpu_done_WIDTH              (1U)
#define VSPA_WPMACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_WPMACR_vcpu_done_SHIFT)) & VSPA_WPMACR_vcpu_done_MASK)

#define VSPA_WPMACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_WPMACR_vcpu_go_SHIFT                (31U)
#define VSPA_WPMACR_vcpu_go_WIDTH                (1U)
#define VSPA_WPMACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_WPMACR_vcpu_go_SHIFT)) & VSPA_WPMACR_vcpu_go_MASK)
/*! @} */

/*! @name TSMCR - Debug TSM Control register */
/*! @{ */

#define VSPA_TSMCR_tsm_en_MASK                   (0x1U)
#define VSPA_TSMCR_tsm_en_SHIFT                  (0U)
#define VSPA_TSMCR_tsm_en_WIDTH                  (1U)
#define VSPA_TSMCR_tsm_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_en_SHIFT)) & VSPA_TSMCR_tsm_en_MASK)

#define VSPA_TSMCR_tsm_dtm_en_MASK               (0x10U)
#define VSPA_TSMCR_tsm_dtm_en_SHIFT              (4U)
#define VSPA_TSMCR_tsm_dtm_en_WIDTH              (1U)
#define VSPA_TSMCR_tsm_dtm_en(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_dtm_en_SHIFT)) & VSPA_TSMCR_tsm_dtm_en_MASK)

#define VSPA_TSMCR_tsm_wpt_en_MASK               (0x20U)
#define VSPA_TSMCR_tsm_wpt_en_SHIFT              (5U)
#define VSPA_TSMCR_tsm_wpt_en_WIDTH              (1U)
#define VSPA_TSMCR_tsm_wpt_en(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_wpt_en_SHIFT)) & VSPA_TSMCR_tsm_wpt_en_MASK)

#define VSPA_TSMCR_tsm_dqm_en_MASK               (0x40U)
#define VSPA_TSMCR_tsm_dqm_en_SHIFT              (6U)
#define VSPA_TSMCR_tsm_dqm_en_WIDTH              (1U)
#define VSPA_TSMCR_tsm_dqm_en(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_dqm_en_SHIFT)) & VSPA_TSMCR_tsm_dqm_en_MASK)

#define VSPA_TSMCR_tsm_sync_en_MASK              (0x80U)
#define VSPA_TSMCR_tsm_sync_en_SHIFT             (7U)
#define VSPA_TSMCR_tsm_sync_en_WIDTH             (1U)
#define VSPA_TSMCR_tsm_sync_en(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_sync_en_SHIFT)) & VSPA_TSMCR_tsm_sync_en_MASK)

#define VSPA_TSMCR_tsm_jsr_en_MASK               (0x100U)
#define VSPA_TSMCR_tsm_jsr_en_SHIFT              (8U)
#define VSPA_TSMCR_tsm_jsr_en_WIDTH              (1U)
#define VSPA_TSMCR_tsm_jsr_en(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_jsr_en_SHIFT)) & VSPA_TSMCR_tsm_jsr_en_MASK)

#define VSPA_TSMCR_tsm_loop_en_MASK              (0x200U)
#define VSPA_TSMCR_tsm_loop_en_SHIFT             (9U)
#define VSPA_TSMCR_tsm_loop_en_WIDTH             (1U)
#define VSPA_TSMCR_tsm_loop_en(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_loop_en_SHIFT)) & VSPA_TSMCR_tsm_loop_en_MASK)

#define VSPA_TSMCR_tsm_tap_select_MASK           (0xF000U)
#define VSPA_TSMCR_tsm_tap_select_SHIFT          (12U)
#define VSPA_TSMCR_tsm_tap_select_WIDTH          (4U)
#define VSPA_TSMCR_tsm_tap_select(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_tap_select_SHIFT)) & VSPA_TSMCR_tsm_tap_select_MASK)
/*! @} */

/*! @name TSMCNT_U - Debug VSPA Timestamp Counter (Upper) register */
/*! @{ */

#define VSPA_TSMCNT_U_timestamp_counter_MASK     (0xFFFFU)
#define VSPA_TSMCNT_U_timestamp_counter_SHIFT    (0U)
#define VSPA_TSMCNT_U_timestamp_counter_WIDTH    (16U)
#define VSPA_TSMCNT_U_timestamp_counter(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCNT_U_timestamp_counter_SHIFT)) & VSPA_TSMCNT_U_timestamp_counter_MASK)
/*! @} */

/*! @name TSMCNT_L - Debug VSPA Timestamp Counter (Lower) register */
/*! @{ */

#define VSPA_TSMCNT_L_timestamp_counter_MASK     (0xFFFFFFFFU)
#define VSPA_TSMCNT_L_timestamp_counter_SHIFT    (0U)
#define VSPA_TSMCNT_L_timestamp_counter_WIDTH    (32U)
#define VSPA_TSMCNT_L_timestamp_counter(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCNT_L_timestamp_counter_SHIFT)) & VSPA_TSMCNT_L_timestamp_counter_MASK)
/*! @} */

/*! @name RAVAP - Debug VSP Architecture Visibility Address Pointer register */
/*! @{ */

#define VSPA_RAVAP_a_index_MASK                  (0x7FFFCU)
#define VSPA_RAVAP_a_index_SHIFT                 (2U)
#define VSPA_RAVAP_a_index_WIDTH                 (17U)
#define VSPA_RAVAP_a_index(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_RAVAP_a_index_SHIFT)) & VSPA_RAVAP_a_index_MASK)

#define VSPA_RAVAP_a_mode_MASK                   (0xF000000U)
#define VSPA_RAVAP_a_mode_SHIFT                  (24U)
#define VSPA_RAVAP_a_mode_WIDTH                  (4U)
#define VSPA_RAVAP_a_mode(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_RAVAP_a_mode_SHIFT)) & VSPA_RAVAP_a_mode_MASK)

#define VSPA_RAVAP_ip_bat_MASK                   (0x80000000U)
#define VSPA_RAVAP_ip_bat_SHIFT                  (31U)
#define VSPA_RAVAP_ip_bat_WIDTH                  (1U)
#define VSPA_RAVAP_ip_bat(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_RAVAP_ip_bat_SHIFT)) & VSPA_RAVAP_ip_bat_MASK)
/*! @} */

/*! @name RAVFD - Debug VSP Architecture Visibility Fixed Data register */
/*! @{ */

#define VSPA_RAVFD_data_MASK                     (0xFFFFFFFFU)
#define VSPA_RAVFD_data_SHIFT                    (0U)
#define VSPA_RAVFD_data_WIDTH                    (32U)
#define VSPA_RAVFD_data(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_RAVFD_data_SHIFT)) & VSPA_RAVFD_data_MASK)
/*! @} */

/*! @name RAVID - Debug VSP Architecture Visibility Incrementing Data register */
/*! @{ */

#define VSPA_RAVID_data_MASK                     (0xFFFFFFFFU)
#define VSPA_RAVID_data_SHIFT                    (0U)
#define VSPA_RAVID_data_WIDTH                    (32U)
#define VSPA_RAVID_data(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_RAVID_data_SHIFT)) & VSPA_RAVID_data_MASK)
/*! @} */

/*! @name DVR - Debug Verification register */
/*! @{ */

#define VSPA_DVR_dbg_trig_out_ack_n_MASK         (0xFU)
#define VSPA_DVR_dbg_trig_out_ack_n_SHIFT        (0U)
#define VSPA_DVR_dbg_trig_out_ack_n_WIDTH        (4U)
#define VSPA_DVR_dbg_trig_out_ack_n(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_dbg_trig_out_ack_n_SHIFT)) & VSPA_DVR_dbg_trig_out_ack_n_MASK)

#define VSPA_DVR_dbg_niden_MASK                  (0x1000U)
#define VSPA_DVR_dbg_niden_SHIFT                 (12U)
#define VSPA_DVR_dbg_niden_WIDTH                 (1U)
#define VSPA_DVR_dbg_niden(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_dbg_niden_SHIFT)) & VSPA_DVR_dbg_niden_MASK)

#define VSPA_DVR_dbg_dbgen_MASK                  (0x2000U)
#define VSPA_DVR_dbg_dbgen_SHIFT                 (13U)
#define VSPA_DVR_dbg_dbgen_WIDTH                 (1U)
#define VSPA_DVR_dbg_dbgen(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_dbg_dbgen_SHIFT)) & VSPA_DVR_dbg_dbgen_MASK)

#define VSPA_DVR_dbg_resume_req_MASK             (0x4000U)
#define VSPA_DVR_dbg_resume_req_SHIFT            (14U)
#define VSPA_DVR_dbg_resume_req_WIDTH            (1U)
#define VSPA_DVR_dbg_resume_req(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_dbg_resume_req_SHIFT)) & VSPA_DVR_dbg_resume_req_MASK)

#define VSPA_DVR_dbg_halt_req_MASK               (0x8000U)
#define VSPA_DVR_dbg_halt_req_SHIFT              (15U)
#define VSPA_DVR_dbg_halt_req_WIDTH              (1U)
#define VSPA_DVR_dbg_halt_req(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_dbg_halt_req_SHIFT)) & VSPA_DVR_dbg_halt_req_MASK)

#define VSPA_DVR_ctinn_MASK                      (0xF0000U)
#define VSPA_DVR_ctinn_SHIFT                     (16U)
#define VSPA_DVR_ctinn_WIDTH                     (4U)
#define VSPA_DVR_ctinn(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_ctinn_SHIFT)) & VSPA_DVR_ctinn_MASK)

#define VSPA_DVR_dbg_sync_req_MASK               (0x80000000U)
#define VSPA_DVR_dbg_sync_req_SHIFT              (31U)
#define VSPA_DVR_dbg_sync_req_WIDTH              (1U)
#define VSPA_DVR_dbg_sync_req(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_dbg_sync_req_SHIFT)) & VSPA_DVR_dbg_sync_req_MASK)
/*! @} */

/*! @name CTOACR - Debug Cross Trigger Out a Action Control registers */
/*! @{ */

#define VSPA_CTOACR_cmpm_MASK                    (0xFFU)
#define VSPA_CTOACR_cmpm_SHIFT                   (0U)
#define VSPA_CTOACR_cmpm_WIDTH                   (8U)
#define VSPA_CTOACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_CTOACR_cmpm_SHIFT)) & VSPA_CTOACR_cmpm_MASK)

#define VSPA_CTOACR_ctinm_MASK                   (0xF0000U)
#define VSPA_CTOACR_ctinm_SHIFT                  (16U)
#define VSPA_CTOACR_ctinm_WIDTH                  (4U)
#define VSPA_CTOACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_CTOACR_ctinm_SHIFT)) & VSPA_CTOACR_ctinm_MASK)

#define VSPA_CTOACR_swb_MASK                     (0x20000000U)
#define VSPA_CTOACR_swb_SHIFT                    (29U)
#define VSPA_CTOACR_swb_WIDTH                    (1U)
#define VSPA_CTOACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_CTOACR_swb_SHIFT)) & VSPA_CTOACR_swb_MASK)

#define VSPA_CTOACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_CTOACR_vcpu_done_SHIFT              (30U)
#define VSPA_CTOACR_vcpu_done_WIDTH              (1U)
#define VSPA_CTOACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_CTOACR_vcpu_done_SHIFT)) & VSPA_CTOACR_vcpu_done_MASK)

#define VSPA_CTOACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_CTOACR_vcpu_go_SHIFT                (31U)
#define VSPA_CTOACR_vcpu_go_WIDTH                (1U)
#define VSPA_CTOACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_CTOACR_vcpu_go_SHIFT)) & VSPA_CTOACR_vcpu_go_MASK)
/*! @} */

/*! @name DC0CS - Debug Comparator Control and Status register */
/*! @{ */

#define VSPA_DC0CS_evt_en_MASK                   (0x1U)
#define VSPA_DC0CS_evt_en_SHIFT                  (0U)
#define VSPA_DC0CS_evt_en_WIDTH                  (1U)
#define VSPA_DC0CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_evt_en_SHIFT)) & VSPA_DC0CS_evt_en_MASK)

#define VSPA_DC0CS_force_trig_MASK               (0x2U)
#define VSPA_DC0CS_force_trig_SHIFT              (1U)
#define VSPA_DC0CS_force_trig_WIDTH              (1U)
#define VSPA_DC0CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_force_trig_SHIFT)) & VSPA_DC0CS_force_trig_MASK)

#define VSPA_DC0CS_force_disarm_MASK             (0x4U)
#define VSPA_DC0CS_force_disarm_SHIFT            (2U)
#define VSPA_DC0CS_force_disarm_WIDTH            (1U)
#define VSPA_DC0CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_force_disarm_SHIFT)) & VSPA_DC0CS_force_disarm_MASK)

#define VSPA_DC0CS_force_arm_MASK                (0x8U)
#define VSPA_DC0CS_force_arm_SHIFT               (3U)
#define VSPA_DC0CS_force_arm_WIDTH               (1U)
#define VSPA_DC0CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_force_arm_SHIFT)) & VSPA_DC0CS_force_arm_MASK)

#define VSPA_DC0CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC0CS_cond_sel_SHIFT                (4U)
#define VSPA_DC0CS_cond_sel_WIDTH                (3U)
#define VSPA_DC0CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_cond_sel_SHIFT)) & VSPA_DC0CS_cond_sel_MASK)

#define VSPA_DC0CS_i_sel_MASK                    (0x700U)
#define VSPA_DC0CS_i_sel_SHIFT                   (8U)
#define VSPA_DC0CS_i_sel_WIDTH                   (3U)
#define VSPA_DC0CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_i_sel_SHIFT)) & VSPA_DC0CS_i_sel_MASK)

#define VSPA_DC0CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC0CS_pair_mode_SHIFT               (12U)
#define VSPA_DC0CS_pair_mode_WIDTH               (2U)
#define VSPA_DC0CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_pair_mode_SHIFT)) & VSPA_DC0CS_pair_mode_MASK)

#define VSPA_DC0CS_triggered_MASK                (0x10000U)
#define VSPA_DC0CS_triggered_SHIFT               (16U)
#define VSPA_DC0CS_triggered_WIDTH               (1U)
#define VSPA_DC0CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_triggered_SHIFT)) & VSPA_DC0CS_triggered_MASK)

#define VSPA_DC0CS_armed_MASK                    (0x20000U)
#define VSPA_DC0CS_armed_SHIFT                   (17U)
#define VSPA_DC0CS_armed_WIDTH                   (1U)
#define VSPA_DC0CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_armed_SHIFT)) & VSPA_DC0CS_armed_MASK)

#define VSPA_DC0CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC0CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC0CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC0CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_seq_evt_SHIFT)) & VSPA_DC0CS_seq_evt_MASK)

#define VSPA_DC0CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC0CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC0CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC0CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_cmp_evt_SHIFT)) & VSPA_DC0CS_cmp_evt_MASK)
/*! @} */

/*! @name DC0D - Debug Comparator a Data register */
/*! @{ */

#define VSPA_DC0D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC0D_comp_data_SHIFT                (2U)
#define VSPA_DC0D_comp_data_WIDTH                (18U)
#define VSPA_DC0D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC0D_comp_data_SHIFT)) & VSPA_DC0D_comp_data_MASK)

#define VSPA_DC0D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC0D_dma_host_SHIFT                 (24U)
#define VSPA_DC0D_dma_host_WIDTH                 (1U)
#define VSPA_DC0D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC0D_dma_host_SHIFT)) & VSPA_DC0D_dma_host_MASK)

#define VSPA_DC0D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC0D_vcpu_SHIFT                     (25U)
#define VSPA_DC0D_vcpu_WIDTH                     (1U)
#define VSPA_DC0D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC0D_vcpu_SHIFT)) & VSPA_DC0D_vcpu_MASK)

#define VSPA_DC0D_ippu_MASK                      (0x4000000U)
#define VSPA_DC0D_ippu_SHIFT                     (26U)
#define VSPA_DC0D_ippu_WIDTH                     (1U)
#define VSPA_DC0D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC0D_ippu_SHIFT)) & VSPA_DC0D_ippu_MASK)

#define VSPA_DC0D_rd_MASK                        (0x10000000U)
#define VSPA_DC0D_rd_SHIFT                       (28U)
#define VSPA_DC0D_rd_WIDTH                       (1U)
#define VSPA_DC0D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC0D_rd_SHIFT)) & VSPA_DC0D_rd_MASK)

#define VSPA_DC0D_wr_MASK                        (0x20000000U)
#define VSPA_DC0D_wr_SHIFT                       (29U)
#define VSPA_DC0D_wr_WIDTH                       (1U)
#define VSPA_DC0D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC0D_wr_SHIFT)) & VSPA_DC0D_wr_MASK)
/*! @} */

/*! @name C0AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */

#define VSPA_C0AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C0AACR_cmpm_SHIFT                   (0U)
#define VSPA_C0AACR_cmpm_WIDTH                   (8U)
#define VSPA_C0AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C0AACR_cmpm_SHIFT)) & VSPA_C0AACR_cmpm_MASK)

#define VSPA_C0AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C0AACR_ctinm_SHIFT                  (16U)
#define VSPA_C0AACR_ctinm_WIDTH                  (4U)
#define VSPA_C0AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C0AACR_ctinm_SHIFT)) & VSPA_C0AACR_ctinm_MASK)

#define VSPA_C0AACR_swb_MASK                     (0x20000000U)
#define VSPA_C0AACR_swb_SHIFT                    (29U)
#define VSPA_C0AACR_swb_WIDTH                    (1U)
#define VSPA_C0AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C0AACR_swb_SHIFT)) & VSPA_C0AACR_swb_MASK)

#define VSPA_C0AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C0AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C0AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C0AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C0AACR_vcpu_done_SHIFT)) & VSPA_C0AACR_vcpu_done_MASK)

#define VSPA_C0AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C0AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C0AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C0AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C0AACR_vcpu_go_SHIFT)) & VSPA_C0AACR_vcpu_go_MASK)
/*! @} */

/*! @name C0DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */

#define VSPA_C0DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C0DACR_cmpm_SHIFT                   (0U)
#define VSPA_C0DACR_cmpm_WIDTH                   (8U)
#define VSPA_C0DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C0DACR_cmpm_SHIFT)) & VSPA_C0DACR_cmpm_MASK)

#define VSPA_C0DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C0DACR_ctinm_SHIFT                  (16U)
#define VSPA_C0DACR_ctinm_WIDTH                  (4U)
#define VSPA_C0DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C0DACR_ctinm_SHIFT)) & VSPA_C0DACR_ctinm_MASK)

#define VSPA_C0DACR_swb_MASK                     (0x20000000U)
#define VSPA_C0DACR_swb_SHIFT                    (29U)
#define VSPA_C0DACR_swb_WIDTH                    (1U)
#define VSPA_C0DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C0DACR_swb_SHIFT)) & VSPA_C0DACR_swb_MASK)

#define VSPA_C0DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C0DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C0DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C0DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C0DACR_vcpu_done_SHIFT)) & VSPA_C0DACR_vcpu_done_MASK)

#define VSPA_C0DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C0DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C0DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C0DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C0DACR_vcpu_go_SHIFT)) & VSPA_C0DACR_vcpu_go_MASK)
/*! @} */

/*! @name C0TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */

#define VSPA_C0TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C0TACR_cmpm_SHIFT                   (0U)
#define VSPA_C0TACR_cmpm_WIDTH                   (8U)
#define VSPA_C0TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C0TACR_cmpm_SHIFT)) & VSPA_C0TACR_cmpm_MASK)

#define VSPA_C0TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C0TACR_ctinm_SHIFT                  (16U)
#define VSPA_C0TACR_ctinm_WIDTH                  (4U)
#define VSPA_C0TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C0TACR_ctinm_SHIFT)) & VSPA_C0TACR_ctinm_MASK)

#define VSPA_C0TACR_swb_MASK                     (0x20000000U)
#define VSPA_C0TACR_swb_SHIFT                    (29U)
#define VSPA_C0TACR_swb_WIDTH                    (1U)
#define VSPA_C0TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C0TACR_swb_SHIFT)) & VSPA_C0TACR_swb_MASK)

#define VSPA_C0TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C0TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C0TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C0TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C0TACR_vcpu_done_SHIFT)) & VSPA_C0TACR_vcpu_done_MASK)

#define VSPA_C0TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C0TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C0TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C0TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C0TACR_vcpu_go_SHIFT)) & VSPA_C0TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC1CS - Debug Comparator Control and Status register */
/*! @{ */

#define VSPA_DC1CS_evt_en_MASK                   (0x1U)
#define VSPA_DC1CS_evt_en_SHIFT                  (0U)
#define VSPA_DC1CS_evt_en_WIDTH                  (1U)
#define VSPA_DC1CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_evt_en_SHIFT)) & VSPA_DC1CS_evt_en_MASK)

#define VSPA_DC1CS_force_trig_MASK               (0x2U)
#define VSPA_DC1CS_force_trig_SHIFT              (1U)
#define VSPA_DC1CS_force_trig_WIDTH              (1U)
#define VSPA_DC1CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_force_trig_SHIFT)) & VSPA_DC1CS_force_trig_MASK)

#define VSPA_DC1CS_force_disarm_MASK             (0x4U)
#define VSPA_DC1CS_force_disarm_SHIFT            (2U)
#define VSPA_DC1CS_force_disarm_WIDTH            (1U)
#define VSPA_DC1CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_force_disarm_SHIFT)) & VSPA_DC1CS_force_disarm_MASK)

#define VSPA_DC1CS_force_arm_MASK                (0x8U)
#define VSPA_DC1CS_force_arm_SHIFT               (3U)
#define VSPA_DC1CS_force_arm_WIDTH               (1U)
#define VSPA_DC1CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_force_arm_SHIFT)) & VSPA_DC1CS_force_arm_MASK)

#define VSPA_DC1CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC1CS_cond_sel_SHIFT                (4U)
#define VSPA_DC1CS_cond_sel_WIDTH                (3U)
#define VSPA_DC1CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_cond_sel_SHIFT)) & VSPA_DC1CS_cond_sel_MASK)

#define VSPA_DC1CS_i_sel_MASK                    (0x700U)
#define VSPA_DC1CS_i_sel_SHIFT                   (8U)
#define VSPA_DC1CS_i_sel_WIDTH                   (3U)
#define VSPA_DC1CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_i_sel_SHIFT)) & VSPA_DC1CS_i_sel_MASK)

#define VSPA_DC1CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC1CS_pair_mode_SHIFT               (12U)
#define VSPA_DC1CS_pair_mode_WIDTH               (2U)
#define VSPA_DC1CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_pair_mode_SHIFT)) & VSPA_DC1CS_pair_mode_MASK)

#define VSPA_DC1CS_triggered_MASK                (0x10000U)
#define VSPA_DC1CS_triggered_SHIFT               (16U)
#define VSPA_DC1CS_triggered_WIDTH               (1U)
#define VSPA_DC1CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_triggered_SHIFT)) & VSPA_DC1CS_triggered_MASK)

#define VSPA_DC1CS_armed_MASK                    (0x20000U)
#define VSPA_DC1CS_armed_SHIFT                   (17U)
#define VSPA_DC1CS_armed_WIDTH                   (1U)
#define VSPA_DC1CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_armed_SHIFT)) & VSPA_DC1CS_armed_MASK)

#define VSPA_DC1CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC1CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC1CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC1CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_seq_evt_SHIFT)) & VSPA_DC1CS_seq_evt_MASK)

#define VSPA_DC1CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC1CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC1CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC1CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_cmp_evt_SHIFT)) & VSPA_DC1CS_cmp_evt_MASK)
/*! @} */

/*! @name DC1D - Debug Comparator a Data register */
/*! @{ */

#define VSPA_DC1D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC1D_comp_data_SHIFT                (2U)
#define VSPA_DC1D_comp_data_WIDTH                (18U)
#define VSPA_DC1D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC1D_comp_data_SHIFT)) & VSPA_DC1D_comp_data_MASK)

#define VSPA_DC1D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC1D_dma_host_SHIFT                 (24U)
#define VSPA_DC1D_dma_host_WIDTH                 (1U)
#define VSPA_DC1D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC1D_dma_host_SHIFT)) & VSPA_DC1D_dma_host_MASK)

#define VSPA_DC1D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC1D_vcpu_SHIFT                     (25U)
#define VSPA_DC1D_vcpu_WIDTH                     (1U)
#define VSPA_DC1D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC1D_vcpu_SHIFT)) & VSPA_DC1D_vcpu_MASK)

#define VSPA_DC1D_ippu_MASK                      (0x4000000U)
#define VSPA_DC1D_ippu_SHIFT                     (26U)
#define VSPA_DC1D_ippu_WIDTH                     (1U)
#define VSPA_DC1D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC1D_ippu_SHIFT)) & VSPA_DC1D_ippu_MASK)

#define VSPA_DC1D_rd_MASK                        (0x10000000U)
#define VSPA_DC1D_rd_SHIFT                       (28U)
#define VSPA_DC1D_rd_WIDTH                       (1U)
#define VSPA_DC1D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC1D_rd_SHIFT)) & VSPA_DC1D_rd_MASK)

#define VSPA_DC1D_wr_MASK                        (0x20000000U)
#define VSPA_DC1D_wr_SHIFT                       (29U)
#define VSPA_DC1D_wr_WIDTH                       (1U)
#define VSPA_DC1D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC1D_wr_SHIFT)) & VSPA_DC1D_wr_MASK)
/*! @} */

/*! @name C1AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */

#define VSPA_C1AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C1AACR_cmpm_SHIFT                   (0U)
#define VSPA_C1AACR_cmpm_WIDTH                   (8U)
#define VSPA_C1AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C1AACR_cmpm_SHIFT)) & VSPA_C1AACR_cmpm_MASK)

#define VSPA_C1AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C1AACR_ctinm_SHIFT                  (16U)
#define VSPA_C1AACR_ctinm_WIDTH                  (4U)
#define VSPA_C1AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C1AACR_ctinm_SHIFT)) & VSPA_C1AACR_ctinm_MASK)

#define VSPA_C1AACR_swb_MASK                     (0x20000000U)
#define VSPA_C1AACR_swb_SHIFT                    (29U)
#define VSPA_C1AACR_swb_WIDTH                    (1U)
#define VSPA_C1AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C1AACR_swb_SHIFT)) & VSPA_C1AACR_swb_MASK)

#define VSPA_C1AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C1AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C1AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C1AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C1AACR_vcpu_done_SHIFT)) & VSPA_C1AACR_vcpu_done_MASK)

#define VSPA_C1AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C1AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C1AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C1AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C1AACR_vcpu_go_SHIFT)) & VSPA_C1AACR_vcpu_go_MASK)
/*! @} */

/*! @name C1DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */

#define VSPA_C1DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C1DACR_cmpm_SHIFT                   (0U)
#define VSPA_C1DACR_cmpm_WIDTH                   (8U)
#define VSPA_C1DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C1DACR_cmpm_SHIFT)) & VSPA_C1DACR_cmpm_MASK)

#define VSPA_C1DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C1DACR_ctinm_SHIFT                  (16U)
#define VSPA_C1DACR_ctinm_WIDTH                  (4U)
#define VSPA_C1DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C1DACR_ctinm_SHIFT)) & VSPA_C1DACR_ctinm_MASK)

#define VSPA_C1DACR_swb_MASK                     (0x20000000U)
#define VSPA_C1DACR_swb_SHIFT                    (29U)
#define VSPA_C1DACR_swb_WIDTH                    (1U)
#define VSPA_C1DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C1DACR_swb_SHIFT)) & VSPA_C1DACR_swb_MASK)

#define VSPA_C1DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C1DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C1DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C1DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C1DACR_vcpu_done_SHIFT)) & VSPA_C1DACR_vcpu_done_MASK)

#define VSPA_C1DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C1DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C1DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C1DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C1DACR_vcpu_go_SHIFT)) & VSPA_C1DACR_vcpu_go_MASK)
/*! @} */

/*! @name C1TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */

#define VSPA_C1TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C1TACR_cmpm_SHIFT                   (0U)
#define VSPA_C1TACR_cmpm_WIDTH                   (8U)
#define VSPA_C1TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C1TACR_cmpm_SHIFT)) & VSPA_C1TACR_cmpm_MASK)

#define VSPA_C1TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C1TACR_ctinm_SHIFT                  (16U)
#define VSPA_C1TACR_ctinm_WIDTH                  (4U)
#define VSPA_C1TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C1TACR_ctinm_SHIFT)) & VSPA_C1TACR_ctinm_MASK)

#define VSPA_C1TACR_swb_MASK                     (0x20000000U)
#define VSPA_C1TACR_swb_SHIFT                    (29U)
#define VSPA_C1TACR_swb_WIDTH                    (1U)
#define VSPA_C1TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C1TACR_swb_SHIFT)) & VSPA_C1TACR_swb_MASK)

#define VSPA_C1TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C1TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C1TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C1TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C1TACR_vcpu_done_SHIFT)) & VSPA_C1TACR_vcpu_done_MASK)

#define VSPA_C1TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C1TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C1TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C1TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C1TACR_vcpu_go_SHIFT)) & VSPA_C1TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC2CS - Debug Comparator Control and Status register */
/*! @{ */

#define VSPA_DC2CS_evt_en_MASK                   (0x1U)
#define VSPA_DC2CS_evt_en_SHIFT                  (0U)
#define VSPA_DC2CS_evt_en_WIDTH                  (1U)
#define VSPA_DC2CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_evt_en_SHIFT)) & VSPA_DC2CS_evt_en_MASK)

#define VSPA_DC2CS_force_trig_MASK               (0x2U)
#define VSPA_DC2CS_force_trig_SHIFT              (1U)
#define VSPA_DC2CS_force_trig_WIDTH              (1U)
#define VSPA_DC2CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_force_trig_SHIFT)) & VSPA_DC2CS_force_trig_MASK)

#define VSPA_DC2CS_force_disarm_MASK             (0x4U)
#define VSPA_DC2CS_force_disarm_SHIFT            (2U)
#define VSPA_DC2CS_force_disarm_WIDTH            (1U)
#define VSPA_DC2CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_force_disarm_SHIFT)) & VSPA_DC2CS_force_disarm_MASK)

#define VSPA_DC2CS_force_arm_MASK                (0x8U)
#define VSPA_DC2CS_force_arm_SHIFT               (3U)
#define VSPA_DC2CS_force_arm_WIDTH               (1U)
#define VSPA_DC2CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_force_arm_SHIFT)) & VSPA_DC2CS_force_arm_MASK)

#define VSPA_DC2CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC2CS_cond_sel_SHIFT                (4U)
#define VSPA_DC2CS_cond_sel_WIDTH                (3U)
#define VSPA_DC2CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_cond_sel_SHIFT)) & VSPA_DC2CS_cond_sel_MASK)

#define VSPA_DC2CS_i_sel_MASK                    (0x700U)
#define VSPA_DC2CS_i_sel_SHIFT                   (8U)
#define VSPA_DC2CS_i_sel_WIDTH                   (3U)
#define VSPA_DC2CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_i_sel_SHIFT)) & VSPA_DC2CS_i_sel_MASK)

#define VSPA_DC2CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC2CS_pair_mode_SHIFT               (12U)
#define VSPA_DC2CS_pair_mode_WIDTH               (2U)
#define VSPA_DC2CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_pair_mode_SHIFT)) & VSPA_DC2CS_pair_mode_MASK)

#define VSPA_DC2CS_triggered_MASK                (0x10000U)
#define VSPA_DC2CS_triggered_SHIFT               (16U)
#define VSPA_DC2CS_triggered_WIDTH               (1U)
#define VSPA_DC2CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_triggered_SHIFT)) & VSPA_DC2CS_triggered_MASK)

#define VSPA_DC2CS_armed_MASK                    (0x20000U)
#define VSPA_DC2CS_armed_SHIFT                   (17U)
#define VSPA_DC2CS_armed_WIDTH                   (1U)
#define VSPA_DC2CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_armed_SHIFT)) & VSPA_DC2CS_armed_MASK)

#define VSPA_DC2CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC2CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC2CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC2CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_seq_evt_SHIFT)) & VSPA_DC2CS_seq_evt_MASK)

#define VSPA_DC2CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC2CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC2CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC2CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_cmp_evt_SHIFT)) & VSPA_DC2CS_cmp_evt_MASK)
/*! @} */

/*! @name DC2D - Debug Comparator a Data register */
/*! @{ */

#define VSPA_DC2D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC2D_comp_data_SHIFT                (2U)
#define VSPA_DC2D_comp_data_WIDTH                (18U)
#define VSPA_DC2D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC2D_comp_data_SHIFT)) & VSPA_DC2D_comp_data_MASK)

#define VSPA_DC2D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC2D_dma_host_SHIFT                 (24U)
#define VSPA_DC2D_dma_host_WIDTH                 (1U)
#define VSPA_DC2D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC2D_dma_host_SHIFT)) & VSPA_DC2D_dma_host_MASK)

#define VSPA_DC2D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC2D_vcpu_SHIFT                     (25U)
#define VSPA_DC2D_vcpu_WIDTH                     (1U)
#define VSPA_DC2D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC2D_vcpu_SHIFT)) & VSPA_DC2D_vcpu_MASK)

#define VSPA_DC2D_ippu_MASK                      (0x4000000U)
#define VSPA_DC2D_ippu_SHIFT                     (26U)
#define VSPA_DC2D_ippu_WIDTH                     (1U)
#define VSPA_DC2D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC2D_ippu_SHIFT)) & VSPA_DC2D_ippu_MASK)

#define VSPA_DC2D_rd_MASK                        (0x10000000U)
#define VSPA_DC2D_rd_SHIFT                       (28U)
#define VSPA_DC2D_rd_WIDTH                       (1U)
#define VSPA_DC2D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC2D_rd_SHIFT)) & VSPA_DC2D_rd_MASK)

#define VSPA_DC2D_wr_MASK                        (0x20000000U)
#define VSPA_DC2D_wr_SHIFT                       (29U)
#define VSPA_DC2D_wr_WIDTH                       (1U)
#define VSPA_DC2D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC2D_wr_SHIFT)) & VSPA_DC2D_wr_MASK)
/*! @} */

/*! @name C2AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */

#define VSPA_C2AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C2AACR_cmpm_SHIFT                   (0U)
#define VSPA_C2AACR_cmpm_WIDTH                   (8U)
#define VSPA_C2AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C2AACR_cmpm_SHIFT)) & VSPA_C2AACR_cmpm_MASK)

#define VSPA_C2AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C2AACR_ctinm_SHIFT                  (16U)
#define VSPA_C2AACR_ctinm_WIDTH                  (4U)
#define VSPA_C2AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C2AACR_ctinm_SHIFT)) & VSPA_C2AACR_ctinm_MASK)

#define VSPA_C2AACR_swb_MASK                     (0x20000000U)
#define VSPA_C2AACR_swb_SHIFT                    (29U)
#define VSPA_C2AACR_swb_WIDTH                    (1U)
#define VSPA_C2AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C2AACR_swb_SHIFT)) & VSPA_C2AACR_swb_MASK)

#define VSPA_C2AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C2AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C2AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C2AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C2AACR_vcpu_done_SHIFT)) & VSPA_C2AACR_vcpu_done_MASK)

#define VSPA_C2AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C2AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C2AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C2AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C2AACR_vcpu_go_SHIFT)) & VSPA_C2AACR_vcpu_go_MASK)
/*! @} */

/*! @name C2DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */

#define VSPA_C2DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C2DACR_cmpm_SHIFT                   (0U)
#define VSPA_C2DACR_cmpm_WIDTH                   (8U)
#define VSPA_C2DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C2DACR_cmpm_SHIFT)) & VSPA_C2DACR_cmpm_MASK)

#define VSPA_C2DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C2DACR_ctinm_SHIFT                  (16U)
#define VSPA_C2DACR_ctinm_WIDTH                  (4U)
#define VSPA_C2DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C2DACR_ctinm_SHIFT)) & VSPA_C2DACR_ctinm_MASK)

#define VSPA_C2DACR_swb_MASK                     (0x20000000U)
#define VSPA_C2DACR_swb_SHIFT                    (29U)
#define VSPA_C2DACR_swb_WIDTH                    (1U)
#define VSPA_C2DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C2DACR_swb_SHIFT)) & VSPA_C2DACR_swb_MASK)

#define VSPA_C2DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C2DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C2DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C2DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C2DACR_vcpu_done_SHIFT)) & VSPA_C2DACR_vcpu_done_MASK)

#define VSPA_C2DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C2DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C2DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C2DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C2DACR_vcpu_go_SHIFT)) & VSPA_C2DACR_vcpu_go_MASK)
/*! @} */

/*! @name C2TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */

#define VSPA_C2TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C2TACR_cmpm_SHIFT                   (0U)
#define VSPA_C2TACR_cmpm_WIDTH                   (8U)
#define VSPA_C2TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C2TACR_cmpm_SHIFT)) & VSPA_C2TACR_cmpm_MASK)

#define VSPA_C2TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C2TACR_ctinm_SHIFT                  (16U)
#define VSPA_C2TACR_ctinm_WIDTH                  (4U)
#define VSPA_C2TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C2TACR_ctinm_SHIFT)) & VSPA_C2TACR_ctinm_MASK)

#define VSPA_C2TACR_swb_MASK                     (0x20000000U)
#define VSPA_C2TACR_swb_SHIFT                    (29U)
#define VSPA_C2TACR_swb_WIDTH                    (1U)
#define VSPA_C2TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C2TACR_swb_SHIFT)) & VSPA_C2TACR_swb_MASK)

#define VSPA_C2TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C2TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C2TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C2TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C2TACR_vcpu_done_SHIFT)) & VSPA_C2TACR_vcpu_done_MASK)

#define VSPA_C2TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C2TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C2TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C2TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C2TACR_vcpu_go_SHIFT)) & VSPA_C2TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC3CS - Debug Comparator Control and Status register */
/*! @{ */

#define VSPA_DC3CS_evt_en_MASK                   (0x1U)
#define VSPA_DC3CS_evt_en_SHIFT                  (0U)
#define VSPA_DC3CS_evt_en_WIDTH                  (1U)
#define VSPA_DC3CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_evt_en_SHIFT)) & VSPA_DC3CS_evt_en_MASK)

#define VSPA_DC3CS_force_trig_MASK               (0x2U)
#define VSPA_DC3CS_force_trig_SHIFT              (1U)
#define VSPA_DC3CS_force_trig_WIDTH              (1U)
#define VSPA_DC3CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_force_trig_SHIFT)) & VSPA_DC3CS_force_trig_MASK)

#define VSPA_DC3CS_force_disarm_MASK             (0x4U)
#define VSPA_DC3CS_force_disarm_SHIFT            (2U)
#define VSPA_DC3CS_force_disarm_WIDTH            (1U)
#define VSPA_DC3CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_force_disarm_SHIFT)) & VSPA_DC3CS_force_disarm_MASK)

#define VSPA_DC3CS_force_arm_MASK                (0x8U)
#define VSPA_DC3CS_force_arm_SHIFT               (3U)
#define VSPA_DC3CS_force_arm_WIDTH               (1U)
#define VSPA_DC3CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_force_arm_SHIFT)) & VSPA_DC3CS_force_arm_MASK)

#define VSPA_DC3CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC3CS_cond_sel_SHIFT                (4U)
#define VSPA_DC3CS_cond_sel_WIDTH                (3U)
#define VSPA_DC3CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_cond_sel_SHIFT)) & VSPA_DC3CS_cond_sel_MASK)

#define VSPA_DC3CS_i_sel_MASK                    (0x700U)
#define VSPA_DC3CS_i_sel_SHIFT                   (8U)
#define VSPA_DC3CS_i_sel_WIDTH                   (3U)
#define VSPA_DC3CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_i_sel_SHIFT)) & VSPA_DC3CS_i_sel_MASK)

#define VSPA_DC3CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC3CS_pair_mode_SHIFT               (12U)
#define VSPA_DC3CS_pair_mode_WIDTH               (2U)
#define VSPA_DC3CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_pair_mode_SHIFT)) & VSPA_DC3CS_pair_mode_MASK)

#define VSPA_DC3CS_triggered_MASK                (0x10000U)
#define VSPA_DC3CS_triggered_SHIFT               (16U)
#define VSPA_DC3CS_triggered_WIDTH               (1U)
#define VSPA_DC3CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_triggered_SHIFT)) & VSPA_DC3CS_triggered_MASK)

#define VSPA_DC3CS_armed_MASK                    (0x20000U)
#define VSPA_DC3CS_armed_SHIFT                   (17U)
#define VSPA_DC3CS_armed_WIDTH                   (1U)
#define VSPA_DC3CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_armed_SHIFT)) & VSPA_DC3CS_armed_MASK)

#define VSPA_DC3CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC3CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC3CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC3CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_seq_evt_SHIFT)) & VSPA_DC3CS_seq_evt_MASK)

#define VSPA_DC3CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC3CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC3CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC3CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_cmp_evt_SHIFT)) & VSPA_DC3CS_cmp_evt_MASK)
/*! @} */

/*! @name DC3D - Debug Comparator a Data register */
/*! @{ */

#define VSPA_DC3D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC3D_comp_data_SHIFT                (2U)
#define VSPA_DC3D_comp_data_WIDTH                (18U)
#define VSPA_DC3D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC3D_comp_data_SHIFT)) & VSPA_DC3D_comp_data_MASK)

#define VSPA_DC3D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC3D_dma_host_SHIFT                 (24U)
#define VSPA_DC3D_dma_host_WIDTH                 (1U)
#define VSPA_DC3D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC3D_dma_host_SHIFT)) & VSPA_DC3D_dma_host_MASK)

#define VSPA_DC3D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC3D_vcpu_SHIFT                     (25U)
#define VSPA_DC3D_vcpu_WIDTH                     (1U)
#define VSPA_DC3D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC3D_vcpu_SHIFT)) & VSPA_DC3D_vcpu_MASK)

#define VSPA_DC3D_ippu_MASK                      (0x4000000U)
#define VSPA_DC3D_ippu_SHIFT                     (26U)
#define VSPA_DC3D_ippu_WIDTH                     (1U)
#define VSPA_DC3D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC3D_ippu_SHIFT)) & VSPA_DC3D_ippu_MASK)

#define VSPA_DC3D_rd_MASK                        (0x10000000U)
#define VSPA_DC3D_rd_SHIFT                       (28U)
#define VSPA_DC3D_rd_WIDTH                       (1U)
#define VSPA_DC3D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC3D_rd_SHIFT)) & VSPA_DC3D_rd_MASK)

#define VSPA_DC3D_wr_MASK                        (0x20000000U)
#define VSPA_DC3D_wr_SHIFT                       (29U)
#define VSPA_DC3D_wr_WIDTH                       (1U)
#define VSPA_DC3D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC3D_wr_SHIFT)) & VSPA_DC3D_wr_MASK)
/*! @} */

/*! @name C3AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */

#define VSPA_C3AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C3AACR_cmpm_SHIFT                   (0U)
#define VSPA_C3AACR_cmpm_WIDTH                   (8U)
#define VSPA_C3AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C3AACR_cmpm_SHIFT)) & VSPA_C3AACR_cmpm_MASK)

#define VSPA_C3AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C3AACR_ctinm_SHIFT                  (16U)
#define VSPA_C3AACR_ctinm_WIDTH                  (4U)
#define VSPA_C3AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C3AACR_ctinm_SHIFT)) & VSPA_C3AACR_ctinm_MASK)

#define VSPA_C3AACR_swb_MASK                     (0x20000000U)
#define VSPA_C3AACR_swb_SHIFT                    (29U)
#define VSPA_C3AACR_swb_WIDTH                    (1U)
#define VSPA_C3AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C3AACR_swb_SHIFT)) & VSPA_C3AACR_swb_MASK)

#define VSPA_C3AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C3AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C3AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C3AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C3AACR_vcpu_done_SHIFT)) & VSPA_C3AACR_vcpu_done_MASK)

#define VSPA_C3AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C3AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C3AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C3AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C3AACR_vcpu_go_SHIFT)) & VSPA_C3AACR_vcpu_go_MASK)
/*! @} */

/*! @name C3DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */

#define VSPA_C3DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C3DACR_cmpm_SHIFT                   (0U)
#define VSPA_C3DACR_cmpm_WIDTH                   (8U)
#define VSPA_C3DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C3DACR_cmpm_SHIFT)) & VSPA_C3DACR_cmpm_MASK)

#define VSPA_C3DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C3DACR_ctinm_SHIFT                  (16U)
#define VSPA_C3DACR_ctinm_WIDTH                  (4U)
#define VSPA_C3DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C3DACR_ctinm_SHIFT)) & VSPA_C3DACR_ctinm_MASK)

#define VSPA_C3DACR_swb_MASK                     (0x20000000U)
#define VSPA_C3DACR_swb_SHIFT                    (29U)
#define VSPA_C3DACR_swb_WIDTH                    (1U)
#define VSPA_C3DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C3DACR_swb_SHIFT)) & VSPA_C3DACR_swb_MASK)

#define VSPA_C3DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C3DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C3DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C3DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C3DACR_vcpu_done_SHIFT)) & VSPA_C3DACR_vcpu_done_MASK)

#define VSPA_C3DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C3DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C3DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C3DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C3DACR_vcpu_go_SHIFT)) & VSPA_C3DACR_vcpu_go_MASK)
/*! @} */

/*! @name C3TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */

#define VSPA_C3TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C3TACR_cmpm_SHIFT                   (0U)
#define VSPA_C3TACR_cmpm_WIDTH                   (8U)
#define VSPA_C3TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C3TACR_cmpm_SHIFT)) & VSPA_C3TACR_cmpm_MASK)

#define VSPA_C3TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C3TACR_ctinm_SHIFT                  (16U)
#define VSPA_C3TACR_ctinm_WIDTH                  (4U)
#define VSPA_C3TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C3TACR_ctinm_SHIFT)) & VSPA_C3TACR_ctinm_MASK)

#define VSPA_C3TACR_swb_MASK                     (0x20000000U)
#define VSPA_C3TACR_swb_SHIFT                    (29U)
#define VSPA_C3TACR_swb_WIDTH                    (1U)
#define VSPA_C3TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C3TACR_swb_SHIFT)) & VSPA_C3TACR_swb_MASK)

#define VSPA_C3TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C3TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C3TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C3TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C3TACR_vcpu_done_SHIFT)) & VSPA_C3TACR_vcpu_done_MASK)

#define VSPA_C3TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C3TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C3TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C3TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C3TACR_vcpu_go_SHIFT)) & VSPA_C3TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC4CS - Debug Comparator Control and Status register */
/*! @{ */

#define VSPA_DC4CS_evt_en_MASK                   (0x1U)
#define VSPA_DC4CS_evt_en_SHIFT                  (0U)
#define VSPA_DC4CS_evt_en_WIDTH                  (1U)
#define VSPA_DC4CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_evt_en_SHIFT)) & VSPA_DC4CS_evt_en_MASK)

#define VSPA_DC4CS_force_trig_MASK               (0x2U)
#define VSPA_DC4CS_force_trig_SHIFT              (1U)
#define VSPA_DC4CS_force_trig_WIDTH              (1U)
#define VSPA_DC4CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_force_trig_SHIFT)) & VSPA_DC4CS_force_trig_MASK)

#define VSPA_DC4CS_force_disarm_MASK             (0x4U)
#define VSPA_DC4CS_force_disarm_SHIFT            (2U)
#define VSPA_DC4CS_force_disarm_WIDTH            (1U)
#define VSPA_DC4CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_force_disarm_SHIFT)) & VSPA_DC4CS_force_disarm_MASK)

#define VSPA_DC4CS_force_arm_MASK                (0x8U)
#define VSPA_DC4CS_force_arm_SHIFT               (3U)
#define VSPA_DC4CS_force_arm_WIDTH               (1U)
#define VSPA_DC4CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_force_arm_SHIFT)) & VSPA_DC4CS_force_arm_MASK)

#define VSPA_DC4CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC4CS_cond_sel_SHIFT                (4U)
#define VSPA_DC4CS_cond_sel_WIDTH                (3U)
#define VSPA_DC4CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_cond_sel_SHIFT)) & VSPA_DC4CS_cond_sel_MASK)

#define VSPA_DC4CS_i_sel_MASK                    (0x700U)
#define VSPA_DC4CS_i_sel_SHIFT                   (8U)
#define VSPA_DC4CS_i_sel_WIDTH                   (3U)
#define VSPA_DC4CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_i_sel_SHIFT)) & VSPA_DC4CS_i_sel_MASK)

#define VSPA_DC4CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC4CS_pair_mode_SHIFT               (12U)
#define VSPA_DC4CS_pair_mode_WIDTH               (2U)
#define VSPA_DC4CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_pair_mode_SHIFT)) & VSPA_DC4CS_pair_mode_MASK)

#define VSPA_DC4CS_triggered_MASK                (0x10000U)
#define VSPA_DC4CS_triggered_SHIFT               (16U)
#define VSPA_DC4CS_triggered_WIDTH               (1U)
#define VSPA_DC4CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_triggered_SHIFT)) & VSPA_DC4CS_triggered_MASK)

#define VSPA_DC4CS_armed_MASK                    (0x20000U)
#define VSPA_DC4CS_armed_SHIFT                   (17U)
#define VSPA_DC4CS_armed_WIDTH                   (1U)
#define VSPA_DC4CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_armed_SHIFT)) & VSPA_DC4CS_armed_MASK)

#define VSPA_DC4CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC4CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC4CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC4CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_seq_evt_SHIFT)) & VSPA_DC4CS_seq_evt_MASK)

#define VSPA_DC4CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC4CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC4CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC4CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_cmp_evt_SHIFT)) & VSPA_DC4CS_cmp_evt_MASK)
/*! @} */

/*! @name DC4D - Debug Comparator a Data register */
/*! @{ */

#define VSPA_DC4D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC4D_comp_data_SHIFT                (2U)
#define VSPA_DC4D_comp_data_WIDTH                (18U)
#define VSPA_DC4D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC4D_comp_data_SHIFT)) & VSPA_DC4D_comp_data_MASK)

#define VSPA_DC4D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC4D_dma_host_SHIFT                 (24U)
#define VSPA_DC4D_dma_host_WIDTH                 (1U)
#define VSPA_DC4D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC4D_dma_host_SHIFT)) & VSPA_DC4D_dma_host_MASK)

#define VSPA_DC4D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC4D_vcpu_SHIFT                     (25U)
#define VSPA_DC4D_vcpu_WIDTH                     (1U)
#define VSPA_DC4D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC4D_vcpu_SHIFT)) & VSPA_DC4D_vcpu_MASK)

#define VSPA_DC4D_ippu_MASK                      (0x4000000U)
#define VSPA_DC4D_ippu_SHIFT                     (26U)
#define VSPA_DC4D_ippu_WIDTH                     (1U)
#define VSPA_DC4D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC4D_ippu_SHIFT)) & VSPA_DC4D_ippu_MASK)

#define VSPA_DC4D_rd_MASK                        (0x10000000U)
#define VSPA_DC4D_rd_SHIFT                       (28U)
#define VSPA_DC4D_rd_WIDTH                       (1U)
#define VSPA_DC4D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC4D_rd_SHIFT)) & VSPA_DC4D_rd_MASK)

#define VSPA_DC4D_wr_MASK                        (0x20000000U)
#define VSPA_DC4D_wr_SHIFT                       (29U)
#define VSPA_DC4D_wr_WIDTH                       (1U)
#define VSPA_DC4D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC4D_wr_SHIFT)) & VSPA_DC4D_wr_MASK)
/*! @} */

/*! @name C4AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */

#define VSPA_C4AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C4AACR_cmpm_SHIFT                   (0U)
#define VSPA_C4AACR_cmpm_WIDTH                   (8U)
#define VSPA_C4AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C4AACR_cmpm_SHIFT)) & VSPA_C4AACR_cmpm_MASK)

#define VSPA_C4AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C4AACR_ctinm_SHIFT                  (16U)
#define VSPA_C4AACR_ctinm_WIDTH                  (4U)
#define VSPA_C4AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C4AACR_ctinm_SHIFT)) & VSPA_C4AACR_ctinm_MASK)

#define VSPA_C4AACR_swb_MASK                     (0x20000000U)
#define VSPA_C4AACR_swb_SHIFT                    (29U)
#define VSPA_C4AACR_swb_WIDTH                    (1U)
#define VSPA_C4AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C4AACR_swb_SHIFT)) & VSPA_C4AACR_swb_MASK)

#define VSPA_C4AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C4AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C4AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C4AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C4AACR_vcpu_done_SHIFT)) & VSPA_C4AACR_vcpu_done_MASK)

#define VSPA_C4AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C4AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C4AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C4AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C4AACR_vcpu_go_SHIFT)) & VSPA_C4AACR_vcpu_go_MASK)
/*! @} */

/*! @name C4DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */

#define VSPA_C4DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C4DACR_cmpm_SHIFT                   (0U)
#define VSPA_C4DACR_cmpm_WIDTH                   (8U)
#define VSPA_C4DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C4DACR_cmpm_SHIFT)) & VSPA_C4DACR_cmpm_MASK)

#define VSPA_C4DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C4DACR_ctinm_SHIFT                  (16U)
#define VSPA_C4DACR_ctinm_WIDTH                  (4U)
#define VSPA_C4DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C4DACR_ctinm_SHIFT)) & VSPA_C4DACR_ctinm_MASK)

#define VSPA_C4DACR_swb_MASK                     (0x20000000U)
#define VSPA_C4DACR_swb_SHIFT                    (29U)
#define VSPA_C4DACR_swb_WIDTH                    (1U)
#define VSPA_C4DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C4DACR_swb_SHIFT)) & VSPA_C4DACR_swb_MASK)

#define VSPA_C4DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C4DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C4DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C4DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C4DACR_vcpu_done_SHIFT)) & VSPA_C4DACR_vcpu_done_MASK)

#define VSPA_C4DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C4DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C4DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C4DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C4DACR_vcpu_go_SHIFT)) & VSPA_C4DACR_vcpu_go_MASK)
/*! @} */

/*! @name C4TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */

#define VSPA_C4TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C4TACR_cmpm_SHIFT                   (0U)
#define VSPA_C4TACR_cmpm_WIDTH                   (8U)
#define VSPA_C4TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C4TACR_cmpm_SHIFT)) & VSPA_C4TACR_cmpm_MASK)

#define VSPA_C4TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C4TACR_ctinm_SHIFT                  (16U)
#define VSPA_C4TACR_ctinm_WIDTH                  (4U)
#define VSPA_C4TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C4TACR_ctinm_SHIFT)) & VSPA_C4TACR_ctinm_MASK)

#define VSPA_C4TACR_swb_MASK                     (0x20000000U)
#define VSPA_C4TACR_swb_SHIFT                    (29U)
#define VSPA_C4TACR_swb_WIDTH                    (1U)
#define VSPA_C4TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C4TACR_swb_SHIFT)) & VSPA_C4TACR_swb_MASK)

#define VSPA_C4TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C4TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C4TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C4TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C4TACR_vcpu_done_SHIFT)) & VSPA_C4TACR_vcpu_done_MASK)

#define VSPA_C4TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C4TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C4TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C4TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C4TACR_vcpu_go_SHIFT)) & VSPA_C4TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC5CS - Debug Comparator Control and Status register */
/*! @{ */

#define VSPA_DC5CS_evt_en_MASK                   (0x1U)
#define VSPA_DC5CS_evt_en_SHIFT                  (0U)
#define VSPA_DC5CS_evt_en_WIDTH                  (1U)
#define VSPA_DC5CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_evt_en_SHIFT)) & VSPA_DC5CS_evt_en_MASK)

#define VSPA_DC5CS_force_trig_MASK               (0x2U)
#define VSPA_DC5CS_force_trig_SHIFT              (1U)
#define VSPA_DC5CS_force_trig_WIDTH              (1U)
#define VSPA_DC5CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_force_trig_SHIFT)) & VSPA_DC5CS_force_trig_MASK)

#define VSPA_DC5CS_force_disarm_MASK             (0x4U)
#define VSPA_DC5CS_force_disarm_SHIFT            (2U)
#define VSPA_DC5CS_force_disarm_WIDTH            (1U)
#define VSPA_DC5CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_force_disarm_SHIFT)) & VSPA_DC5CS_force_disarm_MASK)

#define VSPA_DC5CS_force_arm_MASK                (0x8U)
#define VSPA_DC5CS_force_arm_SHIFT               (3U)
#define VSPA_DC5CS_force_arm_WIDTH               (1U)
#define VSPA_DC5CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_force_arm_SHIFT)) & VSPA_DC5CS_force_arm_MASK)

#define VSPA_DC5CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC5CS_cond_sel_SHIFT                (4U)
#define VSPA_DC5CS_cond_sel_WIDTH                (3U)
#define VSPA_DC5CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_cond_sel_SHIFT)) & VSPA_DC5CS_cond_sel_MASK)

#define VSPA_DC5CS_i_sel_MASK                    (0x700U)
#define VSPA_DC5CS_i_sel_SHIFT                   (8U)
#define VSPA_DC5CS_i_sel_WIDTH                   (3U)
#define VSPA_DC5CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_i_sel_SHIFT)) & VSPA_DC5CS_i_sel_MASK)

#define VSPA_DC5CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC5CS_pair_mode_SHIFT               (12U)
#define VSPA_DC5CS_pair_mode_WIDTH               (2U)
#define VSPA_DC5CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_pair_mode_SHIFT)) & VSPA_DC5CS_pair_mode_MASK)

#define VSPA_DC5CS_triggered_MASK                (0x10000U)
#define VSPA_DC5CS_triggered_SHIFT               (16U)
#define VSPA_DC5CS_triggered_WIDTH               (1U)
#define VSPA_DC5CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_triggered_SHIFT)) & VSPA_DC5CS_triggered_MASK)

#define VSPA_DC5CS_armed_MASK                    (0x20000U)
#define VSPA_DC5CS_armed_SHIFT                   (17U)
#define VSPA_DC5CS_armed_WIDTH                   (1U)
#define VSPA_DC5CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_armed_SHIFT)) & VSPA_DC5CS_armed_MASK)

#define VSPA_DC5CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC5CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC5CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC5CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_seq_evt_SHIFT)) & VSPA_DC5CS_seq_evt_MASK)

#define VSPA_DC5CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC5CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC5CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC5CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_cmp_evt_SHIFT)) & VSPA_DC5CS_cmp_evt_MASK)
/*! @} */

/*! @name DC5D - Debug Comparator a Data register */
/*! @{ */

#define VSPA_DC5D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC5D_comp_data_SHIFT                (2U)
#define VSPA_DC5D_comp_data_WIDTH                (18U)
#define VSPA_DC5D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC5D_comp_data_SHIFT)) & VSPA_DC5D_comp_data_MASK)

#define VSPA_DC5D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC5D_dma_host_SHIFT                 (24U)
#define VSPA_DC5D_dma_host_WIDTH                 (1U)
#define VSPA_DC5D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC5D_dma_host_SHIFT)) & VSPA_DC5D_dma_host_MASK)

#define VSPA_DC5D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC5D_vcpu_SHIFT                     (25U)
#define VSPA_DC5D_vcpu_WIDTH                     (1U)
#define VSPA_DC5D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC5D_vcpu_SHIFT)) & VSPA_DC5D_vcpu_MASK)

#define VSPA_DC5D_ippu_MASK                      (0x4000000U)
#define VSPA_DC5D_ippu_SHIFT                     (26U)
#define VSPA_DC5D_ippu_WIDTH                     (1U)
#define VSPA_DC5D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC5D_ippu_SHIFT)) & VSPA_DC5D_ippu_MASK)

#define VSPA_DC5D_rd_MASK                        (0x10000000U)
#define VSPA_DC5D_rd_SHIFT                       (28U)
#define VSPA_DC5D_rd_WIDTH                       (1U)
#define VSPA_DC5D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC5D_rd_SHIFT)) & VSPA_DC5D_rd_MASK)

#define VSPA_DC5D_wr_MASK                        (0x20000000U)
#define VSPA_DC5D_wr_SHIFT                       (29U)
#define VSPA_DC5D_wr_WIDTH                       (1U)
#define VSPA_DC5D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC5D_wr_SHIFT)) & VSPA_DC5D_wr_MASK)
/*! @} */

/*! @name C5AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */

#define VSPA_C5AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C5AACR_cmpm_SHIFT                   (0U)
#define VSPA_C5AACR_cmpm_WIDTH                   (8U)
#define VSPA_C5AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C5AACR_cmpm_SHIFT)) & VSPA_C5AACR_cmpm_MASK)

#define VSPA_C5AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C5AACR_ctinm_SHIFT                  (16U)
#define VSPA_C5AACR_ctinm_WIDTH                  (4U)
#define VSPA_C5AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C5AACR_ctinm_SHIFT)) & VSPA_C5AACR_ctinm_MASK)

#define VSPA_C5AACR_swb_MASK                     (0x20000000U)
#define VSPA_C5AACR_swb_SHIFT                    (29U)
#define VSPA_C5AACR_swb_WIDTH                    (1U)
#define VSPA_C5AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C5AACR_swb_SHIFT)) & VSPA_C5AACR_swb_MASK)

#define VSPA_C5AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C5AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C5AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C5AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C5AACR_vcpu_done_SHIFT)) & VSPA_C5AACR_vcpu_done_MASK)

#define VSPA_C5AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C5AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C5AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C5AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C5AACR_vcpu_go_SHIFT)) & VSPA_C5AACR_vcpu_go_MASK)
/*! @} */

/*! @name C5DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */

#define VSPA_C5DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C5DACR_cmpm_SHIFT                   (0U)
#define VSPA_C5DACR_cmpm_WIDTH                   (8U)
#define VSPA_C5DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C5DACR_cmpm_SHIFT)) & VSPA_C5DACR_cmpm_MASK)

#define VSPA_C5DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C5DACR_ctinm_SHIFT                  (16U)
#define VSPA_C5DACR_ctinm_WIDTH                  (4U)
#define VSPA_C5DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C5DACR_ctinm_SHIFT)) & VSPA_C5DACR_ctinm_MASK)

#define VSPA_C5DACR_swb_MASK                     (0x20000000U)
#define VSPA_C5DACR_swb_SHIFT                    (29U)
#define VSPA_C5DACR_swb_WIDTH                    (1U)
#define VSPA_C5DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C5DACR_swb_SHIFT)) & VSPA_C5DACR_swb_MASK)

#define VSPA_C5DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C5DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C5DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C5DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C5DACR_vcpu_done_SHIFT)) & VSPA_C5DACR_vcpu_done_MASK)

#define VSPA_C5DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C5DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C5DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C5DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C5DACR_vcpu_go_SHIFT)) & VSPA_C5DACR_vcpu_go_MASK)
/*! @} */

/*! @name C5TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */

#define VSPA_C5TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C5TACR_cmpm_SHIFT                   (0U)
#define VSPA_C5TACR_cmpm_WIDTH                   (8U)
#define VSPA_C5TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C5TACR_cmpm_SHIFT)) & VSPA_C5TACR_cmpm_MASK)

#define VSPA_C5TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C5TACR_ctinm_SHIFT                  (16U)
#define VSPA_C5TACR_ctinm_WIDTH                  (4U)
#define VSPA_C5TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C5TACR_ctinm_SHIFT)) & VSPA_C5TACR_ctinm_MASK)

#define VSPA_C5TACR_swb_MASK                     (0x20000000U)
#define VSPA_C5TACR_swb_SHIFT                    (29U)
#define VSPA_C5TACR_swb_WIDTH                    (1U)
#define VSPA_C5TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C5TACR_swb_SHIFT)) & VSPA_C5TACR_swb_MASK)

#define VSPA_C5TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C5TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C5TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C5TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C5TACR_vcpu_done_SHIFT)) & VSPA_C5TACR_vcpu_done_MASK)

#define VSPA_C5TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C5TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C5TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C5TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C5TACR_vcpu_go_SHIFT)) & VSPA_C5TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC6CS - Debug Comparator Control and Status register */
/*! @{ */

#define VSPA_DC6CS_evt_en_MASK                   (0x1U)
#define VSPA_DC6CS_evt_en_SHIFT                  (0U)
#define VSPA_DC6CS_evt_en_WIDTH                  (1U)
#define VSPA_DC6CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_evt_en_SHIFT)) & VSPA_DC6CS_evt_en_MASK)

#define VSPA_DC6CS_force_trig_MASK               (0x2U)
#define VSPA_DC6CS_force_trig_SHIFT              (1U)
#define VSPA_DC6CS_force_trig_WIDTH              (1U)
#define VSPA_DC6CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_force_trig_SHIFT)) & VSPA_DC6CS_force_trig_MASK)

#define VSPA_DC6CS_force_disarm_MASK             (0x4U)
#define VSPA_DC6CS_force_disarm_SHIFT            (2U)
#define VSPA_DC6CS_force_disarm_WIDTH            (1U)
#define VSPA_DC6CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_force_disarm_SHIFT)) & VSPA_DC6CS_force_disarm_MASK)

#define VSPA_DC6CS_force_arm_MASK                (0x8U)
#define VSPA_DC6CS_force_arm_SHIFT               (3U)
#define VSPA_DC6CS_force_arm_WIDTH               (1U)
#define VSPA_DC6CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_force_arm_SHIFT)) & VSPA_DC6CS_force_arm_MASK)

#define VSPA_DC6CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC6CS_cond_sel_SHIFT                (4U)
#define VSPA_DC6CS_cond_sel_WIDTH                (3U)
#define VSPA_DC6CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_cond_sel_SHIFT)) & VSPA_DC6CS_cond_sel_MASK)

#define VSPA_DC6CS_i_sel_MASK                    (0x700U)
#define VSPA_DC6CS_i_sel_SHIFT                   (8U)
#define VSPA_DC6CS_i_sel_WIDTH                   (3U)
#define VSPA_DC6CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_i_sel_SHIFT)) & VSPA_DC6CS_i_sel_MASK)

#define VSPA_DC6CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC6CS_pair_mode_SHIFT               (12U)
#define VSPA_DC6CS_pair_mode_WIDTH               (2U)
#define VSPA_DC6CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_pair_mode_SHIFT)) & VSPA_DC6CS_pair_mode_MASK)

#define VSPA_DC6CS_triggered_MASK                (0x10000U)
#define VSPA_DC6CS_triggered_SHIFT               (16U)
#define VSPA_DC6CS_triggered_WIDTH               (1U)
#define VSPA_DC6CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_triggered_SHIFT)) & VSPA_DC6CS_triggered_MASK)

#define VSPA_DC6CS_armed_MASK                    (0x20000U)
#define VSPA_DC6CS_armed_SHIFT                   (17U)
#define VSPA_DC6CS_armed_WIDTH                   (1U)
#define VSPA_DC6CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_armed_SHIFT)) & VSPA_DC6CS_armed_MASK)

#define VSPA_DC6CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC6CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC6CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC6CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_seq_evt_SHIFT)) & VSPA_DC6CS_seq_evt_MASK)

#define VSPA_DC6CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC6CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC6CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC6CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_cmp_evt_SHIFT)) & VSPA_DC6CS_cmp_evt_MASK)
/*! @} */

/*! @name DC6D - Debug Comparator a Data register */
/*! @{ */

#define VSPA_DC6D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC6D_comp_data_SHIFT                (2U)
#define VSPA_DC6D_comp_data_WIDTH                (18U)
#define VSPA_DC6D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC6D_comp_data_SHIFT)) & VSPA_DC6D_comp_data_MASK)

#define VSPA_DC6D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC6D_dma_host_SHIFT                 (24U)
#define VSPA_DC6D_dma_host_WIDTH                 (1U)
#define VSPA_DC6D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC6D_dma_host_SHIFT)) & VSPA_DC6D_dma_host_MASK)

#define VSPA_DC6D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC6D_vcpu_SHIFT                     (25U)
#define VSPA_DC6D_vcpu_WIDTH                     (1U)
#define VSPA_DC6D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC6D_vcpu_SHIFT)) & VSPA_DC6D_vcpu_MASK)

#define VSPA_DC6D_ippu_MASK                      (0x4000000U)
#define VSPA_DC6D_ippu_SHIFT                     (26U)
#define VSPA_DC6D_ippu_WIDTH                     (1U)
#define VSPA_DC6D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC6D_ippu_SHIFT)) & VSPA_DC6D_ippu_MASK)

#define VSPA_DC6D_rd_MASK                        (0x10000000U)
#define VSPA_DC6D_rd_SHIFT                       (28U)
#define VSPA_DC6D_rd_WIDTH                       (1U)
#define VSPA_DC6D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC6D_rd_SHIFT)) & VSPA_DC6D_rd_MASK)

#define VSPA_DC6D_wr_MASK                        (0x20000000U)
#define VSPA_DC6D_wr_SHIFT                       (29U)
#define VSPA_DC6D_wr_WIDTH                       (1U)
#define VSPA_DC6D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC6D_wr_SHIFT)) & VSPA_DC6D_wr_MASK)
/*! @} */

/*! @name C6AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */

#define VSPA_C6AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C6AACR_cmpm_SHIFT                   (0U)
#define VSPA_C6AACR_cmpm_WIDTH                   (8U)
#define VSPA_C6AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C6AACR_cmpm_SHIFT)) & VSPA_C6AACR_cmpm_MASK)

#define VSPA_C6AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C6AACR_ctinm_SHIFT                  (16U)
#define VSPA_C6AACR_ctinm_WIDTH                  (4U)
#define VSPA_C6AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C6AACR_ctinm_SHIFT)) & VSPA_C6AACR_ctinm_MASK)

#define VSPA_C6AACR_swb_MASK                     (0x20000000U)
#define VSPA_C6AACR_swb_SHIFT                    (29U)
#define VSPA_C6AACR_swb_WIDTH                    (1U)
#define VSPA_C6AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C6AACR_swb_SHIFT)) & VSPA_C6AACR_swb_MASK)

#define VSPA_C6AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C6AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C6AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C6AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C6AACR_vcpu_done_SHIFT)) & VSPA_C6AACR_vcpu_done_MASK)

#define VSPA_C6AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C6AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C6AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C6AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C6AACR_vcpu_go_SHIFT)) & VSPA_C6AACR_vcpu_go_MASK)
/*! @} */

/*! @name C6DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */

#define VSPA_C6DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C6DACR_cmpm_SHIFT                   (0U)
#define VSPA_C6DACR_cmpm_WIDTH                   (8U)
#define VSPA_C6DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C6DACR_cmpm_SHIFT)) & VSPA_C6DACR_cmpm_MASK)

#define VSPA_C6DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C6DACR_ctinm_SHIFT                  (16U)
#define VSPA_C6DACR_ctinm_WIDTH                  (4U)
#define VSPA_C6DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C6DACR_ctinm_SHIFT)) & VSPA_C6DACR_ctinm_MASK)

#define VSPA_C6DACR_swb_MASK                     (0x20000000U)
#define VSPA_C6DACR_swb_SHIFT                    (29U)
#define VSPA_C6DACR_swb_WIDTH                    (1U)
#define VSPA_C6DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C6DACR_swb_SHIFT)) & VSPA_C6DACR_swb_MASK)

#define VSPA_C6DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C6DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C6DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C6DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C6DACR_vcpu_done_SHIFT)) & VSPA_C6DACR_vcpu_done_MASK)

#define VSPA_C6DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C6DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C6DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C6DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C6DACR_vcpu_go_SHIFT)) & VSPA_C6DACR_vcpu_go_MASK)
/*! @} */

/*! @name C6TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */

#define VSPA_C6TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C6TACR_cmpm_SHIFT                   (0U)
#define VSPA_C6TACR_cmpm_WIDTH                   (8U)
#define VSPA_C6TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C6TACR_cmpm_SHIFT)) & VSPA_C6TACR_cmpm_MASK)

#define VSPA_C6TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C6TACR_ctinm_SHIFT                  (16U)
#define VSPA_C6TACR_ctinm_WIDTH                  (4U)
#define VSPA_C6TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C6TACR_ctinm_SHIFT)) & VSPA_C6TACR_ctinm_MASK)

#define VSPA_C6TACR_swb_MASK                     (0x20000000U)
#define VSPA_C6TACR_swb_SHIFT                    (29U)
#define VSPA_C6TACR_swb_WIDTH                    (1U)
#define VSPA_C6TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C6TACR_swb_SHIFT)) & VSPA_C6TACR_swb_MASK)

#define VSPA_C6TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C6TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C6TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C6TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C6TACR_vcpu_done_SHIFT)) & VSPA_C6TACR_vcpu_done_MASK)

#define VSPA_C6TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C6TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C6TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C6TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C6TACR_vcpu_go_SHIFT)) & VSPA_C6TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC7CS - Debug Comparator Control and Status register */
/*! @{ */

#define VSPA_DC7CS_evt_en_MASK                   (0x1U)
#define VSPA_DC7CS_evt_en_SHIFT                  (0U)
#define VSPA_DC7CS_evt_en_WIDTH                  (1U)
#define VSPA_DC7CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_evt_en_SHIFT)) & VSPA_DC7CS_evt_en_MASK)

#define VSPA_DC7CS_force_trig_MASK               (0x2U)
#define VSPA_DC7CS_force_trig_SHIFT              (1U)
#define VSPA_DC7CS_force_trig_WIDTH              (1U)
#define VSPA_DC7CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_force_trig_SHIFT)) & VSPA_DC7CS_force_trig_MASK)

#define VSPA_DC7CS_force_disarm_MASK             (0x4U)
#define VSPA_DC7CS_force_disarm_SHIFT            (2U)
#define VSPA_DC7CS_force_disarm_WIDTH            (1U)
#define VSPA_DC7CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_force_disarm_SHIFT)) & VSPA_DC7CS_force_disarm_MASK)

#define VSPA_DC7CS_force_arm_MASK                (0x8U)
#define VSPA_DC7CS_force_arm_SHIFT               (3U)
#define VSPA_DC7CS_force_arm_WIDTH               (1U)
#define VSPA_DC7CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_force_arm_SHIFT)) & VSPA_DC7CS_force_arm_MASK)

#define VSPA_DC7CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC7CS_cond_sel_SHIFT                (4U)
#define VSPA_DC7CS_cond_sel_WIDTH                (3U)
#define VSPA_DC7CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_cond_sel_SHIFT)) & VSPA_DC7CS_cond_sel_MASK)

#define VSPA_DC7CS_i_sel_MASK                    (0x700U)
#define VSPA_DC7CS_i_sel_SHIFT                   (8U)
#define VSPA_DC7CS_i_sel_WIDTH                   (3U)
#define VSPA_DC7CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_i_sel_SHIFT)) & VSPA_DC7CS_i_sel_MASK)

#define VSPA_DC7CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC7CS_pair_mode_SHIFT               (12U)
#define VSPA_DC7CS_pair_mode_WIDTH               (2U)
#define VSPA_DC7CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_pair_mode_SHIFT)) & VSPA_DC7CS_pair_mode_MASK)

#define VSPA_DC7CS_triggered_MASK                (0x10000U)
#define VSPA_DC7CS_triggered_SHIFT               (16U)
#define VSPA_DC7CS_triggered_WIDTH               (1U)
#define VSPA_DC7CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_triggered_SHIFT)) & VSPA_DC7CS_triggered_MASK)

#define VSPA_DC7CS_armed_MASK                    (0x20000U)
#define VSPA_DC7CS_armed_SHIFT                   (17U)
#define VSPA_DC7CS_armed_WIDTH                   (1U)
#define VSPA_DC7CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_armed_SHIFT)) & VSPA_DC7CS_armed_MASK)

#define VSPA_DC7CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC7CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC7CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC7CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_seq_evt_SHIFT)) & VSPA_DC7CS_seq_evt_MASK)

#define VSPA_DC7CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC7CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC7CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC7CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_cmp_evt_SHIFT)) & VSPA_DC7CS_cmp_evt_MASK)
/*! @} */

/*! @name DC7D - Debug Comparator a Data register */
/*! @{ */

#define VSPA_DC7D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC7D_comp_data_SHIFT                (2U)
#define VSPA_DC7D_comp_data_WIDTH                (18U)
#define VSPA_DC7D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC7D_comp_data_SHIFT)) & VSPA_DC7D_comp_data_MASK)

#define VSPA_DC7D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC7D_dma_host_SHIFT                 (24U)
#define VSPA_DC7D_dma_host_WIDTH                 (1U)
#define VSPA_DC7D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC7D_dma_host_SHIFT)) & VSPA_DC7D_dma_host_MASK)

#define VSPA_DC7D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC7D_vcpu_SHIFT                     (25U)
#define VSPA_DC7D_vcpu_WIDTH                     (1U)
#define VSPA_DC7D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC7D_vcpu_SHIFT)) & VSPA_DC7D_vcpu_MASK)

#define VSPA_DC7D_ippu_MASK                      (0x4000000U)
#define VSPA_DC7D_ippu_SHIFT                     (26U)
#define VSPA_DC7D_ippu_WIDTH                     (1U)
#define VSPA_DC7D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC7D_ippu_SHIFT)) & VSPA_DC7D_ippu_MASK)

#define VSPA_DC7D_rd_MASK                        (0x10000000U)
#define VSPA_DC7D_rd_SHIFT                       (28U)
#define VSPA_DC7D_rd_WIDTH                       (1U)
#define VSPA_DC7D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC7D_rd_SHIFT)) & VSPA_DC7D_rd_MASK)

#define VSPA_DC7D_wr_MASK                        (0x20000000U)
#define VSPA_DC7D_wr_SHIFT                       (29U)
#define VSPA_DC7D_wr_WIDTH                       (1U)
#define VSPA_DC7D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC7D_wr_SHIFT)) & VSPA_DC7D_wr_MASK)
/*! @} */

/*! @name C7AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */

#define VSPA_C7AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C7AACR_cmpm_SHIFT                   (0U)
#define VSPA_C7AACR_cmpm_WIDTH                   (8U)
#define VSPA_C7AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C7AACR_cmpm_SHIFT)) & VSPA_C7AACR_cmpm_MASK)

#define VSPA_C7AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C7AACR_ctinm_SHIFT                  (16U)
#define VSPA_C7AACR_ctinm_WIDTH                  (4U)
#define VSPA_C7AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C7AACR_ctinm_SHIFT)) & VSPA_C7AACR_ctinm_MASK)

#define VSPA_C7AACR_swb_MASK                     (0x20000000U)
#define VSPA_C7AACR_swb_SHIFT                    (29U)
#define VSPA_C7AACR_swb_WIDTH                    (1U)
#define VSPA_C7AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C7AACR_swb_SHIFT)) & VSPA_C7AACR_swb_MASK)

#define VSPA_C7AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C7AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C7AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C7AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C7AACR_vcpu_done_SHIFT)) & VSPA_C7AACR_vcpu_done_MASK)

#define VSPA_C7AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C7AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C7AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C7AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C7AACR_vcpu_go_SHIFT)) & VSPA_C7AACR_vcpu_go_MASK)
/*! @} */

/*! @name C7DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */

#define VSPA_C7DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C7DACR_cmpm_SHIFT                   (0U)
#define VSPA_C7DACR_cmpm_WIDTH                   (8U)
#define VSPA_C7DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C7DACR_cmpm_SHIFT)) & VSPA_C7DACR_cmpm_MASK)

#define VSPA_C7DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C7DACR_ctinm_SHIFT                  (16U)
#define VSPA_C7DACR_ctinm_WIDTH                  (4U)
#define VSPA_C7DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C7DACR_ctinm_SHIFT)) & VSPA_C7DACR_ctinm_MASK)

#define VSPA_C7DACR_swb_MASK                     (0x20000000U)
#define VSPA_C7DACR_swb_SHIFT                    (29U)
#define VSPA_C7DACR_swb_WIDTH                    (1U)
#define VSPA_C7DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C7DACR_swb_SHIFT)) & VSPA_C7DACR_swb_MASK)

#define VSPA_C7DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C7DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C7DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C7DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C7DACR_vcpu_done_SHIFT)) & VSPA_C7DACR_vcpu_done_MASK)

#define VSPA_C7DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C7DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C7DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C7DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C7DACR_vcpu_go_SHIFT)) & VSPA_C7DACR_vcpu_go_MASK)
/*! @} */

/*! @name C7TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */

#define VSPA_C7TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C7TACR_cmpm_SHIFT                   (0U)
#define VSPA_C7TACR_cmpm_WIDTH                   (8U)
#define VSPA_C7TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C7TACR_cmpm_SHIFT)) & VSPA_C7TACR_cmpm_MASK)

#define VSPA_C7TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C7TACR_ctinm_SHIFT                  (16U)
#define VSPA_C7TACR_ctinm_WIDTH                  (4U)
#define VSPA_C7TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C7TACR_ctinm_SHIFT)) & VSPA_C7TACR_ctinm_MASK)

#define VSPA_C7TACR_swb_MASK                     (0x20000000U)
#define VSPA_C7TACR_swb_SHIFT                    (29U)
#define VSPA_C7TACR_swb_WIDTH                    (1U)
#define VSPA_C7TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C7TACR_swb_SHIFT)) & VSPA_C7TACR_swb_MASK)

#define VSPA_C7TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C7TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C7TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C7TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C7TACR_vcpu_done_SHIFT)) & VSPA_C7TACR_vcpu_done_MASK)

#define VSPA_C7TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C7TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C7TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C7TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C7TACR_vcpu_go_SHIFT)) & VSPA_C7TACR_vcpu_go_MASK)
/*! @} */

/*! @name OUT_32 - Debug to VSP 32-bit Outbox register */
/*! @{ */

#define VSPA_OUT_32_debug_outbox32_MASK          (0xFFFFFFFFU)
#define VSPA_OUT_32_debug_outbox32_SHIFT         (0U)
#define VSPA_OUT_32_debug_outbox32_WIDTH         (32U)
#define VSPA_OUT_32_debug_outbox32(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_OUT_32_debug_outbox32_SHIFT)) & VSPA_OUT_32_debug_outbox32_MASK)
/*! @} */

/*! @name OUT_64_MSB - Debug to VSP 64-bit MSB Outbox register */
/*! @{ */

#define VSPA_OUT_64_MSB_debug_outbox64msb_MASK   (0xFFFFFFFFU)
#define VSPA_OUT_64_MSB_debug_outbox64msb_SHIFT  (0U)
#define VSPA_OUT_64_MSB_debug_outbox64msb_WIDTH  (32U)
#define VSPA_OUT_64_MSB_debug_outbox64msb(x)     (((uint32_t)(((uint32_t)(x)) << VSPA_OUT_64_MSB_debug_outbox64msb_SHIFT)) & VSPA_OUT_64_MSB_debug_outbox64msb_MASK)
/*! @} */

/*! @name OUT_64_LSB - Debug to VSP 64-bit LSB Outbox register */
/*! @{ */

#define VSPA_OUT_64_LSB_debug_outbox64lsb_MASK   (0xFFFFFFFFU)
#define VSPA_OUT_64_LSB_debug_outbox64lsb_SHIFT  (0U)
#define VSPA_OUT_64_LSB_debug_outbox64lsb_WIDTH  (32U)
#define VSPA_OUT_64_LSB_debug_outbox64lsb(x)     (((uint32_t)(((uint32_t)(x)) << VSPA_OUT_64_LSB_debug_outbox64lsb_SHIFT)) & VSPA_OUT_64_LSB_debug_outbox64lsb_MASK)
/*! @} */

/*! @name IN_32 - VSP to Debugger 32-bit Inbox register */
/*! @{ */

#define VSPA_IN_32_debug_inbox32_MASK            (0xFFFFFFFFU)
#define VSPA_IN_32_debug_inbox32_SHIFT           (0U)
#define VSPA_IN_32_debug_inbox32_WIDTH           (32U)
#define VSPA_IN_32_debug_inbox32(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_IN_32_debug_inbox32_SHIFT)) & VSPA_IN_32_debug_inbox32_MASK)
/*! @} */

/*! @name IN_64_MSB - VSP to Debugger 64-bit MSB Inbox register */
/*! @{ */

#define VSPA_IN_64_MSB_debug_inbox64msb_MASK     (0xFFFFFFFFU)
#define VSPA_IN_64_MSB_debug_inbox64msb_SHIFT    (0U)
#define VSPA_IN_64_MSB_debug_inbox64msb_WIDTH    (32U)
#define VSPA_IN_64_MSB_debug_inbox64msb(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_IN_64_MSB_debug_inbox64msb_SHIFT)) & VSPA_IN_64_MSB_debug_inbox64msb_MASK)
/*! @} */

/*! @name IN_64_LSB - VSP to Debugger 64-bit LSB Inbox register */
/*! @{ */

#define VSPA_IN_64_LSB_debug_inbox64lsb_MASK     (0xFFFFFFFFU)
#define VSPA_IN_64_LSB_debug_inbox64lsb_SHIFT    (0U)
#define VSPA_IN_64_LSB_debug_inbox64lsb_WIDTH    (32U)
#define VSPA_IN_64_LSB_debug_inbox64lsb(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_IN_64_LSB_debug_inbox64lsb_SHIFT)) & VSPA_IN_64_LSB_debug_inbox64lsb_MASK)
/*! @} */

/*! @name MBOX_STATUS - Debugger to VSP Mailbox Status register */
/*! @{ */

#define VSPA_MBOX_STATUS_msg_out_valid_32bit_MASK (0x1U)
#define VSPA_MBOX_STATUS_msg_out_valid_32bit_SHIFT (0U)
#define VSPA_MBOX_STATUS_msg_out_valid_32bit_WIDTH (1U)
#define VSPA_MBOX_STATUS_msg_out_valid_32bit(x)  (((uint32_t)(((uint32_t)(x)) << VSPA_MBOX_STATUS_msg_out_valid_32bit_SHIFT)) & VSPA_MBOX_STATUS_msg_out_valid_32bit_MASK)

#define VSPA_MBOX_STATUS_msg_out_valid_64bit_MASK (0x2U)
#define VSPA_MBOX_STATUS_msg_out_valid_64bit_SHIFT (1U)
#define VSPA_MBOX_STATUS_msg_out_valid_64bit_WIDTH (1U)
#define VSPA_MBOX_STATUS_msg_out_valid_64bit(x)  (((uint32_t)(((uint32_t)(x)) << VSPA_MBOX_STATUS_msg_out_valid_64bit_SHIFT)) & VSPA_MBOX_STATUS_msg_out_valid_64bit_MASK)

#define VSPA_MBOX_STATUS_msg_in_valid_32bit_MASK (0x4U)
#define VSPA_MBOX_STATUS_msg_in_valid_32bit_SHIFT (2U)
#define VSPA_MBOX_STATUS_msg_in_valid_32bit_WIDTH (1U)
#define VSPA_MBOX_STATUS_msg_in_valid_32bit(x)   (((uint32_t)(((uint32_t)(x)) << VSPA_MBOX_STATUS_msg_in_valid_32bit_SHIFT)) & VSPA_MBOX_STATUS_msg_in_valid_32bit_MASK)

#define VSPA_MBOX_STATUS_msg_in_valid_64bit_MASK (0x8U)
#define VSPA_MBOX_STATUS_msg_in_valid_64bit_SHIFT (3U)
#define VSPA_MBOX_STATUS_msg_in_valid_64bit_WIDTH (1U)
#define VSPA_MBOX_STATUS_msg_in_valid_64bit(x)   (((uint32_t)(((uint32_t)(x)) << VSPA_MBOX_STATUS_msg_in_valid_64bit_SHIFT)) & VSPA_MBOX_STATUS_msg_in_valid_64bit_MASK)
/*! @} */

/*! @name PARAM_0 - Debug Parameter 0 Register */
/*! @{ */

#define VSPA_PARAM_0_ATID_VALUE_MASK             (0x7FU)
#define VSPA_PARAM_0_ATID_VALUE_SHIFT            (0U)
#define VSPA_PARAM_0_ATID_VALUE_WIDTH            (7U)
#define VSPA_PARAM_0_ATID_VALUE(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM_0_ATID_VALUE_SHIFT)) & VSPA_PARAM_0_ATID_VALUE_MASK)

#define VSPA_PARAM_0_DBG_FIFO_SIZE_MASK          (0xFF00U)
#define VSPA_PARAM_0_DBG_FIFO_SIZE_SHIFT         (8U)
#define VSPA_PARAM_0_DBG_FIFO_SIZE_WIDTH         (8U)
#define VSPA_PARAM_0_DBG_FIFO_SIZE(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM_0_DBG_FIFO_SIZE_SHIFT)) & VSPA_PARAM_0_DBG_FIFO_SIZE_MASK)

#define VSPA_PARAM_0_num_comps_MASK              (0xF0000U)
#define VSPA_PARAM_0_num_comps_SHIFT             (16U)
#define VSPA_PARAM_0_num_comps_WIDTH             (4U)
#define VSPA_PARAM_0_num_comps(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM_0_num_comps_SHIFT)) & VSPA_PARAM_0_num_comps_MASK)

#define VSPA_PARAM_0_xtrig_in_count_MASK         (0xF00000U)
#define VSPA_PARAM_0_xtrig_in_count_SHIFT        (20U)
#define VSPA_PARAM_0_xtrig_in_count_WIDTH        (4U)
#define VSPA_PARAM_0_xtrig_in_count(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM_0_xtrig_in_count_SHIFT)) & VSPA_PARAM_0_xtrig_in_count_MASK)

#define VSPA_PARAM_0_xtrig_out_count_MASK        (0xF000000U)
#define VSPA_PARAM_0_xtrig_out_count_SHIFT       (24U)
#define VSPA_PARAM_0_xtrig_out_count_WIDTH       (4U)
#define VSPA_PARAM_0_xtrig_out_count(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM_0_xtrig_out_count_SHIFT)) & VSPA_PARAM_0_xtrig_out_count_MASK)
/*! @} */

/*! @name PIDR4 - Peripheral ID4 register */
/*! @{ */

#define VSPA_PIDR4_des_2_MASK                    (0xFU)
#define VSPA_PIDR4_des_2_SHIFT                   (0U)
#define VSPA_PIDR4_des_2_WIDTH                   (4U)
#define VSPA_PIDR4_des_2(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR4_des_2_SHIFT)) & VSPA_PIDR4_des_2_MASK)

#define VSPA_PIDR4_size_MASK                     (0xF0U)
#define VSPA_PIDR4_size_SHIFT                    (4U)
#define VSPA_PIDR4_size_WIDTH                    (4U)
#define VSPA_PIDR4_size(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR4_size_SHIFT)) & VSPA_PIDR4_size_MASK)

#define VSPA_PIDR4_raz_MASK                      (0xFFFFFF00U)
#define VSPA_PIDR4_raz_SHIFT                     (8U)
#define VSPA_PIDR4_raz_WIDTH                     (24U)
#define VSPA_PIDR4_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR4_raz_SHIFT)) & VSPA_PIDR4_raz_MASK)
/*! @} */

/*! @name PIDR5 - Peripheral ID5 register */
/*! @{ */

#define VSPA_PIDR5_raz_MASK                      (0xFFFFFFFFU)
#define VSPA_PIDR5_raz_SHIFT                     (0U)
#define VSPA_PIDR5_raz_WIDTH                     (32U)
#define VSPA_PIDR5_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR5_raz_SHIFT)) & VSPA_PIDR5_raz_MASK)
/*! @} */

/*! @name PIDR6 - Peripheral ID6 register */
/*! @{ */

#define VSPA_PIDR6_raz_MASK                      (0xFFFFFFFFU)
#define VSPA_PIDR6_raz_SHIFT                     (0U)
#define VSPA_PIDR6_raz_WIDTH                     (32U)
#define VSPA_PIDR6_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR6_raz_SHIFT)) & VSPA_PIDR6_raz_MASK)
/*! @} */

/*! @name PIDR7 - Peripheral ID7 register */
/*! @{ */

#define VSPA_PIDR7_raz_MASK                      (0xFFFFFFFFU)
#define VSPA_PIDR7_raz_SHIFT                     (0U)
#define VSPA_PIDR7_raz_WIDTH                     (32U)
#define VSPA_PIDR7_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR7_raz_SHIFT)) & VSPA_PIDR7_raz_MASK)
/*! @} */

/*! @name PIDR0 - Peripheral ID0 register */
/*! @{ */

#define VSPA_PIDR0_part_0_MASK                   (0xFFU)
#define VSPA_PIDR0_part_0_SHIFT                  (0U)
#define VSPA_PIDR0_part_0_WIDTH                  (8U)
#define VSPA_PIDR0_part_0(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR0_part_0_SHIFT)) & VSPA_PIDR0_part_0_MASK)

#define VSPA_PIDR0_raz_MASK                      (0xFFFFFF00U)
#define VSPA_PIDR0_raz_SHIFT                     (8U)
#define VSPA_PIDR0_raz_WIDTH                     (24U)
#define VSPA_PIDR0_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR0_raz_SHIFT)) & VSPA_PIDR0_raz_MASK)
/*! @} */

/*! @name PIDR1 - Peripheral ID1 register */
/*! @{ */

#define VSPA_PIDR1_part_1_MASK                   (0xFU)
#define VSPA_PIDR1_part_1_SHIFT                  (0U)
#define VSPA_PIDR1_part_1_WIDTH                  (4U)
#define VSPA_PIDR1_part_1(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR1_part_1_SHIFT)) & VSPA_PIDR1_part_1_MASK)

#define VSPA_PIDR1_des_0_MASK                    (0xF0U)
#define VSPA_PIDR1_des_0_SHIFT                   (4U)
#define VSPA_PIDR1_des_0_WIDTH                   (4U)
#define VSPA_PIDR1_des_0(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR1_des_0_SHIFT)) & VSPA_PIDR1_des_0_MASK)

#define VSPA_PIDR1_raz_MASK                      (0xFFFFFF00U)
#define VSPA_PIDR1_raz_SHIFT                     (8U)
#define VSPA_PIDR1_raz_WIDTH                     (24U)
#define VSPA_PIDR1_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR1_raz_SHIFT)) & VSPA_PIDR1_raz_MASK)
/*! @} */

/*! @name PIDR2 - Peripheral ID2 register */
/*! @{ */

#define VSPA_PIDR2_des_1_MASK                    (0x7U)
#define VSPA_PIDR2_des_1_SHIFT                   (0U)
#define VSPA_PIDR2_des_1_WIDTH                   (3U)
#define VSPA_PIDR2_des_1(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR2_des_1_SHIFT)) & VSPA_PIDR2_des_1_MASK)

#define VSPA_PIDR2_jedec_MASK                    (0x8U)
#define VSPA_PIDR2_jedec_SHIFT                   (3U)
#define VSPA_PIDR2_jedec_WIDTH                   (1U)
#define VSPA_PIDR2_jedec(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR2_jedec_SHIFT)) & VSPA_PIDR2_jedec_MASK)

#define VSPA_PIDR2_revision_MASK                 (0xF0U)
#define VSPA_PIDR2_revision_SHIFT                (4U)
#define VSPA_PIDR2_revision_WIDTH                (4U)
#define VSPA_PIDR2_revision(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR2_revision_SHIFT)) & VSPA_PIDR2_revision_MASK)

#define VSPA_PIDR2_raz_MASK                      (0xFFFFFF00U)
#define VSPA_PIDR2_raz_SHIFT                     (8U)
#define VSPA_PIDR2_raz_WIDTH                     (24U)
#define VSPA_PIDR2_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR2_raz_SHIFT)) & VSPA_PIDR2_raz_MASK)
/*! @} */

/*! @name PIDR3 - Peripheral ID3 register */
/*! @{ */

#define VSPA_PIDR3_cmod_MASK                     (0xFU)
#define VSPA_PIDR3_cmod_SHIFT                    (0U)
#define VSPA_PIDR3_cmod_WIDTH                    (4U)
#define VSPA_PIDR3_cmod(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR3_cmod_SHIFT)) & VSPA_PIDR3_cmod_MASK)

#define VSPA_PIDR3_revand_MASK                   (0xF0U)
#define VSPA_PIDR3_revand_SHIFT                  (4U)
#define VSPA_PIDR3_revand_WIDTH                  (4U)
#define VSPA_PIDR3_revand(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR3_revand_SHIFT)) & VSPA_PIDR3_revand_MASK)

#define VSPA_PIDR3_raz_MASK                      (0xFFFFFF00U)
#define VSPA_PIDR3_raz_SHIFT                     (8U)
#define VSPA_PIDR3_raz_WIDTH                     (24U)
#define VSPA_PIDR3_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR3_raz_SHIFT)) & VSPA_PIDR3_raz_MASK)
/*! @} */

/*! @name CIDR0 - Component ID0 register */
/*! @{ */

#define VSPA_CIDR0_prmbl_0_MASK                  (0xFFU)
#define VSPA_CIDR0_prmbl_0_SHIFT                 (0U)
#define VSPA_CIDR0_prmbl_0_WIDTH                 (8U)
#define VSPA_CIDR0_prmbl_0(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR0_prmbl_0_SHIFT)) & VSPA_CIDR0_prmbl_0_MASK)

#define VSPA_CIDR0_raz_MASK                      (0xFFFFFF00U)
#define VSPA_CIDR0_raz_SHIFT                     (8U)
#define VSPA_CIDR0_raz_WIDTH                     (24U)
#define VSPA_CIDR0_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR0_raz_SHIFT)) & VSPA_CIDR0_raz_MASK)
/*! @} */

/*! @name CIDR1 - Component ID1 register */
/*! @{ */

#define VSPA_CIDR1_prmbl_1_MASK                  (0xFU)
#define VSPA_CIDR1_prmbl_1_SHIFT                 (0U)
#define VSPA_CIDR1_prmbl_1_WIDTH                 (4U)
#define VSPA_CIDR1_prmbl_1(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR1_prmbl_1_SHIFT)) & VSPA_CIDR1_prmbl_1_MASK)

#define VSPA_CIDR1_class_MASK                    (0xF0U)
#define VSPA_CIDR1_class_SHIFT                   (4U)
#define VSPA_CIDR1_class_WIDTH                   (4U)
#define VSPA_CIDR1_class(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR1_class_SHIFT)) & VSPA_CIDR1_class_MASK)

#define VSPA_CIDR1_raz_MASK                      (0xFFFFFF00U)
#define VSPA_CIDR1_raz_SHIFT                     (8U)
#define VSPA_CIDR1_raz_WIDTH                     (24U)
#define VSPA_CIDR1_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR1_raz_SHIFT)) & VSPA_CIDR1_raz_MASK)
/*! @} */

/*! @name CIDR2 - Component ID2 register */
/*! @{ */

#define VSPA_CIDR2_prmbl_2_MASK                  (0xFFU)
#define VSPA_CIDR2_prmbl_2_SHIFT                 (0U)
#define VSPA_CIDR2_prmbl_2_WIDTH                 (8U)
#define VSPA_CIDR2_prmbl_2(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR2_prmbl_2_SHIFT)) & VSPA_CIDR2_prmbl_2_MASK)

#define VSPA_CIDR2_raz_MASK                      (0xFFFFFF00U)
#define VSPA_CIDR2_raz_SHIFT                     (8U)
#define VSPA_CIDR2_raz_WIDTH                     (24U)
#define VSPA_CIDR2_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR2_raz_SHIFT)) & VSPA_CIDR2_raz_MASK)
/*! @} */

/*! @name CIDR3 - Component ID3 register */
/*! @{ */

#define VSPA_CIDR3_prmbl_3_MASK                  (0xFFU)
#define VSPA_CIDR3_prmbl_3_SHIFT                 (0U)
#define VSPA_CIDR3_prmbl_3_WIDTH                 (8U)
#define VSPA_CIDR3_prmbl_3(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR3_prmbl_3_SHIFT)) & VSPA_CIDR3_prmbl_3_MASK)

#define VSPA_CIDR3_raz_MASK                      (0xFFFFFF00U)
#define VSPA_CIDR3_raz_SHIFT                     (8U)
#define VSPA_CIDR3_raz_WIDTH                     (24U)
#define VSPA_CIDR3_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR3_raz_SHIFT)) & VSPA_CIDR3_raz_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group VSPA_Register_Masks */

/*!
 * @}
 */ /* end of group VSPA_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_VSPA_H_) */
