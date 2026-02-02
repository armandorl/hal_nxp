/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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

#ifndef SCHM_CAN_43_FLEXCAN_H
#define SCHM_CAN_43_FLEXCAN_H

/**
*   @file
*
*   @addtogroup RTE_MODULE
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "SchM_Can.h"
/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SCHM_CAN_43_FLEXCAN_AR_RELEASE_MAJOR_VERSION     4
#define SCHM_CAN_43_FLEXCAN_AR_RELEASE_MINOR_VERSION     4
#define SCHM_CAN_43_FLEXCAN_AR_RELEASE_REVISION_VERSION  0
#define SCHM_CAN_43_FLEXCAN_SW_MAJOR_VERSION             4
#define SCHM_CAN_43_FLEXCAN_SW_MINOR_VERSION             0
#define SCHM_CAN_43_FLEXCAN_SW_PATCH_VERSION             0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
#define Can_43_FLEXCAN_MainFunction_Write   Can_MainFunction_Write
#define Can_43_FLEXCAN_MainFunction_Write_0 Can_MainFunction_Write_0
#define Can_43_FLEXCAN_MainFunction_Write_1 Can_MainFunction_Write_1
#define Can_43_FLEXCAN_MainFunction_Write_2 Can_MainFunction_Write_2
#define Can_43_FLEXCAN_MainFunction_Write_3 Can_MainFunction_Write_3
#define Can_43_FLEXCAN_MainFunction_Write_4 Can_MainFunction_Write_4
#define Can_43_FLEXCAN_MainFunction_Write_5 Can_MainFunction_Write_5
#define Can_43_FLEXCAN_MainFunction_Write_6 Can_MainFunction_Write_6
#define Can_43_FLEXCAN_MainFunction_Write_7 Can_MainFunction_Write_7
#define Can_43_FLEXCAN_MainFunction_Write_8 Can_MainFunction_Write_8
#define Can_43_FLEXCAN_MainFunction_Write_9 Can_MainFunction_Write_9
#define Can_43_FLEXCAN_MainFunction_Write_10    Can_MainFunction_Write_10
#define Can_43_FLEXCAN_MainFunction_Read    Can_MainFunction_Read
#define Can_43_FLEXCAN_MainFunction_Read_0  Can_MainFunction_Read_0
#define Can_43_FLEXCAN_MainFunction_Read_1  Can_MainFunction_Read_1
#define Can_43_FLEXCAN_MainFunction_Read_2  Can_MainFunction_Read_2
#define Can_43_FLEXCAN_MainFunction_Read_3  Can_MainFunction_Read_3
#define Can_43_FLEXCAN_MainFunction_Read_4  Can_MainFunction_Read_4
#define Can_43_FLEXCAN_MainFunction_Read_5  Can_MainFunction_Read_5
#define Can_43_FLEXCAN_MainFunction_Read_6  Can_MainFunction_Read_6
#define Can_43_FLEXCAN_MainFunction_Read_7  Can_MainFunction_Read_7
#define Can_43_FLEXCAN_MainFunction_Read_8  Can_MainFunction_Read_8
#define Can_43_FLEXCAN_MainFunction_Read_9  Can_MainFunction_Read_9
#define Can_43_FLEXCAN_MainFunction_Read_10 Can_MainFunction_Read_10
#define Can_43_FLEXCAN_MainFunction_BusOff  Can_MainFunction_BusOff
#define Can_43_FLEXCAN_MainFunction_Wakeup  Can_MainFunction_Wakeup
#define Can_43_FLEXCAN_MainFunction_Mode    Can_MainFunction_Mode

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* SCHM_CAN_43_FLEXCAN_H */
