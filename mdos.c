#include "mdos.h"

void mysleep(int seconds)
{	
	long const      secs = (long)seconds;
    double const    frac = seconds - (double)secs;
    struct timespec req, rem;
    int            result;

    req.tv_sec  = (time_t)secs;
    req.tv_nsec = (long)(1000000000.0 * frac);
    if (req.tv_nsec > 999999999L)
        req.tv_nsec = 999999999L;

    rem.tv_sec  = (time_t)0;
    rem.tv_nsec = (long)0L;

    result = nanosleep(&req, &rem);   
}

void delay(long msec)
{
    struct timespec ts;
    int res;

    ts.tv_sec = msec / 1000;
    ts.tv_nsec = (msec % 1000) * 1000000;

    do {
        res = nanosleep(&ts, &ts);
    } while (res);    
}

void sound(int freq)
{
	openDevice();
	playFreq(freq, 0.1);
	closeDevice();
}

void nosound(void)
{
	closeDevice();
}

void getdate(struct date)
{
	time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    //tm.tm_yday;
	
}








