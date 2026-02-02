/*
** ###################################################################
**     Processor:           S32G274A_M7
**     Compiler:            Keil ARM C/C++ Compiler
**     Reference manual:    S32G274A RM Rev.5
**     Version:             rev. 2.1, 2022-06-27
**     Build:               b220627
**
**     Abstract:
**         Peripheral Access Layer for S32G274A_M7
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
**     - rev. 1.0 Taru Shree 30-July-19  1)Initial release based on 
**                                       RM Rev.1 Draft O.
**
**     - rev. 1.1 Taru Shree 20-Sep-19   1)Initial release based on 
**                                       RM Rev.1 Draft P.
**                                       2)CTU- 
**                                       -Array name is changed
**                                        from CLR_C__CLR_B__CLR_A to CLR_A
**                                       -Register names are changed 
**                                        from CLR_A, CLR_B and CLR_C 
**                                        to A, B and C respectively.
**                                       3)FLEXRXAY- 
**                                       -Alternate group names are changed 
**                                        from TI2CR0_REL_TI2CR0_ABS to TI2CR0.
**                                        from TI2CR1_REL_TI2CR1_ABS to TI2CR1.
**                                       -Register names are changed 
**                                        from TI2CRx_ABS to ABS.
**                                        from TI2CRx_REL to REL.
**                                       4)MU- Base Addresses are changed 
**                                       -MU1__MUB: 0x40210000 to 0x40211000
**                                       -MU2__MUB: 0x40210000 to 0x40212000
**                                       -MU3__MUB: 0x40210000 to 0x40213000
**                                       5)SEMA42-
**                                       -Register names are changed 
**                                        from RSTGT_R to R.
**                                        from RSTGT_W to W.
**                                       6)SPI- 
**                                       -Alternate group names are changed 
**                                        from CTAR_CTAR_SLAVE to MODE.
**                                        from PUSHR_SLAVE_PUSHR to PUSHR.
**                                       7)REG_PROT-
**                                        Number of SLBR registers are changed.
**                                       8)License is updated.
**     - rev. 1.2 Taru Shree 09-Dec-19  Initial release based on 
**                                      RM Rev.1.
**     - rev. 1.3 Taru Shree 24-Dec-19  CAIU, SERDES, STM, CRC,
**                                      S32G_GPR files are called. 
**     - rev. 1.4 Taru Shree 13-Mar-20  1)Initial release based on 
**                                      RM Rev.2.Draft A.                              
**                                      2)ADC-                                
**                                      -EOC_CH40...EOC_CH47 bit fields 
**                                       are removed from CEOCFR1 register.            
**									    -EOC_CH40...EOC_CH47 bit fields  
**                                       are removed from CIMR1 register.         
**                                      -EOC_CH40...EOC_CH47 bit fields 
**                                       are removed from DMAR1 register.
**                                      -EOC_CH40...EOC_CH47 bit fields 
**                                       are removed from PSR1 register.
**                                      -EOC_CH40...EOC_CH47 bit fields 
**                                       are removed from NCMR1 register.
**                                      -EOC_CH40...EOC_CH47 bit fields 
**                                       are removed from JCMR1 register.
**                                      -EOC_CH40...EOC_CH47 bit fields 
**                                       are removed from CWSELR0 register.
**                                      -EOC_CH40...EOC_CH47 bit fields 
**                                       are removed from CWENR1 register.
**                                      -EOC_CH40...EOC_CH47 bit fields 
**                                       are removed from AWORR1 register.
**									    -ICDR register array size is       
**									     changed from 16 to 8.          
**									    3)ATP-                                
**									    -PLLBYP bit field is removed from
**									     PLLC register.                          
**									    -PLLCAL_2 register is added.          
**									    4)DDR_GPR-                            
**									    -DDR_CONFIG_6 register is removed.    
**									    5)FCCU-                               
**									    -FOP and FOPE bit fields are removed     
**									     from CFG register.                  
**									    6)FLEXCAN-                            
**                                      -CEI_MSK, FANCEI_MSK and HANCEI_MSK 
**                                       bit fields are removed from RXIMR 
**                                       register.                 
**                                      7)MC_RGM-                             
**									    -FERD register is added.             
**									    8)Following modules are added     
**									    -PCIE_DMA
**                                      -PCIE_EP
**                                      -PCIE_RC          
**									    -SerDes_DMA_PCIe_1
**                                      -SERDES_EP_PCIE_1
**                                      -SERDES_RC_PCIE_1
**                                      -SERDES_SS
**                                      -SERDES_SS_PCIE_1                   
**								        9)RTC-                                
**                                      -TRIG_EN bit field is removed from
**                                       RTCSUPV register.  
**                                    . 10)SIUL2_1-                           
**                                      -INV bit field is removed from
**                                       MSCR register.        
**                                      -UDR0 and UDR1 registers are removed. 
**                                      11)SPI-                               
**									    -CMDFFF bitfield is added in SR register.                              
**                                      12)STCU2-                              
**                                      -RUNSW_ABORT and ABORTSW bit fields 
**                                       are removed from RUNSW register.         
**									    13)WKPU-                              
**                                      -WIPUER_WIPDER register is removed. 	 								
**								        14)SRAMC
**                                      -SRAMC_1 module is removed.                              
**									    -Module name is changed from        
**									     SRAM_STDBY_CFG to STDBY_SRAM_CFG.
**                                      15)SRC-
**                                      -FLL_FHH_STAT bitfield is expanded
**                                       in CMU_STATUS_REG1 and CMU_STATUS_REG2
**                                       registers.
**     -1.5 Taru Shree 29-May-20        1)Initial release based on            
**                                        RM Rev.2 Draft C.                    
**                                      2)ATP-                                
**                                        PLLCAL_2 register: V2ICP, CALCP,    
**                                        ULKCTL, LKCTL, CALWINP, CALWAITP,   
**                                        CALFRA and TSTCTL bitfields are     
**                                        removed.                            
**                                      3)CM7_GPR-                            
**                                        CORTEXM7_GPR0 register:             
**                                        CM7_CPU_MEMORY_RETENTION_MODE_1     
**                                        bitfield is removed.                
**                                      4)DDR_GPR-                            
**                                        DDR_CONFIG_0 register: PA_RMASK and 
**                                        PA_WMASK bitfields are removed.     
**                                      5)D_IP_LLCE_SYN-                      
**                                        MASIDR register is removed.         
**                                      6)MC_CGM-                             
**                                        PHASE bitfield is removed from      
**                                        MUX_0_DC_0 and MUX_10_DC_0 registers.
**                                      7)MC_CGM_2-                           
**                                        PHASE bitfield is removed from      
**                                        MUX_1_DC_0, MUX_2_DC_0 and          
**                                        MUX_3_DC_0 registers.               
**                                      8)QuadSPI-                            
**                                        -MCR register: DQS_OUT_EN,          
**                                         VAR_LAT_EN and DIAG bitfields are  
**                                         removed.                           
**                                        -DLLRES and DLL_REFCNTR bitfields   
**                                         are removed from DLLCRA and DLLCRB 
**                                         registers.                         
**                                        -FAILA_ADDR and FAILB_ADDR registers
**                                         are added.                         
**                                      9)SELFTEST_GPR-                      
**                                        GENERIC_REG0 register is added.    
**                                      10)SerDes_SS-                         
**                                         RSVDP bitfield is removed from     
**                                         following registers:               
**                                        -PCIE_PHY_EXT_RX_EQ_CTRL_xC        
**                                        -PCIE_PHY_EXT_RX_EQ_CTRL_xA        
**                                        -PCIE_PHY_EXT_CALI_CTRL_x          
**                                        -PCIE_PHY_XPCSx_RX_OVRD_CTRL       
**                                        -LINK_INT_CTRL_STS                  
**                                        -PE0_GEN_CTRL_x                    
**                                        -PE0_PM_STS                        
**                                        -PE0_TX_MSG_HDR_1                  
**                                        -PE0_TX_MSG_REQ etc.               
**                                      11)SerDes_SS_PCIe_1-                  
**                                         RSVDP bitfield is removed from     
**                                         following registers:               
**                                         -PCIE_PHY_EXT_RX_EQ_CTRL_xC        
**                                         -PCIE_PHY_EXT_RX_EQ_CTRL_xA        
**                                         -PCIE_PHY_EXT_CALI_CTRL_x          
**                                         -PCIE_PHY_XPCSx_RX_OVRD_CTRL       
**                                         -LINK_INT_CTRL_STS                  
**                                         -PE0_GEN_CTRL_x                    
**                                         -PE0_PM_STS                        
**                                         -PE0_TX_MSG_HDR_1                  
**                                         -PE0_TX_MSG_REQ etc.        
**                                      12)TMU-
**                                         TSR register: TB bitfield is added.        
**                                      13)USDHC-                             
**                                         STROBE_DLL_CTRL register:          
**                                         -STROBE_DLL_CTRL_GATE_UPDATE_0 and 
**                                          STROBE_DLL_CTRL_GATE_UPDATE_1     
**                                          bitfields are removed.            
**                                         -STROBE_DLL_CTRL_GATE_UPDATE       
**                                          bitfield is added.                 
**                                         -STROBE_DLL_CTRL_SLV_DLY_TARGET    
**                                          bitfield’s size is changed from   
**                                          3 to 4.                           
**                                      14)Following instance names are       
**                                         changed for SELFTEST_GPR in macros-
**                                         -SELFTEST_GPR_FLEXNOC_PART1 is      
**                                          renamed as SELFTEST_GPR_NOC_PART1.
**                                         -SELFTEST_GPR_FLEXNOC_PART2 is     
**                                          renamed as SELFTEST_GPR_NOC_PART2.
**                                         -SELFTEST_GPR_FLEXNOC_PART4 is      
**                                          renamed as SELFTEST_GPR_NOC_PART4.
**                                         -SELFTEST_GPR_FLEXNOC_PART3 is     
**                                          renamed as SELFTEST_GPR_NOC_PART3. 
**                                      15)Following instances are merged 
**                                         together in SELFTEST_GPR-
**                                         -SELFTEST_GPR
**                                         -SELFTEST_GPR_CHIPTOP
**                                         -SELFTEST_GPR_MEM_NOC_0
**                                         -SELFTEST_GPR_MEM_NOC_1
**                                         -SELFTEST_GPR_MISC
**                                         -SELFTEST_GPR_NOC_PART1
**                                         -SELFTEST_GPR_NOC_PART2
**                                         -SELFTEST_GPR_NOC_PART3
**                                         -SELFTEST_GPR_NOC_PART4
**     -1.6 Jalaj Awasthi 13-Oct-20     1)Initial release based on RM Rev.2.  
**                                        Draft F.                              
**                                      2)CMU_FC-                             
**                                        -In SR register                     
**									       bit field STATE is removed.        
**                                      3)CMU_FM-                             
**                                       -In SR register                     
**									      bit field STATE is removed.        
**									    4)DDR_GPR-                            
**									     In DDR_CONFIG_5 register            
**                                       Following bit fields are removed    
**                                       bit fields RAQR_POP_0, RAQR_POP_1,  
**									     RAQR_POP_2, RAQR_PUSH_0,            
** 									     RAQR_PUSH_1, RAQR_PUSH_2,           
**									     RAQ_SPLIT_0, RAQ_SPLIT_1,           
**									     RAQ_SPLIT_2                         
**									   5)D_IP_LLCE_SYN is removed            
**									   6)FCCU-                               
**                                       In CFG register                     
**									     SM bit field is removed             
**									   7)LLCE_Core_to_core is added          
**								       8)MC_CGM-                             
**                                       MUX_13_CSC, MUX_13_CSS              
**                                       registers are removed             
**									   9)MC_RGM-                             
**                                       -In RDSS register, bit field       
**                                        FES_RES is removed               
**                                    10)QuadSPI-                           
**									    -In DLLCRA register bit              
**                                       field SLV_DLY_FIN is  removed       
**                                       and bit fields DLLRES, DLL_REFCNTR  
**									     are added.                          
**									     In DLLCRB register bit              
**                                       field SLV_DLY_FIN is  removed.      
**                                       and bit fields DLLRES, DLL_REFCNTR  
**									     are added.                          
**                                    11)S32G_GPR-                           
**                                       -CLKOUT_PAD_CTRL register is       
**									      removed.                          
**									  12)WKPU-                              
**                                       WIPUER_WIPDER register is added.   	 								
**								      13)UOTGNC-                            
**                                       -In TUNING_CTRL register, bit field
**                 					      DIS_CMD_CHK_FOR_STD_TUNING is added
**									     -register CQE is removed            
**									     -Following registers are added      
**                                        CQVER, CQCAP, CQCFG, CQCTL, CQIS,  
**									      CQISTE, CQISGE, CQIC, CQTDLBA,     
**									      CQTDLBAU, CQTDBR, CQTCN, CQDQS,    
**									      CQDPT, CQTCLR, CQSSC1, CQSSC2,     
**									      CQCRDCT, CQRMEM, CQTERRI, CQCRI,   
**									      CQCRA.                                               
**                                     14)FBXC is removed.
**     -1.7 Jalaj Awasthi 15-Oct-20    Reference manual name and build version are updated.
**     -rev. 1.8 Taru Shree 23-Dec-20  1)Initial release based on RM Rev.2   
**                                     Draft G.    
**                                     2)PFE interrupts are added.                                      
**                                     3)ATP-                                
**                                     TPIU_CLK_SEL bitfield is added in CIAC
**                                     register.       
**                                     4)MC_CGM_2-                           
**                                     MUX_0_DIV_TRIG_CTRL, MUX_0_DIV_TRIG,  
**                                     MUX_1_DIV_TRIG_CTRL, MUX_1_DIV_TRIG,  
**                                     MUX_2_DIV_TRIG_CTRL, MUX_2_DIV_TRIG,  
**                                     MUX_3_DIV_TRIG_CTRL, MUX_3_DIV_TRIG,  
**                                     MUX_7_DIV_TRIG_CTRL, MUX_7_DIV_TRIG,  
**                                     MUX_8_DIV_TRIG_CTRL, MUX_8_DIV_TRIG,  
**                                     MUX_9_DIV_TRIG_CTRL and MUX_9_DIV_TRIG
**                                     registers are removed.                
**                                     5)OCOTP-                              
**                                     ERR_INJCTR register: ADDR bitfield's size 
**                                     is changed from 16 to 12.              
**                                     6)PCIE_EP-                            
**                                     -EROMBARMASK register is added.        
**                                     -EROMBAR and EROMBARMASK registers are
**                                      merged together in EROMBARS.         
**                                     7)SerDes_EP_PCIe_1-                   
**                                     -EROMBARMASK register is added.         
**                                     -EROMBAR and EROMBARMASK registers are
**                                      merged together.                     
**                                     8)SerDes_SS-                          
**                                     -PCIE_PHY_MPLLA_CTRL register:        
**                                      MPLLA_SSC_EN bitfield is removed.    
**                                     -PCIE_PHY_EXT_MPLLA_CTRL_2 register:           
**                                      EXT_MPLLA_SSC_CLK_SEL and            
**                                      EXT_MPLLA_SSC_RANGE bitfields are    
**                                      removed.                             
**                                     -PCIE_PHY_EXT_MPLLA_CTRL_3 register:  
**                                      EXT_MPLLA_SSC_FREQ_CNT_INIT,         
**                                      EXT_MPLLA_SSC_FREQ_CNT_PEAK and      
**                                      EXT_MPLLA_SSC_FREQ_CNT_OVRD_EN       
**                                      bitfields are removed.                
**                                     -PCIE_PHY_EXT_MPLLB_CTRL_2 register:  
**                                      EXT_MPLLB_SSC_CLK_SEL and            
**                                      EXT_MPLLB_SSC_RANGE bitfields are    
**                                      removed.                             
**                                     -PCIE_PHY_EXT_MPLLB_CTRL_3 register:  
**                                      EXT_MPLLB_SSC_FREQ_CNT_INIT,         
**                                      EXT_MPLLB_SSC_FREQ_CNT_PEAK and      
**                                      EXT_MPLLB_SSC_FREQ_CNT_OVRD_EN       
**                                      bitfields are removed.               
**                                     9)SerDes_SS_PCIe_1-                   
**                                     -PCIE_PHY_MPLLA_CTRL register:        
**                                      MPLLA_SSC_EN bitfield is removed.    
**                                     -PCIE_PHY_EXT_MPLLA_CTRL_2 register:           
**                                      EXT_MPLLA_SSC_CLK_SEL and               
**                                      EXT_MPLLA_SSC_RANGE bitfields are       
**                                      removed.                                
**                                     -PCIE_PHY_EXT_MPLLA_CTRL_3 register:     
**                                      EXT_MPLLA_SSC_FREQ_CNT_INIT,           
**                                      EXT_MPLLA_SSC_FREQ_CNT_PEAK and      
**                                      EXT_MPLLA_SSC_FREQ_CNT_OVRD_EN       
**                                      bitfields are removed.                
**                                     -PCIE_PHY_EXT_MPLLB_CTRL_2 register:  
**                                      EXT_MPLLB_SSC_CLK_SEL and            
**                                      EXT_MPLLB_SSC_RANGE bitfields are    
**                                      removed.                             
**                                     -PCIE_PHY_EXT_MPLLB_CTRL_3 register:  
**                                      EXT_MPLLB_SSC_FREQ_CNT_INIT,         
**                                      EXT_MPLLB_SSC_FREQ_CNT_PEAK and      
**                                      EXT_MPLLB_SSC_FREQ_CNT_OVRD_EN       
**                                      bitfields are removed.          
**                                     10)SPI-
**                                     CMD and TX register's positions are 
**                                     inverted.     
**                                     11)LLCE_CORE_TO_CORE address is changed
**                                     from 0 to 0x43C26000.                 
**                                     12)LLCE_BLR_IN_FIFO_n,                
**                                     LLCE_BLR_OUT_FIFO_n,                  
**                                     LLCE_GENERIC_FIFO_n, LLCE_RX_IN_FIFO_n
**                                     LLCE_RX_OUT_FIFO_n and                
**                                     LLCE_TX_ACK_FIFO_n instances are      
**                                     removed.                              
**                                     13)LLCE_SYSCTRL address is changed    
**                                     from 0 to 0x43FF8000.              
**
**     - rev. 1.9 Taru Shree 09-Apr-21 1)Initial release based on 
**                                     RM Rev.2.
**                                     2)ATP-
**                                     CIAC register: TPIU_CLK_DISABLE 
**                                     bitfield is added.
**                                     3)BOOT- 
**                                     -SRC_POR_CTRL_REG register is
**                                      removed.
**                                     -GPR_BMR2 register:
**                                      -BMODE2 bitfield is renamed as
**                                       BOOTMOD2.
**                                      -BMODE1 bitfield is renamed as
**                                       BOOTMOD1.
**                                     4)FLEXTIMER module is renamed as 
**                                     FTM.
**                                     5)S32G_GPR-
**                                     -LLCE_STAT register: MISC bitfield
**                                      is removed.
**                                     -GENCTRL0 register: MISC bitfield
**                                      is removed.
**                                     6)SRAMC-
**                                     PRAMPKEY, PRAMPCR and PRAMPSR registers
**                                     are added.
**                                     7)SRAMC_1 instance is added.
**                                     8)SRC-
**                                     SRC_POR_CTRL_REG register is added.
**                                     9)USDHC-
**                                     INT_STATUS register- ERR_INT_STATUS
**                                     register is added.
**                                     10)In address definitions, instances are 
**                                     prefixed with "IP".
**
**     - rev. 2.0 Taru Shree 22-Nov-21 1)Initial release based on 
**                                     RM Rev.4.
**                                     2)ADC-
**                                     MCR register: JEDGE, JTRGEN, XSTRTEN, 
**                                     EDGE and TRGEN bitfields are removed.
**                                     3)CTU-
**                                     -A register: ST0 bitfield is removed.
**                                     -B register: ST0 bitfield is removed.
**                                     -C register is removed.
**                                     -EFR register: CS bitfield is removed.
**                                     4)DMA_CRC-
**                                     -GEC register: SWAP_BIT bitfield is 
**                                      removed.
**                                     -CONTROL_REGISTER_CTL register: 
**                                      -POLY_SEL bitfield’s size is changed 
**                                       from 4 to 3.  
**                                      -CS_XOR, CS_SWAP and SWAP_BIT bitfields 
**                                       are added.
**                                     5)DMA_TCD-
**                                     CSR register: EEOP bitfield is removed.
**                                     6)FTM module is renamed as FLEXTIMER.
**                                     7)MC_CGM-
**                                     -MUX_1_CSC register: SELCTL bitfield’s 
**                                      size is changed from 5 to 6.
**                                     -MUX_1_CSS register: SELSTAT bitfield’s 
**                                      size is changed from 5 to 6.
**                                     -MUX_2_CSC register: SELCTL bitfield’s 
**                                      size is changed from 5 to 6.
**                                     -MUX_2_CSS register: SELSTAT bitfield’s 
**                                      size is changed from 5 to 6.
**                                     8)MC_CGM_1-
**                                     -MUX_0_CSC register: SELCTL bitfield’s 
**                                      size is changed from 4 to 3.
**                                     -MUX_0_CSS register:	SELSTAT bitfield’s 
**                                      size is changed from 4 to 3.
**                                     9)MC_RGM-
**	                                   FRENTC register is added.
**                                     10)PCIE_EP-
**	                                   PORT_FORCE_OFF register: DO_DESKEW_FOR_SRIS 
**                                     bitfield is removed.
**                                     11)QuadSPI-	
**                                     -TBSR register: TRBFL bitfield’s size is 
**                                      changed from 8 to 9.
**                                     -RSER register: TBFIE bitfield is removed.
**                                     12)SRAMC-
** 	                                   PRAMPKEY, PRAMPCR and PRAMPSR registers 
**                                     are removed.
**                                     13)SRC-
**                              	   HSE_CM7_STATUS_REG register is removed.
**                                     14)SerDes_EP_PCIe_1-
** 	                                   PORT_FORCE_OFF_DO register: DO_DESKEW_FOR_SRIS 
**                                     bitfield is removed.
**                                     15)SerDes_SS-	
**                                     PE0_GEN_CTRL_1 register:	
**                                     SRIS_MODE bitfield is added.
**                                     16)SerDes_SS_PCIe_1-
**  	                               PE0_GEN_CTRL_1 register: SRIS_MODE bitfield is 
**                                     added.
**                                     17)UMCTL2-
**	                                   ECCPOISONADDR0, ECCPOISONADDR1, CRCPARCTL0, 
**                                     CRCPARCTL1, CRCPARSTAT, DIMMCTL, ADVECCINDEX, 
**                                     ECCPOISONPAT0 and ECCPOISONPAT2  registers are 
**                                     removed.
**
**     - rev. 2.1 Shivansh Kumar 27-Jun-22 
**                                     1)Initial release based on RM Rev.5
**                                     2)ADC-                                
**	                                   -MCR register: JEDGE, JTRGEN, EDGE and 
**	                                   TRGEN bitfields are added.            
**	                                   3)CRC_0-                              
**	                                   -CHANNEL_CFG register: Bit field      
**	                                   POLYG_EXT is added.                   
**	                                   -CHANNEL_EXT_CSTAT_EXT and            
**	                                   CHANNEL_EXT_OUTP_EXT registers are    
**	                                   added.                                
**	                                   4)DMA_CRC-                            
**	                                   -GEC register: Bit field SWAP_BIT is  
**	                                   added.                                
**	                                   -CONTROL_REGISTER_CTL register: Bit   
**	                                   fields CS_XOR, CS_SWAP, SWAP_BIT are  
**	                                   removed.                              
**	                                   5)FXOSC-                              
**	                                   -CTRL register: Bit field ALC_D is    
**	                                   added.                                
**	                                   6)MC_RGM-                             
**	                                   -FRENTC register is removed.          
**	                                   -PRST_0_PRST_0 register: Bit fields   
**	                                   PERIPH_6_RST, PERIPH_7_RST,           
**	                                   PERIPH_8_RST, PERIPH_9_RST,           
**	                                   PERIPH_10_RST, PERIPH_11_RST,         
**	                                   PERIPH_12_RST, PERIPH_13_RST,         
**	                                   PERIPH_14_RST, PERIPH_15_RST,         
**	                                   PERIPH_18_RST, PERIPH_19_RST,         
**	                                   PERIPH_20_RST, PERIPH_21_RST,         
**	                                   PERIPH_22_RST, PERIPH_23_RST,         
**	                                   PERIPH_24_RST, PERIPH_25_RST,         
**	                                   PERIPH_26_RST, PERIPH_27_RST,         
**	                                   PERIPH_28_RST, PERIPH_29_RST,         
**	                                   PERIPH_30_RST, PERIPH_31_RST are      
**	                                   removed.                              
**	                                   -PSTAT_0_PSTAT_0 register: Bit fields 
**	                                   PERIPH_6_STAT, PERIPH_7_STAT,         
**	                                   PERIPH_8_STAT, PERIPH_9_STAT,         
**	                                   PERIPH_10_STAT, PERIPH_11_STAT,       
**	                                   PERIPH_12_STAT, PERIPH_13_STAT,       
**	                                   PERIPH_14_STAT, PERIPH_15_STAT,       
**	                                   PERIPH_18_STAT, PERIPH_19_STAT,       
**	                                   PERIPH_20_STAT, PERIPH_21_STAT,       
**	                                   PERIPH_22_STAT, PERIPH_23_STAT,       
**	                                   PERIPH_24_STAT, PERIPH_25_STAT,       
**	                                   PERIPH_26_STAT, PERIPH_27_STAT,       
**	                                   PERIPH_28_STAT, PERIPH_29_STAT,       
**	                                   PERIPH_30_STAT, PERIPH_31_STAT are    
**	                                   removed.                              
**	                                   7)OCOTP-                              
**	                                   -CTRL_SYS register: Bit field CRC_TEST
**	                                   is removed.                           
**	                                   -CRC_RGN_SYS, CRC_ADDR_SYS and        
**	                                   CRC_VALUE_SYS registers are removed.  
**	                                   -STATUS_SYS register: Bit field       
**	                                   CRC_FAIL is removed.                  
**	                                   8)PCIE_DMA-                           
**	                                   -DMA_WRITE_ENGINE_EN_OFF register: Bit
**	                                   fields DMA_WRITE_ENGINE_EN_HSHAKE_CH4,
**	                                   DMA_WRITE_ENGINE_EN_HSHAKE_CH5,       
**	                                   DMA_WRITE_ENGINE_EN_HSHAKE_CH6,       
**	                                   DMA_WRITE_ENGINE_EN_HSHAKE_CH7 are    
**	                                   removed.                              
**	                                   -DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF
**	                                   register: Bit fields                  
**	                                   WRITE_CHANNEL4_WEIGHT,                
**	                                   WRITE_CHANNEL5_WEIGHT,                
**	                                   WRITE_CHANNEL6_WEIGHT,                
**	                                   WRITE_CHANNEL7_WEIGHT are removed.    
**	                                   -DMA_READ_ENGINE_EN_OFF register: Bit 
**	                                   fields DMA_READ_ENGINE_EN_HSHAKE_CH4, 
**	                                   DMA_READ_ENGINE_EN_HSHAKE_CH5,        
**	                                   DMA_READ_ENGINE_EN_HSHAKE_CH6,        
**	                                   DMA_READ_ENGINE_EN_HSHAKE_CH7 are     
**	                                   removed.                              
**	                                   -DMA_WRITE_INT_STATUS_OFF register:   
**	                                   Size of bit fields WR_DONE_INT_STATUS,
**	                                   WR_ABORT_INT_STATUS is changed from   
**	                                   8 to 4.                               
**	                                   -DMA_WRITE_ERR_STATUS_OFF register:   
**	                                   Size of bit field APP_READ_ERR_DETECT 
**	                                   is changed from 8 to 4.               
**	                                   -DMA_READ_CHANNEL_ARB_WEIGHT_HIGH_OFF,
**	                                   DMA_WRITE_CH45_IMWR_DATA_OFF,         
**	                                   DMA_WRITE_CH67_IMWR_DATA_OFF          
**	                                   registers are removed.                
**	                                   -DMA_READ_INT_STATUS_OFF register:Size
**	                                   of bit fields RD_DONE_INT_STATUS,     
**	                                   RD_ABORT_INT_STATUS is changed from   
**	                                   8 to 4.                               
**	                                   -DMA_READ_INT_CLEAR_OFF register: Size
**	                                   of bit fields RD_DONE_INT_CLEAR,      
**	                                   RD_ABORT_INT_CLEAR is changed from    
**	                                   8 to 4.                               
**	                                   -DMA_DMA_READ_ERR_STATUS_LOW_OFF      
**	                                   register: Size of bit field           
**	                                   APP_WR_ERR_DETECT is changed from     
**	                                   8 to 4.                               
**	                                   -DMA_READ_ERR_STATUS_HIGH_OFF register
**	                                   : Size of bit fields UNSUPPORTED_REQ, 
**	                                   CPL_ABORT, CPL_TIMEOUT,               
**	                                   DATA_POSITIONING are changed from     
**	                                   8 to 4.                               
**	                                   -DMA_READ_CH45_IMWR_DATA_OFF,         
**	                                   DMA_READ_CH67_IMWR_DATA_OFF,          
**	                                   DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF, 
**	                                   DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF   
**	                                   registers are removed.                
**	                                   -Position of registers                
**	                                   DMA_LLP_HIGH_OFF_RDCH_0,              
**	                                   DMA_LLP_HIGH_OFF_RDCH_1,              
**	                                   DMA_LLP_HIGH_OFF_RDCH_2 is changed.   
**	                                   9)PMC-                                
**	                                   -NCSPD_CTL register: Bit fields       
**	                                   NCSPD_CTL10, NCSPD_CTL11, NCSPD_CTL17,
**	                                   NCSPD_CTL18, NCSPD_CTL21, NCSPD_CTL22,
**	                                   NCSPD_CTL23, NCSPD_CTL28, NCSPD_CTL29,
**	                                   NCSPD_CTL30, NCSPD_CTL31 are added.   
**	                                   -NCSPD_STAT register: Bit fields      
**	                                   NCSPD_STAT10, NCSPD_STAT11,           
**	                                   NCSPD_STAT17, NCSPD_STAT18,           
**	                                   NCSPD_STAT21, NCSPD_STAT22,           
**	                                   NCSPD_STAT23, NCSPD_STAT28,           
**	                                   NCSPD_STAT29, NCSPD_STAT30,           
**	                                   NCSPD_STAT31 are added.               
**	                                   -NCSPD_EVENT_CAPTURE register: Bit    
**	                                   fields NCSPD_EVENT_CAPTURE10,         
**	                                   NCSPD_EVENT_CAPTURE11,                
**	                                   NCSPD_EVENT_CAPTURE17,                
**	                                   NCSPD_EVENT_CAPTURE18,                
**	                                   NCSPD_EVENT_CAPTURE21,                
**	                                   NCSPD_EVENT_CAPTURE22,                
**	                                   NCSPD_EVENT_CAPTURE23,                
**	                                   NCSPD_EVENT_CAPTURE28,                
**	                                   NCSPD_EVENT_CAPTURE29,                
**	                                   NCSPD_EVENT_CAPTURE30,                
**	                                   NCSPD_EVENT_CAPTURE31 are added.      
**	                                   10)QuadSPI-                           
**	                                   -RBCT register: Bit field RXBRD is    
**	                                   removed.                              
**	                                   -FR register: Bit field AIBSEF is     
**	                                   added.                                
**	                                   -RSER register: Bit field TBFIE is    
**	                                   added.                                
**	                                   11)SPI_5-                             
**	                                   -MCR register: Size of bit field PCSIS
**	                                   is changed from 8 to 5.               
**	                                   -PUSHR_PUSHR register: Size of        
**	                                   bitfield PCS is changed from 8 to 5.  
**	                                   12)SRC_GPR module is added.           
**	                                   13)SerDes_DMA_PCIe_1-                 
**	                                   -In DMA_WRITE_ENGINE_EN_OFF register: 
**	                                   Bit fields                            
**	                                   DMA_WRITE_ENGINE_EN_HSHAKE_CH4,       
**	                                   DMA_WRITE_ENGINE_EN_HSHAKE_CH5,       
**	                                   DMA_WRITE_ENGINE_EN_HSHAKE_CH6,       
**	                                   DMA_WRITE_ENGINE_EN_HSHAKE_CH7 are    
**	                                   removed.                              
**	                                   -DMA_WRITE_CHANNEL_ARB_WEIGHT_HIGH_OFF
**	                                   register: Bit fields                  
**	                                   WRITE_CHANNEL4_WEIGHT,                
**	                                   WRITE_CHANNEL5_WEIGHT,                
**	                                   WRITE_CHANNEL6_WEIGHT,                
**	                                   WRITE_CHANNEL7_WEIGHT are removed.    
**	                                   -DMA_READ_ENGINE_EN_OFF register: Bit 
**	                                   fields DMA_READ_ENGINE_EN_HSHAKE_CH4, 
**	                                   DMA_READ_ENGINE_EN_HSHAKE_CH5,        
**	                                   DMA_READ_ENGINE_EN_HSHAKE_CH6,        
**	                                   DMA_READ_ENGINE_EN_HSHAKE_CH7 are     
**	                                   removed.                              
**	                                   -READ_CHANNEL_ARB_WEIGHT_HIGH_OFF     
**	                                   register is removed.                  
**	                                   -DMA_WRITE_INT_STATUS_OFF register:   
**	                                   Size of bit fields WR_DONE_INT_STATUS,
**	                                   WR_ABORT_INT_STATUS is changed from   
**	                                   8 to 4.                               
**	                                   -DMA_WRITE_ERR_STATUS_OFF register:   
**	                                   Size of bit fields APP_READ_ERR_DETECT
**	                                   , LINKLIST_ELEMENT_FETCH_ERR_DETECT is
**	                                   changed from 8 to 4.                  
**	                                   -DMA_WRITE_CH45_IMWR_DATA_OFF,        
**	                                   DMA_WRITE_CH67_IMWR_DATA_OFF registers
**	                                   are removed.                          
**	                                   -DMA_READ_INT_STATUS_OFF register:    
**	                                   Size of bit field RD_DONE_INT_STATUS, 
**	                                   RD_ABORT_INT_STATUS is changed from   
**	                                   8 to 4.                               
**	                                   -DMA_READ_INT_CLEAR_OFF register:     
**	                                   Size of bit fields RD_DONE_INT_CLEAR, 
**	                                   RD_ABORT_INT_CLEAR is changed from    
**	                                   8 to 4.                               
**	                                   -DMA_READ_ERR_STATUS_LOW_OFF register:
**	                                   Size of bit fileds APP_WR_ERR_DETECT, 
**	                                   LINK_LIST_ELEMENT_FETCH_ERR_DETECT is 
**	                                   changed from 8 to 4.                  
**	                                   -DMA_READ_ERR_STATUS_HIGH_OFF register
**	                                   : Size of bit fileds UNSUPPORTED_REQ, 
**	                                   CPL_ABORT, CPL_TIMEOUT,               
**	                                   DATA_POSITIONING is changed from      
**	                                   8 to 4.                               
**	                                   -DMA_READ_CH45_IMWR_DATA_OFF,         
**	                                   DMA_READ_CH67_IMWR_DATA_OFF,          
**	                                   DMA_WRITE_ENGINE_HSHAKE_CNT_HIGH_OFF, 
**	                                   DMA_READ_ENGINE_HSHAKE_CNT_HIGH_OFF   
**	                                   registers are removed.                
**	                                   -Position of registers                
**	                                   DMA_LLP_HIGH_OFF_RDCH_0,              
**	                                   DMA_LLP_HIGH_OFF_RDCH_1 and           
**	                                   DMA_LLP_HIGH_OFF_RDCH_2 are changed.  
**	                                   14)USDHC-                             
**	                                   -CMD_XFR_TYP register: Bit fields     
**	                                   DMAEN, BCEN, AC12EN, DDR_EN, MSBSEL,  
**	                                   NIBBLE_POS, AC23EN are added.         
**	                                   -PRES_STATE register: Bit fields      
**	                                   IPGOFF, HCKOFF, PEROFF, SDOFF are     
**	                                   removed.                              
**	                                   15)XRDC-                              
**	                                   -MRCN array is changed from 1D to 2D. 
**                                  
** ###################################################################
*/

/*!
 * @file S32G274A.h
 * @version 2.1
 * @date 2022-06-27
 * @brief Peripheral Access Layer for S32G274A
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/* Prevention from multiple including the same memory map */
#if !defined(S32G274A_H_)  /* Check if memory map has not been already included */
#define S32G274A_H_

/* ----------------------------------------------------------------------------
   -- IP Header Files
   ---------------------------------------------------------------------------- */

/* IP Header Files List */
#include "S32G274A_ADC.h"
#include "S32G274A_ATP.h"
#include "S32G274A_BOOT.h"
#include "S32G274A_CAIU.h"
#include "S32G274A_CCTI_FAULT_CTRL.h"
#include "S32G274A_CM7_GPR.h"
#include "S32G274A_CMIU.h"
#include "S32G274A_CMU_FC.h"
#include "S32G274A_CMU_FM.h"
#include "S32G274A_CRC.h"
#include "S32G274A_CSR.h"
#include "S32G274A_CTU.h"
#include "S32G274A_DDR_GPR.h"
#include "S32G274A_DDR_SUBSYSTEM.h"
#include "S32G274A_DFS.h"
#include "S32G274A_DIRU.h"
#include "S32G274A_DMA.h"
#include "S32G274A_DMAMUX.h"
#include "S32G274A_DMA_CRC.h"
#include "S32G274A_DMA_TCD.h"
#include "S32G274A_EIM.h"
#include "S32G274A_ERM.h"
#include "S32G274A_FCCU.h"
#include "S32G274A_FLEXCAN.h"
#include "S32G274A_FLEXRAY.h"
#include "S32G274A_FSC.h"
#include "S32G274A_FTM.h"
#include "S32G274A_FXOSC.h"
#include "S32G274A_GMAC.h"
#include "S32G274A_I2C.h"
#include "S32G274A_JDC.h"
#include "S32G274A_LINFLEXD.h"
#include "S32G274A_LLCE_CORE_TO_CORE.h"
#include "S32G274A_LLCE_SYSCTRL.h"
#include "S32G274A_MCM.h"
#include "S32G274A_MC_CGM.h"
#include "S32G274A_MC_CGM_1.h"
#include "S32G274A_MC_CGM_2.h"
#include "S32G274A_MC_ME.h"
#include "S32G274A_MC_RGM.h"
#include "S32G274A_MDM_AP.h"
#include "S32G274A_MPU.h"
#include "S32G274A_MSCM.h"
#include "S32G274A_MU.h"
#include "S32G274A_NCBUID_RESET_VALUE.h"
#include "S32G274A_NVIC.h"
#include "S32G274A_OCOTP.h"
#include "S32G274A_OCOTP_GPR.h"
#include "S32G274A_PCIE_DMA.h"
#include "S32G274A_PCIE_EP.h"
#include "S32G274A_PCIE_RC.h"
#include "S32G274A_PERF_REGISTERS.h"
#include "S32G274A_PIT.h"
#include "S32G274A_PLLDIG.h"
#include "S32G274A_PMC.h"
#include "S32G274A_PMUEVENTOBSERVER.h"
#include "S32G274A_QUADSPI.h"
#include "S32G274A_QUADSPI_ARDB.h"
#include "S32G274A_REG_PROT.h"
#include "S32G274A_RESET.h"
#include "S32G274A_RTC.h"
#include "S32G274A_S32G_GPR.h"
#include "S32G274A_S32G_STDBY_GPR.h"
#include "S32G274A_SBSW.h"
#include "S32G274A_SCB.h"
#include "S32G274A_SECURITY.h"
#include "S32G274A_SELFTEST_GPR.h"
#include "S32G274A_SELFTEST_GPR_TOP.h"
#include "S32G274A_SEMA42.h"
#include "S32G274A_SERDES_DMA_PCIE_1.h"
#include "S32G274A_SERDES_EP_PCIE_1.h"
#include "S32G274A_SERDES_GPR.h"
#include "S32G274A_SERDES_RC_PCIE_1.h"
#include "S32G274A_SERDES_SS.h"
#include "S32G274A_SERDES_SS_PCIE_1.h"
#include "S32G274A_SIUL2.h"
#include "S32G274A_SPI.h"
#include "S32G274A_SRAMC.h"
#include "S32G274A_SRC.h"
#include "S32G274A_SRC_GPR.h"
#include "S32G274A_STCU2.h"
#include "S32G274A_STM.h"
#include "S32G274A_SWT.h"
#include "S32G274A_SYSTICK.h"
#include "S32G274A_TMU.h"
#include "S32G274A_UMCTL2_MP.h"
#include "S32G274A_UMCTL2_REGS.h"
#include "S32G274A_UOTG.h"
#include "S32G274A_UOTGNC.h"
#include "S32G274A_USDHC.h"
#include "S32G274A_WKPU.h"
#include "S32G274A_XRDC.h"
#include "S32G274A_XRDC_0.h"

#endif  /* #if !defined(S32G274A_H_) */
