#include<iostream>
using namespace std;

int main()
{

    int array1[5] = {4,3,2,1,0};

    cout << countEven(&array1[5], 5);

    return 0;
}


int countEven(int *array[], int s)
{
    int even = 0, i;
    for(i =0; i <s; i++)
    {
        if (*array[i] % 2 == 0)
        even += 1
    }
    return even;

}
