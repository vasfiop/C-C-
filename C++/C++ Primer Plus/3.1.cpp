#include<iostream>
using namespace std;
int main(void)
{
    const int ChangE=12;
    int hight;
    int in,ft;//Ӣ�磬Ӣ��

    cout<<"������������(��λ:Ӣ��):";
    cin>>hight;
    ft=hight/ChangE;
    in=hight%ChangE;
    cout<<"������Ϊ:"<<ft<<"Ӣ��"<<in<<"Ӣ��"<<endl;

    return 0;
}