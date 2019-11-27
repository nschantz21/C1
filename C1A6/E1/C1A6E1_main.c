/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-20
 * C1A6E1_main.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * A program to prompt the user for a string and display that string and its
 * length using strlen and MyStrLen. 
 */

#define BUF_SIZE 60

#include <stdio.h>
#include <string.h>

size_t MyStrlen(const char *s1);

int main(void)
{
    /* get user input and assign to char array */
    printf("enter a string: ");
    char buffer[BUF_SIZE];
    size_t length;
    fgets(buffer, BUF_SIZE, stdin);
    length = strlen(buffer);
    if (length != 0 && buffer[length - 1] == '\n')
        buffer[--length] = '\0';
    
    /* print string length using two different functions */
    printf("strlen(\"%s\") returned %zu\n", buffer, strlen(buffer));
    printf("MyStrlen(\"%s\") returned %zu\n", buffer, MyStrlen(buffer));
    
    return 0;
}
