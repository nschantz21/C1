/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-07-09
 * C1A2E2_main.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program prompts user for positive decimal integer input and stores value.
 * Print Triangle based on user input using LEADER and DIAGONAL character macros
 */

#include <stdio.h>

/* Define leader and diagonal chars as macros */
#define LEADER_CHAR '^'
#define DIAGONAL_CHAR '@'

int main(void)
{
    /* Print user prompt */
    printf("Enter any positive decimal integer value: ");
    /* Take user input and assign to variable */
    int triangle_rows;
    scanf("%d", &triangle_rows);
    /* Print DIAGONAL_CHAR and newline triangle_rows number of times */
    for (int diag_count = 0; diag_count < triangle_rows; ++diag_count)
    {
        /* Print LEADER_CHAR leader_count number of times */
        for (int leader_count = 0; leader_count < diag_count; ++leader_count)
        {
            printf("%c", LEADER_CHAR);
        }
        printf("%c\n", DIAGONAL_CHAR);
    }
    return 0;
}
