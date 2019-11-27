/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-05
 * C1A4E2_main.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program loops PRINT_LOOPS times. each loop user input is prompted for 3 values of
 * types: char, int, int. Within the loop the 4 versions of the overloaded
 * PrintLines function are called. Each of the overloaded functions are
 * defined in separate files.
 */

#include <iostream>

using namespace std;

/* declare loop iterations as const variable per instructions */
const int PRINT_LOOPS = 5;

/* function prototypes of PrintLines */
void PrintLines(int display_letter, int columns, int rows);
void PrintLines(int display_letter, int columns);
void PrintLines(int display_letter);
void PrintLines();


int main()
{
    /* 
     * loop PRINT_LOOPS times per instructions, prompting user input and calling each
     * version of overloaded PrintLines function.
     */
    for (int print_iteration = 0; print_iteration < PRINT_LOOPS; print_iteration++) {
        /* prompt user input and assign to variables. */
        char input_char;
        int input_number, input_rows;
        cout << "Enter a character, the number of rows, and the number of "
            "columns to display in order and space-separated on the same line:\n";
        cin >> input_char >> input_number >> input_rows;
        
        /* Call overloaded PrintLines functions with appropriate arguments */
        PrintLines(input_char, input_number, input_rows);
        PrintLines(input_char, input_number);
        PrintLines(input_char);
        PrintLines();
    }
    
    return 0;
}
