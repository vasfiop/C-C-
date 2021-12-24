#include<stdio.h>
int main(void)
{
	int n;
	int num[10000];
	int a;
	int i;//计算行数
	int count;//计算出现位置

	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		for(i=0;i<n;i++)
			scanf("%d",&num[i]);
		getchar();
		scanf("%d",&a);
		for(i=0,count=0;i<n;i++)
		{
			if(a==num[i])
			{
				count=i+1;
				break;
			}
		}
		if(count)
			printf("%d\n",count);
		else
			printf("-1\n");
	}

	return 0;
}
