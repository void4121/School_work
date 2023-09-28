#include<iostream>
using namespace std;

void swap(int *, int *);

int main()
{

    int a =5;
    int b = 7;
    cout << "a: " << a << "\t"<< "b:" << b << endl;
    swap(&a, &b);
    cout << "a: " << a << "\t"<< "b:" << b;

    return 0;
}

void swap(int *p1, int *p2)
{

    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}
