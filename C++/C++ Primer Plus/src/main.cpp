#include <iostream>
#include "include.h"
int main(int argc, char const *argv[])
{
    Number n1(1, 1);
    Number n2(1, 1);
    Number n3;

    n3 = n1 + n2;
    std::cout << n3;

    return 0;
}