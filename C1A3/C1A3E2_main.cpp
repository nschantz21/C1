/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-07-30
 * C1A3E2_main.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program reverses digits of user-entered hexadecimal integer value
 * based solely on its numeric value, not individua characters entered.
 * If value is negative, the minus sign is displayed last.
 */
#include <iostream>

using namespace std;

const int INVALUE_DIVISOR = 16;

int main()
{
    /* prompt user for any hexadecimal integer value */
    cout << "Enter any hexadecimal integer value: ";
    /* read as hex and assign to variable */
    int inValue;
    cin >> hex >> inValue;
    bool is_negative = inValue < 0;
    /* Display variable's value and reversed value */
    cout << "\"";
    /* display minus sign and convert user_hex to positive if negative */
    if (is_negative) {
        cout << "-";
        inValue = -inValue;
    }
    /* Change output to hexadecimal and display user input and message */
    cout << hex << inValue << "\" in reverse is \"";
    /* display reversed value. stop when value is equal to 0 */
    do {
        cout << inValue % INVALUE_DIVISOR;
        inValue /= INVALUE_DIVISOR;
    } while (inValue != 0);
    /* display minus sign if negative */
    if (is_negative) {
        cout << "-";
    }
    /* display closing quote */
    cout << "\"";
   
    return 0;
}
