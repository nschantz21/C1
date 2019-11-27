/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-06
 * C1A4E4_main.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program uses Macros and inline functions from C1A4E4_MaxOf.h header file
 * to compute maximum of three user input numbers up to size long double.
 */

#include <iostream>
#include "C1A4E4_MaxOf.h"

using namespace std;

int main()
{    
    /* prompt user for input of three numbers and assign to variables */
    cout << "Enter three space-separated decimal "
        "numeric values on the same line:\n";
    long double user_input0, user_input1, user_input2;
    cin >> user_input0 >> user_input1 >> user_input2;
    
    /* compute max of user input using the Macro function */
    cout << "mMaxOf3(" << user_input0 << ", " << user_input1 << ", " << user_input2 <<
        ") returned " << mMaxOf3(user_input0, user_input1, user_input2) << '\n'
        << "fMaxOf3(" << user_input0 << ", " << user_input1 << ", " << user_input2 <<
        ") returned " << mMaxOf3(user_input0, user_input1, user_input2) << '\n';
    return 0;
}
