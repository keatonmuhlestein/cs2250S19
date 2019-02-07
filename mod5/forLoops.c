/*
 * =====================================================================================
 *
 *       Filename:  forLoops.c
 *
 *    Description:  Play with for loops
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:40:23 AM
 *       Revision:  none
 *       Compiler:  gcc forLoops -o forLoops.out
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#define MAX 5
// Constants

// Function Prototypes

// Main Function
int main()
{
    int num = 0;
    for (int i = 0; i < MAX; i++)
    {
        printf("your i [%d] num++[%d]\n", i, num++);
        printf("num is [%d]\n", num);
        printf("your i [%d] ++num[%d]\n", i, ++num);
    }
    printf("Bub bye\n");

    return 0;
}
// Function Definitions


