/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  First Hello World in C++
 *
 *        Version:  1.0
 *        Created:  04/02/2019 08:55:12 AM
 *       Revision:  none
 *       Compiler:  gcc hello.cpp -o hello.out -lm
 *          Usage:  ./hello.out
 *
 *         Author:  Keaton Muhlestein (), keatonmuhlestein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++
#include <iostream>
using namespace std;

// Constants and Globals

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int num;
    // for output use cout
    cout << "Hello C++" << endl;
    cout << "Enter a number: " << endl;
    // for input use cin
    cin >> num;
    cout << "You entered: " << num << " number." <<  endl;

    return 0;
}
// Function Definitions


