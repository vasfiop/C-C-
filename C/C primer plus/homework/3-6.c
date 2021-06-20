#include<stdio.h>
int main(void)
{
    float mg=3.0e-23;
    float kt;

    printf("请输入水的夸脱:\n");
    scanf("%f",&kt);
    printf("一共有%e个水分子.\n",kt*950/mg);

    return 0;
}
