#ifndef _DOS_H_
#define _DOS_H_

#ifdef INTERCEPT
    #define sleep(x) mysleep(x)
#endif

struct time
{
    int ti_hour;
    int ti_min;
    int ti_sec;    
};

struct date
{
    int da_day;
    int da_mon;
    int da_year;    
};

#include "beeper.h"
#include <stdio.h>
#include <time.h>

void mysleep(int seconds);
void delay(long msec);
void sound(int freq);
void nosound(void);
void getdate(struct date);

#endif
