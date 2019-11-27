/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-09-02
 * C1A8E1_main.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program to initialize SavingsAccount object, prompt user for object member
 * attribute values, and finally print those values and the calculated accoutn
 * closure penalty.
 */


#include <iostream>
#include "C1A8E1_SavingsAccount.h"

using namespace std;

int main()
{
    SavingsAccount sav_acct;
    /* prompt user for input and print values */
    sav_acct.GetInitialValues();
    sav_acct.DisplayValues();
    
    /* calculate and display account closure penalty */
    cout << "Account closure penalty: " << sav_acct.CalculatePenalty() << '\n';
    
    return 0;    
}
