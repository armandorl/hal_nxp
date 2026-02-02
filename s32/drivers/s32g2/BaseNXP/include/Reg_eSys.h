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

#ifndef REG_ESYS_H
#define REG_ESYS_H

/**
*   @file
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


/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define REG_ESYS_VENDOR_ID                    43
#define REG_ESYS_MODULE_ID                    0
#define REG_ESYS_AR_RELEASE_MAJOR_VERSION     4
#define REG_ESYS_AR_RELEASE_MINOR_VERSION     4
#define REG_ESYS_AR_RELEASE_REVISION_VERSION  0
#define REG_ESYS_SW_MAJOR_VERSION             4
#define REG_ESYS_SW_MINOR_VERSION             0
#define REG_ESYS_SW_PATCH_VERSION             0

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                   REGISTER PROTECTION (REG_PROT)                                  
==================================================================================================*/
/**
* @brief Macros defined for the IPVs that are protected.
*/

#define MCAL_MC_CGM_REG_PROT_AVAILABLE              (STD_ON)
#define MCAL_PLLDIG_REG_PROT_AVAILABLE              (STD_ON)
#define MCAL_FXOSC_REG_PROT_AVAILABLE               (STD_ON)
#define MCAL_DFS_REG_PROT_AVAILABLE                 (STD_ON)
#define MCAL_CMU_REG_PROT_AVAILABLE                 (STD_ON)
#define MCAL_MC_RGM_REG_PROT_AVAILABLE              (STD_ON)
#define MCAL_SRC_REG_PROT_AVAILABLE                 (STD_ON)
#define MCAL_RDC_REG_PROT_AVAILABLE                 (STD_ON)
#define MCAL_MC_ME_REG_PROT_AVAILABLE               (STD_ON)
#define MCAL_PMC_REG_PROT_AVAILABLE                 (STD_ON)
#define MCAL_SIUL2_REG_PROT_AVAILABLE               (STD_ON)
#define MCAL_TMU_REG_PROT_AVAILABLE                 (STD_ON)
#define MCAL_STM_REG_PROT_AVAILABLE                 (STD_ON)
#define MCAL_DMAMUX_REG_PROT_AVAILABLE              (STD_ON)
#define MCAL_DMA_REG_PROT_AVAILABLE                 (STD_ON)
#define MCAL_PIT_REG_PROT_AVAILABLE                 (STD_ON)
#define MCAL_CRC_REG_PROT_AVAILABLE                 (STD_ON)
#define MCAL_SRAMC_REG_PROT_AVAILABLE               (STD_ON)
#define MCAL_LINFLEX_REG_PROT_AVAILABLE             (STD_ON)
#define MCAL_DSPI_REG_PROT_AVAILABLE                (STD_ON)
#define MCAL_FTM_REG_PROT_AVAILABLE                 (STD_ON)
#define MCAL_CTU_REG_PROT_AVAILABLE                 (STD_ON)
#define MCAL_FLEXRAY_REG_PROT_AVAILABLE             (STD_ON)
#define MCAL_FCCU_REG_PROT_AVAILABLE                (STD_ON)
#define MCAL_GMAC_REG_PROT_AVAILABLE                (STD_ON)
#define MCAL_FLEXCAN_REG_PROT_AVAILABLE             (STD_ON)
/**
* @brief Macros defined for the protection size
*/
#define MC_CGM_PROT_MEM_U32                         ((uint32)0x00000004UL)
#define PLLDIG_PROT_MEM_U32                         ((uint32)0x00000004UL)
#define FXOSC_PROT_MEM_U32                          ((uint32)0x00000004UL)
#define DFS_PROT_MEM_U32                            ((uint32)0x00000004UL)
#define CMU_PROT_MEM_U32                            ((uint32)0x00000004UL)
#define MC_RGM_PROT_MEM_U32                         ((uint32)0x00000004UL)
#define SRC_PROT_MEM_U32                            ((uint32)0x00000004UL)
#define RDC_PROT_MEM_U32                            ((uint32)0x00000004UL)
#define MC_ME_PROT_MEM_U32                          ((uint32)0x00000004UL)
#define PMC_PROT_MEM_U32                            ((uint32)0x00000004UL)
#define SIUL2_PROT_MEM_U32                          ((uint32)0x00000008UL)
#define TMU_PROT_MEM_U32                            ((uint32)0x00000004UL)
#define STM_PROT_MEM_U32                            ((uint32)0x00000004UL)
#define DMAMUX_PROT_MEM_U32                         ((uint32)0x00000004UL)
#define DMA_PROT_MEM_U32                            ((uint32)0x00000004UL)
#define PIT_PROT_MEM_U32                            ((uint32)0x00000004UL)
#define CRC_PROT_MEM_U32                            ((uint32)0x00000004UL)
#define SRAMC_PROT_MEM_U32                          ((uint32)0x00000004UL)
#define LINFLEX_PROT_MEM_U32                        ((uint32)0x00000004UL)
#define DSPI_PROT_MEM_U32                           ((uint32)0x00000004UL)
#define FTM_PROT_MEM_U32                            ((uint32)0x00000004UL)
#define CTU_PROT_MEM_U32                            ((uint32)0x00000004UL)
#define FLEXRAY_PROT_MEM_U32                        ((uint32)0x00000008UL)
#define FCCU_PROT_MEM_U32                           ((uint32)0x00000004UL)
#define GMAC_PROT_MEM_U32                           ((uint32)0x00000008UL)
#define FLEXCAN_PROT_MEM_U32                        ((uint32)0x00000010UL)


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


#ifdef __cplusplus
}
#endif


/** @} */

#endif /* REG_ESYS_H */
