#include"include"
using namespace std;
double tiaohe(double x,double y);
int main(void)
{
    double a,b;
    double avg;

    cout<<"Please enter two numbers: ";
    cin>>a>>b;
    while(a!=0&&b!=0)
    {
        avg=tiaohe(a,b);
        cout<<"The avg is "<<avg<<endl;
        cout<<"enter other two numbers(enter 0 to quit): ";
        cin>>a>>b;
    }

    return  0;
}
double tiaohe(double x,double y)
{
    return 2.0*x*y/(x+y);
}