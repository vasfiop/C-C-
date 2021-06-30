#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node
{
    struct node *back;
    int data;
    struct node *next;
};
typedef struct node list;

list *head;
void Input(list *head,int number,int size);//插入一个节点
list *Delete(list *head,int size);//删除一个节点
list *Delete_gps(list *head,int number);//删除元素
void Change_number(list *head,int numnber,int new_number);//改变元素
void Change_gps(list *head,int gps,int new_number);//改变下标的元素
int  Findlast(list *head);
int Find_gps(list *head,int number);//找到元素的下标
int Find_number(list *head,int gps);//找到下标的元素
list *FirstInput(list *head,int size);//首次初始化双向链表
void Printf(list *head);
void DownPrintf(list *head);//倒叙输出