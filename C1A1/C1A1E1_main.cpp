//
// Nicholas Schantz U08416544
// nschantz21@gmail.com
// C/C++ Programming I
// 141081 Ray Mitchell
// 2019-07-01
// C1A1E1_main.cpp
// Linux Ubuntu 16.04.4 LTS
// g++ 5.4.0
//
// Program prompts for user numeric input and outputs that value
// converted to decimal, octal, and hexadecimal representation.
//

#include <iostream>

using namespace std;

int main()
{
    /* User Prompt */
    cout << "Please enter an any Decimal, Integer, or Numeric value: ";
    /* Decalare input variable before assignment*/
    int input_number;
    /* assign user input to variable */
    cin >> input_number;
    //
    // output decimal, octal, and hexadecimal representation of the input value.
    // Return Output to decimal at end of output stream.
    //
    cout << dec << input_number << " decimal = " << oct << input_number
        << " octal = " << hex << input_number <<  " hexadecimal" << dec << '\n';
    return 0;
}
