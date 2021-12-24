#include<stdio.h>
int main(void)
{
	int num;
	int n;
	int num2;//替代数据
	int tmp,sum1,sum2;
	//tmp用来计算位数，sum1用来计算和sum2用来计算位数之和

	while(scanf("%d",&n)!=EOF)
	{
		num=10000;
		while(num<=999999)
		{
			for(num2=num,sum1=sum2=0;num2;num2/=10)//反过来从最大位数加回去看看是否等于原来的num
			{
				tmp=num2%10;
				sum1=sum1*10+tmp;
				sum2+=tmp;//记录位数之和
			}
			if(sum1==num&&sum2==n)
				printf("%d\n",num);
			num++;
		}
	}

	return 0;
}
