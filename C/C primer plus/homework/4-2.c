#include<stdio.h>
#include<string.h>
int main(void)
{
    char first_name[40];
    char last_name[40];

    printf("请输入你的姓氏:");
    scanf("%s",first_name);
    printf("请输入你的名字:");
    scanf("%s",last_name);
    printf("你的名字:\"%s %s\"\n",first_name,last_name);
    printf("你的名字:%20s%20s\n",first_name,last_name);
    printf("你的名字:%-20s%-20s\n",first_name,last_name);
    printf("你的名字:%*s %*s",strlen(first_name)+3,first_name,strlen(last_name)+3,last_name);

    return 0;

}
