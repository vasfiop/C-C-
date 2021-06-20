/*
Description
编写一个程序，输入a、b、c三个值，输出其中最大值。
Input
一行数组，分别为a b c
Output
a b c其中最大的数
Sample Input
10 20 30
Sample Output
30
*/
#include<stdio.h>
int main(void)
{
    int a,b,c,max;

    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        max=a;
        if(b>max)
            max=b;
        if(c>max)
            max=c;
        printf("%d\n",max);
    }
}
