/*
 * HwSupport.c
 *
 *  Created on: Oct 3, 2023
 *      Author: ahmad
 */


#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib/debug.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"

#include "HwSupport.h"

#ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line)
{
    while(1);
}
#endif


void HwInit()
{
    //
    // Enable the GPIO port that is used for the on-board LED.
    //
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);

    //
    // Check if the peripheral access is enabled.
    //
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
    {
    }

    //
    // Enable the GPIO pin for the LED (PF3).  Set the direction as output, and
    // enable the GPIO pin for digital function.
    //

    // -- Green
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_3);
    // -- Blue
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2);
    // -- Red
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1);


}
void HwTurnOnLED(ledColors color)
{

    switch (color)
        {
            case GREEN:
                GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, GPIO_PIN_3);
                break ;
            case BLUE:
                GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, GPIO_PIN_2);
                break ;
            case RED:
                GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_PIN_1);
                break;
        }
}

void HwTurnLedOff(ledColors color)
{

    switch (color)
    {
        case GREEN:
            GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0x0) ;
            break ;
        case BLUE:
            GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0x0);
            break ;
        case RED:
            GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0x0);
            break;
    }
}
