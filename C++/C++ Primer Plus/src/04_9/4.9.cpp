#include"include"
using namespace std;
int main(void)
{
    char * name = new char;
    double * weight=new double;
    int * number=new int;

    cin>>name;
    cin>>*weight;
    cin>>*number;

    cout<<name<<endl;
    cout<<*weight<<endl;
    cout<<*number<<endl;

    return 0;
}