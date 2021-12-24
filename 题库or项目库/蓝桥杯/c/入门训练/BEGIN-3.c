#include<stdio.h>
#define PI 3.14159265358979323
int main(void)
{
	int r;
	double s;

	while(scanf("%d",&r)!=EOF)
	{
		s=PI*r*r;
		printf("%.7f\n",s);
	}

	return 0;
}
