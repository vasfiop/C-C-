#include<iostream>
using namespace std;
double data(double t);
int main(void)
{
    double number;
    double days_number;

    cout<<"Enter the number of light years:";
    cin>>number;
    days_number=data(number);
    cout<<number<<" light years = "<<days_number<<" astronomical units."<<endl;

    return 0;
}
double data(double t)
{
    double number;

    number=t*63240;

    return number;
}