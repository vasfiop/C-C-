#include<iostream>
using namespace std;
void first();
void sec();
int main(void)
{
    first();
    first();
    sec();
    sec();

    return 0;
}
void first()
{
    cout<<"Three blind mice"<<endl;
}
void sec()
{
    cout<<"See how they run"<<endl;
}