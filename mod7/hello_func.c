/*
 * =====================================================================================
 *
 *       Filename:  hello_func.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/19/2019 08:51:42 AM
 *       Revision:  none
 *       Compiler:  gcc hello_func.c -o hello_func.c.out
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Hello_World();
void Hello_Number(int num);
int Get_Square(int num);
int Get_Number();
int Get_Sum(int num1, int num2);
double Get_BMI(double weight, double height);
// Main Function
int main(int argc, char* argv[])
{
    int i1 = 23;
    int num1, num2, sum;

    Hello_World();

    Hello_Number(i1);

    i1 = Get_Square(i1);
    Hello_Number(i1);

    i1 = Get_Number();
    Hello_Number(i1);

    num1 = Get_Number();
    Hello_Number(num1);
    num2 = Get_Number();
    Hello_Number(num2);
    sum = Get_Sum(num1, num2);
    Hello_Number(sum);

    double bmi = Get_BMI(65.8, 1.89);
    printf("Your BMI is [%lf]\n", bmi);

    return 0;
}
// Function Definitions
// To document your funtcions type: ,cfu 

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello_world()
 *  Description:  Print Hello world message
 * =====================================================================================
 */
void Hello_World()
{
    printf("Hola\n");
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello_Number()
 *  Description:  Prints the value of a number
 *       Param1:  num => integer value
 *       Return:  nothing
 * =====================================================================================
 */
void Hello_Number(int num)
{
    printf("Hola %d number\n", num);
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Square
 *  Description:  Get the square of an integer
 *       Param1:  num => integer value
 *       Return:  the square of num
 * =====================================================================================
 */
int Get_Square(int num)
{
    int square;
    //Algorithm
    square = num * num;
    return square;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Number
 *  Description:  Ask user to enter an integer
 *        Param:  None
 *       Return:  User int input
 * =====================================================================================
 */
int Get_Number()
{
    int input;
    //Algorithm
    printf("Please enter an int value: ");
    scanf("%d", &input);
    return input;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Sum
 *  Description:  Return the sum of two integers
 *       Param1:  First Integer
 *       Param2:  Second Integer
 *       Return:  First + Second
 * =====================================================================================
 */
int Get_Sum(int num1, int num2)
{
    return num1 + num2;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_BMI
 *  Description:  Calculate the BMI
 *                BMI = weight(kg)/height(m^2)
 *       Param1:  Weight in kg
 *       Param2:  Height in meters
 *       Return:  BMI
 * =====================================================================================
 */
double Get_BMI(double weight, double height)
{
    double bmi;
    //Algorithm
    bmi = weight/(height * height);
    return bmi;
}
