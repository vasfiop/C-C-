#ifndef _INCLUDE_H_
#define _INCLUDE_H_

#include <iostream>

class Number
{
private:
    int a;
    int b;

public:
    Number();
    Number(int a, int b);
    Number operator+(const Number &a) const;
    Number operator+(const int a) const;
    friend std::ostream &operator<<(std::ostream &os, Number &n);
    // std::ostream &operator<<(std::ostream os);
};

#endif