#ifndef __PB_H__
#define __PB_H__

typedef enum
{
    PB_POWER_0,
    PB_POWER_1,
    PB_POWER_2,
    PB_POWER_3,
    PB_POWER_4,
    PB_POWER_5,
    PB_POWER_6
}tPB;

typedef enum
{
    PB_RELEASED,
    PB_PRE_PRESSED,
    PB_PRESSED,
    PB_PRE_RELEASED
}tPB_State;


void PB_Init(tPB pb, tPB_State initial_state);
void PB_Update(void);
tPB_State PB_GetState(tPB pb);
#endif // __PB_H__
