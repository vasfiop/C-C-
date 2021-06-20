/*
Description
用迭代法求 。求平方根的迭代公式为： X[n+1]=1/2(X[n]+a/X[n]) 要求前后两次求出的得差的绝对值少于0.00001。 输出保留3位小数
Input
X
Output
X的平方根
Sample Input
4
Sample Output
2.000
*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    double x0,x1;
    double a;

    scanf("%lf",&a);
    x0=a/2;
    x1=(x0+x0/a)/2;
    while(fabs(x0-x1)>0.00001)//fabs()返回参数的绝对值
    {
        x0=x1;
        x1=(x0+a/x0)/2;
    }
    printf("%.3f\n",x1);

    return 0;
}
