/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:45:04 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>

#define MAXCOUNT 5
#define MINCOUNT 2
#define MINGRADE 0
#define MAXGRADE 100
#define MINSIZE  1
#define MAXSIZE  3
// Constants

// Function Prototypes

// Main Function
int main()
{
    int grade_count = 0, student_count = 1;
    float grade, avg;
    float total = 0;
    int hw_count = 0;
    float class_avg = 0;
    while(student_count <= MAXSIZE)
    {
    printf("Processing %d student grades: ", student_count);
    scanf("%d", &student_count);
        
    printf("Please amount of hw assignments (between %d and %d): ",
            MINCOUNT, MAXCOUNT);
    scanf("%d", &hw_count);
    if(hw_count < MINCOUNT)
    {
        hw_count = MINCOUNT;
        printf("You entered %d which is lower than the minimum\n",
                hw_count);
        printf("Your hw assignments were set to %d\n", MINCOUNT);
    }
    if(hw_count > MAXCOUNT)
    {
        hw_count = MAXCOUNT;
        printf("You entered %d which is greater than the max\n",
                hw_count);
        printf("Your hw assignments were set to %d\n", MAXCOUNT);
    }
    while(grade_count < MAXCOUNT)
    {
        printf("\nEnter hw #%d grade(%d-%d): ",
                grade_count + 1, MINGRADE, MAXGRADE);
        scanf("%f", &grade);
        if(grade < MINGRADE || grade > MAXGRADE)
        {
            printf("Invalid grade...Please enter valid grade(%d-%d)",
                    MINGRADE, MAXGRADE);
            continue;
        }
        total += grade;
        grade_count++;
        if(grade_count == hw_count)
        {
            break;
        }
    } // end of one student loop
    avg = total/hw_count;
    class_avg += avg;
    printf("Your avg is [%6.2f]\n", avg);
    grade_count = 0;
    total = 0;
    student_count++;
    } // end of students loop
    printf("Your class avg is [%6.2f]\n", class_avg/MAXSIZE);
    printf("\nBye amigo\n");

    return 0;
}
// Function Definitions


