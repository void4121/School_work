#include<iostream>
using namespace std;

int main()
{
    int b[] = {10,20,30,40};
    int *bPtr = b;

    for(int i=0; i < 4;i++)
        cout << "b[" << i << "]:" << b[i] << endl;
    
    for (int i = 0; i < 4;i++)
        cout << "bPtr[" << i << "]:" << bPtr[i] << endl;

    for (int i = 0; i < 4; i++)
        cout << " *(b+" << i << "):" << *(b+i) << endl;

    for(int i = 0; i < 4; i++)
        cout << "bPtr[" << i << "]:" << bPtr[i+1] << endl; 
    return 0;

}