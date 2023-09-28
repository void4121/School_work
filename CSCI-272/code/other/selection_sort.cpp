#include <iostream>
using namespace std;

void SelectionSort(int * const, const int); //prototypes
void Swap(int * const, int * const); //prototypes

int main()
{
    const int arraySize = 5; //constant array size 
    int a[arraySize] = {24,12,36,5,10};

    SelectionSort(a,arraySize);
    cout << "Data items in ascending order:\n";

    for (int i=0; i < arraySize; i++) // this for loop is used once the order is redone
        cout << "\t" << a[i];

    return 0;
}

void SelectionSort(int * const array, const int size) //this will sort the array
{
    int smallest, i, j;

    for(i=0; i < size; i++)
    {
        smallest = i;

        for (j=i+1; j < size; j++)
            if(array[j] < array[smallest])
                smallest = j;
        
        Swap(&array[i], &array[smallest]); //this function will swap the values
            
    }



}

void Swap(int * const p1, int * const p2) //this function will swap its value
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;


}