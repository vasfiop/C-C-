#include<stdio.h>
#include<string.h>
int main(void)
{
    char ch[40];
    int num;

    printf("请输入一个单词:");
    scanf("%s",ch);
    for(num=strlen(ch);num>=0;num--)
    {
        printf("%c",ch[num]);
    }

    return 0;
}
