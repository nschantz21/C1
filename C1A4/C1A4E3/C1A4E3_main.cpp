/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-06
 * C1A4E3_main.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program loops PRINT_LOOPS times. Each loop user input is prompted for 3 values of
 * types: char, int, int. Within the loop the PrintLines function is called
 * 4 times. Each time the function is called, it uses one less user input
 * and instead uses the default argument from the prototype.
 */

#include <iostream>

using namespace std;

/* declare loop iterations as const variable per instructions */
const int PRINT_LOOPS = 5;

/* function prototype of PrintLines */
void PrintLines(int display_letter = 'Z', int times = 1, int rows = 1);


int main()
{
    /* 
     * loop PRINT_LOOP times per instructions, prompting user input and calling each
     * version of overloaded PrintLines function.
     */
    for (int print_count = 0; print_count < PRINT_LOOPS; print_count++) {
        /* prompt user input and assign to variables. */
        char input_char;
        int input_number, input_rows;
        cout << "Enter a character, the number of rows, and the number of "
            "columns to display in order and space-separated on "
            "the same line:\n";
        cin >> input_char >> input_number >> input_rows;
        
        /* 
         * Call PrintLines function, each time removing last user input so
         * default arguments will be used instead.
         */
        PrintLines(input_char, input_number, input_rows);
        PrintLines(input_char, input_number);
        PrintLines(input_char);
        PrintLines();
    }
    
    return 0;
}
