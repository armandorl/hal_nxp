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

#ifndef LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_H
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_H

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
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Linflexd_Uart_Ip_Types.h"

/*==================================================================================================
                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_VENDOR_ID                     43
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MAJOR_VERSION      4
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MINOR_VERSION      4
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_REVISION_VERSION   0
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_MAJOR_VERSION              4
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_MINOR_VERSION              0
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_PATCH_VERSION              0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Linflexd_Uart_Ip_Types.h */
#if (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_VENDOR_ID != LINFLEXD_UART_IP_TYPES_VENDOR_ID)
    #error "Linflexd_Uart_Ip[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCfg.h and Linflexd_Uart_Ip_Types.h have different vendor ids"
#endif
#if ((LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MAJOR_VERSION   != LINFLEXD_UART_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MINOR_VERSION   != LINFLEXD_UART_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_REVISION_VERSION!= LINFLEXD_UART_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of Linflexd_Uart_Ip[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCfg.h and Linflexd_Uart_Ip_Types.h are different"
#endif
#if ((LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_MAJOR_VERSION!= LINFLEXD_UART_IP_TYPES_SW_MAJOR_VERSION) || \
     (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_MINOR_VERSION!= LINFLEXD_UART_IP_TYPES_SW_MINOR_VERSION) || \
     (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_PATCH_VERSION!= LINFLEXD_UART_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Linflexd_Uart_Ip[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCfg.h and Linflexd_Uart_Ip_Types.h are different"
#endif


/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                        GLOBAL MACROS
==================================================================================================*/
/**
* @brief          Link Uart channels symbolic names with Uart hardware channel IDs.
* @details        Link Uart channels symbolic names with Uart hardware channel IDs.
*
* @api
*/
[!VAR "UartSingleIns" = "'false'"!][!//
[!IF "node:exists(as:modconf("Resource")[1]/ResourceGeneral/ResourceSubderivative)"!][!//
    [!IF "contains(as:modconf("Resource")[1]/ResourceGeneral/ResourceSubderivative, 's32r41')"!][!//
        [!VAR "UartSingleIns" = "'true'"!][!//
    [!ENDIF!][!//
[!ENDIF!][!//
[!FOR "index" = "0" TO "num:i(ecu:get('Uart.UartGlobalConfig.UartChannel'))-1"!][!//
    [!IF "$UartSingleIns"!][!//
        [!VAR "MaxHwChannels" = "string((ecu:list('Uart.UartGlobalConfig.UartChannel.UartHwChannel.List'))[$index+1])"!][!//
    [!ELSE!][!//
        [!VAR "MaxHwChannels" = "string((ecu:list('Uart.UartGlobalConfig.UartChannel.UartHwChannel.List'))[$index+1])"!][!//
    [!ENDIF!]
    [!VAR "ChannelFound" = "0"!][!//
    [!LOOP "UartGlobalConfig/UartChannel/*"!][!//
        [!VAR "HardwareChannel" = "string(UartHwChannel)"!][!//
        [!IF "$MaxHwChannels = $HardwareChannel"!][!//
            [!IF "$ChannelFound = 0"!][!//
                [!VAR "HWChannelUsed" = "concat('LINFLEXD_UART_IP_INSTANCE_USING_',substring-after($HardwareChannel,'_'))"!][!//
[!CODE!]
#ifndef [!"$HWChannelUsed"!]
    #define [!"$HWChannelUsed"!]    [!"substring-after($HardwareChannel,'_')"!]U
#endif
[!ENDCODE!]
                [!VAR "ChannelFound" = "1"!][!//
            [!ENDIF!][!//
        [!ENDIF!][!//
    [!ENDLOOP!][!//
[!ENDFOR!][!//

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

[!NOCODE!]
[!IF "var:defined('postBuildVariant')"!][!//
  [!VAR "PostBuildVariantNameUnderscore" = "concat('_',$postBuildVariant)"!][!//
[!CODE!]#define LINFLEXD_UART_IP_CONFIG_[!"$postBuildVariant"!]_PB \[!CR!][!ENDCODE!]
[!ELSE!][!//
  [!VAR "PostBuildVariantNameUnderscore" = "string(null)"!][!//
[!CODE!]#define LINFLEXD_UART_IP_CONFIG_PB \[!CR!][!ENDCODE!]
[!ENDIF!][!//
[!LOOP "UartGlobalConfig/UartChannel/*"!][!//
[!CODE!][!WS "4"!]extern const Linflexd_Uart_Ip_UserConfigType Linflexd_Uart_Ip_xHwConfigPB_[!"UartChannelId"!][!"$PostBuildVariantNameUnderscore"!]; \[!CR!][!ENDCODE!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!]

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_H */
