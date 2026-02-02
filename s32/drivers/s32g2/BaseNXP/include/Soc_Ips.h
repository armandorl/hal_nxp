/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : S32G2XXM7
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

#ifndef SOC_IPS_H
#define SOC_IPS_H

/**
*   @file Soc_Ips.h
*
*   @addtogroup BASE_COMPONENT
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Platform_Types.h"
#include "IpVersionMacros.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SOC_IPS_VENDOR_ID                    43
#define SOC_IPS_MODULE_ID                    0
#define SOC_IPS_AR_RELEASE_MAJOR_VERSION     4
#define SOC_IPS_AR_RELEASE_MINOR_VERSION     4
#define SOC_IPS_AR_RELEASE_REVISION_VERSION  0
#define SOC_IPS_SW_MAJOR_VERSION             4
#define SOC_IPS_SW_MINOR_VERSION             0
#define SOC_IPS_SW_PATCH_VERSION             0

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if source file and Platform_Types.h header file are of the same Autosar version */
    #if ((SOC_IPS_AR_RELEASE_MAJOR_VERSION != PLATFORM_TYPES_AR_RELEASE_MAJOR_VERSION) || \
         (SOC_IPS_AR_RELEASE_MINOR_VERSION != PLATFORM_TYPES_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Soc_Ips.h and Platform_Types.h are different"
    #endif

    /* Check if source file and IpVersionMacros.h header file are of the same Autosar version */
    #if ((SOC_IPS_AR_RELEASE_MAJOR_VERSION != IPVERSIONMACROS_AR_RELEASE_MAJOR_VERSION) || \
         (SOC_IPS_AR_RELEASE_MINOR_VERSION != IPVERSIONMACROS_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Soc_Ips.h and IpVersionMacros.h are different"
    #endif
#endif

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/
/* 40 = 0x28 = CORTEXM_PLATFORM
 * 11 = 0x0B = S32G DERIVATIVE ID
 * 01 = 0x01 = Rev. 1
 * 16 = 0x10 = Draft P      (A-B-C-D-E-F-G-H-I-J-K-L-M-N-O-P-Q-R-S-T-U-V-W-X-Y-Z)
 IP_VERSION_NO = 0x280B010FUL
*/
/**
* @brief SAR ADC IP Version: ADC_12b1MSPS_SAR v00.00.01.02
* @details S32G2XXM7 IP Versions
*/
#define IPV_ADCDIG            (0x280B010FUL)

/**
* @brief DMAMUX IP Version: DMAMUX v06.01.03.00
* @details S32G2XXM7 IP Versions
*/
#define IPV_DMAMUX            (0x280B010FUL)

/**
* @brief DSPI IP Version: DSPI v06.01.08.03
* @details S32G2XXM7 IP Versions
*/
#define IPV_DSPI               (0x280B010FUL)

/**
* @brief WKUP IP Version: WKPU v01.00.14.01
* @details S32G2XXM7 IP Versions
*/
#define IPV_WKPU               (0x280B010FUL)

/**
* @brief CTU2 IP Version: CTU2 v00.00.16.00
* @details S32G2XXM7 IP Versions
*/
#define IPV_CTU               (0x280B010FUL)

/**
* @brief PIT_RTI IP Version: PIT_RTI v05.00.06.09
* @details S32G2XXM7 IP Versions
*/
#define IPV_PIT              (0x280B010FUL)

/**
* @brief PLL DIG IP Version: PLL DIG R02.00.04.30
* @details S32G2XXM7 IP Versions
*/
#define IPV_PLLDIG           (0x280B010FUL)

/**
* @brief SIUL2 IP Version: SIUL2 v1.3.c
* @details S32G2XXM7 IP Versions
*/
#define IPV_SIULV2             (0x280B010FUL)

/**
* @brief SSCM IP Version: SSCM 06.00.00.06
* @details S32G2XXM7 IP Versions
*/
#define IPV_SSCM                 (0x280B010FUL)

/**
* @brief LINFLEX IP Version: LINFLEX v5.4.hbs1
* @details S32G2XXM7 IP Versions
*/
#define IPV_LINFLEX           (0x280B010FUL)

/**
* @brief STCU IP Version: STA1_STCU2_IPS@v1.0.a_0.01
* @details S32G2XXM7 IP Versions
*/
#define IPV_STCU2             (0x280B010FUL)

/**
* @brief MCv2 IP Version: D_IP_magic_carpet_SYN [v04.03.00.00]
* @details S32G2XXM7 IP Versions
*/
#define IPV_MC                (0x280B010FUL)

/**
* @brief RTC IP Version: SSCM 00.00.03.03
* @details S32G2XXM7 IP Versions
*/
#define IPV_RTC                (0x280B010FUL)

/**
* @brief FTM IP Version: d_ip_flextimer32_syn.05.00.28.00
* @details S32G2XXM7 IP Versions
*/
#define IPV_FTM                (0x280B010FUL)

/**
* @brief DFS IP Version: DFS 00.00.00.05
* @details S32G2XXM7 IP Versions
*/
#define IPV_DFS                (0x280B010FUL)

/**
* @brief FXOSC IP Version: FXOSC 00.00.00.06
* @details S32G2XXM7 IP Versions
*/
#define IPV_FXOSC                (0x280B010FUL)

/**
* @brief PMC IP Version: PMC 01.00.02.06
* @details S32G2XXM7 IP Versions
*/
#define IPV_PMC                (0x280B010FUL)
/**
* @brief QSPI IP Version: QSPI d_ip_quadspi_v2_sync_spec.034
* @details S32G2XXM7 IP Versions
*/
#define IPV_QSPI               (0x280B010FUL)

/**
* @brief IIC IP Version
* @details S32G2XXM7 IP Versions
*/
#define IPV_IIC                 (0x280B010EUL)

/**
* @brief REG_PROT IP Version
* @details S32G2XXM7 IP Versions
*/
#define IPV_REG_PROT             (0x280B010FUL)

/**
* @brief CMU_FC IP Version
* @details S32G2XXM7 IP Versions
*/
#define IPV_CMU_FC               (0x280B0110UL)

/*==================================================================================================
*                              Software Erratas for Hardware Erratas
==================================================================================================*/
/**
* @brief Hardware errata for CORE: (e051149)
* @details e051149 Cortex-M7: An M7 application core can enter a hung state if an interrupt is received shortly after execution of a wait instruction.
*/
#if (defined(S32G2XX) || defined(S32R45))

#define ERR_CORTEX_M7_E051149      (STD_ON)

#endif /* (defined(S32G2XX) || defined(S32R45)) */

/**
* @brief Hardware errata for CORE: (e051166)
* @details e051166 Cortex-M7: An M7 application core can enter a hung state if an interrupt is received shortly after execution of a wait instruction.
*/
#if (defined(S32G3XX))
    
#define ERR_CORTEX_M7_E051166      (STD_ON)

#endif /* (defined(S32G3XX)) */

#if (defined(S32G2XX) || defined(S32R45))
/**
* @brief Hardware errata for FlexCAN: (e050246)
* @details e050246 FlexCAN: Receive Message Buffers may have its Code Field corrupted
* if the Receive FIFO function is used
*/
#define ERR_IPV_FLEXCAN_E050246    (STD_ON)

/**
* @brief Hardware errata for FlexCAN: (e050630)
* @details e050630 FlexCAN: High resolution Time Stamp register may not be updated
* after CAN message reception
*/
#define ERR_IPV_FLEXCAN_E050630    (STD_ON)

#endif /* (defined(S32G2XX) || defined(S32R45)) */

#if defined(S32G2XX)
/**
* @brief Hardware errata for GMAC: (e050614)
* @details e050614 GMAC: When descriptor posted writes is enabled then fatal bus error status/ interrupt not getting generated.
*/
#define ERR_IPV_GMAC_E050614    (STD_ON)

/**
* @brief Hardware errata for FLEXRAY: (e050119)
* @details e050119 FLEXRAY: Disabling of FlexRay Message Buffer takes longer than the expected three Slots.
*/
#define ERR_IPV_FLEXRAY_E050119    (STD_ON)

/**
* @brief Hardware errata for LINFlexD: (e007274)
* @details e007274 LINFlexD: Consecutive headers received by LIN Slave triggers the LIN FSM to an unexpected state.
*/
#define ERR_IPV_LINFLEXD_E007274    (STD_ON)

 /**
* @brief Hardware errata for WKPU: (e050394)
* @details e050394 WKPU: False NMI interrupt may be seen when NMI is configured on a rising edge event.
*/
#define ERR_IPV_WKPU_E050394    (STD_ON)

/**
* @brief Hardware errata for PIT: (e050130)
* @details e050130 PIT: Temporary incorrect value reported in LMTR64H register in lifetimer mode.
*/
#define ERR_IPV_PIT_E050130    (STD_ON)


#endif /* defined(S32G2XX) */

#if defined(S32R45)
/**
* @brief Hardware errata for GMAC: (e050705)
* @details e050705 GMAC: Head-Of-Line blocking error due to incorrect packet size when gates of gate.
*/
#define ERR_IPV_GMAC_E050705    (STD_ON)

#endif /* defined(S32R45) */
/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/**
* @brief Enable CACHE management feature
* @details Global define to enable CACHE management at runtime
*/
#define MCAL_CACHE_RUNTIME_MNGMNT   (STD_OFF)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/**
* @brief User Mode feature is enabled
* @details User Mode feature - MCAL is configured to run in supervisor mode, by default.
*/

#ifdef MCAL_ENABLE_SUPERVISOR_MODE
    #undef MCAL_ENABLE_USER_MODE_SUPPORT
#endif

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif


/** @} */

#endif /* SOC_IPS_H */
