/*
Description
����һ������x��һ��������n����������ʽ��ֵ��
Ҫ��һ������2��������
fact(n)����n�Ľ׳ˣ�
mypow(x,n)����x��n���ݣ���x^n�������������ķ���ֵ������double��
x - x^2/2! + x^3/3! + ... + (-1)^(n-1)x^n/n!
���������4λС����
Input
x n
Output
���к�
Sample Input
2.0 3
Sample Output
1.3333
*/
#include<stdio.h>
int fact(int );
double mypow(double ,double);
int main(int argc, char const *argv[])
{
    int n;
    double num;
    int a;
    double x;

    scanf("%lf %d",&x,&n);
    for(a=1,num=0;a<=n;a++)
        num+=mypow(-1,a-1)*mypow(x,a)/fact(a);
    printf("%.4f\n",num);

    return 0;
}
int fact(int num)
{
    int a;
    int n;

    for(a=1,n=1;a<=num;a++)
        n*=a;

    return n;
}
double mypow(double x,double y)
{
    int a;
    double num;

    for(a=0,num=1;a<y;a++)
        num*=x;

    return num;
}