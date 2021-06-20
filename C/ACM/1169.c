/*
Description
输入一个正整数n.求1+1/2!+1/3!+....+1/n!
要求定义并调用函数fact(n)计算n的阶乘，函数返回值的类型是点单精度浮点型。
* 输出保留4位小数
Input
正整数n
Output
数列之和
Sample Input
2
Sample Output
1.5000
*/
#include<stdio.h>
float fact(int );
int main(int argc, char const *argv[])
{
    int n;
    float sum;

    scanf("%d",&n);
    sum=fact(n);
    printf("%.4f\n",sum);

    return 0;
}
float fact(int n)
{
    int a,b;
    float sum;
    float num;

    for(a=1,sum=0;a<=n;a++)
    {
        for(b=1,num=1;b<=a;b++)
            num*=b;
        sum+=(float)1/num;
    }
    return sum;
}