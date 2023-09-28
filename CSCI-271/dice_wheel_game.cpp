/*
Ricardo Ramirez
Professor Thurai Kugan
Project 5.3.3
4/29/2022
*/

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

void betting_amount(int x[], int size)
{
    int i;
    for(i=1; i < 28; i++)
    {
        x[i] = x[i-1] + 1;
    }

}

int prime(int num)
{
    int testnum = 2, prime_num = 1;
    while(prime_num == 1 && testnum < num)
        {
            if(num % testnum == 0)
                prime_num = 0;
            testnum = testnum + 1;
        }
    
    return prime_num;
}

int game(int spin, int dice)
{
    int sum_of_numbers1 = 0;
    dice = rand() % 8 + 1;
    spin = rand() % 20 + 1;
    sum_of_numbers1 = dice + spin;
    cout << sum_of_numbers1 << endl;
    return sum_of_numbers1;
}

int main()
{
    int  sum_of_numbers, net_win = 0, wheel, die_8, x, z;
    int bets[28] = {2}, i;

    
    betting_amount(bets, 28);
    game(wheel, die_8);
    cout << betting_amount<< " " << game(wheel, die_8);
    
    cout << game(wheel, die_8) << endl;
    
    for (x = 0; x < 28 ; x++)
        {
            for(z = 1; z <= 100; z++)
            {
                die_8 = rand() % 8 + 1;
                wheel = rand()% 20 + 1;
                sum_of_numbers = die_8 + wheel;
                if (sum_of_numbers < bets[i]);
                net_win = bets[z];
                cout << net_win;
            }
            
    
        }
            die_8 = rand() % 8 + 1;
            wheel = rand()% 20 + 1;
            
            sum_of_numbers = die_8 + wheel;

        
    cout << "Bet amount:" << setw(30) << "New winning:" << endl;
    for(i = 1; i < 28 - 1; i++)
    {
        cout << bets[i] << setw(35) << net_win << endl;
    }





    return 0;
}



