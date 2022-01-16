#include"include"
using namespace std;
int main(int argc, char const *argv[])
{
    array<double,10>donation;
    double avg,sum;
    int count;
    int i;

    for(i=0,sum=0;i<10;i++)
    {
        cin>>donation[i];
        sum+=donation[i];
    }
    avg=sum/10;
    for(i=0,count;i<10;i++)
    {
        if(donation[i]>avg)
            count++;
    }
    cout<<avg<<endl;
    cout<<count<<endl;

    return 0;
}
