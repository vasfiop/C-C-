/*
1192：
Description
打印出以下图形。
Sample Input
4
Sample Output
   *
  ***
 *****
*******
*/
#include<stdio.h>
int main(void)
{
	int num;
	int a,b;

	scanf("%d",&num);
	for(a=0;a<num;a++)
	{
		printf("%*c",num-a,'*');
		for(b=0;b<a*2;b++)
			printf("*");
		printf("\n");
	}

}
