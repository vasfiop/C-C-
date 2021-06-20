/*
Description
已有a、b两个链表，每个链表中的结点包括学好、成绩。要求把两个链表合并，按学号升序排列。

Input
第一行，a、b两个链表元素的数量N、M,用空格隔开。 接下来N行是a的数据 然后M行是b的数据 每行数据由学号和成绩两部分组成
Output
按照学号升序排列的数据

Sample Input
2 3
5 100
6 89

3 82
4 95
2 10
Sample Output
2 10
3 82
4 95
5 100
6 89
*/
#include<iostream>
using namespace std;

struct link
{
    int num;
    int chengji;
    link * next=NULL;
};
void Printf(link *head,int size);
int main()
{
    int m,n;
    link *headn=NULL;
    link *headm=NULL;
    link *head;

    (cin>>n).get();
    (cin>>m).get();
    link *t;

    for(int i=0;i<n;i++)
    {
        link *newl=new link;
        (cin>>newl->num).get();
        (cin>>newl->chengji).get();
        if(i==0)
        {
            headn=newl;
            t=headn;
        }
        else
        {
            t->next=newl;
            t=t->next;
        }
    }

    t=headm;
    for(int i=0;i<m;i++)
    {
        link *newl=new link;
        (cin>>newl->num).get();
        (cin>>newl->chengji).get();
        if(i==0)
        {
            headm=newl;
            t=headm;
        }
        else
        {
            t->next=newl;
            t=t->next;
        }
    }

    t=headn;
    for(int i=0;i<n-1;i++)
        t=t->next;
    t->next=headm;

    t=headn;
    link *p=head;
    head=t;
    p=head;
    for(int i=0;i<n+m;i++)
    {
        headm=t->next;
        for(int j=i+1;j<n+m;j++)
        {
            if(headm->num<p->num&&i==0)
            {
                head=headm;
                p=head;
            }
            else if(headm->next->num<p->num)
                p->next=t;
        }
        p=p->next;
        t=t->next;
    }
    Printf(head,m+n);

    return 0;
}
void Printf(link *head,int size)
{
    link *t;

    t=head;
    for(int i=0;i<size;i++)
    {
        cout<<"printf::"<<t->num<<" "<<t->chengji<<endl;
        t=t->next;
    }
}