#include <iostream>
#include "fraction.h"

using namespace std;

int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}


int main()
{

    string ex;
    char operand;
    fract fraction1, fraction2, result;
    cout << "running calculations" << endl;

    while (ex != "E") {
            cout << "Enter 'E' to exit: ";
            cin >> ex; // Read user input into ex
            cout << "Enter operator: +, -, *, /: \n";
            cin >> operand;
            fraction1 = fract(getRandomNumber(1, 15), getRandomNumber(1, 15));
            fraction2 = fract(getRandomNumber(1, 15), getRandomNumber(1, 15));
            cout << "\n\n";

            switch(operand)
            {
                case '+':
                	result = fraction1 + fraction2;
                	cout << "Fraction 1: " << endl;
                	fraction1.print();
                	cout << "\nFraction 2: " << endl;
                	fraction2.print();
                	result.simplify();
                	cout << "\nResult:" << endl;
                	result.print();
                	cout << "\n\n";
                   break;

                case '-':
                	result = fraction1 - fraction2;
                	cout << "Fraction 1: " << endl;
                	fraction1.print();
                	cout << "\nFraction 2: " << endl;
                	fraction2.print();
                	result.simplify();
                	cout << "\nResult:" << endl;
                	result.print();
                	cout << "\n\n";
                    break;

                case '*':
                	result = fraction1 * fraction2;
                	cout << "Fraction 1: " << endl;
                	fraction1.print();
                	cout << "\nFraction 2: " << endl;
                	fraction2.print();
                	result.simplify();
                	cout << "\nResult:" << endl;
                	result.print();
                	cout << "\n\n";
                    break;

                case '/':
                	result = fraction1 / fraction2;
                	cout << "Fraction 1: " << endl;
                	fraction1.print();
                	cout << "\nFraction 2: " << endl;
                	fraction2.print();
                	result.simplify();
                	cout << "\nResult:" << endl;
                	result.print();
                	cout << "\n\n";
                    break;
            }

        }
    return 0;
}
