//˼���
#include<stdio.h>
int main(void)
{
    int day,money;
    day=money=0;

    printf("������һ���������������˳�����:");
    scanf("%d",&day);
    while(day>0)
    {
        printf("%d\n",(2*day*day*day+3*day*day+day)/6);
        printf("������һ���������������˳�����:");
        scanf("%d",&day);
    }

    return 0;
}
