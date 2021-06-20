#include<stdio.h>
int main(void)
{
    float mbs,mb;

    printf("请输入网速:");
    scanf("%f",&mbs);
    printf("请输入文件大小:");
    scanf("%f",&mb);
    printf("At %.2f megabits per second, a file of %.2f megabytes.\n",mbs,mb);
    printf("downloads in %.2f seconds.\n",mb*8/mbs);

    return 0;
}
