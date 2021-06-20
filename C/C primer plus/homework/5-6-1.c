//同5-5有两个思想
#include<stdio.h>//思想一
int main(void)
{
    int day,money,all_money;
    day=money=all_money=0;

    printf("请输入一个天数:");
    scanf("%d",&day);
    while(money++<day)
    {
        all_money=money*money+all_money;
    }
    printf("%d",all_money);

    return 0;
}
