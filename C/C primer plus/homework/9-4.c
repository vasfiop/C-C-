#include<stdio.h>
double num(double a,double b);
int main(void)
{
    double x,y,c;

    printf("请输入两个double值.");
    scanf("%lf %lf",&x,&y);
    c=num(x,y);
    printf("%f",c);

    return 0;
}
double num(double a,double b)
{
    double really;

    a=1/a;
    b=1/b;
    really=(a+b)/2;

    return 1/really;
}
