#include <iostream>
using namespace std;

void cubeByReference(int*);

int main()
{
    int number = 5;
    cout << "number" << number << endl;

    cubeByReference (&number);
    cout << "number: " << number << endl;




    return 0;
}

void cubeByReference(int*nPtr)      //Header, this line will create a stack
{
    *nPtr = *nPtr * *nPtr * *nPtr;


}