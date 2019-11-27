/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-07-30
 * C1A3E3_main.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program to convert arbitrary user-entered hexadecimal integer value into
 * words based solely upon its numeric value, not the individual characters
 * entered. If input value is negative, the work "minus" will come first.
 */
#include <iostream>

using namespace std;

/* const variables */
const int INVALUE_DIVISOR = 16;
const int MAX_DIGIT_VALUE = INVALUE_DIVISOR - 1;

int main()
{
    /* prompt use to enter any hexadecimal integer value and store hex value */
    cout << "Enter any hexadecimal integer value: ";
    int inValue;
    cin >> hex >> inValue;
    
    /* store if input is negative */
    bool is_negative = inValue < 0;
    /* convert value to positive if negative */
    if (is_negative) {
        inValue = -inValue;
    }
    
    /* display variable's value and the equivalent words */
    cout << "\"";
    /* display user input. display minus if negative */
    if (is_negative) {
        cout << "-";
    }
    cout << hex << inValue << "\" in words is \"";
    if (is_negative) {
        cout << "minus ";
    }
    
    /* find most significant digit of input */
    int divisor = 1;
    int dividend = inValue;
    while (dividend > MAX_DIGIT_VALUE) {
        divisor *= INVALUE_DIVISOR;
        dividend /= INVALUE_DIVISOR;
    }
    
    /* 
     * pick off the digits of the positive input value left-to -right and
     * display them as words.
     */
    int display_dividend = inValue;
    do {
        int msd = display_dividend / divisor;
        
        /* switch statement for word lookup based on hex digits */
        switch (msd) {
            case 0:
                cout << "zero";
                break;
            case 1:
                cout << "one";
                break;
            case 2:
                cout << "two";
                break;
            case 3:
                cout << "three";
                break;
            case 4:
                cout << "four";
                break;
            case 5:
                cout << "five";
                break;
            case 6:
                cout << "six";
                break;
            case 7:
                cout << "seven";
                break;
            case 8:
                cout << "eight";
                break;
            case 9:
                cout << "nine";
                break;
            case 10:
                cout << 'A';
                break;
            case 11:
                cout << 'B';
                break;
            case 12:
                cout << 'C';
                break;
            case 13:
                cout << 'D';
                break;
            case 14:
                cout << 'E';
                break;
            case 15:
                cout << 'F';
                break;
        }
        /* 
         * remove the dividend's MSD by reducing it by the current
         * MSD times the divisor. set the divisor so that it will yield
         * the next MSD by dividing by 16. if the divisor is 0, end the loop
         * as there are not more characters to display.
         */
        display_dividend -= msd * divisor;
        divisor /= INVALUE_DIVISOR;
        
        /* display space after word. handling for special case of last word */
        if (divisor != 0) {
            cout << ' ';
        }   
    } while (divisor != 0);
    
    cout << "\"";
    return 0;
}
