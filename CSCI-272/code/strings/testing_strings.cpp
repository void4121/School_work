#include <iostream>
using namespace std;

int main()
{
    char myName[7]= {""};
    int i;

    for (i=0; i < 7; i++)
    {
        cout << "Enter in character by character for your name:" << endl;
        cin >> myName[i];
    }

    cout << "My name is: " <<myName;
    

    return 0;
}