#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node stack;

stack *head;
stack *InputStack(stack *head,int number);//进栈
void OutStack(stack *head);//出栈
int FindStack(stack *head);//返回栈顶
void Printf(stack *head);//输出栈的序列