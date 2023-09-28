#include <iostream>

using namespace std;

struct Date
{
    int month;
    int day;
    int year;

};

int main()
{
    Date * datePtr = new Date;

    datePtr -> month = 2;
    datePtr -> day = 24;
    datePtr -> year = 2010;

    cout  << "Date: " << datePtr->month << '/' << datePtr -> day
        << '/' << datePtr -> year << endl;

    delete datePtr;

    return 0;
}