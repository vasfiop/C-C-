//ͬ5-5������˼��
#include<stdio.h>//˼��һ
int main(void)
{
    int day,money,all_money;
    day=money=all_money=0;

    printf("������һ������:");
    scanf("%d",&day);
    while(money++<day)
    {
        all_money=money*money+all_money;
    }
    printf("%d",all_money);

    return 0;
}
