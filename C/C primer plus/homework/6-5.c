#include<stdio.h>
#define anum 65
int main(void)
{
    char ch,cn;
    int n1,n2,n3,n4;

    printf("ÇëÊäÈëÒ»¸ö×ÖÄ¸:");
    scanf("%c",&ch);
    for(n1=0;n1<=(ch-anum);n1++)
    {
        for(n3=(ch-anum-n1);n3>0;n3--)//¿Õ¸ñ
            printf(" ");
        for(n2=0,cn='A';n2<n1;cn++,n2++)//ÉıĞò×ÖÄ¸
            printf("%c",cn);
        for(n4=0;n4<=n1&&cn>='A';cn--)//½µĞò
            printf("%c",cn);
        printf("\n");
    }

    return 0;
}
