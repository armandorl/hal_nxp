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

#ifndef SCHM_ETH_43_PFE_H
#define SCHM_ETH_43_PFE_H

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

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SCHM_ETH_43_PFE_AR_RELEASE_MAJOR_VERSION     4
#define SCHM_ETH_43_PFE_AR_RELEASE_MINOR_VERSION     4
#define SCHM_ETH_43_PFE_AR_RELEASE_REVISION_VERSION  0
#define SCHM_ETH_43_PFE_SW_MAJOR_VERSION             4
#define SCHM_ETH_43_PFE_SW_MINOR_VERSION             0
#define SCHM_ETH_43_PFE_SW_PATCH_VERSION             0

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
#define NUMBER_OF_CORES         (uint8)(7U)

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
#define RTE_START_SEC_CODE
#include "Rte_MemMap.h"

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
void SchM_Check_eth_43_pfe(void);
#endif /*MCAL_TESTING_ENVIRONMENT*/

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_00(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_00(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_01(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_01(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_02(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_02(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_03(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_03(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_04(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_04(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_05(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_05(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_06(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_06(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_07(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_07(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_08(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_08(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_09(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_09(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_10(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_10(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_100(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_100(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_101(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_101(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_102(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_102(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_103(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_103(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_104(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_104(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_105(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_105(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_106(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_106(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_107(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_107(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_108(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_108(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_109(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_109(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_11(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_11(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_110(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_110(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_111(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_111(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_112(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_112(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_113(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_113(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_114(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_114(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_115(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_115(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_116(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_116(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_117(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_117(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_118(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_118(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_119(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_119(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_12(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_12(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_120(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_120(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_121(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_121(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_122(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_122(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_123(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_123(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_124(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_124(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_125(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_125(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_126(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_126(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_127(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_127(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_128(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_128(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_129(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_129(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_13(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_13(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_130(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_130(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_131(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_131(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_132(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_132(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_133(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_133(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_134(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_134(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_135(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_135(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_136(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_136(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_137(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_137(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_138(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_138(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_139(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_139(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_14(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_14(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_140(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_140(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_141(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_141(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_142(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_142(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_143(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_143(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_144(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_144(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_145(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_145(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_146(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_146(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_147(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_147(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_148(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_148(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_149(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_149(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_15(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_15(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_150(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_150(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_151(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_151(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_152(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_152(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_153(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_153(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_154(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_154(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_155(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_155(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_156(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_156(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_157(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_157(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_158(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_158(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_159(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_159(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_16(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_16(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_160(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_160(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_161(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_161(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_162(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_162(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_163(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_163(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_164(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_164(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_165(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_165(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_166(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_166(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_167(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_167(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_168(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_168(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_169(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_169(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_17(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_17(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_170(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_170(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_171(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_171(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_172(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_172(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_173(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_173(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_174(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_174(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_175(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_175(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_176(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_176(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_177(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_177(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_178(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_178(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_179(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_179(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_18(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_18(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_180(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_180(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_181(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_181(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_182(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_182(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_183(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_183(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_184(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_184(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_185(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_185(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_186(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_186(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_187(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_187(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_188(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_188(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_189(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_189(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_19(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_19(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_190(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_190(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_191(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_191(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_192(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_192(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_193(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_193(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_194(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_194(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_195(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_195(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_196(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_196(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_197(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_197(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_198(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_198(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_199(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_199(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_20(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_20(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_200(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_200(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_201(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_201(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_202(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_202(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_203(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_203(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_204(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_204(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_205(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_205(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_206(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_206(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_207(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_207(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_208(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_208(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_209(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_209(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_21(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_21(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_210(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_210(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_211(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_211(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_212(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_212(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_213(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_213(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_214(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_214(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_215(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_215(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_216(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_216(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_217(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_217(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_218(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_218(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_219(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_219(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_22(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_22(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_220(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_220(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_221(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_221(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_222(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_222(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_223(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_223(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_224(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_224(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_225(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_225(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_226(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_226(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_227(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_227(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_228(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_228(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_229(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_229(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_23(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_23(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_230(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_230(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_231(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_231(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_232(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_232(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_233(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_233(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_234(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_234(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_235(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_235(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_236(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_236(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_237(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_237(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_238(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_238(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_239(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_239(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_24(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_24(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_240(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_240(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_241(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_241(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_242(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_242(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_243(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_243(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_244(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_244(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_245(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_245(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_246(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_246(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_247(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_247(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_248(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_248(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_249(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_249(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_25(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_25(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_250(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_250(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_251(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_251(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_252(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_252(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_253(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_253(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_254(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_254(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_255(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_255(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_26(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_26(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_27(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_27(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_28(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_28(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_29(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_29(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_30(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_30(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_31(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_31(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_32(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_32(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_33(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_33(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_34(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_34(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_35(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_35(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_36(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_36(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_37(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_37(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_38(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_38(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_39(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_39(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_40(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_40(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_41(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_41(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_42(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_42(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_43(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_43(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_44(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_44(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_45(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_45(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_46(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_46(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_47(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_47(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_48(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_48(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_49(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_49(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_50(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_50(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_51(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_51(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_52(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_52(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_53(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_53(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_54(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_54(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_55(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_55(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_56(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_56(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_57(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_57(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_58(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_58(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_59(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_59(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_60(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_60(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_61(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_61(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_62(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_62(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_63(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_63(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_64(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_64(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_65(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_65(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_66(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_66(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_67(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_67(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_68(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_68(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_69(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_69(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_70(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_70(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_71(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_71(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_72(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_72(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_73(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_73(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_74(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_74(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_75(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_75(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_76(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_76(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_77(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_77(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_78(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_78(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_79(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_79(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_80(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_80(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_81(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_81(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_82(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_82(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_83(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_83(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_84(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_84(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_85(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_85(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_86(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_86(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_87(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_87(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_88(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_88(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_89(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_89(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_90(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_90(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_91(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_91(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_92(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_92(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_93(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_93(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_94(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_94(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_95(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_95(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_96(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_96(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_97(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_97(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_98(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_98(void);

extern void SchM_Enter_Eth_43_PFE_ETH_EXCLUSIVE_AREA_99(void);
extern void SchM_Exit_Eth_43_PFE_ETH_EXCLUSIVE_AREA_99(void);




#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* SCHM_ETH_43_PFE_H */
