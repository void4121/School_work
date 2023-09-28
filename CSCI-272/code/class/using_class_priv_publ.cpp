#include <iostream>
using namespace std;

class GradeBook
{
public:
    //the member function will be prototypes for 
    GradeBook (string name);

    void setCourseName(string);

    string getCourseName();

    void displayMessage();

private:
    string courseName;

};

//You must first define the type before using the class then call the member function or data to the class
GradeBook::GradeBook(string name) //The first GradeBook will call the class and then the second will call the member function
{
    setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
    courseName = name;
}

string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::displayMessage()
{
        cout << "Welcome to the grade book for \n"
            << getCourseName() << "!" << endl;
}

int main()
{
    GradeBook gradeBook1 ("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2 ("CS102 Data Structures in C++");

    cout << "gradebook1 created for course:" << gradeBook1.getCourseName();
    
    cout << endl;

    cout << "gradebook2 created for course:" << gradeBook2.getCourseName();


    return 0;   
}
