/*
** ###################################################################
**     Processor:           S32G399A_A53
**     Compiler:            Keil ARM C/C++ Compiler
**     Reference manual:    S32G3xx RM Rev.2 Draft C
**     Version:             rev. 2.7, 2022-07-21
**     Build:               b220721
**
**     Abstract:
**         Peripheral Access Layer for S32G399A_A53
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
 * @file S32G399A.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A
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


/* ----------------------------------------------------------------------------
   -- MCU activation
   ---------------------------------------------------------------------------- */

/* Prevention from multiple including the same memory map */
#if !defined(S32G399A_A53_COMMON_H_)  /* Check if memory map has not been already included */
#define S32G399A_A53_COMMON_H_
#define MCU_S32G399A

/* Check if another memory map has not been also included */
#if (defined(MCU_ACTIVE))
  #error S32G399A memory map: There is already included another memory map. Only one memory map can be included.
#endif /* (defined(MCU_ACTIVE)) */
#define MCU_ACTIVE

#include "BasicTypes.h"

/** Memory map major version (memory maps with equal major version number are
 * compatible) */
#define MCU_MEM_MAP_VERSION 0x0200U
/** Memory map minor version */
#define MCU_MEM_MAP_VERSION_MINOR 0x0007U

/* ----------------------------------------------------------------------------
   -- Generic macros
   ---------------------------------------------------------------------------- */

/* IO definitions (access restrictions to peripheral registers) */
/**
*   IO Type Qualifiers are used
*   \li to specify the access to peripheral variables.
*   \li for automatic generation of peripheral register debug information.
*/
#ifndef __IO
#ifdef __cplusplus
  #define   __I     volatile             /*!< Defines 'read only' permissions                 */
#else
  #define   __I     volatile const       /*!< Defines 'read only' permissions                 */
#endif
#define     __O     volatile             /*!< Defines 'write only' permissions                */
#define     __IO    volatile             /*!< Defines 'read / write' permissions              */
#endif


/**
* @brief 32 bits memory read macro.
*/
#if !defined(REG_READ32)
  #define REG_READ32(address)               (*(volatile uint32_t*)(address))
#endif

/**
* @brief 32 bits memory write macro.
*/
#if !defined(REG_WRITE32)
  #define REG_WRITE32(address, value)       ((*(volatile uint32_t*)(address))= (uint32_t)(value))
#endif

/**
* @brief 32 bits bits setting macro.
*/
#if !defined(REG_BIT_SET32)
  #define REG_BIT_SET32(address, mask)      ((*(volatile uint32_t*)(address))|= (uint32_t)(mask))
#endif

/**
* @brief 32 bits bits clearing macro.
*/
#if !defined(REG_BIT_CLEAR32)
  #define REG_BIT_CLEAR32(address, mask)    ((*(volatile uint32_t*)(address))&= ((uint32_t)~((uint32_t)(mask))))
#endif

/**
* @brief 32 bit clear bits and set with new value
* @note It is user's responsability to make sure that value has only "mask" bits set - (value&~mask)==0
*/
#if !defined(REG_RMW32)
  #define REG_RMW32(address, mask, value)   (REG_WRITE32((address), ((REG_READ32(address)& ((uint32_t)~((uint32_t)(mask))))| ((uint32_t)(value)))))
#endif


/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_vector_numbers Interrupt vector numbers
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 263                /**< Number of interrupts in the Vector table */

typedef enum {
  /* Auxiliary constants */
  NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

  /* Core interrupts */
  Software0_IRQn               = 0,                /**< Cortex-A53 Software Generated Interrupt 0 */
  Software1_IRQn               = 1,                /**< Cortex-A53 Software Generated Interrupt 1 */
  Software2_IRQn               = 2,                /**< Cortex-A53 Software Generated Interrupt 2 */
  Software3_IRQn               = 3,                /**< Cortex-A53 Software Generated Interrupt 3 */
  Software4_IRQn               = 4,                /**< Cortex-A53 Software Generated Interrupt 4 */
  Software5_IRQn               = 5,                /**< Cortex-A53 Software Generated Interrupt 5 */
  Software6_IRQn               = 6,                /**< Cortex-A53 Software Generated Interrupt 6 */
  Software7_IRQn               = 7,                /**< Cortex-A53 Software Generated Interrupt 7 */
  Software8_IRQn               = 8,                /**< Cortex-A53 Software Generated Interrupt 8 */
  Software9_IRQn               = 9,                /**< Cortex-A53 Software Generated Interrupt 9 */
  Software10_IRQn              = 10,               /**< Cortex-A53 Software Generated Interrupt 10 */
  Software11_IRQn              = 11,               /**< Cortex-A53 Software Generated Interrupt 11 */
  Software12_IRQn              = 12,               /**< Cortex-A53 Software Generated Interrupt 12 */
  Software13_IRQn              = 13,               /**< Cortex-A53 Software Generated Interrupt 13 */
  Software14_IRQn              = 14,               /**< Cortex-A53 Software Generated Interrupt 14 */
  Software15_IRQn              = 15,               /**< Cortex-A53 Software Generated Interrupt 15 */
  COMM_IRQn                    = 22,               /**< Cortex-A53 Communications channel receive or transmit interrupt request */
  PMU_IRQn                     = 23,               /**< Cortex-A53 PMU interrupt request */
  CTI_IRQn                     = 24,               /**< Cortex-A53 Cross trigger interface (CTI) interrupt */
  MAINTENANCE_IRQn             = 25,               /**< Cortex-A53 Virtual CPU Interface Maintenance interrupt */
  HYPERV_TIM_IRQn              = 26,               /**< Cortex-A53 Hypervisor timer interrupt */
  VIRTUAL_TIM_IRQn             = 27,               /**< Cortex-A53 Virtual timer interrupt */
  EL2_VIRTUAL_TIM_IRQn         = 28,               /**< Cortex-A53 EL2 Virtual timer interrupt */
  EL3_TIM_IRQn                 = 29,               /**< Cortex-A53 Secure EL3 physical timer */
  EL1_TIM_IRQn                 = 30,               /**< Cortex-A53 Non-secure EL1 physical timer */

  /* Device specific interrupts */
  MSCM_Pcie_1_MSI_IRQn         = 32,               /**< PCIe_1 MSI interrupt to M7/A53 */
  MSCM_INT0_IRQn               = 33,               /**< Software generated CPU interrupt to A53 core - interrupt#0 */
  MSCM_INT1_IRQn               = 34,               /**< Software generated CPU interrupt to A53 core - interrupt#1 */
  MSCM_INT2_IRQn               = 35,               /**< Software generated CPU interrupt to A53 core - interrupt#2 */
  MSCM_Pcie_0_MSI_IRQn         = 36,               /**< PCIe_0 MSI interrupt to M7/A53 */
  CTI_0_IRQn                   = 37,               /**< CTI interrupt[0] */
  CTI_1_IRQn                   = 38,               /**< CTI interrupt[1] */
  MCM_IRQn                     = 39,               /**< Cortex M7 interrupt for FPU events and TCM errors */
  DMA0_0_15_IRQn               = 40,               /**< eDMA0 - DMA interrupt CH0-15 */
  DMA0_16_31_IRQn              = 41,               /**< eDMA0 - DMA interrupt CH16-31 */
  DMA0_ERR0_IRQn               = 42,               /**< eDMA0 - DMA error interrupt */
  DMA1_0_15_IRQn               = 43,               /**< eDMA1 - DMA interrupt  CH0-15 */
  DMA1_16_31_IRQn              = 44,               /**< eDMA1 - DMA interrupt CH16-31 */
  DMA1_ERR0_IRQn               = 45,               /**< eDMA1 - DMA error interrupt */
  SWT0_IRQn                    = 46,               /**< Watchdog timer interrupt */
  SWT1_IRQn                    = 47,               /**< Watchdog timer interrupt */
  SWT2_IRQn                    = 48,               /**< Watchdog timer interrupt */
  SWT3_IRQn                    = 49,               /**< Watchdog timer interrupt */
  SWT4_IRQn                    = 50,               /**< Watchdog timer interrupt */
  SWT5_IRQn                    = 51,               /**< Watchdog timer interrupt */
  SWT6_IRQn                    = 52,               /**< Watchdog timer interrupt */
  SWT7_IRQn                    = 53,               /**< Watchdog timer interrupt */
  MSCM_INT3_IRQn               = 54,               /**< Software generated CPU interrupt to M7/A53 core - interrupt#3 */
  MSCM_INT4_IRQn               = 55,               /**< Software generated CPU interrupt to M7/A53 core - interrupt#4 */
  STM0_IRQn                    = 56,               /**< STM0 interrupt channel request 0, 1, 2, 3 */
  STM1_IRQn                    = 57,               /**< STM1 interrupt channel request 0, 1, 2, 3 */
  STM2_IRQn                    = 58,               /**< STM2 interrupt channel request 0, 1, 2, 3 */
  STM3_IRQn                    = 59,               /**< STM3 interrupt channel request 0, 1, 2, 3 */
  STM4_IRQn                    = 60,               /**< STM4 interrupt channel request 0, 1, 2, 3 */
  STM5_IRQn                    = 61,               /**< STM5 interrupt channel request 0, 1, 2, 3 */
  STM6_IRQn                    = 62,               /**< STM6 interrupt channel request 0, 1, 2, 3 */
  STM7_IRQn                    = 63,               /**< STM7 interrupt channel request 0, 1, 2, 3 */
  QSPI0_IRQn                   = 64,               /**< QSPI Ored interrupt via OTC */
  QSPI1_IRQn                   = 65,               /**< Flash A Error interrupt via OTC */
  QSPI2_IRQn                   = 66,               /**< Flash B Error interrupt via OTC */
  STCU2_LBIST_MBIST_IRQn       = 67,               /**< LBIST and MBIST */
  USDHC_IRQn                   = 68,               /**< uSDHC Interrupt */
  CAN0_ORED_IRQn               = 69,               /**< CAN0 OR'ed Bus in Off State. */
  CAN0_ERR_IRQn                = 70,               /**< CAN0 Interrupt indicating that errors were detected on the CAN bus */
  CAN0_ORED_0_7_MB_IRQn        = 71,               /**< CAN0 OR'ed Message buffer (0-7),Rx FIFO Watermark, Rx FIFO Data Available, Rx FIFO Underflow, Rx FIFO Overflow */
  CAN0_ORED_8_127_MB_IRQn      = 72,               /**< CAN0 OR'ed Message buffer (8-127) */
  CAN1_ORED_IRQn               = 73,               /**< CAN1 OR'ed Bus in Off State */
  CAN1_ERR_IRQn                = 74,               /**< CAN1 Interrupt indicating that errors were detected on the CAN bus */
  CAN1_ORED_0_7_MB_IRQn        = 75,               /**< CAN1 OR'ed Message buffer (0-7),Rx FIFO Watermark, Rx FIFO Data Available, Rx FIFO Underflow, Rx FIFO Overflow */
  CAN1_ORED_8_127_MB_IRQn      = 76,               /**< CAN1 OR'ed Message buffer (8-127) */
  CAN2_ORED_IRQn               = 77,               /**< CAN2 OR'ed Bus in Off State */
  CAN2_ERR_IRQn                = 78,               /**< CAN2 Interrupt indicating that errors were detected on the CAN bus */
  CAN2_ORED_0_7_MB_IRQn        = 79,               /**< CAN2 OR'ed Message buffer (0-7),Rx FIFO Watermark, Rx FIFO Data Available, Rx FIFO Underflow, Rx FIFO Overflow */
  CAN2_ORED_8_127_MB_IRQn      = 80,               /**< CAN2 OR'ed Message buffer (8-127) */
  CAN3_ORED_IRQn               = 81,               /**< CAN3 OR'ed Bus in Off State */
  CAN3_ERR_IRQn                = 82,               /**< CAN3 Interrupt indicating that errors were detected on the CAN bus */
  CAN3_ORED_0_7_MB_IRQn        = 83,               /**< CAN3 OR'ed Message buffer (0-7),Rx FIFO Watermark, Rx FIFO Data Available, Rx FIFO Underflow, Rx FIFO Overflow */
  CAN3_ORED_8_127_MB_IRQn      = 84,               /**< CAN3 OR'ed Message buffer (8-127) */
  PIT0_IRQn                    = 85,               /**< OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5, 6 */
  PIT1_IRQn                    = 86,               /**< OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5 */
  FTM0_IRQn                    = 87,               /**< OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5, Overflow, Reload */
  FTM1_IRQn                    = 88,               /**< OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5, Overflow, Reload */
  GMAC0_Common_IRQn            = 89,               /**< Common Interrupt */
  GMAC0_CH0_TX_IRQn            = 90,               /**< Channel0 TX Interrupt */
  GMAC0_CH0_RX_IRQn            = 91,               /**< Channel0 RX Interrupt */
  GMAC0_CH1_TX_IRQn            = 92,               /**< Channel1 TX Interrupt */
  GMAC0_CH1_RX_IRQn            = 93,               /**< Channel1 RX Interrupt */
  GMAC0_CH2_TX_IRQn            = 94,               /**< Channel2 TX Interrupt */
  GMAC0_CH2_RX_IRQn            = 95,               /**< Channel2 RX Interrupt */
  GMAC0_CH3_TX_IRQn            = 96,               /**< Channel3 TX Interrupt */
  GMAC0_CH3_RX_IRQn            = 97,               /**< Channel3 RX Interrupt */
  GMAC0_CH4_TX_IRQn            = 98,               /**< Channel4 TX Interrupt */
  GMAC0_CH4_RX_IRQn            = 99,               /**< Channel4 RX Interrupt */
  MSCM_INT5_IRQn               = 100,              /**< Software generated CPU interrupt to A53 core - interrupt#5 */
  MSCM_INT6_IRQn               = 101,              /**< Software generated CPU interrupt to A53 core - interrupt#6 */
  SAR_ADC0_INT_IRQn            = 102,              /**< End of conv., ERROR and Analog Watchdog Interrupt */
  SAR_ADC1_INT_IRQn            = 103,              /**< End of conv., ERROR and Analog Watchdog Interrupt */
  FLEXRAY0_NCERR_IRQn          = 104,              /**< LRAM and DRAM Non-Corrected Error interrupt */
  FLEXRAY0_CERR_IRQn           = 105,              /**< LRAM and DRAM Corrected Error interrupt */
  FLEXRAY0_CH0_RX_FIFO_IRQn    = 106,              /**< Receive FIFO channel A not empty interrupt */
  FLEXRAY0_CH1_RX_FIFO_IRQn    = 107,              /**< Receive FIFO channel B not empty interrupt */
  FLEXRAY0_WKUP_IRQn           = 108,              /**< Wakeup interrupt */
  FLEXRAY0_STATUS_IRQn         = 109,              /**< Combined protocol status and error interrupt */
  FLEXRAY0_CMBERR_IRQn         = 110,              /**< Combined CHI error interrupt */
  FLEXRAY0_TX_BUFF_IRQn        = 111,              /**< Combined transmit message buffer interrupt */
  FLEXRAY0_RX_BUFF_IRQn        = 112,              /**< Combined receive message buffer interrupt */
  FLEXRAY0_MODULE_IRQn         = 113,              /**< Combined module interrupt */
  LINFLEXD0_IRQn               = 114,              /**< Internal all interrupt request */
  LINFLEXD1_IRQn               = 115,              /**< Internal all interrupt request */
  LINFLEXD2_IRQn               = 116,              /**< Internal all interrupt request */
  SPI0_IRQn                    = 117,              /**< OR'ed DSPI Global Interrupt */
  SPI1_IRQn                    = 118,              /**< OR'ed DSPI Global Interrupt */
  SPI2_IRQn                    = 119,              /**< OR'ed DSPI Global Interrupt */
  SPI3_IRQn                    = 120,              /**< OR'ed DSPI Global Interrupt */
  SPI4_IRQn                    = 121,              /**< OR'ed DSPI Global Interrupt */
  SPI5_IRQn                    = 122,              /**< OR'ed DSPI Global Interrupt */
  I2C0_IRQn                    = 124,              /**< Interrupt Request */
  I2C1_IRQn                    = 125,              /**< Interrupt Request */
  I2C2_IRQn                    = 126,              /**< Interrupt Request */
  I2C3_IRQn                    = 127,              /**< Interrupt Request */
  I2C4_IRQn                    = 128,              /**< Interrupt Request */
  MC_RGM_IRQn                  = 130,              /**< Interrupt Request to System */
  FCCU_ALARM_IRQn              = 132,              /**< Interrupt request (ALARM state) */
  FCCU_MISC_IRQn               = 133,              /**< Interrupt request (miscellaneous conditions) */
  SBSW_IRQn                    = 134,              /**< Interrupt triggered by writing to the TMWDP CONFG_ADDR Register,TMWDPI timer interrupt */
  HSE_MU0_TX_IRQn              = 135,              /**< Ored tx interrupt to MU-0 */
  HSE_MU0_RX_IRQn              = 136,              /**< Ored rx interrupt to MU-0 */
  HSE_MU0_ORED_IRQn            = 137,              /**< ORed general purpose interrupt request to MU-0 */
  HSE_MU1_TX_IRQn              = 138,              /**< Ored tx interrupt to MU-1 */
  HSE_MU1_RX_IRQn              = 139,              /**< Ored rx interrupt to MU-1 */
  HSE_MU1_ORED_IRQn            = 140,              /**< ORed general purpose interrupt request to MU-1 */
  HSE_MU2_TX_IRQn              = 141,              /**< Ored tx interrupt to MU-2 */
  HSE_MU2_RX_IRQn              = 142,              /**< Ored rx interrupt to MU-2 */
  HSE_MU2_ORED_IRQn            = 143,              /**< ORed general purpose interrupt request to MU-2 */
  HSE_MU3_TX_IRQn              = 144,              /**< Ored tx interrupt to MU-3 */
  HSE_MU3_RX_IRQn              = 145,              /**< Ored rx interrupt to MU-3 */
  HSE_MU3_ORED_IRQn            = 146,              /**< ORed general purpose interrupt request to MU-3 */
  DDR0_SCRUB_IRQn              = 147,              /**< Scrubber interrupt indicating one full address range sweep */
  DDR0_PHY_IRQn                = 148,              /**< PHY address decoding error inside DDR SS, PHY interrupt */
  CTU_FIFO_FULL_EMPTY_IRQn     = 149,              /**< FIFO 0,1,2,3 full  or empty or overflow or overrun interrupt */
  CTU_M_RELOAD_IRQn            = 150,              /**< Master reload interrupt,Trigger0 interrupt,Trigger1 interrupt,Trigger2 interrupt,Trigger3 interrupt,Trigger4 interrupt,Trigger5 interrupt,Trigger6 interrupt,Trigger7 interrupt,ADC command interrupt */
  CTU_ERR_IRQn                 = 151,              /**< Error interrupt */
  TMU_ALARM_IRQn               = 152,              /**< Level sensitive temperature alarm interrupt,Level sensitive citical temperature alarm interrupt */
  RTC_SYS_CONT_IRQn            = 153,              /**< RTCF or ROVRF interrupt to be serviced by the system controller, APIF interrupt to be serviced by the system controller */
  PCIE0_ORED_DMA_IRQn          = 155,              /**< Logical OR of PCIe DMA interrupts */
  PCIE0_LINK_IRQn              = 156,              /**< Link request status interrupt */
  PCIE0_AXI_MSI_IRQn           = 157,              /**< DSP AXI MSI Interrupt Detected */
  PCIE0_PHY_DOWM_IRQn          = 158,              /**< PHY link down interrupt */
  PCIE0_PHY_UP_IRQn            = 159,              /**< PHY link up interrupt */
  PCIE0_INTA_IRQn              = 160,              /**< Interrupt indicating INTA message received */
  PCIE0_INTB_IRQn              = 161,              /**< Interrupt indicating INTB message received */
  PCIE0_INTC_IRQn              = 162,              /**< Interrupt indicating INTC message received */
  PCIE0_INTD_IRQn              = 163,              /**< Interrupt indicating INTD message received */
  PCIE0_MISC_IRQn              = 164,              /**< Miscellaneous interrupt generated by PCIe Subsystem */
  PCIE0_PCS_IRQn               = 165,              /**< PCS interrupt */
  PCIE0_TLP_NC_IRQn            = 166,              /**< TLP request has not completed within the expected time window */
  CORTEX_A53_ERR_L2RAM_CLUSTER0_IRQn = 183,        /**< Error indicator for L2 RAM double-bit ECC error for cluster0 */
  CORTEX_A53_ERR_AXI_CLUSTER0_IRQn = 184,          /**< A53:  Cluster0 Error indicator for AXI or CH bus error/R52: Cluster0 core1 livelock error */
  CORTEX_A53_ERR_L2RAM_CLUSTER1_IRQn = 185,        /**< Error indicator for L2 RAM double-bit ECC error for cluster1 */
  CORTEX_A53_ERR_AXI_CLUSTER1_IRQn = 186,          /**< A53:  Cluster1 Error indicator for AXI bus error/R52: Cluster1 core1 livelock error */
  JDC_IRQn                     = 187,              /**< Indicates data ready to be read from JIN_IPS register or new data can be written to JOUT_IPS register when asserted */
  SWT8_IRQn                    = 188,              /**< Interrupt Request */
  SWT9_IRQn                    = 189,              /**< Interrupt Request */
  SWT10_IRQn                   = 190,              /**< Interrupt Request */
  SWT11_IRQn                   = 191,              /**< Interrupt Request */
  STM8_IRQn                    = 192,              /**< Interrupt Channel Request 0,1,2,3 */
  STM9_IRQn                    = 193,              /**< Interrupt Channel Request 0,1,2,3 */
  STM10_IRQn                   = 194,              /**< Interrupt Channel Request 0,1,2,3 */
  STM11_IRQn                   = 195,              /**< Interrupt Channel Request 0,1,2,3 */
  MCSCM_INT7_IRQn              = 196,              /**< Software generated CPU interrupt to M7/A53 core - interrupt#7 */
  MCSCM_INT8_IRQn              = 197,              /**< Software generated CPU interrupt to M7/A53 core - interrupt#8 */
  MCSCM_INT9_IRQn              = 198,              /**< Software generated CPU interrupt to M7/A53 core - interrupt#9 */
  MCSCM_INT10_IRQn             = 199,              /**< Software generated CPU interrupt to M7/A53 core - interrupt#10 */
  MCSCM_INT11_IRQn             = 200,              /**< Software generated CPU interrupt to M7/A53 core - interrupt#11 */
  LLCE0_INT0_IRQn              = 202,              /**< Host Interrupt from Core0 */
  LLCE0_INT1_IRQn              = 203,              /**< Host Interrupt from Core1 */
  LLCE0_INT2_IRQn              = 204,              /**< Host Interrupt from Core2 */
  LLCE0_INT3_IRQn              = 205,              /**< Host Interrupt from Core3 */
  LLCE0_ICSR14_IRQn            = 206,              /**< FIFO ICSR14 */
  LLCE0_ICSR15_IRQn            = 207,              /**< FIFO ICSR15 */
  LLCE0_ICSR16_IRQn            = 208,              /**< FIFO ICSR16 */
  LLCE0_ICSR17_IRQn            = 209,              /**< FIFO ICSR17 */
  LLCE0_ICSR18_IRQn            = 210,              /**< FIFO ICSR18 */
  LLCE0_ICSR19_IRQn            = 211,              /**< FIFO ICSR19 */
  LLCE0_ICSR20_IRQn            = 212,              /**< FIFO ICSR20 */
  LLCE0_ICSR21_IRQn            = 213,              /**< FIFO ICSR21 */
  LLCE0_ICSR22_IRQn            = 214,              /**< FIFO ICSR22 */
  LLCE0_ICSR23_IRQn            = 215,              /**< FIFO ICSR23 */
  LLCE0_ICSR24_IRQn            = 216,              /**< FIFO ICSR24 */
  LLCE0_ICSR25_IRQn            = 217,              /**< FIFO ICSR25 */
  LLCE0_ICSR26_IRQn            = 218,              /**< FIFO ICSR26 */
  LLCE0_ICSR27_IRQn            = 219,              /**< FIFO ICSR27 */
  PFE0_CH0_STAT_IRQn           = 222,              /**< Channel 0 interrupt signal status */
  PFE0_CH1_STAT_IRQn           = 223,              /**< Channel 1 interrupt signal status */
  PFE0_CH2_STAT_IRQn           = 224,              /**< Channel 2 interrupt signal status */
  PFE0_CH3_STAT_IRQn           = 225,              /**< Channel 3 interrupt signal status */
  PFE0_BMU1_BMU2_IRQn          = 226,              /**< Either BMU1 or BMU2 interrupt */
  PFE0_HIF_NC_IRQn             = 227,              /**< HIF no copy */
  PFE0_UT_GPT_IRQn             = 228,              /**< Utilpe or GPT interrupt */
  PFE0_PMT_IRQn                = 229,              /**< PMT interrupt */
  PFE0_ORED_IRQn               = 230,              /**< Logical OR all interrupts from MMC and PCS and MAC */
  STM_TS_CH_REQ_IRQn           = 236,              /**< Interrupt Channel Request 0,1,2,3 */
  SIUL2_ORED_IRQn              = 242,              /**< Logical OR of all pin interrupts */
  USB0_OTG_CORE_IRQn           = 243,              /**< OTG CORE Interrupt */
  USB0_OTG_WKP_IRQn            = 244,              /**< OTG Wakeup Interrupt */
  WKPU_GRP_IRQn                = 245,              /**< interrupts from pad group 0,1,2,3 */
  PCIE1_ORED_DMA_IRQn          = 246,              /**< Logical OR of PCIe DMA interrupts */
  PCIE1_STAT_IRQn              = 247,              /**< Link request status interrupt */
  PCIE1_AXI_MSI_IRQn           = 248,              /**< DSP AXI MSI Interrupt Detected */
  PCIE1_PHY_LDOWN_IRQn         = 249,              /**< PHY link down interrupt */
  PCIE1_PHY_LUP_IRQn           = 250,              /**< PHY link up interrupt */
  PCIE1_INTA_IRQn              = 251,              /**< Interrupt indicating INTA message received */
  PCIE1_INTB_IRQn              = 252,              /**< Interrupt indicating INTB message received */
  PCIE1_INTC_IRQn              = 253,              /**< Interrupt indicating INTC message received */
  PCIE1_INTD_IRQn              = 254,              /**< Interrupt indicating INTD message received */
  PCIE1_MISC_IRQn              = 255,              /**< Miscellaneous interrupt generated by PCIe Subsystem */
  PCIE1_PCS_IRQn               = 256,              /**< PCS interrupt */
  PCIE1_TLP_IRQn               = 257,              /**< TLP request has not completed within the expected time window */
  XRDC_ERR_IRQn                = 261,              /**< XRDC Error Interrupt */
  XRDC_MANAGER_ERR_IRQn        = 262               /**< XRDC Error Interrupt */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_vector_numbers */


/* ----------------------------------------------------------------------------
   -- Cortex A53 Core Configuration
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Cortex_Core_Configuration Cortex A53 Core Configuration
 * @{
 */

#define __CA53_REV                     0x0004    /**< Core revision r0p4 */
#define __MPU_PRESENT                  1         /**< Defines if an MPU is present or not */
#define __NVIC_PRIO_BITS               4         /**< Number of priority bits implemented in the NVIC */
#define __Vendor_SysTickConfig         0         /**< Vendor specific implementation of SysTickConfig is defined */
#define __FPU_PRESENT                  1         /**< Defines if an FPU is present or not */


/*!
 * @}
 */ /* end of group Cortex_Core_Configuration */


/* ----------------------------------------------------------------------------
   -- SDK Compatibility
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SDK_Compatibility_Symbols SDK Compatibility
 * @{
 */

/* No SDK compatibility issues. */

/*!
 * @}
 */ /* end of group SDK_Compatibility_Symbols */


#endif  /* #if !defined(S32G399A_A53_COMMON_H_) */

