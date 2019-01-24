/*
 * =====================================================================================
 *
 *       Filename:  even_odd.c
 *
 *    Description:  Determine if the input value is even or odd
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:36:40 AM
 *       Revision:  none
 *       Compiler:  gcc
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
    int num1;
    int num2;
    printf("Enter an even and an odd number: ");
    scanf("%d %d", &num1, &num2);
    
    if((num1 + num2) != 0)
    {
        printf("%d and %d are even and odd numbers\n", num1, num2);
    }
    else
    {
        printf("%d and %d are not even and odd numbers\n", num1, num2);
    }
    printf("Adios amigo\n");

    return 0;
}
// Function Definitions


