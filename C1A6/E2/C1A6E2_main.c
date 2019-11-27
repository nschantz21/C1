/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-20
 * C1A6E2_main.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program to compare two strings using strcmp and MyStrcmp, then report results.
 */

#define BUF_SIZE 60

#include <stdio.h>
#include <string.h>

int MyStrcmp(const char *s1, const char *s2);

int main(void)
{
    /* prompt user and store input into character arrays */
    printf("enter the first word: ");
    
    /* get the first word */
    char word1[BUF_SIZE];
    size_t length;
    fgets(word1, BUF_SIZE, stdin);
    length = strlen(word1);
    if (length != 0 && word1[length - 1] == '\n')
        word1[--length] = '\0';

    printf("enter the second word: ");
    /* get the second word */
    char word2[BUF_SIZE];
    size_t length2;
    fgets(word2, BUF_SIZE, stdin);
    length2 = strlen(word2);
    if (length2 != 0 && word2[length2 - 1] == '\n')
        word2[--length2] = '\0';
    
    /* print comparison results from both functions */
    printf("strcmp(\"%s\", \"%s\") returned %d\n", word1, word2, strcmp(word1, word2));
    printf("MyStrcmp(\"%s\", \"%s\") returned %d\n", word1, word2, MyStrcmp(word1, word2));
    return 0;
}
