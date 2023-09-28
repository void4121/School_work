#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int rolls =100, bet_ammount, roll_sum, face1, face2, total_won = 0;
    
    srand(15);
    bet_ammount = rand()%7+1;
    for (rolls=1; rolls <=100; rolls++)
        {

            face1 = rand()%6+1;
            face2 = rand()%6+1;
            roll_sum = face1 + face2;
            
            if (roll_sum % 2 != 0 && roll_sum < bet_ammount)
                total_won += 15;
            else
                total_won -= bet_ammount; 
        }
        
    cout << "Bet amount = "<< bet_ammount << endl << "Total winnings = " << total_won;
    return 0;
}


