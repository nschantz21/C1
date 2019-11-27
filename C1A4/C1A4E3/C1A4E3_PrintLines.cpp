/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-05
 * C1A4E3_PrintLines.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Function to print character a given number of times for a given number of
 * rows, producing a row x column size block of the character.
 */
#include <iostream>

void PrintLines(int display_letter, int columns, int rows)
{
    /* print a row of display_letter */
    for (int row_count = 0; row_count < rows; row_count++) {
        /* print display_letter the number of times in the column argument */
        for (int col_count = 0; col_count < columns; col_count++) {
            std::cout << (char)display_letter;
        }
        std::cout << '\n';
    }
    return;
}
