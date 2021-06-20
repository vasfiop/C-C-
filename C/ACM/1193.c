/*
1193：
Description
输出1~1000的完数(1不是完数)
Output
6=1+2+3
。。。
Sample Output
6=1+2+3
28=1+2+4+7+14
496=1+2+4+8+16+31+62+124+248
*/
#include<stdio.h>
int main(void)
{
	int big,b[1000];
	int num;
	int sum,count;

	for(big=2;big<=1000;big++)
	{
		for(num=big/2,count=sum=0;num>=1;num--)
		{
			if(big%num==0)
			{
                b[count]=num;
                sum+=num;
                count++;
			}
		}
		if(sum==big)
		{
			printf("%d=",sum);
			while(count)
			{
				printf("%d",b[count-1]);
				if(count-1)
					printf("+");
				count--;
			}
			printf("\n");
		}
	}
}
