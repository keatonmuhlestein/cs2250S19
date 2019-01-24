/*
 * =====================================================================================
 *
 *       Filename:  hex.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/24/2019 10:02:10 AM
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
const unsigned char PIN1 = 0x01;
const unsigned char PIN2 = 0x02;
const unsigned char PIN3 = 0x04;
const unsigned char PIN4 = 0x08;
// Function Prototypes

// Main Function
int main()
{
    unsigned char hex =0xF;
    printf("Enter a hex number (1 byte max from 0 to F): ");
    scanf("%hhx", &hex);
    printf("Hex [%02X] and dec[%d]\n", hex, hex);
    if(hex & PIN1)
    {
        printf("Pin1 is on\n");
    }
    

    return 0;
}
// Function Definitions


