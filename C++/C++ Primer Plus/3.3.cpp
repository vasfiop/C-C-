#include<iostream>
using namespace std;
int main(void)
{
    const int ChangE=60;
    int degrees,minutes,seconds;
    double answer;

    cout<<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
    cout<<"First, enter the degrees:";
    cin>>degrees;
    cout<<"Next, enter the minutes of arc:";
    cin>>minutes;
    cout<<"Finally, enter the seconds of arc:";
    cin>>seconds;
    answer=(double)degrees+(double)minutes/ChangE+(double)seconds/(ChangE*ChangE);
    cout<<degrees<<" degrees, "<<minutes<<" minutes, "<<seconds<<" seconds = "<<answer<<" degrees"<<endl;

    return 0;
}