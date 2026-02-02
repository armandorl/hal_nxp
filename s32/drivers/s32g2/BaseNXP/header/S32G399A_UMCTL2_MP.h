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
** ###################################################################
*/

/*!
 * @file S32G399A_UMCTL2_MP.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_UMCTL2_MP
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.3, local typedef not referenced
* The SoC header defines typedef for all modules.
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.5, local macro not referenced
* The SoC header defines macros for all modules and registers.
*
* @section [global]
* Violates MISRA 2012 Advisory Directive 4.9, Function-like macro
* These are generated macros used for accessing the bit-fields from registers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 21.1, defined macro '__I' is reserved to the compiler
* This type qualifier is needed to ensure correct I/O access and addressing.
*/

/* Prevention from multiple including the same memory map */
#if !defined(S32G399A_UMCTL2_MP_H_)  /* Check if memory map has not been already included */
#define S32G399A_UMCTL2_MP_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- UMCTL2_MP Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UMCTL2_MP_Peripheral_Access_Layer UMCTL2_MP Peripheral Access Layer
 * @{
 */

/** UMCTL2_MP - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[4];
  __I  uint32_t PSTAT;                             /**< Port Status Register, offset: 0x4 */
  __IO uint32_t PCCFG;                             /**< Port Common Configuration Register, offset: 0x8 */
  __IO uint32_t PCFGR_0;                           /**< Port n Configuration Read Register, offset: 0xC */
  __IO uint32_t PCFGW_0;                           /**< Port n Configuration Write Register, offset: 0x10 */
  uint8_t RESERVED_1[132];
  __IO uint32_t PCTRL_0;                           /**< Port n Control Register, offset: 0x98 */
  __IO uint32_t PCFGQOS0_0;                        /**< Port n Read QoS Configuration Register 0, offset: 0x9C */
  __IO uint32_t PCFGQOS1_0;                        /**< Port n Read QoS Configuration Register 1, offset: 0xA0 */
  __IO uint32_t PCFGWQOS0_0;                       /**< Port n Write QoS Configuration Register 0, offset: 0xA4 */
  __IO uint32_t PCFGWQOS1_0;                       /**< Port n Write QoS Configuration Register 1, offset: 0xA8 */
  uint8_t RESERVED_2[16];
  __IO uint32_t PCFGR_1;                           /**< Port n Configuration Read Register, offset: 0xBC */
  __IO uint32_t PCFGW_1;                           /**< Port n Configuration Write Register, offset: 0xC0 */
  uint8_t RESERVED_3[132];
  __IO uint32_t PCTRL_1;                           /**< Port n Control Register, offset: 0x148 */
  __IO uint32_t PCFGQOS0_1;                        /**< Port n Read QoS Configuration Register 0, offset: 0x14C */
  __IO uint32_t PCFGQOS1_1;                        /**< Port n Read QoS Configuration Register 1, offset: 0x150 */
  __IO uint32_t PCFGWQOS0_1;                       /**< Port n Write QoS Configuration Register 0, offset: 0x154 */
  __IO uint32_t PCFGWQOS1_1;                       /**< Port n Write QoS Configuration Register 1, offset: 0x158 */
  uint8_t RESERVED_4[16];
  __IO uint32_t PCFGR_2;                           /**< Port n Configuration Read Register, offset: 0x16C */
  __IO uint32_t PCFGW_2;                           /**< Port n Configuration Write Register, offset: 0x170 */
  uint8_t RESERVED_5[132];
  __IO uint32_t PCTRL_2;                           /**< Port n Control Register, offset: 0x1F8 */
  __IO uint32_t PCFGQOS0_2;                        /**< Port n Read QoS Configuration Register 0, offset: 0x1FC */
  __IO uint32_t PCFGQOS1_2;                        /**< Port n Read QoS Configuration Register 1, offset: 0x200 */
  __IO uint32_t PCFGWQOS0_2;                       /**< Port n Write QoS Configuration Register 0, offset: 0x204 */
  __IO uint32_t PCFGWQOS1_2;                       /**< Port n Write QoS Configuration Register 1, offset: 0x208 */
  uint8_t RESERVED_6[2336];
  __IO uint32_t SBRCTL;                            /**< Scrubber Control Register, offset: 0xB2C */
  __I  uint32_t SBRSTAT;                           /**< Scrubber Status Register, offset: 0xB30 */
  __IO uint32_t SBRWDATA0;                         /**< Scrubber Write Data Pattern 0, offset: 0xB34 */
  uint8_t RESERVED_7[8];
  __IO uint32_t SBRSTART0;                         /**< Scrubber Start Address Mask Register 0, offset: 0xB40 */
  __IO uint32_t SBRSTART1;                         /**< Scrubber Start Address Mask Register 1, offset: 0xB44 */
  __IO uint32_t SBRRANGE0;                         /**< Scrubber Address Range Mask Register 0, offset: 0xB48 */
  __IO uint32_t SBRRANGE1;                         /**< Scrubber Address Range Mask Register 1, offset: 0xB4C */
  uint8_t RESERVED_8[168];
  __I  uint32_t UMCTL2_VER_NUMBER;                 /**< UMCTL2 Version Number Register, offset: 0xBF8 */
  __I  uint32_t UMCTL2_VER_TYPE;                   /**< UMCTL2 Version Type Register, offset: 0xBFC */
} UMCTL2_MP_Type, *UMCTL2_MP_MemMapPtr;

/** Number of instances of the UMCTL2_MP module. */
#define UMCTL2_MP_INSTANCE_COUNT                 (1u)

/* UMCTL2_MP - Peripheral instance base addresses */
/** Peripheral UMCTL2_MP base address */
#define IP_UMCTL2_MP_BASE                        (0x403C03F8u)
/** Peripheral UMCTL2_MP base pointer */
#define IP_UMCTL2_MP                             ((UMCTL2_MP_Type *)IP_UMCTL2_MP_BASE)
/** Array initializer of UMCTL2_MP peripheral base addresses */
#define IP_UMCTL2_MP_BASE_ADDRS                  { IP_UMCTL2_MP_BASE }
/** Array initializer of UMCTL2_MP peripheral base pointers */
#define IP_UMCTL2_MP_BASE_PTRS                   { IP_UMCTL2_MP }

/* ----------------------------------------------------------------------------
   -- UMCTL2_MP Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UMCTL2_MP_Register_Masks UMCTL2_MP Register Masks
 * @{
 */

/*! @name PSTAT - Port Status Register */
/*! @{ */

#define UMCTL2_MP_PSTAT_rd_port_busy_0_MASK      (0x1U)
#define UMCTL2_MP_PSTAT_rd_port_busy_0_SHIFT     (0U)
#define UMCTL2_MP_PSTAT_rd_port_busy_0_WIDTH     (1U)
#define UMCTL2_MP_PSTAT_rd_port_busy_0(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PSTAT_rd_port_busy_0_SHIFT)) & UMCTL2_MP_PSTAT_rd_port_busy_0_MASK)

#define UMCTL2_MP_PSTAT_rd_port_busy_1_MASK      (0x2U)
#define UMCTL2_MP_PSTAT_rd_port_busy_1_SHIFT     (1U)
#define UMCTL2_MP_PSTAT_rd_port_busy_1_WIDTH     (1U)
#define UMCTL2_MP_PSTAT_rd_port_busy_1(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PSTAT_rd_port_busy_1_SHIFT)) & UMCTL2_MP_PSTAT_rd_port_busy_1_MASK)

#define UMCTL2_MP_PSTAT_rd_port_busy_2_MASK      (0x4U)
#define UMCTL2_MP_PSTAT_rd_port_busy_2_SHIFT     (2U)
#define UMCTL2_MP_PSTAT_rd_port_busy_2_WIDTH     (1U)
#define UMCTL2_MP_PSTAT_rd_port_busy_2(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PSTAT_rd_port_busy_2_SHIFT)) & UMCTL2_MP_PSTAT_rd_port_busy_2_MASK)

#define UMCTL2_MP_PSTAT_wr_port_busy_0_MASK      (0x10000U)
#define UMCTL2_MP_PSTAT_wr_port_busy_0_SHIFT     (16U)
#define UMCTL2_MP_PSTAT_wr_port_busy_0_WIDTH     (1U)
#define UMCTL2_MP_PSTAT_wr_port_busy_0(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PSTAT_wr_port_busy_0_SHIFT)) & UMCTL2_MP_PSTAT_wr_port_busy_0_MASK)

#define UMCTL2_MP_PSTAT_wr_port_busy_1_MASK      (0x20000U)
#define UMCTL2_MP_PSTAT_wr_port_busy_1_SHIFT     (17U)
#define UMCTL2_MP_PSTAT_wr_port_busy_1_WIDTH     (1U)
#define UMCTL2_MP_PSTAT_wr_port_busy_1(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PSTAT_wr_port_busy_1_SHIFT)) & UMCTL2_MP_PSTAT_wr_port_busy_1_MASK)

#define UMCTL2_MP_PSTAT_wr_port_busy_2_MASK      (0x40000U)
#define UMCTL2_MP_PSTAT_wr_port_busy_2_SHIFT     (18U)
#define UMCTL2_MP_PSTAT_wr_port_busy_2_WIDTH     (1U)
#define UMCTL2_MP_PSTAT_wr_port_busy_2(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PSTAT_wr_port_busy_2_SHIFT)) & UMCTL2_MP_PSTAT_wr_port_busy_2_MASK)
/*! @} */

/*! @name PCCFG - Port Common Configuration Register */
/*! @{ */

#define UMCTL2_MP_PCCFG_go2critical_en_MASK      (0x1U)
#define UMCTL2_MP_PCCFG_go2critical_en_SHIFT     (0U)
#define UMCTL2_MP_PCCFG_go2critical_en_WIDTH     (1U)
#define UMCTL2_MP_PCCFG_go2critical_en(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCCFG_go2critical_en_SHIFT)) & UMCTL2_MP_PCCFG_go2critical_en_MASK)

#define UMCTL2_MP_PCCFG_pagematch_limit_MASK     (0x10U)
#define UMCTL2_MP_PCCFG_pagematch_limit_SHIFT    (4U)
#define UMCTL2_MP_PCCFG_pagematch_limit_WIDTH    (1U)
#define UMCTL2_MP_PCCFG_pagematch_limit(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCCFG_pagematch_limit_SHIFT)) & UMCTL2_MP_PCCFG_pagematch_limit_MASK)

#define UMCTL2_MP_PCCFG_bl_exp_mode_MASK         (0x100U)
#define UMCTL2_MP_PCCFG_bl_exp_mode_SHIFT        (8U)
#define UMCTL2_MP_PCCFG_bl_exp_mode_WIDTH        (1U)
#define UMCTL2_MP_PCCFG_bl_exp_mode(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCCFG_bl_exp_mode_SHIFT)) & UMCTL2_MP_PCCFG_bl_exp_mode_MASK)
/*! @} */

/*! @name PCFGR_0 - Port n Configuration Read Register */
/*! @{ */

#define UMCTL2_MP_PCFGR_0_rd_port_priority_MASK  (0x3FFU)
#define UMCTL2_MP_PCFGR_0_rd_port_priority_SHIFT (0U)
#define UMCTL2_MP_PCFGR_0_rd_port_priority_WIDTH (10U)
#define UMCTL2_MP_PCFGR_0_rd_port_priority(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_0_rd_port_priority_SHIFT)) & UMCTL2_MP_PCFGR_0_rd_port_priority_MASK)

#define UMCTL2_MP_PCFGR_0_rd_port_aging_en_MASK  (0x1000U)
#define UMCTL2_MP_PCFGR_0_rd_port_aging_en_SHIFT (12U)
#define UMCTL2_MP_PCFGR_0_rd_port_aging_en_WIDTH (1U)
#define UMCTL2_MP_PCFGR_0_rd_port_aging_en(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_0_rd_port_aging_en_SHIFT)) & UMCTL2_MP_PCFGR_0_rd_port_aging_en_MASK)

#define UMCTL2_MP_PCFGR_0_rd_port_urgent_en_MASK (0x2000U)
#define UMCTL2_MP_PCFGR_0_rd_port_urgent_en_SHIFT (13U)
#define UMCTL2_MP_PCFGR_0_rd_port_urgent_en_WIDTH (1U)
#define UMCTL2_MP_PCFGR_0_rd_port_urgent_en(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_0_rd_port_urgent_en_SHIFT)) & UMCTL2_MP_PCFGR_0_rd_port_urgent_en_MASK)

#define UMCTL2_MP_PCFGR_0_rd_port_pagematch_en_MASK (0x4000U)
#define UMCTL2_MP_PCFGR_0_rd_port_pagematch_en_SHIFT (14U)
#define UMCTL2_MP_PCFGR_0_rd_port_pagematch_en_WIDTH (1U)
#define UMCTL2_MP_PCFGR_0_rd_port_pagematch_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_0_rd_port_pagematch_en_SHIFT)) & UMCTL2_MP_PCFGR_0_rd_port_pagematch_en_MASK)

#define UMCTL2_MP_PCFGR_0_rdwr_ordered_en_MASK   (0x10000U)
#define UMCTL2_MP_PCFGR_0_rdwr_ordered_en_SHIFT  (16U)
#define UMCTL2_MP_PCFGR_0_rdwr_ordered_en_WIDTH  (1U)
#define UMCTL2_MP_PCFGR_0_rdwr_ordered_en(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_0_rdwr_ordered_en_SHIFT)) & UMCTL2_MP_PCFGR_0_rdwr_ordered_en_MASK)
/*! @} */

/*! @name PCFGW_0 - Port n Configuration Write Register */
/*! @{ */

#define UMCTL2_MP_PCFGW_0_wr_port_priority_MASK  (0x3FFU)
#define UMCTL2_MP_PCFGW_0_wr_port_priority_SHIFT (0U)
#define UMCTL2_MP_PCFGW_0_wr_port_priority_WIDTH (10U)
#define UMCTL2_MP_PCFGW_0_wr_port_priority(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGW_0_wr_port_priority_SHIFT)) & UMCTL2_MP_PCFGW_0_wr_port_priority_MASK)

#define UMCTL2_MP_PCFGW_0_wr_port_aging_en_MASK  (0x1000U)
#define UMCTL2_MP_PCFGW_0_wr_port_aging_en_SHIFT (12U)
#define UMCTL2_MP_PCFGW_0_wr_port_aging_en_WIDTH (1U)
#define UMCTL2_MP_PCFGW_0_wr_port_aging_en(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGW_0_wr_port_aging_en_SHIFT)) & UMCTL2_MP_PCFGW_0_wr_port_aging_en_MASK)

#define UMCTL2_MP_PCFGW_0_wr_port_urgent_en_MASK (0x2000U)
#define UMCTL2_MP_PCFGW_0_wr_port_urgent_en_SHIFT (13U)
#define UMCTL2_MP_PCFGW_0_wr_port_urgent_en_WIDTH (1U)
#define UMCTL2_MP_PCFGW_0_wr_port_urgent_en(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGW_0_wr_port_urgent_en_SHIFT)) & UMCTL2_MP_PCFGW_0_wr_port_urgent_en_MASK)

#define UMCTL2_MP_PCFGW_0_wr_port_pagematch_en_MASK (0x4000U)
#define UMCTL2_MP_PCFGW_0_wr_port_pagematch_en_SHIFT (14U)
#define UMCTL2_MP_PCFGW_0_wr_port_pagematch_en_WIDTH (1U)
#define UMCTL2_MP_PCFGW_0_wr_port_pagematch_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGW_0_wr_port_pagematch_en_SHIFT)) & UMCTL2_MP_PCFGW_0_wr_port_pagematch_en_MASK)
/*! @} */

/*! @name PCTRL_0 - Port n Control Register */
/*! @{ */

#define UMCTL2_MP_PCTRL_0_port_en_MASK           (0x1U)
#define UMCTL2_MP_PCTRL_0_port_en_SHIFT          (0U)
#define UMCTL2_MP_PCTRL_0_port_en_WIDTH          (1U)
#define UMCTL2_MP_PCTRL_0_port_en(x)             (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCTRL_0_port_en_SHIFT)) & UMCTL2_MP_PCTRL_0_port_en_MASK)
/*! @} */

/*! @name PCFGQOS0_0 - Port n Read QoS Configuration Register 0 */
/*! @{ */

#define UMCTL2_MP_PCFGQOS0_0_rqos_map_level1_MASK (0xFU)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_level1_SHIFT (0U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_level1_WIDTH (4U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_level1(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_0_rqos_map_level1_SHIFT)) & UMCTL2_MP_PCFGQOS0_0_rqos_map_level1_MASK)

#define UMCTL2_MP_PCFGQOS0_0_rqos_map_level2_MASK (0xF00U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_level2_SHIFT (8U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_level2_WIDTH (4U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_level2(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_0_rqos_map_level2_SHIFT)) & UMCTL2_MP_PCFGQOS0_0_rqos_map_level2_MASK)

#define UMCTL2_MP_PCFGQOS0_0_rqos_map_region0_MASK (0x30000U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_region0_SHIFT (16U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_region0_WIDTH (2U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_region0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_0_rqos_map_region0_SHIFT)) & UMCTL2_MP_PCFGQOS0_0_rqos_map_region0_MASK)

#define UMCTL2_MP_PCFGQOS0_0_rqos_map_region1_MASK (0x300000U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_region1_SHIFT (20U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_region1_WIDTH (2U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_region1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_0_rqos_map_region1_SHIFT)) & UMCTL2_MP_PCFGQOS0_0_rqos_map_region1_MASK)

#define UMCTL2_MP_PCFGQOS0_0_rqos_map_region2_MASK (0x3000000U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_region2_SHIFT (24U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_region2_WIDTH (2U)
#define UMCTL2_MP_PCFGQOS0_0_rqos_map_region2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_0_rqos_map_region2_SHIFT)) & UMCTL2_MP_PCFGQOS0_0_rqos_map_region2_MASK)
/*! @} */

/*! @name PCFGQOS1_0 - Port n Read QoS Configuration Register 1 */
/*! @{ */

#define UMCTL2_MP_PCFGQOS1_0_rqos_map_timeoutb_MASK (0x7FFU)
#define UMCTL2_MP_PCFGQOS1_0_rqos_map_timeoutb_SHIFT (0U)
#define UMCTL2_MP_PCFGQOS1_0_rqos_map_timeoutb_WIDTH (11U)
#define UMCTL2_MP_PCFGQOS1_0_rqos_map_timeoutb(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS1_0_rqos_map_timeoutb_SHIFT)) & UMCTL2_MP_PCFGQOS1_0_rqos_map_timeoutb_MASK)

#define UMCTL2_MP_PCFGQOS1_0_rqos_map_timeoutr_MASK (0x7FF0000U)
#define UMCTL2_MP_PCFGQOS1_0_rqos_map_timeoutr_SHIFT (16U)
#define UMCTL2_MP_PCFGQOS1_0_rqos_map_timeoutr_WIDTH (11U)
#define UMCTL2_MP_PCFGQOS1_0_rqos_map_timeoutr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS1_0_rqos_map_timeoutr_SHIFT)) & UMCTL2_MP_PCFGQOS1_0_rqos_map_timeoutr_MASK)
/*! @} */

/*! @name PCFGWQOS0_0 - Port n Write QoS Configuration Register 0 */
/*! @{ */

#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_level1_MASK (0xFU)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_level1_SHIFT (0U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_level1_WIDTH (4U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_level1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_0_wqos_map_level1_SHIFT)) & UMCTL2_MP_PCFGWQOS0_0_wqos_map_level1_MASK)

#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_level2_MASK (0xF00U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_level2_SHIFT (8U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_level2_WIDTH (4U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_level2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_0_wqos_map_level2_SHIFT)) & UMCTL2_MP_PCFGWQOS0_0_wqos_map_level2_MASK)

#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_region0_MASK (0x30000U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_region0_SHIFT (16U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_region0_WIDTH (2U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_region0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_0_wqos_map_region0_SHIFT)) & UMCTL2_MP_PCFGWQOS0_0_wqos_map_region0_MASK)

#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_region1_MASK (0x300000U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_region1_SHIFT (20U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_region1_WIDTH (2U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_region1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_0_wqos_map_region1_SHIFT)) & UMCTL2_MP_PCFGWQOS0_0_wqos_map_region1_MASK)

#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_region2_MASK (0x3000000U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_region2_SHIFT (24U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_region2_WIDTH (2U)
#define UMCTL2_MP_PCFGWQOS0_0_wqos_map_region2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_0_wqos_map_region2_SHIFT)) & UMCTL2_MP_PCFGWQOS0_0_wqos_map_region2_MASK)
/*! @} */

/*! @name PCFGWQOS1_0 - Port n Write QoS Configuration Register 1 */
/*! @{ */

#define UMCTL2_MP_PCFGWQOS1_0_wqos_map_timeout1_MASK (0x7FFU)
#define UMCTL2_MP_PCFGWQOS1_0_wqos_map_timeout1_SHIFT (0U)
#define UMCTL2_MP_PCFGWQOS1_0_wqos_map_timeout1_WIDTH (11U)
#define UMCTL2_MP_PCFGWQOS1_0_wqos_map_timeout1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS1_0_wqos_map_timeout1_SHIFT)) & UMCTL2_MP_PCFGWQOS1_0_wqos_map_timeout1_MASK)

#define UMCTL2_MP_PCFGWQOS1_0_wqos_map_timeout2_MASK (0x7FF0000U)
#define UMCTL2_MP_PCFGWQOS1_0_wqos_map_timeout2_SHIFT (16U)
#define UMCTL2_MP_PCFGWQOS1_0_wqos_map_timeout2_WIDTH (11U)
#define UMCTL2_MP_PCFGWQOS1_0_wqos_map_timeout2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS1_0_wqos_map_timeout2_SHIFT)) & UMCTL2_MP_PCFGWQOS1_0_wqos_map_timeout2_MASK)
/*! @} */

/*! @name PCFGR_1 - Port n Configuration Read Register */
/*! @{ */

#define UMCTL2_MP_PCFGR_1_rd_port_priority_MASK  (0x3FFU)
#define UMCTL2_MP_PCFGR_1_rd_port_priority_SHIFT (0U)
#define UMCTL2_MP_PCFGR_1_rd_port_priority_WIDTH (10U)
#define UMCTL2_MP_PCFGR_1_rd_port_priority(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_1_rd_port_priority_SHIFT)) & UMCTL2_MP_PCFGR_1_rd_port_priority_MASK)

#define UMCTL2_MP_PCFGR_1_rd_port_aging_en_MASK  (0x1000U)
#define UMCTL2_MP_PCFGR_1_rd_port_aging_en_SHIFT (12U)
#define UMCTL2_MP_PCFGR_1_rd_port_aging_en_WIDTH (1U)
#define UMCTL2_MP_PCFGR_1_rd_port_aging_en(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_1_rd_port_aging_en_SHIFT)) & UMCTL2_MP_PCFGR_1_rd_port_aging_en_MASK)

#define UMCTL2_MP_PCFGR_1_rd_port_urgent_en_MASK (0x2000U)
#define UMCTL2_MP_PCFGR_1_rd_port_urgent_en_SHIFT (13U)
#define UMCTL2_MP_PCFGR_1_rd_port_urgent_en_WIDTH (1U)
#define UMCTL2_MP_PCFGR_1_rd_port_urgent_en(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_1_rd_port_urgent_en_SHIFT)) & UMCTL2_MP_PCFGR_1_rd_port_urgent_en_MASK)

#define UMCTL2_MP_PCFGR_1_rd_port_pagematch_en_MASK (0x4000U)
#define UMCTL2_MP_PCFGR_1_rd_port_pagematch_en_SHIFT (14U)
#define UMCTL2_MP_PCFGR_1_rd_port_pagematch_en_WIDTH (1U)
#define UMCTL2_MP_PCFGR_1_rd_port_pagematch_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_1_rd_port_pagematch_en_SHIFT)) & UMCTL2_MP_PCFGR_1_rd_port_pagematch_en_MASK)

#define UMCTL2_MP_PCFGR_1_rdwr_ordered_en_MASK   (0x10000U)
#define UMCTL2_MP_PCFGR_1_rdwr_ordered_en_SHIFT  (16U)
#define UMCTL2_MP_PCFGR_1_rdwr_ordered_en_WIDTH  (1U)
#define UMCTL2_MP_PCFGR_1_rdwr_ordered_en(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_1_rdwr_ordered_en_SHIFT)) & UMCTL2_MP_PCFGR_1_rdwr_ordered_en_MASK)
/*! @} */

/*! @name PCFGW_1 - Port n Configuration Write Register */
/*! @{ */

#define UMCTL2_MP_PCFGW_1_wr_port_priority_MASK  (0x3FFU)
#define UMCTL2_MP_PCFGW_1_wr_port_priority_SHIFT (0U)
#define UMCTL2_MP_PCFGW_1_wr_port_priority_WIDTH (10U)
#define UMCTL2_MP_PCFGW_1_wr_port_priority(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGW_1_wr_port_priority_SHIFT)) & UMCTL2_MP_PCFGW_1_wr_port_priority_MASK)

#define UMCTL2_MP_PCFGW_1_wr_port_aging_en_MASK  (0x1000U)
#define UMCTL2_MP_PCFGW_1_wr_port_aging_en_SHIFT (12U)
#define UMCTL2_MP_PCFGW_1_wr_port_aging_en_WIDTH (1U)
#define UMCTL2_MP_PCFGW_1_wr_port_aging_en(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGW_1_wr_port_aging_en_SHIFT)) & UMCTL2_MP_PCFGW_1_wr_port_aging_en_MASK)

#define UMCTL2_MP_PCFGW_1_wr_port_urgent_en_MASK (0x2000U)
#define UMCTL2_MP_PCFGW_1_wr_port_urgent_en_SHIFT (13U)
#define UMCTL2_MP_PCFGW_1_wr_port_urgent_en_WIDTH (1U)
#define UMCTL2_MP_PCFGW_1_wr_port_urgent_en(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGW_1_wr_port_urgent_en_SHIFT)) & UMCTL2_MP_PCFGW_1_wr_port_urgent_en_MASK)

#define UMCTL2_MP_PCFGW_1_wr_port_pagematch_en_MASK (0x4000U)
#define UMCTL2_MP_PCFGW_1_wr_port_pagematch_en_SHIFT (14U)
#define UMCTL2_MP_PCFGW_1_wr_port_pagematch_en_WIDTH (1U)
#define UMCTL2_MP_PCFGW_1_wr_port_pagematch_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGW_1_wr_port_pagematch_en_SHIFT)) & UMCTL2_MP_PCFGW_1_wr_port_pagematch_en_MASK)
/*! @} */

/*! @name PCTRL_1 - Port n Control Register */
/*! @{ */

#define UMCTL2_MP_PCTRL_1_port_en_MASK           (0x1U)
#define UMCTL2_MP_PCTRL_1_port_en_SHIFT          (0U)
#define UMCTL2_MP_PCTRL_1_port_en_WIDTH          (1U)
#define UMCTL2_MP_PCTRL_1_port_en(x)             (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCTRL_1_port_en_SHIFT)) & UMCTL2_MP_PCTRL_1_port_en_MASK)
/*! @} */

/*! @name PCFGQOS0_1 - Port n Read QoS Configuration Register 0 */
/*! @{ */

#define UMCTL2_MP_PCFGQOS0_1_rqos_map_level1_MASK (0xFU)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_level1_SHIFT (0U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_level1_WIDTH (4U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_level1(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_1_rqos_map_level1_SHIFT)) & UMCTL2_MP_PCFGQOS0_1_rqos_map_level1_MASK)

#define UMCTL2_MP_PCFGQOS0_1_rqos_map_level2_MASK (0xF00U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_level2_SHIFT (8U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_level2_WIDTH (4U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_level2(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_1_rqos_map_level2_SHIFT)) & UMCTL2_MP_PCFGQOS0_1_rqos_map_level2_MASK)

#define UMCTL2_MP_PCFGQOS0_1_rqos_map_region0_MASK (0x30000U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_region0_SHIFT (16U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_region0_WIDTH (2U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_region0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_1_rqos_map_region0_SHIFT)) & UMCTL2_MP_PCFGQOS0_1_rqos_map_region0_MASK)

#define UMCTL2_MP_PCFGQOS0_1_rqos_map_region1_MASK (0x300000U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_region1_SHIFT (20U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_region1_WIDTH (2U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_region1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_1_rqos_map_region1_SHIFT)) & UMCTL2_MP_PCFGQOS0_1_rqos_map_region1_MASK)

#define UMCTL2_MP_PCFGQOS0_1_rqos_map_region2_MASK (0x3000000U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_region2_SHIFT (24U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_region2_WIDTH (2U)
#define UMCTL2_MP_PCFGQOS0_1_rqos_map_region2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_1_rqos_map_region2_SHIFT)) & UMCTL2_MP_PCFGQOS0_1_rqos_map_region2_MASK)
/*! @} */

/*! @name PCFGQOS1_1 - Port n Read QoS Configuration Register 1 */
/*! @{ */

#define UMCTL2_MP_PCFGQOS1_1_rqos_map_timeoutb_MASK (0x7FFU)
#define UMCTL2_MP_PCFGQOS1_1_rqos_map_timeoutb_SHIFT (0U)
#define UMCTL2_MP_PCFGQOS1_1_rqos_map_timeoutb_WIDTH (11U)
#define UMCTL2_MP_PCFGQOS1_1_rqos_map_timeoutb(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS1_1_rqos_map_timeoutb_SHIFT)) & UMCTL2_MP_PCFGQOS1_1_rqos_map_timeoutb_MASK)

#define UMCTL2_MP_PCFGQOS1_1_rqos_map_timeoutr_MASK (0x7FF0000U)
#define UMCTL2_MP_PCFGQOS1_1_rqos_map_timeoutr_SHIFT (16U)
#define UMCTL2_MP_PCFGQOS1_1_rqos_map_timeoutr_WIDTH (11U)
#define UMCTL2_MP_PCFGQOS1_1_rqos_map_timeoutr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS1_1_rqos_map_timeoutr_SHIFT)) & UMCTL2_MP_PCFGQOS1_1_rqos_map_timeoutr_MASK)
/*! @} */

/*! @name PCFGWQOS0_1 - Port n Write QoS Configuration Register 0 */
/*! @{ */

#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_level1_MASK (0xFU)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_level1_SHIFT (0U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_level1_WIDTH (4U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_level1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_1_wqos_map_level1_SHIFT)) & UMCTL2_MP_PCFGWQOS0_1_wqos_map_level1_MASK)

#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_level2_MASK (0xF00U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_level2_SHIFT (8U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_level2_WIDTH (4U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_level2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_1_wqos_map_level2_SHIFT)) & UMCTL2_MP_PCFGWQOS0_1_wqos_map_level2_MASK)

#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_region0_MASK (0x30000U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_region0_SHIFT (16U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_region0_WIDTH (2U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_region0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_1_wqos_map_region0_SHIFT)) & UMCTL2_MP_PCFGWQOS0_1_wqos_map_region0_MASK)

#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_region1_MASK (0x300000U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_region1_SHIFT (20U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_region1_WIDTH (2U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_region1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_1_wqos_map_region1_SHIFT)) & UMCTL2_MP_PCFGWQOS0_1_wqos_map_region1_MASK)

#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_region2_MASK (0x3000000U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_region2_SHIFT (24U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_region2_WIDTH (2U)
#define UMCTL2_MP_PCFGWQOS0_1_wqos_map_region2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_1_wqos_map_region2_SHIFT)) & UMCTL2_MP_PCFGWQOS0_1_wqos_map_region2_MASK)
/*! @} */

/*! @name PCFGWQOS1_1 - Port n Write QoS Configuration Register 1 */
/*! @{ */

#define UMCTL2_MP_PCFGWQOS1_1_wqos_map_timeout1_MASK (0x7FFU)
#define UMCTL2_MP_PCFGWQOS1_1_wqos_map_timeout1_SHIFT (0U)
#define UMCTL2_MP_PCFGWQOS1_1_wqos_map_timeout1_WIDTH (11U)
#define UMCTL2_MP_PCFGWQOS1_1_wqos_map_timeout1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS1_1_wqos_map_timeout1_SHIFT)) & UMCTL2_MP_PCFGWQOS1_1_wqos_map_timeout1_MASK)

#define UMCTL2_MP_PCFGWQOS1_1_wqos_map_timeout2_MASK (0x7FF0000U)
#define UMCTL2_MP_PCFGWQOS1_1_wqos_map_timeout2_SHIFT (16U)
#define UMCTL2_MP_PCFGWQOS1_1_wqos_map_timeout2_WIDTH (11U)
#define UMCTL2_MP_PCFGWQOS1_1_wqos_map_timeout2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS1_1_wqos_map_timeout2_SHIFT)) & UMCTL2_MP_PCFGWQOS1_1_wqos_map_timeout2_MASK)
/*! @} */

/*! @name PCFGR_2 - Port n Configuration Read Register */
/*! @{ */

#define UMCTL2_MP_PCFGR_2_rd_port_priority_MASK  (0x3FFU)
#define UMCTL2_MP_PCFGR_2_rd_port_priority_SHIFT (0U)
#define UMCTL2_MP_PCFGR_2_rd_port_priority_WIDTH (10U)
#define UMCTL2_MP_PCFGR_2_rd_port_priority(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_2_rd_port_priority_SHIFT)) & UMCTL2_MP_PCFGR_2_rd_port_priority_MASK)

#define UMCTL2_MP_PCFGR_2_rd_port_aging_en_MASK  (0x1000U)
#define UMCTL2_MP_PCFGR_2_rd_port_aging_en_SHIFT (12U)
#define UMCTL2_MP_PCFGR_2_rd_port_aging_en_WIDTH (1U)
#define UMCTL2_MP_PCFGR_2_rd_port_aging_en(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_2_rd_port_aging_en_SHIFT)) & UMCTL2_MP_PCFGR_2_rd_port_aging_en_MASK)

#define UMCTL2_MP_PCFGR_2_rd_port_urgent_en_MASK (0x2000U)
#define UMCTL2_MP_PCFGR_2_rd_port_urgent_en_SHIFT (13U)
#define UMCTL2_MP_PCFGR_2_rd_port_urgent_en_WIDTH (1U)
#define UMCTL2_MP_PCFGR_2_rd_port_urgent_en(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_2_rd_port_urgent_en_SHIFT)) & UMCTL2_MP_PCFGR_2_rd_port_urgent_en_MASK)

#define UMCTL2_MP_PCFGR_2_rd_port_pagematch_en_MASK (0x4000U)
#define UMCTL2_MP_PCFGR_2_rd_port_pagematch_en_SHIFT (14U)
#define UMCTL2_MP_PCFGR_2_rd_port_pagematch_en_WIDTH (1U)
#define UMCTL2_MP_PCFGR_2_rd_port_pagematch_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_2_rd_port_pagematch_en_SHIFT)) & UMCTL2_MP_PCFGR_2_rd_port_pagematch_en_MASK)

#define UMCTL2_MP_PCFGR_2_rdwr_ordered_en_MASK   (0x10000U)
#define UMCTL2_MP_PCFGR_2_rdwr_ordered_en_SHIFT  (16U)
#define UMCTL2_MP_PCFGR_2_rdwr_ordered_en_WIDTH  (1U)
#define UMCTL2_MP_PCFGR_2_rdwr_ordered_en(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGR_2_rdwr_ordered_en_SHIFT)) & UMCTL2_MP_PCFGR_2_rdwr_ordered_en_MASK)
/*! @} */

/*! @name PCFGW_2 - Port n Configuration Write Register */
/*! @{ */

#define UMCTL2_MP_PCFGW_2_wr_port_priority_MASK  (0x3FFU)
#define UMCTL2_MP_PCFGW_2_wr_port_priority_SHIFT (0U)
#define UMCTL2_MP_PCFGW_2_wr_port_priority_WIDTH (10U)
#define UMCTL2_MP_PCFGW_2_wr_port_priority(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGW_2_wr_port_priority_SHIFT)) & UMCTL2_MP_PCFGW_2_wr_port_priority_MASK)

#define UMCTL2_MP_PCFGW_2_wr_port_aging_en_MASK  (0x1000U)
#define UMCTL2_MP_PCFGW_2_wr_port_aging_en_SHIFT (12U)
#define UMCTL2_MP_PCFGW_2_wr_port_aging_en_WIDTH (1U)
#define UMCTL2_MP_PCFGW_2_wr_port_aging_en(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGW_2_wr_port_aging_en_SHIFT)) & UMCTL2_MP_PCFGW_2_wr_port_aging_en_MASK)

#define UMCTL2_MP_PCFGW_2_wr_port_urgent_en_MASK (0x2000U)
#define UMCTL2_MP_PCFGW_2_wr_port_urgent_en_SHIFT (13U)
#define UMCTL2_MP_PCFGW_2_wr_port_urgent_en_WIDTH (1U)
#define UMCTL2_MP_PCFGW_2_wr_port_urgent_en(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGW_2_wr_port_urgent_en_SHIFT)) & UMCTL2_MP_PCFGW_2_wr_port_urgent_en_MASK)

#define UMCTL2_MP_PCFGW_2_wr_port_pagematch_en_MASK (0x4000U)
#define UMCTL2_MP_PCFGW_2_wr_port_pagematch_en_SHIFT (14U)
#define UMCTL2_MP_PCFGW_2_wr_port_pagematch_en_WIDTH (1U)
#define UMCTL2_MP_PCFGW_2_wr_port_pagematch_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGW_2_wr_port_pagematch_en_SHIFT)) & UMCTL2_MP_PCFGW_2_wr_port_pagematch_en_MASK)
/*! @} */

/*! @name PCTRL_2 - Port n Control Register */
/*! @{ */

#define UMCTL2_MP_PCTRL_2_port_en_MASK           (0x1U)
#define UMCTL2_MP_PCTRL_2_port_en_SHIFT          (0U)
#define UMCTL2_MP_PCTRL_2_port_en_WIDTH          (1U)
#define UMCTL2_MP_PCTRL_2_port_en(x)             (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCTRL_2_port_en_SHIFT)) & UMCTL2_MP_PCTRL_2_port_en_MASK)
/*! @} */

/*! @name PCFGQOS0_2 - Port n Read QoS Configuration Register 0 */
/*! @{ */

#define UMCTL2_MP_PCFGQOS0_2_rqos_map_level1_MASK (0xFU)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_level1_SHIFT (0U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_level1_WIDTH (4U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_level1(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_2_rqos_map_level1_SHIFT)) & UMCTL2_MP_PCFGQOS0_2_rqos_map_level1_MASK)

#define UMCTL2_MP_PCFGQOS0_2_rqos_map_level2_MASK (0xF00U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_level2_SHIFT (8U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_level2_WIDTH (4U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_level2(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_2_rqos_map_level2_SHIFT)) & UMCTL2_MP_PCFGQOS0_2_rqos_map_level2_MASK)

#define UMCTL2_MP_PCFGQOS0_2_rqos_map_region0_MASK (0x30000U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_region0_SHIFT (16U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_region0_WIDTH (2U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_region0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_2_rqos_map_region0_SHIFT)) & UMCTL2_MP_PCFGQOS0_2_rqos_map_region0_MASK)

#define UMCTL2_MP_PCFGQOS0_2_rqos_map_region1_MASK (0x300000U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_region1_SHIFT (20U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_region1_WIDTH (2U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_region1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_2_rqos_map_region1_SHIFT)) & UMCTL2_MP_PCFGQOS0_2_rqos_map_region1_MASK)

#define UMCTL2_MP_PCFGQOS0_2_rqos_map_region2_MASK (0x3000000U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_region2_SHIFT (24U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_region2_WIDTH (2U)
#define UMCTL2_MP_PCFGQOS0_2_rqos_map_region2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS0_2_rqos_map_region2_SHIFT)) & UMCTL2_MP_PCFGQOS0_2_rqos_map_region2_MASK)
/*! @} */

/*! @name PCFGQOS1_2 - Port n Read QoS Configuration Register 1 */
/*! @{ */

#define UMCTL2_MP_PCFGQOS1_2_rqos_map_timeoutb_MASK (0x7FFU)
#define UMCTL2_MP_PCFGQOS1_2_rqos_map_timeoutb_SHIFT (0U)
#define UMCTL2_MP_PCFGQOS1_2_rqos_map_timeoutb_WIDTH (11U)
#define UMCTL2_MP_PCFGQOS1_2_rqos_map_timeoutb(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS1_2_rqos_map_timeoutb_SHIFT)) & UMCTL2_MP_PCFGQOS1_2_rqos_map_timeoutb_MASK)

#define UMCTL2_MP_PCFGQOS1_2_rqos_map_timeoutr_MASK (0x7FF0000U)
#define UMCTL2_MP_PCFGQOS1_2_rqos_map_timeoutr_SHIFT (16U)
#define UMCTL2_MP_PCFGQOS1_2_rqos_map_timeoutr_WIDTH (11U)
#define UMCTL2_MP_PCFGQOS1_2_rqos_map_timeoutr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGQOS1_2_rqos_map_timeoutr_SHIFT)) & UMCTL2_MP_PCFGQOS1_2_rqos_map_timeoutr_MASK)
/*! @} */

/*! @name PCFGWQOS0_2 - Port n Write QoS Configuration Register 0 */
/*! @{ */

#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_level1_MASK (0xFU)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_level1_SHIFT (0U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_level1_WIDTH (4U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_level1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_2_wqos_map_level1_SHIFT)) & UMCTL2_MP_PCFGWQOS0_2_wqos_map_level1_MASK)

#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_level2_MASK (0xF00U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_level2_SHIFT (8U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_level2_WIDTH (4U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_level2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_2_wqos_map_level2_SHIFT)) & UMCTL2_MP_PCFGWQOS0_2_wqos_map_level2_MASK)

#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_region0_MASK (0x30000U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_region0_SHIFT (16U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_region0_WIDTH (2U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_region0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_2_wqos_map_region0_SHIFT)) & UMCTL2_MP_PCFGWQOS0_2_wqos_map_region0_MASK)

#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_region1_MASK (0x300000U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_region1_SHIFT (20U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_region1_WIDTH (2U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_region1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_2_wqos_map_region1_SHIFT)) & UMCTL2_MP_PCFGWQOS0_2_wqos_map_region1_MASK)

#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_region2_MASK (0x3000000U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_region2_SHIFT (24U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_region2_WIDTH (2U)
#define UMCTL2_MP_PCFGWQOS0_2_wqos_map_region2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS0_2_wqos_map_region2_SHIFT)) & UMCTL2_MP_PCFGWQOS0_2_wqos_map_region2_MASK)
/*! @} */

/*! @name PCFGWQOS1_2 - Port n Write QoS Configuration Register 1 */
/*! @{ */

#define UMCTL2_MP_PCFGWQOS1_2_wqos_map_timeout1_MASK (0x7FFU)
#define UMCTL2_MP_PCFGWQOS1_2_wqos_map_timeout1_SHIFT (0U)
#define UMCTL2_MP_PCFGWQOS1_2_wqos_map_timeout1_WIDTH (11U)
#define UMCTL2_MP_PCFGWQOS1_2_wqos_map_timeout1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS1_2_wqos_map_timeout1_SHIFT)) & UMCTL2_MP_PCFGWQOS1_2_wqos_map_timeout1_MASK)

#define UMCTL2_MP_PCFGWQOS1_2_wqos_map_timeout2_MASK (0x7FF0000U)
#define UMCTL2_MP_PCFGWQOS1_2_wqos_map_timeout2_SHIFT (16U)
#define UMCTL2_MP_PCFGWQOS1_2_wqos_map_timeout2_WIDTH (11U)
#define UMCTL2_MP_PCFGWQOS1_2_wqos_map_timeout2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_PCFGWQOS1_2_wqos_map_timeout2_SHIFT)) & UMCTL2_MP_PCFGWQOS1_2_wqos_map_timeout2_MASK)
/*! @} */

/*! @name SBRCTL - Scrubber Control Register */
/*! @{ */

#define UMCTL2_MP_SBRCTL_scrub_en_MASK           (0x1U)
#define UMCTL2_MP_SBRCTL_scrub_en_SHIFT          (0U)
#define UMCTL2_MP_SBRCTL_scrub_en_WIDTH          (1U)
#define UMCTL2_MP_SBRCTL_scrub_en(x)             (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_SBRCTL_scrub_en_SHIFT)) & UMCTL2_MP_SBRCTL_scrub_en_MASK)

#define UMCTL2_MP_SBRCTL_scrub_during_lowpower_MASK (0x2U)
#define UMCTL2_MP_SBRCTL_scrub_during_lowpower_SHIFT (1U)
#define UMCTL2_MP_SBRCTL_scrub_during_lowpower_WIDTH (1U)
#define UMCTL2_MP_SBRCTL_scrub_during_lowpower(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_SBRCTL_scrub_during_lowpower_SHIFT)) & UMCTL2_MP_SBRCTL_scrub_during_lowpower_MASK)

#define UMCTL2_MP_SBRCTL_scrub_mode_MASK         (0x4U)
#define UMCTL2_MP_SBRCTL_scrub_mode_SHIFT        (2U)
#define UMCTL2_MP_SBRCTL_scrub_mode_WIDTH        (1U)
#define UMCTL2_MP_SBRCTL_scrub_mode(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_SBRCTL_scrub_mode_SHIFT)) & UMCTL2_MP_SBRCTL_scrub_mode_MASK)

#define UMCTL2_MP_SBRCTL_scrub_burst_MASK        (0x70U)
#define UMCTL2_MP_SBRCTL_scrub_burst_SHIFT       (4U)
#define UMCTL2_MP_SBRCTL_scrub_burst_WIDTH       (3U)
#define UMCTL2_MP_SBRCTL_scrub_burst(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_SBRCTL_scrub_burst_SHIFT)) & UMCTL2_MP_SBRCTL_scrub_burst_MASK)

#define UMCTL2_MP_SBRCTL_scrub_interval_MASK     (0x1FFF00U)
#define UMCTL2_MP_SBRCTL_scrub_interval_SHIFT    (8U)
#define UMCTL2_MP_SBRCTL_scrub_interval_WIDTH    (13U)
#define UMCTL2_MP_SBRCTL_scrub_interval(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_SBRCTL_scrub_interval_SHIFT)) & UMCTL2_MP_SBRCTL_scrub_interval_MASK)
/*! @} */

/*! @name SBRSTAT - Scrubber Status Register */
/*! @{ */

#define UMCTL2_MP_SBRSTAT_scrub_busy_MASK        (0x1U)
#define UMCTL2_MP_SBRSTAT_scrub_busy_SHIFT       (0U)
#define UMCTL2_MP_SBRSTAT_scrub_busy_WIDTH       (1U)
#define UMCTL2_MP_SBRSTAT_scrub_busy(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_SBRSTAT_scrub_busy_SHIFT)) & UMCTL2_MP_SBRSTAT_scrub_busy_MASK)

#define UMCTL2_MP_SBRSTAT_scrub_done_MASK        (0x2U)
#define UMCTL2_MP_SBRSTAT_scrub_done_SHIFT       (1U)
#define UMCTL2_MP_SBRSTAT_scrub_done_WIDTH       (1U)
#define UMCTL2_MP_SBRSTAT_scrub_done(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_SBRSTAT_scrub_done_SHIFT)) & UMCTL2_MP_SBRSTAT_scrub_done_MASK)
/*! @} */

/*! @name SBRWDATA0 - Scrubber Write Data Pattern 0 */
/*! @{ */

#define UMCTL2_MP_SBRWDATA0_scrub_pattern0_MASK  (0xFFFFFFFFU)
#define UMCTL2_MP_SBRWDATA0_scrub_pattern0_SHIFT (0U)
#define UMCTL2_MP_SBRWDATA0_scrub_pattern0_WIDTH (32U)
#define UMCTL2_MP_SBRWDATA0_scrub_pattern0(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_SBRWDATA0_scrub_pattern0_SHIFT)) & UMCTL2_MP_SBRWDATA0_scrub_pattern0_MASK)
/*! @} */

/*! @name SBRSTART0 - Scrubber Start Address Mask Register 0 */
/*! @{ */

#define UMCTL2_MP_SBRSTART0_sbr_address_start_mask_0_MASK (0xFFFFFFFFU)
#define UMCTL2_MP_SBRSTART0_sbr_address_start_mask_0_SHIFT (0U)
#define UMCTL2_MP_SBRSTART0_sbr_address_start_mask_0_WIDTH (32U)
#define UMCTL2_MP_SBRSTART0_sbr_address_start_mask_0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_SBRSTART0_sbr_address_start_mask_0_SHIFT)) & UMCTL2_MP_SBRSTART0_sbr_address_start_mask_0_MASK)
/*! @} */

/*! @name SBRSTART1 - Scrubber Start Address Mask Register 1 */
/*! @{ */

#define UMCTL2_MP_SBRSTART1_sbr_address_start_mask_1_MASK (0xFU)
#define UMCTL2_MP_SBRSTART1_sbr_address_start_mask_1_SHIFT (0U)
#define UMCTL2_MP_SBRSTART1_sbr_address_start_mask_1_WIDTH (4U)
#define UMCTL2_MP_SBRSTART1_sbr_address_start_mask_1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_SBRSTART1_sbr_address_start_mask_1_SHIFT)) & UMCTL2_MP_SBRSTART1_sbr_address_start_mask_1_MASK)
/*! @} */

/*! @name SBRRANGE0 - Scrubber Address Range Mask Register 0 */
/*! @{ */

#define UMCTL2_MP_SBRRANGE0_sbr_address_range_mask_0_MASK (0xFFFFFFFFU)
#define UMCTL2_MP_SBRRANGE0_sbr_address_range_mask_0_SHIFT (0U)
#define UMCTL2_MP_SBRRANGE0_sbr_address_range_mask_0_WIDTH (32U)
#define UMCTL2_MP_SBRRANGE0_sbr_address_range_mask_0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_SBRRANGE0_sbr_address_range_mask_0_SHIFT)) & UMCTL2_MP_SBRRANGE0_sbr_address_range_mask_0_MASK)
/*! @} */

/*! @name SBRRANGE1 - Scrubber Address Range Mask Register 1 */
/*! @{ */

#define UMCTL2_MP_SBRRANGE1_sbr_address_range_mask_1_MASK (0xFU)
#define UMCTL2_MP_SBRRANGE1_sbr_address_range_mask_1_SHIFT (0U)
#define UMCTL2_MP_SBRRANGE1_sbr_address_range_mask_1_WIDTH (4U)
#define UMCTL2_MP_SBRRANGE1_sbr_address_range_mask_1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_SBRRANGE1_sbr_address_range_mask_1_SHIFT)) & UMCTL2_MP_SBRRANGE1_sbr_address_range_mask_1_MASK)
/*! @} */

/*! @name UMCTL2_VER_NUMBER - UMCTL2 Version Number Register */
/*! @{ */

#define UMCTL2_MP_UMCTL2_VER_NUMBER_ver_number_MASK (0xFFFFFFFFU)
#define UMCTL2_MP_UMCTL2_VER_NUMBER_ver_number_SHIFT (0U)
#define UMCTL2_MP_UMCTL2_VER_NUMBER_ver_number_WIDTH (32U)
#define UMCTL2_MP_UMCTL2_VER_NUMBER_ver_number(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_UMCTL2_VER_NUMBER_ver_number_SHIFT)) & UMCTL2_MP_UMCTL2_VER_NUMBER_ver_number_MASK)
/*! @} */

/*! @name UMCTL2_VER_TYPE - UMCTL2 Version Type Register */
/*! @{ */

#define UMCTL2_MP_UMCTL2_VER_TYPE_ver_type_MASK  (0xFFFFFFFFU)
#define UMCTL2_MP_UMCTL2_VER_TYPE_ver_type_SHIFT (0U)
#define UMCTL2_MP_UMCTL2_VER_TYPE_ver_type_WIDTH (32U)
#define UMCTL2_MP_UMCTL2_VER_TYPE_ver_type(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_MP_UMCTL2_VER_TYPE_ver_type_SHIFT)) & UMCTL2_MP_UMCTL2_VER_TYPE_ver_type_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group UMCTL2_MP_Register_Masks */

/*!
 * @}
 */ /* end of group UMCTL2_MP_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_UMCTL2_MP_H_) */
