/*
** ###################################################################
**     Processor:           S32G274A_M7
**     Compiler:            Keil ARM C/C++ Compiler
**     Reference manual:    S32G274A RM Rev.5
**     Version:             rev. 2.1, 2022-06-27
**     Build:               b220627
**
**     Abstract:
**         Peripheral Access Layer for S32G274A_M7
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
 * @file S32G274A_UOTG.h
 * @version 2.1
 * @date 2022-06-27
 * @brief Peripheral Access Layer for S32G274A_UOTG
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
#if !defined(S32G274A_UOTG_H_)  /* Check if memory map has not been already included */
#define S32G274A_UOTG_H_

#include "S32G274A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- UOTG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UOTG_Peripheral_Access_Layer UOTG Peripheral Access Layer
 * @{
 */

/** UOTG - Size of Registers Arrays */
#define UOTG_GPTIMER_COUNT                        2u

/** UOTG - Register Layout Typedef */
typedef struct {
  __I  uint32_t ID;                                /**< Identification, offset: 0x0 */
  __I  uint32_t HWGENERAL;                         /**< General Hardware Parameters, offset: 0x4 */
  __I  uint32_t HWHOST;                            /**< Host Hardware Parameters, offset: 0x8 */
  __I  uint32_t HWDEVICE;                          /**< Device Hardware Parameters, offset: 0xC */
  __I  uint32_t HWTXBUF;                           /**< TX Buffer Hardware Parameters, offset: 0x10 */
  __I  uint32_t HWRXBUF;                           /**< RX Buffer Hardware Parameters, offset: 0x14 */
  uint8_t RESERVED_0[104];
  struct {                                         /* offset: 0x80, array step: 0x8 */
    __IO uint32_t GPTIMERLD;                         /**< General Purpose Timer Load, array offset: 0x80, array step: 0x8 */
    __IO uint32_t GPTIMERCTRL;                       /**< General Purpose Timer Controller, array offset: 0x84, array step: 0x8 */
  } GPTIMER[UOTG_GPTIMER_COUNT];
  __IO uint32_t SBUSCFG;                           /**< System Bus Configuration, offset: 0x90 */
  uint8_t RESERVED_1[108];
  __I  uint8_t CAPLENGTH;                          /**< Capability Register Length, offset: 0x100 */
  uint8_t RESERVED_2[1];
  __I  uint16_t HCIVERSION;                        /**< Host Controller Interface Version, offset: 0x102 */
  __I  uint32_t HCSPARAMS;                         /**< Host Controller Structural Parameters, offset: 0x104 */
  __I  uint32_t HCCPARAMS;                         /**< Host Controller Capability Parameters, offset: 0x108 */
  uint8_t RESERVED_3[20];
  __I  uint16_t DCIVERSION;                        /**< Device Controller Interface Version, offset: 0x120 */
  uint8_t RESERVED_4[2];
  __I  uint32_t DCCPARAMS;                         /**< Device Controller Capability Parameters, offset: 0x124 */
  uint8_t RESERVED_5[24];
  __IO uint32_t USBCMD;                            /**< USB Command, offset: 0x140 */
  __IO uint32_t USBSTS;                            /**< USB Status, offset: 0x144 */
  __IO uint32_t USBINTR;                           /**< Interrupt Enable, offset: 0x148 */
  __IO uint32_t FRINDEX;                           /**< USB Frame Index, offset: 0x14C */
  uint8_t RESERVED_6[4];
  __IO uint32_t PERIODICLISTBASE_OR_DEVICEADDR;    /**< Frame List Base Address or Device Address, offset: 0x154 */
  __IO uint32_t ASYNCLISTADDR_OR_ENDPOINTLISTADDR; /**< Next Asynchronous Address or Endpoint List Address, offset: 0x158 */
  uint8_t RESERVED_7[4];
  __IO uint32_t BURSTSIZE;                         /**< Programmable Burst Size, offset: 0x160 */
  __IO uint32_t TXFILLTUNING;                      /**< TX FIFO Fill Tuning, offset: 0x164 */
  uint8_t RESERVED_8[4];
  __IO uint32_t IC_USB;                            /**< IC_USB Enable and Voltage Negotiation, offset: 0x16C */
  __IO uint32_t ULPI_VIEWPORT;                     /**< ULPI Register Access, offset: 0x170 */
  uint8_t RESERVED_9[4];
  __IO uint32_t ENDPTNAK;                          /**< Endpoint NAK, offset: 0x178 */
  __IO uint32_t ENDPTNAKEN;                        /**< Endpoint NAK Enable, offset: 0x17C */
       uint32_t CONFIGFLAG;                        /**< Configure Flag, offset: 0x180 */
  __IO uint32_t PORTSC1;                           /**< Port Status and Control, offset: 0x184 */
  uint8_t RESERVED_10[28];
  __IO uint32_t OTGSC;                             /**< OTG Status Control, offset: 0x1A4 */
  __IO uint32_t USBMODE;                           /**< USB Device Mode, offset: 0x1A8 */
  __IO uint32_t ENDPTSETUPSTAT;                    /**< Endpoint Setup Status, offset: 0x1AC */
  __IO uint32_t ENDPTPRIME;                        /**< Endpoint Initialization, offset: 0x1B0 */
  __IO uint32_t ENDPTFLUSH;                        /**< Endpoint De-Initialize, offset: 0x1B4 */
  __I  uint32_t ENDPTSTAT;                         /**< Endpoint Status, offset: 0x1B8 */
  __IO uint32_t ENDPTCOMPLETE;                     /**< Endpoint Complete, offset: 0x1BC */
  __IO uint32_t ENDPTCTRL0;                        /**< Endpoint Control 0, offset: 0x1C0 */
  __IO uint32_t ENDPTCTRL1;                        /**< Endpoint Control, offset: 0x1C4 */
  __IO uint32_t ENDPTCTRL2;                        /**< Endpoint Control, offset: 0x1C8 */
  __IO uint32_t ENDPTCTRL3;                        /**< Endpoint Control, offset: 0x1CC */
  __IO uint32_t ENDPTCTRL4;                        /**< Endpoint Control, offset: 0x1D0 */
  __IO uint32_t ENDPTCTRL5;                        /**< Endpoint Control, offset: 0x1D4 */
} UOTG_Type, *UOTG_MemMapPtr;

/** Number of instances of the UOTG module. */
#define UOTG_INSTANCE_COUNT                      (1u)

/* UOTG - Peripheral instance base addresses */
/** Peripheral UOTG base address */
#define IP_UOTG_BASE                             (0x44064000u)
/** Peripheral UOTG base pointer */
#define IP_UOTG                                  ((UOTG_Type *)IP_UOTG_BASE)
/** Array initializer of UOTG peripheral base addresses */
#define IP_UOTG_BASE_ADDRS                       { IP_UOTG_BASE }
/** Array initializer of UOTG peripheral base pointers */
#define IP_UOTG_BASE_PTRS                        { IP_UOTG }

/* ----------------------------------------------------------------------------
   -- UOTG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UOTG_Register_Masks UOTG Register Masks
 * @{
 */

/*! @name ID - Identification */
/*! @{ */

#define UOTG_ID_ID_MASK                          (0x3FU)
#define UOTG_ID_ID_SHIFT                         (0U)
#define UOTG_ID_ID_WIDTH                         (6U)
#define UOTG_ID_ID(x)                            (((uint32_t)(((uint32_t)(x)) << UOTG_ID_ID_SHIFT)) & UOTG_ID_ID_MASK)

#define UOTG_ID_NID_MASK                         (0x3F00U)
#define UOTG_ID_NID_SHIFT                        (8U)
#define UOTG_ID_NID_WIDTH                        (6U)
#define UOTG_ID_NID(x)                           (((uint32_t)(((uint32_t)(x)) << UOTG_ID_NID_SHIFT)) & UOTG_ID_NID_MASK)

#define UOTG_ID_REVISION_MASK                    (0x1E00000U)
#define UOTG_ID_REVISION_SHIFT                   (21U)
#define UOTG_ID_REVISION_WIDTH                   (4U)
#define UOTG_ID_REVISION(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_ID_REVISION_SHIFT)) & UOTG_ID_REVISION_MASK)
/*! @} */

/*! @name HWGENERAL - General Hardware Parameters */
/*! @{ */

#define UOTG_HWGENERAL_PHYW_MASK                 (0x30U)
#define UOTG_HWGENERAL_PHYW_SHIFT                (4U)
#define UOTG_HWGENERAL_PHYW_WIDTH                (2U)
#define UOTG_HWGENERAL_PHYW(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_HWGENERAL_PHYW_SHIFT)) & UOTG_HWGENERAL_PHYW_MASK)

#define UOTG_HWGENERAL_PHYM_MASK                 (0x3C0U)
#define UOTG_HWGENERAL_PHYM_SHIFT                (6U)
#define UOTG_HWGENERAL_PHYM_WIDTH                (4U)
#define UOTG_HWGENERAL_PHYM(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_HWGENERAL_PHYM_SHIFT)) & UOTG_HWGENERAL_PHYM_MASK)

#define UOTG_HWGENERAL_SM_MASK                   (0xC00U)
#define UOTG_HWGENERAL_SM_SHIFT                  (10U)
#define UOTG_HWGENERAL_SM_WIDTH                  (2U)
#define UOTG_HWGENERAL_SM(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_HWGENERAL_SM_SHIFT)) & UOTG_HWGENERAL_SM_MASK)
/*! @} */

/*! @name HWHOST - Host Hardware Parameters */
/*! @{ */

#define UOTG_HWHOST_HC_MASK                      (0x1U)
#define UOTG_HWHOST_HC_SHIFT                     (0U)
#define UOTG_HWHOST_HC_WIDTH                     (1U)
#define UOTG_HWHOST_HC(x)                        (((uint32_t)(((uint32_t)(x)) << UOTG_HWHOST_HC_SHIFT)) & UOTG_HWHOST_HC_MASK)

#define UOTG_HWHOST_NPORT_MASK                   (0xEU)
#define UOTG_HWHOST_NPORT_SHIFT                  (1U)
#define UOTG_HWHOST_NPORT_WIDTH                  (3U)
#define UOTG_HWHOST_NPORT(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_HWHOST_NPORT_SHIFT)) & UOTG_HWHOST_NPORT_MASK)
/*! @} */

/*! @name HWDEVICE - Device Hardware Parameters */
/*! @{ */

#define UOTG_HWDEVICE_DC_MASK                    (0x1U)
#define UOTG_HWDEVICE_DC_SHIFT                   (0U)
#define UOTG_HWDEVICE_DC_WIDTH                   (1U)
#define UOTG_HWDEVICE_DC(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_HWDEVICE_DC_SHIFT)) & UOTG_HWDEVICE_DC_MASK)

#define UOTG_HWDEVICE_DEVEP_MASK                 (0x7EU)
#define UOTG_HWDEVICE_DEVEP_SHIFT                (1U)
#define UOTG_HWDEVICE_DEVEP_WIDTH                (6U)
#define UOTG_HWDEVICE_DEVEP(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_HWDEVICE_DEVEP_SHIFT)) & UOTG_HWDEVICE_DEVEP_MASK)
/*! @} */

/*! @name HWTXBUF - TX Buffer Hardware Parameters */
/*! @{ */

#define UOTG_HWTXBUF_TXBURST_MASK                (0xFFU)
#define UOTG_HWTXBUF_TXBURST_SHIFT               (0U)
#define UOTG_HWTXBUF_TXBURST_WIDTH               (8U)
#define UOTG_HWTXBUF_TXBURST(x)                  (((uint32_t)(((uint32_t)(x)) << UOTG_HWTXBUF_TXBURST_SHIFT)) & UOTG_HWTXBUF_TXBURST_MASK)

#define UOTG_HWTXBUF_TXADD_MASK                  (0xFF00U)
#define UOTG_HWTXBUF_TXADD_SHIFT                 (8U)
#define UOTG_HWTXBUF_TXADD_WIDTH                 (8U)
#define UOTG_HWTXBUF_TXADD(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_HWTXBUF_TXADD_SHIFT)) & UOTG_HWTXBUF_TXADD_MASK)

#define UOTG_HWTXBUF_TXCHANADD_MASK              (0xFF0000U)
#define UOTG_HWTXBUF_TXCHANADD_SHIFT             (16U)
#define UOTG_HWTXBUF_TXCHANADD_WIDTH             (8U)
#define UOTG_HWTXBUF_TXCHANADD(x)                (((uint32_t)(((uint32_t)(x)) << UOTG_HWTXBUF_TXCHANADD_SHIFT)) & UOTG_HWTXBUF_TXCHANADD_MASK)
/*! @} */

/*! @name HWRXBUF - RX Buffer Hardware Parameters */
/*! @{ */

#define UOTG_HWRXBUF_RXBURST_MASK                (0xFFU)
#define UOTG_HWRXBUF_RXBURST_SHIFT               (0U)
#define UOTG_HWRXBUF_RXBURST_WIDTH               (8U)
#define UOTG_HWRXBUF_RXBURST(x)                  (((uint32_t)(((uint32_t)(x)) << UOTG_HWRXBUF_RXBURST_SHIFT)) & UOTG_HWRXBUF_RXBURST_MASK)

#define UOTG_HWRXBUF_RXADD_MASK                  (0xFF00U)
#define UOTG_HWRXBUF_RXADD_SHIFT                 (8U)
#define UOTG_HWRXBUF_RXADD_WIDTH                 (8U)
#define UOTG_HWRXBUF_RXADD(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_HWRXBUF_RXADD_SHIFT)) & UOTG_HWRXBUF_RXADD_MASK)
/*! @} */

/*! @name GPTIMERLD - General Purpose Timer Load */
/*! @{ */

#define UOTG_GPTIMERLD_GPTLD_MASK                (0xFFFFFFU)
#define UOTG_GPTIMERLD_GPTLD_SHIFT               (0U)
#define UOTG_GPTIMERLD_GPTLD_WIDTH               (24U)
#define UOTG_GPTIMERLD_GPTLD(x)                  (((uint32_t)(((uint32_t)(x)) << UOTG_GPTIMERLD_GPTLD_SHIFT)) & UOTG_GPTIMERLD_GPTLD_MASK)
/*! @} */

/*! @name GPTIMERCTRL - General Purpose Timer Controller */
/*! @{ */

#define UOTG_GPTIMERCTRL_GPTCNT_MASK             (0xFFFFFFU)
#define UOTG_GPTIMERCTRL_GPTCNT_SHIFT            (0U)
#define UOTG_GPTIMERCTRL_GPTCNT_WIDTH            (24U)
#define UOTG_GPTIMERCTRL_GPTCNT(x)               (((uint32_t)(((uint32_t)(x)) << UOTG_GPTIMERCTRL_GPTCNT_SHIFT)) & UOTG_GPTIMERCTRL_GPTCNT_MASK)

#define UOTG_GPTIMERCTRL_GPTMODE_MASK            (0x1000000U)
#define UOTG_GPTIMERCTRL_GPTMODE_SHIFT           (24U)
#define UOTG_GPTIMERCTRL_GPTMODE_WIDTH           (1U)
#define UOTG_GPTIMERCTRL_GPTMODE(x)              (((uint32_t)(((uint32_t)(x)) << UOTG_GPTIMERCTRL_GPTMODE_SHIFT)) & UOTG_GPTIMERCTRL_GPTMODE_MASK)

#define UOTG_GPTIMERCTRL_GPTRST_MASK             (0x40000000U)
#define UOTG_GPTIMERCTRL_GPTRST_SHIFT            (30U)
#define UOTG_GPTIMERCTRL_GPTRST_WIDTH            (1U)
#define UOTG_GPTIMERCTRL_GPTRST(x)               (((uint32_t)(((uint32_t)(x)) << UOTG_GPTIMERCTRL_GPTRST_SHIFT)) & UOTG_GPTIMERCTRL_GPTRST_MASK)

#define UOTG_GPTIMERCTRL_GPTRUN_MASK             (0x80000000U)
#define UOTG_GPTIMERCTRL_GPTRUN_SHIFT            (31U)
#define UOTG_GPTIMERCTRL_GPTRUN_WIDTH            (1U)
#define UOTG_GPTIMERCTRL_GPTRUN(x)               (((uint32_t)(((uint32_t)(x)) << UOTG_GPTIMERCTRL_GPTRUN_SHIFT)) & UOTG_GPTIMERCTRL_GPTRUN_MASK)
/*! @} */

/*! @name SBUSCFG - System Bus Configuration */
/*! @{ */

#define UOTG_SBUSCFG_AHBBRST_MASK                (0x7U)
#define UOTG_SBUSCFG_AHBBRST_SHIFT               (0U)
#define UOTG_SBUSCFG_AHBBRST_WIDTH               (3U)
#define UOTG_SBUSCFG_AHBBRST(x)                  (((uint32_t)(((uint32_t)(x)) << UOTG_SBUSCFG_AHBBRST_SHIFT)) & UOTG_SBUSCFG_AHBBRST_MASK)

#define UOTG_SBUSCFG_BARD_MASK                   (0x38U)
#define UOTG_SBUSCFG_BARD_SHIFT                  (3U)
#define UOTG_SBUSCFG_BARD_WIDTH                  (3U)
#define UOTG_SBUSCFG_BARD(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_SBUSCFG_BARD_SHIFT)) & UOTG_SBUSCFG_BARD_MASK)

#define UOTG_SBUSCFG_BAWR_MASK                   (0x1C0U)
#define UOTG_SBUSCFG_BAWR_SHIFT                  (6U)
#define UOTG_SBUSCFG_BAWR_WIDTH                  (3U)
#define UOTG_SBUSCFG_BAWR(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_SBUSCFG_BAWR_SHIFT)) & UOTG_SBUSCFG_BAWR_MASK)
/*! @} */

/*! @name CAPLENGTH - Capability Register Length */
/*! @{ */

#define UOTG_CAPLENGTH_CAPLENGTH_MASK            (0xFFU)
#define UOTG_CAPLENGTH_CAPLENGTH_SHIFT           (0U)
#define UOTG_CAPLENGTH_CAPLENGTH_WIDTH           (8U)
#define UOTG_CAPLENGTH_CAPLENGTH(x)              (((uint8_t)(((uint8_t)(x)) << UOTG_CAPLENGTH_CAPLENGTH_SHIFT)) & UOTG_CAPLENGTH_CAPLENGTH_MASK)
/*! @} */

/*! @name HCIVERSION - Host Controller Interface Version */
/*! @{ */

#define UOTG_HCIVERSION_HCIVERSION_MASK          (0xFFFFU)
#define UOTG_HCIVERSION_HCIVERSION_SHIFT         (0U)
#define UOTG_HCIVERSION_HCIVERSION_WIDTH         (16U)
#define UOTG_HCIVERSION_HCIVERSION(x)            (((uint16_t)(((uint16_t)(x)) << UOTG_HCIVERSION_HCIVERSION_SHIFT)) & UOTG_HCIVERSION_HCIVERSION_MASK)
/*! @} */

/*! @name HCSPARAMS - Host Controller Structural Parameters */
/*! @{ */

#define UOTG_HCSPARAMS_N_PORTS_MASK              (0xFU)
#define UOTG_HCSPARAMS_N_PORTS_SHIFT             (0U)
#define UOTG_HCSPARAMS_N_PORTS_WIDTH             (4U)
#define UOTG_HCSPARAMS_N_PORTS(x)                (((uint32_t)(((uint32_t)(x)) << UOTG_HCSPARAMS_N_PORTS_SHIFT)) & UOTG_HCSPARAMS_N_PORTS_MASK)

#define UOTG_HCSPARAMS_PPC_MASK                  (0x10U)
#define UOTG_HCSPARAMS_PPC_SHIFT                 (4U)
#define UOTG_HCSPARAMS_PPC_WIDTH                 (1U)
#define UOTG_HCSPARAMS_PPC(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_HCSPARAMS_PPC_SHIFT)) & UOTG_HCSPARAMS_PPC_MASK)

#define UOTG_HCSPARAMS_N_PCC_MASK                (0xF00U)
#define UOTG_HCSPARAMS_N_PCC_SHIFT               (8U)
#define UOTG_HCSPARAMS_N_PCC_WIDTH               (4U)
#define UOTG_HCSPARAMS_N_PCC(x)                  (((uint32_t)(((uint32_t)(x)) << UOTG_HCSPARAMS_N_PCC_SHIFT)) & UOTG_HCSPARAMS_N_PCC_MASK)

#define UOTG_HCSPARAMS_N_CC_MASK                 (0xF000U)
#define UOTG_HCSPARAMS_N_CC_SHIFT                (12U)
#define UOTG_HCSPARAMS_N_CC_WIDTH                (4U)
#define UOTG_HCSPARAMS_N_CC(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_HCSPARAMS_N_CC_SHIFT)) & UOTG_HCSPARAMS_N_CC_MASK)

#define UOTG_HCSPARAMS_PI_MASK                   (0x10000U)
#define UOTG_HCSPARAMS_PI_SHIFT                  (16U)
#define UOTG_HCSPARAMS_PI_WIDTH                  (1U)
#define UOTG_HCSPARAMS_PI(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_HCSPARAMS_PI_SHIFT)) & UOTG_HCSPARAMS_PI_MASK)

#define UOTG_HCSPARAMS_N_PTT_MASK                (0xF00000U)
#define UOTG_HCSPARAMS_N_PTT_SHIFT               (20U)
#define UOTG_HCSPARAMS_N_PTT_WIDTH               (4U)
#define UOTG_HCSPARAMS_N_PTT(x)                  (((uint32_t)(((uint32_t)(x)) << UOTG_HCSPARAMS_N_PTT_SHIFT)) & UOTG_HCSPARAMS_N_PTT_MASK)

#define UOTG_HCSPARAMS_N_TT_MASK                 (0xF000000U)
#define UOTG_HCSPARAMS_N_TT_SHIFT                (24U)
#define UOTG_HCSPARAMS_N_TT_WIDTH                (4U)
#define UOTG_HCSPARAMS_N_TT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_HCSPARAMS_N_TT_SHIFT)) & UOTG_HCSPARAMS_N_TT_MASK)
/*! @} */

/*! @name HCCPARAMS - Host Controller Capability Parameters */
/*! @{ */

#define UOTG_HCCPARAMS_ADC_MASK                  (0x1U)
#define UOTG_HCCPARAMS_ADC_SHIFT                 (0U)
#define UOTG_HCCPARAMS_ADC_WIDTH                 (1U)
#define UOTG_HCCPARAMS_ADC(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_HCCPARAMS_ADC_SHIFT)) & UOTG_HCCPARAMS_ADC_MASK)

#define UOTG_HCCPARAMS_PFL_MASK                  (0x2U)
#define UOTG_HCCPARAMS_PFL_SHIFT                 (1U)
#define UOTG_HCCPARAMS_PFL_WIDTH                 (1U)
#define UOTG_HCCPARAMS_PFL(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_HCCPARAMS_PFL_SHIFT)) & UOTG_HCCPARAMS_PFL_MASK)

#define UOTG_HCCPARAMS_ASP_MASK                  (0x4U)
#define UOTG_HCCPARAMS_ASP_SHIFT                 (2U)
#define UOTG_HCCPARAMS_ASP_WIDTH                 (1U)
#define UOTG_HCCPARAMS_ASP(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_HCCPARAMS_ASP_SHIFT)) & UOTG_HCCPARAMS_ASP_MASK)

#define UOTG_HCCPARAMS_IST_MASK                  (0xF0U)
#define UOTG_HCCPARAMS_IST_SHIFT                 (4U)
#define UOTG_HCCPARAMS_IST_WIDTH                 (4U)
#define UOTG_HCCPARAMS_IST(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_HCCPARAMS_IST_SHIFT)) & UOTG_HCCPARAMS_IST_MASK)

#define UOTG_HCCPARAMS_EECP_MASK                 (0xFF00U)
#define UOTG_HCCPARAMS_EECP_SHIFT                (8U)
#define UOTG_HCCPARAMS_EECP_WIDTH                (8U)
#define UOTG_HCCPARAMS_EECP(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_HCCPARAMS_EECP_SHIFT)) & UOTG_HCCPARAMS_EECP_MASK)
/*! @} */

/*! @name DCIVERSION - Device Controller Interface Version */
/*! @{ */

#define UOTG_DCIVERSION_DCIFVER_MASK             (0xFFFFU)
#define UOTG_DCIVERSION_DCIFVER_SHIFT            (0U)
#define UOTG_DCIVERSION_DCIFVER_WIDTH            (16U)
#define UOTG_DCIVERSION_DCIFVER(x)               (((uint16_t)(((uint16_t)(x)) << UOTG_DCIVERSION_DCIFVER_SHIFT)) & UOTG_DCIVERSION_DCIFVER_MASK)
/*! @} */

/*! @name DCCPARAMS - Device Controller Capability Parameters */
/*! @{ */

#define UOTG_DCCPARAMS_DEN_MASK                  (0x3FU)
#define UOTG_DCCPARAMS_DEN_SHIFT                 (0U)
#define UOTG_DCCPARAMS_DEN_WIDTH                 (6U)
#define UOTG_DCCPARAMS_DEN(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_DCCPARAMS_DEN_SHIFT)) & UOTG_DCCPARAMS_DEN_MASK)

#define UOTG_DCCPARAMS_DC_MASK                   (0x80U)
#define UOTG_DCCPARAMS_DC_SHIFT                  (7U)
#define UOTG_DCCPARAMS_DC_WIDTH                  (1U)
#define UOTG_DCCPARAMS_DC(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_DCCPARAMS_DC_SHIFT)) & UOTG_DCCPARAMS_DC_MASK)

#define UOTG_DCCPARAMS_HC_MASK                   (0x100U)
#define UOTG_DCCPARAMS_HC_SHIFT                  (8U)
#define UOTG_DCCPARAMS_HC_WIDTH                  (1U)
#define UOTG_DCCPARAMS_HC(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_DCCPARAMS_HC_SHIFT)) & UOTG_DCCPARAMS_HC_MASK)
/*! @} */

/*! @name USBCMD - USB Command */
/*! @{ */

#define UOTG_USBCMD_RS_MASK                      (0x1U)
#define UOTG_USBCMD_RS_SHIFT                     (0U)
#define UOTG_USBCMD_RS_WIDTH                     (1U)
#define UOTG_USBCMD_RS(x)                        (((uint32_t)(((uint32_t)(x)) << UOTG_USBCMD_RS_SHIFT)) & UOTG_USBCMD_RS_MASK)

#define UOTG_USBCMD_RST_MASK                     (0x2U)
#define UOTG_USBCMD_RST_SHIFT                    (1U)
#define UOTG_USBCMD_RST_WIDTH                    (1U)
#define UOTG_USBCMD_RST(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBCMD_RST_SHIFT)) & UOTG_USBCMD_RST_MASK)

#define UOTG_USBCMD_FS0_MASK                     (0xCU)
#define UOTG_USBCMD_FS0_SHIFT                    (2U)
#define UOTG_USBCMD_FS0_WIDTH                    (2U)
#define UOTG_USBCMD_FS0(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBCMD_FS0_SHIFT)) & UOTG_USBCMD_FS0_MASK)

#define UOTG_USBCMD_PSE_MASK                     (0x10U)
#define UOTG_USBCMD_PSE_SHIFT                    (4U)
#define UOTG_USBCMD_PSE_WIDTH                    (1U)
#define UOTG_USBCMD_PSE(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBCMD_PSE_SHIFT)) & UOTG_USBCMD_PSE_MASK)

#define UOTG_USBCMD_ASE_MASK                     (0x20U)
#define UOTG_USBCMD_ASE_SHIFT                    (5U)
#define UOTG_USBCMD_ASE_WIDTH                    (1U)
#define UOTG_USBCMD_ASE(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBCMD_ASE_SHIFT)) & UOTG_USBCMD_ASE_MASK)

#define UOTG_USBCMD_IAA_MASK                     (0x40U)
#define UOTG_USBCMD_IAA_SHIFT                    (6U)
#define UOTG_USBCMD_IAA_WIDTH                    (1U)
#define UOTG_USBCMD_IAA(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBCMD_IAA_SHIFT)) & UOTG_USBCMD_IAA_MASK)

#define UOTG_USBCMD_ASP_MASK                     (0x300U)
#define UOTG_USBCMD_ASP_SHIFT                    (8U)
#define UOTG_USBCMD_ASP_WIDTH                    (2U)
#define UOTG_USBCMD_ASP(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBCMD_ASP_SHIFT)) & UOTG_USBCMD_ASP_MASK)

#define UOTG_USBCMD_ASPE_MASK                    (0x800U)
#define UOTG_USBCMD_ASPE_SHIFT                   (11U)
#define UOTG_USBCMD_ASPE_WIDTH                   (1U)
#define UOTG_USBCMD_ASPE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBCMD_ASPE_SHIFT)) & UOTG_USBCMD_ASPE_MASK)

#define UOTG_USBCMD_SUTW_MASK                    (0x2000U)
#define UOTG_USBCMD_SUTW_SHIFT                   (13U)
#define UOTG_USBCMD_SUTW_WIDTH                   (1U)
#define UOTG_USBCMD_SUTW(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBCMD_SUTW_SHIFT)) & UOTG_USBCMD_SUTW_MASK)

#define UOTG_USBCMD_ATDTW_MASK                   (0x4000U)
#define UOTG_USBCMD_ATDTW_SHIFT                  (14U)
#define UOTG_USBCMD_ATDTW_WIDTH                  (1U)
#define UOTG_USBCMD_ATDTW(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_USBCMD_ATDTW_SHIFT)) & UOTG_USBCMD_ATDTW_MASK)

#define UOTG_USBCMD_FS1_MASK                     (0x8000U)
#define UOTG_USBCMD_FS1_SHIFT                    (15U)
#define UOTG_USBCMD_FS1_WIDTH                    (1U)
#define UOTG_USBCMD_FS1(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBCMD_FS1_SHIFT)) & UOTG_USBCMD_FS1_MASK)

#define UOTG_USBCMD_ITC_MASK                     (0xFF0000U)
#define UOTG_USBCMD_ITC_SHIFT                    (16U)
#define UOTG_USBCMD_ITC_WIDTH                    (8U)
#define UOTG_USBCMD_ITC(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBCMD_ITC_SHIFT)) & UOTG_USBCMD_ITC_MASK)
/*! @} */

/*! @name USBSTS - USB Status */
/*! @{ */

#define UOTG_USBSTS_UI_MASK                      (0x1U)
#define UOTG_USBSTS_UI_SHIFT                     (0U)
#define UOTG_USBSTS_UI_WIDTH                     (1U)
#define UOTG_USBSTS_UI(x)                        (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_UI_SHIFT)) & UOTG_USBSTS_UI_MASK)

#define UOTG_USBSTS_UEI_MASK                     (0x2U)
#define UOTG_USBSTS_UEI_SHIFT                    (1U)
#define UOTG_USBSTS_UEI_WIDTH                    (1U)
#define UOTG_USBSTS_UEI(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_UEI_SHIFT)) & UOTG_USBSTS_UEI_MASK)

#define UOTG_USBSTS_PCI_MASK                     (0x4U)
#define UOTG_USBSTS_PCI_SHIFT                    (2U)
#define UOTG_USBSTS_PCI_WIDTH                    (1U)
#define UOTG_USBSTS_PCI(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_PCI_SHIFT)) & UOTG_USBSTS_PCI_MASK)

#define UOTG_USBSTS_FRI_MASK                     (0x8U)
#define UOTG_USBSTS_FRI_SHIFT                    (3U)
#define UOTG_USBSTS_FRI_WIDTH                    (1U)
#define UOTG_USBSTS_FRI(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_FRI_SHIFT)) & UOTG_USBSTS_FRI_MASK)

#define UOTG_USBSTS_SEI_MASK                     (0x10U)
#define UOTG_USBSTS_SEI_SHIFT                    (4U)
#define UOTG_USBSTS_SEI_WIDTH                    (1U)
#define UOTG_USBSTS_SEI(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_SEI_SHIFT)) & UOTG_USBSTS_SEI_MASK)

#define UOTG_USBSTS_AAI_MASK                     (0x20U)
#define UOTG_USBSTS_AAI_SHIFT                    (5U)
#define UOTG_USBSTS_AAI_WIDTH                    (1U)
#define UOTG_USBSTS_AAI(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_AAI_SHIFT)) & UOTG_USBSTS_AAI_MASK)

#define UOTG_USBSTS_URI_MASK                     (0x40U)
#define UOTG_USBSTS_URI_SHIFT                    (6U)
#define UOTG_USBSTS_URI_WIDTH                    (1U)
#define UOTG_USBSTS_URI(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_URI_SHIFT)) & UOTG_USBSTS_URI_MASK)

#define UOTG_USBSTS_SRI_MASK                     (0x80U)
#define UOTG_USBSTS_SRI_SHIFT                    (7U)
#define UOTG_USBSTS_SRI_WIDTH                    (1U)
#define UOTG_USBSTS_SRI(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_SRI_SHIFT)) & UOTG_USBSTS_SRI_MASK)

#define UOTG_USBSTS_SLI_MASK                     (0x100U)
#define UOTG_USBSTS_SLI_SHIFT                    (8U)
#define UOTG_USBSTS_SLI_WIDTH                    (1U)
#define UOTG_USBSTS_SLI(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_SLI_SHIFT)) & UOTG_USBSTS_SLI_MASK)

#define UOTG_USBSTS_ULPII_MASK                   (0x400U)
#define UOTG_USBSTS_ULPII_SHIFT                  (10U)
#define UOTG_USBSTS_ULPII_WIDTH                  (1U)
#define UOTG_USBSTS_ULPII(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_ULPII_SHIFT)) & UOTG_USBSTS_ULPII_MASK)

#define UOTG_USBSTS_UALTI_MASK                   (0x800U)
#define UOTG_USBSTS_UALTI_SHIFT                  (11U)
#define UOTG_USBSTS_UALTI_WIDTH                  (1U)
#define UOTG_USBSTS_UALTI(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_UALTI_SHIFT)) & UOTG_USBSTS_UALTI_MASK)

#define UOTG_USBSTS_HCH_MASK                     (0x1000U)
#define UOTG_USBSTS_HCH_SHIFT                    (12U)
#define UOTG_USBSTS_HCH_WIDTH                    (1U)
#define UOTG_USBSTS_HCH(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_HCH_SHIFT)) & UOTG_USBSTS_HCH_MASK)

#define UOTG_USBSTS_RCL_MASK                     (0x2000U)
#define UOTG_USBSTS_RCL_SHIFT                    (13U)
#define UOTG_USBSTS_RCL_WIDTH                    (1U)
#define UOTG_USBSTS_RCL(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_RCL_SHIFT)) & UOTG_USBSTS_RCL_MASK)

#define UOTG_USBSTS_PS_MASK                      (0x4000U)
#define UOTG_USBSTS_PS_SHIFT                     (14U)
#define UOTG_USBSTS_PS_WIDTH                     (1U)
#define UOTG_USBSTS_PS(x)                        (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_PS_SHIFT)) & UOTG_USBSTS_PS_MASK)

#define UOTG_USBSTS_AS_MASK                      (0x8000U)
#define UOTG_USBSTS_AS_SHIFT                     (15U)
#define UOTG_USBSTS_AS_WIDTH                     (1U)
#define UOTG_USBSTS_AS(x)                        (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_AS_SHIFT)) & UOTG_USBSTS_AS_MASK)

#define UOTG_USBSTS_NAKI_MASK                    (0x10000U)
#define UOTG_USBSTS_NAKI_SHIFT                   (16U)
#define UOTG_USBSTS_NAKI_WIDTH                   (1U)
#define UOTG_USBSTS_NAKI(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_NAKI_SHIFT)) & UOTG_USBSTS_NAKI_MASK)

#define UOTG_USBSTS_UAI_MASK                     (0x40000U)
#define UOTG_USBSTS_UAI_SHIFT                    (18U)
#define UOTG_USBSTS_UAI_WIDTH                    (1U)
#define UOTG_USBSTS_UAI(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_UAI_SHIFT)) & UOTG_USBSTS_UAI_MASK)

#define UOTG_USBSTS_UPI_MASK                     (0x80000U)
#define UOTG_USBSTS_UPI_SHIFT                    (19U)
#define UOTG_USBSTS_UPI_WIDTH                    (1U)
#define UOTG_USBSTS_UPI(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_UPI_SHIFT)) & UOTG_USBSTS_UPI_MASK)

#define UOTG_USBSTS_TI0_MASK                     (0x1000000U)
#define UOTG_USBSTS_TI0_SHIFT                    (24U)
#define UOTG_USBSTS_TI0_WIDTH                    (1U)
#define UOTG_USBSTS_TI0(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_TI0_SHIFT)) & UOTG_USBSTS_TI0_MASK)

#define UOTG_USBSTS_TI1_MASK                     (0x2000000U)
#define UOTG_USBSTS_TI1_SHIFT                    (25U)
#define UOTG_USBSTS_TI1_WIDTH                    (1U)
#define UOTG_USBSTS_TI1(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBSTS_TI1_SHIFT)) & UOTG_USBSTS_TI1_MASK)
/*! @} */

/*! @name USBINTR - Interrupt Enable */
/*! @{ */

#define UOTG_USBINTR_UE_MASK                     (0x1U)
#define UOTG_USBINTR_UE_SHIFT                    (0U)
#define UOTG_USBINTR_UE_WIDTH                    (1U)
#define UOTG_USBINTR_UE(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_UE_SHIFT)) & UOTG_USBINTR_UE_MASK)

#define UOTG_USBINTR_UEE_MASK                    (0x2U)
#define UOTG_USBINTR_UEE_SHIFT                   (1U)
#define UOTG_USBINTR_UEE_WIDTH                   (1U)
#define UOTG_USBINTR_UEE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_UEE_SHIFT)) & UOTG_USBINTR_UEE_MASK)

#define UOTG_USBINTR_PCE_MASK                    (0x4U)
#define UOTG_USBINTR_PCE_SHIFT                   (2U)
#define UOTG_USBINTR_PCE_WIDTH                   (1U)
#define UOTG_USBINTR_PCE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_PCE_SHIFT)) & UOTG_USBINTR_PCE_MASK)

#define UOTG_USBINTR_FRE_MASK                    (0x8U)
#define UOTG_USBINTR_FRE_SHIFT                   (3U)
#define UOTG_USBINTR_FRE_WIDTH                   (1U)
#define UOTG_USBINTR_FRE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_FRE_SHIFT)) & UOTG_USBINTR_FRE_MASK)

#define UOTG_USBINTR_SEE_MASK                    (0x10U)
#define UOTG_USBINTR_SEE_SHIFT                   (4U)
#define UOTG_USBINTR_SEE_WIDTH                   (1U)
#define UOTG_USBINTR_SEE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_SEE_SHIFT)) & UOTG_USBINTR_SEE_MASK)

#define UOTG_USBINTR_AAE_MASK                    (0x20U)
#define UOTG_USBINTR_AAE_SHIFT                   (5U)
#define UOTG_USBINTR_AAE_WIDTH                   (1U)
#define UOTG_USBINTR_AAE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_AAE_SHIFT)) & UOTG_USBINTR_AAE_MASK)

#define UOTG_USBINTR_URE_MASK                    (0x40U)
#define UOTG_USBINTR_URE_SHIFT                   (6U)
#define UOTG_USBINTR_URE_WIDTH                   (1U)
#define UOTG_USBINTR_URE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_URE_SHIFT)) & UOTG_USBINTR_URE_MASK)

#define UOTG_USBINTR_SRE_MASK                    (0x80U)
#define UOTG_USBINTR_SRE_SHIFT                   (7U)
#define UOTG_USBINTR_SRE_WIDTH                   (1U)
#define UOTG_USBINTR_SRE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_SRE_SHIFT)) & UOTG_USBINTR_SRE_MASK)

#define UOTG_USBINTR_SLE_MASK                    (0x100U)
#define UOTG_USBINTR_SLE_SHIFT                   (8U)
#define UOTG_USBINTR_SLE_WIDTH                   (1U)
#define UOTG_USBINTR_SLE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_SLE_SHIFT)) & UOTG_USBINTR_SLE_MASK)

#define UOTG_USBINTR_ULPIE_MASK                  (0x400U)
#define UOTG_USBINTR_ULPIE_SHIFT                 (10U)
#define UOTG_USBINTR_ULPIE_WIDTH                 (1U)
#define UOTG_USBINTR_ULPIE(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_ULPIE_SHIFT)) & UOTG_USBINTR_ULPIE_MASK)

#define UOTG_USBINTR_NAKE_MASK                   (0x10000U)
#define UOTG_USBINTR_NAKE_SHIFT                  (16U)
#define UOTG_USBINTR_NAKE_WIDTH                  (1U)
#define UOTG_USBINTR_NAKE(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_NAKE_SHIFT)) & UOTG_USBINTR_NAKE_MASK)

#define UOTG_USBINTR_UAIE_MASK                   (0x40000U)
#define UOTG_USBINTR_UAIE_SHIFT                  (18U)
#define UOTG_USBINTR_UAIE_WIDTH                  (1U)
#define UOTG_USBINTR_UAIE(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_UAIE_SHIFT)) & UOTG_USBINTR_UAIE_MASK)

#define UOTG_USBINTR_UPIE_MASK                   (0x80000U)
#define UOTG_USBINTR_UPIE_SHIFT                  (19U)
#define UOTG_USBINTR_UPIE_WIDTH                  (1U)
#define UOTG_USBINTR_UPIE(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_UPIE_SHIFT)) & UOTG_USBINTR_UPIE_MASK)

#define UOTG_USBINTR_TIE0_MASK                   (0x1000000U)
#define UOTG_USBINTR_TIE0_SHIFT                  (24U)
#define UOTG_USBINTR_TIE0_WIDTH                  (1U)
#define UOTG_USBINTR_TIE0(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_TIE0_SHIFT)) & UOTG_USBINTR_TIE0_MASK)

#define UOTG_USBINTR_TIE1_MASK                   (0x2000000U)
#define UOTG_USBINTR_TIE1_SHIFT                  (25U)
#define UOTG_USBINTR_TIE1_WIDTH                  (1U)
#define UOTG_USBINTR_TIE1(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_USBINTR_TIE1_SHIFT)) & UOTG_USBINTR_TIE1_MASK)
/*! @} */

/*! @name FRINDEX - USB Frame Index */
/*! @{ */

#define UOTG_FRINDEX_FRINDEX_MASK                (0x3FFFU)
#define UOTG_FRINDEX_FRINDEX_SHIFT               (0U)
#define UOTG_FRINDEX_FRINDEX_WIDTH               (14U)
#define UOTG_FRINDEX_FRINDEX(x)                  (((uint32_t)(((uint32_t)(x)) << UOTG_FRINDEX_FRINDEX_SHIFT)) & UOTG_FRINDEX_FRINDEX_MASK)
/*! @} */

/*! @name PERIODICLISTBASE_OR_DEVICEADDR - Frame List Base Address or Device Address */
/*! @{ */

#define UOTG_PERIODICLISTBASE_OR_DEVICEADDR_PERBASE_MASK (0xFFF000U)
#define UOTG_PERIODICLISTBASE_OR_DEVICEADDR_PERBASE_SHIFT (12U)
#define UOTG_PERIODICLISTBASE_OR_DEVICEADDR_PERBASE_WIDTH (12U)
#define UOTG_PERIODICLISTBASE_OR_DEVICEADDR_PERBASE(x) (((uint32_t)(((uint32_t)(x)) << UOTG_PERIODICLISTBASE_OR_DEVICEADDR_PERBASE_SHIFT)) & UOTG_PERIODICLISTBASE_OR_DEVICEADDR_PERBASE_MASK)

#define UOTG_PERIODICLISTBASE_OR_DEVICEADDR_USBADDRA_MASK (0x1000000U)
#define UOTG_PERIODICLISTBASE_OR_DEVICEADDR_USBADDRA_SHIFT (24U)
#define UOTG_PERIODICLISTBASE_OR_DEVICEADDR_USBADDRA_WIDTH (1U)
#define UOTG_PERIODICLISTBASE_OR_DEVICEADDR_USBADDRA(x) (((uint32_t)(((uint32_t)(x)) << UOTG_PERIODICLISTBASE_OR_DEVICEADDR_USBADDRA_SHIFT)) & UOTG_PERIODICLISTBASE_OR_DEVICEADDR_USBADDRA_MASK)

#define UOTG_PERIODICLISTBASE_OR_DEVICEADDR_USBADR_or_PERBASE_MASK (0xFE000000U)
#define UOTG_PERIODICLISTBASE_OR_DEVICEADDR_USBADR_or_PERBASE_SHIFT (25U)
#define UOTG_PERIODICLISTBASE_OR_DEVICEADDR_USBADR_or_PERBASE_WIDTH (7U)
#define UOTG_PERIODICLISTBASE_OR_DEVICEADDR_USBADR_or_PERBASE(x) (((uint32_t)(((uint32_t)(x)) << UOTG_PERIODICLISTBASE_OR_DEVICEADDR_USBADR_or_PERBASE_SHIFT)) & UOTG_PERIODICLISTBASE_OR_DEVICEADDR_USBADR_or_PERBASE_MASK)
/*! @} */

/*! @name ASYNCLISTADDR_OR_ENDPOINTLISTADDR - Next Asynchronous Address or Endpoint List Address */
/*! @{ */

#define UOTG_ASYNCLISTADDR_OR_ENDPOINTLISTADDR_ASYBASE_or_RESERVED_MASK (0x7E0U)
#define UOTG_ASYNCLISTADDR_OR_ENDPOINTLISTADDR_ASYBASE_or_RESERVED_SHIFT (5U)
#define UOTG_ASYNCLISTADDR_OR_ENDPOINTLISTADDR_ASYBASE_or_RESERVED_WIDTH (6U)
#define UOTG_ASYNCLISTADDR_OR_ENDPOINTLISTADDR_ASYBASE_or_RESERVED(x) (((uint32_t)(((uint32_t)(x)) << UOTG_ASYNCLISTADDR_OR_ENDPOINTLISTADDR_ASYBASE_or_RESERVED_SHIFT)) & UOTG_ASYNCLISTADDR_OR_ENDPOINTLISTADDR_ASYBASE_or_RESERVED_MASK)

#define UOTG_ASYNCLISTADDR_OR_ENDPOINTLISTADDR_EPBASE_or_ASYBASE_MASK (0xFFFFF800U)
#define UOTG_ASYNCLISTADDR_OR_ENDPOINTLISTADDR_EPBASE_or_ASYBASE_SHIFT (11U)
#define UOTG_ASYNCLISTADDR_OR_ENDPOINTLISTADDR_EPBASE_or_ASYBASE_WIDTH (21U)
#define UOTG_ASYNCLISTADDR_OR_ENDPOINTLISTADDR_EPBASE_or_ASYBASE(x) (((uint32_t)(((uint32_t)(x)) << UOTG_ASYNCLISTADDR_OR_ENDPOINTLISTADDR_EPBASE_or_ASYBASE_SHIFT)) & UOTG_ASYNCLISTADDR_OR_ENDPOINTLISTADDR_EPBASE_or_ASYBASE_MASK)
/*! @} */

/*! @name BURSTSIZE - Programmable Burst Size */
/*! @{ */

#define UOTG_BURSTSIZE_RXPBURST_MASK             (0xFFU)
#define UOTG_BURSTSIZE_RXPBURST_SHIFT            (0U)
#define UOTG_BURSTSIZE_RXPBURST_WIDTH            (8U)
#define UOTG_BURSTSIZE_RXPBURST(x)               (((uint32_t)(((uint32_t)(x)) << UOTG_BURSTSIZE_RXPBURST_SHIFT)) & UOTG_BURSTSIZE_RXPBURST_MASK)

#define UOTG_BURSTSIZE_TXPBURST_MASK             (0xFF00U)
#define UOTG_BURSTSIZE_TXPBURST_SHIFT            (8U)
#define UOTG_BURSTSIZE_TXPBURST_WIDTH            (8U)
#define UOTG_BURSTSIZE_TXPBURST(x)               (((uint32_t)(((uint32_t)(x)) << UOTG_BURSTSIZE_TXPBURST_SHIFT)) & UOTG_BURSTSIZE_TXPBURST_MASK)
/*! @} */

/*! @name TXFILLTUNING - TX FIFO Fill Tuning */
/*! @{ */

#define UOTG_TXFILLTUNING_TXSCHOH_MASK           (0x7FU)
#define UOTG_TXFILLTUNING_TXSCHOH_SHIFT          (0U)
#define UOTG_TXFILLTUNING_TXSCHOH_WIDTH          (7U)
#define UOTG_TXFILLTUNING_TXSCHOH(x)             (((uint32_t)(((uint32_t)(x)) << UOTG_TXFILLTUNING_TXSCHOH_SHIFT)) & UOTG_TXFILLTUNING_TXSCHOH_MASK)

#define UOTG_TXFILLTUNING_TXSCHHEALTH_MASK       (0x1F00U)
#define UOTG_TXFILLTUNING_TXSCHHEALTH_SHIFT      (8U)
#define UOTG_TXFILLTUNING_TXSCHHEALTH_WIDTH      (5U)
#define UOTG_TXFILLTUNING_TXSCHHEALTH(x)         (((uint32_t)(((uint32_t)(x)) << UOTG_TXFILLTUNING_TXSCHHEALTH_SHIFT)) & UOTG_TXFILLTUNING_TXSCHHEALTH_MASK)

#define UOTG_TXFILLTUNING_TXFIFOTHRES_MASK       (0x3F0000U)
#define UOTG_TXFILLTUNING_TXFIFOTHRES_SHIFT      (16U)
#define UOTG_TXFILLTUNING_TXFIFOTHRES_WIDTH      (6U)
#define UOTG_TXFILLTUNING_TXFIFOTHRES(x)         (((uint32_t)(((uint32_t)(x)) << UOTG_TXFILLTUNING_TXFIFOTHRES_SHIFT)) & UOTG_TXFILLTUNING_TXFIFOTHRES_MASK)
/*! @} */

/*! @name IC_USB - IC_USB Enable and Voltage Negotiation */
/*! @{ */

#define UOTG_IC_USB_IC_VDD1_MASK                 (0x7U)
#define UOTG_IC_USB_IC_VDD1_SHIFT                (0U)
#define UOTG_IC_USB_IC_VDD1_WIDTH                (3U)
#define UOTG_IC_USB_IC_VDD1(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_IC_USB_IC_VDD1_SHIFT)) & UOTG_IC_USB_IC_VDD1_MASK)

#define UOTG_IC_USB_IC1_MASK                     (0x8U)
#define UOTG_IC_USB_IC1_SHIFT                    (3U)
#define UOTG_IC_USB_IC1_WIDTH                    (1U)
#define UOTG_IC_USB_IC1(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_IC_USB_IC1_SHIFT)) & UOTG_IC_USB_IC1_MASK)
/*! @} */

/*! @name ULPI_VIEWPORT - ULPI Register Access */
/*! @{ */

#define UOTG_ULPI_VIEWPORT_ULPI_DATWR_MASK       (0xFFU)
#define UOTG_ULPI_VIEWPORT_ULPI_DATWR_SHIFT      (0U)
#define UOTG_ULPI_VIEWPORT_ULPI_DATWR_WIDTH      (8U)
#define UOTG_ULPI_VIEWPORT_ULPI_DATWR(x)         (((uint32_t)(((uint32_t)(x)) << UOTG_ULPI_VIEWPORT_ULPI_DATWR_SHIFT)) & UOTG_ULPI_VIEWPORT_ULPI_DATWR_MASK)

#define UOTG_ULPI_VIEWPORT_ULPI_DATRD_MASK       (0xFF00U)
#define UOTG_ULPI_VIEWPORT_ULPI_DATRD_SHIFT      (8U)
#define UOTG_ULPI_VIEWPORT_ULPI_DATRD_WIDTH      (8U)
#define UOTG_ULPI_VIEWPORT_ULPI_DATRD(x)         (((uint32_t)(((uint32_t)(x)) << UOTG_ULPI_VIEWPORT_ULPI_DATRD_SHIFT)) & UOTG_ULPI_VIEWPORT_ULPI_DATRD_MASK)

#define UOTG_ULPI_VIEWPORT_ULPI_ADDR_MASK        (0xFF0000U)
#define UOTG_ULPI_VIEWPORT_ULPI_ADDR_SHIFT       (16U)
#define UOTG_ULPI_VIEWPORT_ULPI_ADDR_WIDTH       (8U)
#define UOTG_ULPI_VIEWPORT_ULPI_ADDR(x)          (((uint32_t)(((uint32_t)(x)) << UOTG_ULPI_VIEWPORT_ULPI_ADDR_SHIFT)) & UOTG_ULPI_VIEWPORT_ULPI_ADDR_MASK)

#define UOTG_ULPI_VIEWPORT_ULPI_PORT_MASK        (0x7000000U)
#define UOTG_ULPI_VIEWPORT_ULPI_PORT_SHIFT       (24U)
#define UOTG_ULPI_VIEWPORT_ULPI_PORT_WIDTH       (3U)
#define UOTG_ULPI_VIEWPORT_ULPI_PORT(x)          (((uint32_t)(((uint32_t)(x)) << UOTG_ULPI_VIEWPORT_ULPI_PORT_SHIFT)) & UOTG_ULPI_VIEWPORT_ULPI_PORT_MASK)

#define UOTG_ULPI_VIEWPORT_ULPI_SS_MASK          (0x8000000U)
#define UOTG_ULPI_VIEWPORT_ULPI_SS_SHIFT         (27U)
#define UOTG_ULPI_VIEWPORT_ULPI_SS_WIDTH         (1U)
#define UOTG_ULPI_VIEWPORT_ULPI_SS(x)            (((uint32_t)(((uint32_t)(x)) << UOTG_ULPI_VIEWPORT_ULPI_SS_SHIFT)) & UOTG_ULPI_VIEWPORT_ULPI_SS_MASK)

#define UOTG_ULPI_VIEWPORT_ULPI_RW_MASK          (0x20000000U)
#define UOTG_ULPI_VIEWPORT_ULPI_RW_SHIFT         (29U)
#define UOTG_ULPI_VIEWPORT_ULPI_RW_WIDTH         (1U)
#define UOTG_ULPI_VIEWPORT_ULPI_RW(x)            (((uint32_t)(((uint32_t)(x)) << UOTG_ULPI_VIEWPORT_ULPI_RW_SHIFT)) & UOTG_ULPI_VIEWPORT_ULPI_RW_MASK)

#define UOTG_ULPI_VIEWPORT_ULPI_RUN_MASK         (0x40000000U)
#define UOTG_ULPI_VIEWPORT_ULPI_RUN_SHIFT        (30U)
#define UOTG_ULPI_VIEWPORT_ULPI_RUN_WIDTH        (1U)
#define UOTG_ULPI_VIEWPORT_ULPI_RUN(x)           (((uint32_t)(((uint32_t)(x)) << UOTG_ULPI_VIEWPORT_ULPI_RUN_SHIFT)) & UOTG_ULPI_VIEWPORT_ULPI_RUN_MASK)

#define UOTG_ULPI_VIEWPORT_ULPI_WU_MASK          (0x80000000U)
#define UOTG_ULPI_VIEWPORT_ULPI_WU_SHIFT         (31U)
#define UOTG_ULPI_VIEWPORT_ULPI_WU_WIDTH         (1U)
#define UOTG_ULPI_VIEWPORT_ULPI_WU(x)            (((uint32_t)(((uint32_t)(x)) << UOTG_ULPI_VIEWPORT_ULPI_WU_SHIFT)) & UOTG_ULPI_VIEWPORT_ULPI_WU_MASK)
/*! @} */

/*! @name ENDPTNAK - Endpoint NAK */
/*! @{ */

#define UOTG_ENDPTNAK_EPRN_MASK                  (0x3FU)
#define UOTG_ENDPTNAK_EPRN_SHIFT                 (0U)
#define UOTG_ENDPTNAK_EPRN_WIDTH                 (6U)
#define UOTG_ENDPTNAK_EPRN(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTNAK_EPRN_SHIFT)) & UOTG_ENDPTNAK_EPRN_MASK)

#define UOTG_ENDPTNAK_EPTN_MASK                  (0x3F0000U)
#define UOTG_ENDPTNAK_EPTN_SHIFT                 (16U)
#define UOTG_ENDPTNAK_EPTN_WIDTH                 (6U)
#define UOTG_ENDPTNAK_EPTN(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTNAK_EPTN_SHIFT)) & UOTG_ENDPTNAK_EPTN_MASK)
/*! @} */

/*! @name ENDPTNAKEN - Endpoint NAK Enable */
/*! @{ */

#define UOTG_ENDPTNAKEN_EPRNE_MASK               (0x3FU)
#define UOTG_ENDPTNAKEN_EPRNE_SHIFT              (0U)
#define UOTG_ENDPTNAKEN_EPRNE_WIDTH              (6U)
#define UOTG_ENDPTNAKEN_EPRNE(x)                 (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTNAKEN_EPRNE_SHIFT)) & UOTG_ENDPTNAKEN_EPRNE_MASK)

#define UOTG_ENDPTNAKEN_EPTNE_MASK               (0x3F0000U)
#define UOTG_ENDPTNAKEN_EPTNE_SHIFT              (16U)
#define UOTG_ENDPTNAKEN_EPTNE_WIDTH              (6U)
#define UOTG_ENDPTNAKEN_EPTNE(x)                 (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTNAKEN_EPTNE_SHIFT)) & UOTG_ENDPTNAKEN_EPTNE_MASK)
/*! @} */

/*! @name PORTSC1 - Port Status and Control */
/*! @{ */

#define UOTG_PORTSC1_CCS_MASK                    (0x1U)
#define UOTG_PORTSC1_CCS_SHIFT                   (0U)
#define UOTG_PORTSC1_CCS_WIDTH                   (1U)
#define UOTG_PORTSC1_CCS(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_CCS_SHIFT)) & UOTG_PORTSC1_CCS_MASK)

#define UOTG_PORTSC1_CSC_MASK                    (0x2U)
#define UOTG_PORTSC1_CSC_SHIFT                   (1U)
#define UOTG_PORTSC1_CSC_WIDTH                   (1U)
#define UOTG_PORTSC1_CSC(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_CSC_SHIFT)) & UOTG_PORTSC1_CSC_MASK)

#define UOTG_PORTSC1_PE_MASK                     (0x4U)
#define UOTG_PORTSC1_PE_SHIFT                    (2U)
#define UOTG_PORTSC1_PE_WIDTH                    (1U)
#define UOTG_PORTSC1_PE(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PE_SHIFT)) & UOTG_PORTSC1_PE_MASK)

#define UOTG_PORTSC1_PEC_MASK                    (0x8U)
#define UOTG_PORTSC1_PEC_SHIFT                   (3U)
#define UOTG_PORTSC1_PEC_WIDTH                   (1U)
#define UOTG_PORTSC1_PEC(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PEC_SHIFT)) & UOTG_PORTSC1_PEC_MASK)

#define UOTG_PORTSC1_OCA_MASK                    (0x10U)
#define UOTG_PORTSC1_OCA_SHIFT                   (4U)
#define UOTG_PORTSC1_OCA_WIDTH                   (1U)
#define UOTG_PORTSC1_OCA(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_OCA_SHIFT)) & UOTG_PORTSC1_OCA_MASK)

#define UOTG_PORTSC1_OCC_MASK                    (0x20U)
#define UOTG_PORTSC1_OCC_SHIFT                   (5U)
#define UOTG_PORTSC1_OCC_WIDTH                   (1U)
#define UOTG_PORTSC1_OCC(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_OCC_SHIFT)) & UOTG_PORTSC1_OCC_MASK)

#define UOTG_PORTSC1_FPR_MASK                    (0x40U)
#define UOTG_PORTSC1_FPR_SHIFT                   (6U)
#define UOTG_PORTSC1_FPR_WIDTH                   (1U)
#define UOTG_PORTSC1_FPR(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_FPR_SHIFT)) & UOTG_PORTSC1_FPR_MASK)

#define UOTG_PORTSC1_SUSP_MASK                   (0x80U)
#define UOTG_PORTSC1_SUSP_SHIFT                  (7U)
#define UOTG_PORTSC1_SUSP_WIDTH                  (1U)
#define UOTG_PORTSC1_SUSP(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_SUSP_SHIFT)) & UOTG_PORTSC1_SUSP_MASK)

#define UOTG_PORTSC1_PR_MASK                     (0x100U)
#define UOTG_PORTSC1_PR_SHIFT                    (8U)
#define UOTG_PORTSC1_PR_WIDTH                    (1U)
#define UOTG_PORTSC1_PR(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PR_SHIFT)) & UOTG_PORTSC1_PR_MASK)

#define UOTG_PORTSC1_HSP_MASK                    (0x200U)
#define UOTG_PORTSC1_HSP_SHIFT                   (9U)
#define UOTG_PORTSC1_HSP_WIDTH                   (1U)
#define UOTG_PORTSC1_HSP(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_HSP_SHIFT)) & UOTG_PORTSC1_HSP_MASK)

#define UOTG_PORTSC1_LS_MASK                     (0xC00U)
#define UOTG_PORTSC1_LS_SHIFT                    (10U)
#define UOTG_PORTSC1_LS_WIDTH                    (2U)
#define UOTG_PORTSC1_LS(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_LS_SHIFT)) & UOTG_PORTSC1_LS_MASK)

#define UOTG_PORTSC1_PP_MASK                     (0x1000U)
#define UOTG_PORTSC1_PP_SHIFT                    (12U)
#define UOTG_PORTSC1_PP_WIDTH                    (1U)
#define UOTG_PORTSC1_PP(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PP_SHIFT)) & UOTG_PORTSC1_PP_MASK)

#define UOTG_PORTSC1_PO_MASK                     (0x2000U)
#define UOTG_PORTSC1_PO_SHIFT                    (13U)
#define UOTG_PORTSC1_PO_WIDTH                    (1U)
#define UOTG_PORTSC1_PO(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PO_SHIFT)) & UOTG_PORTSC1_PO_MASK)

#define UOTG_PORTSC1_PIC_MASK                    (0xC000U)
#define UOTG_PORTSC1_PIC_SHIFT                   (14U)
#define UOTG_PORTSC1_PIC_WIDTH                   (2U)
#define UOTG_PORTSC1_PIC(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PIC_SHIFT)) & UOTG_PORTSC1_PIC_MASK)

#define UOTG_PORTSC1_PTC_MASK                    (0xF0000U)
#define UOTG_PORTSC1_PTC_SHIFT                   (16U)
#define UOTG_PORTSC1_PTC_WIDTH                   (4U)
#define UOTG_PORTSC1_PTC(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PTC_SHIFT)) & UOTG_PORTSC1_PTC_MASK)

#define UOTG_PORTSC1_WKCN_MASK                   (0x100000U)
#define UOTG_PORTSC1_WKCN_SHIFT                  (20U)
#define UOTG_PORTSC1_WKCN_WIDTH                  (1U)
#define UOTG_PORTSC1_WKCN(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_WKCN_SHIFT)) & UOTG_PORTSC1_WKCN_MASK)

#define UOTG_PORTSC1_WKDS_MASK                   (0x200000U)
#define UOTG_PORTSC1_WKDS_SHIFT                  (21U)
#define UOTG_PORTSC1_WKDS_WIDTH                  (1U)
#define UOTG_PORTSC1_WKDS(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_WKDS_SHIFT)) & UOTG_PORTSC1_WKDS_MASK)

#define UOTG_PORTSC1_WKOC_MASK                   (0x400000U)
#define UOTG_PORTSC1_WKOC_SHIFT                  (22U)
#define UOTG_PORTSC1_WKOC_WIDTH                  (1U)
#define UOTG_PORTSC1_WKOC(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_WKOC_SHIFT)) & UOTG_PORTSC1_WKOC_MASK)

#define UOTG_PORTSC1_PHCD_MASK                   (0x800000U)
#define UOTG_PORTSC1_PHCD_SHIFT                  (23U)
#define UOTG_PORTSC1_PHCD_WIDTH                  (1U)
#define UOTG_PORTSC1_PHCD(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PHCD_SHIFT)) & UOTG_PORTSC1_PHCD_MASK)

#define UOTG_PORTSC1_PFSC_MASK                   (0x1000000U)
#define UOTG_PORTSC1_PFSC_SHIFT                  (24U)
#define UOTG_PORTSC1_PFSC_WIDTH                  (1U)
#define UOTG_PORTSC1_PFSC(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PFSC_SHIFT)) & UOTG_PORTSC1_PFSC_MASK)

#define UOTG_PORTSC1_PTS0_MASK                   (0x2000000U)
#define UOTG_PORTSC1_PTS0_SHIFT                  (25U)
#define UOTG_PORTSC1_PTS0_WIDTH                  (1U)
#define UOTG_PORTSC1_PTS0(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PTS0_SHIFT)) & UOTG_PORTSC1_PTS0_MASK)

#define UOTG_PORTSC1_PSPD_MASK                   (0xC000000U)
#define UOTG_PORTSC1_PSPD_SHIFT                  (26U)
#define UOTG_PORTSC1_PSPD_WIDTH                  (2U)
#define UOTG_PORTSC1_PSPD(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PSPD_SHIFT)) & UOTG_PORTSC1_PSPD_MASK)

#define UOTG_PORTSC1_PTW_MASK                    (0x10000000U)
#define UOTG_PORTSC1_PTW_SHIFT                   (28U)
#define UOTG_PORTSC1_PTW_WIDTH                   (1U)
#define UOTG_PORTSC1_PTW(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PTW_SHIFT)) & UOTG_PORTSC1_PTW_MASK)

#define UOTG_PORTSC1_STS_MASK                    (0x20000000U)
#define UOTG_PORTSC1_STS_SHIFT                   (29U)
#define UOTG_PORTSC1_STS_WIDTH                   (1U)
#define UOTG_PORTSC1_STS(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_STS_SHIFT)) & UOTG_PORTSC1_STS_MASK)

#define UOTG_PORTSC1_PTS1_MASK                   (0xC0000000U)
#define UOTG_PORTSC1_PTS1_SHIFT                  (30U)
#define UOTG_PORTSC1_PTS1_WIDTH                  (2U)
#define UOTG_PORTSC1_PTS1(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_PORTSC1_PTS1_SHIFT)) & UOTG_PORTSC1_PTS1_MASK)
/*! @} */

/*! @name OTGSC - OTG Status Control */
/*! @{ */

#define UOTG_OTGSC_VD_MASK                       (0x1U)
#define UOTG_OTGSC_VD_SHIFT                      (0U)
#define UOTG_OTGSC_VD_WIDTH                      (1U)
#define UOTG_OTGSC_VD(x)                         (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_VD_SHIFT)) & UOTG_OTGSC_VD_MASK)

#define UOTG_OTGSC_VC_MASK                       (0x2U)
#define UOTG_OTGSC_VC_SHIFT                      (1U)
#define UOTG_OTGSC_VC_WIDTH                      (1U)
#define UOTG_OTGSC_VC(x)                         (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_VC_SHIFT)) & UOTG_OTGSC_VC_MASK)

#define UOTG_OTGSC_HAAR_MASK                     (0x4U)
#define UOTG_OTGSC_HAAR_SHIFT                    (2U)
#define UOTG_OTGSC_HAAR_WIDTH                    (1U)
#define UOTG_OTGSC_HAAR(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_HAAR_SHIFT)) & UOTG_OTGSC_HAAR_MASK)

#define UOTG_OTGSC_OT_MASK                       (0x8U)
#define UOTG_OTGSC_OT_SHIFT                      (3U)
#define UOTG_OTGSC_OT_WIDTH                      (1U)
#define UOTG_OTGSC_OT(x)                         (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_OT_SHIFT)) & UOTG_OTGSC_OT_MASK)

#define UOTG_OTGSC_DP_MASK                       (0x10U)
#define UOTG_OTGSC_DP_SHIFT                      (4U)
#define UOTG_OTGSC_DP_WIDTH                      (1U)
#define UOTG_OTGSC_DP(x)                         (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_DP_SHIFT)) & UOTG_OTGSC_DP_MASK)

#define UOTG_OTGSC_IDPU_MASK                     (0x20U)
#define UOTG_OTGSC_IDPU_SHIFT                    (5U)
#define UOTG_OTGSC_IDPU_WIDTH                    (1U)
#define UOTG_OTGSC_IDPU(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_IDPU_SHIFT)) & UOTG_OTGSC_IDPU_MASK)

#define UOTG_OTGSC_HADP_MASK                     (0x40U)
#define UOTG_OTGSC_HADP_SHIFT                    (6U)
#define UOTG_OTGSC_HADP_WIDTH                    (1U)
#define UOTG_OTGSC_HADP(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_HADP_SHIFT)) & UOTG_OTGSC_HADP_MASK)

#define UOTG_OTGSC_HABA_MASK                     (0x80U)
#define UOTG_OTGSC_HABA_SHIFT                    (7U)
#define UOTG_OTGSC_HABA_WIDTH                    (1U)
#define UOTG_OTGSC_HABA(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_HABA_SHIFT)) & UOTG_OTGSC_HABA_MASK)

#define UOTG_OTGSC_ID_MASK                       (0x100U)
#define UOTG_OTGSC_ID_SHIFT                      (8U)
#define UOTG_OTGSC_ID_WIDTH                      (1U)
#define UOTG_OTGSC_ID(x)                         (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_ID_SHIFT)) & UOTG_OTGSC_ID_MASK)

#define UOTG_OTGSC_AVV_MASK                      (0x200U)
#define UOTG_OTGSC_AVV_SHIFT                     (9U)
#define UOTG_OTGSC_AVV_WIDTH                     (1U)
#define UOTG_OTGSC_AVV(x)                        (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_AVV_SHIFT)) & UOTG_OTGSC_AVV_MASK)

#define UOTG_OTGSC_ASV_MASK                      (0x400U)
#define UOTG_OTGSC_ASV_SHIFT                     (10U)
#define UOTG_OTGSC_ASV_WIDTH                     (1U)
#define UOTG_OTGSC_ASV(x)                        (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_ASV_SHIFT)) & UOTG_OTGSC_ASV_MASK)

#define UOTG_OTGSC_BSV_MASK                      (0x800U)
#define UOTG_OTGSC_BSV_SHIFT                     (11U)
#define UOTG_OTGSC_BSV_WIDTH                     (1U)
#define UOTG_OTGSC_BSV(x)                        (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_BSV_SHIFT)) & UOTG_OTGSC_BSV_MASK)

#define UOTG_OTGSC_BSE_MASK                      (0x1000U)
#define UOTG_OTGSC_BSE_SHIFT                     (12U)
#define UOTG_OTGSC_BSE_WIDTH                     (1U)
#define UOTG_OTGSC_BSE(x)                        (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_BSE_SHIFT)) & UOTG_OTGSC_BSE_MASK)

#define UOTG_OTGSC_TIM_TOG_MASK                  (0x2000U)
#define UOTG_OTGSC_TIM_TOG_SHIFT                 (13U)
#define UOTG_OTGSC_TIM_TOG_WIDTH                 (1U)
#define UOTG_OTGSC_TIM_TOG(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_TIM_TOG_SHIFT)) & UOTG_OTGSC_TIM_TOG_MASK)

#define UOTG_OTGSC_DPS_MASK                      (0x4000U)
#define UOTG_OTGSC_DPS_SHIFT                     (14U)
#define UOTG_OTGSC_DPS_WIDTH                     (1U)
#define UOTG_OTGSC_DPS(x)                        (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_DPS_SHIFT)) & UOTG_OTGSC_DPS_MASK)

#define UOTG_OTGSC_IDIS_MASK                     (0x10000U)
#define UOTG_OTGSC_IDIS_SHIFT                    (16U)
#define UOTG_OTGSC_IDIS_WIDTH                    (1U)
#define UOTG_OTGSC_IDIS(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_IDIS_SHIFT)) & UOTG_OTGSC_IDIS_MASK)

#define UOTG_OTGSC_AVVIS_MASK                    (0x20000U)
#define UOTG_OTGSC_AVVIS_SHIFT                   (17U)
#define UOTG_OTGSC_AVVIS_WIDTH                   (1U)
#define UOTG_OTGSC_AVVIS(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_AVVIS_SHIFT)) & UOTG_OTGSC_AVVIS_MASK)

#define UOTG_OTGSC_ASVIS_MASK                    (0x40000U)
#define UOTG_OTGSC_ASVIS_SHIFT                   (18U)
#define UOTG_OTGSC_ASVIS_WIDTH                   (1U)
#define UOTG_OTGSC_ASVIS(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_ASVIS_SHIFT)) & UOTG_OTGSC_ASVIS_MASK)

#define UOTG_OTGSC_BSVIS_MASK                    (0x80000U)
#define UOTG_OTGSC_BSVIS_SHIFT                   (19U)
#define UOTG_OTGSC_BSVIS_WIDTH                   (1U)
#define UOTG_OTGSC_BSVIS(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_BSVIS_SHIFT)) & UOTG_OTGSC_BSVIS_MASK)

#define UOTG_OTGSC_BSEIS_MASK                    (0x100000U)
#define UOTG_OTGSC_BSEIS_SHIFT                   (20U)
#define UOTG_OTGSC_BSEIS_WIDTH                   (1U)
#define UOTG_OTGSC_BSEIS(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_BSEIS_SHIFT)) & UOTG_OTGSC_BSEIS_MASK)

#define UOTG_OTGSC_TIMIS_MASK                    (0x200000U)
#define UOTG_OTGSC_TIMIS_SHIFT                   (21U)
#define UOTG_OTGSC_TIMIS_WIDTH                   (1U)
#define UOTG_OTGSC_TIMIS(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_TIMIS_SHIFT)) & UOTG_OTGSC_TIMIS_MASK)

#define UOTG_OTGSC_DPIS_MASK                     (0x400000U)
#define UOTG_OTGSC_DPIS_SHIFT                    (22U)
#define UOTG_OTGSC_DPIS_WIDTH                    (1U)
#define UOTG_OTGSC_DPIS(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_DPIS_SHIFT)) & UOTG_OTGSC_DPIS_MASK)

#define UOTG_OTGSC_IDIE_MASK                     (0x1000000U)
#define UOTG_OTGSC_IDIE_SHIFT                    (24U)
#define UOTG_OTGSC_IDIE_WIDTH                    (1U)
#define UOTG_OTGSC_IDIE(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_IDIE_SHIFT)) & UOTG_OTGSC_IDIE_MASK)

#define UOTG_OTGSC_AVVIE_MASK                    (0x2000000U)
#define UOTG_OTGSC_AVVIE_SHIFT                   (25U)
#define UOTG_OTGSC_AVVIE_WIDTH                   (1U)
#define UOTG_OTGSC_AVVIE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_AVVIE_SHIFT)) & UOTG_OTGSC_AVVIE_MASK)

#define UOTG_OTGSC_ASVIE_MASK                    (0x4000000U)
#define UOTG_OTGSC_ASVIE_SHIFT                   (26U)
#define UOTG_OTGSC_ASVIE_WIDTH                   (1U)
#define UOTG_OTGSC_ASVIE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_ASVIE_SHIFT)) & UOTG_OTGSC_ASVIE_MASK)

#define UOTG_OTGSC_BSVIE_MASK                    (0x8000000U)
#define UOTG_OTGSC_BSVIE_SHIFT                   (27U)
#define UOTG_OTGSC_BSVIE_WIDTH                   (1U)
#define UOTG_OTGSC_BSVIE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_BSVIE_SHIFT)) & UOTG_OTGSC_BSVIE_MASK)

#define UOTG_OTGSC_BSEIE_MASK                    (0x10000000U)
#define UOTG_OTGSC_BSEIE_SHIFT                   (28U)
#define UOTG_OTGSC_BSEIE_WIDTH                   (1U)
#define UOTG_OTGSC_BSEIE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_BSEIE_SHIFT)) & UOTG_OTGSC_BSEIE_MASK)

#define UOTG_OTGSC_TIMIE_MASK                    (0x20000000U)
#define UOTG_OTGSC_TIMIE_SHIFT                   (29U)
#define UOTG_OTGSC_TIMIE_WIDTH                   (1U)
#define UOTG_OTGSC_TIMIE(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_TIMIE_SHIFT)) & UOTG_OTGSC_TIMIE_MASK)

#define UOTG_OTGSC_DPIE_MASK                     (0x40000000U)
#define UOTG_OTGSC_DPIE_SHIFT                    (30U)
#define UOTG_OTGSC_DPIE_WIDTH                    (1U)
#define UOTG_OTGSC_DPIE(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_OTGSC_DPIE_SHIFT)) & UOTG_OTGSC_DPIE_MASK)
/*! @} */

/*! @name USBMODE - USB Device Mode */
/*! @{ */

#define UOTG_USBMODE_CM_MASK                     (0x3U)
#define UOTG_USBMODE_CM_SHIFT                    (0U)
#define UOTG_USBMODE_CM_WIDTH                    (2U)
#define UOTG_USBMODE_CM(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBMODE_CM_SHIFT)) & UOTG_USBMODE_CM_MASK)

#define UOTG_USBMODE_ES_MASK                     (0x4U)
#define UOTG_USBMODE_ES_SHIFT                    (2U)
#define UOTG_USBMODE_ES_WIDTH                    (1U)
#define UOTG_USBMODE_ES(x)                       (((uint32_t)(((uint32_t)(x)) << UOTG_USBMODE_ES_SHIFT)) & UOTG_USBMODE_ES_MASK)

#define UOTG_USBMODE_SLOM_MASK                   (0x8U)
#define UOTG_USBMODE_SLOM_SHIFT                  (3U)
#define UOTG_USBMODE_SLOM_WIDTH                  (1U)
#define UOTG_USBMODE_SLOM(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_USBMODE_SLOM_SHIFT)) & UOTG_USBMODE_SLOM_MASK)

#define UOTG_USBMODE_SDIS_MASK                   (0x10U)
#define UOTG_USBMODE_SDIS_SHIFT                  (4U)
#define UOTG_USBMODE_SDIS_WIDTH                  (1U)
#define UOTG_USBMODE_SDIS(x)                     (((uint32_t)(((uint32_t)(x)) << UOTG_USBMODE_SDIS_SHIFT)) & UOTG_USBMODE_SDIS_MASK)

#define UOTG_USBMODE_TXHSD_MASK                  (0x7000U)
#define UOTG_USBMODE_TXHSD_SHIFT                 (12U)
#define UOTG_USBMODE_TXHSD_WIDTH                 (3U)
#define UOTG_USBMODE_TXHSD(x)                    (((uint32_t)(((uint32_t)(x)) << UOTG_USBMODE_TXHSD_SHIFT)) & UOTG_USBMODE_TXHSD_MASK)

#define UOTG_USBMODE_SRT_MASK                    (0x8000U)
#define UOTG_USBMODE_SRT_SHIFT                   (15U)
#define UOTG_USBMODE_SRT_WIDTH                   (1U)
#define UOTG_USBMODE_SRT(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBMODE_SRT_SHIFT)) & UOTG_USBMODE_SRT_MASK)

#define UOTG_USBMODE_ALP_MASK                    (0xFF0000U)
#define UOTG_USBMODE_ALP_SHIFT                   (16U)
#define UOTG_USBMODE_ALP_WIDTH                   (8U)
#define UOTG_USBMODE_ALP(x)                      (((uint32_t)(((uint32_t)(x)) << UOTG_USBMODE_ALP_SHIFT)) & UOTG_USBMODE_ALP_MASK)
/*! @} */

/*! @name ENDPTSETUPSTAT - Endpoint Setup Status */
/*! @{ */

#define UOTG_ENDPTSETUPSTAT_ENDPTSETUPSTAT_MASK  (0xFFFFU)
#define UOTG_ENDPTSETUPSTAT_ENDPTSETUPSTAT_SHIFT (0U)
#define UOTG_ENDPTSETUPSTAT_ENDPTSETUPSTAT_WIDTH (16U)
#define UOTG_ENDPTSETUPSTAT_ENDPTSETUPSTAT(x)    (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTSETUPSTAT_ENDPTSETUPSTAT_SHIFT)) & UOTG_ENDPTSETUPSTAT_ENDPTSETUPSTAT_MASK)
/*! @} */

/*! @name ENDPTPRIME - Endpoint Initialization */
/*! @{ */

#define UOTG_ENDPTPRIME_PERB_MASK                (0x3FU)
#define UOTG_ENDPTPRIME_PERB_SHIFT               (0U)
#define UOTG_ENDPTPRIME_PERB_WIDTH               (6U)
#define UOTG_ENDPTPRIME_PERB(x)                  (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTPRIME_PERB_SHIFT)) & UOTG_ENDPTPRIME_PERB_MASK)

#define UOTG_ENDPTPRIME_PETB_MASK                (0x3F0000U)
#define UOTG_ENDPTPRIME_PETB_SHIFT               (16U)
#define UOTG_ENDPTPRIME_PETB_WIDTH               (6U)
#define UOTG_ENDPTPRIME_PETB(x)                  (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTPRIME_PETB_SHIFT)) & UOTG_ENDPTPRIME_PETB_MASK)
/*! @} */

/*! @name ENDPTFLUSH - Endpoint De-Initialize */
/*! @{ */

#define UOTG_ENDPTFLUSH_FERB_MASK                (0x3FU)
#define UOTG_ENDPTFLUSH_FERB_SHIFT               (0U)
#define UOTG_ENDPTFLUSH_FERB_WIDTH               (6U)
#define UOTG_ENDPTFLUSH_FERB(x)                  (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTFLUSH_FERB_SHIFT)) & UOTG_ENDPTFLUSH_FERB_MASK)

#define UOTG_ENDPTFLUSH_FETB_MASK                (0x3F0000U)
#define UOTG_ENDPTFLUSH_FETB_SHIFT               (16U)
#define UOTG_ENDPTFLUSH_FETB_WIDTH               (6U)
#define UOTG_ENDPTFLUSH_FETB(x)                  (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTFLUSH_FETB_SHIFT)) & UOTG_ENDPTFLUSH_FETB_MASK)
/*! @} */

/*! @name ENDPTSTAT - Endpoint Status */
/*! @{ */

#define UOTG_ENDPTSTAT_ERBR_MASK                 (0x3FU)
#define UOTG_ENDPTSTAT_ERBR_SHIFT                (0U)
#define UOTG_ENDPTSTAT_ERBR_WIDTH                (6U)
#define UOTG_ENDPTSTAT_ERBR(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTSTAT_ERBR_SHIFT)) & UOTG_ENDPTSTAT_ERBR_MASK)

#define UOTG_ENDPTSTAT_ETBR_MASK                 (0x3F0000U)
#define UOTG_ENDPTSTAT_ETBR_SHIFT                (16U)
#define UOTG_ENDPTSTAT_ETBR_WIDTH                (6U)
#define UOTG_ENDPTSTAT_ETBR(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTSTAT_ETBR_SHIFT)) & UOTG_ENDPTSTAT_ETBR_MASK)
/*! @} */

/*! @name ENDPTCOMPLETE - Endpoint Complete */
/*! @{ */

#define UOTG_ENDPTCOMPLETE_ERCE_MASK             (0x3FU)
#define UOTG_ENDPTCOMPLETE_ERCE_SHIFT            (0U)
#define UOTG_ENDPTCOMPLETE_ERCE_WIDTH            (6U)
#define UOTG_ENDPTCOMPLETE_ERCE(x)               (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCOMPLETE_ERCE_SHIFT)) & UOTG_ENDPTCOMPLETE_ERCE_MASK)

#define UOTG_ENDPTCOMPLETE_ETCE_MASK             (0x3F0000U)
#define UOTG_ENDPTCOMPLETE_ETCE_SHIFT            (16U)
#define UOTG_ENDPTCOMPLETE_ETCE_WIDTH            (6U)
#define UOTG_ENDPTCOMPLETE_ETCE(x)               (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCOMPLETE_ETCE_SHIFT)) & UOTG_ENDPTCOMPLETE_ETCE_MASK)
/*! @} */

/*! @name ENDPTCTRL0 - Endpoint Control 0 */
/*! @{ */

#define UOTG_ENDPTCTRL0_RXS_MASK                 (0x1U)
#define UOTG_ENDPTCTRL0_RXS_SHIFT                (0U)
#define UOTG_ENDPTCTRL0_RXS_WIDTH                (1U)
#define UOTG_ENDPTCTRL0_RXS(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL0_RXS_SHIFT)) & UOTG_ENDPTCTRL0_RXS_MASK)

#define UOTG_ENDPTCTRL0_RXT_MASK                 (0xCU)
#define UOTG_ENDPTCTRL0_RXT_SHIFT                (2U)
#define UOTG_ENDPTCTRL0_RXT_WIDTH                (2U)
#define UOTG_ENDPTCTRL0_RXT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL0_RXT_SHIFT)) & UOTG_ENDPTCTRL0_RXT_MASK)

#define UOTG_ENDPTCTRL0_RXE_MASK                 (0x80U)
#define UOTG_ENDPTCTRL0_RXE_SHIFT                (7U)
#define UOTG_ENDPTCTRL0_RXE_WIDTH                (1U)
#define UOTG_ENDPTCTRL0_RXE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL0_RXE_SHIFT)) & UOTG_ENDPTCTRL0_RXE_MASK)

#define UOTG_ENDPTCTRL0_TXS_MASK                 (0x10000U)
#define UOTG_ENDPTCTRL0_TXS_SHIFT                (16U)
#define UOTG_ENDPTCTRL0_TXS_WIDTH                (1U)
#define UOTG_ENDPTCTRL0_TXS(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL0_TXS_SHIFT)) & UOTG_ENDPTCTRL0_TXS_MASK)

#define UOTG_ENDPTCTRL0_TXT_MASK                 (0xC0000U)
#define UOTG_ENDPTCTRL0_TXT_SHIFT                (18U)
#define UOTG_ENDPTCTRL0_TXT_WIDTH                (2U)
#define UOTG_ENDPTCTRL0_TXT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL0_TXT_SHIFT)) & UOTG_ENDPTCTRL0_TXT_MASK)

#define UOTG_ENDPTCTRL0_TXE_MASK                 (0x800000U)
#define UOTG_ENDPTCTRL0_TXE_SHIFT                (23U)
#define UOTG_ENDPTCTRL0_TXE_WIDTH                (1U)
#define UOTG_ENDPTCTRL0_TXE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL0_TXE_SHIFT)) & UOTG_ENDPTCTRL0_TXE_MASK)
/*! @} */

/*! @name ENDPTCTRL1 - Endpoint Control */
/*! @{ */

#define UOTG_ENDPTCTRL1_RXS_MASK                 (0x1U)
#define UOTG_ENDPTCTRL1_RXS_SHIFT                (0U)
#define UOTG_ENDPTCTRL1_RXS_WIDTH                (1U)
#define UOTG_ENDPTCTRL1_RXS(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL1_RXS_SHIFT)) & UOTG_ENDPTCTRL1_RXS_MASK)

#define UOTG_ENDPTCTRL1_RXD_MASK                 (0x2U)
#define UOTG_ENDPTCTRL1_RXD_SHIFT                (1U)
#define UOTG_ENDPTCTRL1_RXD_WIDTH                (1U)
#define UOTG_ENDPTCTRL1_RXD(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL1_RXD_SHIFT)) & UOTG_ENDPTCTRL1_RXD_MASK)

#define UOTG_ENDPTCTRL1_RXT_MASK                 (0xCU)
#define UOTG_ENDPTCTRL1_RXT_SHIFT                (2U)
#define UOTG_ENDPTCTRL1_RXT_WIDTH                (2U)
#define UOTG_ENDPTCTRL1_RXT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL1_RXT_SHIFT)) & UOTG_ENDPTCTRL1_RXT_MASK)

#define UOTG_ENDPTCTRL1_RXI_MASK                 (0x20U)
#define UOTG_ENDPTCTRL1_RXI_SHIFT                (5U)
#define UOTG_ENDPTCTRL1_RXI_WIDTH                (1U)
#define UOTG_ENDPTCTRL1_RXI(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL1_RXI_SHIFT)) & UOTG_ENDPTCTRL1_RXI_MASK)

#define UOTG_ENDPTCTRL1_RXR_MASK                 (0x40U)
#define UOTG_ENDPTCTRL1_RXR_SHIFT                (6U)
#define UOTG_ENDPTCTRL1_RXR_WIDTH                (1U)
#define UOTG_ENDPTCTRL1_RXR(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL1_RXR_SHIFT)) & UOTG_ENDPTCTRL1_RXR_MASK)

#define UOTG_ENDPTCTRL1_RXE_MASK                 (0x80U)
#define UOTG_ENDPTCTRL1_RXE_SHIFT                (7U)
#define UOTG_ENDPTCTRL1_RXE_WIDTH                (1U)
#define UOTG_ENDPTCTRL1_RXE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL1_RXE_SHIFT)) & UOTG_ENDPTCTRL1_RXE_MASK)

#define UOTG_ENDPTCTRL1_TXS_MASK                 (0x10000U)
#define UOTG_ENDPTCTRL1_TXS_SHIFT                (16U)
#define UOTG_ENDPTCTRL1_TXS_WIDTH                (1U)
#define UOTG_ENDPTCTRL1_TXS(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL1_TXS_SHIFT)) & UOTG_ENDPTCTRL1_TXS_MASK)

#define UOTG_ENDPTCTRL1_TXD_MASK                 (0x20000U)
#define UOTG_ENDPTCTRL1_TXD_SHIFT                (17U)
#define UOTG_ENDPTCTRL1_TXD_WIDTH                (1U)
#define UOTG_ENDPTCTRL1_TXD(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL1_TXD_SHIFT)) & UOTG_ENDPTCTRL1_TXD_MASK)

#define UOTG_ENDPTCTRL1_TXT_MASK                 (0xC0000U)
#define UOTG_ENDPTCTRL1_TXT_SHIFT                (18U)
#define UOTG_ENDPTCTRL1_TXT_WIDTH                (2U)
#define UOTG_ENDPTCTRL1_TXT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL1_TXT_SHIFT)) & UOTG_ENDPTCTRL1_TXT_MASK)

#define UOTG_ENDPTCTRL1_TXI_MASK                 (0x200000U)
#define UOTG_ENDPTCTRL1_TXI_SHIFT                (21U)
#define UOTG_ENDPTCTRL1_TXI_WIDTH                (1U)
#define UOTG_ENDPTCTRL1_TXI(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL1_TXI_SHIFT)) & UOTG_ENDPTCTRL1_TXI_MASK)

#define UOTG_ENDPTCTRL1_TXR_MASK                 (0x400000U)
#define UOTG_ENDPTCTRL1_TXR_SHIFT                (22U)
#define UOTG_ENDPTCTRL1_TXR_WIDTH                (1U)
#define UOTG_ENDPTCTRL1_TXR(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL1_TXR_SHIFT)) & UOTG_ENDPTCTRL1_TXR_MASK)

#define UOTG_ENDPTCTRL1_TXE_MASK                 (0x800000U)
#define UOTG_ENDPTCTRL1_TXE_SHIFT                (23U)
#define UOTG_ENDPTCTRL1_TXE_WIDTH                (1U)
#define UOTG_ENDPTCTRL1_TXE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL1_TXE_SHIFT)) & UOTG_ENDPTCTRL1_TXE_MASK)
/*! @} */

/*! @name ENDPTCTRL2 - Endpoint Control */
/*! @{ */

#define UOTG_ENDPTCTRL2_RXS_MASK                 (0x1U)
#define UOTG_ENDPTCTRL2_RXS_SHIFT                (0U)
#define UOTG_ENDPTCTRL2_RXS_WIDTH                (1U)
#define UOTG_ENDPTCTRL2_RXS(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL2_RXS_SHIFT)) & UOTG_ENDPTCTRL2_RXS_MASK)

#define UOTG_ENDPTCTRL2_RXD_MASK                 (0x2U)
#define UOTG_ENDPTCTRL2_RXD_SHIFT                (1U)
#define UOTG_ENDPTCTRL2_RXD_WIDTH                (1U)
#define UOTG_ENDPTCTRL2_RXD(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL2_RXD_SHIFT)) & UOTG_ENDPTCTRL2_RXD_MASK)

#define UOTG_ENDPTCTRL2_RXT_MASK                 (0xCU)
#define UOTG_ENDPTCTRL2_RXT_SHIFT                (2U)
#define UOTG_ENDPTCTRL2_RXT_WIDTH                (2U)
#define UOTG_ENDPTCTRL2_RXT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL2_RXT_SHIFT)) & UOTG_ENDPTCTRL2_RXT_MASK)

#define UOTG_ENDPTCTRL2_RXI_MASK                 (0x20U)
#define UOTG_ENDPTCTRL2_RXI_SHIFT                (5U)
#define UOTG_ENDPTCTRL2_RXI_WIDTH                (1U)
#define UOTG_ENDPTCTRL2_RXI(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL2_RXI_SHIFT)) & UOTG_ENDPTCTRL2_RXI_MASK)

#define UOTG_ENDPTCTRL2_RXR_MASK                 (0x40U)
#define UOTG_ENDPTCTRL2_RXR_SHIFT                (6U)
#define UOTG_ENDPTCTRL2_RXR_WIDTH                (1U)
#define UOTG_ENDPTCTRL2_RXR(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL2_RXR_SHIFT)) & UOTG_ENDPTCTRL2_RXR_MASK)

#define UOTG_ENDPTCTRL2_RXE_MASK                 (0x80U)
#define UOTG_ENDPTCTRL2_RXE_SHIFT                (7U)
#define UOTG_ENDPTCTRL2_RXE_WIDTH                (1U)
#define UOTG_ENDPTCTRL2_RXE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL2_RXE_SHIFT)) & UOTG_ENDPTCTRL2_RXE_MASK)

#define UOTG_ENDPTCTRL2_TXS_MASK                 (0x10000U)
#define UOTG_ENDPTCTRL2_TXS_SHIFT                (16U)
#define UOTG_ENDPTCTRL2_TXS_WIDTH                (1U)
#define UOTG_ENDPTCTRL2_TXS(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL2_TXS_SHIFT)) & UOTG_ENDPTCTRL2_TXS_MASK)

#define UOTG_ENDPTCTRL2_TXD_MASK                 (0x20000U)
#define UOTG_ENDPTCTRL2_TXD_SHIFT                (17U)
#define UOTG_ENDPTCTRL2_TXD_WIDTH                (1U)
#define UOTG_ENDPTCTRL2_TXD(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL2_TXD_SHIFT)) & UOTG_ENDPTCTRL2_TXD_MASK)

#define UOTG_ENDPTCTRL2_TXT_MASK                 (0xC0000U)
#define UOTG_ENDPTCTRL2_TXT_SHIFT                (18U)
#define UOTG_ENDPTCTRL2_TXT_WIDTH                (2U)
#define UOTG_ENDPTCTRL2_TXT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL2_TXT_SHIFT)) & UOTG_ENDPTCTRL2_TXT_MASK)

#define UOTG_ENDPTCTRL2_TXI_MASK                 (0x200000U)
#define UOTG_ENDPTCTRL2_TXI_SHIFT                (21U)
#define UOTG_ENDPTCTRL2_TXI_WIDTH                (1U)
#define UOTG_ENDPTCTRL2_TXI(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL2_TXI_SHIFT)) & UOTG_ENDPTCTRL2_TXI_MASK)

#define UOTG_ENDPTCTRL2_TXR_MASK                 (0x400000U)
#define UOTG_ENDPTCTRL2_TXR_SHIFT                (22U)
#define UOTG_ENDPTCTRL2_TXR_WIDTH                (1U)
#define UOTG_ENDPTCTRL2_TXR(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL2_TXR_SHIFT)) & UOTG_ENDPTCTRL2_TXR_MASK)

#define UOTG_ENDPTCTRL2_TXE_MASK                 (0x800000U)
#define UOTG_ENDPTCTRL2_TXE_SHIFT                (23U)
#define UOTG_ENDPTCTRL2_TXE_WIDTH                (1U)
#define UOTG_ENDPTCTRL2_TXE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL2_TXE_SHIFT)) & UOTG_ENDPTCTRL2_TXE_MASK)
/*! @} */

/*! @name ENDPTCTRL3 - Endpoint Control */
/*! @{ */

#define UOTG_ENDPTCTRL3_RXS_MASK                 (0x1U)
#define UOTG_ENDPTCTRL3_RXS_SHIFT                (0U)
#define UOTG_ENDPTCTRL3_RXS_WIDTH                (1U)
#define UOTG_ENDPTCTRL3_RXS(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL3_RXS_SHIFT)) & UOTG_ENDPTCTRL3_RXS_MASK)

#define UOTG_ENDPTCTRL3_RXD_MASK                 (0x2U)
#define UOTG_ENDPTCTRL3_RXD_SHIFT                (1U)
#define UOTG_ENDPTCTRL3_RXD_WIDTH                (1U)
#define UOTG_ENDPTCTRL3_RXD(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL3_RXD_SHIFT)) & UOTG_ENDPTCTRL3_RXD_MASK)

#define UOTG_ENDPTCTRL3_RXT_MASK                 (0xCU)
#define UOTG_ENDPTCTRL3_RXT_SHIFT                (2U)
#define UOTG_ENDPTCTRL3_RXT_WIDTH                (2U)
#define UOTG_ENDPTCTRL3_RXT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL3_RXT_SHIFT)) & UOTG_ENDPTCTRL3_RXT_MASK)

#define UOTG_ENDPTCTRL3_RXI_MASK                 (0x20U)
#define UOTG_ENDPTCTRL3_RXI_SHIFT                (5U)
#define UOTG_ENDPTCTRL3_RXI_WIDTH                (1U)
#define UOTG_ENDPTCTRL3_RXI(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL3_RXI_SHIFT)) & UOTG_ENDPTCTRL3_RXI_MASK)

#define UOTG_ENDPTCTRL3_RXR_MASK                 (0x40U)
#define UOTG_ENDPTCTRL3_RXR_SHIFT                (6U)
#define UOTG_ENDPTCTRL3_RXR_WIDTH                (1U)
#define UOTG_ENDPTCTRL3_RXR(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL3_RXR_SHIFT)) & UOTG_ENDPTCTRL3_RXR_MASK)

#define UOTG_ENDPTCTRL3_RXE_MASK                 (0x80U)
#define UOTG_ENDPTCTRL3_RXE_SHIFT                (7U)
#define UOTG_ENDPTCTRL3_RXE_WIDTH                (1U)
#define UOTG_ENDPTCTRL3_RXE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL3_RXE_SHIFT)) & UOTG_ENDPTCTRL3_RXE_MASK)

#define UOTG_ENDPTCTRL3_TXS_MASK                 (0x10000U)
#define UOTG_ENDPTCTRL3_TXS_SHIFT                (16U)
#define UOTG_ENDPTCTRL3_TXS_WIDTH                (1U)
#define UOTG_ENDPTCTRL3_TXS(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL3_TXS_SHIFT)) & UOTG_ENDPTCTRL3_TXS_MASK)

#define UOTG_ENDPTCTRL3_TXD_MASK                 (0x20000U)
#define UOTG_ENDPTCTRL3_TXD_SHIFT                (17U)
#define UOTG_ENDPTCTRL3_TXD_WIDTH                (1U)
#define UOTG_ENDPTCTRL3_TXD(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL3_TXD_SHIFT)) & UOTG_ENDPTCTRL3_TXD_MASK)

#define UOTG_ENDPTCTRL3_TXT_MASK                 (0xC0000U)
#define UOTG_ENDPTCTRL3_TXT_SHIFT                (18U)
#define UOTG_ENDPTCTRL3_TXT_WIDTH                (2U)
#define UOTG_ENDPTCTRL3_TXT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL3_TXT_SHIFT)) & UOTG_ENDPTCTRL3_TXT_MASK)

#define UOTG_ENDPTCTRL3_TXI_MASK                 (0x200000U)
#define UOTG_ENDPTCTRL3_TXI_SHIFT                (21U)
#define UOTG_ENDPTCTRL3_TXI_WIDTH                (1U)
#define UOTG_ENDPTCTRL3_TXI(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL3_TXI_SHIFT)) & UOTG_ENDPTCTRL3_TXI_MASK)

#define UOTG_ENDPTCTRL3_TXR_MASK                 (0x400000U)
#define UOTG_ENDPTCTRL3_TXR_SHIFT                (22U)
#define UOTG_ENDPTCTRL3_TXR_WIDTH                (1U)
#define UOTG_ENDPTCTRL3_TXR(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL3_TXR_SHIFT)) & UOTG_ENDPTCTRL3_TXR_MASK)

#define UOTG_ENDPTCTRL3_TXE_MASK                 (0x800000U)
#define UOTG_ENDPTCTRL3_TXE_SHIFT                (23U)
#define UOTG_ENDPTCTRL3_TXE_WIDTH                (1U)
#define UOTG_ENDPTCTRL3_TXE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL3_TXE_SHIFT)) & UOTG_ENDPTCTRL3_TXE_MASK)
/*! @} */

/*! @name ENDPTCTRL4 - Endpoint Control */
/*! @{ */

#define UOTG_ENDPTCTRL4_RXS_MASK                 (0x1U)
#define UOTG_ENDPTCTRL4_RXS_SHIFT                (0U)
#define UOTG_ENDPTCTRL4_RXS_WIDTH                (1U)
#define UOTG_ENDPTCTRL4_RXS(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL4_RXS_SHIFT)) & UOTG_ENDPTCTRL4_RXS_MASK)

#define UOTG_ENDPTCTRL4_RXD_MASK                 (0x2U)
#define UOTG_ENDPTCTRL4_RXD_SHIFT                (1U)
#define UOTG_ENDPTCTRL4_RXD_WIDTH                (1U)
#define UOTG_ENDPTCTRL4_RXD(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL4_RXD_SHIFT)) & UOTG_ENDPTCTRL4_RXD_MASK)

#define UOTG_ENDPTCTRL4_RXT_MASK                 (0xCU)
#define UOTG_ENDPTCTRL4_RXT_SHIFT                (2U)
#define UOTG_ENDPTCTRL4_RXT_WIDTH                (2U)
#define UOTG_ENDPTCTRL4_RXT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL4_RXT_SHIFT)) & UOTG_ENDPTCTRL4_RXT_MASK)

#define UOTG_ENDPTCTRL4_RXI_MASK                 (0x20U)
#define UOTG_ENDPTCTRL4_RXI_SHIFT                (5U)
#define UOTG_ENDPTCTRL4_RXI_WIDTH                (1U)
#define UOTG_ENDPTCTRL4_RXI(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL4_RXI_SHIFT)) & UOTG_ENDPTCTRL4_RXI_MASK)

#define UOTG_ENDPTCTRL4_RXR_MASK                 (0x40U)
#define UOTG_ENDPTCTRL4_RXR_SHIFT                (6U)
#define UOTG_ENDPTCTRL4_RXR_WIDTH                (1U)
#define UOTG_ENDPTCTRL4_RXR(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL4_RXR_SHIFT)) & UOTG_ENDPTCTRL4_RXR_MASK)

#define UOTG_ENDPTCTRL4_RXE_MASK                 (0x80U)
#define UOTG_ENDPTCTRL4_RXE_SHIFT                (7U)
#define UOTG_ENDPTCTRL4_RXE_WIDTH                (1U)
#define UOTG_ENDPTCTRL4_RXE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL4_RXE_SHIFT)) & UOTG_ENDPTCTRL4_RXE_MASK)

#define UOTG_ENDPTCTRL4_TXS_MASK                 (0x10000U)
#define UOTG_ENDPTCTRL4_TXS_SHIFT                (16U)
#define UOTG_ENDPTCTRL4_TXS_WIDTH                (1U)
#define UOTG_ENDPTCTRL4_TXS(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL4_TXS_SHIFT)) & UOTG_ENDPTCTRL4_TXS_MASK)

#define UOTG_ENDPTCTRL4_TXD_MASK                 (0x20000U)
#define UOTG_ENDPTCTRL4_TXD_SHIFT                (17U)
#define UOTG_ENDPTCTRL4_TXD_WIDTH                (1U)
#define UOTG_ENDPTCTRL4_TXD(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL4_TXD_SHIFT)) & UOTG_ENDPTCTRL4_TXD_MASK)

#define UOTG_ENDPTCTRL4_TXT_MASK                 (0xC0000U)
#define UOTG_ENDPTCTRL4_TXT_SHIFT                (18U)
#define UOTG_ENDPTCTRL4_TXT_WIDTH                (2U)
#define UOTG_ENDPTCTRL4_TXT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL4_TXT_SHIFT)) & UOTG_ENDPTCTRL4_TXT_MASK)

#define UOTG_ENDPTCTRL4_TXI_MASK                 (0x200000U)
#define UOTG_ENDPTCTRL4_TXI_SHIFT                (21U)
#define UOTG_ENDPTCTRL4_TXI_WIDTH                (1U)
#define UOTG_ENDPTCTRL4_TXI(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL4_TXI_SHIFT)) & UOTG_ENDPTCTRL4_TXI_MASK)

#define UOTG_ENDPTCTRL4_TXR_MASK                 (0x400000U)
#define UOTG_ENDPTCTRL4_TXR_SHIFT                (22U)
#define UOTG_ENDPTCTRL4_TXR_WIDTH                (1U)
#define UOTG_ENDPTCTRL4_TXR(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL4_TXR_SHIFT)) & UOTG_ENDPTCTRL4_TXR_MASK)

#define UOTG_ENDPTCTRL4_TXE_MASK                 (0x800000U)
#define UOTG_ENDPTCTRL4_TXE_SHIFT                (23U)
#define UOTG_ENDPTCTRL4_TXE_WIDTH                (1U)
#define UOTG_ENDPTCTRL4_TXE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL4_TXE_SHIFT)) & UOTG_ENDPTCTRL4_TXE_MASK)
/*! @} */

/*! @name ENDPTCTRL5 - Endpoint Control */
/*! @{ */

#define UOTG_ENDPTCTRL5_RXS_MASK                 (0x1U)
#define UOTG_ENDPTCTRL5_RXS_SHIFT                (0U)
#define UOTG_ENDPTCTRL5_RXS_WIDTH                (1U)
#define UOTG_ENDPTCTRL5_RXS(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL5_RXS_SHIFT)) & UOTG_ENDPTCTRL5_RXS_MASK)

#define UOTG_ENDPTCTRL5_RXD_MASK                 (0x2U)
#define UOTG_ENDPTCTRL5_RXD_SHIFT                (1U)
#define UOTG_ENDPTCTRL5_RXD_WIDTH                (1U)
#define UOTG_ENDPTCTRL5_RXD(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL5_RXD_SHIFT)) & UOTG_ENDPTCTRL5_RXD_MASK)

#define UOTG_ENDPTCTRL5_RXT_MASK                 (0xCU)
#define UOTG_ENDPTCTRL5_RXT_SHIFT                (2U)
#define UOTG_ENDPTCTRL5_RXT_WIDTH                (2U)
#define UOTG_ENDPTCTRL5_RXT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL5_RXT_SHIFT)) & UOTG_ENDPTCTRL5_RXT_MASK)

#define UOTG_ENDPTCTRL5_RXI_MASK                 (0x20U)
#define UOTG_ENDPTCTRL5_RXI_SHIFT                (5U)
#define UOTG_ENDPTCTRL5_RXI_WIDTH                (1U)
#define UOTG_ENDPTCTRL5_RXI(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL5_RXI_SHIFT)) & UOTG_ENDPTCTRL5_RXI_MASK)

#define UOTG_ENDPTCTRL5_RXR_MASK                 (0x40U)
#define UOTG_ENDPTCTRL5_RXR_SHIFT                (6U)
#define UOTG_ENDPTCTRL5_RXR_WIDTH                (1U)
#define UOTG_ENDPTCTRL5_RXR(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL5_RXR_SHIFT)) & UOTG_ENDPTCTRL5_RXR_MASK)

#define UOTG_ENDPTCTRL5_RXE_MASK                 (0x80U)
#define UOTG_ENDPTCTRL5_RXE_SHIFT                (7U)
#define UOTG_ENDPTCTRL5_RXE_WIDTH                (1U)
#define UOTG_ENDPTCTRL5_RXE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL5_RXE_SHIFT)) & UOTG_ENDPTCTRL5_RXE_MASK)

#define UOTG_ENDPTCTRL5_TXS_MASK                 (0x10000U)
#define UOTG_ENDPTCTRL5_TXS_SHIFT                (16U)
#define UOTG_ENDPTCTRL5_TXS_WIDTH                (1U)
#define UOTG_ENDPTCTRL5_TXS(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL5_TXS_SHIFT)) & UOTG_ENDPTCTRL5_TXS_MASK)

#define UOTG_ENDPTCTRL5_TXD_MASK                 (0x20000U)
#define UOTG_ENDPTCTRL5_TXD_SHIFT                (17U)
#define UOTG_ENDPTCTRL5_TXD_WIDTH                (1U)
#define UOTG_ENDPTCTRL5_TXD(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL5_TXD_SHIFT)) & UOTG_ENDPTCTRL5_TXD_MASK)

#define UOTG_ENDPTCTRL5_TXT_MASK                 (0xC0000U)
#define UOTG_ENDPTCTRL5_TXT_SHIFT                (18U)
#define UOTG_ENDPTCTRL5_TXT_WIDTH                (2U)
#define UOTG_ENDPTCTRL5_TXT(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL5_TXT_SHIFT)) & UOTG_ENDPTCTRL5_TXT_MASK)

#define UOTG_ENDPTCTRL5_TXI_MASK                 (0x200000U)
#define UOTG_ENDPTCTRL5_TXI_SHIFT                (21U)
#define UOTG_ENDPTCTRL5_TXI_WIDTH                (1U)
#define UOTG_ENDPTCTRL5_TXI(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL5_TXI_SHIFT)) & UOTG_ENDPTCTRL5_TXI_MASK)

#define UOTG_ENDPTCTRL5_TXR_MASK                 (0x400000U)
#define UOTG_ENDPTCTRL5_TXR_SHIFT                (22U)
#define UOTG_ENDPTCTRL5_TXR_WIDTH                (1U)
#define UOTG_ENDPTCTRL5_TXR(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL5_TXR_SHIFT)) & UOTG_ENDPTCTRL5_TXR_MASK)

#define UOTG_ENDPTCTRL5_TXE_MASK                 (0x800000U)
#define UOTG_ENDPTCTRL5_TXE_SHIFT                (23U)
#define UOTG_ENDPTCTRL5_TXE_WIDTH                (1U)
#define UOTG_ENDPTCTRL5_TXE(x)                   (((uint32_t)(((uint32_t)(x)) << UOTG_ENDPTCTRL5_TXE_SHIFT)) & UOTG_ENDPTCTRL5_TXE_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group UOTG_Register_Masks */

/*!
 * @}
 */ /* end of group UOTG_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G274A_UOTG_H_) */
