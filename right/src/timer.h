#ifndef __TIMER_H__
#define __TIMER_H__

// Includes:

    #include "peripherals/pit.h"

// Macros:

    #define TIMER_INTERVAL_MSEC 1

// Variables:

    extern uint32_t CurrentTime;

// Functions:

    void Timer_Init(void);
    void Timer_SetCurrentTime(uint32_t *time);
    uint32_t Timer_GetElapsedTime(uint32_t *time);
    uint32_t Timer_GetElapsedTimeAndSetCurrent(uint32_t *time);

#endif
