#include<iostream>
using namespace std;
int main(void)
{
    long long times;
    int days,hours,minutes,seconds;
    const int day=24;
    const int minute=60;

    cout<<"Enter the world's popilation:";
    cin>>times;
    days=times/(day*minute*minute);
    hours=times%(day*minute*minute)/(minute*minute);
    minutes=times%(minute*minute)/minute;
    seconds=times%minute;
    cout<<times<<" seconds = "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds"<<endl;

    return 0;
}