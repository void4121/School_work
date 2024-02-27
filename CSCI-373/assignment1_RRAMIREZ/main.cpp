#include <iostream>
#include "integer.h"
using namespace std;

int main()
{
    integer number1(5);
    integer number2(10);

    integer sum = number1 + number2;
    integer product = number1 * number2;
    integer difference = number1 - number2;
    integer quotient = number1 / number2;

    cout << "Final Answer:" << sum.getValue() << endl;
    cout << "Final Answer:" << product.getValue() << endl;
    cout << "Final Answer:" << difference.getValue() << endl;
    cout << "Final Answer:" << quotient.getValue() << endl;
}