#include "lianshizhan.h"
int main(int argc, char const *argv[])
{
    int number;
    int size;

    head=NULL;
    printf("请输入栈的长度:");
    scanf("%d",&size);
    printf("请连续输入%d个元素:",size);
    for(int a=0;a<size;a++)
    {
        scanf("%d",&number);
        head=InputStack(head,number);
    }
    Printf(head);

    puts("出栈");
    OutStack(head);
    Printf(head);
    puts("栈顶");
    printf("%d\n",FindStack(head));
    
    return 0;
}
int FindStack(stack *head)
{
    stack *postion;
    
    postion=head;
    while(postion->next)
        postion=postion->next;
    return postion->data;
}
void OutStack(stack *head)
{
    stack *postion,*delete;

    postion=head;
    while(postion->next->next)
        postion=postion->next;
    delete=postion->next;
    postion->next=NULL;
    free(delete);
}
void Printf(stack *head)
{
    stack *postion;

    postion=head;
    while(postion)
    {
        printf("%d ",postion->data);
        postion=postion->next;
    }
    printf("\n");
}
stack *InputStack(stack *head,int number)
{
    stack *postion,*new;

    if(head==NULL)
    {
        postion=(stack *)malloc(sizeof(stack));
        postion->data=number;
        postion->next=NULL;
        head=postion;
        return head;
    }
    else 
    {
        postion=head;
        while(postion->next)
            postion=postion->next;
        new=(stack *)malloc(sizeof(stack));
        new->data=number;
        new->next=NULL;
        postion->next=new;
        return head;
    }
}