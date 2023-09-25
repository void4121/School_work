#include <iostream>
using namespace std;

class Cat
{
    public: 
        void Meow()
        {
            cout << "Meow.\n";
        }
};

int main()
{
    Cat Frisky; //cat is the data type create in the class, frisky is the object (or "variable")
    Frisky.Meow(); //call member function meow
    return 0;
}