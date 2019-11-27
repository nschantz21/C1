/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-20
 * C1A6E1_MyStrlen.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Compute the length of a given string. Mimics behavior of strlen.
 */

#include <stddef.h>

size_t MyStrlen(const char *s1)
{
    /* find difference between char array beginning and endin null pointer */
    const char * const START = s1;
    while (*s1) {
        s1++;
    }
    /* cast to size_t */
    return (size_t)(s1 - START);
}
