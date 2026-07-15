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
==================================================================================================*/

#include "Linflexd_Uart_Ip_Types.h"
#include "Linflexd_Uart_Ip_Cfg.h"
#include "StandardTypes.h"
#if (LINFLEXD_UART_IP_HAS_DMA_ENABLED == STD_ON)
    #include "Dma_Ip.h"
#endif
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_VENDOR_ID_C                     43
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MINOR_VERSION_C      4
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_MAJOR_VERSION_C              4
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_MINOR_VERSION_C              0
#define LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_PATCH_VERSION_C              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Checks against Linflexd_Uart_Ip_Types.h */
#if (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_VENDOR_ID_C != LINFLEXD_UART_IP_TYPES_VENDOR_ID)
    #error "Linflexd_Uart_Ip[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBcfg.c and Linflexd_Uart_Ip_Types.h have different vendor ids"
#endif
#if ((LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != LINFLEXD_UART_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MINOR_VERSION_C    != LINFLEXD_UART_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_REVISION_VERSION_C != LINFLEXD_UART_IP_TYPES_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Linflexd_Uart_Ip[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBcfg.c and Linflexd_Uart_Ip_Types.h are different"
#endif
#if ((LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_MAJOR_VERSION_C != LINFLEXD_UART_IP_TYPES_SW_MAJOR_VERSION) || \
     (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_MINOR_VERSION_C != LINFLEXD_UART_IP_TYPES_SW_MINOR_VERSION) || \
     (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_PATCH_VERSION_C != LINFLEXD_UART_IP_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Linflexd_Uart_Ip[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBcfg.c and Linflexd_Uart_Ip_Types.h are different"
#endif

/* Checks against Linflexd_Uart_Ip_Cfg.h */
#if (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_VENDOR_ID_C != LINFLEXD_UART_IP_CFG_VENDOR_ID)
    #error "Linflexd_Uart_Ip[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBcfg.c and Linflexd_Uart_Ip_Cfg.h have different vendor ids"
#endif
#if ((LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != LINFLEXD_UART_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MINOR_VERSION_C    != LINFLEXD_UART_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_REVISION_VERSION_C != LINFLEXD_UART_IP_CFG_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Linflexd_Uart_Ip[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBcfg.c and Linflexd_Uart_Ip_Cfg.h are different"
#endif
#if ((LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_MAJOR_VERSION_C != LINFLEXD_UART_IP_CFG_SW_MAJOR_VERSION) || \
     (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_MINOR_VERSION_C != LINFLEXD_UART_IP_CFG_SW_MINOR_VERSION) || \
     (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_SW_PATCH_VERSION_C != LINFLEXD_UART_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Linflexd_Uart_Ip[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBcfg.c and Linflexd_Uart_Ip_Cfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and StandardTypes.h header file are of the same Autosar version */
    #if ((LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
         (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Linflexd_Uart_Ip[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBcfg.c and StandardTypes.h are different"
    #endif
    /* Checks against Dma_Ip.h */
    #if (LINFLEXD_UART_IP_HAS_DMA_ENABLED == STD_ON)
        #if ((LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_AR_RELEASE_MAJOR_VERSION) || \
             (LINFLEXD_UART_IP[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBCFG_AR_RELEASE_MINOR_VERSION_C != DMA_IP_AR_RELEASE_MINOR_VERSION))
            #error "AutoSar Version Numbers of Linflexd_Uart_Ip[!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!]_PBcfg.c and Dma_Ip.h are different"
        #endif
    #endif
#endif
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                   STATE STRUCTURE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

#define UART_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#include "Uart_MemMap.h"

extern Linflexd_Uart_Ip_StateStructureType Linflexd_Uart_Ip_apStateStructure[LINFLEXD_INSTANCE_COUNT];

#define UART_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#include "Uart_MemMap.h"

#define UART_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Uart_MemMap.h"

[!NOCODE!]
[!LOOP "UartGlobalConfig/UartChannel/*"!][!//

[!VAR "Callback"  = "'NULL_PTR'"!]
[!VAR "CallbackParam" = "'NULL_PTR'"!]

[!IF "../../../GeneralConfiguration/UartCallbackCapability"!]
    [!IF "(node:exists(../../../GeneralConfiguration/UartCallback))"!]
        [!VAR "Callback" = "'(Linflexd_Uart_Ip_CallbackType)Uart_Ipw_Callback'"!]
    [!ENDIF!]
[!ENDIF!]
[!CODE!]
/**
* @brief          Hardware configuration for Uart Hardware - Configuration:
*
* @api
*/
const Linflexd_Uart_Ip_UserConfigType Linflexd_Uart_Ip_xHwConfigPB_[!"UartChannelId"!][!IF "var:defined('postBuildVariant')"!]_[!"$postBuildVariant"!][!ENDIF!] =
{
    /* Desire Baud-rate value*/
    [!"num:i(substring-after(DetailModuleConfiguration/DesireBaudrate, 'LINFLEXD_UART_BAUDRATE_'))"!]U,[!//
[!ENDCODE!]
    [!VAR "LinflexdBaudrate" = "num:i(substring-after(DetailModuleConfiguration/DesireBaudrate, 'LINFLEXD_UART_BAUDRATE_'))"!]
    [!SELECT "node:ref(UartClockRef)"!]
    [!INCLUDE "Uart_BaudRate_Comp.m"!][!//
[!ENDSELECT!][!//

[!CODE!]
    /* Baud-rate mantissa*/
    [!"$Mantissa"!]U,
    /* Baud-rate Divisor*/
    [!"$FractionNumerator"!]U,
    /* Parity control */
    (boolean)[!IF "DetailModuleConfiguration/UartParityEnable"!]TRUE[!ELSE!]FALSE[!ENDIF!],
    /* Parity type */
    [!"DetailModuleConfiguration/UartParityType"!],
    /* Number of stop bits, 1 stop bit (default) or 2 stop bits */
    [!"DetailModuleConfiguration/UartStopBitNumber"!],
    /* Number of bits per transmitted/received word */
    [!"DetailModuleConfiguration/UartWordLength"!],
    /* Type of UART transfer (interrupt/dma based) */
    [!"DetailModuleConfiguration/UartInteruptDmaMethod"!],
    /* Callback to invoke for Uart Events.*/
    [!"$Callback"!],
    /* User callback parameter pointer.*/
    [!"$CallbackParam"!],
#if (LINFLEXD_UART_IP_HAS_DMA_ENABLED == STD_ON)
    /* DMA channel number for DMA-based RX. */
[!IF "(node:exists(DetailModuleConfiguration/UartDmaRxChannelRef))"!][!//
[!SELECT "node:ref(DetailModuleConfiguration/UartDmaRxChannelRef)"!][!//
    [!"dmaLogicChannel_LogicName"!],
[!ENDSELECT!][!//
[!ELSE!][!//
    255,
[!ENDIF!][!//
    /* DMA channel number for DMA-based TX. */
[!IF "(node:exists(DetailModuleConfiguration/UartDmaTxChannelRef))"!][!//
[!SELECT "node:ref(DetailModuleConfiguration/UartDmaTxChannelRef)"!][!//
    [!"dmaLogicChannel_LogicName"!],
[!ENDSELECT!][!//
[!ELSE!][!//
    255,
[!ENDIF!][!//
#endif
    /* Runtime state structure reference */
    &Linflexd_Uart_Ip_apStateStructure[[!"UartChannelId"!]]
};
[!ENDCODE!]
[!ENDLOOP!][!//
[!ENDNOCODE!]
#define UART_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Uart_MemMap.h"
/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */