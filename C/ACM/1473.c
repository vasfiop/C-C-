/*
1473��
Description
ͳ��һ��ʱ��������X�ĸ�����0---6��������������
Input
����n����ʾ������n������
ÿ�����ݰ���a��b��c����������ʾ��1��������a��������b���ڣ��ж��ٸ�����c��

���磺3 ��100�� 4���൱���ʴ���������ʼ��100�����м���������
Output
ÿ��һ����
Sample Input
2
3 100 4
0 7 0
Sample Output
15
1
*/
#include<stdio.h>
int main(void)
{
	int n;
	int a,b,c;
	int x,y;
	int count;

	scanf("%d",&n);
	for(x=0;x<n;x++)
	{
		scanf("%d %d %d",&a,&b,&c);
		for(y=a,count=0;y<b+a;y++)
			if(y%7==c)
				count++;
		printf("%d\n",count);
	}
}
