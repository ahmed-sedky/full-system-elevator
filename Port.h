#ifndef __PORT_H__
#define __PORT_H__

#include "Main.h"

/* Leds' pins */
#define LED_1_PORT_DR (GPIO_PORT5_DATA)
#define LED_1_PORT_CR (GPIO_PORT5_DIRECTION)
#define LED_1_PIN (GPIO_PIN_6)

#define LED_2_PORT_DR (GPIO_PORT2_DATA)
#define LED_2_PORT_CR (GPIO_PORT2_DIRECTION)
#define LED_2_PIN (GPIO_PIN_7)
// buzzer bin
#define BUZZER_PORT_DR (GPIO_PORT3_DATA)
#define BUZZER_PORT_CR (GPIO_PORT3_DIRECTION)
#define BUZZER_PIN (GPIO_PIN_2)
// open door button pin
#define OPEN_PORT_DR (GPIO_PORT1_DATA)
#define OPEN_PORT_CR (GPIO_PORT1_DIRECTION)
#define OPEN_PIN (GPIO_PIN_7)
//MOTOR
#define Motor_IN1_PORT_DR (GPIO_PORT0_DATA)
#define Motor_IN1_PORT_CR (GPIO_PORT0_DIRECTION)
#define Motor_IN1_PIN (GPIO_PIN_4)

#define Motor_IN2_PORT_DR (GPIO_PORT0_DATA)
#define Motor_IN2_PORT_CR (GPIO_PORT0_DIRECTION)
#define Motor_IN2_PIN (GPIO_PIN_5)

//buttons bins
#define B1_PORT_DR  (GPIO_PORT1_DATA )
#define B1_CR       (GPIO_PORT1_DIRECTION)
#define B1_PIN      (GPIO_PIN_0)

#define B2_PORT_DR  (GPIO_PORT1_DATA )
#define B2_CR       (GPIO_PORT1_DIRECTION)
#define B2_PIN      (GPIO_PIN_1)

#define B3_PORT_DR  (GPIO_PORT1_DATA )
#define B3_CR       (GPIO_PORT1_DIRECTION)
#define B3_PIN      (GPIO_PIN_2)

#define B4_PORT_DR  (GPIO_PORT1_DATA )
#define B4_CR       (GPIO_PORT1_DIRECTION)
#define B4_PIN      (GPIO_PIN_3)

#define B5_PORT_DR  (GPIO_PORT1_DATA )
#define B5_CR       (GPIO_PORT1_DIRECTION)
#define B5_PIN      (GPIO_PIN_4)

#define B6_PORT_DR  (GPIO_PORT1_DATA )
#define B6_CR       (GPIO_PORT1_DIRECTION)
#define B6_PIN      (GPIO_PIN_6)

#define B7_PORT_DR  (GPIO_PORT1_DATA )
#define B7_CR       (GPIO_PORT1_DIRECTION)
#define B7_PIN      (GPIO_PIN_7)

// #define B8_PORT_DR  (GPIO_PORT1_DATA )
// #define B8_CR       (GPIO_PORT1_DIRECTION)
// #define B8_PIN      (GPIO_PIN_7)
// #define BUTTON_4DOWN_PORT_DR (GPIO_PORT5_DATA)
// #define BUTTON_4DOWN_PORT_CR (GPIO_PORT5_DIRECTION)
// #define BUTTON_4DOWN_PIN (GPIO_PIN_3)

// #define BUTTON_3UP_PORT_DR (GPIO_PORT0_DATA)
// #define BUTTON_3UP_PORT_CR (GPIO_PORT0_DIRECTION)
// #define BUTTON_3UP_PIN (GPIO_PIN_2)

// #define BUTTON_3DOWN_PORT_DR (GPIO_PORT5_DATA)
// #define BUTTON_3DOWN_PORT_CR (GPIO_PORT5_DIRECTION)
// #define BUTTON_3DOWN_PIN (GPIO_PIN_2)

// #define BUTTON_2UP_PORT_DR (GPIO_PORT0_DATA)
// #define BUTTON_2UP_PORT_CR (GPIO_PORT0_DIRECTION)
// #define BUTTON_2UP_PIN (GPIO_PIN_3)

// #define BUTTON_2DOWN_PORT_DR (GPIO_PORT5_DATA)
// #define BUTTON_2DOWN_PORT_CR (GPIO_PORT5_DIRECTION)
// #define BUTTON_2DOWN_PIN (GPIO_PIN_1)

// #define BUTTON_1UP_PORT_DR (GPIO_PORT4_DATA)
// #define BUTTON_1UP_PORT_CR (GPIO_PORT4_DIRECTION)
// #define BUTTON_1UP_PIN (GPIO_PIN_1)

// #define BUTTON_1DOWN_PORT_DR (GPIO_PORT5_DATA)
// #define BUTTON_1DOWN_PORT_CR (GPIO_PORT5_DIRECTION)
// #define BUTTON_1DOWN_PIN (GPIO_PIN_0)

// #define BUTTON_GUP_PORT_DR (GPIO_PORT4_DATA)
// #define BUTTON_GUP_PORT_CR (GPIO_PORT4_DIRECTION)
// #define BUTTON_GUP_PIN (GPIO_PIN_0)

// #define BUTTON_4_PORT_DR (GPIO_PORT1_DATA)
// #define BUTTON_4_PORT_CR (GPIO_PORT1_DIRECTION)
// #define BUTTON_4_PIN (GPIO_PIN_0)

// #define BUTTON_3_PORT_DR (GPIO_PORT1_DATA)
// #define BUTTON_3_PORT_CR (GPIO_PORT1_DIRECTION)
// #define BUTTON_3_PIN (GPIO_PIN_1)

// #define BUTTON_2_PORT_DR (GPIO_PORT1_DATA)
// #define BUTTON_2_PORT_CR (GPIO_PORT1_DIRECTION)
// #define BUTTON_2_PIN (GPIO_PIN_2)

// #define BUTTON_1_PORT_DR (GPIO_PORT1_DATA)
// #define BUTTON_1_PORT_CR (GPIO_PORT1_DIRECTION)
// #define BUTTON_1_PIN (GPIO_PIN_3)

// #define BUTTON_G_PORT_DR (GPIO_PORT1_DATA)
// #define BUTTON_G_PORT_CR (GPIO_PORT1_DIRECTION)
// #define BUTTON_G_PIN (GPIO_PIN_4)

// 7-Segment port
#define sevenSeg_PORT_CR (GPIO_PORT2_DIRECTION)
#define sevenSeg_PORT_DR (GPIO_PORT2_DATA)

// IR pins
#define IR1_PORT_DR (GPIO_PORT0_DATA)
#define IR1_PORT_CR (GPIO_PORT0_DIRECTION)
#define IR1_PIN (GPIO_PIN_7)

#define IR2_PORT_DR (GPIO_PORT0_DATA)
#define IR2_PORT_CR (GPIO_PORT0_DIRECTION)
#define IR2_PIN (GPIO_PIN_6)

// 7-Segment pins
// #define LED_a_PORT_DR   (GPIO_PORT1_DATA)
// #define LED_a_PORT_CR   (GPIO_PORT1_DIRECTION)
// #define LED_a_PIN       (GPIO_PIN_0)

// #define LED_b_PORT_DR   (GPIO_PORT1_DATA)
// #define LED_b_PORT_CR   (GPIO_PORT1_DIRECTION)
// #define LED_b_PIN       (GPIO_PIN_1)

// #define LED_c_PORT_DR   (GPIO_PORT1_DATA)
// #define LED_c_PORT_CR   (GPIO_PORT1_DIRECTION)
// #define LED_c_PIN       (GPIO_PIN_2)

// #define LED_d_PORT_DR   (GPIO_PORT1_DATA)
// #define LED_d_PORT_CR   (GPIO_PORT1_DIRECTION)
// #define LED_d_PIN       (GPIO_PIN_3)

// #define LED_e_PORT_DR   (GPIO_PORT1_DATA)
// #define LED_e_PORT_CR   (GPIO_PORT1_DIRECTION)
// #define LED_e_PIN       (GPIO_PIN_4)

// #define LED_f_PORT_DR   (GPIO_PORT1_DATA)
// #define LED_f_PORT_CR   (GPIO_PORT1_DIRECTION)
// #define LED_f_PIN       (GPIO_PIN_6)

// #define LED_g_PORT_DR   (GPIO_PORT1_DATA)
// #define LED_g_PORT_CR   (GPIO_PORT1_DIRECTION)
// #define LED_g_PIN       (GPIO_PIN_7)

/* End of code filling */
#endif // __PORT_H__
