/* 
 * File:   main.c
 * Author: desktop
 *
 * Created on April 28, 2016, 10:08 PM
 */

#include "uart.h"

int main() 
{
    UART_Init(9600);
    
    while(1)
    {
        UART_Printf("Welcome to PIC Serial Programming by ExploreEmbedded\n\r");
    }
    return (0);
}
