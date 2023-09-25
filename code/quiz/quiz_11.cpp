#include <iostream>
using namespace std;


int isPrime(int n)
{
int testnum = 2, isprime = 1;

while(isprime == 1 && testnum < n)
{
    if (n%testnum ==0)  
    isprime = 0;
    testnum += 1;
}
return testnum;
}
int main()
{
    int number = 0;
    cout << "Enter in an integer: " << endl;
    cin >> number;
    cout << isPrime(number);

return 0;
}