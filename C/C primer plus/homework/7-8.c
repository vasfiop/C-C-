#include<stdio.h>
#define ONE 0.15
#define TWO 0.2
#define THREE 0.25
#define NUM 50
int main(void)
{
    int n1,n2;
    float time,money,down_money;
    n1=n2=0;

    while(n2!=5)
    {
        for(n1=0;n1<=NUM;n1++)//*循环
        {
            putchar('*');
        }
        printf("\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $8.75/hr                          2) $9.33/hr\n");
        printf("3) $10.00/hr                         3) $11.20/hr\n");
        printf("5) quit\n");
        for(n1=0;n1<=NUM;n1++)//*循环
        {
            putchar('*');
        }
        printf("\n");
        n1=scanf("%d",&n2);
        if(n2==5)
        {
            break;
        }
        while(n2<0||n2>5)
        {
            printf("请输入正确的数字.\n");
            scanf("%d",&n2);
        }
        printf("请输入你的工作时间:");
        scanf("%f",&time);
        if(time>40)//时间输入
        {
            time=(time-40)*1.5+40;
        }
        switch(n2)//钱算法
        {
            case 1:
                money=8.75*time;
                break;
            case 2:
                money=9.33*time;
                break;
            case 3:
                money=10.00*time;
                break;
            case 4:
                money=11.20*time;
                break;
            default:
                break;
        }
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
        printf("工资总额=%.2f,税金=%.2f,净收入=%.2f.\n",money,down_money,money-down_money);
    }

    return 0;
}
