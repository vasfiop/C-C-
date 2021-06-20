/*
1473：
Description
统计一段时间内星期X的个数，0---6代表周日至周六
Input
整数n，表示下面有n行数据
每行数据包括a、b、c三个数，表示第1天是星期a，求连续b天内，有多少个星期c。

例如：3 、100、 4，相当于问从星期三开始的100天内有几个星期四
Output
每行一个答案
Sample Input
2
3 100 4
0 7 0
Sample Output
15
1
*/
#include<stdio.h>
int main(void)
{
	int n;
	int a,b,c;
	int x,y;
	int count;

	scanf("%d",&n);
	for(x=0;x<n;x++)
	{
		scanf("%d %d %d",&a,&b,&c);
		for(y=a,count=0;y<b+a;y++)
			if(y%7==c)
				count++;
		printf("%d\n",count);
	}
}
