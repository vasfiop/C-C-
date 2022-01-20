#ifndef _COMPLEX0_H_
#define _COMPLEX0_H_

#include <iostream>

namespace complex
{
    class complex
    {
    private:
        int first;
        int last;

    public:
        complex();
        complex(double, double);
        ~complex();
        complex operator+(const complex &c) const;
        complex operator-(const complex &c) const;
        complex operator*(const complex &c) const;
        friend complex operator~(const complex &c);
        friend complex operator*(double, const complex &c);
        friend std::istream &operator>>(std::istream &is, complex &c);
        friend std::ostream &operator<<(std::ostream &os, const complex &c);
    };
}

#endif