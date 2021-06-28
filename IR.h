#include "Main.h"
#include "Port.h"
int check_IR(int counter);
// int check_IR(int counter)
// {
   

//         if (!GPIO_ReadPortPin(IR1_PORT_DR, IR1_PIN))
//         {

//             counter = counter + 1;
//             if (counter > 4)
//             {
//                 //  LED_Toggle(LED_1);
//                 LED_SetState(LED_1, LED_ON);
//                 // warning = 1;
//             }
//         }
//         if ((!GPIO_ReadPortPin(IR2_PORT_DR, IR2_PIN)) && counter != 0)
//         {

//             counter = counter - 1;
//             if (counter <= 4)
//             {
//                 // LED_Toggle(LED_1);
//                 // LED_Toggle(LED_1);
//                 LED_SetState(LED_1, LED_OFF);
//                 // warning = 0;
//             }
//         }
//  return counter; 
// }