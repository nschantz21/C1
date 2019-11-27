/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-07-30
 * C1A3E1_main.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * A program to compute and display a table of factorials.
 * 
 * To make sure there are no incorrect values resulting from trying
 * to store too large a number, you could convert the number to binary and
 * store the binary in an array so that you are not putting too much data
 * in a data type that cannot handle the size.
 */
#include <stdio.h>

int main(void)
{
    /* prompt user for integer input and assign to variable */
    printf("Enter an integer value greater than 0: ");
    int factorial_input;
    scanf("%d", &factorial_input);
    
    
    /* decalare a cumulative product */
    long running_product = 1;
    
    /* 
     * Print table header and divider with matching length.
     * The nbr column is 2 characters wide and the !nbr column
     * is 11 characters wide to accommodate the potential length
     * of the factorial valuies. There is an additional
     * separating space in betweeen the columns.
     */
    printf(
        "%s %11s\n"
        "---------------\n",
        "nbr", "nbr!");
    
    /* Begin loop at 1 to avoid setting factorial to 0 */
    for (int factorial_step = 1; factorial_step <= factorial_input; ++factorial_step) {
        /* 
         * update the running_product variable to the value of the previous value
         * times the current factorial step
         */
        running_product *= factorial_step;
        
        /* 
         * Print the right justified current factorial step and running product.
         * Leave space between numbers to avoid merging.
         */
        printf("%2d %11ld\n", factorial_step, running_product);
    }
    
    
    return 0;
}
