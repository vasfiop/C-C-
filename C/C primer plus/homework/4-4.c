#include<stdio.h>
#include<string.h>
int main(void)
{
    float high;
    printf("请输入你的身高（单位英寸）:\n");
    scanf("%f",&high);
    printf("Debney,you are %.*f feet tall.\n",sizeof(high)-1,high);

    return 0;
}
