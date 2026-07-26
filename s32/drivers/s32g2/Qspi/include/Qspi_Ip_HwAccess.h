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

#ifndef QUADSPI_HW_ACCESS_H
#define QUADSPI_HW_ACCESS_H

/**
*   @file Qspi_Ip_HwAccess.h
*
*   @addtogroup IPV_QSPI QSPI IPV Driver
*   @{
*/

/* implements Qspi_Ip_HwAccess.h_Artifact */

#ifdef __cplusplus
extern "C"{
#endif


#include "Qspi_Ip.h"
#include "Qspi_Ip_Common.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define QSPI_IP_HW_ACCESS_VENDOR_ID_H                       43
#define QSPI_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_H        4
#define QSPI_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_H        4
#define QSPI_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_H     0
#define QSPI_IP_HW_ACCESS_SW_MAJOR_VERSION_H                4
#define QSPI_IP_HW_ACCESS_SW_MINOR_VERSION_H                0
#define QSPI_IP_HW_ACCESS_SW_PATCH_VERSION_H                0


/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Qspi_Ip header file are of the same vendor */
#if (QSPI_IP_HW_ACCESS_VENDOR_ID_H != QSPI_IP_VENDOR_ID_H)
    #error "Qspi_Ip_HwAccess.h and Qspi_Ip.h have different vendor ids"
#endif
/* Check if current file and Qspi_Ip header file are of the same Autosar version */
#if ((QSPI_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_H    != QSPI_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (QSPI_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_H    != QSPI_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (QSPI_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_H != QSPI_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Qspi_Ip_HwAccess.h and Qspi_Ip.h are different"
#endif
/* Check if current file and Qspi_Ip header file are of the same Software version */
#if ((QSPI_IP_HW_ACCESS_SW_MAJOR_VERSION_H != QSPI_IP_SW_MAJOR_VERSION_H) || \
     (QSPI_IP_HW_ACCESS_SW_MINOR_VERSION_H != QSPI_IP_SW_MINOR_VERSION_H) || \
     (QSPI_IP_HW_ACCESS_SW_PATCH_VERSION_H != QSPI_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Qspi_Ip_HwAccess.h and Qspi_Ip.h are different"
#endif

/* Check if current file and Qspi_Ip_Common header file are of the same vendor */
#if (QSPI_IP_HW_ACCESS_VENDOR_ID_H != QSPI_IP_COMMON_VENDOR_ID_H)
    #error "Qspi_Ip_HwAccess.h and Qspi_Ip_Common.h have different vendor ids"
#endif
/* Check if current file and Qspi_Ip_Common header file are of the same Autosar version */
#if ((QSPI_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_H    != QSPI_IP_COMMON_AR_RELEASE_MAJOR_VERSION_H) || \
     (QSPI_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_H    != QSPI_IP_COMMON_AR_RELEASE_MINOR_VERSION_H) || \
     (QSPI_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_H != QSPI_IP_COMMON_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Qspi_Ip_HwAccess.h and Qspi_Ip_Common.h are different"
#endif
/* Check if current file and Qspi_Ip_Common header file are of the same Software version */
#if ((QSPI_IP_HW_ACCESS_SW_MAJOR_VERSION_H != QSPI_IP_COMMON_SW_MAJOR_VERSION_H) || \
     (QSPI_IP_HW_ACCESS_SW_MINOR_VERSION_H != QSPI_IP_COMMON_SW_MINOR_VERSION_H) || \
     (QSPI_IP_HW_ACCESS_SW_PATCH_VERSION_H != QSPI_IP_COMMON_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Qspi_Ip_HwAccess.h and Qspi_Ip_Common.h are different"
#endif

#if (QSPI_IP_MEM_INSTANCE_COUNT > 0)

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define QSPI_IP_RX_READOUT_IP   1U        /* RX Buffer content is read using the AHB Bus registers QSPI_ARDBn */

/*******************************************************************************
 * API
 ******************************************************************************/


/*
 * Set all hardware registers to their reset value
 */
static inline void Qspi_Ip_ResetAllRegisters(QuadSPI_Type *BaseAddr)
{
    uint8 cnt;

    /* reset MCR register */
    BaseAddr->MCR      = (uint32)0x000F404CUL;
    /* reset IPCR register */
    BaseAddr->IPCR     = (uint32)0x00000000UL;
    /* reset FLSHCR register */
    BaseAddr->FLSHCR   = (uint32)0x00000303UL;
    /* reset BUF0CR register */
    BaseAddr->BUF0CR   = (uint32)0x0000000BUL;
    /* reset BUF1CR register */
    BaseAddr->BUF1CR   = (uint32)0x00000001UL;
    /* reset BUF2CR register */
    BaseAddr->BUF2CR   = (uint32)0x00000002UL;
    /* reset BUF3CR register */
    BaseAddr->BUF3CR   = (uint32)0x80000003UL;
    /* reset BFGENCR register */
    BaseAddr->BFGENCR  = (uint32)0x00000000UL;
    /* reset BUF0IND register */
    BaseAddr->BUF0IND  = (uint32)0x00000000UL;
    /* reset BUF1IND register */
    BaseAddr->BUF1IND  = (uint32)0x00000000UL;
    /* reset BUF2IND register */
    BaseAddr->BUF2IND  = (uint32)0x00000000UL;
    /* reset AWRCR register */
    BaseAddr->AWRCR    = (uint32)0x00000000UL;
    /* reset DLLCRA register */
    BaseAddr->DLLCRA   = (uint32)0x01200000UL;
    /* reset DLLCRB register */
    BaseAddr->DLLCRB   = (uint32)0x01200000UL;
    /* reset PARITYCR register */
    BaseAddr->PARITYCR = (uint32)0x00000000UL;
    /* reset SFAR register */
    BaseAddr->SFAR     = (uint32)0x00000000UL;
    /* reset SFACR register */
    BaseAddr->SFACR    = (uint32)0x00000800UL;
    /* reset SMPR register */
    BaseAddr->SMPR     = (uint32)0x00000000UL;
    /* reset RBCT register */
    BaseAddr->RBCT     = (uint32)0x00000000UL;
    /* reset DLCR register */
    BaseAddr->DLCR     = (uint32)0x40FF40FFUL;
    /* reset TBDR register */
    BaseAddr->TBDR     = (uint32)0x00000000UL;
    /* reset TBCT register */
    BaseAddr->TBCT     = (uint32)0x00000000UL;
    /* reset FR register, Write 1 to clear */
    BaseAddr->FR       = (uint32)0x9D83DFC1UL;
    /* reset RSER register */
    BaseAddr->RSER     = (uint32)0x00000000UL;
    /* reset SPTRCLR register: clear both IP and AHB sequence pointers */
    BaseAddr->SPTRCLR  = (uint32)QuadSPI_SPTRCLR_BFPTRC_MASK | (uint32)QuadSPI_SPTRCLR_IPPTRC_MASK;
    /* reset SFA1AD register */
    BaseAddr->SFA1AD   = (uint32)0x00000000UL;
    /* reset SFA2AD register */
    BaseAddr->SFA2AD   = (uint32)0x00000000UL;
    /* reset SFB1AD register */
    BaseAddr->SFB1AD   = (uint32)0x00000000UL;
    /* reset SFB2AD register */
    BaseAddr->SFB2AD   = (uint32)0x00000000UL;
    /* reset DLPR register */
    BaseAddr->DLPR     = (uint32)0xAA553443UL;
    /* reset LUTKEY register */
    BaseAddr->LUTKEY   = (uint32)0x5AF05AF0UL;
    /* reset LCKCR register */
    BaseAddr->LCKCR    = (uint32)0x00000002UL;
    /* reset LUT0 register */
    BaseAddr->LUT[0]   = (uint32)0x08180403UL;
    /* reset LUT1 register */
    BaseAddr->LUT[1]   = (uint32)0x24001C08UL;
    for (cnt = 2U; cnt < QuadSPI_LUT_COUNT; cnt++)
    {
        BaseAddr->LUT[cnt] = (uint32)0x00000000UL;
    }
}


/*
 * Triggers an IP transaction
 */
static inline void Qspi_Ip_IpTrigger(QuadSPI_Type *BaseAddr,
                                     uint8 SeqID,
                                     uint16 DataSize
                                    )
{
    BaseAddr->IPCR =  QuadSPI_IPCR_SEQID(SeqID)
                    | QuadSPI_IPCR_IDATSZ(DataSize);
}


/*
 * Clear Rx buffer
 */
static inline void Qspi_Ip_ClearRxBuf(QuadSPI_Type *BaseAddr)
{
    BaseAddr->MCR |= QuadSPI_MCR_CLR_RXF_MASK;

}


/*
 * Clear Tx buffer
 */
static inline void Qspi_Ip_ClearTxBuf(QuadSPI_Type *BaseAddr)
{
    BaseAddr->MCR |= QuadSPI_MCR_CLR_TXF_MASK;

}


/*
 * Checks the Tx buffer clear flag
 * Returns TRUE if the Tx buffer content is invalidated.
 */
static inline boolean Qspi_Ip_GetClrTxStatus(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->MCR;

    RegValue = (RegValue & QuadSPI_MCR_CLR_TXF_MASK) >> QuadSPI_MCR_CLR_TXF_SHIFT;
    return (0U == RegValue)? TRUE : FALSE;
}


#ifdef QuadSPI_SPTRCLR_ABRT_CLR_MASK
/*
 * Clear AHB buffer
 */
static inline void Qspi_Ip_ClearAhbBuf(QuadSPI_Type *BaseAddr)
{
    BaseAddr->SPTRCLR |= QuadSPI_SPTRCLR_ABRT_CLR_MASK;
}

/*
 * Checks the Ahb buffer clear flag
 * Returns TRUE if the Ahb buffer content is invalidated.
 */
static inline boolean Qspi_Ip_GetClrAhbStatus(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->SPTRCLR;

    RegValue = (RegValue & QuadSPI_SPTRCLR_ABRT_CLR_MASK) >> QuadSPI_SPTRCLR_ABRT_CLR_SHIFT;
    return (0U == RegValue)? TRUE : FALSE;
}
#endif


/*
 * Enable QuadSPI device
 */
static inline void Qspi_Ip_Enable(QuadSPI_Type *BaseAddr)
{
    BaseAddr->MCR &= ~QuadSPI_MCR_MDIS_MASK;

}


/*
 * Disable QuadSPI device
 */
static inline void Qspi_Ip_Disable(QuadSPI_Type *BaseAddr)
{
    BaseAddr->MCR |= QuadSPI_MCR_MDIS_MASK;

}

/*
 * Enable DDR mode
 */
static inline void QSPI_DDR_Enable(QuadSPI_Type *BaseAddr)
{
    BaseAddr->MCR |= QuadSPI_MCR_DDR_EN_MASK;

}


/*
 * Disable DDR mode
 */
static inline void QSPI_DDR_Disable(QuadSPI_Type *BaseAddr)
{
    BaseAddr->MCR &= ~QuadSPI_MCR_DDR_EN_MASK;

}


/*
 * Enable or disable DQS Latency
 */
static inline void QSPI_DQS_LatEnable(QuadSPI_Type *BaseAddr,
                                      boolean Enable
                                     )
{
    uint32 RegValue = (uint32)BaseAddr->MCR;

    RegValue &= (uint32)(~((uint32)QuadSPI_MCR_DQS_LAT_EN_MASK));
    RegValue |= QuadSPI_MCR_DQS_LAT_EN(Enable? 1U : 0U);

    BaseAddr->MCR = (uint32)RegValue;
}


/*
 * Enable DQS
 */
#ifdef QuadSPI_MCR_DQS_EN_MASK
static inline void QSPI_DQS_Enable(QuadSPI_Type *BaseAddr)
{
    /* Enable DQS */
    BaseAddr->MCR |= QuadSPI_MCR_DQS_EN_MASK;
}
#else
static inline void QSPI_DQS_Enable(const QuadSPI_Type *BaseAddr)
{
    /* Unused variable */
    (void)BaseAddr;
}
#endif

/*
 * Disable DQS
 */
#ifdef QuadSPI_MCR_DQS_EN_MASK
static inline void QSPI_DQS_Disable(QuadSPI_Type *BaseAddr)
{
    /* Disable DQS */
    BaseAddr->MCR &= ~QuadSPI_MCR_DQS_EN_MASK;
}
#else
static inline void QSPI_DQS_Disable(const QuadSPI_Type *BaseAddr)
{
    /* Unused variable */
    (void)BaseAddr;
}
#endif


/*
 * Assert QuadSPI sw reset bits
 */
static inline void Qspi_Ip_SwResetOn(QuadSPI_Type *BaseAddr)
{
    BaseAddr->MCR |= QuadSPI_MCR_SWRSTHD_MASK | QuadSPI_MCR_SWRSTSD_MASK;

}


/*
 * Deassert QuadSPI sw reset bits
 */
static inline void Qspi_Ip_SwResetOff(QuadSPI_Type *BaseAddr)
{
    BaseAddr->MCR &= ~(QuadSPI_MCR_SWRSTHD_MASK | QuadSPI_MCR_SWRSTSD_MASK);

}


/*
 * Configure idle values for data lines 2:3
 */
static inline void Qspi_Ip_SetIdleLineValues(QuadSPI_Type *BaseAddr,
                                             uint8 Iofa2IdleValue,
                                             uint8 Iofa3IdleValue,
                                             uint8 Iofb2IdleValue,
                                             uint8 Iofb3IdleValue
                                            )
{
    /* get value MCR register */
    uint32 RegValue = (uint32)BaseAddr->MCR;

    /* set mask for ISD3FA,ISD2FA,ISD2FB,ISD3FB */
    RegValue &= (uint32)(~(QuadSPI_MCR_ISD2FA_MASK | QuadSPI_MCR_ISD3FA_MASK | QuadSPI_MCR_ISD2FB_MASK | QuadSPI_MCR_ISD3FB_MASK));
    RegValue |= (QuadSPI_MCR_ISD2FA(Iofa2IdleValue) |
                 QuadSPI_MCR_ISD3FA(Iofa3IdleValue) |
                 QuadSPI_MCR_ISD2FB(Iofb2IdleValue) |
                 QuadSPI_MCR_ISD3FB(Iofb3IdleValue));
    /* set again the MCR register */
    BaseAddr->MCR = (uint32)RegValue;
}


/*
 * Enable/Disable DQS slave delay chain
 */
static inline void Qspi_Ip_DLLSlaveEnA(QuadSPI_Type *BaseAddr,
                                       boolean Enable
                                      )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRA;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRA_SLV_EN_MASK));
    RegValue |= QuadSPI_DLLCRA_SLV_EN(Enable? 1U : 0U);
    BaseAddr->DLLCRA = (uint32)RegValue;
}

/*
 * Activates/Deactivates DQS slave delay chain update
 */
static inline void Qspi_Ip_DLLSlaveUpdateA(QuadSPI_Type *BaseAddr,
                                           boolean Enable
                                          )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRA;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRA_SLV_UPD_MASK));
    RegValue |= QuadSPI_DLLCRA_SLV_UPD(Enable? 1U : 0U);
    BaseAddr->DLLCRA = (uint32)RegValue;
}

/*
 * Activates/Deactivates DQS slave delay chain update
 */
static inline void Qspi_Ip_DLLEnableA(QuadSPI_Type *BaseAddr,
                                      boolean Enable
                                     )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRA;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRA_DLLEN_MASK));
    RegValue |= QuadSPI_DLLCRA_DLLEN(Enable? 1U : 0U);
    BaseAddr->DLLCRA = (uint32)RegValue;
}

/*
 * Activates/Deactivates slave DLL bypass
 */
static inline void Qspi_Ip_DLLSlaveBypassA(QuadSPI_Type *BaseAddr,
                                           boolean Enable
                                          )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRA;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRA_SLV_DLL_BYPASS_MASK));
    RegValue |= QuadSPI_DLLCRA_SLV_DLL_BYPASS(Enable? 1U : 0U);
    BaseAddr->DLLCRA = (uint32)RegValue;
}

/*
 * Activates/Deactivates slave auto update
 */
static inline void Qspi_Ip_DLLSlaveAutoUpdateA(QuadSPI_Type *BaseAddr,
                                               boolean Enable
                                              )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRA;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRA_SLAVE_AUTO_UPDT_MASK));
    RegValue |= QuadSPI_DLLCRA_SLAVE_AUTO_UPDT(Enable? 1U : 0U);
    BaseAddr->DLLCRA = (uint32)RegValue;
}

/*
 * Activates/Deactivates delay-chain for high frequency of operation
 */
static inline void Qspi_Ip_DLLFreqEnA(QuadSPI_Type *BaseAddr,
                                      boolean Enable
                                     )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRA;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRA_FREQEN_MASK));
    RegValue |= QuadSPI_DLLCRA_FREQEN(Enable? 1U : 0U);
    BaseAddr->DLLCRA = (uint32)RegValue;
}

/*
 * Sets slave delay chain coarse delay for DLL bypass mode
 */
static inline void Qspi_Ip_DLLSetCoarseDelayA(QuadSPI_Type *BaseAddr,
                                              uint8 CoarseDelay
                                             )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRA;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRA_SLV_DLY_COARSE_MASK));
    RegValue |= QuadSPI_DLLCRA_SLV_DLY_COARSE(CoarseDelay);
    BaseAddr->DLLCRA = (uint32)RegValue;
}

/*
 * Sets slave delay chain fine delay for DLL bypass mode
 */
#ifdef QuadSPI_DLLCRA_SLV_DLY_FINE_MASK
static inline void Qspi_Ip_DLLSetFineDelayA(QuadSPI_Type *BaseAddr,
                                            uint8 FineDelay
                                           )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRA;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRA_SLV_DLY_FINE_MASK));
    RegValue |= QuadSPI_DLLCRA_SLV_DLY_FINE(FineDelay);
    BaseAddr->DLLCRA = (uint32)RegValue;
}
#else
static inline void Qspi_Ip_DLLSetFineDelayA(const QuadSPI_Type *BaseAddr,
                                            uint8 FineDelay
                                           )
{
    /* Unused variables */
    (void)BaseAddr;
    (void)FineDelay;
}
#endif  /* QuadSPI_DLLCRA_SLV_DLY_FINE_MASK */

/*
 * Sets reference counter
 */
static inline void Qspi_Ip_DLLSetReferenceCounterA(QuadSPI_Type *BaseAddr,
                                                   uint8 ReferenceCounter
                                                  )
{
#ifdef QuadSPI_DLLCRA_DLL_REFCNTR_MASK
    uint32 RegValue = (uint32)BaseAddr->DLLCRA;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRA_DLL_REFCNTR_MASK));
    RegValue |= QuadSPI_DLLCRA_DLL_REFCNTR(ReferenceCounter);
    BaseAddr->DLLCRA = (uint32)RegValue;
#else
    (void)BaseAddr;
    (void)ReferenceCounter;
#endif  /* QuadSPI_DLLCRA_DLL_REFCNTR_MASK */
}

/*
 * Sets Resolution
 */
static inline void Qspi_Ip_DLLSetResolutionA(QuadSPI_Type *BaseAddr,
                                             uint8 Resolution
                                            )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRA;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRA_DLLRES_MASK));
    RegValue |= QuadSPI_DLLCRA_DLLRES(Resolution);
    BaseAddr->DLLCRA = (uint32)RegValue;
}

/*
 * Sets slave delay chain coarse offset
 */
static inline void Qspi_Ip_DLLSetCoarseOffsetA(QuadSPI_Type *BaseAddr,
                                               uint8 CoarseDelay
                                              )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRA;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRA_SLV_DLY_OFFSET_MASK));
    RegValue |= QuadSPI_DLLCRA_SLV_DLY_OFFSET(CoarseDelay);
    BaseAddr->DLLCRA = (uint32)RegValue;
}

/*
 * Sets slave delay chain fine offset
 */
static inline void Qspi_Ip_DLLSetFineOffsetA(QuadSPI_Type *BaseAddr,
                                             uint8 FineDelay
                                            )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRA;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRA_SLV_FINE_OFFSET_MASK));
    RegValue |= QuadSPI_DLLCRA_SLV_FINE_OFFSET(FineDelay);
    BaseAddr->DLLCRA = (uint32)RegValue;
}


/*
 * Checks high frequency slave delay chain lock status
 */
static inline boolean Qspi_Ip_DLLGetSlaveLockStatusA(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->DLLSR;

    RegValue = (RegValue & QuadSPI_DLLSR_SLVA_LOCK_MASK) >> QuadSPI_DLLSR_SLVA_LOCK_SHIFT;
    return (RegValue != 0U)? TRUE : FALSE;
}

/*
 * Checks DLL lock status
 */
static inline boolean Qspi_Ip_DLLGetLockStatusA(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->DLLSR;

    RegValue = (RegValue & QuadSPI_DLLSR_DLLA_LOCK_MASK) >> QuadSPI_DLLSR_DLLA_LOCK_SHIFT;
    return (RegValue != 0U)? TRUE : FALSE;
}

/*
 * Checks high frequency slave delay chain error status
 */
static inline boolean Qspi_Ip_DLLGetErrorStatusA(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->DLLSR;

    RegValue = RegValue & (QuadSPI_DLLSR_DLLA_RANGE_ERR_MASK | QuadSPI_DLLSR_DLLA_FINE_UNDERFLOW_MASK);
    return (RegValue != 0U)? TRUE : FALSE;
}

/*
 * Enable/Disable DQS slave delay chain
 */
static inline void Qspi_Ip_DLLSlaveEnB(QuadSPI_Type *BaseAddr,
                                       boolean Enable
                                      )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRB;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRB_SLV_EN_MASK));
    RegValue |= QuadSPI_DLLCRB_SLV_EN(Enable? 1U : 0U);
    BaseAddr->DLLCRB = (uint32)RegValue;
}

/*
 * Activates/Deactivates DQS slave delay chain update
 */
static inline void Qspi_Ip_DLLSlaveUpdateB(QuadSPI_Type *BaseAddr,
                                           boolean Enable
                                          )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRB;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRB_SLV_UPD_MASK));
    RegValue |= QuadSPI_DLLCRB_SLV_UPD(Enable? 1U : 0U);
    BaseAddr->DLLCRB = (uint32)RegValue;
}

/*
 * Activates/Deactivates DQS slave delay chain update
 */
static inline void Qspi_Ip_DLLEnableB(QuadSPI_Type *BaseAddr,
                                      boolean Enable
                                     )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRB;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRB_DLLEN_MASK));
    RegValue |= QuadSPI_DLLCRB_DLLEN(Enable? 1U : 0U);
    BaseAddr->DLLCRB = (uint32)RegValue;
}

/*
 * Activates/Deactivates slave DLL bypass
 */
static inline void Qspi_Ip_DLLSlaveBypassB(QuadSPI_Type *BaseAddr,
                                           boolean Enable
                                          )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRB;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRB_SLV_DLL_BYPASS_MASK));
    RegValue |= QuadSPI_DLLCRB_SLV_DLL_BYPASS(Enable? 1U : 0U);
    BaseAddr->DLLCRB = (uint32)RegValue;
}

/*
 * Activates/Deactivates slave auto update
 */
static inline void Qspi_Ip_DLLSlaveAutoUpdateB(QuadSPI_Type *BaseAddr,
                                               boolean Enable
                                              )
{
    (void)BaseAddr;
    (void)Enable;
    uint32 RegValue = (uint32)BaseAddr->DLLCRB;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRB_SLAVE_AUTO_UPDT_MASK));
    RegValue |= QuadSPI_DLLCRB_SLAVE_AUTO_UPDT(Enable? 1U : 0U);
    BaseAddr->DLLCRB = (uint32)RegValue;
}

/*
 * Activates/Deactivates delay-chain for high frequency of operation
 */
static inline void Qspi_Ip_DLLFreqEnB(QuadSPI_Type *BaseAddr,
                                      boolean Enable
                                     )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRB;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRB_FREQEN_MASK));
    RegValue |= QuadSPI_DLLCRB_FREQEN(Enable? 1U : 0U);
    BaseAddr->DLLCRB = (uint32)RegValue;
}

/*
 * Sets slave delay chain coarse delay for DLL bypass mode
 */
static inline void Qspi_Ip_DLLSetCoarseDelayB(QuadSPI_Type *BaseAddr,
                                              uint8 CoarseDelay
                                             )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRB;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRB_SLV_DLY_COARSE_MASK));
    RegValue |= QuadSPI_DLLCRB_SLV_DLY_COARSE(CoarseDelay);
    BaseAddr->DLLCRB = (uint32)RegValue;
}

/*
 * Sets slave delay chain fine delay for DLL bypass mode
 */
#ifdef QuadSPI_DLLCRB_SLV_DLY_FINE_MASK
static inline void Qspi_Ip_DLLSetFineDelayB(QuadSPI_Type *BaseAddr,
                                            uint8 FineDelay
                                           )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRB;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRB_SLV_DLY_FINE_MASK));
    RegValue |= QuadSPI_DLLCRB_SLV_DLY_FINE(FineDelay);
    BaseAddr->DLLCRB = (uint32)RegValue;
}
#else
static inline void Qspi_Ip_DLLSetFineDelayB(const QuadSPI_Type *BaseAddr,
                                            uint8 FineDelay
                                           )
{
    /* Unused variables */
    (void)BaseAddr;
    (void)FineDelay;
}
#endif  /* QuadSPI_DLLCRB_SLV_DLY_FINE_MASK */

/*
 * Sets reference counter
 */
static inline void Qspi_Ip_DLLSetReferenceCounterB(QuadSPI_Type *BaseAddr,
                                                   uint8 ReferenceCounter
                                                  )
{
#ifdef QuadSPI_DLLCRB_DLL_REFCNTR_MASK
    uint32 RegValue = (uint32)BaseAddr->DLLCRB;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRB_DLL_REFCNTR_MASK));
    RegValue |= QuadSPI_DLLCRB_DLL_REFCNTR(ReferenceCounter);
    BaseAddr->DLLCRB = (uint32)RegValue;
#else
    (void)BaseAddr;
    (void)ReferenceCounter;
#endif  /* QuadSPI_DLLCRB_DLL_REFCNTR_MASK */
}
/*
 * Sets Resolution
 */
static inline void Qspi_Ip_DLLSetResolutionB(QuadSPI_Type *BaseAddr,
                                             uint8 Resolution
                                            )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRB;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRB_DLLRES_MASK));
    RegValue |= QuadSPI_DLLCRB_DLLRES(Resolution);
    BaseAddr->DLLCRB = (uint32)RegValue;
}


/*
 * Sets slave delay chain coarse offset
 */
static inline void Qspi_Ip_DLLSetCoarseOffsetB(QuadSPI_Type *BaseAddr,
                                               uint8 CoarseDelay
                                              )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRB;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRB_SLV_DLY_OFFSET_MASK));
    RegValue |= QuadSPI_DLLCRB_SLV_DLY_OFFSET(CoarseDelay);
    BaseAddr->DLLCRB = (uint32)RegValue;
}

/*
 * Sets slave delay chain fine offset
 */
static inline void Qspi_Ip_DLLSetFineOffsetB(QuadSPI_Type *BaseAddr,
                                             uint8 FineDelay
                                            )
{
    uint32 RegValue = (uint32)BaseAddr->DLLCRB;

    RegValue &= (uint32)(~((uint32)QuadSPI_DLLCRB_SLV_FINE_OFFSET_MASK));
    RegValue |= QuadSPI_DLLCRB_SLV_FINE_OFFSET(FineDelay);
    BaseAddr->DLLCRB = (uint32)RegValue;
}

/*
 * Checks high frequency slave delay chain lock status
 */
static inline boolean Qspi_Ip_DLLGetSlaveLockStatusB(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->DLLSR;

    RegValue = (RegValue & QuadSPI_DLLSR_SLVB_LOCK_MASK) >> QuadSPI_DLLSR_SLVB_LOCK_SHIFT;
    return (RegValue != 0U)? TRUE : FALSE;
}

/*
 * Checks DLL lock status
 */
static inline boolean Qspi_Ip_DLLGetLockStatusB(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->DLLSR;

    RegValue = (RegValue & QuadSPI_DLLSR_DLLB_LOCK_MASK) >> QuadSPI_DLLSR_DLLB_LOCK_SHIFT;
    return (RegValue != 0U)? TRUE : FALSE;
}

/*
 * Checks high frequency slave delay chain error status
 */
static inline boolean Qspi_Ip_DLLGetErrorStatusB(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->DLLSR;

    RegValue = RegValue & (QuadSPI_DLLSR_DLLB_RANGE_ERR_MASK | QuadSPI_DLLSR_DLLB_FINE_UNDERFLOW_MASK);
    return (RegValue != 0U)? TRUE : FALSE;
}



/*
 * Configure external flash memory map size A
 */
static inline void Qspi_Ip_SetMemMapSizeA(uint32 instance,
                                          QuadSPI_Type *BaseAddr,
                                          uint32 SizeA1,
                                          uint32 SizeA2
                                         )
{
    BaseAddr->SFA1AD = Qspi_Ip_AhbAddress[instance] + SizeA1;
    BaseAddr->SFA2AD = Qspi_Ip_AhbAddress[instance] + SizeA1 + SizeA2;
}

/*
 * Configure external flash memory map size B
 */
static inline void Qspi_Ip_SetMemMapSizeB(QuadSPI_Type *BaseAddr,
                                          uint32 SizeB1,
                                          uint32 SizeB2
                                         )
{
    /* Get memory address of size A2 */
    uint32 RegValue = (uint32)BaseAddr->SFA2AD;

    BaseAddr->SFB1AD = RegValue + SizeB1;
    BaseAddr->SFB2AD = RegValue + SizeB1 + SizeB2;
}

/*
 * Set CS hold time in serial clock Cycles
 */
static inline void Qspi_Ip_SetCsHoldTime(QuadSPI_Type *BaseAddr,
                                         uint8 Cycles
                                        )
{
    uint32 RegValue = (uint32)BaseAddr->FLSHCR;

    RegValue &= (uint32)(~((uint32)QuadSPI_FLSHCR_TCSH_MASK));
    RegValue |= QuadSPI_FLSHCR_TCSH(Cycles);
    BaseAddr->FLSHCR = (uint32)RegValue;
}


/*
 * Set CS setup time
 */
static inline void Qspi_Ip_SetCsSetupTime(QuadSPI_Type *BaseAddr,
                                          uint8 Cycles
                                         )
{
    uint32 RegValue = (uint32)BaseAddr->FLSHCR;

    RegValue &= (uint32)(~((uint32)QuadSPI_FLSHCR_TCSS_MASK));
    RegValue |= QuadSPI_FLSHCR_TCSS(Cycles);
    BaseAddr->FLSHCR = (uint32)RegValue;
}


/*
 * Set data in hold time
 */
static inline void Qspi_Ip_SetDataInHoldTime(QuadSPI_Type *BaseAddr,
                                             Qspi_Ip_FlashDataAlignType Enable
                                            )
{
    uint32 RegValue = (uint32)BaseAddr->FLSHCR;

    RegValue &= (uint32)(~(QuadSPI_FLSHCR_TDH_MASK));
    RegValue |= QuadSPI_FLSHCR_TDH(Enable);
    BaseAddr->FLSHCR = (uint32)RegValue;
}


/*
 * Sets AHB buffer 0 configuration
 */
static inline void Qspi_Ip_SetAhbBuf0(QuadSPI_Type *BaseAddr,
                                      uint16 Size,
                                      uint8 Master
                                     )
{
    BaseAddr->BUF0CR =  QuadSPI_BUF0CR_ADATSZ((uint32)Size >> 3U)
                      | QuadSPI_BUF0CR_MSTRID(Master);
}


/*
 * Sets AHB buffer 1 configuration
 */
static inline void Qspi_Ip_SetAhbBuf1(QuadSPI_Type *BaseAddr,
                                      uint16 Size,
                                      uint8 Master
                                     )
{
    BaseAddr->BUF1CR =  QuadSPI_BUF1CR_ADATSZ((uint32)Size >> 3U)
                      | QuadSPI_BUF1CR_MSTRID(Master);
}


/*
 * Sets AHB buffer 2 configuration
 */
static inline void Qspi_Ip_SetAhbBuf2(QuadSPI_Type *BaseAddr,
                                      uint16 Size,
                                      uint8 Master
                                     )
{
    BaseAddr->BUF2CR =  QuadSPI_BUF2CR_ADATSZ((uint32)Size >> 3U)
                      | QuadSPI_BUF2CR_MSTRID(Master);
}


/*
 * Sets AHB buffer 3 configuration
 */
static inline void Qspi_Ip_SetAhbBuf3(QuadSPI_Type *BaseAddr,
                                       uint16 Size,
                                       uint8 Master,
                                       boolean AllMasters
                                     )
{
    BaseAddr->BUF3CR =  QuadSPI_BUF3CR_ADATSZ((uint32)Size >> 3U)
                      | QuadSPI_BUF3CR_MSTRID(Master)
                      | QuadSPI_BUF3CR_ALLMST(AllMasters? 1U : 0U);
}


/*
 * Sets AHB buffer 0 index. Parameter represents desired end index of the buffer.
 */
static inline void Qspi_Ip_SetAhbBuf0Ind(QuadSPI_Type *BaseAddr,
                                         uint32 Index
                                        )
{
    BaseAddr->BUF0IND =  Index;
}


/*
 * Sets AHB buffer 1 index. Parameter represents desired end index of the buffer.
 */
static inline void Qspi_Ip_SetAhbBuf1Ind(QuadSPI_Type *BaseAddr,
                                         uint32 Index
                                        )
{
    BaseAddr->BUF1IND =  Index;
}


/*
 * Sets AHB buffer 2 index. Parameter represents desired end index of the buffer.
 */
static inline void Qspi_Ip_SetAhbBuf2Ind(QuadSPI_Type *BaseAddr,
                                         uint32 Index
                                        )
{
    BaseAddr->BUF2IND =  Index;
}


/*
 * Sets address for IP transactions
 */
static inline void Qspi_Ip_SetIpAddr(QuadSPI_Type *BaseAddr,
                                     uint32 Addr
                                    )
{
    BaseAddr->SFAR = Addr;
}


/*
 * Sets flash address options
 */
static inline void Qspi_Ip_SetAddrOptions(QuadSPI_Type *BaseAddr,
                                          uint32 ColumnAddr,
                                          boolean WordAdressable
                                         )
{
    BaseAddr->SFACR = QuadSPI_SFACR_CAS(ColumnAddr)
                    | QuadSPI_SFACR_WA(WordAdressable? 1U : 0U);
}


/*
 * Configures parameters related to sampling Rx data
 */
static inline void Qspi_Ip_SetRxCfg(QuadSPI_Type *BaseAddr,
                                    Qspi_Ip_SampleDelayType Delay,
                                    Qspi_Ip_SamplePhaseType ClockPhase
                                   )
{
    BaseAddr->SMPR = QuadSPI_SMPR_FSPHS(ClockPhase)
                   | QuadSPI_SMPR_FSDLY(Delay);
}


/*
 * Configures parameters related to sampling Rx data
 */
static inline void Qspi_Ip_SetRxDLLTapA(QuadSPI_Type *BaseAddr,
                                        uint8 Taps
                                       )
{
    uint32 RegValue = BaseAddr->SMPR;

    RegValue &= ~QuadSPI_SMPR_DLLFSMPFA_MASK;
    RegValue |= QuadSPI_SMPR_DLLFSMPFA(Taps);
    BaseAddr->SMPR = RegValue;
}


/*
 * Configures parameters related to sampling Rx data
 */
static inline void Qspi_Ip_SetRxDLLTapB(QuadSPI_Type *BaseAddr,
                                        uint8 Taps
                                       )
{
    uint32 RegValue = BaseAddr->SMPR;

    RegValue &= ~QuadSPI_SMPR_DLLFSMPFB_MASK;
    RegValue |= QuadSPI_SMPR_DLLFSMPFB(Taps);
    BaseAddr->SMPR = RegValue;
}



/*
 * Checks if module is busy with a transaction
 */
static inline boolean Qspi_Ip_GetBusyStatus(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->SR;

    RegValue = (RegValue & QuadSPI_SR_BUSY_MASK) >> QuadSPI_SR_BUSY_SHIFT;
    return (RegValue != 0U)? TRUE : FALSE;
}


/*
 * Returns the current fill level of the Rx buffer
 */
static inline uint32 Qspi_Ip_GetRxBufFill(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->RBSR;

    RegValue = (RegValue & QuadSPI_RBSR_RDBFL_MASK) >> QuadSPI_RBSR_RDBFL_SHIFT;
    return RegValue;
}


/*
 * Checks if enough Rx data is available, according to the Watermark setting
 */
static inline boolean Qspi_Ip_GetRxDataEvent(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->SR;

    RegValue = (RegValue & QuadSPI_SR_RXWE_MASK) >> QuadSPI_SR_RXWE_SHIFT;
    return (RegValue != 0U)? TRUE : FALSE;
}


/*
 * Returns Tx buffer fill level expressed in 4-byte entries
 */
static inline uint32 Qspi_Ip_GetTxBufFill(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->TBSR;

    RegValue = (RegValue & QuadSPI_TBSR_TRBFL_MASK) >> QuadSPI_TBSR_TRBFL_SHIFT;
    return RegValue;
}


/*
 * Checks the Tx buffer Watermark.
 * Returns TRUE if number of buffer entries specified by the Watermark is available.
 */
static inline boolean Qspi_Ip_GetTxWatermarkAvailable(const QuadSPI_Type *BaseAddr)
{
    uint32 RegValue = (uint32)BaseAddr->SR;

    RegValue = (RegValue & QuadSPI_SR_TXWA_MASK) >> QuadSPI_SR_TXWA_SHIFT;
    return (RegValue != 0U)? TRUE : FALSE;
}


/*
 * Writes data in the Tx buffer
 */
static inline void Qspi_Ip_WriteTxData(QuadSPI_Type *BaseAddr, uint32 Data)
{
    BaseAddr->TBDR = Data;
}


/*
 * Returns the address of the Tx data register
 */
static inline uint32 Qspi_Ip_GetTxDataAddr(const QuadSPI_Type *BaseAddr)
{
    return (uint32)&(BaseAddr->TBDR);
}


/*
 * Returns the address of the first Rx data register
 */
static inline uint32 Qspi_Ip_GetRxDataAddr(const QuadSPI_Type *BaseAddr)
{
    return (uint32)&(BaseAddr->RBDR[0U]);
}


/*
 * Enables Tx DMA request (when Tx buffer has room for more data)
 */
static inline void Qspi_Ip_EnableTxDmaReq(QuadSPI_Type *BaseAddr)
{
    BaseAddr->RSER |= QuadSPI_RSER_TBFDE_MASK;
}


/*
 * Enables Rx DMA request (when Rx buffer has room for more data)
 */
static inline void Qspi_Ip_EnableRxDmaReq(QuadSPI_Type *BaseAddr)
{
    BaseAddr->RSER |= QuadSPI_RSER_RBDDE_MASK;
}


/*
 * Disables both Rx and Tx DMA requests
 */
static inline void Qspi_Ip_DisableDmaReq(QuadSPI_Type *BaseAddr)
{
    BaseAddr->RSER &= ~(QuadSPI_RSER_TBFDE_MASK | QuadSPI_RSER_RBDDE_MASK);
}


/*
 * Perform a POP operation on the Rx buffer, removing Rx_watermark entries
 */
static inline void Qspi_Ip_RxPop(QuadSPI_Type *BaseAddr)
{
    BaseAddr->FR = QuadSPI_FR_RBDF_MASK;
}


/*
 * Configures the Watermark for the Rx buffer, expressed in number of 4-byte entries
 */
static inline void Qspi_Ip_SetRxWatermark(QuadSPI_Type *BaseAddr,
                                          uint8 Watermark
                                         )
{
    uint32 RegValue = (uint32)BaseAddr->RBCT;

    RegValue &= (uint32)(~((uint32)QuadSPI_RBCT_WMRK_MASK));
    RegValue |= QuadSPI_RBCT_WMRK((uint32)Watermark - 1U);
    BaseAddr->RBCT = (uint32)RegValue;
}


#ifdef QuadSPI_RBCT_RXBRD_MASK
/*
 * Configures the rx for the Rx buffer, expressed in number of 4-byte entries
 */
static inline void Qspi_Ip_SetRxBufReadout(QuadSPI_Type *BaseAddr,
                                           uint8 Readout
                                          )
{
    uint32 RegValue = (uint32)BaseAddr->RBCT;

    RegValue &= (uint32)(~((uint32)QuadSPI_RBCT_RXBRD_MASK));
    RegValue |= QuadSPI_RBCT_RXBRD(Readout);
    BaseAddr->RBCT = (uint32)RegValue;
}
#endif


/*
 * Configures the Watermark for the Tx buffer, expressed in number of 4-byte entries
 */
static inline void Qspi_Ip_SetTxWatermark(QuadSPI_Type *BaseAddr,
                                          uint8 Watermark
                                         )
{
    uint32 RegValue = (uint32)BaseAddr->TBCT;

    RegValue &= (uint32)(~((uint32)QuadSPI_TBCT_WMRK_MASK));
    RegValue |= QuadSPI_TBCT_WMRK(Watermark);
    BaseAddr->TBCT = (uint32)RegValue;
}


/*
 * Enables interrupts specified by the mask parameter
 */
static inline void Qspi_Ip_EnableInt(QuadSPI_Type *BaseAddr,
                                     uint32 Mask
                                    )
{
    BaseAddr->RSER |= Mask;
}


/*
 * Disables interrupts specified by the mask parameter
 */
static inline void Qspi_Ip_DisableInt(QuadSPI_Type *BaseAddr,
                                      uint32 Mask
                                     )
{
    BaseAddr->RSER &= ~Mask;
}


/*
 * Clears interrupt flags specified by the mask parameter
 */
static inline void Qspi_Ip_ClearIntFlag(QuadSPI_Type *BaseAddr,
                                        uint32 Mask
                                       )
{
    BaseAddr->FR = Mask;
}


/*
 * Configure DQS clock for sampling read data
 */
static inline void Qspi_Ip_SetDQSSource(QuadSPI_Type *BaseAddr,
                                        Qspi_Ip_ReadModeType ReadModeA
                                        , Qspi_Ip_ReadModeType ReadModeB
                                        )
{
    /* get the value of MCR register */
    uint32 RegValue = (uint32)BaseAddr->MCR;

    RegValue &= (uint32)(~QuadSPI_MCR_DQS_FA_SEL_MASK);
    /* switch for modes */
    switch (ReadModeA)
    {
#if (FEATURE_QSPI_INTERNAL_DQS == 1)
        case QSPI_IP_READ_MODE_INTERNAL_DQS:
                /* if it is DQS internal */
                RegValue |= QuadSPI_MCR_DQS_FA_SEL(0U);
                break;
#endif
#if (FEATURE_QSPI_LOOPBACK == 1)
        case QSPI_IP_READ_MODE_LOOPBACK:
                /* if it is Pad loopback */
                RegValue |= QuadSPI_MCR_DQS_FA_SEL(1U);
                break;
#endif
#if (FEATURE_QSPI_LOOPBACK_DQS == 1)
        case QSPI_IP_READ_MODE_LOOPBACK_DQS:
                /* if it is DQS pad loopback */
                RegValue |= QuadSPI_MCR_DQS_FA_SEL(2U);
                break;
#endif
        case QSPI_IP_READ_MODE_EXTERNAL_DQS:
                /* if it is DQS external */
                RegValue |= QuadSPI_MCR_DQS_FA_SEL(3U);
                break;
        default:
                ; /* Not possible */
                break;
    }
    switch (ReadModeB)
    {
#if (FEATURE_QSPI_INTERNAL_DQS == 1)
        case QSPI_IP_READ_MODE_INTERNAL_DQS:
                /* if it is DQS internal */
                RegValue |= QuadSPI_MCR_DQS_FB_SEL(0U);
                break;
#endif
#if (FEATURE_QSPI_LOOPBACK == 1)
        case QSPI_IP_READ_MODE_LOOPBACK:
                /* if it is Pad loopback */
                RegValue |= QuadSPI_MCR_DQS_FB_SEL(1U);
                break;
#endif
#if (FEATURE_QSPI_LOOPBACK_DQS == 1)
        case QSPI_IP_READ_MODE_LOOPBACK_DQS:
                /* if it is DQS pad loopback */
                RegValue |= QuadSPI_MCR_DQS_FB_SEL(2U);
                break;
#endif
        case QSPI_IP_READ_MODE_EXTERNAL_DQS:
                /* if it is DQS external */
                RegValue |= QuadSPI_MCR_DQS_FB_SEL(3U);
                break;
        default:
                ; /* Not possible */
                break;
    }
    BaseAddr->MCR = (uint32)RegValue;
}



static inline void Qspi_Ip_SetCenterAlignedStrobeA(QuadSPI_Type *BaseAddr,
                                                   boolean CenterAlignedStrobe
                                                  )
{
    /* Get the value of MCR register */
    uint32 RegValue = (uint32)BaseAddr->MCR;

    /* Set mask */
    RegValue &= (uint32)(~QuadSPI_MCR_CK2_DCARS_FA_MASK);
    RegValue |= QuadSPI_MCR_CK2_DCARS_FA(CenterAlignedStrobe? 1U : 0U);
    /* Update again the MCR register */
    BaseAddr->MCR = (uint32)RegValue;
}
static inline void Qspi_Ip_SetCenterAlignedStrobeB(QuadSPI_Type *BaseAddr,
                                                   boolean CenterAlignedStrobe
                                                  )
{
    /* Get the value of MCR register */
    uint32 RegValue = (uint32)BaseAddr->MCR;

    /* Set mask */
    RegValue &= (uint32)(~QuadSPI_MCR_CK2_DCARS_FB_MASK);
    RegValue |= QuadSPI_MCR_CK2_DCARS_FB(CenterAlignedStrobe? 1U : 0U);
    /* Update again the MCR register */
    BaseAddr->MCR = (uint32)RegValue;
}

static inline void Qspi_Ip_SetDifferentialClockA(QuadSPI_Type *BaseAddr,
                                                 boolean DifferentialClock
                                                )
{
    /* Get the value of MCR register */
    uint32 RegValue = (uint32)BaseAddr->MCR;

    /* Set mask */
    RegValue &= (uint32)(~QuadSPI_MCR_CKN_FA_EN_MASK);
    RegValue |= QuadSPI_MCR_CKN_FA_EN(DifferentialClock? 1U : 0U);
    /* update again the MCR register */
    BaseAddr->MCR = (uint32)RegValue;
}
static inline void Qspi_Ip_SetDifferentialClockB(QuadSPI_Type *BaseAddr,
                                                 boolean DifferentialClock
                                                )
{
    /* Get the value of MCR register */
    uint32 RegValue = (uint32)BaseAddr->MCR;

    /* Set mask */
    RegValue &= (uint32)(~QuadSPI_MCR_CKN_FB_EN_MASK);
    RegValue |= QuadSPI_MCR_CKN_FB_EN(DifferentialClock? 1U : 0U);
    /* Update again the MCR register */
    BaseAddr->MCR = (uint32)RegValue;
}


static inline void Qspi_Ip_SetByteSwap(QuadSPI_Type *BaseAddr,
                                       boolean ByteSwap
                                      )
{
    /* Get the value of SFACR register */
    uint32 RegValue = (uint32)BaseAddr->SFACR;

    /* Set mask */
    RegValue &= (uint32)(~QuadSPI_SFACR_BYTE_SWAP_MASK);
    RegValue |= QuadSPI_SFACR_BYTE_SWAP(ByteSwap? 1U : 0U);
    /* Update again the SFACR register */
    BaseAddr->SFACR = (uint32)RegValue;
}

#ifdef QuadSPI_MCR_SCLKCFG_MASK
/*
 * Configure chip-specific clock options
 */
static inline void Qspi_Ip_SetClockOptions(QuadSPI_Type *BaseAddr,
                                           uint8 Option
                                          )
{
    uint32 RegValue = (uint32)BaseAddr->MCR;

    RegValue &= (uint32)(~QuadSPI_MCR_SCLKCFG_MASK);
    RegValue |= QuadSPI_MCR_SCLKCFG(Option);
    BaseAddr->MCR = (uint32)RegValue;
}
#endif


#ifdef QuadSPI_SOCCR_SOCCFG_MASK
/*
 * Configure chip-specific options
 */
static inline void Qspi_Ip_SetChipOptions(QuadSPI_Type *BaseAddr,
                                          uint32 Option
                                         )
{
    BaseAddr->SOCCR = Option;
}
#endif

#endif /* (QSPI_IP_MEM_INSTANCE_COUNT > 0) */

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* QUADSPI_HW_ACCESS_H */
