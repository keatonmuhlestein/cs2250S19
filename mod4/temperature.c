/*
 * =====================================================================================
 *
 *       Filename:  temperature.c
 *
 *    Description:  Play with float points.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:26:46 AM
 *       Revision:  none
 *       Compiler:  gcc temperature.c -o temperature
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

#define CELSIUS 0
#define FAHRENHEIT 1
#define FREEZING_C 0
#define FREEZING_F 32
#define BOIL_C 100
#define BOIL_F 212
// Main Function
int main()
{
  //  float temp = 7.9;
    double in_temp, out_temp;
    int choice;
    //Ask user which temperature mode they want to use
    printf("Welcome to the temperature calculator\n");
    printf("Please enter your choice:\n");
    printf("\t0 for Celsius or 1 for Fahrenheit: ");
    scanf("%d", &choice);
    if (choice == CELSIUS)
    {
        printf("Welcome to the Celsius to Fahrenheit calculator\n");
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &in_temp);
        out_temp = (in_temp * 9.0/5.0) + 32;
        printf("Your temperature in Fahrenheit is: %.2lf\n", out_temp);
    }
    else if (choice == FAHRENHEIT)
    {
        printf("Welcome to the Fahrenheit to Celsius calculator\n");
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &in_temp);
        out_temp = (in_temp - 32) * 5.0/9.0;
        printf("Your temperature in Celsius is: %.2lf\n", out_temp);
    }
    else
    {
        printf("Sorry, you did not enter 0 or 1\n Adios amigo\n");
        return 0;
    }
    if (choice == CELSIUS)
    {
        if (in_temp >= BOIL_C)
        {
            printf("Your water is boiling\n");
        }
        else if (in_temp > FREEZING_C && in_temp < BOIL_C)
        {
            printf("Your water is liquid\n");
        }
        else 
        {
            printf("Your water is freezing\n");
        }
    }
    else
    {
        if (in_temp >= BOIL_F)
        {
            printf("Your water is boiling\n");
        }
        else if (in_temp > FREEZING_F && in_temp < BOIL_F)
        {
            printf("Your is liquid\n");
        }
        else 
        {
            printf("Your water is freezing\n");
        }
    }


    return 0;
}
// Function Definitions


