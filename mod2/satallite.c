/*
 * =====================================================================================
 *
 *       Filename:  satallite.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:52:07 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
const double GRAVITY = 6.67e-11;
const double MASS = 5.97e24;
const double RADIUS = 6371e3;
const double PI = 3.1415941;
// Function Prototypes

// Main Function
int main()
{
    double height = 0;
    double time = 0;
    double part1 = 0;
    double part2 = 0;
    printf("Enter the period (time) in seconds: ");
    scanf("lf", &time);
    part1 = GRAVITY * MASS * pow(time, 2);
    part2 = 4 * pow(PI, 2);
    height = pow(part1 * part2, 1/3) - RADIUS;
    printf("Your satellite after %lf seconds is %lf meters from the earth\n",
            time, height);
    // Height = [(G M T^2)/(4Pi^2)]^1/3 - R

    return 0;
}
// Function Definitions


