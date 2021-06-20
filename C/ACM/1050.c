/*
1050：
Description
输入两个正整数m和n，求其最大公约数和最小公倍数。
Input
两个整数
Output
最大公约数，最小公倍数
Sample Input
5 7
Sample Output
1 35
*/
#include<stdio.h>
int gcd(int a,int b);
int main(void)
{
	int m,n;
	int c;
	scanf("%d %d",&m,&n);
	c=gcd(m,n);
	printf("%d %d\n",c,m*n/c);

	return 0;
}
int gcd(int a,int b)
{
	if(a%b==0)
		return b;
	else
		return gcd(b,a%b);
}
