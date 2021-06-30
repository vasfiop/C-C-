#include "lianbiao.h"

int main(int argc, char const *argv[])
{
    List head;
    int number;
    int postion;
    
    InitializeList(&head);
    // if(ListIsFull(&head))
    // {
    //     fprintf(stderr,"No memory!\n");
    //     exit(1);
    // }
    // fprintf(stderr,"Enter first number(enter EOF to end):");
    // while(scanf("%d",&number)!=EOF)
    // {
    //     if(ListIsFull(&head))
    //     {
    //         fprintf(stderr,"No memrty!\n");
    //         exit(1);
    //     }
    //     if(AddNumber(&head,number)==false)
    //     {
    //         fprintf(stderr,"No memory!\n");
    //         exit(1);
    //     }
    //     fprintf(stderr,"Now enter next number for list(enter EOF to end):");
    // }
    // Printf(&head);
    
    // printf("请输入你想插入的位置和元素:");
    // scanf("%d %d",&postion,&number);
    // if(AddPostionNumber(&head,number,postion)==false)
    // {
    //     fprintf(stderr,"No memory!\n");
    //     exit(1);
    // }
    // Printf(&head);

    // printf("请输入你想要删除的位置:");
    // scanf("%d",&postion);
    // DeletePostionNumber(&head,postion);
    // Printf(&head);

    // printf("请输入你想要更改的元素的位置和元素值:");
    // scanf("%d %d",&postion,&number);
    // ChangePostionNumber(&head,postion,number);
    // Printf(&head);

    // printf("请输入你想要查找的元素:");
    // scanf("%d",&number);
    // postion=FindNumber(&head,number);
    // if(postion==0)
    //     fprintf(stderr,"Not find %d.\n",number);
    // else 
    //     fprintf(stderr,"The %d is in %d.\n",number,postion);

    printf("请输入你想要随机生成元素的个数:");
    scanf("%d",&number);
    if(RandomGeneration(&head,number)==false)
    {
        fprintf(stderr,"Error,random generation is error.\n");
        exit(1);
    }
    Printf(&head);

    return 0;
}
bool RandomGeneration(List *head,int number)
{
    Node *plist,*pnew;
    int count;

    count=1;
    srand(time(0));
    while(count<=number)
    {
        pnew=(Node *)malloc(sizeof(Node));
        if(pnew==NULL)
            return false;
        pnew->next=NULL;
        pnew->data=rand();
        if(*head==NULL)
        {
            *head=pnew;
            plist=*head;
        }
        else
        {
            plist->next=pnew;
            plist=plist->next;
        }
        count++;
    }

    return true;
}
unsigned int FindNumber(List *head,int number)
{
    Node *plist;
    int count;
    
    plist=*head;
    count=1;
    while(plist)
    {
        if(plist->data==number)
            return count;
        plist=plist->next;
        count++;
    }

    return 0;
}
void ChangePostionNumber(List *head,int postion,int number)
{
    Node *plist;
    int count;

    plist=*head;
    count=1;
    while(count<postion)
    {
        plist=plist->next;
        count++;
    }
    plist->data=number;
}
void DeletePostionNumber(List *head,int postion)
{
    Node *plist,*pnext,*pdelet;
    int count;

    plist=*head;
    count=1;
    while(count<postion-1)
    {
        plist=plist->next;
        count++;
    }
    pdelet=plist->next;
    pnext=pdelet->next;
    free(pdelet);
    plist->next=pnext;
}
bool AddPostionNumber(List *head,int number,int postion)
{
    Node *pnew,*plist,*pnext;
    int count;

    plist=*head;
    pnew=(Node *)malloc(sizeof(Node));
    if(pnew==NULL)
        return false;
    pnew->next=NULL;
    pnew->data=number;
    count=1;
    while(count<postion)
    {
        plist=plist->next;
        count++;
    }
    pnext=plist->next;
    plist->next=pnew;
    pnew->next=pnext;

    return true;
}
void Printf(List *head)
{
    Node *plist;
    
    plist=*head;
    while(plist)
    {
        printf("%d ",plist->data);
        plist=plist->next;
    }
    printf("\n");
}
bool AddNumber(List *head,int number)
{
    Node *pnew,*plist;

    plist=*head;
    pnew=(Node*)malloc(sizeof(Node));
    if(pnew==NULL)
        return false;
    pnew->data=number;
    pnew->next=NULL;
    if(*head==NULL)
        *head=pnew;
    else
    {
        while(plist->next)
            plist=plist->next;
        plist->next=pnew;
    }

    return true;
}
bool ListIsFull(List *plist)
{
    Node *pnew;
    bool full;

    pnew=(Node *)malloc(sizeof(Node));
    if(pnew==NULL)
        full=true;
    else
        full=false;
    free(pnew);

    return full;
}
void InitializeList(List *plist)
{
    *plist=NULL;
}
bool ListIsEmpty(List *postion)
{
    if(*postion==NULL)
        return true;
    else 
        return false;
}