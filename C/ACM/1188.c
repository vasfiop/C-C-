/*
1188��
Description
��1+2!+3!+4!+��+30!��
��ѧ��������������λС����
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
