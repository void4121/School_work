#include <iostream>
#include <string>
using namespace std;

class Student


{

public:


Student (int age, string name, double height, double weight)

{
setItsAge(age);
setItsName(name);
setItsHeight(height);
setItsWeight(weight);


}


int setItsAge(int age)
{
    itsAge = age;
};


string setItsName(string name)

{

itsName = name;


}

double setItsHeight(double height)
{
    itsHeight = height;
}


double setItsWeight(double weight)
{
itsWeight = weight;
}


int getItsAge()


{

return itsAge;


}


string getItsName()


{

return itsName;


}


double getitsHeight()


{

return itsHeight;


}


double getItsWeight()


{

return itsWeight;


}





private:


int age;


string name;


double height, weight





};
