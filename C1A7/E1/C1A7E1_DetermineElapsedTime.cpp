/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-27
 * C1A7E1_DetermineElapsedTime.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Function to calculate elapsed time between two MyTime type structs
 */
#include "C1A7E1_MyTime.h"

/* offset const variables. used if stop time is less than start */
const int HOUR_OFFSET = 24;
const int MIN_SEC_OFFSET = 60;

MyTime *DetermineElapsedTime(const MyTime *start, const MyTime *stop) 
{
    /* create static object in order to return pointer */
    static MyTime elapsedTime;
    
    /* initialize elapsedTime using difference between start and stop members */
    elapsedTime = MyTime
    {
        stop->hours - start->hours,
        stop->minutes - start->minutes,
        stop->seconds - start->seconds
    };
    
    /* adjust if stop time is less than start times. Assume it's next day */
    if (elapsedTime.seconds < 0) 
    {
        --elapsedTime.minutes;
        elapsedTime.seconds += MIN_SEC_OFFSET;
    }
    if (elapsedTime.minutes < 0) 
    {
        --elapsedTime.hours;
        elapsedTime.minutes += MIN_SEC_OFFSET;
    }
    if (elapsedTime.hours < 0) 
    {
        elapsedTime.hours += HOUR_OFFSET;
    }
    
    /* handle special case of times being equal */
    if (elapsedTime.hours == 0 
        && elapsedTime.minutes == 0
        && elapsedTime.seconds == 0) 
    {
        elapsedTime.hours = HOUR_OFFSET;
    }
    
    return &elapsedTime;
}
