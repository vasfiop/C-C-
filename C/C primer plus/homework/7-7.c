#include<stdio.h>
#define DOUR 1000
#define ONE 0.15
#define TWO 0.2
#define THREE 0.25
int main(void)
{
    float fl1,time,money,down_money;

    printf("������һ��ʱ��:");
    scanf("%f",&time);
    if(time>40)//ʱ��
    {
        time=(time-40)*1.5+40;
    }
    money=DOUR*time;
    if(money<=300)
    {
        down_money=money*ONE;
    }
    else if(money<=450)
    {
        down_money=money*TWO;
    }
    else
    {
        down_money=(450*TWO)+(money-450)*THREE;
    }
    printf("�����ܶ�=%.2f,˰��=%.2f,������=%.2f\n",money,down_money,money-down_money);

    return 0;
}
