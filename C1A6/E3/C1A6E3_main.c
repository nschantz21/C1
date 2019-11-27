/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-20
 * C1A6E3_main.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program prompt user to give string and then select a substring to copy from
 * it using GetSubstring. Then print substring.
 */

#define BUF_SIZE 256

#include <stdio.h>
#include <string.h>

// prototype
char *GetSubstring(const char source[], int start, int count, char result[]);

int main(void)
{    
    printf("enter sequence of 0 or more arbitrary"
        "printable characters (may include spaces):");
    char source[BUF_SIZE];
    size_t length;
    fgets(source, BUF_SIZE, stdin);
    length = strlen(source);
    if (length != 0 && source[length - 1] == '\n')
        source[--length] = '\0';
    
    
    printf("enter a space separated start index and character count: ");
    int start, count;
    scanf("%d %d", &start, &count);

    char result[BUF_SIZE];

    printf("\"%s\", %d, %d, extracts \"%s\"\n", 
        source, start, count, GetSubstring(source, start, count, result));

    return 0;
}
