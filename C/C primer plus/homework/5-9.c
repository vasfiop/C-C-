#include<stdio.h>
#define up 273.16
void temperatures(double n);
int main(void)
{
    double num;

    printf("������һ�������¶�:");
    while(scanf("%lf",&num)==1)
    {
        temperatures(num);
        printf("������һ�������¶ȣ�����q�˳�����:");
    }

    return 0;
}
void temperatures(double n)
{
    double sheshi=5.0/9.0*(n-32.0);

    printf("�����¶�:%.2f\n",sheshi);
    printf("�����¶�:%.2f\n",sheshi+up);
    printf("�����¶�:%.2f\n",n);
}
