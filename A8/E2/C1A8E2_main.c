/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-09-02
 * C1A8E2_main.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program to display contents of arbitraty test file on group of lines at a time
 */
#include <stdlib.h>
#include <stdio.h>

#define LINESMAX 82
#define EXPECTED_ARGS 3
#define FILENAME 1
#define READLINES 2

int main(int argc, char *argv[])
{
    /* check correct number of commandline inputs */
    if (argc != EXPECTED_ARGS) {
        fputs("incorrect number of arguments.\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    /* test file exists output error message to sterr if not */
    FILE *inFp;
    if ((inFp = fopen(argv[FILENAME], "r")) == NULL) {
        fprintf(stderr, "%s %s\n", "Can't open file", argv[FILENAME]);
        exit(EXIT_FAILURE);
    }
    
    /* display lines until user stops pressing ENTER key or runs out of lines */
    int user_lines = atoi(argv[READLINES]);
    do {
        for (int line = 0; line < user_lines; line++) {
            /* get lines */
            char ch[LINESMAX];
            fgets(ch, LINESMAX, inFp);
            /* exit loop if end of file */
            if (feof(inFp)) {
                break;
            }
            printf("%s", ch);
        }
    } while ((fgetc(stdin) == '\n') && (feof(inFp) == 0));
    
    fclose(inFp);
    
    return 0;   
}
