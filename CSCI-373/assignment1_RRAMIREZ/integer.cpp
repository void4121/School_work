#include "integer.h"
#include <iostream>

integer::integer(int val)
{
    this->value = val;
}

int integer::getValue() const
{
    return value;
}

void integer::setValue(int val)
{
    value = val;
}

//binary operators
integer integer::operator+(const integer &x) const
{
    integer result;
    result.setValue(value + x.getValue());
    return result;
}


integer integer::operator-(const integer &x) const
{
    integer result;
    result.setValue(value - x.getValue());
    return result;
}


integer integer::operator*(const integer &x) const
{
    integer result;
    result.setValue(value * x.getValue());
    return result;
}


integer integer::operator/(const integer &x) const
{
    integer result;
    result.setValue(value / x.getValue());
    return result;
}