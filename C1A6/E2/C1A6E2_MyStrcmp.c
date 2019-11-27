/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-20
 * C1A6E2_MyStrcmp.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program mimics functionality of strcmp. If s1 is lexicographically less than
 * s2 return a negative integer. If greater, return a positive integer. If the
 * two words are equal, return 0;
 */

int MyStrcmp(const char *s1, const char *s2)
{
    /* end if characters are not equal or if one of the words ends */
    while ((*s1 - *s2) == 0 & (*s1 || *s2)) {
        s1++;
        s2++;
    }
    return (int)(*s1 - *s2);
}
