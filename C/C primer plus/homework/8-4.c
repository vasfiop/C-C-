#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int c,num;
    num=c=0;

    printf("请输入一串字符Ctrl+Z结束:");
    while((ch=getchar())!=EOF)
    {

        if(isalpha(ch))
            c++;
        else if(ispunct(ch))
            continue;\
        else
        {
            num++;
            printf("第%d个单词有%d个字母.\n",num,c);
            c=0;
        }
    }

    return 0;
}
