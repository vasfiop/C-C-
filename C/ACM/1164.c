/*
1164：
Description
编制程序，输入n个整数（n从键盘输入,n>0）,输出它们的偶数和。
Input
n
n个整数
Output
其中偶数的和
Sample Input
10
1 2 3 4 5 6 7 8 9 10
Sample Output
30
*/
#include<stdio.h>
int main(void)
{
    int n,num;
    int sum;
    int a;

    scanf("%d",&n);
    for(a=0,sum=0;a<n;a++)
	{
		scanf("%d",&num);
		if(num%2==0)
			sum+=num;
	}
	printf("%d",sum);
	return	0;
}
