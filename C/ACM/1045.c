/*
Description
有三个整数a b c,由键盘输入，输出其中的最大的数。
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

    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    printf("%d\n",max);

    return 0;
}
