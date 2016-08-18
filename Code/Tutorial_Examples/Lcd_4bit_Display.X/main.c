/* 
 * File:   main.c
 * Author: desktop
 *
 * Created on April 28, 2016, 1:55 PM
 */
#include "lcd.h"

int main() 
{
    /*Connect RS->PB0, RW->PB1, EN->PB2 and data bus to PORTB.4 to PORTB.7*/
    LCD_SetUp(PB_0,PB_1,PB_2,P_NC,P_NC,P_NC,P_NC,PB_4,PB_5,PB_6,PB_7);
    LCD_Init(1,16);
    
    LCD_DisplayString("Explore Lcd 1x16");
    
    while(1);
    
    return (0);
}
