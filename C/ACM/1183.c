/*
Description
sum=2+5+8+11+14+…，输入正整数n，求sum的前n项和。
Sample Input
2
Sample Output
7
*/
#include<stdio.h>
int main(void)
{
	int n,sum;

	scanf("%d",&n);
    sum=n*2+n*(n-1)*3/2;
    printf("%d",sum);

    return 0;
}
