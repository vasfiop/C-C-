#include"include"
#include"9.1.h"
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    golf *date;
    int i=0;

    cout<<"�������봴����������С: ";
    (cin>>size).get();
    date = new golf[size];
    while ((i<size)&&setgolf(date[i]))
    {
        cout<<"��������һ����Ա."<<endl;
        i++;
    }
    cout<<"һ����������Ա����."<<endl;
    for(i=0;i<size;i++)
        showgolf(date[i]);
    
    return 0;
}
int setgolf(golf & g)
{
    cout<<"����������: ";
    cin.getline(g.fullname,Len);
    if(g.fullname[0]=='\0')
        return 0;
    cout<<"������ȼ�: ";
    (cin>>g.handicap).get();
    return 1;
}
void setgolf(golf &g,const char * name ,int hc)
{
    strcpy(g.fullname,name);
    g.handicap=hc;
}
void handicap(golf & g,int hc)
{
    g.handicap=hc;
}
void showgolf(const golf & g)
{
    printf("����:%-20s�ȼ�:%d\n",g.fullname,g.handicap);
    //����printf���������ʽ�ȽϺÿ�����
    // cout<<"����:"<<g.fullname<<"�ȼ�:"<<g.handicap<<endl;
}


