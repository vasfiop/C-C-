#include<stdio.h>
int main(void)
{
    int num1,num2;

    printf("请输入一个数值（上限）:");
    scanf("%d",&num1);
    printf("请输入一个数值（下限）:");
    scanf("%d",&num2);
    for(;num2<=num1;num2++)
    {
        printf("%d %d %d\n",num2,num2*num2,num2*num2*num2);
    }

    return 0;
}
