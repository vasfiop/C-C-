#include<stdio.h>
void larger_of(double *x,double *y);
int main(void)
{
    double a,b;

    printf("请输入两个double值.");
    scanf("%lf %lf",&a,&b);
    larger_of(&a,&b);
    printf("%f %f",a,b);

    return 0;
}
void larger_of(double *x,double *y)
{
    if(x>y)
        *x=*y;
    else
        *y=*x;
}
