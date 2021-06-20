/*
Description
写一个判断素数的函数，在主函数输入一个整数，输出是否是素数的消息。
Input
一个数
Output
如果是素数输出prime 如果不是输出not prime
Sample Input
97
Sample Output
prime
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int find;
    int n;
    int a;

    scanf("%d",&num);
    for(a=2,find=1;a<num;a++)
        if(num%a==0)
        {
            find=0;
            break;
        }
    if(find)
        printf("prime\n");
    else 
        printf("not prime\n");

    return 0;
}
