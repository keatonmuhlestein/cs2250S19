/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:43:10 AM
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
const double PI = 3.14159;
// Function Prototypes

// Main Function
int main()
{
    double theta, radius, x, y;
    printf("Enter your radius: ");
    scanf("%lf", &radius);
    printf("Enter your theta angle in degrees: ");
    scanf("%lf", &theta);
    theta = (theta*PI/180.0);
    x = radius*cos(theta);
    y = radius*sin(theta);
    printf("Your Cartesian Coordinates: x = [%6.2lf]\n", x);
    printf("Your Cartesian Coordinates: y = [%6.2lf]\n", y);
    
    //Capture user input for radius and theta angle(degrees)
    //Convert the theta angle to radians
    //Calculate your cartesian coordinates
    //Output the result

    return 0;
}
// Function Definitions


