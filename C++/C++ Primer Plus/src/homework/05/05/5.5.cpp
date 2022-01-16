#include"include"
using namespace std;
const char * MONTHS[12]={"一月","二月","三月","四月","五月","六月","七月","八月","九月","十月","十一月","十二月"};
int main(int argc, char const *argv[])
{
    array<int,12>number;
    int a=0;
    int sum=0;

    for(a=0;a<12;a++)
    {
        cin>>number[a];
        sum+=number[a];
    }
    for(a=0;a<12;a++)
    {
        cout<<MONTHS[a]<<" "<<number[a]<<endl;
    }
    cout<<"sum is "<<sum<<endl;

    return 0;
}
