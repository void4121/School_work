#include <iostream>
#include "Time.h"
#include "Time.cpp"
using namespace std;

int main()
{
    Time t;

    cout << "The initial universal time is ";
    t.printUniversal();
    cout << "\nThe initial standard time is ";
    t.printStandard();

    t.setTime(13,27,6);

    cout << "\n\nUniversal time after setTime is ";
    t.printUniversal();
    cout << "\nStandard time after setTime is ";
    t.printStandard();

    return 0;
}