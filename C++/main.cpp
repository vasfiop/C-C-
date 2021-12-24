#include <iostream>
using namespace std;
class a
{
private:
    int num;

public:
    a();
    ~a();
};

a get();

int main(int argc, char const *argv[])
{

    a a2;

    a2 = get();
    
    return 0;
}

a get()
{
    a a1;

    return a1;
}
a::a()
{
    printf("This is create\n");
}

a::~a()
{
    printf("This is dis\n");
}
