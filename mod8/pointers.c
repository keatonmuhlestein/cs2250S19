/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 08:37:03 AM
 *       Revision:  none
 *       Compiler:  gcc pointers.c -o pointers.c.out
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void PrintValues(int num, const int* p_num);
// Main Function
int main(int argc, char* argv[])
{
    int i = 7;
    int* pi = &i;   //It can store address of integer variables

    PrintValues(i, &i);
    //Modify i
    i *= 2;
    PrintValues(i, pi);
    //Change value via the pointer
    *pi = 99; //use dereference operator to update value at the address
    PrintValues(i, pi); //use the pointer to the variable

    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintValues
 *  Description:  Print the values of an integer and a pointer to integer
 *  Param: num: integer
 *  Param: p_num: pointer to integer
 * =====================================================================================
 */
void PrintValues(int num, const int* p_num)
{
    printf("Value of i = [%d] and pi = [%d]\n", num, *p_num);
   // printf("Value of pi = [%p] address of pi = [%p]\n", pi, &pi);
   // printf("Value of the address pi = [%d]\n", *pi);
    return;
}

