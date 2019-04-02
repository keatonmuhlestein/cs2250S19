/*
 * =====================================================================================
 *
 *       Filename:  years_calc.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2019 09:05:52 AM
 *       Revision:  none
 *       Compiler:  gcc years_calc.cpp -o years_calc.out -lm
 *          Usage:  ./years_calc.out
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
#include <iomanip>
using namespace std;

// Constants and Globals
const double MILES_PER_LIGHT_YEARS = 5.879e+12;
const double PARSEC_PER_LIGHT_YEAR = 0.306601;
const double KM_PER_LIGHT_YEARS = 9.461e+12;
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    double light_years;
    cout << "Light Year Calculator" << endl;
    cout << endl;
    // get input
    cout << "Enter light years: ";
    cin >> light_years;
    // Calculate miles, km, and parsecs
    double miles = light_years * MILES_PER_LIGHT_YEARS;
    double km = light_years * KM_PER_LIGHT_YEARS;
    double parsecs = light_years * PARSEC_PER_LIGHT_YEAR;

    // Display results
    cout << endl << setprecision(8)
        << "SCIENTIFIC NOTATION" << endl
        << "Miles:       " << miles << endl
        << "Kilometers   " << km << endl
        << "Parsecs:     " << parsecs << endl;

    cout << fixed
        << "FIXED NOTATION" << endl
        << "Miles:       " << setw(24) << miles << endl
        << "Kilometers   " << setw(24) << km << endl
        << "Parsecs:     " << setw(24) << parsecs << endl;

    return 0;
}
// Function Definitions


