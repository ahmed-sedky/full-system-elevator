#include "PushButton.h"
#include "Port.h"


#define NUMBER_OF_SAMPLE    (2)
#define NUMBER_OF_PUSH_BUTTONS  (7)

#define PB_PRESSED_VOLTAGE  (0)
#define PB_RELEASED_VOLTAGE  (1)


typedef struct
{
    unsigned char samples[NUMBER_OF_SAMPLE];
    tPB_State state;
}tPB_Info;

//static int x[10];
static tPB_Info pb_info[NUMBER_OF_PUSH_BUTTONS];


void PB_Init(tPB pb, tPB_State initial_state)
{
    /* Initialize hw pins */
    switch(pb)
    {
    case PB_POWER_0:
        GPIO_InitPortPin(B1_CR, B1_PIN, GPIO_IN);
        break;
    case PB_POWER_1:
        GPIO_InitPortPin(B2_CR, B2_PIN, GPIO_IN);
        break;
    case PB_POWER_2:
        GPIO_InitPortPin(B3_CR, B3_PIN, GPIO_IN);
        break;
    case PB_POWER_3:
        GPIO_InitPortPin(B4_CR, B4_PIN, GPIO_IN);
        break;
    case PB_POWER_4:
        GPIO_InitPortPin(B5_CR, B5_PIN, GPIO_IN);
        break;
    case PB_POWER_5:
        GPIO_InitPortPin(B6_CR, B6_PIN, GPIO_IN);
        break;
    case PB_POWER_6:
        GPIO_InitPortPin(B7_CR, B7_PIN, GPIO_IN);
        break;
    // case PB_POWER_7:
    //     GPIO_InitPortPin(B8_CR, B8_PIN, GPIO_IN);
    //     break;
    default:
        /* Should not be here */
        break;
    }

    /* Initialize state */
    pb_info[pb].state = initial_state;

    /* Initialize samples */
    switch (initial_state)
    {
    case PB_RELEASED:
    case PB_PRE_RELEASED:
        pb_info[pb].samples[0] = PB_RELEASED_VOLTAGE;
        pb_info[pb].samples[1] = PB_RELEASED_VOLTAGE;
        break;
    case PB_PRESSED:
    case PB_PRE_PRESSED:
        pb_info[pb].samples[0] = PB_PRESSED_VOLTAGE;
        pb_info[pb].samples[1] = PB_PRESSED_VOLTAGE;
        break;
    }
}

void PB_Update(void)
{
    tPB current_button = PB_POWER_0;
    for (current_button = PB_POWER_0; current_button <= PB_POWER_6; current_button++)
    {
        /* Update samples */
        pb_info[current_button].samples[0] = pb_info[current_button].samples[1];

        switch(current_button)
        {
        case PB_POWER_0:
            pb_info[current_button].samples[1] = GPIO_ReadPortPin(B1_PORT_DR, B1_PIN);
            break;
        case PB_POWER_1:
            pb_info[current_button].samples[1] = GPIO_ReadPortPin(B2_PORT_DR, B2_PIN);
            break;
        case PB_POWER_2:
            pb_info[current_button].samples[1] = GPIO_ReadPortPin(B3_PORT_DR, B3_PIN);
            break;
        case PB_POWER_3:
            pb_info[current_button].samples[1] = GPIO_ReadPortPin(B4_PORT_DR, B4_PIN); // dummy data
            break;
        case PB_POWER_4:
            pb_info[current_button].samples[1] = GPIO_ReadPortPin(B5_PORT_DR, B5_PIN); // dummy data
            break;
        case PB_POWER_5:
            pb_info[current_button].samples[1] = GPIO_ReadPortPin(B6_PORT_DR, B6_PIN); // dummy data
            break;
        case PB_POWER_6:
            pb_info[current_button].samples[1] = GPIO_ReadPortPin(B7_PORT_DR, B7_PIN); // dummy data
            break;
        // case PB_POWER_7:
        //     pb_info[current_button].samples[1] = GPIO_ReadPortPin(B8_PORT_DR, B8_PIN); // dummy data
        //     break;
        default:
            /* Should not be here */
            break;
        }

        /* Update state */
        switch(pb_info[current_button].state)
        {
        case PB_RELEASED:
            if((pb_info[current_button].samples[0] == PB_PRESSED_VOLTAGE) &&
            (pb_info[current_button].samples[1] == PB_PRESSED_VOLTAGE))
            {
                pb_info[current_button].state = PB_PRE_PRESSED;
            }
            break;
        case PB_PRE_PRESSED:
            if(pb_info[current_button].samples[1] == PB_PRESSED_VOLTAGE)
            {
                pb_info[current_button].state = PB_PRESSED;
            }
            break;
        case PB_PRESSED:
            if((pb_info[current_button].samples[0] == PB_RELEASED_VOLTAGE) &&
            (pb_info[current_button].samples[1] == PB_RELEASED_VOLTAGE))
            {
                pb_info[current_button].state = PB_PRE_RELEASED;
            }
            break;
        case PB_PRE_RELEASED:
            if(pb_info[current_button].samples[1] == PB_RELEASED_VOLTAGE)
            {
                pb_info[current_button].state = PB_RELEASED;
            }
            break;
        default:
            /* Should not be here */
            break;
        }

    }

}

tPB_State PB_GetState(tPB pb)
{
    tPB_State ret = PB_RELEASED;

    ret = pb_info[pb].state;

    return ret;
}