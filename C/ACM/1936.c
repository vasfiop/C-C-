#include<stdio.h>
#include<math.h>
int main(void)
{
    long long num;

    printf("请输入一个longlong类型的数值:");
    scanf("%lld",&num);
    printf("%.0f",fabs(num));

    return 0;
}
