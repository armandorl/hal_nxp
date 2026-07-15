/*==================================================================================================
*   Project              : M4_SRC_PROJECT_NAME
*   Platform             : M4_SRC_MCU_FAMILY
*   Peripheral           : M4_SRC_USED_PERIPHERAL
*   Dependencies         : M4_SRC_AR_MODULE_DEPENDENCY
*
*   Autosar Version      : M4_SRC_AR_SPEC_VERSION_MAJOR.M4_SRC_AR_SPEC_VERSION_MINOR.M4_SRC_AR_SPEC_VERSION_PATCH
*   Autosar Revision     : M4_SRC_AR_RELEASE_REVISION
*   Autosar Conf.Variant :
*   SW Version           : M4_SRC_SW_VERSION_MAJOR.M4_SRC_SW_VERSION_MINOR.M4_SRC_SW_VERSION_PATCH
*   Build Version        : M4_SRC_BUILD_ID
*
   (c) Copyright M4_SRC_YEAR_ID M4_SRC_COPYRIGHTED_TO
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

/**
*   @file main.c
*
*   @addtogroup main_module main module documentation
*   @{
*/

/* Including necessary configuration files. */
#include "Mcal.h"
#include "Linflexd_Uart_Ip.h"
#include "Linflexd_Uart_Ip_Irq.h"
#include "Clock_Ip.h"
#include "Siul2_Port_Ip.h"
#include "IntCtrl_Ip.h"
#include "OsIf.h"
#include "check_example.h"
volatile int exit_code = 0;
/* User includes */

/* User includes (#include below this line is not maintained by Processor Expert) */
#include <string.h>

/* Messages sent through UART interface */
/* Welcome message displayed at the console */
#define WELCOME_MSG1 "Hello\n"

#define WELCOME_MSG2 "Have a nice day!\n"

#define LINFLEXD_INSTANCE 0U

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main(void)
{
    uint32 varRemainingBytes;
    uint32 timeout = 0xFFFFF;
    volatile Linflexd_Uart_Ip_StatusType syncStatus = LINFLEXD_UART_IP_STATUS_ERROR;
    volatile Linflexd_Uart_Ip_StatusType asyncStatus = LINFLEXD_UART_IP_STATUS_ERROR;
    /* Initialize and configure clocks
    *  -   Setup system clocks, dividers
    *  -   see clock manager component for more details
    */
    Clock_Ip_Init(&Mcu_aClockConfigPB[0]);

    IntCtrl_Ip_EnableIrq(LINFLEXD0_IRQn);

    IntCtrl_Ip_InstallHandler(LINFLEXD0_IRQn, LINFLEXD0_UART_IRQHandler, NULL_PTR);

    /* Initialize pins */
    Siul2_Port_Ip_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);

    /* Initialize the Osif driver */
    OsIf_Init(NULL_PTR);

    /* Initialize LINFlexD module for UART usage */
    Linflexd_Uart_Ip_Init(LINFLEXD_INSTANCE, &Linflexd_Uart_Ip_xHwConfigPB_0_BOARD_INITPERIPHERALS);

    /* Send the first greeting message to console using asynchronous method */
    Linflexd_Uart_Ip_AsyncSend(LINFLEXD_INSTANCE, (const uint8*)WELCOME_MSG1, strlen(WELCOME_MSG1));

    /* Wait for data send */
    while((asyncStatus = Linflexd_Uart_Ip_GetTransmitStatus(LINFLEXD_INSTANCE, &varRemainingBytes)) == LINFLEXD_UART_IP_STATUS_BUSY);

    /* Send the second greeting message to console using synchronous method */
    syncStatus = Linflexd_Uart_Ip_SyncSend(LINFLEXD_INSTANCE, (const uint8*)WELCOME_MSG2, strlen(WELCOME_MSG2), timeout);

    Linflexd_Uart_Ip_Deinit(LINFLEXD_INSTANCE);
    Exit_Example((asyncStatus == LINFLEXD_UART_IP_STATUS_SUCCESS) && (syncStatus == LINFLEXD_UART_IP_STATUS_SUCCESS));
    return exit_code;
}

/** @} */
