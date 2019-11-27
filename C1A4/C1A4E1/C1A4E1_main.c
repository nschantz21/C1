/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-05
 * C1A4E1_main.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Prgram prompts user to enter any space-separated pair of decimals numeric
 * values on the same line, then display min and max of values.
 */
#include <stdio.h>

/* function prototypes for max and min functions */
double ComputeMaximum(double left, double right);
double ComputeMinimum(double left, double right);

int main(void)
{
    /* prompt user for input and assign to variables */
    printf("Enter any space-separated pair of decimal numeric values: ");
    
    double input1, input2;
    scanf("%lf %lf", &input1, &input2);
    
    /* compute max and min of user inputs */
    double minimum = ComputeMinimum(input1, input2);
    double maximum = ComputeMaximum(input1, input2);
    
    /* print results */
    printf("ComputeMinimum(%e, %e) returned %e\n", input1, input2, minimum);
    printf("ComputeMaximum(%e, %e) returned %e\n", input1, input2, maximum);

    return 0;
}
