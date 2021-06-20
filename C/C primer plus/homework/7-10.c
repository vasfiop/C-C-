#include<stdio.h>
#define ONE 17850
#define TWO 23900
#define THREE 29750
#define FOUR 14875
#define START 60
#define FIRST 0.15
#define LAST 0.28
int main(void)
{
    int choose,money,start,n1;
    float down_money;
    choose=0;

    while(choose!=5)
    {
        for(start=0;start<=START;start++)
        {
            printf("*");
        }
        printf("\n");
        printf("请输入你的类别:\n");
        printf("1) 单身                      2) 户主\n");
        printf("3) 已婚，共有                4) 已婚，离异\n");
        printf("5) 退出\n");
        for(start=0;start<=START;start++)
        {
            printf("*");
        }
        printf("\n");
        n1=scanf("%d",&choose);
        if(choose==5)
            break;
        while(choose<0||choose>5)
        {
            printf("请输入1-5的数字.\n");
            scanf("%d",&choose);
        }
        printf("请输入你的收入:");
        scanf("%d",&money);
        if(choose==1)
        {
            if(money<=ONE)
            {
                down_money=money*FIRST;
            }
            else
            {
                down_money=(ONE*FIRST)+LAST*(money-ONE);
            }
        }
        else if (choose==2)
        {
            if(money<=TWO)
            {
                down_money=money*FIRST;
            }
            else
            {
                down_money=TWO*FIRST+LAST*(money-TWO);
            }
        }
        else if(choose==3)
        {
            if(money<=THREE)
            {
                down_money=money*FIRST;
            }
            else
            {
                down_money=THREE*FIRST+LAST*(money-TWO);
            }
        }
        else if(choose==4)
        {
            if(money<=FOUR)
            {
                down_money=money*FIRST;
            }
            else
            {
                down_money=FOUR*FIRST+LAST*(money-FOUR);
            }
        }
        printf("收入=%.2f,税金=%.2f.\n",(float)money-down_money,down_money);
    }

    return 0;
}
