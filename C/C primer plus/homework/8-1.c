#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int c=0;

    printf("������һ���ַ�����Ctrl+Z��������:");
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
            c++;
    }
    printf("һ����%d����ĸ.\n",c);

    return 0;
}
