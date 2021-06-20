/*
1190：
Description

输入一个正整数，输出它的所有质数的因子（如180的质数因子为2、2、3、3、5）

Sample Input
180
Sample Output
2 2 3 3 5
*/
#include<stdio.h>
int main(void)
{
	int num;
	int a;

	scanf("%d",&num);
	a=2;
	while(a<=num)
	{
		if(num%a==0)
		{
			printf("%d ",a);
			num/=a;
			a=2;
			continue;
		}
		a++;
	}

	return 0;
}
