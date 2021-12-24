#include<stdio.h>
int main(void)
{
	int f1,f2,f3;
	int n;
	int i;

	while(scanf("%d",&n)!=EOF)
	{
		f1=0;
		f2=1;
		f3=f1+f2;
		for(i=0;i<n;i++)
		{
			f3=f1+f2;
			f1=f2;
			f2=f3;
			if(f1>10007)
				f1%=10007;
			if(f2>10007)
				f2%=10007;
			if(f3>10007)
				f3%=10007;
		}
		printf("%d\n",f1);
	}

	return 0;
}
