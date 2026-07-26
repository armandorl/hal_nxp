/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : IPV_QSPI
*   Dependencies         : none
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

#ifndef QSPI_IP_BOARD_InitPeripherals_PBCFG_H
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_H

/**
*   @file Qspi_Ip_BOARD_InitPeripherals_PBcfg.h
*
*   @addtogroup FLS
*   @{
*/

/* implements Qspi_Ip_PBcfg.h_Artifact */

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/


/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_VENDOR_ID                    43

#define QSPI_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_MAJOR_VERSION     4
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_MINOR_VERSION     4
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_REVISION_VERSION  0

#define QSPI_IP_BOARD_InitPeripherals_PBCFG_SW_MAJOR_VERSION             4
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_SW_MINOR_VERSION             0
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_SW_PATCH_VERSION             0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
/* Defines for direct access to the virtual LUT table */
/* Configuration: MemCfg_0 */
#define MEMCFG_0_BOARD_INITPERIPHERALS_LUT_SEQUENCE_READ                      0U
#define MEMCFG_0_BOARD_INITPERIPHERALS_LUT_SEQUENCE_WRITE                     4U
#define MEMCFG_0_BOARD_INITPERIPHERALS_LUT_SEQUENCE_ERASE                     8U
#define MEMCFG_0_BOARD_INITPERIPHERALS_LUT_SEQUENCE_READSR                   11U
#define MEMCFG_0_BOARD_INITPERIPHERALS_LUT_SEQUENCE_WRITESR                  14U
#define MEMCFG_0_BOARD_INITPERIPHERALS_LUT_SEQUENCE_WRITEENABLE              17U
#define MEMCFG_0_BOARD_INITPERIPHERALS_LUT_SEQUENCE_RESETENABLE              19U
#define MEMCFG_0_BOARD_INITPERIPHERALS_LUT_SEQUENCE_RESET                    21U
#define MEMCFG_0_BOARD_INITPERIPHERALS_LUT_SEQUENCE_FASTREAD                 23U
#define MEMCFG_0_BOARD_INITPERIPHERALS_LUT_SEQUENCE_FASTWRITE                29U
#define MEMCFG_0_BOARD_INITPERIPHERALS_LUT_SEQUENCE_READDEVICEID             33U


/*==================================================================================================
                                             ENUMS
==================================================================================================*/


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

#define FLS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fls_MemMap.h"


/* Controller connections */
extern const Qspi_Ip_ControllerConfigType QspiConfigSet_BOARD_InitPeripherals_paQspiUnitCfg[1U];

/* Memory configurations */
extern const Qspi_Ip_MemoryConfigType QspiConfigSet_BOARD_InitPeripherals_paFlashCfg[1U];

/* Memory-controller connections */
extern const Qspi_Ip_MemoryConnectionType QspiConfigSet_BOARD_InitPeripherals_paFlashConnectionCfg[1U];

#define FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fls_MemMap.h"

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/**@}*/

#endif    /* #ifndef QSPI_IP_BOARD_InitPeripherals_PBCFG_H */

