/*
Description
已有一个已排好的9个元素的数组，今输入一个数要求按原来排序的规律将它插入数组中。
Input
第一行，原始数列。 第二行，需要插入的数字。
Output
排序后的数列
Sample Input
1 7 8 17 23 24 59 62 101
50
Sample Output
1
7
8
17
23
24
50
59
62
101
*/
#include<stdio.h>
#define SIZE 10
int main(int argc, char const *argv[])
{
    int num[10];
    int n;
    int a,b;

    for(a=0;a<SIZE-1;a++)
        scanf("%d",&num[a]);
    scanf("%d",&n);
    for(a=0;a<SIZE-1;a++)
        if(num[a]>n)
            break;
    for(b=SIZE-1;b>=a;b--)
        num[b]=num[b-1];
    num[a]=n;
    for(a=0;a<SIZE;a++)
        printf("%d\n",num[a]);

    return 0;
}
