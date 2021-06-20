/*
Description
写一函数，输入一个四位数字，要求输出这四个数字字符，但每两个数字间空格。如输入1990，应输出"1 9 9 0"。
Input
一个四位数
Output
增加空格输出
Sample Input
1990
Sample Output
1 9 9 0 
*/
#include<stdio.h>
void OutPut(int num);
int main(int argc, char const *argv[])
{
    int num;

    scanf("%d",&num);
    OutPut(num);
    printf("\n");

    return 0;
}
void OutPut(int num)
{
    int n[4];
    int a;

    a=3;
    while(num)
    {
        n[a--]=num%10;
        num/=10;
    }
    for(a=0;a<4;a++)
        printf("%-2d",n[a]);
}