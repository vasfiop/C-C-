/*
1198��
Description
�����������飨����Ԫ�ظ���6��8����
��������������ж����ֵ�Ԫ�أ���a[6]={2,3,4,5,6,7},b[8]={3,5,7,9,11,13,15,19},�����3��5��7����
Sample Input
2 3 4 5 6 7
3 5 7 9 11 13 15 19
Sample Output
3
5
7
*/
#include<stdio.h>
int main(void)
{
	int num_1[6];
	int num_2[8];
	int a,b;

	for(a=0;a<6;a++)
		scanf("%d",&num_1[a]);
	for(a=0;a<8;a++)
		scanf("%d",&num_2[a]);
	for(a=0;a<6;a++)
		for(b=0;b<8;b++)
			if(num_1[a]==num_2[b])
				printf("%d\n",num_1[a]);

	return 0;
}
