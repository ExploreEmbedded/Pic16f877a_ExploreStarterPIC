/* 
 * File:   Buzzer.c
 * Author: desktop
 *
 * Created on April 27, 2016, 4:39 PM
 */

#include "gpio.h"

#define Buzzer    PD_0     // Buzzer is connected to PORTD.0
#define SW1       PD_2     // Switch is connected to PORTD.2

/* start the main program */
void main() 
{
    uint8_t value;

    GPIO_PinDirection(SW1,INPUT);        // Configure the switch pin as Input
    GPIO_PinDirection(Buzzer,OUTPUT);       // Configure the Buzzer pin as OUTPUT

  while(1)
    {

       value = GPIO_PinRead(SW1);         // Read the switch status
       GPIO_PinWrite(Buzzer,!value);          // ON/OFF theBuzzer as per switch status  
    }
}

