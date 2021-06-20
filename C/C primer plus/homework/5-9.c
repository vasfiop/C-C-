#include<stdio.h>
#define up 273.16
void temperatures(double n);
int main(void)
{
    double num;

    printf("请输入一个华氏温度:");
    while(scanf("%lf",&num)==1)
    {
        temperatures(num);
        printf("请输入一个华氏温度（输入q退出程序）:");
    }

    return 0;
}
void temperatures(double n)
{
    double sheshi=5.0/9.0*(n-32.0);

    printf("摄氏温度:%.2f\n",sheshi);
    printf("开氏温度:%.2f\n",sheshi+up);
    printf("华氏温度:%.2f\n",n);
}
