/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-27
 * C1A7E2_main.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program obtain nutritional information about several foods from the user then
 * displays a table containing this information.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FOOD_START 2
#define LUNCH_ITEMS 4
#define MAX_CHARS 60

void *SafeMalloc(size_t size)
{
    void *vp;
    /* test for allocation failure. output error if so */
    if ((vp = malloc(size)) == NULL) 
    {
        fputs("Out of Memory\n", stderr);
        exit(EXIT_FAILURE);
    }
    return(vp);
}


int main(void)
{
    /* Define Food struct and initialize first two elements of lunch array */
    struct Food
    {
        char *name;            /* "name" sttribute of food */
        int weight, calories;  /* "weight" and "calories" attributes of food */
    } 
    lunch[LUNCH_ITEMS] =
    {
        {"apple", 4, 100},
        {"salad", 2, 80}
    };
    /* loop through and assign remaining lunch items in lunch array */
    for (int item = FOOD_START; item < LUNCH_ITEMS; item++) 
    {
        /* user prompt */
        printf("%s", "Enter name(no whitespace), weight, calories: ");
        /* get user input and store weight and calories directly in element */
        char temp_name[MAX_CHARS];
        scanf("%59s %d %d", temp_name, &(lunch[item].weight), &(lunch[item].calories));
        /* dynamically allocate memory necessary for name member */
        size_t string_length = strlen(temp_name) + 1;
        lunch[item].name = (char *)SafeMalloc(string_length * sizeof(temp_name[0]));
        
        memcpy(lunch[item].name, temp_name, string_length);
    }
    
    /* Display table of all foods inthe array and their members */
    for (int food = 0; food < LUNCH_ITEMS; food++) 
    {
        printf("%-20s %4d %4d\n", lunch[food].name, lunch[food].weight, lunch[food].calories);
        /* free only dynamically allocated memory */
        if (food >= FOOD_START) 
        {
            free(lunch[food].name);
        }
    }
    
    return 0;
}
