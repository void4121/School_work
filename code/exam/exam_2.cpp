/*
#include <iostream>
using namespace std;

int recursive(int  n)
{
        cout << n << endl;
        if (n<=1)
                return 1;
        else
               return n + recursive(n-1);
}

int main()
{
    cout<< recursive(10) <<endl;
    return 0;

}

#include <iostream>
using namespace std;

int whatIsThis ( int [ ], int );

 int main ()
{
    const int arraySize = 10;
    int a[ arraySize ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result =  whatIsThis ( a, arraySize );
    cout << "Result is " << result << endl;

}

int whatIsThis ( int b[ ], int size )
{
    if ( size == 1 )
        return b[0];
    else
        return b[size - 1] + whatIsThis ( b, size - 1 );

}

#include <iostream>
using namespace std;

int main ()                                                  
{
    for ( int i =1; i <= 5; i ++ ) 
    {
        for ( int j = 5; j == i ; j--)
            cout << "*";
        cout << endl;
    }
return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int sides, j, i;
    cout << "Enter in a number for sides: ";
    cin >> sides;
    for(i = 0; i <= sides; i++)
    {
        for (j = 0; j < i; j++)
            cout <<  "*";
    cout << endl;
    }

    return 0;
}


#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
public:
    Cat (int );

    void setyear(int );
    int getyear();

private:
    int itsAge;

};

int main()
{


    return 0;
}


#include <iostream>
#include <cstring>
using namespace std;

class Rectangle
public:
    Rectangle (float len, float wid)
    {
        setitslength(len);
        setitswidth(wid);
    }
   
    float area(float itslength, float itswidth)
    {
        float area;
        area = itslength * itswidth; 
        return area;
    }
    
    void setitslength(float len)
    {
        if (itslength > 0.0 && itslength < 20.0
            itslength = len;
    }
    
    int getitslength()
    {
        return itslength;
    }
    
    void setitswidth(float wid)
    {
        if (itswidth > 0.0 && itswidth < 20.0
            itswidth = wid;
    }
    
    int getitswidth()
    {
        return itswidth;
    }


private:
    float itslength = 1;
    float itswidth = 1;

};

#include <iostream>
#include <string>

using namespace std;

struct Employee
{
    string name;
    int year;
    string address;
} employee1 = {"Robert", 1994, "64C-WallsStreat"}, employee2 = {"Sam", 2000, "68D-WallsStreat"}, employee3 = {"John", 1999, "26B-WallsStreat"};


int main()

{


int num_emp, i;

cout << "Name\tYear of joining\t\tAddress"<< endl;
cout << employee1.name << "\t" << employee1.year << "\t\t\t" << employee1.address << endl;
cout << employee2.name << "\t" << employee2.year << "\t\t\t" << employee2.address << endl;
cout << employee3.name << "\t" << employee3.year << "\t\t\t" << employee3.address << endl;

return 0;

}
*/