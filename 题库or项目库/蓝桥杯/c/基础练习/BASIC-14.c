#include<stdio.h>
int main(void)
{
	int t;
	int H,M,S;

	while(scanf("%d",&t)!=EOF)
	{
		H=t/3600;
		M=t%3600/60;
		S=t%3600%60;
		printf("%d:%d:%d\n",H,M,S);
	}

	return 0;
}
