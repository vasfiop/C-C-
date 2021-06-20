/*
Description
输入两个个16进制数（4位以内），要求计算它们的16和
Input
多组测试数据，
Output
每组占一行
Sample Input
1AB CD
Sample Output
278
*/
#include<stdio.h>
int main(void)
{
	int a,b;

	scanf("%x %x",&a,&b);
	printf("%x",a+b);
}
