/*
1467：
Description
对小数进行四舍五入
Input
每行一个小数，以0结束
Output
显示四舍五入后的整数
Sample Input
1.5
1.4
0
Sample Output
2
1
*/
#include<stdio.h>
int main(void)
{
	double num;

	scanf("%lf",&num);
	while(num)
	{
		printf("%.0f\n",num);
		scanf("%lf",&num);
	}
}
