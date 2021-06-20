#include<stdio.h>
double num(double x[2]);
int main(void)
{
    double a[2];
    int b;

    printf("请输入两个double值:");
    for(b=0;b<2;b++)
    {
        scanf("%lf",&a[b]);
    }
    printf("差值=%.2f",num(a));

    return 0;
}
double num(double x[2])
{
    if(x[1]>x[0])
        return (x[1]-x[0]);
    else
        return (x[0]-x[1]);
}
