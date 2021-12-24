/*不太正常的方法
#include<stdio.h>
int main(void)
{
	unsigned int a;

	while(scanf("%d",&a)!=EOF)
		printf("%X\n",a);

	return 	0;
}
*/
//正常一点的方法，运行错误
#include<stdio.h>
#define CHANGE 16
int main(void)
{
	unsigned int a;
	char num[10000];//储存位数
	int b;
	int i;//输出数组需要的中介

	while(scanf("%d",&a)!=EOF)
	{
		b=0;
		if(a==0)
		{
			printf("0\n");
			continue;
		}
		while(a)
		{
			num[b]=a%CHANGE;
			if(num[b]>9)
				num[b]=num[b]-10+'A';
			if(num[b]<9)
				num[b]=num[b]+'0';
			a/=CHANGE;
			b++;
		}
		for(i=b-1;i>=0;i--)
			printf("%c",num[i]);
		printf("\n");
	}
}
