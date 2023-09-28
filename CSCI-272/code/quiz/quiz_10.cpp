#include<iostream>
#include <cstring>
using namespace std;

struct Date
{
int day;
int month;
int year;
};

int main()
{
    Date date1 = {};
    Date date2 = {};
    int i;

    cout << "Enter in date 1, one at a time and hit enter (dd/mm/yy):" << endl;
    cin >> date1.day >> date1.month >> date1.year;

    cout << "Enter in date 2, one at a time and hit enter (dd/mm/yy):" << endl;
    cin >> date2.day >> date2.month >> date2.year;
    if (strcmp(date1, date2) ==0)
        cout << "They are the same date"
return 0;
}
