#include <iostream>
#include "CSLL.h"
using namespace std;

int main () {
    CSLL<int> ll;
    ll.addFront(1);
    ll.addFront(2);
    ll.addFront(3);

    ll.print();


    return 0;
}