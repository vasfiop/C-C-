#ifndef _LIST_H_
#define _LIST_H_

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node Node;
typedef Node* List;

void InitializeList(List *plist);//初始化
bool ListIsEmpty(List *postion);
bool ListIsFull(List *plist);
bool AddNumber(List *head,int number);
void Printf(List *head);
bool AddPostionNumber(List *head,int number,int postion);
void DeletePostionNumber(List *head,int postion);
void ChangePostionNumber(List *head,int postione,int number);
unsigned int FindNumber(List *head,int number);
bool RandomGeneration(List *head,int number);//随机生成指定元素

#endif