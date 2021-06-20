#include<stdio.h>
int main(void)
{
    char first_name[40];
    char last_name[40];

    printf("请输入你的姓:\n");
    scanf("%s",first_name);
    printf("请输入你的名字:\n");
    scanf("%s",last_name);
    printf("你的名字:\"%s,%s\"",first_name,last_name);

    return 0;
}
