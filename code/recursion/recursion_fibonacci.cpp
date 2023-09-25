//#include <iostream>
//using namespace std;
//
//int fibonacci (int n)
//{
//    if (n<=1)
//        return 1;
//    else   
//        return n + fibonacci(n-1)+fibonacci(n-2);
//
//}
//
//int main()
//{
//    cout << fibonacci(5) << endl;
//
//    return 0;
//}

# include <iostream>
using namespace std;

void someFunction ( int [ ], int, int );

 int main ()
{
    const int arraySize = 10;
    int a[ arraySize ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    someFunction ( a, 0, arraySize );

    cout << endl;

 }

void someFunction ( int b[ ], int current, int size )

{
    if ( current < size )
    {
        someFunction ( b, current + 1, size);
        cout << b [ current ] << “  ”;
    }
}