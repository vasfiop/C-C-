#include<stdio.h>
int main(void)
{
	int num;
	int ge,shi,bai,qian;

	num=1000;
	while(num<=9999)
	{
		ge=num%10;
		shi=num/10%10;
		bai=num/100%10;
		qian=num/1000;
		if(ge==qian&&bai==shi)
			printf("%d\n",num);
		num++;
	}

	return 0;
}
