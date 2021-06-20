#include"include"
using namespace std;
int Myinput(int *chengji);
void Myput(int *chengji,int size);
void Myavg(int *chengji,int size);

int main(void)
{
    int chengji[10];
    int size;

    size=Myinput(chengji);
    Myput(chengji,size);
    Myavg(chengji,size);

    return 0;
}
void Myavg(int *chengji,int size)
{
    double avg;
    int sum;
    int i;

    for(i=0,sum=0;i<size;i++)
        sum+=chengji[i];
    avg=sum/size;
    cout<<"avg="<<avg<<endl;
}
void Myput(int *chengji,int size)
{
    int i;

    for(i=0;i<size;i++)
        cout<<chengji[i]<<endl;
}
int Myinput(int *changji)
{
    int i=0;

    while(i<=9&&cin>>changji[i])
    {
        i++;
    }

    return i;
}