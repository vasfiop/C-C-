#include<stdio.h>
int main(void)
{
	int m,n;
	int a,b;
	char ch;
	int y;

	while(scanf("%d %d",&n,&m)!=EOF)
	{
		for(a=0,ch='A';a<n;a++)
		{
			ch='A'+a;
			y=0;
			while(ch!='A'&&y<m)
			{
				printf("%c",ch);
				ch--;
				y++;
			}
			for(b=0;b<m-a;b++,ch++)
				printf("%c",ch);
			printf("\n");
		}
	}

	return 0;
}
