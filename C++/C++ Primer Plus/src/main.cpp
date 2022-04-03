#include <iostream>
class A
{

public:
    int aa;
};
class B : A
{
public:
    B()
    {
        this->aa = 10;
    }
};
int main(int argc, char const *argv[])
{
    B b;
    std::cout << b.aa;

    return 0;
}
