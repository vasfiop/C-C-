#include"include"
using namespace std;
int main(int argc, char const *argv[])
{
    int money;
    double tax;

    while(cin>>money&&money>=0)
    {
        if(money<5000)
            tax=0;
        else if(money<15000)
            tax=(money-5000)*0.1;
        else if(money<35000)
            tax=(money-15000)*0.15+10000*0.1;
        else
            tax=10000*0.1+20000*0.15+(money-35000)*0.2;
        cout<<tax<<endl;
    }
    cout<<"program is stop"<<endl;

    return 0;
}
