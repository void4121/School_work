#include <iostream>
using namespace std;

class Rational
{
public:
    Rational(int n, int d)
    {
        setitsNume(n);
        setitsDenom(d);
    }

    void setitsNume(int n)
    {
        numerator = n;
    }

    int getitsNume()
    {
        return numerator;
    }

    void setitsDenom(int d)
    {
        denominator = d;
    }

    int getitsDenom()
    {
        return denominator;
    }

    void add(int n1, d1, n2, d2)
    {
        int lcm;
        a / gcd(a, b)) * b;
    }
    
    //void subtract()
    {

    }
    //void multiply;
    //void divide;
    //void printrational;
    //void printfloatrational;
    
private:
    int numerator1;
    int denominator1;
    int numerator2 = 1;
    int denominator2 = 2;

};

int main()
{
    Rational Fraction(2,6);
    cout << "Enter in a fraction seperated by a space:\n";
    cout << Fraction.add() << endl;
    cout << Fraction.add() << endl;
    
    cout << Fraction.subtract() << endl;
    cout << Fraction.subtract() << endl;
    
    cout << Fraction.multiply() << endl;
    cout << Fraction.multiply() << endl;
    
    cout << Fraction.divide() << endl;
    cout << Fraction.divide() << endl;
    
    cout << Fraction.printrational() << endl;
    cout << Fraction.printrational() << endl;
    
    cout << Fraction.printfloatrational() << endl;
    cout << Fraction.printfloatrational() << endl;


    return 0;
}