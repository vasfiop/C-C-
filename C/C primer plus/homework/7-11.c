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
    printf("����a����еİ���������b����˵İ�����");printf("����c�Ǻ��ܲ��İ���������q�˳�����.\n");
    weight=0;
    money=money_a=money_b=money_c=0;
    weight_a=weight_b=weight_c=0;
    while((ch=getchar())!='q')
    {
        switch(ch)
        {
            case 'a':
                printf("��������еİ���:");
                scanf("%f",&one_weight);
                money_a+=one_weight*YL;
                weight_a+=weight;

                break;
            case 'b':
                printf("��������˵İ���:");
                scanf("%f",&one_weight);
                money_b+=one_weight*TC;
                weight_b+=weight;

                break;
            case 'c':
                printf("��������ܲ��İ���:");
                scanf("%f",&one_weight);
                money_c+=one_weight*HLB;
                weight_c+=weight;

                break;
            default:
                break;
        }
        weight+=one_weight;
        printf("������a����еİ���������b����˵İ�����");printf("����c�Ǻ��ܲ��İ���������q�˳�����.\n");
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
    printf("��Ʒ�ۼ�:\n��У�%.2f ��ˣ�%.2f ���ܲ���%.2f.\n",YL,TC,HLB);
    printf("����������%.2f��.\n",weight);
    printf("�������߲˷���:%.2f\n��У�%.2f ��ˣ�%.2f ���ܲ���%.2f.\n",money,money_a,money_b,money_c);
    printf("�ۿۣ�%.2f\n",down_money);
    printf("�˷ѺͰ�װ�ѣ�%.2f",freight);

    return 0;
}
