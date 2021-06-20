/*
Description
��̣�����n������n������������ʽ���㲢���yֵ��
     / x2-sinx    x<-2
y={  2x+x       -2<=x<=2
     |    ___________
     \ �� X2+X+1                  x>2
* ���������λС��
Input
n
n����
Output
y
Sample Input
1
1
Sample Output
3.00
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	double *num;
	int a;

	scanf("%d",&n);
	num=(int)malloc(sizeof(int)*n);
	for(a=0;a<n;a++)
		scanf("%lf",&num[a]);
	for(a=0;a<n;a++)
	{
		if(num[a]<-2)
			printf("%f\n",2*num[a]-sin(num[a]));
		else if(num[a]<=2)
			printf("%f\n",2*num[a]+num[a]);
		else
			printf("%f\n",sqrt(2*num[a]+num[a]+1));
	}

	return 0;
}
