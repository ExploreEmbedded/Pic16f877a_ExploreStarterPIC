/* 
 * File:   main.c
 * Author: desktop
 *
 * Created on April 27, 2016, 1:59 PM
 */

#include "gpio.h"

#define LED    PD_0     // Led is connected to PORTD.0
#define SW1    PD_2     // Switch is connected to PORTD.2

/* start the main program */
void main() 
{
    uint8_t value;

    GPIO_PinDirection(SW1,INPUT);        // Configure the switch pin as Input
    GPIO_PinDirection(LED,OUTPUT);       // Configure the Led pin as OUTPUT

  while(1)
    {

       value = GPIO_PinRead(SW1);         // Read the switch status
       GPIO_PinWrite(LED,value);          // ON/OFF the led as per switch status  
    }
}
