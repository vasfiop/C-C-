#include<stdio.h>
double num(double *a,double *b,double *c);
int main(void)
{
    double x,y,z;

    printf("请输入三个double值.");
    scanf("%lf %lf %lf",&x,&y,&z);
    num(&x,&y,&z);
    printf("%f>%f>%f",x,y,z);

    return 0;
}
double num(double *a,double *b,double *c)
{
    double big,middle,small;
    int x,y,z;

    x=((*a-*b)>0) ? 1 : 0;
    y=((*b-*c)>0) ? 1 : 0;
    z=((*a-*c)>0) ? 1 : 0;
    if(x&&y)
    {
        big=*a;
        middle=*b;
        small=*c;
    }
    else
    {
        big=*c;
        middle=*b;
        small=*a;
    }
    if(x&&!z)
    {
        big=*c;
        middle=*a;
        small=*b;
    }
    else
    {
        big=*b;
        middle=*a;
        small=*c;
    }
    if(y&&!z)
    {
        big=*b;
        middle=*c;
        small=*a;
    }
    else
    {
        big=*a;
        middle=*c;
        small=*b;
    }
    *a=big;
    *b=middle;
    *c=small;
}
