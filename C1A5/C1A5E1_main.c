/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-08-13
 * C1A5E1_main.c
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * A program in that file to implement a survey that prompts respondents
 * to  enter  a  decimal  integer  value  within  a  specified  range  
 * to  indicate  how  much they  like  a  product. The  survey  will  end
 * and  the  results  will  be  displayed  when  either  a  specific  number
 * of  legal  responses have been entered or a specific number of consecutive
 * out-of-range responses have been entered.
 */

#define MAX_RESPONDENTS 3
#define MIN_RESPONSE_VALUE 0
#define MAX_RESPONSE_VALUE 0
#define OUT_OF_RANGE_LIMIT 4

#include <stdio.h>


int main(void)
{
    /* initialize array with all zeros */
    int response_count[MAX_RESPONSE_VALUE + 1 - MIN_RESPONSE_VALUE] = {0};
    
    /* keep track of number of elementys in array */
    int response_elements = sizeof(response_count) / sizeof(int);
    
    /* conduct the survey and display the results */
    /* number of consecutive out-of-range responses */
    for (
        int consecutiveRangeErrors = 0, current_respondents = 0;
        (consecutiveRangeErrors < OUT_OF_RANGE_LIMIT) &
        (current_respondents < MAX_RESPONDENTS);) {
        /* get user input */
        int user_input;
        printf("enter a rating for the product: ");
        scanf("%d", &user_input);
        
        /* 
         * check for legal response set reset consecutiveRangeError. 
         * print error message if not legal, and increment
         */
        if ((user_input >= MIN_RESPONSE_VALUE) &
            (user_input <= MAX_RESPONSE_VALUE)) {
            /* get input location in array and increment one */
            int response_position =  user_input - MIN_RESPONSE_VALUE;
            
            response_count[response_position]++;
            /* reset bad response counter */
            consecutiveRangeErrors = 0;
            current_respondents++;
        } else {
            printf("an illegal entry has been made\n");
            consecutiveRangeErrors++;
        }
    }
    /* display results in descending order */
    /* table header */
    printf(
        "%s %13s\n"
        "------     ---------\n",
        "Rating", "Responses");
    /* table contents */
    for (int print_position = 0;
        print_position < response_elements;
        print_position++) {
        printf("%6d     %9d\n",
            (MAX_RESPONSE_VALUE - print_position),
            response_count[response_elements - 1 - print_position]);
    }

    return 0;
}
