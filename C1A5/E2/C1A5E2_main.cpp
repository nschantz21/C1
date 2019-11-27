/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-13
 * C1A5E2_main.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Prgram prompts user to enter any space-separated pair of decimals numeric
 * values on the same line, then display min and max of values.
 */
#include <iostream>
using namespace std;

/* function prototypes for max and min functions */
double &ComputeMaximum(const double &left, const double &right);
double &ComputeMinimum(const double &left, const double &right);

int main()
{
    /* prompt user for input and assign to variables */
    cout << "Enter any space-separated pair of decimal numeric values: ";
    
    double input1, input2;
    cin >> input1 >> input2;
    
    /* compute max and min of user inputs */
    double &minimum = ComputeMinimum(input1, input2);
    double &maximum = ComputeMaximum(input1, input2);
    
    /* print results */
    cout << "ComputeMinimum(" << input1 << ", " << input2 << ") returned "
        << minimum << "\n";
    cout << "ComputeMaximum(" << input1 << ", " << input2 << ") returned "
        << maximum << "\n";

    return 0;
}
