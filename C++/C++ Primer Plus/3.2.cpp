#include<iostream>
using namespace std;
int main(void)
{
    int ft,in;//Ӣ��Ӣ��
    double weight;
    double BMI;
    const double ChangeM=0.0254;
    const double ChangekG=2.2;
    const int ChangefT=12;
    double metre;
    double kg;

    cout<<"������������(��λ:Ӣ��Ӣ��):";
    cin>>ft;
    cin>>in;
    cout<<"�������������(��λ:��)";
    cin>>weight;
    metre=ft*ChangeM+in/ChangefT*ChangeM;
    kg=weight/ChangekG;
    BMI=kg/(metre*metre);
    cout<<"weight is "<<metre<<"metre"<<endl;
    cout<<"weight is "<<kg<<"kg"<<endl;
    cout<<"BMI is "<<BMI<<endl;

    return  0;
}