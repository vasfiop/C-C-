/*
1164��
Description
���Ƴ�������n��������n�Ӽ�������,n>0��,������ǵ�ż���͡�
Input
n
n������
Output
����ż���ĺ�
Sample Input
10
1 2 3 4 5 6 7 8 9 10
Sample Output
30
*/
#include<stdio.h>
int main(void)
{
    int n,num;
    int sum;
    int a;

    scanf("%d",&n);
    for(a=0,sum=0;a<n;a++)
	{
		scanf("%d",&num);
		if(num%2==0)
			sum+=num;
	}
	printf("%d",sum);
	return	0;
}
