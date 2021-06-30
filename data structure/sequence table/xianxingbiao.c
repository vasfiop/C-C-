#include<stdio.h>
#include<stdlib.h>

int Search(int *num,int x);//查找x的位置，如果没有返回-1
int Input(int *num,int x);//为表放入元素
int Insert(int *num,int i,int x,int size,int number_size);//把节点x插入在第i个位置上，成功返回1；失败返回0
int Find(int *num,int i,int *x,int size);//寻找第i个节点，传递给x，成功返回1，失败返回0
int Delete(int *num,int i,int *x,int number_size);//删除第i个节点，并且传递给x，成功返回1，失败返回0
void Printf(int *num,int size);//输出

int main(int argc, char const *argv[])
{
    int size;
    int number_size;
    int *list;
    int find;
    int answer;
    int number,gps;

    printf("线性表的长度：");
    scanf("%d",&size);
    if((list=(int *)malloc(sizeof(int)*size))==NULL)
    {
        printf("list创建失败！\n");
        exit(EXIT_FAILURE);
    }
    for(int a=0;a<size;a++)
        list[a]=0;
    Printf(list,size);

    printf("连续输入小于等于%d个数字，放入list中:\n",size);
    number_size=Input(list,size);
    printf("输入已完成！\n");
    Printf(list,number_size);

    printf("输入等待查找元素:");
    scanf("%d",&find);
    if((find=Search(list,find))==-1)
        printf("未找到该元素。\n");
    else 
        printf("已经找到该元素，位置：%d.\n",find);
    
    printf("请输入一个节点位置，把节点上的数字传递给find。\n");
    scanf("%d",&find);
    if(Find(list,find,&answer,number_size)==0)
    {
        printf("提取节点元素失败.\n");
        exit(EXIT_FAILURE);
    }
    printf("提取成功！\n");
    printf("提取元素是：%d\n",answer);

    printf("请输入2个数字，第一个是插入的元素，第二个是插入的节点:");
    scanf("%d %d",&number,&gps);
    if(Insert(list,gps,number,size,number_size)==0)
    {
        printf("节点插入失败.\n");
        exit(EXIT_FAILURE);
    }
    number_size++;
    printf("插入元素成功！\n");
    Printf(list,number_size);

    printf("请输入一个节点，进行删除操作并传递给answer.\n");
    scanf("%d",&number);
    if(Delete(list,number,&answer,number_size)==0)
    {
        printf("删除操作失败！\n");
        exit(EXIT_FAILURE);
    }
    printf("删除已完成！\n");
    printf("删除的元素是：%d\n",answer);
    number_size--;
    Printf(list,number_size);
    
    return 0;
}
void Printf(int *num,int size)
{
    int a;

    for(a=0;a<size;a++)
        printf("%d ",num[a]);
    printf("\n");
}
int Delete(int *num,int i,int *x,int number_size)
{
    int a;
    
    if(i>=number_size||i<0)
        return 0;
    (*x)=num[i];
    for(a=i;a<number_size-1;a++)
        num[a]=num[a+1];
    return 1;
}
int Insert(int *num,int i,int x,int size,int number_size)
{
    int a;
    
    if(number_size==size)
        return 0;
    if(i>=number_size)
        return 0;
    for(a=number_size;a>i;a--)
        num[a]=num[a-1];
    num[i]=x;
    return  1;
}
int Find(int *num,int i,int *x,int size)
{
    int a;

    if(i>=size||i<0)
        return 0;
    (*x)=num[i];
    return 1;
}
int Input(int *num,int x)
{
    int a;
    int count;
    
    a=count=0;
    while(scanf("%d",&num[a])!=EOF)
    {
        count++;
        a++;
    }
        
    return count--;
}
int Search(int *num,int x)
{
    int a,find;
    find=-1;

    for(a=0;a<x;a++)
        if(num[a]==x)
        {
            find=a;
            break;
        }

    return find;
}
