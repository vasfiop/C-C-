/*
Description
�󷽳� �ĸ��������������ֱ���b^2-4ac����0������0����С��0ʱ�ĸ�������������������������a��b��c��ֵ��
Input
a b c
Output
x1=? x2=?
Sample Input
4 1 1
Sample Output
x1=-0.125+0.484i x2=-0.125-0.484i
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	double a,b,c;
	double x1,x2,de;

	scanf("%lf %lf %lf",&a,&b,&c);
	de=b*b-4*a*c;
	if(de<0)
	{
		printf("x1=%.3f+%.3fi ",-1*b/(2*a),sqrt(-de)/(2*a));
		printf("x2=%.3f-%.3fi\n",-1*b/(2*a),sqrt(-de)/(2*a));
	}
	else
	{
		printf("x1=%.3f",(-1*b+sqrt(de))/(2*a));
		printf("x1=%.3f",(-1*b-sqrt(de))/(2*a));
	}
    return 0;
}
