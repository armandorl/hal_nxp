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
** ###################################################################
*/

/*!
 * @file S32R45_SELFTEST_GPR.h
 * @version 2.4
 * @date 2022-02-14
 * @brief Peripheral Access Layer for S32R45_SELFTEST_GPR
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
#if !defined(S32R45_SELFTEST_GPR_H_)  /* Check if memory map has not been already included */
#define S32R45_SELFTEST_GPR_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SELFTEST_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SELFTEST_GPR_Peripheral_Access_Layer SELFTEST_GPR Peripheral Access Layer
 * @{
 */

/** SELFTEST_GPR - Register Layout Typedef */
typedef struct {
  __IO uint32_t GENERIC_REG0_0;                    /**< Generic 0, offset: 0x0 */
  __IO uint32_t GENERIC_REG1_0;                    /**< Generic 1, offset: 0x4 */
  uint8_t RESERVED_0[12];
  __IO uint32_t LBIST_PROG_REG0;                   /**< LBIST Program, offset: 0x14 */
  uint8_t RESERVED_1[8];
  __IO uint32_t GENERIC_REG0_1;                    /**< Generic 0, offset: 0x20 */
  __IO uint32_t GENERIC_REG1_1;                    /**< Generic 1, offset: 0x24 */
  uint8_t RESERVED_2[12];
  __IO uint32_t LBIST_PROG_REG1;                   /**< LBIST Program, offset: 0x34 */
  uint8_t RESERVED_3[8];
  __IO uint32_t GENERIC_REG0_2;                    /**< Generic 0, offset: 0x40 */
  __IO uint32_t GENERIC_REG1_2;                    /**< Generic 1, offset: 0x44 */
  uint8_t RESERVED_4[12];
  __IO uint32_t LBIST_PROG_REG2;                   /**< LBIST Program, offset: 0x54 */
  uint8_t RESERVED_5[8];
  __IO uint32_t GENERIC_REG0_3;                    /**< Generic 0, offset: 0x60 */
  __IO uint32_t GENERIC_REG1_3;                    /**< Generic 1, offset: 0x64 */
  uint8_t RESERVED_6[12];
  __IO uint32_t LBIST_PROG_REG3;                   /**< LBIST Program, offset: 0x74 */
  uint8_t RESERVED_7[8];
  __IO uint32_t GENERIC_REG0_4;                    /**< Generic 0, offset: 0x80 */
  __IO uint32_t GENERIC_REG1_4;                    /**< Generic 1, offset: 0x84 */
  uint8_t RESERVED_8[12];
  __IO uint32_t LBIST_PROG_REG4;                   /**< LBIST Program, offset: 0x94 */
  uint8_t RESERVED_9[8];
  __IO uint32_t GENERIC_REG0_5;                    /**< Generic 0, offset: 0xA0 */
  __IO uint32_t GENERIC_REG1_5;                    /**< Generic 1, offset: 0xA4 */
  uint8_t RESERVED_10[12];
  __IO uint32_t LBIST_PROG_REG5;                   /**< LBIST Program, offset: 0xB4 */
  uint8_t RESERVED_11[8];
  __IO uint32_t GENERIC_REG0_6;                    /**< Generic 0, offset: 0xC0 */
  __IO uint32_t GENERIC_REG1_6;                    /**< Generic 1, offset: 0xC4 */
  uint8_t RESERVED_12[12];
  __IO uint32_t LBIST_PROG_REG6;                   /**< LBIST Program, offset: 0xD4 */
  uint8_t RESERVED_13[8];
  __IO uint32_t GENERIC_REG0_7;                    /**< Generic 0, offset: 0xE0 */
  __IO uint32_t GENERIC_REG1_7;                    /**< Generic 1, offset: 0xE4 */
  uint8_t RESERVED_14[12];
  __IO uint32_t LBIST_PROG_REG7;                   /**< LBIST Program, offset: 0xF4 */
  uint8_t RESERVED_15[8];
  __IO uint32_t GENERIC_REG0_8;                    /**< Generic 0, offset: 0x100 */
  __IO uint32_t GENERIC_REG1_8;                    /**< Generic 1, offset: 0x104 */
  uint8_t RESERVED_16[12];
  __IO uint32_t LBIST_PROG_REG8;                   /**< LBIST Program, offset: 0x114 */
  uint8_t RESERVED_17[8];
  __IO uint32_t GENERIC_REG0_9;                    /**< Generic 0, offset: 0x120 */
  __IO uint32_t GENERIC_REG1_9;                    /**< Generic 1, offset: 0x124 */
  uint8_t RESERVED_18[12];
  __IO uint32_t LBIST_PROG_REG9;                   /**< LBIST Program, offset: 0x134 */
  uint8_t RESERVED_19[8];
  __IO uint32_t GENERIC_REG0_10;                   /**< Generic 0, offset: 0x140 */
  __IO uint32_t GENERIC_REG1_10;                   /**< Generic 1, offset: 0x144 */
  uint8_t RESERVED_20[12];
  __IO uint32_t LBIST_PROG_REG10;                  /**< LBIST Program, offset: 0x154 */
  uint8_t RESERVED_21[8];
  __IO uint32_t GENERIC_REG0_11;                   /**< Generic 0, offset: 0x160 */
  __IO uint32_t GENERIC_REG1_11;                   /**< Generic 1, offset: 0x164 */
  uint8_t RESERVED_22[12];
  __IO uint32_t LBIST_PROG_REG11;                  /**< LBIST Program, offset: 0x174 */
  uint8_t RESERVED_23[8];
  __IO uint32_t GENERIC_REG0_12;                   /**< Generic 0, offset: 0x180 */
  __IO uint32_t GENERIC_REG1_12;                   /**< Generic 1, offset: 0x184 */
  uint8_t RESERVED_24[12];
  __IO uint32_t LBIST_PROG_REG12;                  /**< LBIST Program, offset: 0x194 */
  uint8_t RESERVED_25[8];
  __IO uint32_t GENERIC_REG0_13;                   /**< Generic 0, offset: 0x1A0 */
  __IO uint32_t GENERIC_REG1_13;                   /**< Generic 1, offset: 0x1A4 */
  uint8_t RESERVED_26[12];
  __IO uint32_t LBIST_PROG_REG13;                  /**< LBIST Program, offset: 0x1B4 */
  uint8_t RESERVED_27[8];
  __IO uint32_t GENERIC_REG0_14;                   /**< Generic 0, offset: 0x1C0 */
  __IO uint32_t GENERIC_REG1_14;                   /**< Generic 1, offset: 0x1C4 */
  uint8_t RESERVED_28[12];
  __IO uint32_t LBIST_PROG_REG14;                  /**< LBIST Program, offset: 0x1D4 */
  uint8_t RESERVED_29[8];
  __IO uint32_t GENERIC_REG0_15;                   /**< Generic 0, offset: 0x1E0 */
  __IO uint32_t GENERIC_REG1_15;                   /**< Generic 1, offset: 0x1E4 */
  uint8_t RESERVED_30[12];
  __IO uint32_t LBIST_PROG_REG15;                  /**< LBIST Program, offset: 0x1F4 */
  uint8_t RESERVED_31[8];
  __IO uint32_t GENERIC_REG0_16;                   /**< Generic 0, offset: 0x200 */
  __IO uint32_t GENERIC_REG1_16;                   /**< Generic 1, offset: 0x204 */
  uint8_t RESERVED_32[12];
  __IO uint32_t LBIST_PROG_REG16;                  /**< LBIST Program, offset: 0x214 */
  uint8_t RESERVED_33[8];
  __IO uint32_t GENERIC_REG0_17;                   /**< Generic 0, offset: 0x220 */
  __IO uint32_t GENERIC_REG1_17;                   /**< Generic 1, offset: 0x224 */
  uint8_t RESERVED_34[12];
  __IO uint32_t LBIST_PROG_REG17;                  /**< LBIST Program, offset: 0x234 */
  uint8_t RESERVED_35[8];
  __IO uint32_t GENERIC_REG0_18;                   /**< Generic 0, offset: 0x240 */
  __IO uint32_t GENERIC_REG1_18;                   /**< Generic 1, offset: 0x244 */
  uint8_t RESERVED_36[12];
  __IO uint32_t LBIST_PROG_REG18;                  /**< LBIST Program, offset: 0x254 */
  uint8_t RESERVED_37[8];
  __IO uint32_t GENERIC_REG0_19;                   /**< Generic 0, offset: 0x260 */
  __IO uint32_t GENERIC_REG1_19;                   /**< Generic 1, offset: 0x264 */
  uint8_t RESERVED_38[12];
  __IO uint32_t LBIST_PROG_REG19;                  /**< LBIST Program, offset: 0x274 */
  uint8_t RESERVED_39[8];
  __IO uint32_t GENERIC_REG0_20;                   /**< Generic 0, offset: 0x280 */
  __IO uint32_t GENERIC_REG1_20;                   /**< Generic 1, offset: 0x284 */
  uint8_t RESERVED_40[12];
  __IO uint32_t LBIST_PROG_REG20;                  /**< LBIST Program, offset: 0x294 */
  uint8_t RESERVED_41[8];
  __IO uint32_t GENERIC_REG0_21;                   /**< Generic 0, offset: 0x2A0 */
  __IO uint32_t GENERIC_REG1_21;                   /**< Generic 1, offset: 0x2A4 */
  uint8_t RESERVED_42[12];
  __IO uint32_t LBIST_PROG_REG21;                  /**< LBIST Program, offset: 0x2B4 */
  uint8_t RESERVED_43[8];
  __IO uint32_t GENERIC_REG0_22;                   /**< Generic 0, offset: 0x2C0 */
  __IO uint32_t GENERIC_REG1_22;                   /**< Generic 1, offset: 0x2C4 */
  uint8_t RESERVED_44[12];
  __IO uint32_t LBIST_PROG_REG22;                  /**< LBIST Program, offset: 0x2D4 */
  uint8_t RESERVED_45[8];
  __IO uint32_t GENERIC_REG0_23;                   /**< Generic 0, offset: 0x2E0 */
  __IO uint32_t GENERIC_REG1_23;                   /**< Generic 1, offset: 0x2E4 */
  uint8_t RESERVED_46[12];
  __IO uint32_t LBIST_PROG_REG23;                  /**< LBIST Program, offset: 0x2F4 */
  uint8_t RESERVED_47[8];
  __IO uint32_t GENERIC_REG0_24;                   /**< Generic 0, offset: 0x300 */
  __IO uint32_t GENERIC_REG1_24;                   /**< Generic 1, offset: 0x304 */
  uint8_t RESERVED_48[12];
  __IO uint32_t LBIST_PROG_REG24;                  /**< LBIST Program, offset: 0x314 */
  uint8_t RESERVED_49[8];
  __IO uint32_t GENERIC_REG0_25;                   /**< Generic 0, offset: 0x320 */
  __IO uint32_t GENERIC_REG1_25;                   /**< Generic 1, offset: 0x324 */
  uint8_t RESERVED_50[12];
  __IO uint32_t LBIST_PROG_REG25;                  /**< LBIST Program, offset: 0x334 */
  uint8_t RESERVED_51[8];
  __IO uint32_t GENERIC_REG0_26;                   /**< Generic 0, offset: 0x340 */
  __IO uint32_t GENERIC_REG1_26;                   /**< Generic 1, offset: 0x344 */
  uint8_t RESERVED_52[12];
  __IO uint32_t LBIST_PROG_REG26;                  /**< LBIST Program, offset: 0x354 */
  uint8_t RESERVED_53[8];
  __IO uint32_t GENERIC_REG0_27;                   /**< Generic 0, offset: 0x360 */
  __IO uint32_t GENERIC_REG1_27;                   /**< Generic 1, offset: 0x364 */
  uint8_t RESERVED_54[12];
  __IO uint32_t LBIST_PROG_REG27;                  /**< LBIST Program, offset: 0x374 */
  uint8_t RESERVED_55[8];
  __IO uint32_t GENERIC_REG0_28;                   /**< Generic 0, offset: 0x380 */
  __IO uint32_t GENERIC_REG1_28;                   /**< Generic 1, offset: 0x384 */
  uint8_t RESERVED_56[12];
  __IO uint32_t LBIST_PROG_REG28;                  /**< LBIST Program, offset: 0x394 */
  uint8_t RESERVED_57[8];
  __IO uint32_t GENERIC_REG0_29;                   /**< Generic 0, offset: 0x3A0 */
  __IO uint32_t GENERIC_REG1_29;                   /**< Generic 1, offset: 0x3A4 */
  uint8_t RESERVED_58[12];
  __IO uint32_t LBIST_PROG_REG29;                  /**< LBIST Program, offset: 0x3B4 */
  uint8_t RESERVED_59[40];
  __IO uint32_t GENERIC_REG0_31;                   /**< Generic 0, offset: 0x3E0 */
  __IO uint32_t GENERIC_REG1_31;                   /**< Generic 1, offset: 0x3E4 */
  uint8_t RESERVED_60[12];
  __IO uint32_t LBIST_PROG_REG31;                  /**< LBIST Program, offset: 0x3F4 */
  uint8_t RESERVED_61[8];
  __IO uint32_t GENERIC_REG0_32;                   /**< Generic 0, offset: 0x400 */
  __IO uint32_t GENERIC_REG1_32;                   /**< Generic 1, offset: 0x404 */
  uint8_t RESERVED_62[12];
  __IO uint32_t LBIST_PROG_REG32;                  /**< LBIST Program, offset: 0x414 */
  uint8_t RESERVED_63[40];
  __IO uint32_t GENERIC_REG0_34;                   /**< Generic 0, offset: 0x440 */
  __IO uint32_t GENERIC_REG1_34;                   /**< Generic 1, offset: 0x444 */
  uint8_t RESERVED_64[12];
  __IO uint32_t LBIST_PROG_REG34;                  /**< LBIST Program, offset: 0x454 */
  uint8_t RESERVED_65[8];
  __IO uint32_t GENERIC_REG0_35;                   /**< Generic 0, offset: 0x460 */
  __IO uint32_t GENERIC_REG1_35;                   /**< Generic 1, offset: 0x464 */
  uint8_t RESERVED_66[12];
  __IO uint32_t LBIST_PROG_REG35;                  /**< LBIST Program, offset: 0x474 */
  uint8_t RESERVED_67[8];
  __IO uint32_t GENERIC_REG0_36;                   /**< Generic 0, offset: 0x480 */
  __IO uint32_t GENERIC_REG1_36;                   /**< Generic 1, offset: 0x484 */
  uint8_t RESERVED_68[12];
  __IO uint32_t LBIST_PROG_REG36;                  /**< LBIST Program, offset: 0x494 */
  uint8_t RESERVED_69[8];
  __IO uint32_t GENERIC_REG0_37;                   /**< Generic 0, offset: 0x4A0 */
  __IO uint32_t GENERIC_REG1_37;                   /**< Generic 1, offset: 0x4A4 */
  uint8_t RESERVED_70[12];
  __IO uint32_t LBIST_PROG_REG37;                  /**< LBIST Program, offset: 0x4B4 */
  uint8_t RESERVED_71[8];
  __IO uint32_t GENERIC_REG0_38;                   /**< Generic 0, offset: 0x4C0 */
  __IO uint32_t GENERIC_REG1_38;                   /**< Generic 1, offset: 0x4C4 */
  uint8_t RESERVED_72[12];
  __IO uint32_t LBIST_PROG_REG38;                  /**< LBIST Program, offset: 0x4D4 */
  uint8_t RESERVED_73[40];
  __IO uint32_t GENERIC_REG0_40;                   /**< Generic 0, offset: 0x500 */
  __IO uint32_t GENERIC_REG1_40;                   /**< Generic 1, offset: 0x504 */
  uint8_t RESERVED_74[12];
  __IO uint32_t LBIST_PROG_REG40;                  /**< LBIST Program, offset: 0x514 */
  uint8_t RESERVED_75[8];
  __IO uint32_t GENERIC_REG0_41;                   /**< Generic 0, offset: 0x520 */
  __IO uint32_t GENERIC_REG1_41;                   /**< Generic 1, offset: 0x524 */
  uint8_t RESERVED_76[12];
  __IO uint32_t LBIST_PROG_REG41;                  /**< LBIST Program, offset: 0x534 */
  uint8_t RESERVED_77[8];
  __IO uint32_t GENERIC_REG0_42;                   /**< Generic 0, offset: 0x540 */
  __IO uint32_t GENERIC_REG1_42;                   /**< Generic 1, offset: 0x544 */
  uint8_t RESERVED_78[12];
  __IO uint32_t LBIST_PROG_REG42;                  /**< LBIST Program, offset: 0x554 */
  uint8_t RESERVED_79[8];
  __IO uint32_t GENERIC_REG0_43;                   /**< Generic 0, offset: 0x560 */
  __IO uint32_t GENERIC_REG1_43;                   /**< Generic 1, offset: 0x564 */
  uint8_t RESERVED_80[12];
  __IO uint32_t LBIST_PROG_REG43;                  /**< LBIST Program, offset: 0x574 */
  uint8_t RESERVED_81[8];
  __IO uint32_t GENERIC_REG0_44;                   /**< Generic 0, offset: 0x580 */
  __IO uint32_t GENERIC_REG1_44;                   /**< Generic 1, offset: 0x584 */
  uint8_t RESERVED_82[12];
  __IO uint32_t LBIST_PROG_REG44;                  /**< LBIST Program, offset: 0x594 */
  uint8_t RESERVED_83[8];
  __IO uint32_t GENERIC_REG0_45;                   /**< Generic 0, offset: 0x5A0 */
  __IO uint32_t GENERIC_REG1_45;                   /**< Generic 1, offset: 0x5A4 */
  uint8_t RESERVED_84[12];
  __IO uint32_t LBIST_PROG_REG45;                  /**< LBIST Program, offset: 0x5B4 */
  uint8_t RESERVED_85[8];
  __IO uint32_t GENERIC_REG0_46;                   /**< Generic 0, offset: 0x5C0 */
  __IO uint32_t GENERIC_REG1_46;                   /**< Generic 1, offset: 0x5C4 */
  uint8_t RESERVED_86[12];
  __IO uint32_t LBIST_PROG_REG46;                  /**< LBIST Program, offset: 0x5D4 */
  uint8_t RESERVED_87[8];
  __IO uint32_t GENERIC_REG0_47;                   /**< Generic 0, offset: 0x5E0 */
  __IO uint32_t GENERIC_REG1_47;                   /**< Generic 1, offset: 0x5E4 */
  uint8_t RESERVED_88[12];
  __IO uint32_t LBIST_PROG_REG47;                  /**< LBIST Program, offset: 0x5F4 */
  uint8_t RESERVED_89[8];
  __IO uint32_t GENERIC_REG0_48;                   /**< Generic 0, offset: 0x600 */
  __IO uint32_t GENERIC_REG1_48;                   /**< Generic 1, offset: 0x604 */
  uint8_t RESERVED_90[12];
  __IO uint32_t LBIST_PROG_REG48;                  /**< LBIST Program, offset: 0x614 */
  uint8_t RESERVED_91[8];
  __IO uint32_t GENERIC_REG0_49;                   /**< Generic 0, offset: 0x620 */
  __IO uint32_t GENERIC_REG1_49;                   /**< Generic 1, offset: 0x624 */
  uint8_t RESERVED_92[12];
  __IO uint32_t LBIST_PROG_REG49;                  /**< LBIST Program, offset: 0x634 */
  uint8_t RESERVED_93[8];
  __IO uint32_t GENERIC_REG0_50;                   /**< Generic 0, offset: 0x640 */
  __IO uint32_t GENERIC_REG1_50;                   /**< Generic 1, offset: 0x644 */
  uint8_t RESERVED_94[12];
  __IO uint32_t LBIST_PROG_REG50;                  /**< LBIST Program, offset: 0x654 */
  uint8_t RESERVED_95[8];
  __IO uint32_t GENERIC_REG0_51;                   /**< Generic 0, offset: 0x660 */
  __IO uint32_t GENERIC_REG1_51;                   /**< Generic 1, offset: 0x664 */
  uint8_t RESERVED_96[12];
  __IO uint32_t LBIST_PROG_REG51;                  /**< LBIST Program, offset: 0x674 */
  uint8_t RESERVED_97[40];
  __IO uint32_t GENERIC_REG0_53;                   /**< Generic 0, offset: 0x6A0 */
  __IO uint32_t GENERIC_REG1_53;                   /**< Generic 1, offset: 0x6A4 */
  uint8_t RESERVED_98[12];
  __IO uint32_t LBIST_PROG_REG53;                  /**< LBIST Program, offset: 0x6B4 */
  uint8_t RESERVED_99[8];
  __IO uint32_t GENERIC_REG0_54;                   /**< Generic 0, offset: 0x6C0 */
  __IO uint32_t GENERIC_REG1_54;                   /**< Generic 1, offset: 0x6C4 */
  uint8_t RESERVED_100[12];
  __IO uint32_t LBIST_PROG_REG54;                  /**< LBIST Program, offset: 0x6D4 */
} SELFTEST_GPR_Type, *SELFTEST_GPR_MemMapPtr;

/** Number of instances of the SELFTEST_GPR module. */
#define SELFTEST_GPR_INSTANCE_COUNT              (1u)

/* SELFTEST_GPR - Peripheral instance base addresses */
/** Peripheral SELFTEST_GPR base address */
#define IP_SELFTEST_GPR_BASE                     (0x4001C000u)
/** Peripheral SELFTEST_GPR base pointer */
#define IP_SELFTEST_GPR                          ((SELFTEST_GPR_Type *)IP_SELFTEST_GPR_BASE)
/** Array initializer of SELFTEST_GPR peripheral base addresses */
#define IP_SELFTEST_GPR_BASE_ADDRS               { IP_SELFTEST_GPR_BASE }
/** Array initializer of SELFTEST_GPR peripheral base pointers */
#define IP_SELFTEST_GPR_BASE_PTRS                { IP_SELFTEST_GPR }

/* ----------------------------------------------------------------------------
   -- SELFTEST_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SELFTEST_GPR_Register_Masks SELFTEST_GPR Register Masks
 * @{
 */

/*! @name GENERIC_REG0_0 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_0_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_0_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_0_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_0_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_0_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_0_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_0_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_0_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_0_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_0_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_0_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_0_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_0_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_0_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_0_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_0_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_0_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_0_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_0 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_0_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_0_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_0_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_0_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_0_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_0_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG0 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG0_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG0_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG0_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG0_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG0_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG0_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_1 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_1_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_1_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_1_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_1_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_1_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_1_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_1_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_1_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_1_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_1_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_1_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_1_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_1_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_1_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_1_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_1_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_1_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_1_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_1 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_1_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_1_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_1_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_1_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_1_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_1_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG1 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG1_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG1_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG1_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG1_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG1_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG1_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_2 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_2_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_2_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_2_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_2_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_2_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_2_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_2_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_2_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_2_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_2_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_2_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_2_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_2_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_2_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_2_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_2_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_2_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_2_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_2 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_2_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_2_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_2_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_2_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_2_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_2_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG2 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG2_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG2_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG2_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG2_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG2_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG2_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_3 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_3_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_3_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_3_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_3_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_3_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_3_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_3_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_3_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_3_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_3_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_3_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_3_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_3_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_3_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_3_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_3_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_3_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_3_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_3 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_3_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_3_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_3_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_3_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_3_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_3_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG3 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG3_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG3_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG3_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG3_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG3_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG3_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_4 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_4_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_4_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_4_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_4_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_4_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_4_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_4_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_4_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_4_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_4_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_4_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_4_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_4_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_4_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_4_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_4_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_4_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_4_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_4 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_4_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_4_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_4_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_4_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_4_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_4_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG4 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG4_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG4_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG4_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG4_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG4_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG4_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_5 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_5_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_5_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_5_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_5_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_5_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_5_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_5_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_5_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_5_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_5_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_5_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_5_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_5_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_5_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_5_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_5_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_5_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_5_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_5 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_5_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_5_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_5_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_5_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_5_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_5_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG5 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG5_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG5_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG5_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG5_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG5_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG5_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_6 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_6_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_6_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_6_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_6_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_6_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_6_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_6_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_6_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_6_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_6_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_6_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_6_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_6_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_6_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_6_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_6_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_6_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_6_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_6 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_6_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_6_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_6_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_6_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_6_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_6_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG6 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG6_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG6_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG6_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG6_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG6_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG6_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_7 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_7_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_7_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_7_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_7_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_7_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_7_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_7_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_7_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_7_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_7_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_7_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_7_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_7_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_7_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_7_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_7_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_7_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_7_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_7 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_7_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_7_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_7_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_7_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_7_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_7_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG7 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG7_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG7_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG7_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG7_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG7_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG7_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_8 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_8_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_8_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_8_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_8_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_8_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_8_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_8_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_8_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_8_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_8_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_8_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_8_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_8_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_8_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_8_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_8_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_8_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_8_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_8 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_8_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_8_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_8_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_8_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_8_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_8_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG8 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG8_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG8_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG8_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG8_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG8_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG8_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_9 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_9_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_9_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_9_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_9_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_9_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_9_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_9_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_9_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_9_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_9_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_9_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_9_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_9_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_9_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_9_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_9_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_9_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_9_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_9 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_9_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_9_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_9_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_9_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_9_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_9_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG9 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG9_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG9_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG9_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG9_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG9_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG9_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_10 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_10_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_10_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_10_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_10_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_10_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_10_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_10_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_10_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_10_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_10_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_10_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_10_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_10_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_10_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_10_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_10_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_10_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_10_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_10 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_10_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_10_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_10_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_10_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_10_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_10_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG10 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG10_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG10_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG10_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG10_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG10_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG10_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_11 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_11_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_11_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_11_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_11_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_11_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_11_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_11_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_11_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_11_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_11_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_11_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_11_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_11_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_11_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_11_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_11_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_11_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_11_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_11 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_11_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_11_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_11_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_11_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_11_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_11_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG11 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG11_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG11_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG11_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG11_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG11_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG11_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_12 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_12_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_12_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_12_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_12_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_12_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_12_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_12_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_12_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_12_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_12_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_12_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_12_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_12_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_12_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_12_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_12_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_12_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_12_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_12 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_12_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_12_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_12_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_12_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_12_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_12_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG12 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG12_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG12_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG12_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG12_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG12_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG12_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_13 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_13_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_13_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_13_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_13_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_13_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_13_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_13_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_13_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_13_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_13_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_13_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_13_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_13_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_13_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_13_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_13_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_13_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_13_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_13 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_13_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_13_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_13_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_13_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_13_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_13_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG13 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG13_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG13_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG13_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG13_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG13_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG13_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_14 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_14_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_14_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_14_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_14_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_14_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_14_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_14_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_14_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_14_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_14_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_14_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_14_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_14_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_14_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_14_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_14_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_14_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_14_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_14 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_14_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_14_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_14_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_14_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_14_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_14_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG14 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG14_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG14_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG14_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG14_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG14_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG14_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_15 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_15_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_15_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_15_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_15_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_15_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_15_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_15_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_15_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_15_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_15_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_15_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_15_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_15_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_15_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_15_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_15_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_15_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_15_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_15 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_15_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_15_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_15_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_15_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_15_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_15_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG15 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG15_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG15_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG15_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG15_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG15_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG15_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_16 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_16_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_16_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_16_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_16_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_16_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_16_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_16_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_16_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_16_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_16_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_16_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_16_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_16_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_16_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_16_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_16_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_16_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_16_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_16 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_16_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_16_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_16_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_16_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_16_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_16_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG16 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG16_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG16_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG16_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG16_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG16_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG16_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_17 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_17_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_17_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_17_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_17_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_17_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_17_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_17_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_17_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_17_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_17_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_17_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_17_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_17_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_17_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_17_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_17_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_17_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_17_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_17 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_17_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_17_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_17_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_17_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_17_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_17_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG17 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG17_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG17_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG17_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG17_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG17_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG17_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_18 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_18_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_18_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_18_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_18_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_18_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_18_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_18_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_18_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_18_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_18_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_18_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_18_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_18_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_18_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_18_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_18_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_18_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_18_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_18 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_18_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_18_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_18_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_18_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_18_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_18_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG18 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG18_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG18_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG18_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG18_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG18_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG18_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_19 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_19_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_19_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_19_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_19_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_19_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_19_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_19_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_19_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_19_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_19_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_19_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_19_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_19_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_19_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_19_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_19_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_19_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_19_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_19 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_19_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_19_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_19_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_19_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_19_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_19_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG19 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG19_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG19_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG19_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG19_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG19_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG19_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_20 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_20_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_20_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_20_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_20_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_20_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_20_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_20_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_20_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_20_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_20_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_20_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_20_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_20_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_20_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_20_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_20_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_20_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_20_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_20 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_20_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_20_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_20_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_20_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_20_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_20_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG20 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG20_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG20_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG20_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG20_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG20_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG20_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_21 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_21_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_21_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_21_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_21_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_21_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_21_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_21_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_21_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_21_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_21_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_21_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_21_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_21_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_21_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_21_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_21_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_21_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_21_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_21 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_21_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_21_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_21_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_21_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_21_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_21_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG21 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG21_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG21_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG21_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG21_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG21_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG21_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_22 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_22_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_22_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_22_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_22_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_22_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_22_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_22_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_22_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_22_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_22_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_22_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_22_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_22_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_22_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_22_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_22_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_22_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_22_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_22 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_22_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_22_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_22_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_22_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_22_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_22_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG22 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG22_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG22_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG22_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG22_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG22_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG22_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_23 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_23_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_23_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_23_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_23_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_23_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_23_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_23_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_23_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_23_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_23_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_23_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_23_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_23_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_23_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_23_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_23_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_23_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_23_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_23 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_23_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_23_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_23_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_23_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_23_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_23_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG23 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG23_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG23_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG23_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG23_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG23_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG23_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_24 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_24_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_24_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_24_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_24_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_24_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_24_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_24_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_24_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_24_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_24_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_24_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_24_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_24_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_24_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_24_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_24_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_24_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_24_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_24 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_24_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_24_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_24_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_24_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_24_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_24_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG24 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG24_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG24_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG24_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG24_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG24_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG24_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_25 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_25_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_25_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_25_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_25_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_25_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_25_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_25_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_25_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_25_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_25_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_25_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_25_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_25_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_25_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_25_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_25_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_25_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_25_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_25 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_25_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_25_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_25_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_25_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_25_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_25_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG25 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG25_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG25_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG25_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG25_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG25_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG25_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_26 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_26_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_26_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_26_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_26_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_26_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_26_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_26_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_26_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_26_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_26_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_26_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_26_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_26_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_26_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_26_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_26_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_26_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_26_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_26 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_26_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_26_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_26_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_26_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_26_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_26_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG26 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG26_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG26_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG26_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG26_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG26_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG26_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_27 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_27_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_27_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_27_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_27_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_27_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_27_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_27_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_27_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_27_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_27_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_27_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_27_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_27_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_27_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_27_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_27_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_27_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_27_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_27 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_27_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_27_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_27_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_27_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_27_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_27_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG27 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG27_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG27_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG27_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG27_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG27_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG27_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_28 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_28_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_28_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_28_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_28_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_28_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_28_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_28_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_28_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_28_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_28_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_28_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_28_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_28_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_28_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_28_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_28_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_28_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_28_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_28 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_28_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_28_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_28_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_28_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_28_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_28_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG28 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG28_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG28_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG28_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG28_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG28_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG28_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_29 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_29_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_29_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_29_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_29_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_29_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_29_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_29_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_29_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_29_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_29_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_29_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_29_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_29_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_29_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_29_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_29_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_29_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_29_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_29 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_29_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_29_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_29_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_29_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_29_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_29_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG29 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG29_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG29_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG29_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG29_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG29_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG29_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_31 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_31_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_31_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_31_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_31_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_31_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_31_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_31_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_31_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_31_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_31_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_31_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_31_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_31_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_31_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_31_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_31_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_31_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_31_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_31 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_31_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_31_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_31_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_31_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_31_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_31_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG31 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG31_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG31_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG31_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG31_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG31_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG31_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_32 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_32_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_32_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_32_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_32_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_32_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_32_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_32_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_32_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_32_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_32_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_32_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_32_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_32_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_32_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_32_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_32_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_32_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_32_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_32 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_32_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_32_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_32_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_32_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_32_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_32_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG32 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG32_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG32_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG32_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG32_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG32_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG32_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_34 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_34_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_34_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_34_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_34_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_34_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_34_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_34_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_34_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_34_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_34_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_34_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_34_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_34_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_34_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_34_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_34_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_34_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_34_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_34 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_34_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_34_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_34_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_34_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_34_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_34_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG34 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG34_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG34_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG34_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG34_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG34_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG34_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_35 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_35_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_35_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_35_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_35_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_35_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_35_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_35_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_35_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_35_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_35_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_35_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_35_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_35_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_35_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_35_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_35_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_35_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_35_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_35 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_35_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_35_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_35_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_35_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_35_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_35_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG35 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG35_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG35_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG35_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG35_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG35_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG35_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_36 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_36_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_36_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_36_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_36_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_36_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_36_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_36_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_36_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_36_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_36_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_36_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_36_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_36_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_36_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_36_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_36_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_36_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_36_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_36 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_36_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_36_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_36_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_36_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_36_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_36_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG36 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG36_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG36_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG36_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG36_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG36_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG36_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_37 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_37_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_37_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_37_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_37_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_37_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_37_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_37_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_37_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_37_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_37_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_37_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_37_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_37_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_37_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_37_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_37_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_37_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_37_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_37 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_37_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_37_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_37_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_37_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_37_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_37_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG37 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG37_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG37_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG37_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG37_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG37_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG37_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_38 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_38_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_38_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_38_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_38_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_38_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_38_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_38_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_38_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_38_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_38_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_38_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_38_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_38_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_38_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_38_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_38_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_38_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_38_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_38 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_38_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_38_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_38_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_38_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_38_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_38_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG38 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG38_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG38_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG38_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG38_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG38_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG38_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_40 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_40_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_40_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_40_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_40_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_40_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_40_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_40_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_40_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_40_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_40_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_40_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_40_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_40_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_40_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_40_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_40_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_40_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_40_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_40 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_40_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_40_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_40_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_40_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_40_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_40_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG40 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG40_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG40_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG40_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG40_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG40_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG40_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_41 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_41_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_41_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_41_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_41_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_41_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_41_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_41_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_41_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_41_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_41_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_41_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_41_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_41_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_41_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_41_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_41_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_41_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_41_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_41 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_41_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_41_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_41_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_41_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_41_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_41_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG41 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG41_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG41_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG41_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG41_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG41_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG41_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_42 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_42_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_42_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_42_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_42_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_42_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_42_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_42_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_42_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_42_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_42_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_42_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_42_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_42_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_42_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_42_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_42_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_42_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_42_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_42 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_42_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_42_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_42_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_42_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_42_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_42_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG42 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG42_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG42_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG42_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG42_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG42_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG42_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_43 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_43_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_43_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_43_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_43_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_43_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_43_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_43_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_43_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_43_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_43_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_43_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_43_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_43_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_43_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_43_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_43_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_43_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_43_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_43 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_43_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_43_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_43_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_43_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_43_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_43_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG43 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG43_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG43_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG43_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG43_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG43_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG43_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_44 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_44_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_44_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_44_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_44_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_44_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_44_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_44_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_44_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_44_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_44_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_44_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_44_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_44_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_44_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_44_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_44_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_44_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_44_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_44 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_44_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_44_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_44_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_44_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_44_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_44_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG44 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG44_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG44_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG44_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG44_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG44_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG44_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_45 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_45_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_45_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_45_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_45_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_45_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_45_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_45_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_45_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_45_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_45_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_45_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_45_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_45_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_45_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_45_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_45_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_45_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_45_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_45 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_45_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_45_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_45_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_45_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_45_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_45_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG45 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG45_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG45_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG45_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG45_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG45_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG45_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_46 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_46_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_46_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_46_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_46_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_46_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_46_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_46_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_46_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_46_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_46_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_46_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_46_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_46_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_46_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_46_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_46_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_46_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_46_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_46 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_46_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_46_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_46_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_46_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_46_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_46_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG46 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG46_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG46_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG46_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG46_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG46_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG46_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_47 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_47_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_47_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_47_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_47_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_47_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_47_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_47_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_47_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_47_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_47_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_47_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_47_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_47_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_47_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_47_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_47_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_47_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_47_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_47 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_47_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_47_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_47_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_47_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_47_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_47_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG47 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG47_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG47_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG47_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG47_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG47_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG47_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_48 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_48_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_48_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_48_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_48_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_48_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_48_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_48_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_48_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_48_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_48_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_48_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_48_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_48_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_48_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_48_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_48_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_48_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_48_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_48 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_48_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_48_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_48_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_48_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_48_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_48_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG48 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG48_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG48_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG48_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG48_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG48_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG48_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_49 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_49_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_49_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_49_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_49_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_49_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_49_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_49_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_49_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_49_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_49_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_49_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_49_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_49_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_49_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_49_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_49_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_49_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_49_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_49 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_49_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_49_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_49_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_49_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_49_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_49_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG49 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG49_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG49_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG49_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG49_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG49_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG49_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_50 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_50_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_50_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_50_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_50_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_50_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_50_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_50_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_50_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_50_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_50_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_50_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_50_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_50_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_50_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_50_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_50_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_50_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_50_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_50 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_50_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_50_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_50_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_50_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_50_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_50_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG50 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG50_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG50_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG50_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG50_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG50_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG50_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_51 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_51_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_51_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_51_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_51_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_51_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_51_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_51_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_51_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_51_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_51_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_51_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_51_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_51_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_51_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_51_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_51_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_51_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_51_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_51 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_51_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_51_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_51_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_51_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_51_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_51_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG51 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG51_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG51_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG51_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG51_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG51_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG51_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_53 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_53_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_53_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_53_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_53_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_53_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_53_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_53_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_53_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_53_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_53_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_53_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_53_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_53_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_53_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_53_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_53_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_53_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_53_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_53 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_53_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_53_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_53_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_53_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_53_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_53_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG53 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG53_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG53_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG53_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG53_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG53_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG53_LBIST_shift_count_MASK)
/*! @} */

/*! @name GENERIC_REG0_54 - Generic 0 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG0_54_pcs_step_size_MASK (0x70U)
#define SELFTEST_GPR_GENERIC_REG0_54_pcs_step_size_SHIFT (4U)
#define SELFTEST_GPR_GENERIC_REG0_54_pcs_step_size_WIDTH (3U)
#define SELFTEST_GPR_GENERIC_REG0_54_pcs_step_size(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_54_pcs_step_size_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_54_pcs_step_size_MASK)

#define SELFTEST_GPR_GENERIC_REG0_54_pcs_enable_start_MASK (0x80U)
#define SELFTEST_GPR_GENERIC_REG0_54_pcs_enable_start_SHIFT (7U)
#define SELFTEST_GPR_GENERIC_REG0_54_pcs_enable_start_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_54_pcs_enable_start(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_54_pcs_enable_start_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_54_pcs_enable_start_MASK)

#define SELFTEST_GPR_GENERIC_REG0_54_pcs_enable_end_MASK (0x100U)
#define SELFTEST_GPR_GENERIC_REG0_54_pcs_enable_end_SHIFT (8U)
#define SELFTEST_GPR_GENERIC_REG0_54_pcs_enable_end_WIDTH (1U)
#define SELFTEST_GPR_GENERIC_REG0_54_pcs_enable_end(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG0_54_pcs_enable_end_SHIFT)) & SELFTEST_GPR_GENERIC_REG0_54_pcs_enable_end_MASK)
/*! @} */

/*! @name GENERIC_REG1_54 - Generic 1 */
/*! @{ */

#define SELFTEST_GPR_GENERIC_REG1_54_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_54_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_54_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_54_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_54_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_54_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG54 - LBIST Program */
/*! @{ */

#define SELFTEST_GPR_LBIST_PROG_REG54_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG54_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG54_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG54_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG54_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG54_LBIST_shift_count_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SELFTEST_GPR_Register_Masks */

/*!
 * @}
 */ /* end of group SELFTEST_GPR_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_SELFTEST_GPR_H_) */
