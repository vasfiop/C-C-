#include<stdio.h>
int main(void)
{
    int n1,n2,n22,n3,n33;
    n2=n3=n22=n33=0;

    printf("������һ�����֣������������:");
    scanf("%d",&n1);
    while(n1!=0)
    {
        if((n1%2)==0)
        {
            n2++;
            n22+=n1;
        }
        else
        {
            n3++;
            n33+=n1;
        }
        printf("������һ�����֣������������:");
        scanf("%d",&n1);
    }
    printf("ż��һ����%d����ƽ��ֵ=%.2f\n",n2,(float)n22/n2);
    printf("����һ����%d����ƽ��ֵ=%.2f",n3,(float)n33/n3);

    return 0;
}
