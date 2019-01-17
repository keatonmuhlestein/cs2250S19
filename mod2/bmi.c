/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  Calculate the BMI.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:24 AM
 *       Revision:  none
 *       Compiler:  gcc bmi.c -o bmi
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    //BMI = weight/height**2
    // 1 Capture user input:
   
    int weight = 0;
    int height = 0;
    int bmi = 0;
    printf("Please enter weight in pounds: ");
    scanf("%d", &weight);
    printf("Now, please enter your height in inches: ");
    scanf("%d", &height);
    bmi = weight/(height * height);
    printf("With %d lbs and %d inches, your BMI is %d\n", weight, height, bmi);
    printf("Done\n");
    return 0;
}
// Function Definitions


