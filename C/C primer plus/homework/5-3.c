#include<stdio.h>
#define weeks 7
int main(void)
{
    int week;

    printf("请输入一个天数（输入零停止程序）:\n");
    scanf("%d",&week);
    while(week>0)
    {
        printf("%d天=%d周%d天.\n",week,week/weeks,week%weeks);
        printf("请输入一个天数（输入零停止程序）:\n");
        scanf("%d",&week);
    }

    return 0;
}
