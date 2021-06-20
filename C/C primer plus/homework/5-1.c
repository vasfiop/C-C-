#include<stdio.h>
#define times 60
int main(void)
{
    int time;

    printf("请输入时间（单位分钟）（输入零停止程序）:\n");
    scanf("%d",&time);
    while(time>0)
    {
        printf("%d分钟=%d小时%d分钟.\n",time,time/times,time%times);
        printf("请输入时间（单位分钟）（输入零停止程序）:\n");
        scanf("%d",&time);
    }
    return 0;
}
