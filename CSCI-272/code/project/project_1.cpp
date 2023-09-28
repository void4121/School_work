#include <iostream>
#include <cstdlib>
using namespace std;

void moveTortoise(int*);
void moveHare(int*);

int main()
{
    int tortoise = 1;
    int hare = 1;

    cout << "BANG!!!!! \nAND THEY ARE OF!!!!!" << endl;
    while(tortoise < 70 || hare < 70){     //the game of the race will be constrained in this for loop. This will call functions to continue the race
        moveTortoise(&tortoise); //use tortiose function
        moveHare(&hare); //use hare function
        if (tortoise == hare)
        {
            cout << "ouch" << endl;
        }
    }
    return 0;
}

void moveTortoise(int *tortoisePtr)
{
    int randint = 0;
    randint = 1 + rand() % 100;
    if (randint >= 50)
        *tortoisePtr += 3;
    if (randint <= 20)
        *tortoisePtr -= 6;
    if (randint > 20 && randint < 50)
        *tortoisePtr += 1;
    if (*tortoisePtr <= 0)
        *tortoisePtr = 1;
}

void moveHare(int *harePtr)
{
int randint = 0;
randint = 1 + rand() %100;
if (randint > 20)
    *harePtr += 9;
if (randint > 12)
    *harePtr -= 12;
if (randint > 30)
    *harePtr += 1;
}