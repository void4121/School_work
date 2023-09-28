#include <iostream>
#include "rectangle.h"
using namespace std;


int main()
{
    Rectangle rectangle1(12,25);
    cout << "The volume of rectangle1 is " << rectangle1.volume() << endl;

    return 0;
}