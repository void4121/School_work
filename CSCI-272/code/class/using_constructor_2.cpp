#include <iostream>
using namespace std;

class Cat
{
public:
    //create a prototype for the function members
    Cat (int );

    void setitsAge(int );
    
    int getitsAge();
    
    void Meow();

private:
    int itsAge;

};

Cat::Cat(int initialAge) // :: is used to call the member function through the class, no type is needed to declare here
{
    setitsAge(initialAge); //this will initiliaze the data member
}

void Cat::setitsAge(int age) //access functions
{
    itsAge = age;
}

int Cat::getitsAge() //access functions, this will get the value of itsAge from private
{
    return itsAge;
}

void Cat::Meow()
{
    cout << "Meow.\n";
}

int main()
{
    Cat Frisky (5);
    Frisky.Meow();

    cout << "Frisky is a cat who is ";
    cout << Frisky.getitsAge() << " years old.\n";

    Frisky.Meow();
    Frisky.setitsAge(5);

    cout << "Now Frisky is ";
    cout << Frisky.getitsAge() << " years old.\n";

    return 0;
}