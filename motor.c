#include "Main.h"
#include "Port.h"
#include "motor.h"
#include "Common.h"

void motor_init()
{
    GPIO_InitPortPin(Motor_IN1_PORT_CR, Motor_IN1_PIN, 1);
    GPIO_InitPortPin(Motor_IN2_PORT_CR, Motor_IN2_PIN, 1);
}

void ascend(int s)
{
    GPIO_WritePortPin(Motor_IN1_PORT_DR, Motor_IN1_PIN, 1);
    GPIO_WritePortPin(Motor_IN2_PORT_DR, Motor_IN2_PIN, 0);
    Delay_MS(s* 1000);

    // GPIO_WritePortPin(Motor_IN1_PORT_DR, Motor_IN1_PIN, 0);
    // GPIO_WritePortPin(Motor_IN2_PORT_DR, Motor_IN2_PIN, 1);
    // Delay_MS(500);

    GPIO_WritePortPin(Motor_IN1_PORT_DR, Motor_IN1_PIN, 0);
}

void descend( int s)
{

    GPIO_WritePortPin(Motor_IN1_PORT_DR, Motor_IN1_PIN, 0);
    GPIO_WritePortPin(Motor_IN2_PORT_DR, Motor_IN2_PIN, 1);
    Delay_MS(s * 1000);

    // GPIO_WritePortPin(Motor_IN1_PORT_DR, Motor_IN1_PIN, 1);
    // GPIO_WritePortPin(Motor_IN2_PORT_DR, Motor_IN2_PIN, 0);
    // Delay_MS(500);

    GPIO_WritePortPin(Motor_IN2_PORT_DR, Motor_IN2_PIN, 0);
}

void motor_Led()
{
    GPIO_WritePortPin(Motor_IN1_PORT_DR, Motor_IN1_PIN, 1);
    Delay_MS(500);
}