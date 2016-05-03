/* 
 * File:   main.c
 * Author: desktop
 *
 * Created on April 27, 2016, 7:50 PM
 */


#include <pic16f877a.h>
#define Segment   0x01

void DELAY_ms(unsigned int ms_Count)
{
    unsigned int i,j;
    for(i=0;i<ms_Count;i++)
    {
        for(j=0;j<1000;j++);
    }
}




int main() {
	char seg_code[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0x88,0x83,0xc6,0xa1,0x86,0x8e};
	int cnt;

	/* Configure the ports as output */
	TRISB = 0x00;               // Data lines
	TRISD = 0x00;               // Control signal PORTD0

	while (1)
	{
		
		for (cnt = 0x00; cnt < 0x10; cnt++)   // loop to display 0-F
		{
			
			PORTD = Segment;
			PORTB = seg_code[cnt];
			DELAY_ms(2000);
			
		}
	}
}

