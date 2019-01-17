/*
 * =====================================================================================
 *
 *       Filename:  bmi2.c
 *
 *    Description:  Calculate the BMI with floating points.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:24 AM
 *       Revision:  none
 *       Compiler:  gcc bmi2.c -o bmi2 -lm
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    //BMI = weight/height**2
    // 1 Capture user input:
   
    double weight = 0;
    double height = 0;
    double bmi = 0;
    printf("Please enter weight in kg: ");
    scanf("%lf", &weight);
    printf("Now, please enter your height in centimeters: ");
    scanf("%lf", &height);
    bmi = weight/pow(height, 2);
    printf("With %lf kg and %lf centimeters, your BMI is %lf\n", weight, height, bmi);
    printf("Done\n");
    return 0;
}
// Function Definitions


