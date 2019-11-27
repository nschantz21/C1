/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-20
 * C1A6E3_GetSubstring.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program creates a new string of characters by copying them from an existing
 * string.
 */

char *GetSubstring(const char source[], int start, int count, char result[]) 
{
    /* save copy of result */
    char *res = result;
    
    /* skip given number of characters */
    while (*source && (start > 0)) {
        source++;
        start--;
    }
    
    /* copy given number of characters */
    while (*source && (count > 0)) {
        *result++ = *source++;
        count--;
    }
    
    /* add null pointer to end of target char array */
    *result = '\0';
    
    /* return pointer to first element in result array */
    return res;
}
