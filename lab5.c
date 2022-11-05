
#include "avr/io.h"
#define F_CPU 8000000
#include "avr/delay.h"

int Arr_DecToSeg[10] = {0b01000000,   /* 0 */
0b11111001,   /* 1 */
0b10100100,   /* 2 */
0b10110000,   /* 3 */
0b10011001,   /* 4 */
0b10010010,   /* 5 */
0b10000010,   /* 6 */
0b11111000,   /* 7 */
0b10000000,   /* 8 */
0b10010000,   /* 9 */
					  };

void main(void)
{
	int LoopCounter;
	
	/* Set D1 as input and rest of pins as Output Pins */
	DDRD   = 0xff;
	
	
	while(1)
	{
		/* Check if D1 is High, Turn LED on */
		for(LoopCounter=0; LoopCounter <10;LoopCounter++)
		{
			PORTD = Arr_DecToSeg[LoopCounter];
			_delay_ms(300);
		}		
	}
}