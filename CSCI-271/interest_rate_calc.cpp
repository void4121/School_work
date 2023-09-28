#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float loan, rate, m, years, x;


    cout << "Enter in loan amount: ";
    cin >> loan;
    cout << "Enter in loan length in years: ";
    cin >> years;
    cout << "Enter in interest rate: ";
    cin >> rate;
    
    rate /= 100;
    
    m = (loan * (rate / 12)) / (1 - pow(1 + rate / 12,-12 * years));
    cout << "Monthly payements = " << m;
    
    return 0;
}


