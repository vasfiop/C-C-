#include<stdio.h>
float pound(float a, float b);
int main(void)
{
    float n1,n2;

    printf("������һ�����ޣ�floatֵ��:");
    scanf("%f",&n1);
    printf("������һ�����ޣ�floatֵ��:");
    while(scanf("%f",&n2)==1)
    {
        printf("%f\n",pound(n1,n2));
        printf("������һ�����ޣ�floatֵ��:");
        scanf("%f",&n1);
        printf("������һ�����ޣ�floatֵ��:");
    }

    return 0;
}
float pound(float a,float b)
{
    float c;

    c=(a-b)/a*b;

    return c;
}
