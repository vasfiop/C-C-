/*��̫�����ķ���
#include<stdio.h>
int main(void)
{
	unsigned int a;

	while(scanf("%d",&a)!=EOF)
		printf("%X\n",a);

	return 	0;
}
*/
//����һ��ķ��������д���
#include<stdio.h>
#define CHANGE 16
int main(void)
{
	unsigned int a;
	char num[10000];//����λ��
	int b;
	int i;//���������Ҫ���н�

	while(scanf("%d",&a)!=EOF)
	{
		b=0;
		if(a==0)
		{
			printf("0\n");
			continue;
		}
		while(a)
		{
			num[b]=a%CHANGE;
			if(num[b]>9)
				num[b]=num[b]-10+'A';
			if(num[b]<9)
				num[b]=num[b]+'0';
			a/=CHANGE;
			b++;
		}
		for(i=b-1;i>=0;i--)
			printf("%c",num[i]);
		printf("\n");
	}
}
