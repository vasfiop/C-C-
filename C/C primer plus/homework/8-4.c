#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int c,num;
    num=c=0;

    printf("������һ���ַ�Ctrl+Z����:");
    while((ch=getchar())!=EOF)
    {

        if(isalpha(ch))
            c++;
        else if(ispunct(ch))
            continue;\
        else
        {
            num++;
            printf("��%d��������%d����ĸ.\n",num,c);
            c=0;
        }
    }

    return 0;
}
