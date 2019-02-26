/*
 * =====================================================================================
 *
 *       Filename:  by_address.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/26/2019 08:51:05 AM
 *       Revision:  none
 *       Compiler:  gcc by_address.c -o by_address.c.out
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes
void DisplayPosition(double x, double y);
void DisplayOrigPosition(double* x, double* y);
void UpdatePosition(double* x, double* y, double new_x, double new_y);
void ResetPosition(double* x, double* y);
// Main Function
int main(int argc, char* argv[])
{
    double x, y;
    if(argc != 3)
    {
        printf("Usage: %s <X_POS> <Y_POS>\n", argv[0]);
        return 1;
    }
    x = atof(argv[1]);
    y = atof(argv[2]);
    DisplayOrigPosition(&x, &y);
    UpdatePosition(&x, &y, 2.0, 4.1);
    DisplayOrigPosition(&x, &y);
    ResetPosition(&x, &y);
    DisplayOrigPosition(&x, &y);


    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayPosition
 *  Description:  Display current point position
 *  Param: x => x coordinate address
 *  Param: y => y coordinate address
 *  Returns: nothing
 * =====================================================================================
 */
void DisplayPosition(double x, double y)
{
    printf("Your current position is (%4.2lf, %4.2lf)\n", x, y);
    printf("Your current position address is (%p, %p)\n", &x, &y);
    return;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayOrigPosition
 *  Description:  Display current point position
 *  Param: x => x coordinate address
 *  Param: y => y coordinate address
 *  Returns: nothing
 * =====================================================================================
 */
void DisplayOrigPosition(double* x, double* y)
{
    printf("Your current position is (%4.2lf, %4.2lf) (orig)\n", *x, *y);
    printf("Your current original address is (%p, %p) (orig)\n", &x, &y);
    return;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdatePosition
 *  Description:  Update current point position
 *  Param: x => x coordinate address pointer
 *  Param: y => y coordinate address pointer
 *  Param: x_new => new x coordinate
 *  Param: y_new => new y coordinate
 *  Returns: nothing
 * =====================================================================================
 */
void UpdatePosition(double* x, double* y, double new_x, double new_y)
{
    printf("*****Updating position*****\n");
    *x = new_x;
    *y = new_y;

    return;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ResetPosition
 *  Description:  Reset point position to origin (0,0)
 *  Param: x => x coordinate address pointer
 *  Param: y => y coordinate address pointer
 *  Returns: nothing
 * =====================================================================================
 */
void ResetPosition(double* x, double* y)
{
    printf("*****Reseting position*****\n");
    *x = 0;
    *y = 0;
    return;
}
