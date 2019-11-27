/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-27
 * C1A7E1_main.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Prompt user for two times in format HH:MM:SS and calculate the elapsed time.
 * If second time is less than the first, assume it is for the next day.
 * Print user input and calculated elapsed time.
 */
#include <iostream>
#include <iomanip>
#include "C1A7E1_MyTime.h"
using namespace std;

const int LOOPS = 3;

MyTime *DetermineElapsedTime(const MyTime *start, const MyTime *stop);

int main()
{
    cout << setfill('0');
    for (int loop_iter = 0; loop_iter < LOOPS; loop_iter++) {
        /* prompt user and get input */
        cout << "Enter a start then stop time in Military Time (HH:MM:SS): ";
        
        MyTime startTime;
        MyTime stopTime;
        
        char delim1, delim2;
        
        cin >> startTime.hours >> delim1 >> 
            startTime.minutes >> delim2 >> startTime.seconds >> 
            stopTime.hours >> delim1 >> 
            stopTime.minutes >> delim2 >> stopTime.seconds;
        
        /* calculate elapsed time */
        MyTime *elapsedTime = DetermineElapsedTime(&startTime, &stopTime);
        
        /* print results */
        cout << "The time elapsed from " <<
            /* print start time */
            setw(2) << startTime.hours << ':' <<
            setw(2) << startTime.minutes << ':' <<
            setw(2) << startTime.seconds << " to " <<
            /* print stop time */
            setw(2) << stopTime.hours << ':' <<
            setw(2) << stopTime.minutes << ':' <<
            setw(2) << stopTime.seconds << " is " <<
            /* print elapsed time */
            setw(2) << elapsedTime->hours << ':' <<
            setw(2) << elapsedTime->minutes << ':' <<
            setw(2) << elapsedTime->seconds << '\n';
    }
    
    return 0;
}
