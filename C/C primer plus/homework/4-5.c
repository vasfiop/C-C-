#include<stdio.h>
int main(void)
{
    float mbs,mb;

    printf("����������:");
    scanf("%f",&mbs);
    printf("�������ļ���С:");
    scanf("%f",&mb);
    printf("At %.2f megabits per second, a file of %.2f megabytes.\n",mbs,mb);
    printf("downloads in %.2f seconds.\n",mb*8/mbs);

    return 0;
}
