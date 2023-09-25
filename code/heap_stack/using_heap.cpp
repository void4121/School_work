#include <iostream>

using namespace std;

int main()
{
    int localVariable =5;
    int * localPtr = &localVariable;
    int * heapPtr = new int (7); //create a heap and initilizate the variable with '7'

    cout << "localvariable: " << localVariable << "\n";
    cout << "localPtr: " << localPtr << "\n";
    cout << "heapPtr: " << heapPtr << "\t" << *heapPtr << "\n"; //print the memory location and data 

    delete heapPtr; //delete will delete the data in the memory location
    heapPtr = new int; //create a heap and reinitialize the variable with '9'
    *heapPtr = 9;
    cout << "heapPtr: " << heapPtr << "\t" << *heapPtr << "\n"; 

    delete heapPtr;
    return 0;
}