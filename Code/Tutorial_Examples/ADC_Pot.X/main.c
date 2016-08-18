/* 
 * File:   main.c
 * Author: desktop
 *
 * Created on April 28, 2016, 4:38 PM
 */

#include "adc.h"
#include "uart.h"



int main() 
{
    int adcValue;
    
    ADC_Init();       /* Initialize the ADC module */
    UART_Init(9600);  /* Initialize UART at 9600 baud rate */
    
    while(1)
    {
        adcValue = ADC_GetAdcValue(0); // Read the ADC value of channel zero
        UART_Printf("ADC0 Value:%4d \n\r",adcValue);     // Send the value on UART
    }
    
    return (0);
}
