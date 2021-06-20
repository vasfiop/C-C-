/*
描述
你的任务是计算一些整数的和。
输入
输入包含多个测试用例，以及一个用例一行。每种情况都以一个整数N开始，然后N个整数跟随在同一行。
输出
对于每个测试用例，您应该在一行中输出N个整数的和，并且在输入中为每一行输出一行。
样例输入
4 1 2 3 4
5 1 2 3 4 5
样例输出
10
15
*/
#include<stdio.h>
int main(void)
{
    int n,a,num,sum;

    while(scanf("%d",&n)!=EOF)
    {
        for(a=0,sum=0;a<n;a++)
        {
            scanf("%d",&num);
            sum+=num;
        }
        printf("%d\n",sum);
    }

    return 0;
}
