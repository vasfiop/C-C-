/*
1469��
Description
��������ָһ��nλ������������λ��n�η��ĺͣ�ǡ���ڴ��������� 153 ��3�׻�������ˮ�ɻ�����ˮ�ɻ������꣩��54748��5�׻�������÷������÷��5�꣩��548834��6�׻�������ѩ������ѩ��6�꣩
��������׻������ĸ���
Input
����n����ʾ���ݸ�������������n��ÿ��һ������m��mС��7������0
Output
�������ĸ���
Sample Input
3
1
2
3
Sample Output
10
0
4
HINT
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
		int n,m;
		int a,b;
		int x;
		int count,sum;

		scanf("%d",&n);
		for(a=0;a<n;a++)
		{
			scanf("%d",&m);
			if(m==1)
				b=0;
			else
				b=pow(10,m-1);
			for(count=0;b<pow(10,m);b++)
			{
				sum=0;
				x=b;
				while(x)
				{
					sum+=pow(x%10,m);
					x/=10;
				}
				if(sum==b)
					count++;
			}
			printf("%d\n",count);
		}

	return 0;
}
