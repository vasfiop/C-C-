/*
1467��
Description
��С��������������
Input
ÿ��һ��С������0����
Output
��ʾ��������������
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
