#include<stdio.h>
#define YL 2.05
#define TC 1.15
#define HLB 1.09
#define ONE 6.5
#define TWO 14
#define THREE 0.5
int main(void)
{
    float all_money,down_money,freight,buy,money,one_weight,weight;
    float money_a,money_b,money_c;
    float weight_a,weight_b,weight_c;
    char ch;
    printf("输入a是洋葱的磅数，输入b是甜菜的磅数，");printf("输入c是胡萝卜的磅数（输入q退出程序）.\n");
    weight=0;
    money=money_a=money_b=money_c=0;
    weight_a=weight_b=weight_c=0;
    while((ch=getchar())!='q')
    {
        switch(ch)
        {
            case 'a':
                printf("请输入洋葱的磅数:");
                scanf("%f",&one_weight);
                money_a+=one_weight*YL;
                weight_a+=weight;

                break;
            case 'b':
                printf("请输入甜菜的磅数:");
                scanf("%f",&one_weight);
                money_b+=one_weight*TC;
                weight_b+=weight;

                break;
            case 'c':
                printf("请输入胡萝卜的磅数:");
                scanf("%f",&one_weight);
                money_c+=one_weight*HLB;
                weight_c+=weight;

                break;
            default:
                break;
        }
        weight+=one_weight;
        printf("请输入a是洋葱的磅数，输入b是甜菜的磅数，");printf("输入c是胡萝卜的磅数（输入q退出程序）.\n");
        while(getchar()!='\n')
            continue;
    }
    money=money_a+money_b+money_c;
    if(money>=100)
    {
        down_money=money*0.05;
    }
    else
    {
        down_money=0;
    }
    if(weight<=5)
    {
        freight=ONE;
    }
    else if(weight>5&&weight<=20)
    {
        freight=TWO;
    }
    else if(weight>20)
    {
        freight=TWO+(freight-20)*THREE;
    }
    printf("物品售价:\n洋葱：%.2f 甜菜：%.2f 胡萝卜：%.2f.\n",YL,TC,HLB);
    printf("订购的重量%.2f磅.\n",weight);
    printf("订购的蔬菜费用:%.2f\n洋葱：%.2f 甜菜：%.2f 胡萝卜：%.2f.\n",money,money_a,money_b,money_c);
    printf("折扣：%.2f\n",down_money);
    printf("运费和包装费：%.2f",freight);

    return 0;
}
