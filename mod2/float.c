/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *
 *    Description:  Play with float points.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:26:46 AM
 *       Revision:  none
 *       Compiler:  gcc float.c -o float
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>


// Main Function
int main()
{
    float temp = 7.9;
    double f_temp = 0;
    printf("The temperature is %f Celsius\n", temp);
    printf("What is the temperature in Ogden now in Celsius: ");
    scanf("%f", &temp);
    f_temp = (temp * 9/5) + 32;
    printf("I see, your temp is %lf in Fahrenheit.\n", f_temp);
    
    return 0;
}
// Function Definitions


