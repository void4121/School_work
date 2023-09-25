/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int i, even=0, s =5;
    
    int array[5] = {4,3,2,1,0};
    
    for(i = 0;i < s; i++)
        if (array[i] % 2 == 0)
            even += 1;
    cout << even;

    return 0;
}

countEven(int *array, int s)


{




int even=0, i;


for(i = 0;i < s; i++)
  if (array[i] % 2 == 0)
       even += 1;

return even;


}
