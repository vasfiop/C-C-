#include<stdio.h>
int main(void)
{
    int num1,num2;

    printf("������һ����ֵ�����ޣ�:");
    scanf("%d",&num1);
    printf("������һ����ֵ�����ޣ�:");
    scanf("%d",&num2);
    for(;num2<=num1;num2++)
    {
        printf("%d %d %d\n",num2,num2*num2,num2*num2*num2);
    }

    return 0;
}
