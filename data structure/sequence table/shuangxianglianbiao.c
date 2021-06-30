#include "shuangxianglianbiao.h"
int main(int argc, char const *argv[])
{
    int size;
    int number;
    int new_number;

    head=NULL;
    srand(time(NULL));

    printf("请你输入初始双向链表的长度：");
    scanf("%d",&size);
    head=FirstInput(head,size);
    Printf(head);
    
    printf("请输入一个需要插入的位置和元素：");
    scanf("%d %d",&size,&number);
    Input(head,number,size);
    Printf(head);

    printf("请输入一个删除的节点的下标：");
    scanf("%d",&size);
    head=Delete(head,size);
    Printf(head);
    printf("请输入想要删除的节点:");
    scanf("%d",&number);
    head=Delete_gps(head,number);
    Printf(head);
    
    printf("请输入一个想要改变的元素和预期值:");
    scanf("%d %d",&number,&new_number);
    Change_number(head,number,new_number);
    Printf(head);
    printf("请输入一个想要改变的下标和预期值:");
    scanf("%d %d",&size,&new_number);
    Change_gps(head,size,new_number);
    Printf(head);

    printf("请输入需要寻找的元素：");
    scanf("%d",&number);
    printf("%d\n",Find_gps(head,number));
    printf("请输入需要寻找的下标：");
    scanf("%d",&size);
    printf("%d\n",Find_number(head,size));
    printf("最后一个元素是：%d\n",Findlast(head));
    DownPrintf(head);

    return 0;
}
void DownPrintf(list *head)
{
    list *postion;

    postion=head;
    while(postion->next)
        postion=postion->next;
    while(postion)
    {
        printf("%d ",postion->data);
        postion=postion->back;
    }
    printf("\n");
}
int Findlast(list *head)
{
    list *postion;

    postion=head;
    while(postion->next)
        postion=postion->next;
    return postion->data;
}
int Find_number(list *head,int gps)
{
    list *postion;
    int size;

    size=1;
    postion=head;
    while(size!=gps)
    {
        postion=postion->next;
        size++;
    }
    return postion->data;
}
int Find_gps(list *head,int number)
{
    list *postion;
    int gps;

    gps=1;
    postion=head;
    while(postion->data!=number&&postion)
    {
        gps++;
        postion=postion->next;
    }
        
    return gps;
}
void Change_gps(list *head,int gps,int new_number)
{
    list *postion;
    int size;

    postion=head;
    size=1;
    while(size!=gps&&postion)
    {
        postion=postion->next;
        size++;
    }
    postion->data=new_number;
}
void Change_number(list *head,int number,int new_number)
{
    list *postion;

    postion=head;
    while(postion->data!=number&&postion)
        postion=postion->next;
    if(postion)
        postion->data=new_number;
    else 
        puts("Error");
}
list *Delete_gps(list *head,int number)
{
    list *postion,*delete;

    postion=head;
    while(postion)
    {
        if(postion->data==number)
        {
            if(postion->back==NULL)
            {
                delete=postion->next;
                free(delete);
                head=postion;
                return head;
            }
            else
            {
                postion->back->next=postion->next;
                postion->next->back=postion->back;
                free(postion);
                return head;
            }
        }
        postion=postion->next;
    }

    return head;
}
list *Delete(list *head,int size)
{
    list *postion,*another;
    int gps;

    postion=head;
    gps=1;
    while(postion)
    {
        if(size==1)
        {
            another=postion->next;
            free(postion);
            head=another;
            break;
        }
        if(gps==size)
        {
            postion->back->next=postion->next;
            postion->next->back=postion->back;
            free(postion);
            break;
        }
        size++;
        postion=postion->next;
    }

    return head;
}
void Input(list *head,int number,int size)
{
    list *postion,*new,*q;
    int gps;

    postion=head;
    gps=1;
    while(postion)
    {
        if(gps==size)
        {
            new=(list *)malloc(sizeof(list));
            new->next=NULL;
            new->back=NULL;
            new->data=number;
            q=postion->next;
            postion->next=new;
            new->next=q;
            new->back=postion;
            q->back=new;
            break;
        }
        gps++;
        postion=postion->next;
    }
}
void Printf(list *head)
{
    list *postion;

    postion=head;
    while(postion)
    {
        printf("%d ",postion->data);
        postion=postion->next;
    }
    printf("\n");
}
list *FirstInput(list *head,int size)
{
    list *postion,*new;
    int gps;

    postion=head;
    gps=1;
    while(gps!=size)
    {
        new=(list *)malloc(sizeof(list));
        new->data=rand();
        new->next=NULL;
        new->back=NULL;
        if(head==NULL)
            head=new;
        else
        {
            postion->next=new;
            new->back=postion;
        }
        postion=new;
        gps++;
    }

    return head;
}