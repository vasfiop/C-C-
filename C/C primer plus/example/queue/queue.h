#ifdef _QUEUE_H_
#define _QUEUE_H_
#include<stdbool.h>

typedef int Item;
// 或者 typedef struct item {int gumption;int charisma;}Item;

#define MAXQUEUE 10

typedef struct node
{
    Item item;
    struct node*next;
}Node;

typedef struct queue
{
    Node *front;// 指向队列首项的指针
    Node *rear;// 指向队列尾项的指针
    int items;// 队列中的项数
}Queue;

void InitializeQueue(Queue *pq);

bool QueueIsFull(const Queue *pq);

bool QueueIsEmpty(const Queue *pq);

int QueueItemCount(const Queue *pq);

bool EnQueue(Item item,Queue *pq);

bool DeQueue(Item *pitem,Queue *pq);

void EmptyTheQueue(Queue *pq);

#endif