/*
 * =====================================================================================
 *
 *       Filename:  charsChoice.c
 *
 *    Description:  Use conditionals
 *
 *
 *        Version:  1.0
 *        Created:  01/22/2019 10:11:50 AM
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
    char letter;
    printf("Enter the grade you want for this class: ");
    printf("Your choices are: 'A'\t'B'\t'C'\n");
    printf("\t\t\t'D' or 'F' : ");
    scanf("%c", &letter);
    if(letter == 'A')
    {
        printf("You need to get >= 94 points\n");
    }
    printf("Done\n");


    return 0;
}
// Function Definitions


