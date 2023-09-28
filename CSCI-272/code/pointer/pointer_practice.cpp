#include <iostream>
using namespace std;

int main()
{
    int age = 50;
    int *agePtr;

    agePtr = &age;

    cout << "age:\t" << age;
    cout << endl;
    cout << "agePtr:\t" << agePtr << endl;

    return 0;
}