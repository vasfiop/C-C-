#include<stdio.h>
int main(void)
{
	int y;
	int really;

	while(scanf("%d",&y)!=EOF)
	{
		really=0;
		if((!(y%4)&&(y%100))||(!(y%400)))
			really=1;
		if(really)
		{
			printf("yes\n");
			continue;
		}
		printf("no\n");
	}

	return 0;
}
