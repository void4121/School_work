#include <iostream>
using namespace std;



void Factorit (int prime)
{
    int positivePrime = 0;
    if (prime > 0)
    {
        while(prime % 2 ==0)
        {
            cout << prime / 2;
            prime /= 2;
        }
    };
};

