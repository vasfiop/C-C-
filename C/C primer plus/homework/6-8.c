#include<stdio.h>
int main(void)
{
    float n1,n2;
    int num;

    printf("请输入一个上限（float值）:");
    scanf("%f",&n1);
    printf("请输入一个下限（float值）:");
    while(scanf("%f",&n2)==1)
    {
        printf("%f\n",(n1-n2)/n1*n2);
        printf("请输入一个上限（float值）:");
        num=scanf("%f",&n1);
        printf("请输入一个下限（float值）:");
    }

    return 0;
}
