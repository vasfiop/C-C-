#include<stdio.h>
int main(void)
{
	int n;//n用来储存行数
	int num[10000];
	int i;//i用来计算行数
	int max;
	int min;
	long long add;//用来储存和

	while(scanf("%d",&n)!=EOF)
	{
		max=min=add=num[0]=0;
		getchar();
		i=0;
		add=0;
		for(i=0;i<n;i++)
			scanf("%d",&num[i]);
		max=min=num[0];
		for(i=0;i<n;i++)
		{
			if(max<num[i])
				max=num[i];
			if(min>num[i])
				min=num[i];
			add+=num[i];
		}
		printf("%d\n",max);
		printf("%d\n",min);
		printf("%lld\n",add);
	}

	return 0;
}
