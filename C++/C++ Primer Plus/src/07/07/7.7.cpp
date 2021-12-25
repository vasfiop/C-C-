#include"include"
using namespace std;
const int MAX=5;
double * fill_array(double ar[],int limit);
void show_array(const double ar[],double * postion);
void revalue(double r,double ar[],double *postion);
int main(int argc, char const *argv[])
{
    double properties[MAX];
    double *postion;

    postion=fill_array(properties,MAX);
    if(*postion>0)
    {
        cout<<"Enter revaluation factor: ";
        double factor;
        while(!(cin>>factor))
        {
            cin.clear();
            while (cin.get()!='\n')
                continue;
            cout<<"Bad input;please enter a number: ";
        }
        revalue(factor,properties,postion);
        show_array(properties,postion);
    }
    cout<<"Done.\n";

    return 0;
}
double * fill_array(double ar[],int limit)
{
    double temp;
    int i;

    for(i=0;i<limit;i++)
    {
        cout<<"Enter value #"<<(i+1)<<": ";
        cin>>temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get()!='\n')
                continue;
            cout<<"Bad input; input process terminated.\n";
            break;
        }
        else if (temp<0)
        {
            break;
        }
        ar[i]=temp;
    }
    
    return &ar[i];
}
void show_array(const double ar[],double * postion)
{
    for(int i=0;ar[i]!=*postion;i++)
    {
        cout<<"Property #"<<(i+1)<<": $";
        cout<<ar[i]<<endl;
    }
}
void revalue(double r,double ar[],double *postion)
{
    for(int i=0;ar[i]!=*postion;i++)
        ar[i]*=r;
}