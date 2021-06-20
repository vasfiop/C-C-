/*
1545：
Description
计算一组数据的最大值、最小值和平均值。
Input
第一行是一个正整数n，表示后续有n个数据。
第二行有n个数，每个数的绝对值都不超过100000。
Output
输出这组数据中的最大值、最小值和平均值（都保留两位小数），三个数各占一行。
Sample Input
10
1 2 3 4 5 6 7 8 9 10
Sample Output
10.00
1.00
5.50
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *num;
	int n;
	int a;
	double max,min,avg,count=0;

    scanf("%d",&n);
    num=(int *)malloc(sizeof(int)*n);
	for(a=0;a<n;a++)
		scanf("%d",&num[a]);
	max=min=num[0];
	for(a=1;a<n;a++)
	{
		if(num[a]>max)
			max=num[a];
		if(num[a]<min)
			min=num[a];
		count+=num[a];
	}
	printf("%.2f\n",max);
	printf("%.2f\n",min);
	printf("%.2f\n",count/n);

	return 0;
}
