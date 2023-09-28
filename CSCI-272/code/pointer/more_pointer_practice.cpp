#include <iostream>
using namespace std;

/*
int main()
{
    double y =5.0;
    double *yPtr = NULL;
    yPtr = &y;

    cout << "y:\t" << y << endl;
    cout << "yPtr:\t" << yPtr << endl;
    cout << " *yPtr:\t" << *yPtr << endl; //this line uses the derefrencing operator will just give the exact value of the address location


    return 0;
}
*/

int main()
{
    int myAge;
    int *myAgePtr = &myAge;

    myAge = 5;
    cout << "myAge:" << myAge << "\t";
    cout << "myAgePtr:" << *myAgePtr << "\n";

    *myAgePtr = 7;
    cout << "myAge: " << myAge <<"\t";
    cout << "myAgePtr:" << *myAgePtr << "\n";
    cout << "/t value:" << &myAge;
return 0;

}


/*
int main()
{
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    cout << "The address of a is " << &a << "\nThe value of a Ptr is " << aPtr;
    cout << "\n\nThe value of a is " << a << "\nThe value of * aPtr is " << *aPtr;
    cout << endl;
    cout << "&* aPtr: " << &* aPtr << "\t*& Ptr: " << *& aPtr << endl; //This will just refrence the same memory address
    return 0;

    // * and & are inverse of each other.

    return 0;
}
*/
