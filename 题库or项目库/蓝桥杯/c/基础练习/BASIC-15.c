#include<stdio.h>
#include<string.h>
int main(void)
{
	char first[15];
	char sec[15];

	scanf("%s",first);
	scanf("%s",sec);
	if(strlen(first)==strlen(sec))
	{
		if(strcmp(first,sec)==0)
			printf("2\n");
		else if(strcmp(strlwr(first),strlwr(sec))==0)
			printf("3\n");
		else
			printf("4\n");
	}
	else
		printf("1\n");

	return 0;
}
