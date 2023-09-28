#include <stdio.h>
#include <iostream>

using namespace std;

int min(int a[][], int &r, int &c)
{
    float smallest;
    int i, j, x, z;
    smallest = a[0][0];
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        if(smallest > a[i][j])
        {
            smallest = a[i][j]
            x = i;
            z = j;
            
        }
    r = x;
    c = z;
    return r,c;
    
}


int main()
{
    int a,b, arr[5][5];
    
    for(a = 0; a < 5; a++)
    {
        cout << "Enter in integers: " << endl;
        cin >> arr[a][b];
        
    }
    min(arr,a,b);
    cout << a << " " << b;

    return 0;
}


