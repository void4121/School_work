#include <iostream>

using namespace std;

int main()
{
    int arr1[5] = {1, 2, 0, 4, 5};

    cout << Minimum(arr1, 5);



}

int Minimum(int array[], int s)
{
int smallest = array[0];
int i;

for(i = 1; i < s; i++)
    if(smallest > array[i])
        smallest = array[i];
        
return smallest;

}


