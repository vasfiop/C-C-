#include<stdio.h>
#define ONE 0.15
#define TWO 0.2
#define THREE 0.25
#define NUM 50
int main(void)
{
    int n1;
    char choise;
    float time,money,down_money;
    n1=0;

    while(choise!='q')
    {
        for(n1=0;n1<=NUM;n1++)//*ѭ��
        {
            putchar('*');
        }
        printf("\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("a) $8.75/hr                          b) $9.33/hr\n");
        printf("c) $10.00/hr                         d) $11.20/hr\n");
        printf("q) quit\n");
        for(n1=0;n1<=NUM;n1++)//*ѭ��
        {
            putchar('*');
        }
        printf("\n");
        n1=scanf("%s",&choise);
        if(choise=='q')
        {
            break;
        }
        while(choise<'a'||choise>'d')
        {
            printf("��������ȷ����ĸ.\n");
            scanf("%s",&choise);
        }
        printf("��������Ĺ���ʱ��:");
        while(scanf("%f",&time)==0)
        {
            printf("��������ȷ�Ĺ���ʱ��.\n");
        }
        if(time>40)//ʱ������
        {
            time=(time-40)*1.5+40;
        }
        switch(choise)//Ǯ�㷨
        {
            case 'a':
                money=8.75*time;
                break;
            case 'b':
                money=9.33*time;
                break;
            case 'c':
                money=10.00*time;
                break;
            case 'd':
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
        printf("�����ܶ�=%.2f,˰��=%.2f,������=%.2f.\n",money,down_money,money-down_money);
    }

    return 0;
}

