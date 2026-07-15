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
#include "Mcu.h"
#include "Uart.h"
#include "Platform.h"
#include "Linflexd_Uart_Ip_Irq.h"
#include "check_example.h"
#include <string.h>
#include "Port.h"

volatile int exit_code = 0;
/* User macros */
#define UART_CHANNEL  0U

/* Welcome message displayed at the console */
#define WELCOME_MSG1 "Hello\n"

#define WELCOME_MSG2 "Have a nice day!\n"

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main(void)
{
    volatile Uart_StatusType Uart_Status;
    volatile Std_ReturnType Std_Uart_Status;
    uint32 varRemainingBytes;
    uint32 timeout = 0xFFFF;

    Std_Uart_Status = E_NOT_OK;
    /* Initialize the Mcu driver */
    Mcu_Init(NULL_PTR);

    /* Initialize the clock tree and apply PLL as system clock */
    Mcu_InitClock(McuClockSettingConfig_0);


    /* Apply a mode configuration */
    Mcu_SetMode(McuModeSettingConf_0);

    /* Initialize pins */
    Port_Init(NULL_PTR);

    /* Initialize IRQs */
    Platform_Init(NULL_PTR);

    /* Initialize the Osif driver */
    OsIf_Init(NULL_PTR);

    /* Initializes an UART driver*/
    Uart_Init(NULL_PTR);

    /* Uart_AsyncSend transmit data */
    (void)Uart_AsyncSend(UART_CHANNEL, (const uint8 *)WELCOME_MSG1, strlen(WELCOME_MSG1));

    /* Wait for Uart successfully send data */
    while((Uart_Status = Uart_GetStatus(UART_CHANNEL, &varRemainingBytes, UART_SEND)) == UART_STATUS_OPERATION_ONGOING);

    /* Uart_SyncSend transmit data */
    Std_Uart_Status = Uart_SyncSend(UART_CHANNEL, (const uint8 *)WELCOME_MSG2, strlen(WELCOME_MSG2), timeout);

    /* De-initializes UART driver*/
    Uart_Deinit();

    Exit_Example((Uart_Status == UART_STATUS_NO_ERROR) && (Std_Uart_Status == E_OK));

    return (0U);
}

/** @} */
