/*
 * =====================================================================================
 *
 *       Filename:  guessNumber.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:53:51 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5
#define LIMIT 100
// Constants

// Function Prototypes

// Main Function
int main()
{
    int number, guess;
    srand(time(0));
    guess = rand() % LIMIT;
    for(int i = 0; i < MAX; i++)
    {
        printf("Please guess a number between 0 and %d\n", LIMIT);
        scanf("%d", &number);
        if (guess > number)
        {
            printf("Go lower\n");
        }
        else if (guess < number)
        {
            printf("Go higher\n");
        }
        else 
        {
            printf("Congratulationas, you got the correct number\n");
            return 0;
        }
    }
    printf("Sorry, you did not guess [%d] number.\nPlay again.\n", guess);

    return 0;
}
// Function Definitions


