#include<stdio.h>
int main(void)
{
	int n;
	int num[34][34];
	int a,b;//计算行数和列数，行数==列数

	num[0][0]=1;
	while(scanf("%d",&n)!=EOF)
	{
		for(a=0;a<n;a++)
		{
			num[a][0]=1;
			for(b=1;b<=a-1;b++)
			{
				num[a][b]=num[a-1][b]+num[a-1][b-1];
			}
			num[a][a]=1;
		}
		for(a=0;a<n;a++)
		{
			for(b=0;b<=a;b++)
				printf("%d ",num[a][b]);
			printf("\n");
		}
	}

	return 	0;
}
