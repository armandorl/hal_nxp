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

/**
*   @file
*
*   @addtogroup RTE_MODULE
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
#include "Std_Types.h"
#include "Mcal.h"
#include "OsIf.h"
#include "SchM_Eth_43_PFE.h"
#ifdef MCAL_TESTING_ENVIRONMENT
#include "EUnit.h" /* EUnit Test Suite */
#endif

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SCHM_ETH_43_PFE_AR_RELEASE_MAJOR_VERSION_C     4
#define SCHM_ETH_43_PFE_AR_RELEASE_MINOR_VERSION_C     4
#define SCHM_ETH_43_PFE_AR_RELEASE_REVISION_VERSION_C  0
#define SCHM_ETH_43_PFE_SW_MAJOR_VERSION_C             4
#define SCHM_ETH_43_PFE_SW_MINOR_VERSION_C             0
#define SCHM_ETH_43_PFE_SW_PATCH_VERSION_C             0

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/
#ifdef MCAL_PLATFORM_ARM
    #if (MCAL_PLATFORM_ARM == MCAL_ARM_AARCH64)
        #define ISR_STATE_MASK     ((uint32)0x000000C0UL)   /**< @brief DAIF bit I and F */
    #elif  (MCAL_PLATFORM_ARM == MCAL_ARM_RARCH)
        #define ISR_STATE_MASK     ((uint32)0x00000080UL)   /**< @brief CPSR bit I */
    #else
        #if ((defined MCAL_ENABLE_USER_MODE_SUPPORT)&&(!defined MCAL_PLATFORM_ARM_M0PLUS))
            #define ISR_STATE_MASK     ((uint32)0x000000FFUL)   /**< @brief BASEPRI[7:0] mask */
        #else
            #define ISR_STATE_MASK     ((uint32)0x00000001UL)   /**< @brief PRIMASK bit 0 */
        #endif
    #endif 
#else
    #ifdef MCAL_PLATFORM_S12
        #define ISR_STATE_MASK     ((uint32)0x00000010UL)   /**< @brief I bit of CCR */
    #else
        #define ISR_STATE_MASK     ((uint32)0x00008000UL)   /**< @brief EE bit of MSR */
    #endif
#endif
/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#ifdef MCAL_PLATFORM_ARM
    #if (MCAL_PLATFORM_ARM == MCAL_ARM_AARCH64)
        #define ISR_ON(msr)            (uint32)(((uint32)(msr) & (uint32)(ISR_STATE_MASK)) != (uint32)(ISR_STATE_MASK))
    #elif  (MCAL_PLATFORM_ARM == MCAL_ARM_RARCH)
        #define ISR_ON(msr)            (uint32)(((uint32)(msr) & (uint32)(ISR_STATE_MASK)) != (uint32)(ISR_STATE_MASK))
    #else
        #define ISR_ON(msr)            (uint32)(((uint32)(msr) & (uint32)(ISR_STATE_MASK)) == (uint32)0)
    #endif    
#else
    #ifdef MCAL_PLATFORM_S12
        #define ISR_ON(msr)            (uint32)(((uint32)(msr) & (uint32)(ISR_STATE_MASK)) == (uint32)0)
    #else
        #define ISR_ON(msr)            (uint32)((uint32)(msr) & (uint32)(ISR_STATE_MASK))
    #endif
#endif

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/
#define RTE_START_SEC_VAR_CLEARED_32_NO_CACHEABLE
#include "Rte_MemMap.h"
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_00[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_00[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_01[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_01[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_02[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_02[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_03[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_03[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_04[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_04[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_05[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_05[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_06[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_06[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_07[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_07[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_08[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_08[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_09[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_09[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_10[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_10[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_100[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_100[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_101[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_101[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_102[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_102[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_103[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_103[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_104[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_104[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_105[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_105[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_106[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_106[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_107[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_107[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_108[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_108[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_109[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_109[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_11[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_11[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_110[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_110[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_111[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_111[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_112[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_112[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_113[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_113[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_114[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_114[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_115[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_115[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_116[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_116[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_117[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_117[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_118[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_118[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_119[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_119[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_12[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_12[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_120[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_120[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_121[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_121[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_122[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_122[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_123[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_123[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_124[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_124[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_125[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_125[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_126[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_126[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_127[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_127[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_128[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_128[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_129[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_129[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_13[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_13[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_130[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_130[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_131[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_131[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_132[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_132[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_133[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_133[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_134[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_134[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_135[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_135[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_136[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_136[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_137[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_137[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_138[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_138[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_139[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_139[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_14[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_14[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_140[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_140[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_141[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_141[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_142[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_142[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_143[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_143[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_144[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_144[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_145[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_145[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_146[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_146[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_147[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_147[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_148[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_148[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_149[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_149[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_15[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_15[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_150[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_150[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_151[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_151[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_152[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_152[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_153[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_153[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_154[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_154[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_155[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_155[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_156[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_156[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_157[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_157[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_158[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_158[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_159[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_159[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_16[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_16[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_160[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_160[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_161[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_161[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_162[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_162[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_163[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_163[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_164[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_164[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_165[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_165[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_166[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_166[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_167[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_167[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_168[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_168[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_169[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_169[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_17[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_17[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_170[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_170[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_171[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_171[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_172[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_172[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_173[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_173[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_174[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_174[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_175[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_175[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_176[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_176[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_177[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_177[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_178[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_178[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_179[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_179[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_18[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_18[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_180[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_180[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_181[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_181[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_182[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_182[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_183[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_183[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_184[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_184[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_185[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_185[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_186[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_186[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_187[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_187[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_188[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_188[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_189[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_189[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_19[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_19[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_190[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_190[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_191[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_191[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_192[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_192[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_193[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_193[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_194[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_194[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_195[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_195[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_196[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_196[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_197[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_197[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_198[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_198[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_199[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_199[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_20[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_20[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_200[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_200[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_201[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_201[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_202[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_202[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_203[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_203[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_204[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_204[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_205[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_205[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_206[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_206[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_207[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_207[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_208[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_208[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_209[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_209[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_21[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_21[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_210[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_210[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_211[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_211[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_212[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_212[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_213[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_213[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_214[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_214[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_215[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_215[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_216[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_216[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_217[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_217[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_218[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_218[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_219[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_219[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_22[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_22[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_220[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_220[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_221[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_221[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_222[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_222[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_223[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_223[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_224[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_224[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_225[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_225[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_226[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_226[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_227[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_227[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_228[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_228[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_229[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_229[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_23[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_23[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_230[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_230[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_231[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_231[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_232[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_232[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_233[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_233[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_234[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_234[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_235[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_235[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_236[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_236[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_237[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_237[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_238[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_238[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_239[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_239[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_24[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_24[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_240[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_240[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_241[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_241[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_242[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_242[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_243[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_243[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_244[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_244[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_245[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_245[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_246[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_246[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_247[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_247[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_248[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_248[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_249[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_249[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_25[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_25[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_250[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_250[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_251[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_251[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_252[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_252[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_253[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_253[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_254[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_254[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_255[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_255[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_26[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_26[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_27[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_27[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_28[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_28[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_29[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_29[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_30[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_30[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_31[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_31[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_32[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_32[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_33[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_33[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_34[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_34[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_35[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_35[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_36[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_36[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_37[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_37[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_38[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_38[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_39[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_39[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_40[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_40[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_41[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_41[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_42[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_42[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_43[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_43[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_44[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_44[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_45[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_45[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_46[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_46[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_47[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_47[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_48[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_48[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_49[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_49[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_50[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_50[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_51[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_51[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_52[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_52[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_53[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_53[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_54[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_54[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_55[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_55[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_56[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_56[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_57[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_57[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_58[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_58[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_59[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_59[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_60[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_60[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_61[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_61[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_62[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_62[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_63[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_63[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_64[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_64[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_65[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_65[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_66[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_66[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_67[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_67[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_68[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_68[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_69[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_69[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_70[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_70[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_71[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_71[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_72[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_72[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_73[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_73[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_74[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_74[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_75[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_75[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_76[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_76[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_77[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_77[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_78[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_78[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_79[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_79[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_80[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_80[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_81[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_81[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_82[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_82[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_83[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_83[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_84[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_84[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_85[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_85[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_86[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_86[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_87[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_87[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_88[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_88[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_89[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_89[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_90[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_90[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_91[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_91[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_92[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_92[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_93[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_93[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_94[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_94[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_95[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_95[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_96[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_96[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_97[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_97[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_98[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_98[NUMBER_OF_CORES];
static volatile uint32 msr_ETH_EXCLUSIVE_AREA_99[NUMBER_OF_CORES];
static volatile uint32 reentry_guard_ETH_EXCLUSIVE_AREA_99[NUMBER_OF_CORES];

#define RTE_STOP_SEC_VAR_CLEARED_32_NO_CACHEABLE
#include "Rte_MemMap.h"
/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

#ifndef _COSMIC_C_S32XX_
/*================================================================================================*/
/** 
* @brief   This function returns the MSR register value (32 bits). 
* @details This function returns the MSR register value (32 bits). 
*     
* @param[in]     void        No input parameters
* @return        uint32 msr  This function returns the MSR register value (32 bits). 
* 
* @pre  None
* @post None
* 
*/
uint32 Eth_43_PFE_schm_read_msr(void); 
#endif /*ifndef _COSMIC_C_S32XX_*/
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#define RTE_START_SEC_CODE
#include "Rte_MemMap.h"

#if (defined(_GREENHILLS_C_S32XX_) || defined(_CODEWARRIOR_C_S32XX_))
/*================================================================================================*/
/** 
* @brief   This macro returns the MSR register value (32 bits). 
* @details This macro function implementation returns the MSR register value in r3 (32 bits). 
*     
* @pre  None
* @post None
* 
*/
#ifdef MCAL_PLATFORM_ARM
#if (MCAL_PLATFORM_ARM == MCAL_ARM_AARCH64)
ASM_KEYWORD uint32 Eth_43_PFE_schm_read_msr(void)
{
    mrs x0, S3_3_c4_c2_1
}
#elif  (MCAL_PLATFORM_ARM == MCAL_ARM_RARCH)
ASM_KEYWORD uint32 Eth_43_PFE_schm_read_msr(void)
{
    mrs r0, CPSR
}
#else
ASM_KEYWORD uint32 Eth_43_PFE_schm_read_msr(void)
{
#if ((defined MCAL_ENABLE_USER_MODE_SUPPORT)&&(!defined MCAL_PLATFORM_ARM_M0PLUS))
    mrs r0, BASEPRI
#else
    mrs r0, PRIMASK
#endif
}
#endif
#else
#ifdef MCAL_PLATFORM_S12
ASM_KEYWORD uint32 Eth_43_PFE_schm_read_msr(void)
{
   tfr ccr, d6
}
#else
ASM_KEYWORD uint32 Eth_43_PFE_schm_read_msr(void)
{
    mfmsr r3
}
#endif
#endif
#endif /*#ifdef GHS||CW*/

#ifdef _DIABDATA_C_S32XX_
/** 
* @brief   This function returns the MSR register value (32 bits). 
* @details This function returns the MSR register value (32 bits). 
*     
* @param[in]     void        No input parameters
* @return        uint32 msr  This function returns the MSR register value (32 bits). 
* 
* @pre  None
* @post None
* 
*/
#ifdef MCAL_PLATFORM_ARM
uint32 Eth_43_PFE_schm_read_msr(void)
{
    register uint32 reg_tmp;
    #if (MCAL_PLATFORM_ARM == MCAL_ARM_AARCH64)
        __asm volatile( " mrs %x0, DAIF " : "=r" (reg_tmp) );
    #elif  (MCAL_PLATFORM_ARM == MCAL_ARM_RARCH)
        __asm volatile( " mrs %0, CPSR " : "=r" (reg_tmp) );
    #else
        #if ((defined MCAL_ENABLE_USER_MODE_SUPPORT)&&(!defined MCAL_PLATFORM_ARM_M0PLUS))
        __asm volatile( " mrs %0, basepri " : "=r" (reg_tmp) );
        #else
        __asm volatile( " mrs %0, primask " : "=r" (reg_tmp) );
        #endif
    #endif
    return (uint32)reg_tmp;
}
#else
ASM_KEYWORD uint32 Eth_43_PFE_schm_read_msr(void)
{
    mfmsr r3
}    
#endif  /* MCAL_PLATFORM_ARM */

#endif   /* _DIABDATA_C_S32XX_*/

#ifdef _COSMIC_C_S32XX_
/*================================================================================================*/
/** 
* @brief   This function returns the MSR register value (32 bits). 
* @details This function returns the MSR register value (32 bits). 
*     
* @param[in]     void        No input parameters
* @return        uint32 msr  This function returns the MSR register value (32 bits). 
* 
* @pre  None
* @post None
* 
*/

#ifdef MCAL_PLATFORM_S12
    #define Eth_43_PFE_schm_read_msr()  ASM_KEYWORD("tfr ccr, d6")
#else
    #define Eth_43_PFE_schm_read_msr() ASM_KEYWORD("mfmsr r3")
#endif

#endif  /*Cosmic compiler only*/


#ifdef _HITECH_C_S32XX_
/*================================================================================================*/
/** 
* @brief   This function returns the MSR register value (32 bits). 
* @details This function returns the MSR register value (32 bits). 
*     
* @param[in]     void        No input parameters
* @return        uint32 msr  This function returns the MSR register value (32 bits). 
* 
* @pre  None
* @post None
* 
*/
uint32 Eth_43_PFE_schm_read_msr(void)
{
    uint32 result;
    __asm volatile("mfmsr %0" : "=r" (result) :);
    return result;
}

#endif  /*HighTec compiler only*/
 /*================================================================================================*/
#ifdef _LINARO_C_S32XX_
/** 
* @brief   This function returns the MSR register value (32 bits). 
* @details This function returns the MSR register value (32 bits). 
*     
* @param[in]     void        No input parameters
* @return        uint32 msr  This function returns the MSR register value (32 bits). 
* 
* @pre  None
* @post None
* 
*/
uint32 Eth_43_PFE_schm_read_msr(void)
{
    register uint32 reg_tmp;
    #if (MCAL_PLATFORM_ARM == MCAL_ARM_AARCH64)
        __asm volatile( " mrs %x0, DAIF " : "=r" (reg_tmp) );
    #elif  (MCAL_PLATFORM_ARM == MCAL_ARM_RARCH)
        __asm volatile( " mrs %0, CPSR " : "=r" (reg_tmp) );
    #else
        #if ((defined MCAL_ENABLE_USER_MODE_SUPPORT)&&(!defined MCAL_PLATFORM_ARM_M0PLUS))
        __asm volatile( " mrs %0, basepri " : "=r" (reg_tmp) );
        #else
        __asm volatile( " mrs %0, primask " : "=r" (reg_tmp) );
        #endif
    #endif
    return (uint32)reg_tmp;
}
#endif   /* _LINARO_C_S32XX_*/
/*================================================================================================*/

#ifdef _ARM_DS5_C_S32XX_
/** 
* @brief   This function returns the MSR register value (32 bits). 
* @details This function returns the MSR register value (32 bits). 
*     
* @param[in]     void        No input parameters
* @return        uint32 msr  This function returns the MSR register value (32 bits). 
* 
* @pre  None
* @post None
* 
*/
uint32 Eth_43_PFE_schm_read_msr(void)
{
    register uint32 reg_tmp;
    #if (MCAL_PLATFORM_ARM == MCAL_ARM_AARCH64)
        __asm volatile( " mrs %x0, DAIF " : "=r" (reg_tmp) );
    #elif  (MCAL_PLATFORM_ARM == MCAL_ARM_RARCH)
        __asm volatile( " mrs %0, CPSR " : "=r" (reg_tmp) );
    #else
        #if ((defined MCAL_ENABLE_USER_MODE_SUPPORT)&&(!defined MCAL_PLATFORM_ARM_M0PLUS))
        __asm volatile( " mrs %0, basepri " : "=r" (reg_tmp) );
        #else
        __asm volatile( " mrs %0, primask " : "=r" (reg_tmp) );
        #endif
    #endif
    return (uint32)reg_tmp;
}
#endif   /* _ARM_DS5_C_S32XX_ */

#ifdef _IAR_C_S32XX_
/** 
* @brief   This function returns the MSR register value (32 bits). 
* @details This function returns the MSR register value (32 bits). 
*     
* @param[in]     void        No input parameters
* @return        uint32 msr  This function returns the MSR register value (32 bits). 
* 
* @pre  None
* @post None
* 
*/
uint32 Eth_43_PFE_schm_read_msr(void)
{
    register uint32 reg_tmp;

#if ((defined MCAL_ENABLE_USER_MODE_SUPPORT)&&(!defined MCAL_PLATFORM_ARM_M0PLUS))
   __asm volatile( " mrs %0, basepri " : "=r" (reg_tmp) );
#else
   __asm volatile( " mrs %0, primask " : "=r" (reg_tmp) );
#endif

    return (uint32)reg_tmp;
}
#endif   /* _IAR_C_S32XX_ */

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h"

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/
#define RTE_START_SEC_CODE
#include "Rte_MemMap.h"

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_00(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_00[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_00[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_00[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_00(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_00[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_00[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_00[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_01(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_01[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_01[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_01[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_01(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_01[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_01[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_01[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_02(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_02[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_02[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_02[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_02(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_02[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_02[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_02[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_03(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_03[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_03[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_03[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_03(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_03[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_03[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_03[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_04(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_04[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_04[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_04[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_04(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_04[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_04[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_04[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_05(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_05[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_05[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_05[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_05(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_05[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_05[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_05[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_06(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_06[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_06[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_06[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_06(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_06[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_06[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_06[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_07(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_07[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_07[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_07[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_07(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_07[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_07[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_07[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_08(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_08[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_08[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_08[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_08(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_08[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_08[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_08[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_09(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_09[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_09[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_09[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_09(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_09[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_09[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_09[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_10(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_10[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_10[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_10[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_10(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_10[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_10[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_10[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_100(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_100[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_100[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_100[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_100(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_100[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_100[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_100[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_101(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_101[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_101[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_101[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_101(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_101[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_101[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_101[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_102(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_102[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_102[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_102[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_102(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_102[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_102[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_102[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_103(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_103[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_103[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_103[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_103(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_103[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_103[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_103[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_104(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_104[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_104[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_104[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_104(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_104[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_104[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_104[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_105(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_105[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_105[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_105[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_105(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_105[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_105[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_105[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_106(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_106[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_106[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_106[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_106(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_106[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_106[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_106[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_107(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_107[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_107[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_107[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_107(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_107[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_107[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_107[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_108(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_108[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_108[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_108[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_108(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_108[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_108[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_108[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_109(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_109[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_109[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_109[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_109(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_109[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_109[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_109[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_11(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_11[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_11[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_11[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_11(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_11[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_11[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_11[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_110(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_110[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_110[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_110[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_110(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_110[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_110[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_110[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_111(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_111[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_111[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_111[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_111(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_111[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_111[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_111[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_112(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_112[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_112[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_112[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_112(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_112[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_112[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_112[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_113(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_113[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_113[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_113[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_113(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_113[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_113[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_113[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_114(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_114[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_114[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_114[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_114(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_114[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_114[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_114[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_115(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_115[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_115[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_115[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_115(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_115[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_115[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_115[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_116(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_116[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_116[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_116[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_116(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_116[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_116[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_116[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_117(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_117[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_117[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_117[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_117(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_117[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_117[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_117[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_118(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_118[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_118[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_118[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_118(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_118[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_118[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_118[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_119(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_119[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_119[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_119[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_119(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_119[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_119[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_119[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_12(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_12[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_12[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_12[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_12(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_12[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_12[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_12[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_120(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_120[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_120[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_120[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_120(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_120[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_120[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_120[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_121(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_121[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_121[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_121[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_121(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_121[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_121[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_121[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_122(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_122[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_122[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_122[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_122(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_122[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_122[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_122[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_123(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_123[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_123[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_123[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_123(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_123[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_123[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_123[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_124(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_124[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_124[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_124[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_124(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_124[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_124[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_124[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_125(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_125[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_125[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_125[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_125(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_125[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_125[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_125[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_126(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_126[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_126[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_126[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_126(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_126[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_126[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_126[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_127(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_127[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_127[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_127[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_127(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_127[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_127[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_127[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_128(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_128[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_128[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_128[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_128(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_128[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_128[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_128[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_129(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_129[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_129[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_129[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_129(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_129[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_129[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_129[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_13(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_13[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_13[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_13[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_13(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_13[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_13[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_13[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_130(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_130[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_130[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_130[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_130(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_130[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_130[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_130[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_131(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_131[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_131[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_131[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_131(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_131[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_131[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_131[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_132(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_132[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_132[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_132[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_132(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_132[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_132[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_132[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_133(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_133[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_133[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_133[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_133(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_133[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_133[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_133[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_134(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_134[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_134[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_134[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_134(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_134[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_134[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_134[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_135(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_135[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_135[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_135[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_135(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_135[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_135[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_135[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_136(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_136[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_136[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_136[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_136(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_136[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_136[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_136[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_137(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_137[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_137[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_137[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_137(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_137[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_137[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_137[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_138(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_138[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_138[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_138[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_138(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_138[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_138[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_138[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_139(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_139[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_139[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_139[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_139(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_139[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_139[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_139[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_14(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_14[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_14[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_14[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_14(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_14[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_14[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_14[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_140(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_140[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_140[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_140[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_140(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_140[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_140[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_140[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_141(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_141[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_141[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_141[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_141(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_141[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_141[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_141[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_142(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_142[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_142[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_142[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_142(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_142[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_142[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_142[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_143(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_143[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_143[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_143[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_143(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_143[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_143[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_143[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_144(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_144[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_144[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_144[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_144(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_144[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_144[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_144[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_145(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_145[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_145[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_145[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_145(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_145[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_145[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_145[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_146(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_146[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_146[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_146[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_146(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_146[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_146[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_146[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_147(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_147[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_147[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_147[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_147(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_147[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_147[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_147[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_148(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_148[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_148[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_148[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_148(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_148[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_148[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_148[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_149(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_149[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_149[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_149[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_149(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_149[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_149[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_149[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_15(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_15[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_15[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_15[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_15(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_15[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_15[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_15[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_150(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_150[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_150[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_150[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_150(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_150[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_150[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_150[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_151(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_151[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_151[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_151[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_151(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_151[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_151[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_151[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_152(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_152[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_152[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_152[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_152(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_152[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_152[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_152[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_153(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_153[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_153[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_153[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_153(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_153[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_153[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_153[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_154(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_154[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_154[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_154[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_154(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_154[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_154[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_154[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_155(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_155[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_155[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_155[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_155(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_155[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_155[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_155[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_156(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_156[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_156[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_156[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_156(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_156[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_156[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_156[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_157(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_157[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_157[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_157[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_157(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_157[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_157[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_157[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_158(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_158[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_158[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_158[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_158(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_158[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_158[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_158[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_159(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_159[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_159[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_159[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_159(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_159[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_159[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_159[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_16(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_16[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_16[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_16[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_16(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_16[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_16[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_16[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_160(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_160[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_160[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_160[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_160(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_160[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_160[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_160[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_161(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_161[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_161[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_161[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_161(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_161[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_161[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_161[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_162(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_162[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_162[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_162[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_162(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_162[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_162[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_162[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_163(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_163[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_163[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_163[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_163(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_163[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_163[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_163[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_164(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_164[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_164[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_164[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_164(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_164[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_164[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_164[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_165(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_165[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_165[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_165[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_165(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_165[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_165[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_165[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_166(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_166[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_166[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_166[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_166(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_166[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_166[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_166[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_167(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_167[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_167[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_167[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_167(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_167[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_167[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_167[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_168(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_168[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_168[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_168[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_168(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_168[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_168[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_168[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_169(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_169[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_169[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_169[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_169(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_169[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_169[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_169[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_17(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_17[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_17[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_17[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_17(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_17[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_17[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_17[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_170(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_170[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_170[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_170[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_170(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_170[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_170[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_170[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_171(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_171[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_171[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_171[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_171(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_171[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_171[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_171[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_172(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_172[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_172[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_172[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_172(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_172[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_172[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_172[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_173(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_173[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_173[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_173[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_173(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_173[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_173[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_173[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_174(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_174[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_174[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_174[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_174(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_174[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_174[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_174[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_175(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_175[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_175[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_175[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_175(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_175[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_175[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_175[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_176(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_176[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_176[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_176[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_176(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_176[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_176[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_176[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_177(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_177[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_177[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_177[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_177(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_177[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_177[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_177[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_178(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_178[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_178[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_178[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_178(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_178[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_178[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_178[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_179(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_179[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_179[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_179[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_179(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_179[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_179[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_179[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_18(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_18[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_18[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_18[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_18(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_18[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_18[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_18[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_180(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_180[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_180[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_180[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_180(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_180[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_180[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_180[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_181(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_181[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_181[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_181[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_181(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_181[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_181[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_181[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_182(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_182[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_182[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_182[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_182(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_182[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_182[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_182[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_183(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_183[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_183[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_183[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_183(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_183[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_183[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_183[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_184(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_184[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_184[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_184[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_184(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_184[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_184[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_184[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_185(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_185[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_185[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_185[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_185(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_185[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_185[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_185[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_186(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_186[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_186[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_186[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_186(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_186[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_186[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_186[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_187(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_187[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_187[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_187[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_187(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_187[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_187[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_187[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_188(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_188[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_188[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_188[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_188(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_188[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_188[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_188[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_189(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_189[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_189[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_189[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_189(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_189[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_189[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_189[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_19(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_19[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_19[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_19[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_19(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_19[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_19[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_19[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_190(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_190[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_190[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_190[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_190(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_190[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_190[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_190[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_191(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_191[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_191[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_191[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_191(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_191[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_191[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_191[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_192(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_192[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_192[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_192[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_192(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_192[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_192[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_192[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_193(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_193[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_193[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_193[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_193(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_193[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_193[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_193[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_194(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_194[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_194[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_194[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_194(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_194[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_194[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_194[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_195(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_195[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_195[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_195[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_195(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_195[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_195[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_195[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_196(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_196[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_196[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_196[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_196(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_196[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_196[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_196[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_197(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_197[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_197[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_197[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_197(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_197[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_197[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_197[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_198(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_198[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_198[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_198[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_198(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_198[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_198[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_198[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_199(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_199[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_199[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_199[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_199(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_199[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_199[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_199[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_20(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_20[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_20[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_20[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_20(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_20[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_20[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_20[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_200(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_200[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_200[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_200[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_200(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_200[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_200[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_200[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_201(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_201[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_201[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_201[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_201(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_201[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_201[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_201[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_202(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_202[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_202[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_202[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_202(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_202[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_202[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_202[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_203(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_203[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_203[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_203[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_203(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_203[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_203[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_203[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_204(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_204[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_204[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_204[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_204(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_204[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_204[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_204[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_205(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_205[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_205[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_205[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_205(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_205[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_205[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_205[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_206(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_206[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_206[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_206[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_206(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_206[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_206[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_206[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_207(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_207[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_207[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_207[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_207(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_207[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_207[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_207[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_208(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_208[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_208[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_208[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_208(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_208[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_208[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_208[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_209(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_209[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_209[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_209[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_209(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_209[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_209[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_209[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_21(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_21[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_21[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_21[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_21(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_21[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_21[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_21[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_210(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_210[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_210[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_210[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_210(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_210[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_210[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_210[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_211(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_211[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_211[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_211[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_211(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_211[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_211[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_211[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_212(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_212[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_212[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_212[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_212(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_212[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_212[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_212[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_213(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_213[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_213[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_213[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_213(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_213[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_213[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_213[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_214(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_214[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_214[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_214[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_214(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_214[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_214[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_214[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_215(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_215[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_215[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_215[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_215(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_215[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_215[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_215[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_216(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_216[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_216[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_216[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_216(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_216[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_216[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_216[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_217(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_217[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_217[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_217[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_217(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_217[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_217[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_217[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_218(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_218[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_218[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_218[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_218(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_218[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_218[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_218[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_219(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_219[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_219[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_219[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_219(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_219[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_219[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_219[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_22(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_22[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_22[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_22[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_22(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_22[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_22[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_22[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_220(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_220[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_220[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_220[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_220(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_220[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_220[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_220[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_221(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_221[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_221[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_221[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_221(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_221[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_221[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_221[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_222(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_222[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_222[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_222[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_222(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_222[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_222[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_222[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_223(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_223[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_223[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_223[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_223(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_223[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_223[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_223[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_224(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_224[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_224[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_224[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_224(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_224[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_224[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_224[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_225(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_225[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_225[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_225[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_225(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_225[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_225[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_225[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_226(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_226[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_226[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_226[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_226(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_226[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_226[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_226[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_227(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_227[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_227[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_227[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_227(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_227[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_227[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_227[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_228(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_228[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_228[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_228[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_228(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_228[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_228[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_228[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_229(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_229[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_229[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_229[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_229(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_229[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_229[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_229[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_23(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_23[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_23[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_23[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_23(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_23[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_23[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_23[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_230(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_230[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_230[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_230[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_230(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_230[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_230[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_230[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_231(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_231[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_231[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_231[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_231(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_231[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_231[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_231[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_232(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_232[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_232[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_232[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_232(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_232[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_232[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_232[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_233(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_233[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_233[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_233[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_233(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_233[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_233[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_233[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_234(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_234[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_234[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_234[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_234(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_234[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_234[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_234[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_235(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_235[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_235[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_235[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_235(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_235[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_235[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_235[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_236(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_236[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_236[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_236[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_236(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_236[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_236[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_236[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_237(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_237[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_237[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_237[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_237(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_237[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_237[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_237[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_238(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_238[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_238[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_238[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_238(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_238[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_238[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_238[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_239(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_239[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_239[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_239[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_239(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_239[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_239[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_239[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_24(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_24[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_24[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_24[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_24(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_24[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_24[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_24[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_240(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_240[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_240[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_240[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_240(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_240[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_240[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_240[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_241(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_241[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_241[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_241[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_241(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_241[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_241[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_241[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_242(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_242[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_242[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_242[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_242(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_242[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_242[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_242[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_243(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_243[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_243[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_243[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_243(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_243[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_243[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_243[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_244(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_244[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_244[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_244[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_244(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_244[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_244[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_244[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_245(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_245[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_245[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_245[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_245(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_245[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_245[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_245[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_246(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_246[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_246[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_246[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_246(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_246[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_246[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_246[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_247(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_247[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_247[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_247[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_247(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_247[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_247[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_247[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_248(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_248[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_248[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_248[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_248(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_248[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_248[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_248[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_249(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_249[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_249[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_249[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_249(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_249[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_249[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_249[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_25(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_25[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_25[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_25[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_25(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_25[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_25[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_25[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_250(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_250[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_250[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_250[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_250(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_250[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_250[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_250[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_251(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_251[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_251[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_251[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_251(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_251[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_251[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_251[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_252(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_252[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_252[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_252[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_252(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_252[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_252[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_252[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_253(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_253[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_253[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_253[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_253(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_253[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_253[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_253[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_254(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_254[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_254[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_254[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_254(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_254[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_254[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_254[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_255(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_255[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_255[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_255[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_255(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_255[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_255[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_255[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_26(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_26[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_26[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_26[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_26(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_26[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_26[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_26[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_27(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_27[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_27[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_27[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_27(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_27[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_27[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_27[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_28(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_28[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_28[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_28[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_28(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_28[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_28[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_28[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_29(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_29[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_29[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_29[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_29(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_29[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_29[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_29[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_30(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_30[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_30[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_30[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_30(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_30[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_30[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_30[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_31(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_31[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_31[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_31[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_31(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_31[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_31[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_31[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_32(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_32[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_32[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_32[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_32(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_32[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_32[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_32[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_33(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_33[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_33[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_33[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_33(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_33[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_33[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_33[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_34(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_34[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_34[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_34[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_34(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_34[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_34[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_34[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_35(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_35[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_35[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_35[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_35(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_35[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_35[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_35[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_36(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_36[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_36[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_36[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_36(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_36[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_36[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_36[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_37(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_37[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_37[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_37[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_37(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_37[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_37[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_37[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_38(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_38[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_38[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_38[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_38(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_38[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_38[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_38[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_39(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_39[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_39[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_39[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_39(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_39[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_39[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_39[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_40(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_40[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_40[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_40[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_40(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_40[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_40[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_40[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_41(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_41[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_41[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_41[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_41(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_41[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_41[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_41[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_42(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_42[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_42[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_42[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_42(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_42[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_42[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_42[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_43(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_43[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_43[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_43[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_43(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_43[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_43[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_43[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_44(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_44[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_44[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_44[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_44(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_44[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_44[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_44[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_45(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_45[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_45[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_45[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_45(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_45[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_45[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_45[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_46(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_46[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_46[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_46[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_46(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_46[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_46[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_46[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_47(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_47[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_47[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_47[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_47(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_47[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_47[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_47[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_48(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_48[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_48[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_48[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_48(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_48[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_48[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_48[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_49(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_49[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_49[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_49[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_49(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_49[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_49[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_49[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_50(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_50[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_50[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_50[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_50(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_50[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_50[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_50[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_51(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_51[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_51[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_51[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_51(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_51[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_51[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_51[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_52(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_52[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_52[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_52[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_52(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_52[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_52[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_52[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_53(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_53[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_53[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_53[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_53(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_53[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_53[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_53[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_54(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_54[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_54[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_54[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_54(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_54[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_54[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_54[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_55(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_55[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_55[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_55[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_55(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_55[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_55[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_55[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_56(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_56[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_56[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_56[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_56(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_56[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_56[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_56[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_57(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_57[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_57[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_57[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_57(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_57[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_57[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_57[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_58(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_58[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_58[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_58[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_58(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_58[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_58[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_58[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_59(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_59[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_59[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_59[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_59(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_59[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_59[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_59[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_60(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_60[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_60[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_60[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_60(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_60[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_60[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_60[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_61(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_61[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_61[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_61[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_61(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_61[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_61[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_61[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_62(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_62[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_62[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_62[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_62(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_62[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_62[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_62[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_63(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_63[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_63[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_63[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_63(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_63[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_63[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_63[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_64(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_64[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_64[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_64[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_64(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_64[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_64[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_64[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_65(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_65[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_65[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_65[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_65(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_65[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_65[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_65[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_66(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_66[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_66[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_66[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_66(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_66[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_66[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_66[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_67(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_67[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_67[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_67[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_67(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_67[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_67[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_67[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_68(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_68[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_68[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_68[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_68(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_68[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_68[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_68[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_69(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_69[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_69[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_69[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_69(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_69[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_69[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_69[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_70(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_70[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_70[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_70[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_70(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_70[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_70[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_70[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_71(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_71[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_71[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_71[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_71(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_71[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_71[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_71[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_72(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_72[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_72[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_72[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_72(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_72[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_72[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_72[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_73(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_73[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_73[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_73[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_73(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_73[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_73[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_73[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_74(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_74[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_74[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_74[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_74(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_74[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_74[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_74[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_75(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_75[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_75[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_75[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_75(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_75[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_75[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_75[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_76(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_76[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_76[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_76[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_76(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_76[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_76[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_76[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_77(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_77[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_77[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_77[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_77(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_77[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_77[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_77[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_78(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_78[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_78[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_78[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_78(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_78[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_78[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_78[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_79(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_79[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_79[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_79[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_79(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_79[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_79[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_79[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_80(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_80[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_80[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_80[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_80(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_80[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_80[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_80[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_81(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_81[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_81[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_81[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_81(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_81[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_81[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_81[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_82(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_82[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_82[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_82[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_82(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_82[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_82[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_82[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_83(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_83[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_83[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_83[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_83(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_83[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_83[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_83[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_84(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_84[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_84[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_84[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_84(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_84[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_84[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_84[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_85(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_85[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_85[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_85[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_85(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_85[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_85[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_85[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_86(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_86[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_86[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_86[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_86(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_86[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_86[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_86[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_87(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_87[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_87[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_87[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_87(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_87[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_87[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_87[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_88(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_88[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_88[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_88[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_88(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_88[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_88[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_88[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_89(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_89[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_89[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_89[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_89(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_89[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_89[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_89[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_90(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_90[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_90[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_90[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_90(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_90[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_90[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_90[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_91(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_91[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_91[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_91[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_91(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_91[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_91[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_91[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_92(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_92[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_92[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_92[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_92(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_92[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_92[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_92[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_93(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_93[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_93[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_93[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_93(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_93[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_93[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_93[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_94(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_94[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_94[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_94[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_94(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_94[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_94[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_94[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_95(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_95[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_95[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_95[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_95(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_95[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_95[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_95[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_96(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_96[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_96[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_96[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_96(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_96[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_96[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_96[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_97(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_97[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_97[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_97[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_97(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_97[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_97[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_97[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_98(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_98[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_98[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_98[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_98(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_98[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_98[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_98[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}

void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_99(void)
{
    uint32 msr;
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    if(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_99[u32CoreId])
    {
#if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
        msr = OsIf_Trusted_Call_Return(Eth_43_PFE_schm_read_msr);
#else
        msr = Eth_43_PFE_schm_read_msr();  /*read MSR (to store interrupts state)*/
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        if (ISR_ON(msr)) /*if MSR[EE] = 0, skip calling Suspend/Resume AllInterrupts*/
        {
            OsIf_SuspendAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
            ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
        }
        msr_ETH_EXCLUSIVE_AREA_99[u32CoreId] = msr;
    }
    reentry_guard_ETH_EXCLUSIVE_AREA_99[u32CoreId]++;
}

void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_99(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    reentry_guard_ETH_EXCLUSIVE_AREA_99[u32CoreId]--;
    if ((ISR_ON(msr_ETH_EXCLUSIVE_AREA_99[u32CoreId]))&&(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_99[u32CoreId]))         /*if interrupts were enabled*/
    {
        OsIf_ResumeAllInterrupts();
#ifdef _ARM_DS5_C_S32XX_
        ASM_KEYWORD(" nop ");/* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected*/
#endif
    }
}


#ifdef MCAL_TESTING_ENVIRONMENT
/** 
@brief   This function checks that all entered exclusive areas were also exited. 
@details This function checks that all entered exclusive areas were also exited. The check
         is done by verifying that all reentry_guard_* static variables are back to the
         zero value.
    
@param[in]     void       No input parameters
@return        void       This function does not return a value. Test asserts are used instead. 

@pre  None
@post None

@remarks Covers 
@remarks Implements 
*/
void SchM_Check_eth_43_pfe(void)
{
    uint32 u32CoreId = (uint32)OsIf_GetCoreID();

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_00[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_00[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_00 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_01[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_01[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_01 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_02[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_02[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_02 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_03[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_03[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_03 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_04[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_04[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_04 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_05[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_05[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_05 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_06[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_06[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_06 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_07[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_07[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_07 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_08[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_08[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_08 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_09[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_09[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_09 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_10[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_10[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_10 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_100[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_100[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_100 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_101[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_101[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_101 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_102[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_102[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_102 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_103[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_103[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_103 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_104[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_104[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_104 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_105[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_105[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_105 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_106[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_106[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_106 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_107[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_107[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_107 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_108[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_108[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_108 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_109[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_109[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_109 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_11[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_11[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_11 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_110[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_110[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_110 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_111[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_111[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_111 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_112[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_112[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_112 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_113[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_113[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_113 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_114[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_114[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_114 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_115[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_115[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_115 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_116[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_116[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_116 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_117[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_117[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_117 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_118[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_118[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_118 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_119[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_119[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_119 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_12[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_12[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_12 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_120[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_120[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_120 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_121[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_121[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_121 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_122[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_122[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_122 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_123[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_123[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_123 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_124[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_124[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_124 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_125[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_125[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_125 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_126[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_126[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_126 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_127[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_127[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_127 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_128[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_128[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_128 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_129[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_129[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_129 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_13[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_13[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_13 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_130[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_130[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_130 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_131[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_131[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_131 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_132[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_132[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_132 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_133[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_133[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_133 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_134[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_134[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_134 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_135[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_135[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_135 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_136[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_136[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_136 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_137[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_137[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_137 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_138[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_138[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_138 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_139[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_139[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_139 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_14[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_14[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_14 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_140[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_140[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_140 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_141[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_141[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_141 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_142[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_142[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_142 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_143[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_143[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_143 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_144[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_144[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_144 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_145[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_145[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_145 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_146[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_146[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_146 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_147[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_147[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_147 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_148[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_148[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_148 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_149[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_149[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_149 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_15[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_15[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_15 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_150[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_150[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_150 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_151[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_151[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_151 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_152[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_152[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_152 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_153[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_153[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_153 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_154[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_154[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_154 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_155[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_155[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_155 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_156[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_156[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_156 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_157[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_157[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_157 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_158[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_158[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_158 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_159[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_159[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_159 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_16[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_16[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_16 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_160[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_160[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_160 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_161[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_161[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_161 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_162[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_162[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_162 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_163[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_163[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_163 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_164[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_164[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_164 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_165[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_165[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_165 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_166[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_166[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_166 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_167[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_167[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_167 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_168[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_168[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_168 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_169[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_169[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_169 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_17[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_17[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_17 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_170[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_170[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_170 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_171[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_171[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_171 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_172[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_172[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_172 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_173[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_173[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_173 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_174[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_174[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_174 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_175[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_175[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_175 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_176[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_176[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_176 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_177[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_177[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_177 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_178[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_178[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_178 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_179[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_179[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_179 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_18[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_18[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_18 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_180[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_180[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_180 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_181[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_181[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_181 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_182[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_182[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_182 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_183[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_183[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_183 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_184[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_184[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_184 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_185[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_185[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_185 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_186[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_186[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_186 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_187[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_187[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_187 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_188[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_188[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_188 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_189[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_189[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_189 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_19[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_19[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_19 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_190[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_190[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_190 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_191[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_191[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_191 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_192[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_192[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_192 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_193[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_193[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_193 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_194[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_194[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_194 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_195[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_195[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_195 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_196[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_196[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_196 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_197[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_197[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_197 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_198[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_198[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_198 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_199[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_199[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_199 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_20[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_20[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_20 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_200[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_200[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_200 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_201[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_201[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_201 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_202[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_202[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_202 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_203[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_203[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_203 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_204[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_204[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_204 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_205[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_205[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_205 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_206[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_206[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_206 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_207[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_207[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_207 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_208[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_208[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_208 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_209[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_209[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_209 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_21[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_21[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_21 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_210[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_210[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_210 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_211[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_211[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_211 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_212[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_212[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_212 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_213[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_213[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_213 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_214[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_214[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_214 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_215[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_215[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_215 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_216[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_216[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_216 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_217[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_217[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_217 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_218[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_218[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_218 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_219[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_219[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_219 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_22[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_22[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_22 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_220[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_220[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_220 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_221[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_221[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_221 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_222[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_222[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_222 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_223[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_223[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_223 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_224[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_224[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_224 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_225[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_225[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_225 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_226[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_226[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_226 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_227[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_227[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_227 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_228[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_228[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_228 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_229[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_229[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_229 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_23[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_23[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_23 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_230[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_230[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_230 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_231[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_231[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_231 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_232[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_232[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_232 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_233[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_233[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_233 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_234[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_234[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_234 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_235[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_235[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_235 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_236[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_236[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_236 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_237[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_237[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_237 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_238[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_238[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_238 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_239[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_239[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_239 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_24[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_24[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_24 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_240[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_240[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_240 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_241[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_241[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_241 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_242[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_242[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_242 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_243[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_243[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_243 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_244[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_244[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_244 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_245[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_245[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_245 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_246[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_246[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_246 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_247[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_247[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_247 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_248[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_248[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_248 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_249[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_249[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_249 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_25[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_25[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_25 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_250[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_250[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_250 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_251[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_251[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_251 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_252[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_252[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_252 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_253[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_253[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_253 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_254[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_254[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_254 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_255[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_255[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_255 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_26[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_26[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_26 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_27[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_27[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_27 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_28[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_28[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_28 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_29[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_29[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_29 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_30[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_30[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_30 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_31[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_31[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_31 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_32[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_32[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_32 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_33[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_33[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_33 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_34[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_34[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_34 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_35[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_35[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_35 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_36[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_36[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_36 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_37[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_37[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_37 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_38[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_38[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_38 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_39[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_39[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_39 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_40[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_40[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_40 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_41[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_41[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_41 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_42[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_42[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_42 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_43[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_43[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_43 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_44[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_44[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_44 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_45[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_45[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_45 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_46[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_46[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_46 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_47[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_47[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_47 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_48[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_48[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_48 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_49[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_49[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_49 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_50[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_50[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_50 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_51[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_51[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_51 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_52[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_52[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_52 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_53[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_53[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_53 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_54[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_54[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_54 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_55[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_55[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_55 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_56[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_56[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_56 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_57[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_57[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_57 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_58[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_58[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_58 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_59[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_59[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_59 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_60[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_60[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_60 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_61[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_61[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_61 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_62[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_62[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_62 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_63[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_63[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_63 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_64[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_64[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_64 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_65[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_65[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_65 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_66[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_66[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_66 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_67[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_67[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_67 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_68[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_68[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_68 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_69[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_69[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_69 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_70[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_70[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_70 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_71[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_71[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_71 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_72[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_72[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_72 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_73[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_73[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_73 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_74[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_74[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_74 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_75[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_75[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_75 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_76[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_76[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_76 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_77[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_77[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_77 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_78[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_78[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_78 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_79[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_79[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_79 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_80[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_80[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_80 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_81[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_81[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_81 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_82[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_82[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_82 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_83[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_83[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_83 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_84[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_84[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_84 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_85[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_85[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_85 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_86[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_86[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_86 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_87[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_87[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_87 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_88[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_88[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_88 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_89[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_89[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_89 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_90[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_90[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_90 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_91[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_91[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_91 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_92[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_92[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_92 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_93[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_93[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_93 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_94[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_94[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_94 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_95[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_95[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_95 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_96[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_96[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_96 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_97[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_97[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_97 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_98[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_98[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_98 for the next test in the suite*/

    EU_ASSERT(0UL == reentry_guard_ETH_EXCLUSIVE_AREA_99[u32CoreId]);
    reentry_guard_ETH_EXCLUSIVE_AREA_99[u32CoreId] = 0UL; /*reset reentry_guard_ETH_EXCLUSIVE_AREA_99 for the next test in the suite*/


}
#endif /*MCAL_TESTING_ENVIRONMENT*/

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
