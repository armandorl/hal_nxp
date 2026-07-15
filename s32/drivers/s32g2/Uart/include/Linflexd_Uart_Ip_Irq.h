/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : LINFLEXD
*   Dependencies         : 
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 4.0.0
*   Build Version        : S32_RTD_4_0_0_D2210_ASR_REL_4_4_REV_0000_20221031
*
*   (c) Copyright 2022 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef LINFLEXD_UART_IP_IRQ_H
#define LINFLEXD_UART_IP_IRQ_H

/**
*   @file
*   @defgroup linflexd_uart_ip Linflexd UART IPL
*   @addtogroup  linflexd_uart_ip Linflexd UART IPL
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Linflexd_Uart_Ip_Defines.h"
#include "Linflexd_Uart_Ip_Cfg.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LINFLEXD_UART_IP_IRQ_VENDOR_ID                    43
#define LINFLEXD_UART_IP_IRQ_AR_RELEASE_MAJOR_VERSION     4
#define LINFLEXD_UART_IP_IRQ_AR_RELEASE_MINOR_VERSION     4
#define LINFLEXD_UART_IP_IRQ_AR_RELEASE_REVISION_VERSION  0
#define LINFLEXD_UART_IP_IRQ_SW_MAJOR_VERSION             4
#define LINFLEXD_UART_IP_IRQ_SW_MINOR_VERSION             0
#define LINFLEXD_UART_IP_IRQ_SW_PATCH_VERSION             0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Linflexd_Uart_Ip_Defines.h */
#if (LINFLEXD_UART_IP_IRQ_VENDOR_ID != LINFLEXD_UART_IP_DEFINES_VENDOR_ID)
    #error "Linflexd_Uart_Ip_Irq.h and Linflexd_Uart_Ip_Defines.h have different vendor ids"
#endif
#if ((LINFLEXD_UART_IP_IRQ_AR_RELEASE_MAJOR_VERSION    != LINFLEXD_UART_IP_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (LINFLEXD_UART_IP_IRQ_AR_RELEASE_MINOR_VERSION    != LINFLEXD_UART_IP_DEFINES_AR_RELEASE_MINOR_VERSION) || \
     (LINFLEXD_UART_IP_IRQ_AR_RELEASE_REVISION_VERSION != LINFLEXD_UART_IP_DEFINES_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Linflexd_Uart_Ip_Irq.h and Linflexd_Uart_Ip_Defines.h are different"
#endif
#if ((LINFLEXD_UART_IP_IRQ_SW_MAJOR_VERSION != LINFLEXD_UART_IP_DEFINES_SW_MAJOR_VERSION) || \
     (LINFLEXD_UART_IP_IRQ_SW_MINOR_VERSION != LINFLEXD_UART_IP_DEFINES_SW_MINOR_VERSION) || \
     (LINFLEXD_UART_IP_IRQ_SW_PATCH_VERSION != LINFLEXD_UART_IP_DEFINES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Linflexd_Uart_Ip_Irq.h and Linflexd_Uart_Ip_Defines.h are different"
#endif

/* Checks against Linflexd_Uart_Ip_Cfg.h */
#if (LINFLEXD_UART_IP_IRQ_VENDOR_ID != LINFLEXD_UART_IP_CFG_VENDOR_ID)
    #error "Linflexd_Uart_Ip_Irq.h and Linflexd_Uart_Ip_Cfg.h have different vendor ids"
#endif
#if ((LINFLEXD_UART_IP_IRQ_AR_RELEASE_MAJOR_VERSION    != LINFLEXD_UART_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LINFLEXD_UART_IP_IRQ_AR_RELEASE_MINOR_VERSION    != LINFLEXD_UART_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LINFLEXD_UART_IP_IRQ_AR_RELEASE_REVISION_VERSION != LINFLEXD_UART_IP_CFG_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Linflexd_Uart_Ip_Irq.h and Linflexd_Uart_Ip_Cfg.h are different"
#endif
#if ((LINFLEXD_UART_IP_IRQ_SW_MAJOR_VERSION != LINFLEXD_UART_IP_CFG_SW_MAJOR_VERSION) || \
     (LINFLEXD_UART_IP_IRQ_SW_MINOR_VERSION != LINFLEXD_UART_IP_CFG_SW_MINOR_VERSION) || \
     (LINFLEXD_UART_IP_IRQ_SW_PATCH_VERSION != LINFLEXD_UART_IP_CFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Linflexd_Uart_Ip_Irq.h and Linflexd_Uart_Ip_Cfg.h are different"
#endif
/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/
#define UART_START_SEC_CODE
#include "Uart_MemMap.h"

#if (LINFLEXD_INSTANCE_COUNT > 0U)
#ifdef LINFLEXD_UART_IP_INSTANCE_USING_0
/* Implementation of LINFLEXD0 handler named in startup code. */
ISR(LINFLEXD0_UART_IRQHandler);
#endif
#endif

#if (LINFLEXD_INSTANCE_COUNT > 1U)
#ifdef LINFLEXD_UART_IP_INSTANCE_USING_1
/* Implementation of LINFLEXD1 handler named in startup code. */
ISR(LINFLEXD1_UART_IRQHandler);
#endif
#endif

#if (LINFLEXD_INSTANCE_COUNT > 2U)
#ifdef LINFLEXD_UART_IP_INSTANCE_USING_2
/* Implementation of LINFLEXD2 handler named in startup code. */
ISR(LINFLEXD2_UART_IRQHandler);
#endif
#endif
#if (LINFLEXD_UART_IP_HAS_DMA_ENABLED == STD_ON)
#ifdef LINFLEXD_UART_IP_INSTANCE_USING_0
#if (LINFLEXD_INSTANCE_COUNT > 0U)
void Linflexd_0_Uart_Ip_DmaRxCompleteCallback(void);
void Linflexd_0_Uart_Ip_DmaTxCompleteCallback(void);
#endif
#endif
#if (LINFLEXD_INSTANCE_COUNT > 1U)
#ifdef LINFLEXD_UART_IP_INSTANCE_USING_1
void Linflexd_1_Uart_Ip_DmaRxCompleteCallback(void);
void Linflexd_1_Uart_Ip_DmaTxCompleteCallback(void);
#endif
#endif
#if (LINFLEXD_INSTANCE_COUNT > 2U)
#ifdef LINFLEXD_UART_IP_INSTANCE_USING_2
void Linflexd_2_Uart_Ip_DmaRxCompleteCallback(void);
void Linflexd_2_Uart_Ip_DmaTxCompleteCallback(void);
#endif
#endif
#endif
#ifdef __cplusplus
}
#endif

#define UART_STOP_SEC_CODE
#include "Uart_MemMap.h"

/** @} */

#endif /* LINFLEXD_UART_IP_IRQ_H */
