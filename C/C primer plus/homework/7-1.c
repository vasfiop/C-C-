#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int n1,n2,n3;
    n1=n2=n3=0;

    printf("������һ�λ�������#������:");
    while((ch=getchar())!='#')
    {
        if(ch==' ')
        {
            n1++;
        }
        else if(ch=='\n')
        {
            n2++;
        }
        else
        {
            n3++;
        }
    }
    printf("�ո�=%d,���з�=%d,�����ַ�=%d",n1,n2,n3);

    return 0;
}
