/*
1050��
Description
��������������m��n���������Լ������С��������
Input
��������
Output
���Լ������С������
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
