/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-07-09
 * C1A2E3_main.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program prompts user for positive decimal integer input.
 * Print Triangle based on user input using LEADER_CHAR and 
 * DIAGONAL_CHAR const character variables
 */

#include <iostream>

using namespace std;

/* Define leader and diagonal chars as const variables */
const char LEADER_CHAR = '^';
const char DIAGONAL_CHAR = '$';

int main()
{
    /* Prompt user for input */
    cout << "Enter any positive decimal integer: ";
    /* Take user input and assign to variable  */
    int triangle_rows;
    cin >> triangle_rows;
    /* Print DIAGONAL_CHAR and newline triangle_rows number of times */
    for (int diag_count = 0; diag_count < triangle_rows; ++diag_count)
    {
        /* Print LEADER_CHAR leader_count number of times */
        for (int leader_count = 0; leader_count < diag_count; ++leader_count)
        {
            cout << LEADER_CHAR;
        }
        cout << DIAGONAL_CHAR << '\n';
    }
    return 0;
}
