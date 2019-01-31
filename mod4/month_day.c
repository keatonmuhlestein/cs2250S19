/*
 * =====================================================================================
 *
 *       Filename:  month_day.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/31/2019 09:18:08 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define JANUARY     1
#define FEBRUARY    2
#define MARCH       3
#define APRIL       4
#define MAY         5
#define JUNE        6
#define JULY        7
#define AUGUST      8
#define SEPTEMBER   9
#define OCTOBER     10
#define NOVEMBER    11
#define DECEMBER    12
// Function Prototypes

// Main Function
int main()
{
    int month, day;

    printf("Please enter the month (1 to 12): ");
    scanf("%d", &month);
    printf("Please enter the day of the month: ");
    scanf("%d", &day);
    if (month > 12 || month < 0)
    {
        printf("Invalid month\n");
        return 1;
    }
    switch(month)
    {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            if(day > 31 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
        
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            if(day > 30 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
        case FEBRUARY:
            if(day > 28 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
    }
    printf("You have entered valid month[%d] and day[%d].\n",
            month, day);
    return 0;
}
// Function Definitions


