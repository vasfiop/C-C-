//�����һ��׬1�飬�ڶ���׬2�飬��n��׬���ٿ�
//˼��һ������while���Լ������ȷ��
//˼�����������ѧ�ĵȲ�������Ϳ��Լ������
#include<stdio.h>//˼���
int main(void)
{
    int day;

    printf("������һ���������������˳�����:");
    scanf("%d",&day);
    while(day>0)
    {
        printf("%d\n",day*1+(day*day-day)/2);
        printf("������һ���������������˳�����:");
        scanf("%d",&day);
    }

    return 0;
}
