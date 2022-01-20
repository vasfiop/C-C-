#include "complex0.h"

namespace complex
{
    complex::complex()
    {
        first = 0;
        last = 0;
    }
    complex::complex(double first, double last)
    {
        this->first = first;
        this->last = last;
    }
    complex::~complex()
    {
    }
    complex complex::operator*(const complex &c) const
    {
        complex temp;
        temp.first = this->first * c.first - this->last * c.last;
        temp.last = this->first * c.last + this->last * c.first;

        return temp;
    }
    complex complex::operator+(const complex &c) const
    {
        complex temp;

        temp.first = this->first + c.first;
        temp.last = this->last + c.last;

        return temp;
    }
    complex complex::operator-(const complex &c) const
    {
        complex temp;

        temp.first = this->first - c.first;
        temp.last = this->last - c.last;

        return temp;
    }
    complex operator*(double num, const complex &c)
    {
        complex temp;

        temp.first = num * c.first;
        temp.last = num * c.last;

        return temp;
    }
    std::ostream &operator<<(std::ostream &os, const complex &c)
    {
        os << "(" << c.first << "," << c.last << "i)";

        return os;
    }
    std::istream &operator>>(std::istream &is, complex &c)
    {
        std::cout << "real:";
        is >> c.first;
        if (!is)
            return is;
        std::cout << "imaginary:";
        is >> c.last;
        std::cin.get();

        return is;
    }
    complex operator~(const complex &c)
    {
        return complex(c.first, -c.last);
    }
}