#include<stdio.h>
int main(void)
{
    int n1,n2,n22,n3,n33;
    n2=n3=n22=n33=0;

    printf("请输入一个数字（输入零结束）:");
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
        printf("请输入一个数字（输入零结束）:");
        scanf("%d",&n1);
    }
    printf("偶数一共有%d个，平均值=%.2f\n",n2,(float)n22/n2);
    printf("奇数一共有%d个，平均值=%.2f",n3,(float)n33/n3);

    return 0;
}
