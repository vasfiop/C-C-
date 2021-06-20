/*
描述
你的任务是计算a + b。
输入
输入将由一系列整数对a和b组成，用空格分隔，每行一对整数。
输出
对于每一对输入整数a和b，都应该输出a和b的和，然后是空行。
样例输入
1 5
10 20
样例输出
6

30
*/
#include<stdio.h>
int main(void)
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        printf("%d\n\n",a+b);
    }

    return 0;
}
