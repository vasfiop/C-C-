#include<stdio.h>
int main(void)
{
	int num;
	int n;
	int num2;//�������
	int tmp,sum1,sum2;
	//tmp��������λ����sum1���������sum2��������λ��֮��

	while(scanf("%d",&n)!=EOF)
	{
		num=10000;
		while(num<=999999)
		{
			for(num2=num,sum1=sum2=0;num2;num2/=10)//�����������λ���ӻ�ȥ�����Ƿ����ԭ����num
			{
				tmp=num2%10;
				sum1=sum1*10+tmp;
				sum2+=tmp;//��¼λ��֮��
			}
			if(sum1==num&&sum2==n)
				printf("%d\n",num);
			num++;
		}
	}

	return 0;
}
