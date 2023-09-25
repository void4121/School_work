#include <iostream>

using namespace std;
class Accout


{

public:

void withdraw (const double & amount);


{

getAmount -= amount;

}


void deposit (const double & amount);


{

getAmount += amount;


}


double balance (void);


{

cout << "Balance is: " << getAmount


}


double getAmount()


{

return balanceAmount;


}


private:


double balanceAmount= 10000;

}