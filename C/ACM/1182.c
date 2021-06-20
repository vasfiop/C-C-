/*
Description

编制程序，输入n个整数（n从键盘输入，n>0），输出它们的偶数和。

Sample Input
2
1 2
Sample Output
2
*/
#include<stdio.h>
int main(void)
{
	int n,num,a,count;

	scanf("%d",&n); //输入n
	for(a=0,count=0;a<n;a++)
	{
		scanf("%d",&num);//输入每一个数
		if(num%2==0)//处理偶数
			count+=num;
	}
	printf("%d",count);
}
