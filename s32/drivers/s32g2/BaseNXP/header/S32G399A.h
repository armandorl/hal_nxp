/*
** ###################################################################
**     Processor:           S32G399A_M7
**     Compiler:            Keil ARM C/C++ Compiler
**     Reference manual:    S32G3xx RM Rev.2 Draft C
**     Version:             rev. 2.7, 2022-07-21
**     Build:               b220721
**
**     Abstract:
**         Peripheral Access Layer for S32G399A_M7
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2022 NXP
**
**     NXP Confidential. This software is owned or controlled by NXP and may only be
**     used strictly in accordance with the applicable license terms. By expressly
**     accepting such terms or by downloading, installing, activating and/or otherwise
**     using the software, you are agreeing that you have read, and that you agree to
**     comply with and are bound by, such license terms. If you do not agree to be
**     bound by the applicable license terms, then you may not retain, install,
**     activate or otherwise use the software. The production use license in
**     Section 2.3 is expressly granted for this software.
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 Taru Shree 29-Jun-20  Initial release based on 
**                                      RM Rev.1. Draft C.
**
**     - rev. 1.1 Taru Shree 06-Aug-20  1)Initial release based on             
**                                      RM Rev.1 Draft D.                         
**                                      2)CMU_FC-                              
**                                      SR register:                           
**                                      -STATE bitfield is removed.            
**                                      3)CMU_FM-                              
**                                      SR register:                           
**                                      -STATE bitfield is removed.            
**                                      4)DDR_GPR-                             
**                                      DDR_CONFIG_5 register:                 
**                                      -Following bitfields are removed-      
**                                       -RAQR_POP_0                           
**                                       -RAQR_POP_1                           
**                                       -RAQR_POP_2                           
**                                       -RAQR_PUSH_0                          
**                                       -RAQR_PUSH_1                          
**                                       -RAQR_PUSH_2                          
**                                       -RAQ_SPLIT_0                          
**                                       -RAQ_SPLIT_1                          
**                                       -RAQ_SPLIT_2                           
**                                      5)EIM-                                   
**                                      -Following registers are added-        
**                                       -EICHD15_WORD5                        
**                                       -EICHD16_WORD3                        
**                                       -EICHD16_WORD4                         
**                                       -EICHD16_WORD5                        
**                                       -EICHD17_WORD3                        
**                                       -EICHD17_WORD4                        
**                                       -EICHD17_WORD5                        
**                                       -EICHD18_WORD5                        
**                                       -EICHD19_WORD5                        
**                                       -EICHD20_WORD5                        
**                                       -EICHD21_WORD5                        
**                                       -EICHD23_WORD3                        
**                                       -EICHD23_WORD4                        
**                                       -EICHD23_WORD5                        
**                                      6)ERM-                                 
**                                      SYNDROME_EXT bitfield is added in     
**                                      SYN1,SYN2...SYN22 registers.          
**                                      7)FBXC block is removed.               
**                                      8)JDC block is added.                  
**                                      9)MC_CGM_2 block is added.             
**                                      10)MSCM-                               
**                                      Whole register section is revised.     
**                                      11)QuadSPI-                            
**                                      -MCR register:                         
**                                       -Following bitfields are removed-     
**                                        -DQS_OUT_EN                          
**                                        -DQS_LAT_EN                           
**                                        -DDR_EN                              
**                                        -VAR_LAT_EN                          
**                                        -ISD2FB                              
**                                        -ISD3FB                              
**                                        -DQS_FA_SEL                           
**                                        -CKN_FA_EN                           
**                                        -CK2_DCARS_FA                         
**                                        -DQS_FB_SEL                          
**                                        -CKN_FB_EN                           
**                                        -CK2_DCARS_FB                        
**                                       -SCLKCFG bitfield is added.           
**                                      -FLSHCR register:                      
**                                       TDH bitfield is removed.              
**                                      -SOCCR and FAILA_ADDR registers are    
**                                       added.                                
**                                      -PARITYCR register:                    
**                                       Following bitfields are removed-      
**                                       -CRCBIN_FB                            
**                                       -CRCBEN_FB                            
**                                       -CRCEN_FB                             
**                                       -BYTE_SIZE_FB                         
**                                       -CHUNKSIZE_FB                         
**                                       -CRC_WNDW_FB                          
**                                      -SMPR register:                        
**                                       DLLFSMPFB bitfield is removed.           
**                                      -RBSR register:                        
**                                       RDBFL bitfield's size is changed from 
**                                       8 to 7.                                 
**                                      -RBCT register:                        
**                                       WMRK bitfield's size is changed from  
**                                       8 to 7.                               
**                                      -DLLSR register:                       
**                                       Following bitfields are removed-      
**                                       -DLLB_SLV_COARSE_VAL                  
**                                       -DLLB_SLV_FINE_VAL                     
**                                       -DLLB_FINE_UNDERFLOW                  
**                                       -DLLB_RANGE_ERR                       
**                                       -SLVB_LOCK                            
**                                       -DLLB_LOCK                            
**                                      -DLCR register:                        
**                                       DLP_SEL_FB bitfield is removed.       
**                                      -SR register:                          
**                                       -TXNE bitfield is renamed as TXEDA.   
**                                       -TXWA and TXDMA bitfields are removed.
**                                      -FR register:                          
**                                       Following bitfields are removed-     
**                                       -CRCBEF                               
**                                       -AITEF                                
**                                       -AAEF                                
**                                      -RSER register:                        
**                                       Following bitfields are removed-     
**                                       -CRCBIE                               
**                                       -AIBSIE                               
**                                       -AITIE                                
**                                       -AAIE                                 
**                                       -TBFDE                                
**                                      -SPTRCLR register:                     
**                                       ABRT_CLR and PREFETCH_DIS.            
**                                     12)QuadSPI_ARDB-                         
**                                     ARDB register array size is changed   
**                                     from 128 to 64.                       
**                                     13)S32G_GPR-                           
**                                     -Following registers are removed-      
**                                      -PFE_SYS_GEN0                         
**                                      -PFE_SYS_GEN1                         
**                                      -PFE_SYS_GEN2                         
**                                      -PFE_SYS_GEN3                         
**                                      -PFE_SYS_GEN                          
**                                      -PFE_SYS_STAT                         
**                                      -GENCTRL2                             
**                                      -GENCTRL3                             
**                                      -GENSTAT1                             
**                                      -GENSTAT2                             
**                                     -CM7_AHB_AXI_PIPE_ERROR_INJECTION      
**                                      register:                             
**                                      Following bitfields are removed-       
**                                      -ERROR_INJECTION_AHBP_GASKET_CM7_3    
**                                      -ERROR_INJECTION_AHBP_GASKET_CM7_2    
**                                      -ERROR_INJECTION_AHBP_GASKET_CM7_1    
**                                      -ERROR_INJECTION_AHBP_GASKET_CM7_0    
**                                      -CM7_TCM_AHB_SLICE register:           
**                                      -All bitfield's positions are changed.
**                                      -RESERVED_CM7_AHBAXI_PIPE bitfield's  
**                                       size is changed from 20 to 12.       
**                                     -ERROR_INJECTION_AHBP_GASKET_CM7       
**                                      register added.                       
**                                     14)S32G_STDBY_GPR-                     
**                                     SLEEP_DISABLE and GENCTRL0_STBY        
**                                     registers are removed.                 
**                                     15)SIUL2_0-                            
**                                      -PGPDO6 and PGPDI6 registers are       
**                                       removed.                              
**                                      -MPGPDO register array size is changed 
**                                       from 7 to 6.                          
**                                     16)WKPU-                               
**                                     WIPUER_WIPDER register is added.       
**                                     17)XRDC-                               
**                                     -MDA_Wn_m_DFMT1 register:              
**                                      DID bitfield's size is changed from 3 
**                                      to 4.                                 
**                                     -MRCN_MRGDN_XRDC_MRGD_W3 register:     
**                                      Following bitfields are added-        
**                                      -D8ACP                                
**                                      -D9ACP                               
**                                      -D10ACP                               
**                                      -D11ACP                               
**                                      -D12ACP                               
**                                      -D13ACP                               
**                                      -D14ACP                               
**                                      -D15ACP                               
**                                     -DERRLOC register array size is        
**                                      changed from 8 to 16.                 
**                                     18)XRDC_0-                             
**                                     -MDA_Wn_m_DFMT0 register:              
**                                      DID bitfield's size is changed from 3 
**                                      to 4.                                 
**                                     -PDAC_SLOT_PDACN_PDAC_W1 register:     
**                                      Following bitfields are added-        
**                                      -D8ACP                                
**                                      -D9ACP                                
**                                      -D10ACP                               
**                                      -D11ACP                               
**                                      -D12ACP                                
**                                      -D13ACP                               
**                                      -D14ACP                               
**                                      -D15ACP                               
**                                     -MRGDN_XRDC_MRGD_W3 register:          
**                                      Following bitfields are added-        
**                                      -D8ACP                                
**                                      -D9ACP                                
**                                      -D10ACP                               
**                                      -D11ACP                               
**                                      -D12ACP                                
**                                      -D13ACP                               
**                                      -D14ACP                               
**                                      -D15ACP                               
**                                     -MDACFG register array size is changed 
**                                      from 22 to 24.                        
**                                     -DERRLOC register array size is changed
**                                      from 8 to 16.                         
**                                     -PID register array size is changed    
**                                      from 19 to 24.                        
**                                     -Following registers are added-        
**                                      -MDA_W0_22_DFMT0                      
**                                      -MDA_W1_22_DFMT0                      
**                                      -MDA_W2_22_DFMT0                        
**                                      -MDA_W3_22_DFMT0                      
**                                      -MDA_W4_22_DFMT0                      
**                                      -MDA_W5_22_DFMT0                       
**                                      -MDA_W6_22_DFMT0                      
**                                      -MDA_W7_22_DFMT0                      
**                                      -MDA_W0_23_DFMT0                      
**                                      -MDA_W1_23_DFMT0                       
**                                      -MDA_W2_23_DFMT0                      
**                                      -MDA_W3_23_DFMT0                      
**                                      -MDA_W4_23_DFMT0                      
**                                      -MDA_W5_23_DFMT0                      
**                                      -MDA_W6_23_DFMT0                      
**                                      -MDA_W7_23_DFMT0                      
**                                     19)Two instances of EIM_LLCE are added-
**                                     -EIM_LLCE0                             
**                                     -EIM_LLCE1                             
**                                     20)SWT_7 instance is added.            
**
** - rev. 1.2 Jalaj Awasthi 11-Nov-20  1)Initial release based on            
**                                     RM Rev.1 Draft G.                      
**                                     2)A53_GPR-                             
**                                     GPR33 register is added                
**                                     3)D_IP_LLCE_SYN module is removed      
**                                     4)GMAC_MAC-                            
**                                     -In EXT_CONFIGURATION register         
**                                     bit field APDIM is added               
**                                     -In RXQ_CTRL1 register bit fields      
**                                     OMCBCQ, TBRQE are added                
**                                     -In HW_FEATURE2 register bit fields    
**                                     RDCSZ, TDCSZ are added                 
**                                     -In DPP_FSM_INTERRUPT register bit     
**                                     fields MTBUPES, MTFCPES, MRWCPES are   
**                                     added.                                 
**                                     -In EXT_CFG1 register bit fields SAVO, 
**                                     SAVE are added.                        
**                                     -INDIR_ACCESS_CTRL,INDIR_ACCESS_DATA   
**								       registers are added.                   
**                                     -In PPS_CONTROL register bit field     
**								       TIMESEL is added.                      
**                                     -In MTL_OPERATION_MODE register       
**								       bit field RXPED is added.              
**								       -In MTL_DBG_CTL register bit field     
**								       EIAEE is added.                        
**								       MTL_EST_EXT_CONTROL register is added. 
**                                     -In MTL_EST_STATUS register bit field  
**								       size of BTRL is changed from 4 to 8.   
**								       -In MTL_EST_GCL_CONTROL register       
**								       bit fields ERR0, ESTEIAEE are reomved. 
**								       -In RXP_CONTROL_STATUS register        
**								       bit field MTL_SCS1 is reomved and bit  
**								       field ELIRS is added                   
**								       -In RXP_INDIRECT_ACC_CONTROL_STATUS    
**								       register, bit field RXPEIAEE is added  
**								       RXP_BYPASS_CNT register is added       
**								       -In MTL_DPP_CONTROL registerIPEID,     
**								       IPEMC, IPEMRF, IPEDDC, IPETD, IPERD    
**								       are removed.                           
**								       IPETRD, IPEMTF, IPERID, IPEMTBU,       
**								       IPEMTFC, IPEMRWC are added.            
**								       -DPP_ECC_EIC register is added.        
**								       -In DMA_MODE register bit fields TAA,  
**								       TXPR are added.                        
**								       Register DMA_TBS_CTRL is removed.      
**								       DMA_TBS_CTRL0, DMA_TBS_CTRL1,          
**								       DMA_TBS_CTRL2, DMA_TBS_CTRL3 are added 
**                                     -In DMA_CH0_TX_CONTROL register        
**								       Bit fields TCW, TFSEL are added.       
**								       Register DMA_CH0_RXDESC_RING_LENGTH is 
**								       changed to DMA_CH0_RX_CONTROL2         
**								       Bit field ARBS is added.               
**								       DMA_CH0_RX_ERI_CNT register is removed 
**								       -In DMA_CH1_TX_CONTROL register        
**								       Bit fields TCW, TFSEL are added.       
**								       Register DMA_CH1_RX_ERI_CNT is removed 
**								       -In DMA_CH2_TX_CONTROL register        
**								       Bit fields TCW, TFSEL are added.       
**								       Register DMA_CH2_RXDESC_RING_LENGTH is 
**								       changed to DMA_CH2_RX_CONTROL2.        
**								       DMA_CH2_RX_ERI_CNT is removed          
**								       -In DMA_CH3_TX_CONTROL register        
**								       Bit fields TCW, TFSEL are added.       
**								       Register DMA_CH3_RXDESC_RING_LENGTH is 
**								       changed to DMA_CH3_RX_CONTROL2.        
**								       Bit field ARBS is added.               
**								       DMA_CH3_RX_ERI_CNT register is removed 
**								       -In DMA_CH4_TX_CONTROL register        
**								       Bit fields TCW, TFSEL are added.       
**								       Register DMA_CH4_RXDESC_RING_LENGTH is 
**								       changed to DMA_CH4_RX_CONTROL2.        
**								       Bit field ARBS is added.               
**								       DMA_CH4_RX_ERI_CNT register is removed 
**                                     5)LLCE_Core_to_core module is added    
**                                     6)MC_CGM                               
**                                     -Register MUX_9_DC_0,                  
**                                     MUX_9_DIV_UPD_STAT are removed         
**                                     MUX_10_DC_0, MUX_10_DIV_UPD_STAT       
**                                     are removed.                           
**                                     MUX_13_CSC, MUX_13_CSS are removed     
**                                     MUX_15_DC_0,MUX_15_DIV_UPD_STAT        
**                                     registers are removed.                 
**                                     7)MC_CGM_2                             
**                                     Registers PCFS_DIVC23, PCFS_DIVE23,    
**                                     PCFS_DIVS23, PCFS_DIVC33, PCFS_DIVE33, 
**                                     PCFS_DIVS33, PCFS_DIVC46, PCFS_DIVE46, 
**								       PCFS_DIVS46, PCFS_DIVC47, PCFS_DIVE47, 
**								       PCFS_DIVS47, PCFS_DIVC48, PCFS_DIVE48, 
**								       PCFS_DIVS48, PCFS_DIVC49,PCFS_DIVE49,  
**                                     …........till PCFS_DIVS63 are added   
**                                     8)MDM_AP-                              
**                                     Registers WIR_EN, WIR_REL are added    
**                                     -In CORTEX_A53_A0_IP_DBG register      
**                                     bit field MSK_LOCKSTEP_ALARM_CM73 is   
**                                     added.                                 
**                                     CONTROL2 register is added             
**                                     9)OCOTP                                
**                                     -In ERR_INJCTR register                
**                                     bit field size of ADDR is changed      
**								       from 16 to 12.                         
**                                     10)PCIE_EP                             
**                                     Register is changed from EROMBAR to    
**								       EROMBARS_EROMBAR EROMBARS_EROMBARMASK, 
**                                     EROMBARS registers are added.          
**                                     11)QuadSPI                             
**                                     -In MCR register Bit fields DQS_LAT_EN,
**                                     DDR_EN, ISD2FB, ISD3FB, DQS_FA_SEL,    
**		    					       CKN_FA_EN, CK2_DCARS_FA, DQS_FB_SEL,   
**								       CKN_FB_EN, CK2_DCARS_FB are added.     
**                                     -In FLSHCR register Bit field TDH is   
**								       removed.                               
**                                     -Register SOCCR is removed            
**                                     -In DLLCRA register                    
**                                     Bit field SLV_DLY_FINE is removed      
**                                     DLLRES, DLL_REFCNTR bit fields are     
**								       added.                                 
**                                   -DLLCRB register is added              
**                                   -In PARITYCR register                  
**                                    Bit fields CRCBIN_FB, CRCBEN_FB,       
**								      CRCEN_FB, BYTE_SIZE_FB, CHUNKSIZE_FB,  
**								      CRC_WNDW_FB are added.                 
**                                    -SFACR register is added.              
**                                    -In SMPR register DLLFSMPFB bit field  
**								      is added.                              
**                                    -In RBCT register bit field size of    
**                                    WMRK is changed from 6 to 7.           
**                                    -In DLLSR register                     
**                                    Bit fields DLLB_SLV_COARSE_VAL,        
**								      DLLB_SLV_FINE_VAL, DLLB_FINE_UNDERFLOW,
**								      DLLB_RANGE_ERR, SLVB_LOCK, DLLB_LOCK   
**								      are added.                             
**                                    -In DLCR register                      
**                                    Bit field DLP_SEL_FB is added          
**                                    -DLSR_FB register is added             
**                                    -In TBSR register                      
**                                    Bit field size of TBSR is changed      
**								      from 4 to 8.                           
**                                    -TBCT register is added.               
**                                    -In SR register                        
**                                    Bit field TXEDA is removed             
**                                    TXNE, TXWA, TXDMA bit fields           
**								      are removed.                           
**                                    -In FR register                        
**                                    CRCBEF, AITEF, AAEF bit fields         
**								      are added.                             
**                                    -In RSER regiter                       
**                                    CRCBIE, AIBSIE, AITIE, AAIE,           
**								      TBFDE bit fields are added.            
**                                    -In SPTRCLR register                   
**                                    Bit fields ABRT_CLR, PREFETCH_DIS      
**								      are added.                             
**                                    -FAILB_ADDR register is added.         
**                                    12)QuadSPI_ARDB                        
**                                    Size of ARDB_ARDB is changed from      
**                                    64 to 128                              
**                                    13)S32G_GPR_CM7-                       
**                                    AHB_AXI_PIPE_ERROR_INJECTION regiser   
**                                    is removed.                            
**                                    14)S32G_GPR                            
**                                    -In LLCE_STAT register                 
**                                    Bit fields LLCE_LSPI_TRIG_RX,          
**                                    LLCE_LSPI_TRIG_FM are removed          
**                                    GENCTRL2 register is added.            
**                                    15)SIUL2_0                             
**                                    Registers PGPDO6, PGPDI6 are added     
**                                    16)SRC                                 
**                                    -In CMU_STATUS_REG1 register           
**                                    Bit fields FLL_FHH_STAT_20,            
**                                    FLL_FHH_STAT_21 are added.             
**                                    GPR23 register is added                
**                                    17)SRC_GPR module is added             
**                                    18)SerDes_EP                           
**                                    Register is changed from EROMBAR to    
**								      EROMBARS_EROMBAR EROMBARS_EROMBARMASK, 
**                                    EROMBARS registers are added           
**                                    18)SerDes_SS_PCIE_PHY                 
**                                    -In MPLLA_CTRL register                
**                                    Bit field MPLLA_SSC_EN is removed      
**                                    -In MPLLB_CTRL register                
**                                    Bit field MPLLB_SSC_EN is removed      
**                                    -In MPLLA_CTRL_2 register              
**                                    Bit fields EXT_MPLLA_SSC_CLK_SEL,      
**								      EXT_MPLLA_SSC_RANGE are removed        
**                                    -In MPLLA_CTRL_3 register              
**                                    Bit fields EXT_MPLLA_SSC_FREQ_CNT_INIT,
**								      EXT_MPLLA_SSC_FREQ_CNT_PEAK,           
**								      EXT_MPLLA_SSC_FREQ_CNT_OVRD_EN         
**								      are removed.                           
**                                    -In MPLLB_CTRL_2 register              
**                                    Bit fields EXT_MPLLB_SSC_CLK_SEL,      
**								      EXT_MPLLB_SSC_RANGE are removed        
**                                    -In MPLLB_CTRL_3 register              
**                                    Bit fields EXT_MPLLB_SSC_FREQ_CNT_INIT,
**								      EXT_MPLLB_SSC_FREQ_CNT_PEAK,           
**								      EXT_MPLLB_SSC_FREQ_CNT_OVRD_EN         
**								      are removed.                           
**                                    19)UOTGNC                              
**                                    -In CR register                        
**                                    Bit field UCMALLBE is added            
**                                    20)XRDC                                
**                                    PDACN_PDAC_W0, PDACN_PDAC_W1,          
**                                    registers are added                    
**                                    21)XRDC_0                              
**                                    Register PDAC_SLOT_PDACN_PDAC_W0       
**                                    is changed to PDACN0_PDAC_W0           
**                                    PDAC_SLOT_PDACN_PDAC_W1 is changed     
**                                    to PDACN0_PDAC_W1.                     
**                                    PDACN1_PDAC_W0, PDACN1_PDAC_W1,        
**                                    PDACN2_PDAC_W0, PDACN2_PDAC_W1,        
**								      PDACN2_PDAC_W1 are added.              
**                                    PDACN4_PDAC_W0, PDACN4_PDAC_W1         
**                                    registers added .                      
**
** - rev. 1.3 Jalaj Awasthi 24-Nov-20 1)Initial release based on             
**                                    RM Rev.1 Draft H.                      
**                                    2)ATP-                                 
**                                    In CIAC register, TPIU_CLK_SEL         
**                                    bit field is added.                    
**                                    3)CMU_FC_39 module is added            
**                                    4)JDC-                                 
**                                    -In MSR register, following bit fields 
**                                    are removed, JOUT_RDY1, JOUT_RDY2      
**								      ..JOUT_RDY7                            
**                                    -Following registers are removed,      
**                                    JOUT_IPS1, JOUT_IPS2, JIN_IPS2,        
**                                    JOUT_IPS3, JIN_IPS3, JOUT_IPS4,        
**								      JIN_IPS4, JOUT_IPS5, JIN_IPS5,          
**								      JOUT_IPS6, JIN_IPS6, JOUT_IPS7,        
**								      JIN_IPS7                               
**                                    5)SRAMC_3, SRAMC_2 are added
**
**   - rev.1.4 Taru Shree 22-Dec-20   1)Initial release based on             
**                                    RM Rev.1 Draft I.                          
**                                    2)CMU_FC_47 instance is tagged to      
**                                    CMU_FC_47.                             
**                                    3)DIRU_0 and DIRU_1 instances are added
**                                    instead of DIRU.                       
**                                    4)LLCE_FIFO instance is removed.       
**                                    5)MC_CGM_0-                            
**                                    -MUX_0_CSC register: SELCTL bitfield’s 
**                                     size is changed from 6 to 4.          
**                                    -MUX_0_CSS register: SELSTAT bitfield’s
**                                     size is changed from 6 to 4.          
**                                    -MUX_9_CSC, MUX_9_CSS, MUX_10_CSC,     
**                                     MUX_10_CSS, MUX_11_CSC, MUX_11_CSS    
**                                     MUX_15_CSC and MUX_15_CSS registers   
**                                     are removed.                          
**                                    -MUX_13_CSC and MUX_13_CSS registers   
**                                     are added.                            
**                                    6)MC_CGM_5 instance is tagged to       
**                                    MC_CGM_5.                              
**                                    7)MC_CGM_6 instance is added.          
**                                    8)S32G_GPR-                            
**                                    -CLKOUT_PAD_CTRL register: TM_SEL0 and 
**                                     TM_SEL1 bitfields are removed.        
**                                     -GENCTRL0 register: ACCEL_FLXNC_REF_DIV
**                                      bitfield is removed.  
**                                    9)SPI-
**                                    CMD and TX register's positions are 
**                                    inverted. 
**                                    10)XRDC-                                
**                                    -DERR_W1 register: EA40FMT bitfield is 
**                                     added.                                
**                                    -DERR_W2 register is added.               
**                                    -MRGD_W0 register: SRTADDR size is     
**                                     changed from 27 to 31.                
**                                    -MRGD_W1 register: ENDADDR size is     
**                                     changed from 27 to 31.                
**                                    -In PDACN3 array, valid array indices  
**                                     are changed from 0-14, 16-17, 22-24 to
**                                     0-1, 3-5, 16-17, 22-24.               
**                                    -In PDACN4 array, 16th array index is  
**                                     changed to 15th.                      
**                                    11)LLCE_CORE_TO_CORE address is changed
**                                    from 0 to 0x43C26000.                  
**                                    12)LLCE_BLR_IN_FIFO_n,                 
**                                    LLCE_BLR_OUT_FIFO_n,                   
**                                    LLCE_GENERIC_FIFO_n, LLCE_RX_IN_FIFO_n,
**                                    LLCE_RX_OUT_FIFO_n and                 
**                                    LLCE_TX_ACK_FIFO_n instances are       
**                                    removed.                               
**                                    13)LLCE_SYSCTRL address is changed from
**                                    0 to 0x43FF8000.
**
** - rev.1.5 Jalaj Awasthi 04-Feb-21  1)Initial release based on              
**                                    RM Rev.1 Draft L.                           
**                                    2)S32G_GPR                             
**                                    In GENCTRL1 register, Size of CTRL bit 
**                                    field is changed from 2 to 3.          
**							          In CM7_AXI_AHBP_GASKET_ERROR_ALARM      
**                                    register, bit fields                   
**								      CM7_0_AHBP_GASKET_BYPASS,              
**								      CM7_1_AHBP_GASKET_BYPASS,              
**								      CM7_2_AHBP_GASKET_BYPASS,              
**								      CM7_3_AHBP_GASKET_BYPASS are added.   
**                                    3)SRC                                  
**                                    GPR24 register is added.               
**                                    4)SerDes_EP_PCIe_1.                    
**                                    Register name is changed from          
**								      DEVICE_VENDOR_ID to DEVICE_ID_VENDOR_ID
**                                    Register name is changed from          
**								      COMMAND to STATUS_COMMAND_REG.         
**								      In STATUS_COMMAND_REG register,bit     
**								      fields IO_SPACE_EN, MEM_SPACE_EN,      
**								      BUS_MASTER_EN, PARITY_ERR_RESPONSE     
**								      are removed.                           
**								      bit fields PCI_TYPE0_IO_EN,            
**								      PCI_TYPE0_MEM_SPACE_EN,                
**								      PCI_TYPE0_BUS_MASTER_EN,               
**								      PCI_TYPE0_SPECIAL_CYCLE_OPERATION,     
**								      PCI_TYPE_MWI_ENABLE,                   
**								      PCI_TYPE_VGA_PALETTE_SNOOP,            
**								      PCI_TYPE0_PARITY_ERR_EN,               
**								      PCI_TYPE_IDSEL_STEPPING,               
**								      RSVDP_17, CAP_LIST, FAST_66MHZ_CAP,    
**								      FAST_B2B_CAP, DEV_SEL_TIMING are added.
**                                    Register name is changed from BHTLCLS  
**								      to BIST_HEADER_TYPE_LATENCY_CACHE_LINE 
**								      _SIZE_REG.....Similar changes          
**								      through out the module.                
**                                    5)EIM-                                 
**                                    EIM_4 is added.                        
**                                    EIM_4_EIMCR, EIM_4_EICHEN,             
**                                    EIM_4_EICHD0_WORD1, EIM_4_EICHD1_WORD0,
**								      EIM_4_EICHD1_WORD1, EIM_4_EICHD1_WORD2,
**								      EIM_4_EICHD2_WORD0, EIM_4_EICHD2_WORD1,
**								      EIM_4_EICHD2_WORD2, EIM_4_EICHD3_WORD0,
**								      EIM_4_EICHD3_WORD1,EIM_4_EICHD3_WORD2, 
**								      EIM_4_EICHD3_WORD4,EIM_4_EICHD4_WORD0, 
**								      EIM_4_EICHD4_WORD1,EIM_4_EICHD4_WORD2, 
**								      EIM_4_EICHD4_WORD3,EIM_4_EICHD4_WORD4, 
**								      EIM_4_EICHD5_WORD0,EIM_4_EICHD5_WORD1, 
**								      EIM_4_EICHD5_WORD2,EIM_4_EICHD5_WORD3, 
**								      EIM_4_EICHD5_WORD4, EIM_4_EICHD6_WORD0,
**								      EIM_4_EICHD6_WORD1,EIM_4_EICHD6_WORD2, 
**								      EIM_4_EICHD6_WORD3,                   
**								      EIM_4_EICHD6_WORD4 are added.          
**                                    6)ERM-                                 
**                                    ERM_CPU3 is added                      
**                                    ERM_CPU3_CR0, ERM_CPU3_SR0,            
**                                    ERM_CPU3_EAR0,ERM_CPU3_SYN0,           
**                                    ERM_CPU3_CORR_ERR_CNT0,ERM_CPU3_EAR1,  
**                                    ERM_CPU3_SYN1, ERM_CPU3_CORR_ERR_CNT1, 
**                                    ERM_CPU3_CORR_ERR_CNT2,ERM_CPU3_CORR   
**                                    _ERR_CNT3 registers                    
**                                    ERM_CPU3_CORR_ERR_CNT4,ERM_CPU3_CORR   
**                                    _ERR_CNT5 are added.                   
**                                    7)USDHC-                               
**                                    In INT_STATUS register                 
**                                    bit field ERR_INT_STATUS is added.     
**                                    9)XRDC-                                
**                                    In MDA_W0_0_DFMT1 register                 
**                                    bit fields LPID, LPE are added.        
**                                    In MDA_W0_1_DFMT1 register              
**                                    bit fields LPID, LPE are added.        
**                                    In MDA_W0_2_DFMT1 register                
**                                    bit fields LPID, LPE are added.        
**                                    In MDA_W0_3_DFMT1 register                
**                                    bit fields LPID, LPE are added.        
**                                    .......Similar changes through out the 
**                                    module.
**
** - rev.1.6 Jalaj Awasthi 23-Feb-21 1)Initial release based on             
**                                   RM Rev.1 Draft M.                      
**                                   2)BOOT-                                
**                                   In BOOT_GPR_BMR2 register              
**                                   bit field name is changed from         
**								     BMODE2 to BOOTMOD2, BMODE1 to BOOTMOD1 
**                                   3)New modules CAIU0_QosGenerator       
**								     and CAIU1_QosGenerator are added.      
**                                   4)DMAMUX-                              
**                                   CHCONF1, CHCONF2 are added.            
**                                   5)GMAC_MAC-                            
**                                   Register name is changed from          
**								     VLAN_TAG_DATA to VLAN_TAG_DATA_MAC     
**                                   _VLAN_TAG_DATA.                        
**								     Registers-                             
**                                   VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER0,    
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER1,    
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER10,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER11,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER12,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER13,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER14,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER15,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER16,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER17,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER18,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER19,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER2,    
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER20,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER21,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER22,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER23,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER24,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER25,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER26,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER27,  
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER28,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER29,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER3,    
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER30,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER31,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER4,    
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER5,    
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER6,    
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER7,    
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER8,    
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER9     
**								     are added                              
**                                   Register name is changed from          
**								     VLAN_INCL  to VLAN_INCL_MAC_VLAN_INCL  
**                                   VLAN_INCL_MAC_VLAN_INCL0,              
**                                   VLAN_INCL_MAC_VLAN_INCL1…...,          
**                                   VLAN_INCL_MAC_VLAN_INCL7 are added.    
**                                   Register name is changed from          
**								     RWK_PACKET_FILTER  to                  
**                                   RWK_PACKET_FILTER_MAC_RWK_PACKET_FILTER
**								     Registers-                             
**                                   RWK_PACKET_FILTER_RWK_FILTER0123       
**                                   _COMMAND,                              
**								     RWK_PACKET_FILTER_RWK_FILTER0123_OFFSET
**								     RWK_PACKET_FILTER_RWK_FILTER01_CRC,    
**								     RWK_PACKET_FILTER_RWK_FILTER0_BYTE_MASK
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER12,   
**								     VLAN_TAG_DATA_MAC_VLAN_TAG_FILTER13,   
**								     RWK_PACKET_FILTER_RWK_FILTER1_BYTE_    
**                                   MASK_RWK_FILTER1_BYTE_MASK,            
**								     RWK_PACKET_FILTER_RWK_FILTER23_CRC_    
**                                   RWK_FILTER23_CRC,                      
**								     RWK_PACKET_FILTER_RWK_FILTER2_BYTE_MASK
**								     RWK_PACKET_FILTER_RWK_FILTER3_BYTE_MASK
**								     are added.                             
**                                   Register name is changed from          
**								     INDIR_ACCESS_DATA  to                  
**                                   INDIR_ACCESS_DATA_MAC_INDIR_ACCESS_DATA
**								     Registers-                             
**                                   INDIR_ACCESS_DATA_MAC_TMRQ_REGS0,      
**								     INDIR_ACCESS_DATA_MAC_TMRQ_REGS1...    
**								     INDIR_ACCESS_DATA_MAC_TMRQ_REGS7       
**								     are added.                             
**								     GMAC_MTL-                              
**                                   In EST_CONTROL register                
**                                   bit field QHLBF is added.              
**                                   6)MDM_AP-                              
**                                   In CONTROL register                    
**                                   bit field SWO_OVERRIDE is added.       
**                                   7)PCIE_RC-                             
**                                   In TYPE1_STATUS_COMMAND_REG register   
**                                   bit fields RSVDP_9, RSVDP_22 are added 
**                                   In SEC_STAT_IO_LIMIT_IO_BASE_REG       
**                                   bit fields RSVDP_23, RSVDP_25 are added
**                                   In TYPE1_CAP_PTR_REG register          
**                                   bit field RSVDP_8 is added.            
**                                   In TYPE1_EXP_ROM_BASE_REG register     
**                                   bit field RSVDP_8 is added             
**                                   In CON_STATUS_REG register             
**                                   bit fileds RSVDP_2, RSVDP_4,RSVDP_16   
**                                   are added.                             
**                                   In MSI_CAP_ID_NEXT_CTRL_REG register   
**                                   bit field RSVDP_27 is added.           
**                                   In MSI_CAP_OFF_04H_REG  register       
**                                   bit field RSVDP_0 is added.            
**                                   .......Similar changes in module.
**
** - rev.1.7 Jalaj Awasthi 12-Mar-21 1)Initial release based on            
**                                   RM Rev.1 Draft N.                         
**                                   2)ATP-                                
**                                   In CIAC register                      
**                                   bit field TPIU_CLK_DISABLE is added.    
**                                   3)OCOTP-                              
**								     In CTRL_FBX register                  
**                                   bit field SEC_RST is added            
**                                   STR register is added.                
**                                   4)XRDC_0-                             
**                                   In MDA_W0_0_DFMT1 register            
**								     bit fields LPID, LPE are removed      
**                                   In MDA_W0_1_DFMT1 register            
**								     bit fields LPID, LPE are removed      
**                                   In MDA_W0_2_DFMT1 register            
**								     bit fields LPID, LPE are removed      
**								     In MDA_W0_3_DFMT1 register            
**								     bit fields LPID, LPE are removed      
**								     In MDA_W0_4_DFMT1 register            
**								     bit fields LPID, LPE are removed      
**								     In MDA_W0_5_DFMT1 register            
**								     bit fields LPID, LPE are removed      
**								     In MDA_W0_6_DFMT1 register            
**								     bit fields LPID, LPE are removed      
**								     In MDA_W0_7_DFMT1 register              
**								     bit fields LPID, LPE are removed      
**								     In MDA_W0_1_DFMT0 register            
**								     bit fields LPID, LPE are removed      
**								     In MDA_W1_1_DFMT0 register            
**								     bit fields LPID, LPE are removed      
**								     In MDA_W2_1_DFMT0 register            
**								     bit fields LPID, LPE are removed      
**								     In MDA_W3_1_DFMT0 register            
**								     bit fields LPID, LPE are removed      
**								     In MDA_W4_1_DFMT0 register            
**								     bit fields LPID, LPE are removed      
**								     In MDA_W5_1_DFMT0 register             
**								     bit fields LPID, LPE are removed      
**								     In MDA_W6_1_DFMT0 register            
**								     bit fields LPID, LPE are removed      
**								     In MDA_W7_1_DFMT0 register            
**								     bit fields LPID, LPE are removed .... 
**								     ..Similar changes till MDA_W7_23_DFMT0.
**
** -rev.1.8 Jalaj Awasthi 06-Apr-21  1)Initial release based on            
**                                   RM Rev.1 Draft O.                         
**                                   2)BOOT-                               
**                                   SRC_POR_CTRL register is removed       
**                                   3)DDR_GPR-                            
**								     In DDR_CONFIG_0 register              
**                                   SBRADDRESSSTARTMASK,                  
**                                   SBRADDRESSRANGEMASK bit field         
**								     are removed.                          
**                                   Register DDR_CONFIG_1, DDR_CONFIG_2   
**                                   4)DMA_CRC-                            
**                                   In GEC register                       
**								     bit fields CS_SWAP, CS_XOR are added  
**                                   5)GMAC_MAC-                           
**								     RWK_PACKET_FILTER_RWK_FILTER1_        
**								     BYTE_MASK_RWK_FILTER1_BYTE_MASK is    
**								     changed to RWK_PACKET_FILTER_RWK_     
**								     FILTER1_BYTE_MASK                     
**								     RWK_PACKET_FILTER_RWK_FILTER23_CRC_RWK
**								     _FILTER23_CRC is changed to RWK_PACKET
**								     _FILTER_RWK_FILTER23_CRC              
**                                   6)XRDC-                               
**                                   In MDA_W0_1_DFMT1 register            
**								     bit fields LPID, LPE are removed      
**                                   In MDA_W0_2_DFMT1 register            
**								     bit fields LPID, LPE are removed      
**                                   In MDA_W0_3_DFMT1 register            
**								     bit fields LPID, LPE are removed      
**								     In MDA_W0_4_DFMT1 register            
**								     bit fields LPID, LPE are removed      
**								     7)XRDC_0-                             
**								     In MDA_W0_11_DFMT1 register           
**								     bit fields LPID, LPE are removed      
**								     8)SRC_GPR-                              
**								     GPR28, GPR29 registers are added      
**								     8)SRC-                                
**								     SRC_POR_CTRL_REG register is added    
**								     9)MSCM-                               
**								     In IRCP0ISR0 register                 
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP0ISR1 register                 
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP0ISR2 register                 
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP0ISR5 register                 
**								     bit fields CP12_INT, CP13_INT are added  
**								     In IRCP0ISR6 register                 
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP0ISR7 register                 
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP0ISR8 register                 
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP0ISR9 register                 
**								     bit fields CP12_INT, CP13_INT are added
**								     In RCP0ISR10 register                 
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP0ISR11 register                
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP0ISR12 register                
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP0ISR13 register                
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP1ISR0 register                 
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP1ISR1 register                 
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP1ISR2 register                 
**								     bit fields CP12_INT, CP13_INT are added
**								     In IRCP1ISR5 register                 
**								     bit fields CP12_INT, CP13_INT are added
**                                   .....till  IRCP1ISR13 register        
**                                   same changes as above for IRCP2ISR0….,
**                                   IRCP3ISR0...,IRCP4ISR0…,IRCP5ISR0….,  
**								     IRCP6ISR0..,IRCP7ISR0…,IRCP8ISR0….,   
**								     IRCP9ISR0..,IRCP10ISR0..,IRCP11ISR0...
**
** -rev.1.9 Jalaj Awasthi 03-May-21  1)Initial release based on            
**                                   RM Rev.1 Draft P.                         
**                                   2)ADC-                                
**                                   In MCR register, bit fields JEDGE,    
**                                   JTRGEN,XSTRTEN, EDGE, TRGEN are removed
**                                   3)CTU-                                
**								     In CLR_B register                     
**                                   bit field ST0 is removed              
**                                   CLR_C regiter is removed              
**								     In EFR register bit field CS is removed
**                                   4)DMA_CRC-                            
**                                   In GEC register                       
**								     bit fields SWAP_BIT, CS_XOR, CS_SWAP  
**                                   are removed                           
**                                   In CONTROL_REGISTER_CTL register      
**								     bit fields CS_XOR, CS_SWAP, SWAP_BIT  
**								     are added                             
**                                   5)MC_CGM_6-                           
**								     MUX_2_CSC,MUX_2_CSS registers are added
**                                   6)OCOTP-                              
**                                   STATUS_HSE, CTRL_HSE, ADDR_HSE,       
**                                   WRDATA_HSE, RDATA_HSE register        
**								     are added                             
**								     7)PCIE_DMA-                           
**                                   In DMA_CTRL_DATA_ARB_PRIOR_OFF register
**								     bit field VERSION is added            
**                                   8)PCIE_RC-                            
**								     DMA_CTRL_DATA_ARB_PRIOR_OFF,          
**                                   DMA_CTRL_OFF, DMA_WRITE_ENGINE_EN_OFF,
**								     DMA_WRITE_DOORBELL_OFF,               
**								     DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF, 
**								     DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF,
**								     DMA_READ_ENGINE_EN_OFF,               
**								     DMA_READ_DOORBELL_OFF,                
**								     DMA_READ_CHANNEL_ARB_WEIGHT_LOW_OFF,  
**								     DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF, 
**								     DMA_WRITE_INT_STATUS_OFF,           
**								     DMA_WRITE_INT_MASK_OFF,               
**								     DMA_WRITE_INT_CLEAR_OFF,              
**								     DMA_WRITE_ERR_STATUS_OFF,             
**								     DMA_WRITE_DONE_IMWR_LOW_OFF,          
**								     DMA_WRITE_DONE_IMWR_HIGH_OFF,         
**								     DMA_WRITE_ABORT_IMWR_LOW_OFF,         
**								     DMA_WRITE_ABORT_IMWR_HIGH_OFF,        
**								     DMA_WRITE_CH01_IMWR_DATA_OFF,         
**								     DMA_WRITE_CH23_IMWR_DATA_OFF,         
**								     DMA_WRITE_CH45_IMWR_DATA_OFF,         
**								     DMA_WRITE_CH67_IMWR_DATA_OFF,         
**								     DMA_WRITE_LINKED_LIST_ERR_EN_OFF,     
**								     DMA_READ_INT_STATUS_OFF,              
**								     DMA_READ_INT_MASK_OFF,                
**								     DMA_READ_INT_CLEAR_OFF,               
**								     DMA_READ_ERR_STATUS_LOW_OFF,          
**								     DMA_READ_ERR_STATUS_HIGH_OFF,         
**								     DMA_READ_LINKED_LIST_ERR_EN_OFF,      
**								     DMA_READ_DONE_IMWR_LOW_OFF,           
**								     DMA_READ_DONE_IMWR_HIGH_OFF,          
**								     DMA_READ_ABORT_IMWR_LOW_OFF,          
**								     DMA_READ_ABORT_IMWR_HIGH_OFF,         
**								     DMA_READ_CH01_IMWR_DATA_OFF,          
**								     DMA_READ_CH23_IMWR_DATA_OFF,          
**								     DMA_READ_CH45_IMWR_DATA_OFF,          
**								     DMA_READ_CH67_IMWR_DATA_OFF,          
**								     .....till DMA_LLP_HIGH_OFF_RDCH_3     
**								     are removed                           
**                                   9)SIUL2_1-                            
**								     In MIDR2 register                     
**								     bit field SUBMINOR_MASK is removed    
**								     10)SerDes_DMA_PCIe_1-                 
**                                   In LINK_CONTROL_LINK_STATUS_REG       
**								     register                              
**                                   bit field CAP_RETRAIN_LINK is removed 
**                                   Registers DMA_CTRL_DATA_ARB_PRIOR_OFF,
**								     DMA_CTRL_OFF, DMA_WRITE_ENGINE_EN_OFF,
**								     DMA_WRITE_DOORBELL,                   
**								     DMA_WRITE_CHANNEL_ARB_WEIGHT_LOW_OFF, 
**								     DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF,
**								     DMA_READ_ENGINE_EN_OFF,               
**								     DMA_READ_DOORBELL_OFF, ….are removed  
**								     till DMA_LLP_HIGH_OFF_RDCH_3          
**                                   11)UMCTL2_REGS-                                      
**								     DIMMCTL register is removed           
**								     ADVECCINDEX, ECCPOISONPAT0,           
**                                   ECCPOISONPAT2 registers are removed   
**								     12)eDMA_0_TCD-                          
**								     In TCD_CSR register                   
**                                   EEOP bit field is removed             
**
** -rev.2.0 Jalaj Awasthi 13-July-21 1)Initial release based on              
**                                   RM Rev.1 Draft Q.
**                                   2)It has been shared by the Tango Apps
**                                   team that S32G399A is the superset of S32G3
**                                   family. Therefore, going forward, 
**                                   we will release G3 header with the variant
**                                   name as S32G399A instead of S32G398A.                         
**                                   3)DMAMUX-                              
**                                   Instead of CHCONF1 and CHCONF2 array   
**                                   , CHCFG register array is added.       
**                                   4)DMA_CRC-                             
**								     In GEC register                        
**                                   bit field SWAP_BIT  is added           
**                                   5)LLCE_Core_to_core-                   
**                                   HINTCxR registers are converted into   
**                                   array.                                 
**                                   CxINTHR registers are converted into   
**                                   array.                                 
**                                   HINTCxER registers are converted into  
**                                   array.                                 
**                                   CxINTHER registers are converted into  
**                                   array.                                 
**                                   6)MC_CGM-                              
**								     In MUX_x_CSC register                  
**								     SELCTL bitfield size is changed from   
**                                   5 to 6.                                
**								     In MUX_x_CSS register                  
**								     SELSTAT bitfield size is changed from  
**                                   5 to 6.                                
**                                   7)MC_CGM_1-                            
**								     In MUX_0_CSC register                  
**								     SELCTL bitfield size is changed from   
**                                   4 to 3.                                
**								     In MUX_0_CSS register                  
**								     SELSTAT bitfield size is changed from  
**                                   4 to 3.                                
**                                   8)PMC-                                 
**								     POR_WDOG_EVENT_CAPTURE register array  
**                                   size is changed from 2 to 3.           
**                                   9)UMCTL2_MP-                           
**                                   SBRSTART0, SBRSTART1, SBRRANGE0,       
**                                   SBRRANGE0, SBRRANGE1,                  
**								     UMCTL2_VER_NUMBER,                     
**								     UMCTL2_VER_TYPE registers are added.   
**								     10)UMCTL2_REGS-                         
**                                   In DERATEEN register                   
**								     bit fields DERATE_MR4_TUF_DIS and      
**                                   DERATE_MR4_PAUSE_FC bitfields are      
**								     added.                                 
**                                   ECCPOISONADDR0, ECCPOISONADDR1,        
**                                   CRCPARCTL0, CRCPARCTL1,                
**								     CRCPARSTAT registers are added.        
**                                   In INIT2 register                      
**                                   MIN_STABLE_CLOCK_X1 bitfield           
**                                   is removed.                            
**                                   In RANKCTL register                    
**                                   MAX_RANK_WR, DIFF_RANK_RD_GAP_MSB,     
**                                   DIFF_RANK_WR_GAP_MSB bitfields         
**                                   are added.                             
**                                   In DRAMTMG12 register                  
**                                   T_WR_MPR bitfield is added.            
**                                   In DFIMISC register                    
**                                   CTL_IDLE_EN And LP_OPTIMIZED_WRITE     
**                                   bitfields are added.                   
**                                   In DFIPHYMSTR register                 
**                                   DFI_PHYMSTR_BLK_REF_X32 bitfield       
**                                   is added.                              
**                                   In OCPARCFG0 register                  
**                                   PAR_WDATA_AXI_CHECK_BYPASS_EN bitfield 
**                                   is added.                              
**                                   ADVECCINDEX, ECCPOISONPAT0 and         
**								     ECCPOISONPAT2 registers are added.
**
** -rev.2.1  Taru Shree 30-July-21   1)Initial release based on             
**                                   RM Rev.1 Draft R.                       
**                                   2)QuadSPI-                             
**                                   -TBSR register: TRBFL bitfield's size  
**                                    is changed from 8 to 9.                
**                                   -RSER register: TBFIE bitfield is      
**                                    removed.                              
**                                   3)S32G_GPR-                            
**                                   -GENCTRL register:                     
**                                   -TIMEOUT_DISABLE_A53 and              
**                                    TIMEOUT_DISABLE_M7 bitfields are     
**                                    added.                               
**                                   -MISC bitfield's size is changed from 
**                                    28 to 26.                            
**                                   -GPR22 register is added.             
**                                   4)SRC-                                 
**                                   GPR63 register is added.               
**
** -rev.2.2 Jalaj Awasthi 22-Sept-21 1)Initial release based on              
**                                   RM Rev.1 Draft S.                       
**                                   2)PCIE_EP-                              
**                                   PORT_FORCE_OFF register:                
**                                   DO_DESKEW_FOR_SRIS bitfield is removed. 
**                                   3)S32G_GPR-                             
**                                   -GENCTRL0 register: MISC bitfield is    
**                                   removed.                               
**                                   -GENCTRL2 register is removed.          
**                                   4)SRC-                                  
**                                   -HSE_CM7_STATUS_REG register is removed.	
**                                   -GPR63 register:                        
**                                   TIMEOUT_DISABLE_SERDES_CC_MASTERS      
**                                   bitfield is renamed as                 
**                                   TIMEOUT_DISABLE_PCIE1_CC_MASTERS.      
**                                   5)SerDes_EP_PCIe_1-                     
**                                   -PORT_FORCE_OFF register:               
**                                   DO_DESKEW_FOR_SRIS bitfield is removed.
**                                   6)SerDes_SS-                            
**                                   PE0_GEN_CTRL_1 register: SRIS_MODE      
**                                   bitfield is added.                      
**                                   7)SerDes_SS_PCIe_1-                     
**                                   PE0_GEN_CTRL_1 register: SRIS_MODE      
**                                   bitfield is added.                      
**                                   8)MSCM-                                 
**                                   -IRCPmISRn register: CP12_INT and       
**                                   CP13_INT bitfields are removed.        
**                                   -IRCP7IGR3, IRCP7IGR4, IRCP8IGR3,       
**                                   IRCP8IGR4, IRCP9IGR3, IRCP9IGR4,       
**                                   IRCP10IGR3, IRCP10IGR4, IRCP11IGR3 and 
**                                   IRCP11IGR4 registers are added. 
**
** -rev.2.3 Jalaj Awasthi 24-Nov-21 1)Initial release based on              
**                                   RM Rev.1                       
**                                   2)MC_CGM-                              
**                                   Following registers are removed                
**                                   MUX_13_CSC, MUX_13_CSS. 
**                                   3)SRC_GPR-                             
**                                   -Register GPR01 is added             
**                                   4)USDHC-                                  
**                                   -In AUTOCMD12_ERR_STATUS register	
**                                   The position of the bit fields AC12EBE and AC12CE                          
**                                   is swapped.       
**
** -rev.2.4 Jalaj Awasthi 08-Feb-22  1)Initial release based on                  
**                                   RM Rev.2 Draft A                      
**                                   2)ADC-                                 
**                                   -In MCR register                               
**                                   Bir fields JEDGE, JTRGEN, EDGE, TRGEN 
**                                   are added.                                  
**                                   3)CAIU0_QosGenerator-                 
**                                   -In QosGenerator_REVISIONID register     
**                                   Bit field FLEXNOCID is chagned to NOCID
**                                   4)PMC-                                                        
**                                   -In NCSPD_CTL register                
**                                   -Bit fields NCSPD_CTL10, NCSPD_CTL11,  
**                                   NCSPD_CTL17, NCSPD_CTL18, NCSPD_CTL21,
**								     NCSPD_CTL22, NCSPD_CTL23, NCSPD_CTL28,
**								     NCSPD_CTL29, NCSPD_CTL30, NCSPD_CTL31 
**								     are added.                            
**                                   -In NCSPD_STAT register               
**                                   Bit fields NCSPD_STAT10, NCSPD_STAT11, 
**                                   NCSPD_STAT17, NCSPD_STAT18,           
**								     NCSPD_STAT21, NCSPD_STAT22,           
**								     NCSPD_STAT23, NCSPD_STAT28,           
**								     NCSPD_STAT29, NCSPD_STAT30,           
**                                   NCSPD_STAT31 are added.              
**                                   -In NCSPD_EVENT_CAPTURE register      
**                                   Bit fields NCSPD_EVENT_CAPTURE,       
**                                   NCSPD_EVENT_CAPTURE11,                
**								     NCSPD_EVENT_CAPTURE17,                
**								     NCSPD_EVENT_CAPTURE18,                
**								     NCSPD_EVENT_CAPTURE21,                
**								     NCSPD_EVENT_CAPTURE22,                
**								     NCSPD_EVENT_CAPTURE23,                
**								     NCSPD_EVENT_CAPTURE28,                
**								     NCSPD_EVENT_CAPTURE29,                
**								     NCSPD_EVENT_CAPTURE30,                
**								     NCSPD_EVENT_CAPTURE31 are added.      
**                                   5)QuadSPI-                            
**                                   -In RSER register                     
**                                   Bit field TBFIE is added              
**                                   6)USDHC-                              
**								     -In CMD_XFR_TYP register              
**								     Bit fields DMAEN, BCEN, AC12EN,       
**								     DDR_EN, DTDSEL, MSBSEL, NIBBLE_POS,   
**                                   AC23EN bit fields are added.          
**                                   -In PRES_STATE register               
**                                   Bit fields IPGOFF, HCKOFF, PEROFF,    
**                                   SDOFF are removed.     
**
** -rev.2.5 Shivansh Kumar 05-Apr-22 1)Initial release based on                  
**                                   RM Rev.2 Draft B
**                                   2)CAIU0_QosGenerator-                  
**                                   -In PRIORITY register                  
**                                   Bit Field P1 is removed.               
**                                   -Register MODE is removed              
**                                   3)CAIU1_QosGenerator-                  
**                                   -In PRIORITY register                  
**                                   Bit Field P1 is removed.               
**                                   -Register MODE is removed              
**                                   4)CRC_0-                               
**                                   -Register CHANNEL_CFG is changed to    
**                                   CFG1                                   
**                                   Bit Field POLYG_EXT is added.          
**                                   -Register CHANNEL_INP is changed to    
**                                   INP1                                   
**                                   -Register CHANNEL_CSTAT is changed to  
**                                   CSTAT1                                 
**                                   -Register CHANNEL_OUTP is changed to   
**                                   OUTP1                                  
**                                   Following registers are added                   
**                                   CFG2, INP2, CSTAT2, OUTP2, CFG3, INP3, 
**                                   CSTAT3, OUTP3, CSTAT_EXT1, OUTP_EXT1,  
**                                   CSTAT_EXT2, OUTP_EXT2, CSTAT_EXT3,     
**                                   OUTP_EXT3                              
**                                   5)FXOSC-                               
**                                   -Register CTRL                         
**                                   Bit Field ALC_D is added.              
**                                   6)LLCE_Core_to_core-                   
**                                   -Register CINTHER is removed           
**                                   7)MC_RGM-                              
**                                   -Register PRST_0_PRST_0                
**                                   Bit Fields PERIPH_6_RST, PERIPH_7_RST, 
**                                   PERIPH_8_RST, PERIPH_9_RST,            
**                                   PERIPH_10_RST, PERIPH_11_RST,          
**                                   PERIPH_12_RST, PERIPH_13_RST,          
**                                   PERIPH_14_RST, PERIPH_15_RST,          
**                                   PERIPH_18_RST, PERIPH_19_RST,          
**                                   PERIPH_20_RST, PERIPH_21_RST,          
**                                   PERIPH_22_RST, PERIPH_23_RST,          
**                                   PERIPH_24_RST, PERIPH_25_RST,          
**                                   PERIPH_26_RST, PERIPH_27_RST,          
**                                   PERIPH_28_RST, PERIPH_29_RST,          
**                                   PERIPH_30_RST, PERIPH_31_RST are       
**                                   removed.                               
**                                   -Register PSTAT_0_PSTAT_0              
**                                   Bit Fields PERIPH_6_RST, PERIPH_7_RST, 
**                                   PERIPH_8_STAT, PERIPH_9_STAT           
**                                   PERIPH_10_STAT, PERIPH_11_STAT,        
**                                   PERIPH_12_STAT, PERIPH_13_STAT,        
**                                   PERIPH_14_STAT, PERIPH_15_STAT,        
**                                   PERIPH_18_STAT, PERIPH_19_STAT,        
**                                   PERIPH_20_STAT, PERIPH_21_STAT,        
**                                   PERIPH_22_STAT, PERIPH_23_STAT,        
**                                   PERIPH_24_STAT, PERIPH_25_STAT,        
**                                   PERIPH_26_STAT, PERIPH_27_STAT,        
**                                   PERIPH_28_STAT, PERIPH_29_STAT,        
**                                   PERIPH_30_STAT, PERIPH_31_STAT are     
**                                   removed.                                
**                                   8)PMC-                                 
**                                   -Register NCSPD_CTL                    
**                                   Bit Field NCSPD_CTL5 is removed.       
**                                   -Register NCSPD_STAT                   
**                                   Bit Field NCSPD_STAT5 is removed.      
**                                   -Register NCSPD_EVENT_CAPTURE          
**                                   Bit Field NCSPD_EVENT_CAPTURE5 is      
**                                   removed.                               
**                                   9)QuadSPI-                             
**                                   -Register RBCT                         
**                                   Bit Field RXBRD is removed.            
**                                   -Register FR                           
**                                   Bit Field AIBSEF is added.             
**                                   10)S32G_GPR-                           
**                                   -Register CLKOUT_PAD_CTRL is removed   
**                                   11)SPI_5-                              
**                                   -Register MCR                          
**                                   PCSIS bitfield’s size is changed from  
**                                   8 to 5.                                
**                                   -Register PUSHR_PUSHR                  
**                                   PCS bitfield’s size is changed from    
**                                   8 to 5.                                
**              
** -rev.2.6 Shivansh Kumar 04-May-22 1)Updated release based on                  
**                                   RM Rev.2 Draft B
**
** -rev.2.7 Jalaj Awasthi 21-July-22 1)Initial release based on                 
**                                   RM Rev.2 Draft C                      
**                                   2)FBXC Module is added.               
**                                   3)MC_RGM                              
**                                   -In PRST_0_PRST_0 register            
**                                   Bit Field PERIPH_5_RST  is removed.   
**                                   -In PSTAT_0_PSTAT_0 register          
**                                   Bit Field PERIPH_5_STAT  is removed.  
**                                   4)USDHC-                              
**                                   -In VEND_SPEC register                
**                                   Bit Field CONFLICT_CHK_EN is removed. 
**                                   5)XRDC-                               
**                                   -MRCN and MRGDN array representation  
**                                   is changed.
**
** ###################################################################
*/

/*!
 * @file S32G399A.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/* Prevention from multiple including the same memory map */
#if !defined(S32G399A_H_)  /* Check if memory map has not been already included */
#define S32G399A_H_

/* ----------------------------------------------------------------------------
   -- IP Header Files
   ---------------------------------------------------------------------------- */

/* IP Header Files List */
#include "S32G399A_A53_GPR.h"
#include "S32G399A_ADC.h"
#include "S32G399A_ATP.h"
#include "S32G399A_BOOT.h"
#include "S32G399A_CAIU.h"
#include "S32G399A_CAIU0_QOSGENERATOR.h"
#include "S32G399A_CAIU1_QOSGENERATOR.h"
#include "S32G399A_CCTI_FAULT_CTRL.h"
#include "S32G399A_CM7_GPR.h"
#include "S32G399A_CMIU.h"
#include "S32G399A_CMU_FC.h"
#include "S32G399A_CMU_FC_39.h"
#include "S32G399A_CMU_FC_46.h"
#include "S32G399A_CMU_FC_47.h"
#include "S32G399A_CMU_FC_48.h"
#include "S32G399A_CMU_FC_49.h"
#include "S32G399A_CMU_FC_50.h"
#include "S32G399A_CMU_FC_51.h"
#include "S32G399A_CMU_FM.h"
#include "S32G399A_CRC.h"
#include "S32G399A_CSR.h"
#include "S32G399A_CTU.h"
#include "S32G399A_DDR_GPR.h"
#include "S32G399A_DDR_SUBSYSTEM.h"
#include "S32G399A_DFS.h"
#include "S32G399A_DIRU_0.h"
#include "S32G399A_DIRU_1.h"
#include "S32G399A_DMA.h"
#include "S32G399A_DMAMUX.h"
#include "S32G399A_DMA_CRC.h"
#include "S32G399A_DMA_TCD.h"
#include "S32G399A_EIM.h"
#include "S32G399A_ERM.h"
#include "S32G399A_FBXC.h"
#include "S32G399A_FCCU.h"
#include "S32G399A_FLEXCAN.h"
#include "S32G399A_FLEXRAY.h"
#include "S32G399A_FTM.h"
#include "S32G399A_FSC.h"
#include "S32G399A_FXOSC.h"
#include "S32G399A_GMAC.h"
#include "S32G399A_I2C.h"
#include "S32G399A_JDC.h"
#include "S32G399A_LINFLEXD.h"
#include "S32G399A_LLCE_CORE_TO_CORE.h"
#include "S32G399A_LLCE_SYSCTRL.h"
#include "S32G399A_MCM.h"
#include "S32G399A_MC_CGM.h"
#include "S32G399A_MC_CGM_1.h"
#include "S32G399A_MC_CGM_2.h"
#include "S32G399A_MC_CGM_5.h"
#include "S32G399A_MC_CGM_6.h"
#include "S32G399A_MC_ME.h"
#include "S32G399A_MC_RGM.h"
#include "S32G399A_MDM_AP.h"
#include "S32G399A_MPU.h"
#include "S32G399A_MSCM.h"
#include "S32G399A_MU.h"
#include "S32G399A_NCBUID_RESET_VALUE.h"
#include "S32G399A_NVIC.h"
#include "S32G399A_OCOTP.h"
#include "S32G399A_OCOTP_GPR.h"
#include "S32G399A_PCIE_DMA.h"
#include "S32G399A_PCIE_EP.h"
#include "S32G399A_PCIE_RC.h"
#include "S32G399A_PERF_REGISTERS.h"
#include "S32G399A_PIT.h"
#include "S32G399A_PLLDIG.h"
#include "S32G399A_PMC.h"
#include "S32G399A_PMUEVENTOBSERVER.h"
#include "S32G399A_QUADSPI.h"
#include "S32G399A_QUADSPI_ARDB.h"
#include "S32G399A_RESET.h"
#include "S32G399A_RTC.h"
#include "S32G399A_S32G_GPR.h"
#include "S32G399A_S32G_STDBY_GPR.h"
#include "S32G399A_SBSW.h"
#include "S32G399A_SCB.h"
#include "S32G399A_SECURITY.h"
#include "S32G399A_SELFTEST_GPR.h"
#include "S32G399A_SELFTEST_GPR_TOP.h"
#include "S32G399A_SEMA42.h"
#include "S32G399A_SERDES_DMA_PCIE_1.h"
#include "S32G399A_SERDES_EP_PCIE_1.h"
#include "S32G399A_SERDES_GPR.h"
#include "S32G399A_SERDES_RC_PCIE_1.h"
#include "S32G399A_SERDES_SS.h"
#include "S32G399A_SERDES_SS_PCIE_1.h"
#include "S32G399A_SIUL2.h"
#include "S32G399A_SPI.h"
#include "S32G399A_SRAMC.h"
#include "S32G399A_SRC.h"
#include "S32G399A_SRC_GPR.h"
#include "S32G399A_STCU2.h"
#include "S32G399A_STM.h"
#include "S32G399A_SWT.h"
#include "S32G399A_SYSTICK.h"
#include "S32G399A_TMU.h"
#include "S32G399A_UMCTL2_MP.h"
#include "S32G399A_UMCTL2_REGS.h"
#include "S32G399A_UOTG.h"
#include "S32G399A_UOTGNC.h"
#include "S32G399A_USDHC.h"
#include "S32G399A_WKPU.h"
#include "S32G399A_XRDC.h"
#include "S32G399A_XRDC_0.h"

#endif  /* #if !defined(S32G399A_H_) */
