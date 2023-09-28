#include<iostream>

using namespace std;

int main()
{
    double y = 5.0;
    int x=2, size1,size2;

    size1 = sizeof(y);
    size2 = sizeof(x);

    cout << "size of vairable y: " << size1 << " bytes\n";
    cout << "size of vairable x: " << size2 << " bytes\n";

    return 0;
}