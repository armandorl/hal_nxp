/*==================================================================================================
*   Zephyr QSPI Post-Build Configuration for S32G2
==================================================================================================*/

#ifndef QSPI_IP_PBCFG_H
#define QSPI_IP_PBCFG_H

#ifdef __cplusplus
extern "C"{
#endif

#include "Qspi_Ip_Types.h"

#define QSPI_IP_VENDOR_ID_PBCFG                    43
#define QSPI_IP_AR_RELEASE_MAJOR_VERSION_PBCFG     4
#define QSPI_IP_AR_RELEASE_MINOR_VERSION_PBCFG     4
#define QSPI_IP_AR_RELEASE_REVISION_VERSION_PBCFG  0
#define QSPI_IP_SW_MAJOR_VERSION_PBCFG             4
#define QSPI_IP_SW_MINOR_VERSION_PBCFG             0
#define QSPI_IP_SW_PATCH_VERSION_PBCFG             0

/* RTD expects these macros - match the PBCFG definitions above */
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_VENDOR_ID                    43
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_MAJOR_VERSION     4
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_MINOR_VERSION     4
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_REVISION_VERSION  0
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_SW_MAJOR_VERSION             4
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_SW_MINOR_VERSION             0
#define QSPI_IP_BOARD_InitPeripherals_PBCFG_SW_PATCH_VERSION             0

/* Number of QSPI controllers */
#define QSPI_IP_INSTANCE_COUNT     1U

/* Instance configuration is defined in Qspi_Ip_Controller.c as static */

#ifdef __cplusplus
}
#endif

#endif /* QSPI_IP_PBCFG_H */
