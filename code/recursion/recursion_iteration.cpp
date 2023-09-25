#include <iostream>
using namespace std;

unsigned long factorial (unsigned int);

int main()
{
    cout << "5! = " << factorial(5) << endl;
    return 0;
}

unsigned long factorial (unsigned int n)
{
    if (n == 0||n == 1)
        return 1;
    else
        return n * factorial(n-1);
}