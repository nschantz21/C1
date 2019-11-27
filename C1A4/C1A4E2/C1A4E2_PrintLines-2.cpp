/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-05
 * C1A4E2_PrintLines-2.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Function to print a provided character a given number of times on a 
 * single line, then a newline.
 */
#include <iostream>

void PrintLines(int display_letter, int columns)
{
    /* loop to print given char for each time in columns */
    for (int col_count = 0; col_count < columns; col_count++) {
        std::cout << (char)display_letter;
    }
    std::cout << '\n';
    return;
}
