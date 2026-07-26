/*==================================================================================================
*   AUTOSAR Standard Types - wrapper for RTD/NXP types
*   Provides AUTOSAR-compatible type definitions required by RTD QSPI IP driver
==================================================================================================*/

#ifndef STANDARDTYPES_H
#define STANDARDTYPES_H

#include "BasicTypes.h"
#include "Compiler.h"

/* AUTOSAR version information */
#define STD_VENDOR_ID                       43U
#define STD_AR_RELEASE_MAJOR_VERSION        4
#define STD_AR_RELEASE_MINOR_VERSION        4
#define STD_AR_RELEASE_REVISION_VERSION     0
#define STD_SW_MAJOR_VERSION                4
#define STD_SW_MINOR_VERSION                0
#define STD_SW_PATCH_VERSION                0

/* AUTOSAR standard return type */
typedef uint8_t Std_ReturnType;
#define E_OK           0x00U
#define E_NOT_OK       0x01U

#endif /* STANDARDTYPES_H */
