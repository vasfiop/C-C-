#include<stdio.h>
double min(double *x,double *y);
int main(void)
{
    double b,s;

    printf("����������doubleֵ:");
    scanf("%lf",&b);
    scanf("%lf",&s);
    min(&b, &s);
    printf("%f����%f",b,s);

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
