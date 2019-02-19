/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/19/2019 08:40:50 AM
 *       Revision:  none
 *       Compiler:  gcc main.c -o main.c.out
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM 5
// Function Prototypes

// Main Function
int main(void)
{
    double people[100];
    double sum = 0, avg, max;
    double * ptr = people;
    int i;
    for(i = 0; i < NUM; ++i)
    {
        printf("Enter weight %d:\n", i + 1);
        scanf("%lf", (ptr + i));
    }
        printf("You entered: ");
        for(i = 0; i < NUM; ++i)
        {
            printf("%lf ", *(ptr + i));
        
        sum = people[i] + sum;
        }
    printf("\nTotal weight: %lf\n", sum);
    avg = sum/NUM;
    printf("Average weight: %lf\n", avg);
        max = people[0];
        for(i = 1; i < NUM; ++i)
        {
            if(people[i] > max)
            {
                max = people[i];
            }
        }
    printf("Max weight: %lf\n", max);

    return 0;
}
// Function Definitions


