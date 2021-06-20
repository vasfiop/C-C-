/*
Description
设圆半径r，圆柱高h 求圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。
用scanf输入数据，输出计算结果，输出时要求文字说明，取小数点后两位数字。请编程序。 PI＝3.14
Input
两个浮点数，r和h
Output
圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。 保留两位小数，每个结果后换行。
Sample Input
1.5 3
Sample Output
C1=9.42
Sa=7.07
Sb=28.26
Va=14.13
Vb=21.20
*/
#include<stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    double r,h,c1,sa,sb,sh,va,vb;

    scanf("%lf %lf",&r,&h);
    c1=2*r*PI;
    sa=r*r*PI;
    sb=4*PI*r*r;
    va=(4.0/3)*PI*r*r*r;
    vb=r*r*PI*h;
    printf("C1=%.2f\n",c1);
    printf("Sa=%.2f\n",sa);
    printf("Sb=%.2f\n",sb);
    printf("Va=%.2f\n",va);
    printf("Vb=%.2f\n",vb);

    return 0;
}
