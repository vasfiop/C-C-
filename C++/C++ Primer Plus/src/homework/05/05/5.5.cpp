#include"include"
using namespace std;
const char * MONTHS[12]={"һ��","����","����","����","����","����","����","����","����","ʮ��","ʮһ��","ʮ����"};
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
