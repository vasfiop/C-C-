/*
描述
你的任务是计算一些整数的和。
输入
输入在第一行中包含一个整数N，然后后面有N行。每一行都以一个整数M开头，然后在同一行后面跟着M个整数。
输出
对于每组输入整数，您应该将它们的和输出到一行中，并且输入中的每一行都有一行输出。
样例输入
2
4 1 2 3 4
5 1 2 3 4 5
样例输出
10
15
*/
#include<stdio.h>
int main(void)
{
    int a,b,c,sum,n,m,num;

    while(scanf("%d",&n)!=EOF)
    {
        for(a=0;a<n;a++)
        {
            scanf("%d",&m);
            for(b=0,sum=0;b<m;b++)
            {
                scanf("%d",&num);
                sum+=num;
            }
            printf("%d\n",sum);
        }
    }

    return 0;
}
