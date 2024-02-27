class integer
{
    private:
        int value;

    public:
        integer(); //default constructor
        integer(int val); //parameterized constructor
        int getValue() const; //getter for the value
        void setValue(int val); //setter for the value
        
        integer operator+(const integer &x) const; //overloaded + operator
        integer operator-(const integer &x) const; //overloaded - operator
        integer operator*(const integer &x) const; //overloaded * operator
        integer operator/(const integer &x) const; //overloaded / operator
};
