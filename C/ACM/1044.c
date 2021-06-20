/*
Description
输入一个华氏温度，要求输出摄氏温度。
公式为 c=5(F-32)/9 输出要求有文字说明，取位2小数。
Input
一个华氏温度，浮点数
Output
摄氏温度，浮点两位小数
Sample Input
-40
Sample Output
c=-40.00
*/
#include<stdio.h>
int main(void)
{
    double F,C;

    scanf("%lf",&F);
    C=5.0*(F-32)/9.0;
    printf("c=%.2f",C);

    return 0;
}
