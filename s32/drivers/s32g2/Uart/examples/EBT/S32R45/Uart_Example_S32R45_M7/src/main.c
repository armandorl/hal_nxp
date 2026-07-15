/*
*   (c) Copyright M4_SRC_YEAR_ID M4_SRC_COPYRIGHTED_TO
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be used strictly
*   in accordance with the applicable license terms.  By expressly accepting
*   such terms or by downloading, installing, activating and/or otherwise using
*   the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms.  If you do not agree to
*   be bound by the applicable license terms, then you may not retain,
*   install, activate or otherwise use the software.
*
*   This file contains sample code only. It is not part of the production code deliverables.
*/

#ifdef __cplusplus
extern "C" {
#endif


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcu.h"
#include "OsIf.h"
#include "Uart.h"
#include "Port.h"
#include "Platform.h"
#include "Linflexd_Uart_Ip_Irq.h"
#include "check_example.h"
#include <string.h>

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#define UART_CHANNEL  0U

/* Welcome message displayed at the console */
#define WELCOME_MSG1 "Hello\n"

#define WELCOME_MSG2 "Have a nice day!\n"


/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
* @brief        Main function of the example
* @details      Initializez the used drivers and uses the Icu
*               and Dio drivers to toggle a LED on a push button
*/
int main(void)
{
    volatile Std_ReturnType Std_Uart_SyncStatus;
    volatile Uart_StatusType Uart_AsyncStatus;
    uint32 varRemainingBytes;
    uint32 timeout = 0xFFFFF;

    Std_Uart_SyncStatus = E_NOT_OK;
    Uart_AsyncStatus = UART_STATUS_TIMEOUT;

    /* Initialize the Mcu driver */
    Mcu_Init(NULL_PTR);

    /* Initialize the clock tree and apply PLL as system clock */
    Mcu_InitClock(McuClockSettingConfig_0);

    /* Apply a mode configuration */
    Mcu_SetMode(McuModeSettingConf_0);

    /* Initialize the Osif driver */
    OsIf_Init(NULL_PTR);

    /* Initialize all pins using the Port driver */
    Port_Init(NULL_PTR);

    /* Initialize IRQs */
    Platform_Init(NULL_PTR);

    /* Initializes an UART driver*/
    Uart_Init(NULL_PTR);

    /* Uart_AsyncSend transmit data */
    (void)Uart_AsyncSend(UART_CHANNEL, (const uint8 *)WELCOME_MSG1, strlen(WELCOME_MSG1));

    /* Wait for Uart successfully send data */
    while((Uart_AsyncStatus = Uart_GetStatus(UART_CHANNEL, &varRemainingBytes, UART_SEND)) == UART_STATUS_OPERATION_ONGOING);

    /* Uart_AsyncSend transmit data */
    Std_Uart_SyncStatus = Uart_SyncSend(UART_CHANNEL, (const uint8 *)WELCOME_MSG2, strlen(WELCOME_MSG2), timeout);

    /* Deinitializes UART driver*/
    Uart_Deinit();

    Exit_Example((Std_Uart_SyncStatus == E_OK) && (Uart_AsyncStatus = UART_STATUS_NO_ERROR));

    return (0U);
}


#ifdef __cplusplus
}
#endif

/** @} */
