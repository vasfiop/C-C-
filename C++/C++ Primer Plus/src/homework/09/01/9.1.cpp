#include"include"
#include"9.1.h"
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    golf *date;
    int i=0;

    cout<<"请输入想创建的人数大小: ";
    (cin>>size).get();
    date = new golf[size];
    while ((i<size)&&setgolf(date[i]))
    {
        cout<<"请输入下一个人员."<<endl;
        i++;
    }
    cout<<"一下是所有人员数据."<<endl;
    for(i=0;i<size;i++)
        showgolf(date[i]);
    
    return 0;
}
int setgolf(golf & g)
{
    cout<<"请输入姓名: ";
    cin.getline(g.fullname,Len);
    if(g.fullname[0]=='\0')
        return 0;
    cout<<"请输入等级: ";
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
    printf("姓名:%-20s等级:%d\n",g.fullname,g.handicap);
    //还是printf控制输出格式比较好看方便
    // cout<<"姓名:"<<g.fullname<<"等级:"<<g.handicap<<endl;
}


