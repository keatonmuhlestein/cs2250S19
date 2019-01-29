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
        printf("Your temperature in Fahrenheit is: %lf\n", out_temp);
    }
    else if (choice == FAHRENHEIT)
    {
        printf("Welcome to the Fahrenheit to Celsius calculator\n");
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &in_temp);
        out_temp = (in_temp - 32) * 5.0/9.0;
        printf("Your temperature in Celsius is: %lf\n", out_temp);
    }
    else
    {
        printf("Sorry, you did not enter 0 or 1\n Adios amigo\n");
        return 0;
    }


        return 0;
}
// Function Definitions


