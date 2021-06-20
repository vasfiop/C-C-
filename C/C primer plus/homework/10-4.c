#include<stdio.h>
double num(double n[2]);
int main(void)
{
    double x[2];
    int y;
    double z;

    printf("请输入两个double值:");
    for(y=0;y<2;y++)
    {
        scanf("%lf",&x[y]);
    }

    printf("max=%.2f",num(x));
    return 0;
}
double num(double n[2])
{
    if(n[1]>n[0])
        return n[1];
    else
        return n[0];
}
