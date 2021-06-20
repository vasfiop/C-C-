#include<stdio.h>
double min(double *x,double *y);
int main(void)
{
    double b,s;

    printf("请输入两个double值:");
    scanf("%lf",&b);
    scanf("%lf",&s);
    min(&b, &s);
    printf("%f大于%f",b,s);

    return 0;
}
double min(double *x,double *y)
{
    double middle;

    if(*x>*y)
    {
        *x=*x;
        *y=*y;
    }
    else
    {
        middle=*x;
        *x=*y;
        *y=middle;
    }
}
