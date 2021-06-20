#include"include"
namespace SALES
{
    const int QUARTERS = 4;
    class sales
    {
        private:
            double number[QUARTERS];
            double average;
            double max;
            double min;
        public:
            sales();
            sales(double ar[],int n);
            ~sales();
            void show();
    };
}
using namespace SALES;
int main(void)
{
    sales sales1;
    double number[QUARTERS]={1,2,3,4};
    sales sales2(number,4);

    sales1.show();
    sales2.show();

    return 0;
}
sales::~sales()
{

}
void sales::show()
{
    int i;
    cout<<"number: ";
    for(i=0;i<QUARTERS;i++)
        cout<<this->number[i]<<" ";
    cout<<endl;
    cout<<"max: "<<this->max<<endl;
    cout<<"min: "<<this->min<<endl;
    cout<<"average: "<<this->average<<endl;
}
sales::sales(double ar[],int n)
{
    int i;
    int count;

    this->max=this->min=ar[0];
    for(i=0,count=0;i<n;i++)
    {
        this->number[i]=ar[i];
        if(this->max<ar[i])
            this->max=ar[i];
        if(this->min>ar[i])
            this->min=ar[i];
        count+=ar[i];
    }
    for(i=n;i<QUARTERS;i++)
        this->number[i]=0;
    this->average=count/QUARTERS;
}
SALES::sales::sales()
{
    int i;
    int count;

    cout<<"Please enter 4 number:";
    for(i=0,count=0;i<QUARTERS;i++)
    {
        (cin>>this->number[i]).get();
        count+=number[i];
        if(i==0)
        {
            this->max=number[i];
            this->min=number[i];
        }
        if(this->max<number[i])
            this->max=number[i];
        if(this->min>number[i])
            this->min=number[i];
    }
    this->average=count/QUARTERS;
}
