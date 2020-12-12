#include <STM8S103F3P.h>
#include "stdint.h"

//Delay function
void myDelay(uint32_t value);


main()
{
    //PB_DDR is port B data direction register address. PB5 pin set as output.
    PB_DDR |=0x20;
    //PB_CR1 is port B control register. PB5 pin set as push-pull output.
    PB_CR1 |=0x20;
    while(1)
    {
        //PB5 output set as high (logic 1).
        PB_ODR |=1<<5;// PB.5 = 1
        myDelay(500);
	//PB5 output set as low (logic 0).
        PB_ODR &=~(1<<5);// PB.5 = 0
        myDelay(500);
    }
    
}



void myDelay(uint32_t value)
{
 uint16_t i,j;
 for(i = 0; i < value; i++)
 {
		for(j = 0 ; j < 100 ; j++);
	}
}
