//*****************************************************************************
//
// blinky.c - Simple example to blink the on-board LED.
//
// Copyright (c) 2012-2017 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.4.178 of the EK-TM4C123GXL Firmware Package.
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
//#include "inc/hw_memmap.h"
//#include "driverlib/debug.h"
//#include "driverlib/gpio.h"
//#include "driverlib/sysctl.h"

#include "HwSupport.h"

//*****************************************************************************
//
//! \addtogroup example_list
//! <h1>Blinky (blinky)</h1>
//!
//! A very simple example that blinks the on-board LED using direct register
//! access.
//
//*****************************************************************************

//*****************************************************************************
//
// The error routine that is called if the driver library encounters an error.
//
//*****************************************************************************


//*****************************************************************************
//
// Blink the on-board LED.
//
//****************************************************************************





void waitFor(int loopCount)
{
   volatile uint32_t ui32Loop;
   for(ui32Loop = 0; ui32Loop < loopCount; ui32Loop++)
   {
   }
}

int main(void)
{
    //volatile uint32_t ui32Loop;

    ledColors greenColor = GREEN;
    ledColors blueColor = BLUE;
    ledColors redColor = RED;

    while(1)
    {

        HwInit();
        HwTurnOnLED(greenColor);
        waitFor(200000);
        HwTurnLedOff(greenColor);

        HwTurnOnLED(blueColor);
        waitFor(200000);
        HwTurnLedOff(blueColor);

        HwTurnOnLED(redColor);
        waitFor(200000);
        HwTurnLedOff(redColor);

    }
}
