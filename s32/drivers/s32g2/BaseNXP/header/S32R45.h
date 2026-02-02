/*
** ###################################################################
**     Processor:           S32R45_M7
**     Reference manual:    S32R45 RM Rev.3
**     Version:             rev. 2.4, 2022-02-14
**     Build:               b220214
**
**     Abstract:
**         Peripheral Access Layer for S32R45_M7
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
**     - rev. 1.0 Taru Shree 03-SEP-19  Initial release based on 
**                                      RM Rev.1 Draft Q.
**
**     - rev. 1.1 Taru Shree 12-SEP-19  Complex comments are removed.
**    
**     - rev. 1.2 Taru Shree 17-SEP-19  1)Serdes block is removed.
**                                      2)DSP block is removed. 
**                                      3)License is changed. 
**
**     - rev. 1.3 Taru Shree 10-DEC-19  Initial release based on 
**                                      RM Rev.1 RC.
**
**     - rev. 1.4 Taru Shree 22-JAN-20  1)Initial release based on 
**                                      RM Rev.1.
**                                      2)A53_GPR-
**                                      All characters are changed to 
**                                      upper-case.
**                                      3)DFS- 
**                                      PORTSTAT bitfield is expanded 
**                                      in PORTSR register.
**                                      4)SPT-
**                                      SPR_0_15_CTRL_REG register is 
**                                      renamed as SPR_0_9_CTRL_REG.
**                                      5)SRC-
**                                      FLL_FHH_STAT bitfields is expanded 
**                                      in CMU_STATUS_REG1 and 
**                                      CMU_STATUS_REG2 registers.
**                                      6)ACCEL_PLL, CORE_PLL, DDR_PLL and 
**                                      PERIPH_PLL blocks are merged together 
**                                      into PLLDIG.
**                                      7)SERDES block is added.  
**
**     - rev. 1.5 Taru Shree 18-FEB-20  Updated the Header files for
**                                      "Reference manual" + "Version" 
**                                      + "Build" information.
**
**     - rev. 1.6 Taru Shree 04-May-20  1)Initial release based on            
**                                      RM Rev.2. Draft A.                    
**                                      2)ADC-                                
**                                      -CEOCFR1 register: EOC_CH40…47        
**                                       bitfields are removed.               
**                                      -CIMR1 register: CIM40…47             
**                                       bitfields are removed.               
**                                      -DMAR1 register: DMA40…47             
**                                       bitfields are removed.               
**                                      -PSR1 register: PRES40…47             
**                                       bitfields are removed.               
**                                      -NCMR1 register: CH40…47              
**                                       bitfields are removed.               
**                                      -JCMR1: CH40…47                       
**                                       bitfields are removed.               
**                                      -CWENR1 register: CWEN40…47           
**                                       bitfields are removed.               
**                                      -AWORR1 register: AWOR_CH40…47        
**                                       bitfields are removed.               
**                                      -CWSELR0 and CWSELR4 registers are    
**                                       added.                               
**                                      -ICDR array size is changed from 16   
**                                       to 1.                                
**                                      3)ATP-                                
**                                      PLLCAL_2 register: V2ICP, CALCP,      
**                                      ULKCTL, LKCTL, CALWINP, CALWAITP,     
**                                      CALFRA and TSTCTL bitfields are       
**                                      removed.                              
**                                      4)CAN-                                
**                                      Message Buffers are added for 8byte   
**                                      payload.                              
**                                      5)CM7_GPR-                            
**                                      CORTEXM7_GPR0 register:               
**                                      CM7_CPU_MEMORY_RETENTION_MODE_1       
**                                      bitfield is removed.                  
**                                      6)DDR_GPR-                            
**                                      -DDR_CONFIG_0 register: PA_RMASK and  
**                                       PA_WMASK bitfields are removed.                   
**                                      -DDR_CONFIG_6 register is removed.    
**                                      7)FCCU-                               
**                                      CFG register: FOP and FOPE bitfields  
**                                      are removed.                          
**                                      8)GMAC-                               
**                                      -MAC_VLAN_TAG_CTRL register:          
**                                       ETV, DOVLTC and ERSVLM bitfields are 
**                                       added.                               
**                                      -MAC_HW_FEATURE0 register:            
**                                       EEESEL and TSOEN bitfields are added.
**                                      -MTL_RXP_CONTROL_STATUS register:     
**                                       MTL_SCS1 bitfield is added.          
**                                      -MTL_SAFETY_INTERRUPT_STATUS register:
**                                       MCSIS bitfield is removed.                                               
**                                      9)MC_CGM-                             
**                                      -MUX_0_DC_0 register: PHASE bitfield  
**                                       is removed.                          
**                                      -MUX_10_DC_0 register: PHASE bitfield 
**                                       is removed.                             
**                                     10)MC_CGM_2-                          
**                                     -MUX_2_DC_0 register: PHASE bitfield  
**                                      is removed.                             
**                                     11)MIPICSI2-                          
**                                     -RX_LANCS register:                   
**                                      -D0STOP bitfield is renamed as DSTOP.
**                                      -D0ULPA bitfield is renamed as DULPA.
**                                      -D0ULMA bitfield is renamed as DULMA.
**                                      -RX_SR register: SOFRST bitfield is   
**                                       added.                               
**                                      -RX_PPERRIS_VC register is renamed as 
**                                       PPERRIS.                             
**                                      -RX_PPERRIE_VC register is renamed as 
**                                       PPERRIE.                              
**                                      -RX_ERRPOS_VC register is renamed as   
**                                       ERRPOS.                              
**                                      -RX_NUMPPERR_VC register is renamed as
**                                       NUMPPERR.                            
**                                     12)PMC-                               
**                                     -NCSPD_CTL register: NCSPD_CTL10…12,  
**									    NCSPD_CTL23…31 bitfields are added.  
**                                     -NCSPD_STAT register: NCSPD_STAT10…12,
**                                      NCSPD_STAT23…31 bitfields are added. 
**                                     -NCSPD_EVENT_CAPTURE register:        
**                                      NCSPD_EVENT_CAPTURE10…12,            
**                                      NCSPD_EVENT_CAPTURE23…31 bitfields   
**                                      are added.                           
**                                     13)QuadSPI-                           
**                                     -MCR register: DIAG bitfield is       
**                                      removed.                             
**                                     -DLLCRA register: DLLRES and          
**                                      DLL_REFCNTR bitfields are removed.   
**                                     -DLLCRB register: DLLRES and          
**                                      DLL_REFCNTR bitfields are removed.   
**                                     14)SELFTEST_GPR-                      
**                                     GENERIC_REG0 register is added.       
**                                     15)SPT-                               
**                                     -CS_STATUS2 register: WAITREG_TR      
**                                      bitfield is removed.                 
**                                     -DSP_ERR_INFO_INT_EN register:        
**                                      DSP_ERR_INFO_INT_EN bitfield is      
**                                      renamed as DSPERRIE.                 
**                                     -PDMA_LFSR_LOAD_VAL_HIGH register:    
**                                      PDMA_LFSR_LOAD_VAL_HIGH bitfield is  
**                                      renamed as LFSRVALH.                 
**                                     -PDMA_LFSR_LOAD_VAL_LOW register:     
**                                      PDMA_LFSR_LOAD_VAL_LOW bitfield is   
**                                      renamed as LFSRVALL.                 
**                                     -PDMA_FMTB_EXP_ADDR_STATUS register:  
**                                      EXPN_ADDR bitfield's size is changed 
**                                      from 32 to 29.                       
**                                     -OR_WEST_RD_LOCK_ERR_ADDR register:   
**                                      -OR_NW_BANK_RD_LOCK_ERR_ADDR bitfield
**                                       is renamed as                       
**                                       OR_BANK_WEST_RD_LOCK_ERR_ADDR.      
**                                      -OR_SW_BANK_RD_LOCK_ERR_ADDR bitfield is      
**                                       removed.                            
**                                      -SCSx_PDMA_FMTB_EXP_ADDR_STATUS       
**                                       register:EXPN_ADDR bitfield's size is
**                                       changed from 32 to 29.               
**                                     16)SerDes_SS-                         
**                                     -RSVDP bitfield is removed from       
**                                      following registers:                 
**                                      -PCIE_PHY_GEN_CTRL                   
**                                      -PCIE_PHY_LPBK_CTRL                  
**                                      -PCIE_PHY_SRAM_CSR                    
**                                      -PCIE_PHY_MPLLA_CTRL                 
**                                      -PCIE_PHY_MPLLB_CTRL                   
**                                      -PCIE_PHY_EXT_BS_CTRL                 
**                                      -PHY_REF_CLK_CTR                     
**                                      -PCIE_PHY_EXT_MPLLA_CTRL_1             
**                                      -PCIE_PHY_EXT_MPLLA_CTRL_2           
**                                      -PCIE_PHY_EXT_MPLLA_CTRL_3           
**                                      -PCIE_PHY_EXT_MPLLB_CTRL_1           
**                                      -PCIE_PHY_EXT_MPLLB_CTRL_2           
**                                      -PHY_EXT_MPLLB_CTRL_3                
**                                      -PHY_EXT_RX_EQ_CTRL_1A,etc.          
**                                      -PHY_EXT_RX_EQ_CTRL_4A register is    
**                                       added.                                 
**                                      17)SerDes_SS_PCIe_1-                  
**                                      -RSVDP bitfield is removed from       
**                                       following registers:                 
**                                       -PCIE_PHY_GEN_CTRL                   
**                                       -PCIE_PHY_LPBK_CTRL                  
**                                       -PCIE_PHY_SRAM_CSR                    
**                                       -PCIE_PHY_MPLLA_CTRL                 
**                                       -PCIE_PHY_MPLLB_CTRL                   
**                                       -PCIE_PHY_EXT_CTRL_SEL               
**                                       -PCIE_PHY_EXT_BS_CTRL                 
**                                       -PHY_REF_CLK_CTR                     
**                                       -PCIE_PHY_EXT_MPLLA_CTRL_1             
**                                       -PCIE_PHY_EXT_MPLLA_CTRL_2           
**                                       -PCIE_PHY_EXT_MPLLA_CTRL_3           
**                                       -PCIE_PHY_EXT_MPLLB_CTRL_1           
**                                       -PCIE_PHY_EXT_MPLLB_CTRL_2           
**                                       -PHY_EXT_MPLLB_CTRL_3                
**                                       -PHY_EXT_RX_EQ_CTRL_1A,etc.          
**                                      -PHY_EXT_RX_EQ_CTRL_4A register is    
**                                       added.                                 
**                                      18)STCU2-                             
**                                      -RUNSW register: RUNSW_ABORT bitfield 
**                                       is added.                            
**                                      -ERR_STAT register:                   
**                                       -ABORTSW bitfield is removed.        
**                                       -ABORTHW bitfield is added.          
**                                      19)TMU-                               
**                                      -TSR register:                        
**                                       TB bitfield is added.                
**                                      20)USDHC-                             
**                                      -INT_STATUS register: TP and CQI      
**                                       bitfields are added.                 
**                                      -INT_STATUS_EN register: TPSEN and    
**                                       CQISEN bitfields are added.          
**                                      -INT_SIGNAL_EN register: TPIEN and    
**                                       CQIIEN are added.                    
**                                      -MIX_CTRL register: EN_HS400_MODE     
**                                       bitfield is added.                   
**                                      -STROBE_DLL_CTRL, STROBE_DLL_STATUS   
**                                       and CQE registers are added.         
**                                      -VEND_SPEC2 register: EN_32K_CLK and  
**                                       FBCLK_TAP_SEL are added.             
**                                       21)VSPA_General_VCPU_control_status-  
**                                       -CONTROL register:                    
**                                        -CORE_RESET and PDN_EN bitfields are 
**                                         removed.                            
**                                       -VSPA_SOFT_RST_REQ register is added.
**                                       -STATUS register: PDN_DONE and        
**                                        PDN_ACTIVE bitfields are removed.    
**                                       -LD_RF_CONTROL register: BITREVS      
**                                        bitfield is removed.
**
**   - rev. 1.7 Jalaj Awasthi 14-Aug-20   1)Initial release based on            
**                                       RM Rev.2. Draft B.
**                                       2)CMU_FC-                            
**                                         -SR register: STATE                   
**                                          bitfield is removed.                 
**                                       3)DDR_GPR-                           
**                                         DDR_CONFIG register following bit     
**                                         fields are removed                    
**                                         -RAQR_POP_0                           
**                                         -RAQR_POP_1                           
**                                         -RAQR_POP_2                            
**                                         -RAQR_PUSH_0                          
**                                         -RAQR_PUSH_1                          
**                                         -RAQR_PUSH_2                            
**                                         -RAQ_SPLIT_0                          
**									       -RAQ_SPLIT_1                          
**									       -RAQ_SPLIT_2                          
**                                       4)MIPICSI2-                           
**                                         DPHY_RX_SYNALIGN_CFG register is      
**                                         added.                                                                 
**                                       5)QuadSPI-                           
**                                         -MCR register: DQS_OUT_EN and         
**                                         VAR_LAT_EN bitfields are removed.     
**                                        -FAILA_ADDR and FAILB_ADDR register   
**                                         are added.                           
**                                       6)SPT-                                
**                                        -DSP_PFAULT_INFO_REG register is      
**									       is removed.                          
**                                       7)USDHC-                              
**                                        -INT_STATUS register: TP and CQI      
**                                         bitfields are removed.               
**                                        -INT_STATUS_EN register: TPSEN and    
**                                         CQISEN bitfields are removed.        
**                                        -INT_SIGNAL_EN register: TPIEN and    
**                                         CQIIEN are removed.                  
**                                        -MIX_CTRL register: EN_HS400_MODE     
**                                         bitfield is removed.                 
**                                        -STROBE_DLL_CTRL, STROBE_DLL_STATUS   
**                                         and CQE registers are removed.       
**                                        -VEND_SPEC2 register: EN_32K_CLK and  
**                                         FBCLK_TAP_SEL bitfields are removed.  
**                          		      -CQVER, CQCAP, CQCFG registers are    
**                                         added.
**                                       8)Module instance name is changed from                                
**                                         EIM_BBE32_DSP to EIM_BBE32EP_DSP.
**                                       9)In PCIE_EP and PCIE_RC modules,                                 
**                                          PCIE_RC_BAR_MASK_COUNT count is changed       
**									        from 5 to 6
**                          		      -SerDes_RC_PCIe_1 count is changed     
**                                         from 5 to 6.
**                          		      -BAR_MASK_PCI_TYPE1_BAR5 register is added.  
**
**     - rev. 1.8 Taru Shree 09-Oct-20  1)Initial release based on  
**                                      RM Rev.2. Draft C.                    
**                                      2)FCCU-                               
**                                      CFG register-                         
**                                      SM bitfield is removed.               
**                                      3)MC_CGM-                             
**                                      -MUX_1_CSC register-                  
**                                       SELCTL bitfield's size is changed    
**                                       from 6 to 5.                         
**                                      -MUX_1_CSS register-                  
**                                       SELSTAT bitfield's size is changed  
**                                       from 6 to 5.                         
**                                      -MUX_2_CSC register-                  
**                                       SELCTL bitfield's size is changed    
**                                       from 6 to 5.                         
**                                      -MUX_2_CSS register-                  
**                                       SELSTAT bitfield's size is changed   
**                                       from 6 to 5.                         
**                                      4)QuadSPI-                            
**                                      -DLLCRA register-                     
**                                      -SLV_DLY_FINE bitfield is removed.   
**                                      -DLLRES bitfield is added.           
**                                      -DLLCRB register-                     
**                                      -SLV_DLY_FINE bitfield is removed.   
**                                      -DLLRES bitfield is added.    
**                                      5)SPI-
**                                      -TX and CMD registers are added in PUSHR 
**                                       union.       
**                                      6)SRC_1-                              
**                                      -CLKOUT_PAD_CTRL_REG register-        
**                                       PCIREF_CLKOUT_MUX_CTRL bitfield is   
**                                       renamed as CLKOUT1_ENABLE.           
**                                      7)SRC_GPR block is added.             
**                                      8)SRAMC instance is changed to SRAMC_0
**                                      9)CHIRPBUFFER_RAM block is changed to 
**                                      CHIRPBUFFER_RAM_CONTROLLER.           
**                                      10)RETENTION_RAM block is changed to   
**                                      RETENTION_RAM_CONTROLLER. 
**
**     - rev. 1.9 Taru Shree 09-Nov-20  1)Initial release based on  
**                                      RM Rev.2. 
**                                      2)PCIE_EP-                            
**                                      -EROMBARMASK register is added.       
**                                      -EROMBAR and EROMBARMASK registers are
**                                       merged together into EROMBARS.       
**                                      3)QuadSPI-                            
**                                      -DLL_REFCNTR bitfield is added in     
**                                       DLLCRA and DLLCRB registers.        
**                                      4)SerDes_EP_PCIe_1-                   
**                                      -EROMBARMASK register is added.       
**                                      -EROMBAR and EROMBARMASK registers are
**                                       merged together into EROMBARS.       
**                                      5)SerDes_SS-                          
**                                      -PCIE_PHY_MPLLA_CTRL register-        
**                                       MPLLA_SSC_EN bitfield is removed.    
**                                      -PCIE_PHY_MPLLB_CTRL register-        
**                                       MPLLB_SSC_EN bitfield is removed.    
**                                      -PCIE_PHY_EXT_MPLLA_CTRL_2 register-  
**                                       EXT_MPLLA_SSC_CLK_SEL and            
**                                       EXT_MPLLA_SSC_RANGE bitfields are    
**                                       removed.                             
**                                      -PCIE_PHY_EXT_MPLLA_CTRL_3 register-  
**                                       EXT_MPLLA_SSC_FREQ_CNT_INIT,         
**                                       EXT_MPLLA_SSC_FREQ_CNT_PEAK and     
**                                       EXT_MPLLA_SSC_FREQ_CNT_OVRD_EN       
**                                       bitfields are removed.               
**                                      -PCIE_PHY_EXT_MPLLB_CTRL_2 register-  
**                                       EXT_MPLLB_SSC_CLK_SEL and            
**                                       EXT_MPLLB_SSC_RANGE bitfields are    
**                                       removed.                             
**                                      -PCIE_PHY_EXT_MPLLB_CTRL_3 register-  
**                                       EXT_MPLLB_SSC_FREQ_CNT_INIT,         
**                                       EXT_MPLLB_SSC_FREQ_CNT_PEAK and      
**                                       EXT_MPLLB_SSC_FREQ_CNT_OVRD_EN       
**                                       bitfields are removed.               
**                                      6)SerDes_SS_PCIe_1-                   
**                                      -PCIE_PHY_MPLLA_CTRL register-        
**                                       MPLLA_SSC_EN bitfield is removed.    
**                                      -PCIE_PHY_MPLLB_CTRL register-        
**                                       MPLLB_SSC_EN bitfield is removed.    
**                                      -PCIE_PHY_EXT_MPLLA_CTRL_2 register-  
**                                       EXT_MPLLA_SSC_CLK_SEL and            
**                                       EXT_MPLLA_SSC_RANGE bitfields are    
**                                       removed.                             
**                                      -PCIE_PHY_EXT_MPLLA_CTRL_3 register-  
**                                       EXT_MPLLA_SSC_FREQ_CNT_INIT,         
**                                       EXT_MPLLA_SSC_FREQ_CNT_PEAK and      
**                                       EXT_MPLLA_SSC_FREQ_CNT_OVRD_EN       
**                                       bitfields are removed.               
**                                      -PCIE_PHY_EXT_MPLLB_CTRL_2 register-  
**                                       EXT_MPLLB_SSC_CLK_SEL and            
**                                       EXT_MPLLB_SSC_RANGE bitfields are    
**                                       removed.                             
**                                      -PCIE_PHY_EXT_MPLLB_CTRL_3 register-  
**                                       EXT_MPLLB_SSC_FREQ_CNT_INIT,         
**                                       EXT_MPLLB_SSC_FREQ_CNT_PEAK and      
**                                       EXT_MPLLB_SSC_FREQ_CNT_OVRD_EN       
**                                       bitfields are removed.      
**                                            
**     - rev. 2.0 Taru Shree 30-Mar-21  1)Initial release based on  
**                                      RM Rev.3 Draft A.
**                                      2)ATP-                                
**                                      -TPIU_CLK_SEL bitfield is added      
**                                       in CIAC register.                                                     
**                                      3)BOOT-                               
**                                      -Following bitfield  names are changed
**                                       in BOOT_GPR_BMR2 register-           
**                                      -From BMODE2 to BOOTMOD2.            
**                                      -From BMODE1 to BOOTMOD1.              
**                                      4)MIPICSI2-                           
**                                      -CBUF_CONFIG register-             
**                                       COHERENT bitfield is removed.        
**                                      5)OCOTP-                              
**                                      -ERR_INJCTR register-                 
**                                       ADDR bitfield's size is changed from 
**                                       16 to 12.                            
**                                      6)SELFTEST_GPR-   
**                                      -GENERIC_REG0 register is renamed as
**                                       GENERIC_REG0_0.
**                                      -GENERIC_REG1 register is renamed as
**                                       GENERIC_REG1_0.
**                                      -LBIST_PROG_REG register is renamed as
**                                       LBIST_PROG_REG0.                      
**                                      -GENERIC_REG0_1...GENERIC_REG0_54     
**                                       registers are added.    
**                                      -GENERIC_REG1_1...GENERIC_REG0_54     
**                                       registers are added.              
**                                      -LBIST_PROG_REG1...LBIST_PROG_REG54   
**                                       registers are added.                                                      
**                                      7)USDHC-                              
**                                      -INT_STATUS register-                 
**                                       ERR_INT_STATUS bitfield is added.     
**                                      8)In address definitions, instances are 
**                                      prefixed with "IP".
**
**     - rev. 2.1 Taru Shree 01-Apr-21  Corrected Reference manual name
**                                      (RM Rev.3 Draft B).
**
**     - rev. 2.2 Taru Shree 25-May-21  1)Initial release based on  
**                                      RM Rev.3 Draft C.
**                                      2)Following interrupt names
**                                      are changed-
**                                      -FLEXRAY_NCERR_IRQn is renamed as
**                                       FLEXRAY0_NCERR_IRQn.
**                                      -FLEXRAY_CERR_IRQn is renamed as
**                                       FLEXRAY0_CERR_IRQn.
**                                      -FLEXRAY_CH0_RX_FIFO_IRQn is 
**                                       renamed as FLEXRAY0_CH0_RX_FIFO_IRQn.
**                                      -FLEXRAY_CH1_RX_FIFO_IRQn is 
**                                       renamed as FLEXRAY0_CH1_RX_FIFO_IRQn.
**                                      -FLEXRAY_WKUP_IRQn is renamed as
**                                       FLEXRAY0_WKUP_IRQn.
**                                      -FLEXRAY_STATUS_IRQn is renamed as
**                                       FLEXRAY0_STATUS_IRQn.
**                                      -FLEXRAY_CMBERR_IRQn is renamed as
**                                       FLEXRAY0_CMBERR_IRQn.
**                                      -FLEXRAY_TX_BUFF_IRQn is renamed as
**                                       FLEXRAY0_TX_BUFF_IRQn.
**                                      -FLEXRAY_RX_BUFF_IRQn is renamed as
**                                       FLEXRAY0_RX_BUFF_IRQn.
**                                      -FLEXRAY_MODULE_IRQn is renamed as
**                                       FLEXRAY0_MODULE_IRQn.
**                                      3)ADC-
**                                      MCR register: JEDGE, JTRGEN, XSTRTEN,
**                                      EDGE and TRGEN bitfields are removed.
**                                      4)ATP-
**                                      CIAC register: TPIU_CLK_DISABLE
**                                      bitfield is added.
**                                      5)BOOT-
**                                      SRC_POR_CTRL_REG register is removed.
**                                      6)DMA_CRC-
**                                      -GEC register: SWAP_BIT bitfield
**                                       is removed.
**                                      -CTL register: CS_XOR, CS_SWAP and
**                                       SWAP_BIT bitfields are added.
**                                      7)FLEXTIER is renamed as FTM.
**                                      8)SRC- 
**                                      SRC_POR_CTRL_REG register is added.
**                                      9)UMCTL2_REGS-
**                                      ECCPOISONADDR0, ECCPOISONADDR1, CRCPARCTL0,
**                                      CRCPARCTL1, CRCPARSTAT, DIMMCTL,
**                                      ADVECCINDEX, ECCPOISONPAT0 and
**                                      ECCPOISONPAT2 registers are removed.
**                                      10)VSPA_General_VCPU_control_status-
**                                      -IRQEN register: irqen_fecu_done
**                                       bitfield is removed.
**                                      -STATUS register: irq_pend_fecu_done
**                                       bitfield is removed.
**                                      11)VSPA_IPPU_control_and_status-
**                                      IPPUCONTROL register: ippu_fecu_trigger
**                                      bitfield is removed.
**
** - rev. 2.3 Jalaj Awasthi 29-July-21  1)Initial release based on            
**                                      RM Rev3 Draft D.					 
**                                      2)DMA_CRC-                            
**								        -In CONTROL_REGISTER_CTL register,    
**	 							        bit field value of POLY_SEL is       
**									    changed from 4 to 3.                 
**								        3)MC_CGM-                             
**								        -In MUX_1_CSC register                
**								        bit field value of SELCTL is         
**                                      changed from 5 to 6.                 
**								        -In MUX_1_CSS register                
**								        bit field value of SELSTAT is        
**                                      changed from 5 to 6.                 
**								        -In MUX_2_CSS register                
**								        bit field value of SELSTAT is        
**                                      changed from 5 to 6.                 
**                                      4)QuadSPI-                            
**								        -In RBCT register                     
**								        bit field value of WMRK is           
**                                      changed from 7 to 8.                 
**								        -In TBSR register                     
**								        bit field value of TRBFL is          
**                                      changed from 8 to 9.                
**								        -In RSER register                     
**								        bit field TBFIE is removed           
**                                      5)SPT-                                
**								        -Throughout the chapter, swapped      
**								        MIPICSI2 instances:				     
**								        from MIPICSI2_0 to MIPICSI2_1        
**                                      from MIPICSI2_1 to MIPICSI2_0         
**									    from MIPICSI2_2 to MIPICSI2_3		 
**                                      from MIPICSI2_3 to MIPICSI2_2         
**                                      6)VSPA-                               
**								        following registers are added       
**                                      HWVERSION, SWVERSION, CONTROL, IRQEN, 
**                                      STATUS, VCPU_HOST_FLAGS,            
**									    HOST_VCPU_FLAGS, EXT_GO_ENA,        
**									    EXT_GO_STAT, ILLOP_STATUS, PARAM0,  
**									    PARAM1, PARAM2, DMEM0_SIZE,         
**									    AXISLV_FLAGS, AXISLV_GOEN,          
**									    PLAT_IN_0, PLAT_OUT_0,              
**									    CYC_COUNTER_MSB, CYC_COUNTER_LSB,   
**									    DMA_DMEM_PRAM_ADDR, DMA_AXI_ADDRESS, 
**									    DMA_AXI_BYTE_CNT, DMA_XFR_CTRL,     
**									    DMA_STAT_ABORT, DMA_IRQ_STAT.....   
**									    ...till IPPUSWVER                   
**                                      -Following modules are removed       
**								        VSPA_DMA_control_and_status         
**                                      VSPA_Debug_messaging_and_profiling  
**								        VSPA_General_VCPU_control_status.   
**								        VSPA_IPPU_control_and_status	     
**								        VSPA_Input_output                   
**								        VSPA_VCPU_Go_ctrl_and_stat,         
**									    VSPA_VCPU_Host_Messaging            
**									    VSPA_Version_and_configuration		 
**
** - rev. 2.4 Jalaj Awasthi 14-Fed-22   1)Initial release based on            
**                                      RM Rev.3.                             
**                                      2)CTU-                                
**                                      -A register: ST0 bitfield is removed. 
**                                      -B register: ST0 bitfield is removed. 
**                                      -C register is removed.               
**                                      -EFR register: CS bitfield is removed.
**                                      3)DMA_CRC-                            
**                                      -GEC register: SWAP_BIT bitfield is   
**                                      added.                               
**                                      -CTL register: POLY_SEL bitfield’s    
**                                      size is changed from 3 to 4.         
**                                      -CS_XOR, CS_SWAP and SWAP_BIT         
**                                      bitfields are removed.               
**                                      4)MC_CGM-	                          
**                                      FRENTC register is added.             
**                                      5)PCIE_EP-	                          
**                                      PORT_FORCE_OFF register:              
**                                      DO_DESKEW_FOR_SRIS bitfield is removed
**                                      6)QuadSPI-                        	  
**                                      RBCT register: WMRK bitfield’s size is
**                                      changed from 8 to 7.                  
**                                      7)SIUL2-                              
**                                      MPGPDO register: MPPDO10, MPPDO11,    
**                                      MPPDO12, MPPDO13, MPPDO14, MPPDO15,   
**                                      MASK10, MASK11, MASK12, MASK13, MASK14
**                                      and MASK15 bitfields are added.       
**                                      8)SPT-	                              
**                                      -HW_ACC_ERR_STATUS register:	      
**                                      -ST_SRCADDR_NOT_MULTOF16_ERR bitfield
**                                      is renamed as                       
**                                      HST_SRCADDR_UNALIGN_ERR.            
**                                      -HST_DESTADDR_NOT_MULTOF16_ERR       
**                                      bitfield is renamed as              
**                                      HST_DESTADDR_UNALIGN_ERR.           
**                                      -HW_ACC_ERR_IE register:	          
**                                      -HST_SRCADDR_NOT_MULTOF16_ERR_IE     
**                                      bitfield is renamed as              
**                                      HST_SRCADDR_UNALIGN_ERR_IE.         
**                                      -HST_DESTADDR_NOT_MULTOF16_ERR_IE    
**                                      bitfield is renamed as              
**                                      HST_DESTADDR_UNALIGN_ERR_IE.        
**                                      9)SRC-	                              
**                                      HSE_CM7_STATUS_REG register is removed
**                                      10)SerDes_EP_PCIe_1-	              
**                                      PORT_FORCE_OFF register:              
**                                      DO_DESKEW_FOR_SRIS bitfield is        
**                                      removed.                              
**                                      11)SerDes_SS-	                      
**                                      PE0_GEN_CTRL_1 register: SRIS_MODE    
**                                      bitfield is added.                    
**                                      12)SerDes_SS_PCIe_1-	              
**                                      PE0_GEN_CTRL_1 register: SRIS_MODE    
**                                      bitfield is added.                    
**                                      13)USDHC-	                          
**                                      AUTOCMD12_ERR_STATUS register:	      
**                                      AC12EBE and AC12CE bitfield’s         
**                                      positions are interchanged.           
**                                      14)XRDC_0-	                          
**                                      PID register: PID bitfield’s size is  
**                                      changed from 1 to 6.                  
**                                      15)eDMA_0_TCD-	                      
**                                      CSR register: EEOP bitfield is        
**                                      removed.                              
**                                      16)eDMA_1_TCD-	                      
**                                      CSR register: EEOP bitfield is        
**                                      removed.                              
**                                                                                                                                                                                    
** ###################################################################
*/

/*!
 * @file S32R45.h
 * @version 2.4
 * @date 2022-02-14
 * @brief Peripheral Access Layer for S32R45
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/* Prevention from multiple including the same memory map */
#if !defined(S32R45_H_)  /* Check if memory map has not been already included */
#define S32R45_H_

/* ----------------------------------------------------------------------------
   -- IP Header Files
   ---------------------------------------------------------------------------- */

/* IP Header Files List */
#include "S32R45_A53_GPR.h"
#include "S32R45_ADC.h"
#include "S32R45_ATP.h"
#include "S32R45_BOOT.h"
#include "S32R45_CAIU.h"
#include "S32R45_CCTI_FAULT_CTRL.h"
#include "S32R45_CM7_GPR.h"
#include "S32R45_CMIU.h"
#include "S32R45_CMU_FC.h"
#include "S32R45_CMU_FM.h"
#include "S32R45_CRC.h"
#include "S32R45_CSR.h"
#include "S32R45_CTE.h"
#include "S32R45_CTU.h"
#include "S32R45_DDR_GPR.h"
#include "S32R45_DDR_SUBSYSTEM.h"
#include "S32R45_DFS.h"
#include "S32R45_DIRU.h"
#include "S32R45_DMA.h"
#include "S32R45_DMAMUX.h"
#include "S32R45_DMA_CRC.h"
#include "S32R45_DMA_TCD.h"
#include "S32R45_EIM.h"
#include "S32R45_ERM.h"
#include "S32R45_FASTDMA.h"
#include "S32R45_FCCU.h"
#include "S32R45_FLEXCAN.h"
#include "S32R45_FLEXRAY.h"
#include "S32R45_FSC.h"
#include "S32R45_FTM.h"
#include "S32R45_FXOSC.h"
#include "S32R45_GMAC.h"
#include "S32R45_I2C.h"
#include "S32R45_JDC.h"
#include "S32R45_LINFLEXD.h"
#include "S32R45_MCM.h"
#include "S32R45_MC_CGM.h"
#include "S32R45_MC_CGM_1.h"
#include "S32R45_MC_CGM_2.h"
#include "S32R45_MC_ME.h"
#include "S32R45_MC_RGM.h"
#include "S32R45_MDM_AP.h"
#include "S32R45_MIPICSI2.h"
#include "S32R45_MPU.h"
#include "S32R45_MSCM.h"
#include "S32R45_MU.h"
#include "S32R45_NCBUID_RESET_VALUE.h"
#include "S32R45_NVIC.h"
#include "S32R45_OCOTP.h"
#include "S32R45_PCIE_DMA.h"
#include "S32R45_PCIE_EP.h"
#include "S32R45_PCIE_RC.h"
#include "S32R45_PERF_REGISTERS.h"
#include "S32R45_PIT.h"
#include "S32R45_PLLDIG.h"
#include "S32R45_PMC.h"
#include "S32R45_PMUEVENTOBSERVER.h"
#include "S32R45_QUADSPI.h"
#include "S32R45_QUADSPI_ARDB.h"
#include "S32R45_RESET.h"
#include "S32R45_SBSW.h"
#include "S32R45_SCB.h"
#include "S32R45_SECURITY.h"
#include "S32R45_SELFTEST_GPR.h"
#include "S32R45_SELFTEST_GPR_TOP.h"
#include "S32R45_SEMA42.h"
#include "S32R45_SERDES_DMA_PCIE_1.h"
#include "S32R45_SERDES_EP_PCIE_1.h"
#include "S32R45_SERDES_GPR.h"
#include "S32R45_SERDES_RC_PCIE_1.h"
#include "S32R45_SERDES_SS.h"
#include "S32R45_SERDES_SS_PCIE_1.h"
#include "S32R45_SIUL2.h"
#include "S32R45_SPI.h"
#include "S32R45_SPT.h"
#include "S32R45_SRAMC.h"
#include "S32R45_SRC.h"
#include "S32R45_SRC_1.h"
#include "S32R45_SRC_GPR.h"
#include "S32R45_STCU2.h"
#include "S32R45_STM.h"
#include "S32R45_SWT.h"
#include "S32R45_SYSTICK.h"
#include "S32R45_TMU.h"
#include "S32R45_UMCTL2_MP.h"
#include "S32R45_UMCTL2_REGS.h"
#include "S32R45_USDHC.h"
#include "S32R45_VSPA.h"
#include "S32R45_WKPU.h"
#include "S32R45_XRDC.h"
#include "S32R45_XRDC_0.h"

#endif  /* #if !defined(S32R45_H_) */
