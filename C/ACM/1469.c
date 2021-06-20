/*
1469：
Description
花朵数是指一个n位数，它各个数位的n次方的和，恰等于此数。例如 153 是3阶花朵数（水仙花数，水仙花有三瓣），54748是5阶花朵数（梅花数，梅花5瓣），548834是6阶花朵数（雪花数，雪花6瓣）
此题求各阶花朵数的个数
Input
整数n，表示数据个数，接下来的n行每行一个整数m，m小于7，大于0
Output
花朵数的个数
Sample Input
3
1
2
3
Sample Output
10
0
4
HINT
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
		int n,m;
		int a,b;
		int x;
		int count,sum;

		scanf("%d",&n);
		for(a=0;a<n;a++)
		{
			scanf("%d",&m);
			if(m==1)
				b=0;
			else
				b=pow(10,m-1);
			for(count=0;b<pow(10,m);b++)
			{
				sum=0;
				x=b;
				while(x)
				{
					sum+=pow(x%10,m);
					x/=10;
				}
				if(sum==b)
					count++;
			}
			printf("%d\n",count);
		}

	return 0;
}
