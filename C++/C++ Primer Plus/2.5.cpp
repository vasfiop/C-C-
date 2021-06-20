#include<iostream>
using namespace std;
void data(float t);
int main(void)
{
    float number;

    cout<<"Please enter a Celsius value:";
    cin>>number;
    data(number);

    return 0;
}
void data(float t)
{
    float number;

    number=t*1.8+32;
    cout<<t<<" degrees Celsius is "<<number<<" degrees Fahrenheit.";
}