#include<stdio.h>
#define H 8
int main(void)
{
    char ch;
    int n1,n2;
    n1=n2=0;

    printf("������һ�У�#������:");
    while((ch=getchar())!='#')
    {
        n1++;
        printf(" ��%3d���ַ���=%c=%4d ",n1,ch,ch);
        if((n1%8)==0)
            printf("\n");

    }

    return 0;
}
