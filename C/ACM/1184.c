/*
1184��
Description

���10��1000֮����ͬʱ��2��3��7�����������������

ÿ��һ����
*/
#include<stdio.h>
int main(void)
{
	int a;

	for(a=10;a<=1000;a++)
		if(a%2==0&&a%3==0&&a%7==0)
			printf("%d\n",a);
}
