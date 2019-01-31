/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  Calculate the quadrant based on input angle
 *                  Quadrant I: angle between 0 and 90 
 *                  Quadrant II: angle between 90 and 180
 *                  Quadrant III: angle between 180 and 270
 *                  Quadrant IV: angle between 270 and 360
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:35:05 AM
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
#include <stdlib.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int angle;
    printf("Please enter an angle in degrees: ");
    scanf("%d", &angle);
    angle = angle % 360;
    if (angle < 0)
    {
        angle = abs(360 + angle);
    }
    if (angle > 0 && angle < 90)
    {
        printf("Your angle is in Quadrant I.\n");
    }
    
    else if (angle > 90 && angle < 180)
    {
        printf("Your angle is in Quadrant II.\n");
    }
    else if (angle > 180 && angle < 270)
    {
        printf("Your angle is in Quadrant III.\n");
    }
    else if (angle > 270 && angle < 360)
    {
        printf("Your angle is in Quadrant IV.\n");
    }
    else if (angle == 0 || angle == 360)
    {
        printf("Your angle is between Quadrant I and Quadrant IV.\n");
    }
    else if (angle == 90)
    {
        printf("Your angle is between Quadrant I and Quadrant II.\n");
    }
    else if (angle == 180)
    {
        printf("Your angle is between Quadrant II and Quadrant III.\n");
    }
    else if (angle == 270)
    {
        printf("Your angle is between Quadrant III and Quadrant IV.\n");
    }
    else 
    {
        printf("Invalid response\n");
    }

    return 0;
}
// Function Definitions


