#include<stdio.h>
#define weeks 7
int main(void)
{
    int week;

    printf("������һ��������������ֹͣ����:\n");
    scanf("%d",&week);
    while(week>0)
    {
        printf("%d��=%d��%d��.\n",week,week/weeks,week%weeks);
        printf("������һ��������������ֹͣ����:\n");
        scanf("%d",&week);
    }

    return 0;
}
