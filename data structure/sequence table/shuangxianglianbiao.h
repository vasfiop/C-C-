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
void Input(list *head,int number,int size);//����һ���ڵ�
list *Delete(list *head,int size);//ɾ��һ���ڵ�
list *Delete_gps(list *head,int number);//ɾ��Ԫ��
void Change_number(list *head,int numnber,int new_number);//�ı�Ԫ��
void Change_gps(list *head,int gps,int new_number);//�ı��±��Ԫ��
int  Findlast(list *head);
int Find_gps(list *head,int number);//�ҵ�Ԫ�ص��±�
int Find_number(list *head,int gps);//�ҵ��±��Ԫ��
list *FirstInput(list *head,int size);//�״γ�ʼ��˫������
void Printf(list *head);
void DownPrintf(list *head);//�������