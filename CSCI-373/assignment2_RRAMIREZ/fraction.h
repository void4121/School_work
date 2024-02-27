#ifndef FRACTION_H
#define FRACTION_H

class fract {
    private:
        int numerator;
        int denominator;

    public:
    fract(); //default constructor
    fract(int num, int den); //parameterized constructor
    int getNumerator() const; //getter for the numerator
    int getDenominator() const; //getter for the denominator
    void setNumerator(int num); //setter for the numerator
    void setDenominator(int den); //setter for the denominator

    fract operator+(const fract& x) const; //overloaded + operator
    fract operator-(const fract& x) const; //overloaded + operator
    fract operator*(const fract& x) const; //overloaded + operator
    fract operator/(const fract& x) const; //overloaded + operator
    void print() const;
    void simplify();

};
#endif // FRACTION_H
