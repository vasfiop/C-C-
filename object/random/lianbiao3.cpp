#include"head.h"
int main(int argc, char const *argv[])
{
    time_t start;
    time_t finish;
    time_t sum;
    const char *FILENAME="随机函数3.txt";
    ofstream file;
    int position;
    int *randnum;
    int lastpos=RANDSIZE;
    RAND_ *head=NULL;
    RAND_ *NUM=NULL;

    file.open(FILENAME);
    if(!file.is_open())
    {
        cout<<"不能打开"<<FILENAME<<endl;
        exit(EXIT_FAILURE);
    }

    NUM=StartStruct(NUM);

    for(int i=0;i<RANDSIZE;i++)
    {
        cout<<"第"<<i+1<<"轮"<<endl;
        file<<"第"<<i+1<<"轮"<<endl;

        cout<<"初始化中......"<<endl;
        head=NUM;
        srand(time(0));
        randnum=new int[sizeof(int)*RANDSIZE];
        cout<<"初始化完成"<<endl;

        cout<<"生成中......"<<endl;
        start=GetTickCount();
        int a=0;
        lastpos=RANDSIZE;
        while (a<RANDSIZE)
        {
            position=rand()%lastpos;
            randnum[a]=GetPosNum(head,position);
            head=DeleteStruct(head,position);
            lastpos--;
            a++;
        }
        finish=GetTickCount();
        cout<<"生成完毕"<<endl;

        sum+=(finish-start);
        cout<<"耗时: "<<finish-start<<endl;
        file<<"耗时: "<<finish-start<<endl;
        cout<<endl;

        for(int a=0;a<RANDSIZE;a++)
        {
            int find=0;
            for(int b=0;b<RANDSIZE;b++)
            {
                if(randnum[a]==randnum[b]&&a!=b)
                {
                    find=1;
                    break;
                }
            }
            if(find)
                cout<<randnum[a]<<endl;
        }
        
        delete [] randnum;
    }
    cout<<"一共消耗时间: "<<sum<<endl;
    cout<<"平均消耗时间: "<<(double)sum/FORSIZE<<endl;

    file<<"一共消耗时间: "<<sum<<endl;
    file<<"平均消耗时间: "<<(double)sum/FORSIZE<<endl;

    file.close();

    system("pause");

    return 0;
}
RAND_ *StartStruct(RAND_ *head)
{
    RAND_ *start;
    RAND_ *newmem;
    int i=0;

    start=head;
    for(i=0;i<RANDSIZE;i++)
    {
        newmem=new RAND_[sizeof(RAND_)];
        newmem->num=i+1;
        newmem->next=NULL;
        if(start==NULL)
        {
            start=newmem;
            head=newmem;
        }
        else
        {
            start->next=newmem;
            start=start->next;
        }
    }

    return head;
}
RAND_ *DeleteStruct(RAND_ *head,int position)
{
    int i=0;
    RAND_ *start=head;

    if(position==0)
    {
        head=head->next;
        return head;
    }
    for(i=0;i<position-1;i++)
        start=start->next;
    start->next=start->next->next;

    return head;
}
int GetPosNum(RAND_ *head,int position)
{
    int i=0;
    RAND_ *start=head;

    start=head;
    for(i=0;i<position;i++)
        start=start->next;
    
    return start->num;
}