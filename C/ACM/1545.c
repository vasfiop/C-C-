/*
1545��
Description
����һ�����ݵ����ֵ����Сֵ��ƽ��ֵ��
Input
��һ����һ��������n����ʾ������n�����ݡ�
�ڶ�����n������ÿ�����ľ���ֵ��������100000��
Output
������������е����ֵ����Сֵ��ƽ��ֵ����������λС��������������ռһ�С�
Sample Input
10
1 2 3 4 5 6 7 8 9 10
Sample Output
10.00
1.00
5.50
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *num;
	int n;
	int a;
	double max,min,avg,count=0;

    scanf("%d",&n);
    num=(int *)malloc(sizeof(int)*n);
	for(a=0;a<n;a++)
		scanf("%d",&num[a]);
	max=min=num[0];
	for(a=1;a<n;a++)
	{
		if(num[a]>max)
			max=num[a];
		if(num[a]<min)
			min=num[a];
		count+=num[a];
	}
	printf("%.2f\n",max);
	printf("%.2f\n",min);
	printf("%.2f\n",count/n);

	return 0;
}
