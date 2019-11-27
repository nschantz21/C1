/*
 * Nicholas Schantz 
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-07-09
 * C1A2E1_main.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0 
 * 
 * Program takes user input and assumes input as lowercase character.
 * Print user input, upper case equivalent, and decimal representation.
 * 
 * 1. If the user enters anything other than a lowercase character,
 * the program will return the value 32 decimal values less than the 
 * on the input decimal value on the ASCII or Unicode chart, depending on
 * implementation.
 * 2. If the user precedes the input character with a whitespace,
 * the program will run as if they had only put in a single literal space,
 * i.e.' '. This is becasue the cin.get function will only takes the first
 * character of input and does not ignore leading whitespace.
 */

#include <iostream>

using namespace std;

/*
 * const variable to represent the numerical
 * difference between ASCII upper and lower case.
 * Removes use of "magic number".
 */
const int CASE_DIFFERENCE = 'a' - 'A';

int main()
{
    /* prompt user for character input */
    cout << "Enter any character: ";
    /* read user input and store value */
    char input_lower_char;
    cin.get(input_lower_char);
    /* convert user input to uppercase */
    char converted = input_lower_char - CASE_DIFFERENCE;
    /* 
     * Display input, uppercase, and decimal value of converted character.
     * Using '+' for unsigned and signed char decimal display of converted.
     */
    cout << "The uppercase equivalent of '" << input_lower_char
        << "' is '" << converted << "' (decimal value = " << +converted << ")";
    return 0;
}
