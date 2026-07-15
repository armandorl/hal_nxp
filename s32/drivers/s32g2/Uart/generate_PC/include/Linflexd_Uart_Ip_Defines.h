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

#ifndef LINFLEXD_UART_IP_DEFINES_H
#define LINFLEXD_UART_IP_DEFINES_H

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
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
* 4) user callback header files
==================================================================================================*/

[!NOCODE!][!// Include specific header file
[!VAR "UartSingleIns" = "'false'"!][!//
[!IF "node:exists(as:modconf("Resource")[1]/ResourceGeneral/ResourceSubderivative)"!][!//
    [!IF "contains(as:modconf("Resource")[1]/ResourceGeneral/ResourceSubderivative, 's32g2')"!][!//
[!CODE!][!WS "0"!]#include "S32G274A_LINFLEXD.h"[!CR!][!ENDCODE!][!//
    [!ELSEIF "contains(as:modconf("Resource")[1]/ResourceGeneral/ResourceSubderivative, 's32r45')"!][!//
[!CODE!][!WS "0"!]#include "S32R45_LINFLEXD.h"[!CR!][!ENDCODE!][!//
    [!ELSEIF "contains(as:modconf("Resource")[1]/ResourceGeneral/ResourceSubderivative, 's32g3')"!][!//
[!CODE!][!WS "0"!]#include "S32G399A_LINFLEXD.h"[!CR!][!ENDCODE!][!//
    [!ELSEIF "contains(as:modconf("Resource")[1]/ResourceGeneral/ResourceSubderivative, 's32r41')"!][!//
        [!VAR "UartSingleIns" = "'true'"!][!//
[!CODE!][!WS "0"!]#include "S32R41_LINFLEXD.h"[!CR!][!ENDCODE!][!//
    [!ENDIF!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//
#include "Mcal.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LINFLEXD_UART_IP_DEFINES_VENDOR_ID                     43
#define LINFLEXD_UART_IP_DEFINES_AR_RELEASE_MAJOR_VERSION      4
#define LINFLEXD_UART_IP_DEFINES_AR_RELEASE_MINOR_VERSION      4
#define LINFLEXD_UART_IP_DEFINES_AR_RELEASE_REVISION_VERSION   0
#define LINFLEXD_UART_IP_DEFINES_SW_MAJOR_VERSION              4
#define LINFLEXD_UART_IP_DEFINES_SW_MINOR_VERSION              0
#define LINFLEXD_UART_IP_DEFINES_SW_PATCH_VERSION              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Checks against Mcal.h */
    #if ((LINFLEXD_UART_IP_DEFINES_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (LINFLEXD_UART_IP_DEFINES_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Linflexd_Uart_Ip_Defines.h and Mcal.h are different"
    #endif
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                     DEFINES AND MACROS
==================================================================================================*/

/* @brief Development error detection */
#define LINFLEXD_UART_IP_DEV_ERROR_DETECT       ([!IF "GeneralConfiguration/UartDevErrorDetect"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/* @brief Uart Osif source counter. This parameter is used to select between different OsIf counter implementation */
#define LINFLEXD_UART_IP_TIMEOUT_TYPE           ([!"GeneralConfiguration/UartTimeoutMethod"!])

/* @brief Number of loops before returning LINFLEXD_STATUS_TIMEOUT.*/
#define LINFLEXD_UART_IP_TIMEOUT_VALUE_US       ([!"GeneralConfiguration/UartTimeoutDuration"!]U)

/* @brief LINFLEXD rx/tx/error interrupt lines ORED together. */
#define LINFLEXD_UART_IP_ORED_INT_LINES         (1U)

/* @brief LINFLEXD DMA support */
#define LINFLEXD_UART_IP_HAS_DMA_ENABLED        ([!IF "GeneralConfiguration/UartDmaEnable"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/* @brief LINFLEXD DMA enabled instances */
[!NOCODE!]
[!VAR "StringTimeoutInterrupt" = "'{'"!][!//
[!VAR "TotalOfChannels" = "ecu:get('Uart.UartGlobalConfig.UartChannel')"!]
[!VAR "Found" = "0"!]
[!VAR "EnableTimeoutInterrupt" = "false()"!]
[!VAR "FeatureEnableTimeoutInterrupt" = "'(STD_OFF)'"!]

[!FOR "Id"="0" TO "$TotalOfChannels - 1"!]
    [!VAR "Found" = "0"!]
    [!LOOP "UartGlobalConfig/UartChannel/*"!]
        [!VAR "EnableTimeoutInterrupt" = "false()"!]
        [!VAR "HwChannel" = "substring-after(UartHwChannel,'_')"!]
        [!IF "$Id = num:i($HwChannel)"!]
            [!VAR "Found" = "1"!]
            [!IF "DetailModuleConfiguration/UartTimeoutEnable"!]
                [!VAR "EnableTimeoutInterrupt" = "true()"!]
                [!VAR "FeatureEnableTimeoutInterrupt" = "'(STD_ON)'"!]
            [!ENDIF!]
        [!BREAK!]
        [!ENDIF!]
    [!ENDLOOP!]
    [!IF "$Found = num:i(1)"!]
        [!IF "$EnableTimeoutInterrupt"!]
            [!IF "$Id = num:i($TotalOfChannels) - 1"!]
                [!VAR "StringTimeoutInterrupt" = "concat($StringTimeoutInterrupt, '(boolean) TRUE }')"!]
            [!ELSE!]
                [!VAR "StringTimeoutInterrupt" = "concat($StringTimeoutInterrupt, '(boolean) TRUE,')"!]
            [!ENDIF!]
        [!ELSE!]
            [!IF "$Id = $TotalOfChannels - 1"!]
                [!VAR "StringTimeoutInterrupt" = "concat($StringTimeoutInterrupt, '(boolean) FALSE }')"!]
            [!ELSE!]
                [!VAR "StringTimeoutInterrupt" = "concat($StringTimeoutInterrupt, '(boolean) FALSE,')"!]
            [!ENDIF!]
        [!ENDIF!]
    [!ELSE!]
        [!IF "$Id = $TotalOfChannels - 1"!]
            [!VAR "StringTimeoutInterrupt" = "concat($StringTimeoutInterrupt, '(boolean) FALSE }')"!]
        [!ELSE!]
            [!VAR "StringTimeoutInterrupt" = "concat($StringTimeoutInterrupt, '(boolean) FALSE,')"!]
        [!ENDIF!]
   [!ENDIF!]
[!ENDFOR!]
[!IF "$UartSingleIns"!][!//
[!CODE!]#define LINFLEXD_UART_IP_INST_HAS_DMA   {(boolean)[!"replaceAll(substring-before(substring-after(ecu:list('Uart.UartGlobalConfig.UartChannel.UartHasDMA.List'),'['),']'),', ',', (boolean)')"!]}[!ENDCODE!][!//
[!ELSE!][!//
[!CODE!]#define LINFLEXD_UART_IP_INST_HAS_DMA   {(boolean)[!"replaceAll(substring-before(substring-after(ecu:list('Uart.UartGlobalConfig.UartChannel.UartHasDMA.List'),'['),']'),', ',', (boolean)')"!]}[!ENDCODE!][!//
[!ENDIF!][!//
[!ENDNOCODE!]

/* @brief Support for User mode. If this parameter has been configured to TRUE, the Uart driver can be executed from both supervisor and user mode. */
#define LINFLEXD_UART_IP_ENABLE_USER_MODE_SUPPORT  [!IF "GeneralConfiguration/UartEnableUserModeSupport"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/* @brief Support for Uart Timeout Interrupt. If this parameter has been configured to TRUE, the Uart driver will enable Timeout Interrupt. */
#define LINFLEXD_UART_IP_ENABLE_TIMEOUT_INTERRUPT  [!"$FeatureEnableTimeoutInterrupt"!]

#if (STD_ON == LINFLEXD_UART_IP_ENABLE_TIMEOUT_INTERRUPT)
    /* @brief Array of instances that have timeout interrupt enabled. */
    #define LINFLEXD_UART_IP_ENABLE_TIMEOUT_INTERRUPT_PER_INSTANCE  [!"$StringTimeoutInterrupt"!]
#endif

/* Check the driver user mode is enabled only when the MCAL_ENABLE_USER_MODE_SUPPORT is enabled */
#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == LINFLEXD_UART_IP_ENABLE_USER_MODE_SUPPORT)
    #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Uart in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined.
  #endif /* (STD_ON == LINFLEXD_UART_IP_ENABLE_USER_MODE_SUPPORT) */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

#ifdef MCAL_LINFLEX_REG_PROT_AVAILABLE
    #if ((STD_ON == LINFLEXD_UART_IP_ENABLE_USER_MODE_SUPPORT) && (STD_ON == MCAL_LINFLEX_REG_PROT_AVAILABLE))
        /* @brief User mode enabled. */
        #define LINFLEXD_UART_IP_SET_USER_ACCESS_ALLOWED_AVAILABLE      (STD_ON)
    #else
        /* @brief User mode disabled. */
        #define LINFLEXD_UART_IP_SET_USER_ACCESS_ALLOWED_AVAILABLE      (STD_OFF)
    #endif
#else
    /* @brief User mode disabled. */
    #define LINFLEXD_UART_IP_SET_USER_ACCESS_ALLOWED_AVAILABLE      (STD_OFF)
#endif /* MCAL_LINFLEX_REG_PROT_AVAILABLE */
/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/



#ifdef __cplusplus
}
#endif

/** @} */

#endif /* LINFLEXD_UART_IP_DEFINES_H */
