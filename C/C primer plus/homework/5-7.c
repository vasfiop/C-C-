#include<stdio.h>
void pound(double n);
int main(void)
{
    double num;

    printf("请输入一个double值:");
    scanf("%lf",&num);
    pound(num);

    return 0;
}
void pound(double n)
{
    printf("%f",n*n*n);
}
