#include<stdio.h>
int main(void)
{
    char ch;
    int n1,n2;
    n1=n2=0;

    printf("������һ���ַ�������#ֹͣ��:");
    while((ch=getchar())!='#')
    {
        if(ch=='.')
        {
            putchar('!');
            n1++;
        }
        else if(ch=='!')
        {
            putchar('!');
            putchar('!');
            n2++;
        }
        else
        {
            putchar(ch);
        }
    }
    printf("����滻=%d,��̾���滻=%d\n",n1,n2);

    return 0;
}
