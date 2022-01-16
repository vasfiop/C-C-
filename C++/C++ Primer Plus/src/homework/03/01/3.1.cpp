#include<iostream>
using namespace std;
int main(void)
{
    const int ChangE=12;
    int hight;
    int in,ft;//英寸，英尺

    cout<<"请输入你的身高(单位:英寸):";
    cin>>hight;
    ft=hight/ChangE;
    in=hight%ChangE;
    cout<<"你的身高为:"<<ft<<"英尺"<<in<<"英寸"<<endl;

    return 0;
}