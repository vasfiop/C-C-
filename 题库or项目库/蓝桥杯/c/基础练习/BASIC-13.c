#include<stdio.h>
int main(void)
{
	int n;
	int num[200];
	int i,y;//协助循环
	int middle;//协助调换

	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&num[i]);
		for(i=0;i<n;i++)
		{
			for(y=i;y<n;y++)
			{
				if(num[i]>num[y])
				{
					middle=num[i];
					num[i]=num[y];
					num[y]=middle;
				}
			}
		}
		for(i=0;i<n;i++)
			printf("%d ",num[i]);
		printf("\n");
	}

	return 0;
}
