#include<stdio.h>
#define times 60
int main(void)
{
    int time;

    printf("������ʱ�䣨��λ���ӣ���������ֹͣ����:\n");
    scanf("%d",&time);
    while(time>0)
    {
        printf("%d����=%dСʱ%d����.\n",time,time/times,time%times);
        printf("������ʱ�䣨��λ���ӣ���������ֹͣ����:\n");
        scanf("%d",&time);
    }
    return 0;
}
