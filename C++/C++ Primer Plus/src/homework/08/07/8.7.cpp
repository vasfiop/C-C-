#include"include"
using namespace std;
template <typename T>
T SumArray(T number[],int n);
template <typename T>
T SumArray(T *number[],int n);
// template <> double SumArray(double *number,int n);
struct debts
{
    char name[50];
    double amount;
};

int main(int argc, char const *argv[])
{
    int things[6]={13,31,103,301,310,130};
    struct debts mr_E[3]=
    {
        {"Ima Wolfe",2400.0},
        {"Ura Foxe",1300.0},
        {"Iby Stout",1800.0}
    };
    double *pd[3];
    int max_int;
    double max_double;

    for(int i=0;i<3;i++)
        pd[i]=&mr_E[i].amount;
    cout<<"Listing Mr. E's counts of things:";
    max_int=SumArray(things,6);
    cout<<max_int<<endl;
    cout<<"Listing Mr. E's counts of debts:";
    max_double=SumArray(pd,3);
    cout<<max_double<<endl;
    
    return 0;
}
template <typename T>
T SumArray(T number[],int n)
{
    T sum;
    int i;
    for(i=0,sum=0;i<n;i++)
        sum+=number[i];
    return sum;
}
template <typename T>
T SumArray(T *number[],int n)
{
    T sum;
    int i;
    for(i=0,sum=0;i<n;i++)
        sum+=*number[i];
    return sum;
}
