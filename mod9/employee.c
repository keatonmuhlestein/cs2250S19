/*
 * =====================================================================================
 *
 *       Filename:  employee.c
 *
 *    Description:  Define an employee structure for record keeping
 *
 *        Version:  1.0
 *        Created:  03/12/2019 09:10:56 AM
 *       Revision:  none
 *       Compiler:  gcc employee.c -o employee.out -lm
 *          Usage:  ./employee.out
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "employee.h"

// Main Function
int main(int argc, char* argv[])
{
    
    return 0;
}
// Function Definitions
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcGross
 *  Description:  Calculate the gross pay based on payRate and hours
 *  Param: Employee structure
 *  Return: Net Pay as a double
 * =====================================================================================
 */

double CalcGross(Employee* emp)
{
    return emp->payRate * emp->hours;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcNet
 *  Description:  Calculate the net pay based on payRate and hours
 *  Param: Employee structure
 *  Return: Net Pay as a double
 * =====================================================================================
 */
double CalcNet(Employee emp)
{
    // To access structure members when using a pointer (address)
    // use the dereference operator  ->
    return emp.payRate * emp.hours * (1 - emp.taxRate);
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CreateEmployee
 *  Description:  Create Employee record
 *  Param: Employee Structure
 * =====================================================================================
 */
void CreateEmployee(Employee* emp)
{
    emp->idNum = 1;
    emp->payrate = 7.50;
    emp->hours = 20;
    emp->taxRate = TAXRATE1;
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcPay
 *  Description:  Calculate Net and gross pay of employee
 *  Param: Employee Structure
 * =====================================================================================
 */
void CalcPay(Employee* emp)
{
    emp->netPay = CalcNet(*emp);
    emp->grossPay = CalcGross(emp);
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayEmp
 *  Description:  Display Employee information
 *  Param: Employee Structure
 * =====================================================================================
 */
void DisplayEmp(const Employee* emp)
{
    printf("Hi [%03d], your net pay for %lf hours at %lf rate is %lf\n",
            emp->idNum, emp->hours, emp->payRate, emp->netPay);
    printf("Your gross pay is %lf\n", emp->grossPay);
    return;
}
