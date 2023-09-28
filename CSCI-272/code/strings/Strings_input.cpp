#include <iostream>
using namespace std;

int main()
{
    char nameOfCourse[35];

    //Title MAT272 Object Oriented Programming
    cout << "Please enter the course name: ";
    //getline will allow us to wait for the new 
    // line to be entered in whole before adding it to the array
    cin.getline(nameOfCourse, 35, '\n'); 
    cout << endl;

    //Printing the course name
    cout << "Course Name: " << nameOfCourse;

    cout << endl;

    return 0;
}