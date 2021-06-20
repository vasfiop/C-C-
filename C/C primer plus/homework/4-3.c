#include<stdio.h>
int main(void)
{
    float number;

    printf("请输入一个浮点数:\n");
    scanf("%f",&number);
    printf("%f %e",number,number);

    return 0;
}
