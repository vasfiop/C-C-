#include<stdio.h>
#define H 8
int main(void)
{
    char ch;
    int n1,n2;
    n1=n2=0;

    printf("请输入一行（#结束）:");
    while((ch=getchar())!='#')
    {
        n1++;
        printf(" 第%3d个字符是=%c=%4d ",n1,ch,ch);
        if((n1%8)==0)
            printf("\n");

    }

    return 0;
}
