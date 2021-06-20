/*
Description
求两个自然数的平均数，例如 1和2的平均数为1，3和5的平均数为4
Input
每行两个大于0的整数x和y，x和y都在unsigned int的表示范围之内，最后以0 0结束。
Output
输出x和y的平均数，0 0是结束标志，并用计算输出
Sample Input
1 2
3 5
0 0
Sample Output
1
4
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    unsigned int a,b;

    scanf("%d %d",&a,&b);
    while(a!=0&&b!=0)
    {
        printf("%d\n",(a+b)/2);
        scanf("%d %d",&a,&b);
    }
    
    return 0;
}
