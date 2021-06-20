/*
Description

从键盘输入任意20个整型数，统计其中的负数个数并求所有正数的平均值。
保留两位小数

Sample Input
1 2 3 4 5 6 7 8 9 10
-1 -2 -3 -4 -5 -6 -7 -8 -9 -10
Sample Output
10
5.50
*/
#include<stdio.h>
int main(void)
{
	int num;
	int a,count_2;
	int count_1;

	for(a=count_1=count_2=0;a<20;a++)
	{
		scanf("%d",&num);
        if(num>0)
			count_1+=num;
		else
			count_2++;
	}
	printf("%d\n",count_2);
	printf("%.2f\n",(double)count_1/(20-count_2));
}
