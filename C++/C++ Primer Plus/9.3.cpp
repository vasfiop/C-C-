#include"include"
using namespace std;
struct chaff
{
    char dross[20];
    int slag;
};
int main(int argc, char const *argv[])
{
    int size;
    chaff *date;
    int i;

    cout<<"������ṹ��ĳ���:";
    (cin>>size).get();
    date = new chaff[size];
    for(i=0;i<size;i++)
    {
        cout<<"�������ַ���:";
        cin.getline(date[i].dross,20);
        cout<<"����������:";
        (cin>>date[i].slag).get();
    }
    for(i=0;i<size;i++)
    {
        // cout<<"����"
        printf("����:%-20s����:%d\n",date[i].dross,date[i].slag);
    }
    
    return 0;
}

