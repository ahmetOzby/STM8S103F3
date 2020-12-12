#include <STM8S103F3P.h>
#include "stdint.h"

void myDelay(uint32_t value);


main()
{

    PB_DDR |=0x20;// PB.5 as Output
    PB_CR1 |=0x20;// PB.5 as Push Pull Type Output
    while(1)
    {
        PB_ODR |=1<<5;// PB.5 = 1
        myDelay(500);
        PB_ODR &=~(1<<5);// PB.5 = 0
        myDelay(500);
    }
    
}



void myDelay(uint32_t value)
{
 int i,j;
 for(i = 0; i < value; i++)
 {
		for(j = 0 ; j < 100 ; j++);
	}
}