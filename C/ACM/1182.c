/*
Description

���Ƴ�������n��������n�Ӽ������룬n>0����������ǵ�ż���͡�

Sample Input
2
1 2
Sample Output
2
*/
#include<stdio.h>
int main(void)
{
	int n,num,a,count;

	scanf("%d",&n); //����n
	for(a=0,count=0;a<n;a++)
	{
		scanf("%d",&num);//����ÿһ����
		if(num%2==0)//����ż��
			count+=num;
	}
	printf("%d",count);
}
