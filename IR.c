#include "Main.h"
#include "Port.h"
#include "Led.h"
#include "IR.h"
int check_IR(int counter)
{
   

        if (!GPIO_ReadPortPin(IR1_PORT_DR, IR1_PIN))
        {

            counter = counter + 1;
            if (counter > 4)
            {
                LED_SetState(LED_2, LED_ON);
            }
        }
        if ((!GPIO_ReadPortPin(IR2_PORT_DR, IR2_PIN)) && counter != 0)
        {

            counter = counter - 1;
            if (counter <= 4)
            {
                LED_SetState(LED_2, LED_OFF);
               
            }
        }
 return counter; 
}