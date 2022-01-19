#include <iostream>
#include "include.h"
Number::Number()
{
    a = 0;
    b = 0;
}
Number::Number(int a, int b)
{
    this->a = a;
    this->a = b;
}
Number Number::operator+(const Number &a) const
{
    return Number(this->a + a.a, this->b + a.b);
}
Number Number::operator+(const int a) const
{
    return Number(this->a + a, b);
}
std::ostream &operator<<(std::ostream &os, Number &n)
{
    os << "a = " << n.a << " b = " << n.b << "\n";
    return os;
}