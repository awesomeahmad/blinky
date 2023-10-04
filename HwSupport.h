/*
 * HwSupport.h
 *
 *  Created on: Oct 3, 2023
 *      Author: ahmad
 */

#ifndef HWSUPPORT_H_
#define HWSUPPORT_H_

typedef enum {GREEN,BLUE,RED} ledColors;

extern void HwInit();
extern void HwTurnOnLED(ledColors color);
extern void HwTurnLedOff(ledColors color);

#endif /* HWSUPPORT_H_ */
