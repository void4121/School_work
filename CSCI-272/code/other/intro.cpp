#include <iostream>
using namespace std;

int main()
{
    unsigned short shortVar = 5;
    unsigned long longVar = 65535;

    cout << "shortVar:\t" << shortVar;
    cout << "\tAddress of shortVar:\t" << &shortVar << endl;

    cout <<"longVar:\t" << longVar;
    cout << "\tAddress of longVar:\t" << &longVar << endl;

    return 0;
} 