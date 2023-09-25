#include <iostream>
using namespace std;

int main()
{
    char nameOfCourse[] = "MAT272 Object Oriented Programming";
    //const char * nameOfCourse = "MAT272 Object Oriented Programming"

    //printing the string
    for(int i=0; nameOfCourse[i]!='\0';i++)
        cout << nameOfCourse[i];
    cout << endl;
    //printing the string
    cout << nameOfCourse;

    cout << endl;


    return 0;
}