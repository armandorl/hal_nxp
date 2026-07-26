/*==================================================================================================
*   Zephyr QSPI RTD Stub Definitions
*   Provides stub implementations for RTD features not needed in Zephyr environment
==================================================================================================*/

#ifndef QSPI_IP_ZEPHYR_STUBS_H
#define QSPI_IP_ZEPHYR_STUBS_H

#ifdef __cplusplus
extern "C"{
#endif

/* ===== Fault Injection Point Stubs ===== */
/* These macros are called by RTD code but not needed in Zephyr - define as empty */

#define FLS_FIP_FR_ERROR_IPCOMMAND_WAIT_IN_WREN         0
#define FLS_FIP_FR_ERROR_IPCOMMAND_WAIT_IN_BASICERS     0
#define FLS_FIP_SR_BUSY_CHECKCOMMANDCOMPLETE            0
#define FLS_FIP_FR_ERROR_IPCOMMAND_INITDEVICE           0
#define FLS_FIP_FR_ERROR_IPCOMMAND                      0
#define QSPI_IP_FMEA_WAIT_TRANSACTION_COMPLETE          0
#define FLS_FIP_FR_ERROR_IPREAD                         0
#define FLS_FIP_FR_ERROR_IPWRITE                        0
#define QSPI_IP_FMEA_CONTROLLER_GET_STATUS              0

/* Macro to call fault injection - expands to nothing in Zephyr */
#define MCAL_FAULT_INJECTION_POINT(point) ((void)0)

/* ===== User Mode Support Stub ===== */
/* Zephyr doesn't use MCAL user mode - force privilege mode */
#define MCAL_ENABLE_USER_MODE_SUPPORT   STD_OFF

#ifdef __cplusplus
}
#endif

#endif /* QSPI_IP_ZEPHYR_STUBS_H */
