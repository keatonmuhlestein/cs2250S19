/*
 * =====================================================================================
 *
 *       Filename:  ballDropped.c
 *
 *    Description:  Get the distance travelled by a ball when it is dropped 
 *                  from a building.
 *    
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:06:46 AM
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
const double GRAVITY = 9.8;  // m/s^2
const double BUILDING = 500; //meters
// Function Prototypes

// Main Function
int main()
{
    double t = 0;
    double distance = 0;
    double distFromGrnd = 0;
    printf("Enter time travelled in seconds: ");
    scanf("%lf", &t);
    distance = 0.5 * GRAVITY * pow(t, 2);
    distFromGrnd = BUILDING - distance;
    printf("The ball has travelled a distance of %lf meters.\n", distance); 
    printf("The ball is %lf meters from the ground.\n", distFromGrnd);
    // Formula: s = 0.5 g t^2
    // Take user input: time travelled
    // Display distance

    return 0;
}
// Function Definitions


