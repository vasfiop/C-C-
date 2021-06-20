#include<stdio.h>
float pound(float a, float b);
int main(void)
{
    float n1,n2;

    printf("请输入一个上限（float值）:");
    scanf("%f",&n1);
    printf("请输入一个下限（float值）:");
    while(scanf("%f",&n2)==1)
    {
        printf("%f\n",pound(n1,n2));
        printf("请输入一个上限（float值）:");
        scanf("%f",&n1);
        printf("请输入一个下限（float值）:");
    }

    return 0;
}
float pound(float a,float b)
{
    float c;

    c=(a-b)/a*b;

    return c;
}
