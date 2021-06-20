/*
Description
有n个整数，使前面各数顺序向后移m个位置，
最后m个数变成前面m个数。
写一函数：实现以上功能，在主函数中输入n个数和输出调整后的n个数。
Input
输入数据的个数n,n个整数 移动的位置m
Output
移动后的n个数
Sample Input
10
1 2 3 4 5 6 7 8 9 10
2
Sample Output
9 10 1 2 3 4 5 6 7 8 
*/
#include<stdio.h>
#include<stdlib.h>
void Change(int *num,int n,int m);
int main(int argc, char const *argv[])
{
    int n,m;
    int *num;
    int a;

    scanf("%d",&n);
    num=(int *)malloc(sizeof(int)*n);
    for(a=0;a<n;a++)
        scanf("%d",&num[a]);
    scanf("%d",&m);
    Change(num,n,m);
    for(a=0;a<n;a++)
        printf("%d ",num[a]);
    printf("\n");

    return 0;
}
void Change(int *num,int n,int m)
{
    int a,b;
    int *num_2;

    num_2=(int *)malloc(sizeof(int)*n);
    for(a=0,b=m;a<n-m;a++,b++)
        num_2[b]=num[a];
    for(a=n-m,b=0;a<n;a++,b++)
        num_2[b]=num[a];
    for(a=0;a<n;a++)
        num[a]=num_2[a];
}
