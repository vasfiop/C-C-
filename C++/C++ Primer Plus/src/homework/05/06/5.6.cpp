#include"include"
using namespace std;
const char * MONTHS[12]={"һ��","����","����","����","����","����","����","����","����","ʮ��","ʮһ��","ʮ����"};
int main(int argc, char const *argv[])
{
    int number[3][12];
    int a=0;
    int b=0;
    int count=1;
    int sum=0;

    for(a=0;a<3;a++)
    {
        for(b=0;b<12;b++,count++)
        {
            number[a][b]=count;
            sum+=number[a][b];
        }
    }
    cout<<"��һ��    �ڶ���    ������"<<endl;
    for(a=0;a<12;a++)
    {
        cout<<MONTHS[a]<<number[0][a]<<"     "<<MONTHS[a]<<number[1][a]<<"     "<<MONTHS[a]<<number[2][a]<<endl;
    }
    cout<<"sum is "<<sum;

    return 0;
}
