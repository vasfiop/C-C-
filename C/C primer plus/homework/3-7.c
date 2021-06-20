#include<stdio.h>
int main(void)
{
    float cm=2.45;
    float high;

    printf("请输入你的身高（单位英寸）:\n");
    scanf("%f",&high);
    printf("你的身高（单位厘米）:%f",high*cm);

    return 0;
}
