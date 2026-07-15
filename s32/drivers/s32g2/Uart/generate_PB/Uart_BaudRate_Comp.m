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

*/!]
[!VAR "ClockFrequencyFromMcu" = "McuClockReferencePointFrequency"!]
[!/* Linflexd baudrate */!]
    [!VAR "Prescaler"               = "($ClockFrequencyFromMcu div ($LinflexdBaudrate * 16))"!][//
    [!VAR "Mantissa"                = "num:i($Prescaler)"!][!//
    [!VAR "Fraction"                = "($Prescaler - $Mantissa)"!][!//
    [!VAR "FractionNumerator"       = "num:i($Fraction * 16 + 0.5)"!][!//
    [!IF "FractionNumerator = 16"!][!VAR "Mantissa" = "($Mantissa + 1)"!][!ENDIF!][!//

