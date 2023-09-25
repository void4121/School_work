#include <iostream>
#include "gradebook.h"
using namespace std;


int main()
{
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    cout << "gradebook1 create for course: "
        << gradeBook1.getCourseName();
    cout << endl;

    cout << "gradebook2 created for course: " 
        << gradeBook2.getCourseName();

    return 0;
}