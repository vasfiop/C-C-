#include<stdio.h>
int main(void)
{
	long long n;
	long long sum;
	long long i;

	while(scanf("%lld",&n)!=EOF)
	{
		for(i=1,sum=0;i<=n;i++)
		{
			sum+=i;
		}
		printf("%lld\n",sum);
	}

	return 0;
}
