/*
Ricardo Ramirez
Professor Thurai Kugan
CSCI 271
*/
#include <iostream>
using namespace std;

int main()
{
    //all variable names and declarations used in the program
    int id, hours, bonus, years, year_joined, current_year = 2015;
    float wage = 14, taxes_withheld, total_amount, increase;
    bool employement;
    
    //Code below will print output and gather required input
    cout << "Enter Employeee ID: ";
    cin >> id;
    cout << "Enter hours worked for the month: ";
    cin >> hours;
    cout << "What year did you join Nyorki Inudstries? ";
    cin >> year_joined;
    cout << "Are you full time? (Enter 1 for yes or 0 for no): ";
    cin >> employement;
    
    //code below will caculate employees wage increase as well as add it to the base wage if any
    if (hours < 50)
        increase = 0;
    else if (hours >= 50 && hours < 100)
        increase = 1.25;
    else if (hours >= 100 && hours < 160)
        increase = 2.00;
    else
        increase = 3.00;

    wage = increase + wage;
 
    //Code below will calculate the hourly wage (plus increase if any) per hours worked
    wage = wage * hours;

    //years worked
    years = current_year - year_joined;
    if (employement == 1 && years >= 5)
        bonus = years * 35;
    else if (employement == 0 && years >= 10)
        bonus = years * 35;
    else (bonus > 600);
        bonus = 600;

    wage = wage + bonus;

    //code below will give employee a bonus based on their employement status
    if (employement == 1)
        wage = wage + 200;
    else 
        wage = wage + 100;

    //Code below will deduce tax and gather the total amount after taxes
    taxes_withheld = wage * .15;
    total_amount = wage - taxes_withheld;
        
    //Employee monthly paystub
    cout << " " << endl;
    cout << "Customer ID: " << id << endl;
    cout << "\t Full time?\t\t\t\t: "  << employement << endl;
    cout << "\t Hours worked\t\t\t\t: " << hours <<endl;
    cout << "\t Wages(after tax) for the month\t\t: " << total_amount<< endl;
    cout << "\t Amount withheld for tax\t\t: " << taxes_withheld;
    
    return 0;
}

