/* 
 * File:   Relay.c
 * Author: desktop
 *
 * Created on April 27, 2016, 6:44 PM
 */

#include "gpio.h"

#define Relay    PD_0     // Relay is connected to PORTD.0
#define SW1      PD_2     // Switch is connected to PORTD.2

/* start the main program */
void main() 
{
    uint8_t value;

    GPIO_PinDirection(SW1,INPUT);        // Configure the switch pin as Input
    GPIO_PinDirection(Relay,OUTPUT);       // Configure the Relay pin as OUTPUT

  while(1)
    {

       value = GPIO_PinRead(SW1);         // Read the switch status
       GPIO_PinWrite(Relay,!value);          // ON/OFF the Relay as per switch status  
    }
}


