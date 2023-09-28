#include <iostream>
using namespace std;

class GradeBook
{
    public:
            //fuction to display a welcome message to the user
            void DisplayMessage(string courseName)
            {
                cout << "Welcome to the Grade Book for: \n" 
                << courseName << "!" << endl;
            }


};

int main()
{
    string nameOfCourse;
    GradeBook myGradeBook; //create a gradebook object
    
    cout << "Please enter the course name: " << endl;
    getline (cin,nameOfCourse);
    cout << endl;

    myGradeBook.DisplayMessage (nameOfCourse);

    return 0;


}