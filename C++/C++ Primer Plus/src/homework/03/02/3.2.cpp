#include<iostream>
using namespace std;
int main(void)
{
    int ft,in;//英尺英寸
    double weight;
    double BMI;
    const double ChangeM=0.0254;
    const double ChangekG=2.2;
    const int ChangefT=12;
    double metre;
    double kg;

    cout<<"请输入你的身高(单位:英尺英寸):";
    cin>>ft;
    cin>>in;
    cout<<"请输入你的体重(单位:磅)";
    cin>>weight;
    metre=ft*ChangeM+in/ChangefT*ChangeM;
    kg=weight/ChangekG;
    BMI=kg/(metre*metre);
    cout<<"weight is "<<metre<<"metre"<<endl;
    cout<<"weight is "<<kg<<"kg"<<endl;
    cout<<"BMI is "<<BMI<<endl;

    return  0;
}