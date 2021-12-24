#include<stdio.h>
int main(void)
{
	int num;
	int sum;
	int ge,shi,bai;

	num=100;
	while(num<999)
	{
		ge=num%10;
		shi=num/10%10;
		bai=num/100;
		sum=ge*ge*ge+shi*shi*shi+bai*bai*bai;
		if(sum==num)
			printf("%d\n",num);
		num++;
	}

	return 0;
}
