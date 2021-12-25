#include"include"
using namespace std;
int jiecheng(int number);
int main(void)
{
    int number;

    cout<<"Please enter a number: ";
    while(cin>>number)
    {
        cout<<jiecheng(number)<<endl;
        cout<<"Please enter a new number (enter q to quit): ";
    }
    cout<<"bye"<<endl;

    return  0;
}
int jiecheng(int number)
{
    if(number>1)
        return number*jiecheng(number-1);
    else 
        return number;
}