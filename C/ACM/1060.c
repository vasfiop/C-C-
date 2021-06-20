/*
Description
�õ������� ����ƽ�����ĵ�����ʽΪ�� X[n+1]=1/2(X[n]+a/X[n]) Ҫ��ǰ����������ĵò�ľ���ֵ����0.00001�� �������3λС��
Input
X
Output
X��ƽ����
Sample Input
4
Sample Output
2.000
*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    double x0,x1;
    double a;

    scanf("%lf",&a);
    x0=a/2;
    x1=(x0+x0/a)/2;
    while(fabs(x0-x1)>0.00001)//fabs()���ز����ľ���ֵ
    {
        x0=x1;
        x1=(x0+a/x0)/2;
    }
    printf("%.3f\n",x1);

    return 0;
}
