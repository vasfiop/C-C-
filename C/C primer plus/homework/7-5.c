#include<stdio.h>
int main(void)
{
    char ch;
    int n1,n2;
    n1=n2=0;

    printf("������һ���ַ�������#ֹͣ��:");
    while((ch=getchar())!='#')
    {
        switch(ch)
        {
            case '.':
                putchar('!');
                n1++;
                break;
            case '!':
                putchar('!');
                putchar('!');
                n2++;
                break;
            default:
                putchar(ch);
        }
    }
    printf("����滻=%d,��̾���滻=%d\n",n1,n2);

    return 0;
}
