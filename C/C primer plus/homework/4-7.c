#include<stdio.h>
#include<float.h>
int main(void)
{
    double num1=1.0/3.0;
    float num2=1.0/3.0;

    printf("%.6f %.6f\n",num1,num2);
    printf("%.12f %.12f\n",num1,num2);
    printf("%.16f %.16f\n",num1,num2);
    printf("%d %d",FLT_DIG,DBL_DIG);//在不用损失精度的前提下，float类型可表示的十进制数位数（最小值为6）
    //在不损失精度的前提下，double类型可表示的十进制数位数（最小值为10）

    return 0;
}
