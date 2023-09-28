#include <iostream>
using namespace std;

struct Student
{
    int num;
    char name[20];
    char gender;
    double score;

} student1 = {10001, "Ricardo", 'M', 97.2}, student2;

int main()
{
    student2 = student1;

    cout << student2.num << "\t" << student2.name << "\t" 
    <<student2.gender << "\t" << student2.score << "\t" <<endl;

    return 0;
}