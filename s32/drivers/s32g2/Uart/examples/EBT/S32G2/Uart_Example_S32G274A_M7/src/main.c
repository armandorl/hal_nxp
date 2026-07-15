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
#include "Uart.h"
#include "Port.h"
#include "Linflexd_Uart_Ip_Irq.h"
#include "check_example.h"
#include "Platform.h"
#include <string.h>

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#define UART_CHANNEL  0U

/* Welcome message displayed at the console */
#define WELCOME_MSG "This example is an simple echo using UART\r\n\
The board will greet you if you send 'Hello Board'\r\
\nNow you can begin typing:\r\n"

/* Error message displayed at the console, in case data is received erroneously */
#define ERROR_MSG "An error occurred! The application will stop!\r\n"

#define EXPECT_RX_MSG "Hello Board\n"

/* Length of the message to be received from the console */
#define MSG_LEN  50U

/* Interrupt IDs */
#define LINFLEXD0_INT_ID          ((uint8)82U)



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
    volatile Uart_StatusType Uart_Status;
    volatile Std_ReturnType Std_Uart_Status;
    uint32 varRemainingBytes;
    uint8 Rx_Buffer[MSG_LEN];
    uint8 Tx_Buffer[MSG_LEN];

    Std_Uart_Status = E_NOT_OK;
    /* Initialize the Mcu driver */
    Mcu_Init(NULL_PTR);

    /* Initialize the clock tree and apply PLL as system clock */
    Mcu_InitClock(McuClockSettingConfig_0);

    /* Apply a mode configuration */
    Mcu_SetMode(McuModeSettingConf_0);

    /* Initialize all pins using the Port driver */
    Port_Init(NULL_PTR);

    /* Initialize IRQs */
    Platform_Init(NULL_PTR);
    Platform_InstallIrqHandler(LINFLEXD1_IRQn, LINFLEXD1_UART_IRQHandler, NULL_PTR);

    /* Initializes an UART driver*/
    Uart_Init(&Uart_xConfig_VS_0);
    /* Uart_AsyncSend transmit data */
    (void)Uart_AsyncSend(UART_CHANNEL, (const uint8 *)WELCOME_MSG, strlen(WELCOME_MSG));
    /* Wait for Uart successfully send data */
    while(Uart_GetStatus(UART_CHANNEL, &varRemainingBytes, UART_SEND) == UART_STATUS_OPERATION_ONGOING);

    /* Infinite loop:
    *     - Receive data from user
    *     - Echo the received data back
    */
    while (1)
    {
        memset(Rx_Buffer, 0 , MSG_LEN);
        memset(Tx_Buffer, 0 , MSG_LEN);
        /* Receive and store data byte by byte until new line character is received,
        * or the buffer becomes full
        */
        (void)Uart_AsyncReceive(UART_CHANNEL, Rx_Buffer, strlen(EXPECT_RX_MSG));
        /* Wait for transfer to be completed */
        while(Uart_GetStatus(UART_CHANNEL, &varRemainingBytes, UART_RECEIVE) == UART_STATUS_OPERATION_ONGOING);

        /* Check the status */
        Uart_Status = Uart_GetStatus(UART_CHANNEL, &varRemainingBytes, UART_RECEIVE);

        if (Uart_Status != UART_STATUS_NO_ERROR)
        {
            /* If an error occurred, send the error message and exit the loop */
            (void)Uart_AsyncSend(UART_CHANNEL, (const uint8 *)ERROR_MSG, strlen(ERROR_MSG));
            while(Uart_GetStatus(UART_CHANNEL, &varRemainingBytes, UART_SEND) == UART_STATUS_OPERATION_ONGOING);
            break;
        }

        /* If the received string is "Hello Board", send back "Hello World" */
        if(strcmp((const char *)EXPECT_RX_MSG, (const char *)Rx_Buffer) == 0)
        {
            strcpy((char *)Tx_Buffer, "Hello World\n");
            /* Send the received data back */
            Std_Uart_Status = Uart_AsyncSend(UART_CHANNEL, Tx_Buffer, strlen((char *)Tx_Buffer));
            while(Uart_GetStatus(UART_CHANNEL, &varRemainingBytes, UART_SEND) == UART_STATUS_OPERATION_ONGOING);
            break;
        }
    }

    Uart_Deinit();
    Exit_Example((Uart_Status == UART_STATUS_NO_ERROR) && (Std_Uart_Status == E_OK));

    return (0U);
}


#ifdef __cplusplus
}
#endif

/** @} */
