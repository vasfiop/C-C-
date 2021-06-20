//假设第一天赚1块，第二天赚2块，求n天赚多少块
//思想一：根据while可以计算出正确答案
//思想二：根据数学的等差数列求和可以计算出答案
#include<stdio.h>//思想二
int main(void)
{
    int day;

    printf("请输入一个天数（输入零退出程序）:");
    scanf("%d",&day);
    while(day>0)
    {
        printf("%d\n",day*1+(day*day-day)/2);
        printf("请输入一个天数（输入零退出程序）:");
        scanf("%d",&day);
    }

    return 0;
}
