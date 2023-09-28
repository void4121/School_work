/*
Ricardo Ramirez
Professor Thurai Kugan
Project 6.3.1
5/11/2022
*/

/*
This program will find the best fitting line for the data given by the user.
The user is allowed to give up to 15 pairs of data. With said data the program
will find the constants m & b. We will use this to put into the equation y = mx + b.
X will be the temperatures 10 down to -5 which will be created by a for loop at the 
end of the program.
*/
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, cnt = 1;
    float arr1[15], arr2[15];
    float var1 = 0, var2 = 0, var3 = 0, y = 0, x, m, yintercept;

    cout << "Enter in data for x and y (when finished enter 0 twice):" << endl;
    cin >> arr1[0] >> arr2[0];

    //below program will gather data from the user. This data will get stored in array x & y
    for (i = 1; i < 15 && arr1[i - 1] != 0; i++)
    {
        cout << "Enter in values: " << endl;
        cin >> arr1[i] >> arr2[i];
        cnt++;
    };
    cnt--;		//removes the last count considering the loop will have an extra cnt

    //the for loop below will use the Least Squares Method in order to find slope m
    for (i = 0; i <= cnt; i++)
    {
        var1 += arr1[i] * arr2[i];
        var2 += arr1[i];
        var3 += arr1[i] * arr1[i];
        y += arr2[i];   
    }
    x = var2 / cnt;
    y /= cnt;
    
    m = (var1 - (var2) * y) / (var3 - (var2) * x);	//this statement will create the slope m to be used later
    yintercept = y - m * x; //this statement will be the 'b' in the equation y = mx + b
    
    cout << "Linear equation for the data" << setw(30) << "Resistance at temperatures" << endl;
    //the for loop below will find the linear equation with the resistances at temperatures 10 to -5
    for(i = 10; i >= -5; i--)
    {
        y = m*i + yintercept;
        cout << setw(15)<< y << setw(30) << i << endl;
    };
    
  return 0;
}


