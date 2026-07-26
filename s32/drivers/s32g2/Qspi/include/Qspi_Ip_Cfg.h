/*==================================================================================================
*   Zephyr QSPI Configuration for S32G2
*   Configuration wrapper that includes RTD-generated configuration
==================================================================================================*/

#ifndef QSPI_IP_CFG_H_ZEPHYR_WRAPPER
#define QSPI_IP_CFG_H_ZEPHYR_WRAPPER

#ifdef __cplusplus
extern "C"{
#endif

/* Include Zephyr-specific stubs for RTD features */
#include "Qspi_Ip_Zephyr_Stubs.h"

/* Include RTD-generated configuration which defines QSPI_IP_MEM_INSTANCE_COUNT and other settings */
#include "Qspi_Ip_Cfg_RTD.h"
#include "Qspi_Ip_Types.h"
#include "Qspi_Ip_PBcfg.h"

#ifdef __cplusplus
}
#endif

#endif /* QSPI_IP_CFG_H_ZEPHYR_WRAPPER */
