/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-06
 * C1A4E4_main.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program uses Macros and inline functions from C1A4E4_MaxOf.h header file
 * to compute maximum of three user input numbers up to size long double.
 */
#ifndef C1A4E4_MAXOF_H
#define C1A4E4_MAXOF_H

/* 
 * define macro version of Maximum function with two inputs. then use that
 * function to define another function to compute the maximum of three inputs
 */
#define mMaxOf2(A, B) ((A)<(B)?(B):(A))
#define mMaxOf3(A, B, C) (mMaxOf2(mMaxOf2((A), (B)), (C)))

/* 
 * define inline version of Maximum function with two inputs. then use that
 * function to define another function to compute the maximum of three inputs
 */
inline long double fMaxOf2(long double left, long double right)
{
    return left < right ? left : right;
}

inline long double fMaxOf3(long double input0, long double input1, long double input2)
{
    return fMaxOf2(fMaxOf2(input0, input1), input2);
}

#endif
