/*
����˼·
���������������������������������С������
����������С������=ǰ����������С�������͵����������бȽ�
��С������=˫�����/�������
��������㷨��ŷ������㷨���ṩ
*/
#include<stdio.h>
int main(void)
{
	int a,b,c;
	int first,sec;
	int middle;
	int first_num;
	int all_num;

	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		first=a;
		sec=b;
		if(a>b)//�Ƚ�3����������
		{
			middle=a;
			a=b;
			b=middle;
		}
		if(a>c)
		{
			middle=a;
			c=a;
			c=middle;
		}
		if(b>c)
		{
			middle=b;
			b=c;
			c=middle;
		}
		middle=1;
		first=b;//�������ģС�����Խ�a��b��λ�û���һ��
		sec=a;
		while(middle)
		{
			middle=first%sec;
			first=sec;
			sec=middle;
		}
		first_num=a*b/first;
		first=first_num;
		sec=c;
		middle=1;
		if(first_num<c)//��c��ǰ����������󹫱����������򣬽���ĸ�firstС�ĸ�sec
		{
			first=c;
			sec=first_num;
		}
		while(middle)
		{
			middle=first%sec;
			first=sec;
			sec=middle;
		}
		all_num=first_num*c/first;
		printf("%d\n",all_num);
	}

	return 0;
}
/*�Ż���
#include<stdio.h>
int main()
{
	int a,b,c,i,j,k;
	int max;

	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		max=a;
		if(max<b)
			max=b;
		if(max<c)
			max=c;
		k=max;
		i= 1;
		while(1)
		{
			j=k*i;
			if((j%a==0)&&(j%b==0)&&(j%c==0))
				break;
			i++;
		}
		printf("%d\n",j);
	}

	return 0;
}
*/
