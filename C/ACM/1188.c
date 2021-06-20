/*
1188：
Description
求1+2!+3!+4!+…+30!。
科学计数法，保留两位小数。
*/

#include<stdio.h>
int main(void)
{
	double a,b,c=0,d;

	for(a=2,d=1;a<=30;a++)
	{
		for(b=1;b<=a;b++)
			d*=b;
		c+=d;
		d=1;
	}
	printf("%.2e\n",c+1);
}
