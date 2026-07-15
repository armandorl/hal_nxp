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

/* Message sent through UART interface */
#define WELCOME_MSG  "This example is an simple echo using Linflexd UART\r\n\
The board will greet you if you send 'Hello'\r\
\nNow you can begin typing:\r\n"
#define MSG  "\nHello World!\n"
#define ERROR_MSG "An error occurred! The application will stop!\r\n"
/* Length of the message to be received from the console */
#define RX_MSG_LEN  50U
#define LINFLEXD_INSTANCE 1U

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main(void)
{
    /* Write your code here */
    /* Buffer to store the received message */
    uint8 rxBuff[RX_MSG_LEN];
    uint32 varRemainingBytes;
    Linflexd_Uart_Ip_StatusType transmitStatus = LINFLEXD_UART_IP_STATUS_ERROR;
    Linflexd_Uart_Ip_StatusType receiveStatus = LINFLEXD_UART_IP_STATUS_ERROR;
    /* Initialize and configure clocks
    *  -   Setup system clocks, dividers
    *  -   see clock manager component for more details
    */
    Clock_Ip_Init(&Mcu_aClockConfigPB[0]);

    IntCtrl_Ip_EnableIrq(LINFLEXD1_IRQn);

    IntCtrl_Ip_InstallHandler(LINFLEXD1_IRQn, LINFLEXD1_UART_IRQHandler, NULL_PTR);

    /* Initialize pins */
    Siul2_Port_Ip_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);

    /* Initialize LINFlexD module for UART usage */
    Linflexd_Uart_Ip_Init(LINFLEXD_INSTANCE, &Linflexd_Uart_Ip_xHwConfigPB_1_VS_0);

    /* Send the greeting message to console */
    Linflexd_Uart_Ip_AsyncSend(LINFLEXD_INSTANCE, (uint8*)WELCOME_MSG, strlen(WELCOME_MSG));

    /* Wait for data send */
    while(Linflexd_Uart_Ip_GetTransmitStatus(LINFLEXD_INSTANCE, &varRemainingBytes) == LINFLEXD_UART_IP_STATUS_BUSY);
    transmitStatus = Linflexd_Uart_Ip_GetTransmitStatus(LINFLEXD_INSTANCE, &varRemainingBytes);

    /* Infinite loop */
    for( ;; )
    {
        /* Get the message sent by user from the console, using blocking method, each 300 ms */
        Linflexd_Uart_Ip_AsyncReceive(LINFLEXD_INSTANCE, rxBuff, strlen("Hello"));
        /* Wait for data receive */
        while(Linflexd_Uart_Ip_GetReceiveStatus(LINFLEXD_INSTANCE, &varRemainingBytes) == LINFLEXD_UART_IP_STATUS_BUSY);
        receiveStatus = Linflexd_Uart_Ip_GetReceiveStatus(LINFLEXD_INSTANCE, &varRemainingBytes);
        /* If the user typed "Hello", reply with the "Hello world!" message again */
        if(strcmp((char*)rxBuff, "Hello") == 0)
        {
            Linflexd_Uart_Ip_AsyncSend(LINFLEXD_INSTANCE, (uint8*)MSG, strlen(MSG));
            /* Wait for data send */
            while(Linflexd_Uart_Ip_GetTransmitStatus(LINFLEXD_INSTANCE, &varRemainingBytes) == LINFLEXD_UART_IP_STATUS_BUSY);
            break;
        }
        else
        {
            Linflexd_Uart_Ip_AsyncSend(LINFLEXD_INSTANCE, (uint8*)ERROR_MSG, strlen(ERROR_MSG));
            /* Wait for data send */
            while(Linflexd_Uart_Ip_GetTransmitStatus(LINFLEXD_INSTANCE, &varRemainingBytes) == LINFLEXD_UART_IP_STATUS_BUSY);
            break;
        }
    }

    Linflexd_Uart_Ip_Deinit(LINFLEXD_INSTANCE);

    Exit_Example((transmitStatus == LINFLEXD_UART_IP_STATUS_SUCCESS) && (receiveStatus == LINFLEXD_UART_IP_STATUS_SUCCESS));
    return exit_code;
}

/** @} */
