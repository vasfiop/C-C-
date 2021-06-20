/*
1184：
Description

求出10至1000之内能同时被2、3、7整除的数，并输出。

每行一个。
*/
#include<stdio.h>
int main(void)
{
	int a;

	for(a=10;a<=1000;a++)
		if(a%2==0&&a%3==0&&a%7==0)
			printf("%d\n",a);
}
