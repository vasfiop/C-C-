//思想二
#include<stdio.h>
int main(void)
{
    int day,money;
    day=money=0;

    printf("请输入一个天数（输入零退出程序）:");
    scanf("%d",&day);
    while(day>0)
    {
        printf("%d\n",(2*day*day*day+3*day*day+day)/6);
        printf("请输入一个天数（输入零退出程序）:");
        scanf("%d",&day);
    }

    return 0;
}
