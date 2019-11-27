/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-07-01
 * C1A1E2_main.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program prompts user for decimal input, evaluates equation based on input,
 * then prints the user input, the equation, and the result.
 */

#include <stdio.h>

int main(void)
{
    /* Print user prompt */
    printf("Enter any decimal numeric value: ");
    /* declare and initialize input variable */   
    double input_value;
    /* Assign input to variable using double formatting */
    scanf("%lg", &input_value);
    /* Calculate expression with user input and assign to variable */
    double expression_result = input_value * input_value * input_value
        * 3 - input_value * input_value * 5 + 6;
    /* Print the input value and expression result. Format as values as floats */
    printf("If x = %g the value of \"3x^3 - 5x^2 + 6\" is %g", input_value, expression_result);
    return 0;
}
