#include<stdio.h>
int main(void)
{
    float n1,n2;
    int num;

    printf("������һ�����ޣ�floatֵ��:");
    scanf("%f",&n1);
    printf("������һ�����ޣ�floatֵ��:");
    while(scanf("%f",&n2)==1)
    {
        printf("%f\n",(n1-n2)/n1*n2);
        printf("������һ�����ޣ�floatֵ��:");
        num=scanf("%f",&n1);
        printf("������һ�����ޣ�floatֵ��:");
    }

    return 0;
}
