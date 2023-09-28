#include <iostream>
using namespace std;

struct Student
{
    int num;
    char name[20];
    char gender;
    double score;
    int birthyear;

};

int main()
{
    Student student1 = {10001, "Ricardo", 'M', 96.2, 1999};
    Student student2 = {10010, "Ramirez", 'M', 89, 1975};

    cout << student1.num << "\t" << student1.name << "\t" 
    <<student1.gender << "\t" << student1.score << "\t" << student1.birthyear <<endl;

    cout << student2.num << "\t" << student2.name << "\t" 
    <<student2.gender << "\t" << student2.score << "\t" << student2.birthyear << endl;

    return 0;
}