/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-13
 * C1A5E2_ComputeMaximum.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Function to compute the maximum of two numbers.
 */

double &ComputeMaximum(const double &left, const double &right)
{
    return  (double &)((left < right) ? right : left);
}
