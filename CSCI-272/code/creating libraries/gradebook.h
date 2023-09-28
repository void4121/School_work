#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
    GradeBook(string name);
    void setCourseName(string name);
    string getCourseName();
    void displayMessage();

private:
    string courseName;    
};

GradeBook::GradeBook(string name)
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