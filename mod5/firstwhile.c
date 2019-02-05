/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:45:04 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#define MAXCOUNT 4
// Constants

// Function Prototypes

// Main Function
int main()
{
    int count = 0;
    float grade, avg;
    float total = 0;
    while(count < MAXCOUNT)
    {
        printf("\nEnter %d hw grade(0-100): ", count + 1);
        scanf("%f", &grade);
        if(grade < 0 || grade > 100)
        {
            printf("Invalid grade...Please enter valid grade(0-100)");
            continue;
        }
        total += grade;
        count++;
    }
    avg = total/MAXCOUNT;
    printf("Your avg is [%6.2f]\n", avg);
    printf("\nBye amigo\n");

    return 0;
}
// Function Definitions


