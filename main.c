
#define F_CPU 16000000UL 
#include <xc.h>
#include <util/delay.h>
int main(void)
{
	DDRB=0XFF;
	//Activate PORTB as output for all pin
    while(1)
    {
        PORTB=0XFF;
		_delay_ms(1000); //1000ms = 1s
		PORTB=0X00;
		_delay_ms(1000); //1000ms = 1s
	}
		    
}