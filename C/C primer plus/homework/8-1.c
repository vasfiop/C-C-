#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int c=0;

    printf("请输入一串字符，按Ctrl+Z结束程序:");
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
            c++;
    }
    printf("一共有%d个字母.\n",c);

    return 0;
}
