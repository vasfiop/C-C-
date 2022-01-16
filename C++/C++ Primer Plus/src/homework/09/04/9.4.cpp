#include"9.4.h"
using namespace std;
using namespace SALES;
int main(int argc, char const *argv[])
{
    Sales sales1;
    Sales sales2;
    double number[QUARTERS]={1,2,3,4};

    setSales(sales1,number,4);
    setSales(sales2);

    showSales(sales1);
    showSales(sales2);
    cout<<"Bye!"<<endl;

    return 0;
}
namespace SALES
{
    void setSales(Sales & s,const double ar[],int n)
    {
        double count;
        int i;
        s.max=s.min=ar[0];
        for(i=0,count=0;i<n;i++)
        {
            count+=ar[i];
            s.sales[i]=ar[i];
            if(s.min>ar[i])
                s.min=ar[i];
            if(s.max<ar[i])
                s.max=ar[i];
        }
        for(i=n;i<QUARTERS;i++)
            s.sales[i]=0;
        
        s.average=count/n;
    }
    void setSales(Sales &s)
    {
        double count=0;
        double input=0;
        int i;
        cout<<"Please enter 4 double number:";
        for(i=0;i<QUARTERS;i++)
        {
            cin>>input;
            if(i==0)
                s.max=s.min=input;
            if(s.max<input)
                s.max=input;
            if(s.min>input)
                s.min=input;
            s.sales[i]=input;
            count+=input;
        }
        s.average=count/4;
    }
    void showSales(const Sales &s)
    {
        int i;

        cout<<"sales: ";
        for(i=0;i<QUARTERS;i++)
            cout<<s.sales[i]<<" ";
        cout<<"average: "<<s.average<<endl;
        cout<<"max: "<<s.max<<endl;
        cout<<"min: "<<s.min<<endl;
    }
};
