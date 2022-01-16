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

    cout<<"请输入结构体的长度:";
    (cin>>size).get();
    date = new chaff[size];
    for(i=0;i<size;i++)
    {
        cout<<"请输入字符串:";
        cin.getline(date[i].dross,20);
        cout<<"请输入数字:";
        (cin>>date[i].slag).get();
    }
    for(i=0;i<size;i++)
    {
        // cout<<"数组"
        printf("数组:%-20s数字:%d\n",date[i].dross,date[i].slag);
    }
    
    return 0;
}

