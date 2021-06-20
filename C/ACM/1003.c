/*描述
你的任务是计算a + b。
输入
输入将由一系列整数对a和b组成，用空格分隔，每行一对整数。
输出
对于每一对输入整数a和b，您应该在一行中输出a和b的和，并且在输入中的每一行都有一行输出。
*/
#include<stdio.h>
int main(void)
{
    int a,b;

    while(scanf("%d %d",&a,&b)!=EOF)
        printf("%d\n",a+b);

    return 0;
}
