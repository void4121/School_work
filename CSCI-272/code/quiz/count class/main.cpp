#include <iostream>
#include "Counter.cpp"
using namespace std;

int main ()
{
    Count counter;
    Count & counterRef = counter;
    Count * counterPtr = &counter;

    cout << "Set x to 1 and print using the object's name: ";
    counter.setX(1);
    counterRef.print();

    cout << "Set x to 2 and print using the object's name: ";
    counter.setX(2);
    counterRef.print();

    cout << "Set x to 3 and print using the object's name: ";
    counter.setX(3);
    counterRef.print();
    return 0;
}