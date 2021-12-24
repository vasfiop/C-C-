#include<stdio.h>
int main(void)
{
	int num;
	int sum,i;
	int num_1;

	num=0;
	sum=0;
	while(num<=31)
	{
		num_1=num;
		i=1;
		sum=0;
		while(num_1)
		{
			sum+=(num_1%2)*i;
			num_1/=2;
			i*=10;
		}
		printf("%.5d\n",00000+sum);
		num++;
	}

	return 0;
}
