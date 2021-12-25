#include"include"
using namespace std;
const int Seasons =4;
const char *Sname[Seasons]={"Spring","summer","Fall","Winter"};
struct expenditure //¿ªÖ§
{
    double money[Seasons];
};
void fill_1(double * money);
void show_1(double money[]);
void fill_2(expenditure * mode1);
void show_2(expenditure mode1);
int main(int argc, char const *argv[])
{
    double money[Seasons];
    expenditure mode1;
    fill_1(money);
    show_1(money);
    fill_2(&mode1);
    show_2(mode1);
    
    return 0;
}
void fill_1(double *money)
{
    for(int i=0;i<Seasons;i++)
    {
        cout<<"Enter "<<Sname[i]<<" expenses: ";
        cin>>money[i];
    }
}
void show_1(double money[])
{
    double total=0;
    cout<<"\nEXPENSES\n";
    for(int i=0;i<Seasons;i++)
    {
        cout<<Sname[i]<<": $"<<money[i]<<endl;
        total+=money[i];
    }
    cout<<"Total Expenses: $"<<total<<endl;
}
void fill_2(expenditure *mode1)
{
    for(int i=0;i<Seasons;i++)
    {
        cout<<"Enter "<<Sname[i]<<" expenses: ";
        cin>>mode1->money[i];
    }
}
void show_2(expenditure mode1)
{
    double total=0;
    cout<<"\nEXPENSES\n";
    for(int i=0;i<Seasons;i++)
    {
        cout<<Sname[i]<<": $"<<mode1.money[i]<<endl;
        total+=mode1.money[i];
    }
    cout<<"Total Expenses: $"<<total<<endl;
}