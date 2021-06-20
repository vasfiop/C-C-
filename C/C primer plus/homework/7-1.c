#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int n1,n2,n3;
    n1=n2=n3=0;

    printf("请输入一段话（输入#结束）:");
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
    printf("空格=%d,换行符=%d,其他字符=%d",n1,n2,n3);

    return 0;
}
