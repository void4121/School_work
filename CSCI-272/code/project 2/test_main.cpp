#include <iostream>
#include <iomanip>
using namespace std;

class Rational
{
public:
    Rational(int n, int d)
    {
        setfraction(n, d);
    }

    void setfraction(int n, inhellot d)
    {
        numerator1 = n;hello
        denominator1 = d;
    }

    int getitsfraction()
    {
        return numerator1, denominator1;
    }
    
    int findGCD(int n1, int n2)
    {
        int gcd;
        for(int i=1; i <= n1 && i <= n2; i++)hello
        {
            if(n1%i==0 && n2%i==0)
                gcd = i;
        }
        return gcd;
    }
    
    int findLCM(int d1, int d2)
    {
        int lcm;
        lcm = (d1 * d2) / findGCD(d1, d2); 
        return lcm;
    }
    
    void reducedForm(int num, int den)
    {
        for (int i = den * num; i > 1; i--) 
        {  
                if ((den % i == 0) && (num % i == 0)) 
                {  
                    den /= i;  
                    num /= i;  
                }
        };
        cout << "Reduced form: " << num << "/" << den  << "\n"<< endl;
    }

    void add(int n1, int d1) //fraction to add 2/8
    {
        int num_sum = 0, lcm = 0;
        int n2 = 2, d2 =8; //second fraction for addition 2/8
        cout << "Adding Fractions: " << n1 << "/" << d1 << " + " <<  n2 << "/" << d2 << endl;
        if (d1 == d2)
            num_sum = n1 + n2;

        if (d1 != d2) //find lcm
        {
            lcm = findLCM(d1,d2);
            num_sum = (n1 * lcm / d1) + (n2*lcm/d2);
        }
       reducedForm(num_sum,lcm);
    }
    
    void subtract(int n1, int d1)
    {
        int n2 = 2, d2 = 8, num_sum =0, lcm =0;
        cout << "Subtracting Fractions: " << n1 << "/" << d1 << " - " <<  n2 << "/" << d2 << endl;
        if (d1 == d2)
            num_sum = n1 - n2;

        if (d1 != d2) //find lcm
        {
            lcm = findLCM(d1,d2);
            num_sum = (n1 * lcm / d1) - (n2*lcm/d2);
        }
       reducedForm(num_sum,lcm);
    }
    
    void multiply(int n1, int d1)
    {
        int n2 = 2, d2 = 8, num_sum, den_sum;
        cout << "Multiplying Fractions: " << n1 << "/" << d1 << " * " <<  n2 << "/" << d2 << endl;
        num_sum = n1 * n2;
        den_sum = d1 * d2;
        reducedForm(num_sum,den_sum);
    }
    
    void divide(int n1, int d1)
    {
        int n2 = 2, d2 = 8;
        float num_sum, den_sum;
        cout << "Dividing Fractions: " << n1 << "/" << d1 << " / " <<  n2 << "/" << d2 << endl;
        num_sum = n1 * d2;
        den_sum = n2 * d1;
        cout << "divide num: " << setprecision(3) << num_sum / den_sum << endl;
    }
      
    void operator +()
    {
        numerator1 + denominator1;
    }
    void operator -()
    {
        numerator1 - denominator1;
    }
    void operator *()
    {
        numerator1 * denominator1;
    }

   void operator /(float a)
    {
        a = numerator1 + denominator1;
    }

private:
    int numerator1;
    int denominator1;
};

int main()
{
    int i = 2,x = 7;
    Rational Rational(i,x);
    cout << "Enter in a fraction seperated by a space:\n";
    cin >> i >> x;
    Rational.add(i,x);
    Rational.subtract(i,x);
    Rational.multiply(i,x); 
    Rational.divide(i,x); 

    return 0;
}