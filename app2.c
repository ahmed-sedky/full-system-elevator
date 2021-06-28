#include "Main.h"
#include "Port.h"
#include "Led.h"
#include "PushButton.h"
#include "seven_seg.h"
#include "IR.h"
#include "motor.h"
#include "Common.h"


int counter1 =  0;
int counter2 =  0;
int counter3 =  0;

void main()
{
    
    // diable the watch dog
    WDTCN = 0x0DE;
    WDTCN = 0x0AD;

    OSCICN = 0x014; // 2MH clock
    // config cross bar
    XBR0 = 0x00;
    XBR1 = 0x14; // enable interrupt crossbar
    XBR2 = 0x40; // Cross bar enabled , weak Pull-up enabled
 
    motor_init();
    PB_Init(PB_POWER_0, PB_RELEASED);
    PB_Init(PB_POWER_1, PB_RELEASED);
    PB_Init(PB_POWER_2, PB_RELEASED);
    PB_Init(PB_POWER_3, PB_RELEASED);
    PB_Init(PB_POWER_4, PB_RELEASED);
    PB_Init(PB_POWER_5, PB_RELEASED);
    PB_Init(PB_POWER_6, PB_RELEASED);
    // PB_Init(PB_POWER_7, PB_RELEASED);
    LED_Init(LED_1, LED_ON);
    LED_Init(LED_2, LED_OFF);
    P74OUT= 0xFF   ; 
    //inialization of IR
    GPIO_InitPortPin(IR1_PORT_CR, IR1_PIN, GPIO_IN);
    GPIO_InitPortPin(IR2_PORT_CR, IR2_PIN, GPIO_IN);  

    while (1)
    { // assume the door is open.
    counter1 = check_IR(counter1);
        PB_Update();
        if(PB_GetState(PB_POWER_0) == PB_PRESSED){  
            counter3 =0 ; 
            P5= 0x00   ; 
            Delay_MS(200);
            if (counter3 - counter2 > 0 )
            {
                ascend(counter3 -counter2);
                counter2 = counter3;
            }
            else if(counter3 - counter2 < 0 ){
                descend(counter2 -counter3);
                counter2 = counter3;
            }
            P5= 0xFF   ;
            sevenSegment_write(counter3);
            }
        else if(PB_GetState(PB_POWER_1) == PB_PRESSED){   
            counter3 =1 ; 
            P5= 0x00   ;
            Delay_MS(200);
            if (counter3 - counter2 > 0 )
            {
                ascend(counter3 -counter2);
                counter2 = counter3;
            }
            else if(counter3 - counter2 < 0 ){
                descend(counter2 -counter3);
                counter2 = counter3;
            }
            P5= 0xFF   ;
            sevenSegment_write(counter3);
            }
            else if(PB_GetState(PB_POWER_2) == PB_PRESSED)
            {                                               
            counter3 =2 ; 
            P5= 0x00   ;
            if (counter3 - counter2 > 0 )
            {
                ascend(counter3 -counter2);
                counter2 = counter3;
            }
            else if(counter3 - counter2 < 0 ){
                descend(counter2 -counter3);
                counter2 = counter3;
            }
            P5= 0xFF   ;
            sevenSegment_write(counter3);
            }
            else if(PB_GetState(PB_POWER_3) == PB_PRESSED)
            {                                               
            counter3 =3 ; 
            P5= 0x00   ;
            if (counter3 - counter2 > 0 )
            {
                ascend(counter3 -counter2);
                counter2 = counter3;
            }
            else if(counter3 - counter2 < 0 ){
                descend(counter2 -counter3);
                counter2 = counter3;
            }
            P5= 0xFF   ;
            sevenSegment_write(counter3);
            }
            else if(PB_GetState(PB_POWER_4) == PB_PRESSED)
            {                                               
                counter3 =0 ; 
                P5= 0x00  ;
                Delay_MS(200);
                if (counter3 - counter2 > 0 )
                {
                    ascend(counter3 -counter2);
                    counter2 = counter3;
                }
                else if(counter3 - counter2 < 0 ){
                    descend(counter2 -counter3);
                    counter2 = counter3;
                }
                P5= 0xFF   ;
                sevenSegment_write(counter3);
            }
            else if(PB_GetState(PB_POWER_5) == PB_PRESSED)
            {                                               
                counter3 =3 ; 
                P5= 0x00   ;
                Delay_MS(200);
                if (counter3 - counter2 > 0 )
                {
                    ascend(counter3 -counter2);
                    counter2 = counter3;
                }
                else if(counter3 - counter2 < 0 ){
                    descend(counter2 -counter3);
                    counter2 = counter3;
                }
                P5= 0xFF   ;
                sevenSegment_write(counter3);
        }
        else if(PB_GetState(PB_POWER_6) == PB_PRESSED)
            {                                               
                P5 = 0xFF;
                Delay_MS(5000);
                LED_SetState(LED_1, LED_ON);
                P5 = 0x00;
            }
    }
}

