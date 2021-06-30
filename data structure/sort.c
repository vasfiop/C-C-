#include<stdio.h>
#include"myrand.h"

#define SIZE 50

void BubbleSort(int *list);//Ã°ÅÝÅÅÐò
void SelectSort(int *list);//Ñ¡Ôñ
void QuickSort(int *list,int head,int tail);//¿ì

int main(int argc, char const *argv[])
{
    int List[SIZE];

    MyRand(List,SIZE);
    for(int a=0;a<SIZE;a++)
        printf("%d ",List[a]);
    printf("\n");
    BubbleSort(List);
    SelectSort(List);
    QuickSort(List,0,SIZE-1);
    for(int a=0;a<SIZE;a++)
        printf("%d ",List[a]);
    printf("\n");

    return 0;
}
void QuickSort(int *list,int head,int tail)
{
    int left,right;
    int pivot;
    
    if(head<tail)
    {
        left=head;
        right=tail;
        pivot=list[left];
        while(left!=right)
        {
            while(left<right&&list[right]>=pivot)
                right--;
            if(left<right)
                list[left++]=list[right];
            while(left<right&&list[left]<=pivot)
                left++;
            if(left<right)
                list[right--]=list[left];
        }
        list[left]=pivot;
        QuickSort(list,head,left-1);
        QuickSort(list,left+1,tail);
    }
}
void SelectSort(int *list)
{
    int a,b;
    int min_gps;
    int middle;

    for(a=0;a<SIZE-1;a++)
    {
        min_gps=a;
        for(b=a+1;b<SIZE;b++)
            if(list[min_gps]>list[b])
                min_gps=b;
        middle=list[a];
        list[a]=list[min_gps];
        list[min_gps]=middle;
    }
    for(a=0;a<SIZE;a++)
        printf("%d ",list[a]);
    printf("\n");
}
void BubbleSort(int *list)
{
    int a,b;
    int middle;

    for(a=0;a<SIZE-1;a++)
        for(b=0;b<SIZE-a-1;b++)
            if(list[b]>list[b+1])
            {
                middle=list[b];
                list[b]=list[b+1];;
                list[b+1]=middle;
            }
    for(a=0;a<SIZE;a++)
        printf("%d ",list[a]);
    printf("\n");
}