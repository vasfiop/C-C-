#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node stack;

stack *head;
stack *InputStack(stack *head,int number);//��ջ
void OutStack(stack *head);//��ջ
int FindStack(stack *head);//����ջ��
void Printf(stack *head);//���ջ������