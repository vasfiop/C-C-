#include<stdio.h>
int main(void)
{
    float aday=3.156e7;
    int year;

    printf("请输入你的年龄:");
    scanf("%d",&year);
    printf("你的年龄%d，你活了%e秒",year,year*aday);

    return 0;
}
