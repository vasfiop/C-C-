/*
1606��
Description
FJ��ɳ����д������һЩ�ַ�����
A1 = ��A��
A2 = ��ABA��
A3 = ��ABACABA��
A4 = ��ABACABADABACABA��
�� ��
�����ҳ����еĹ��ɲ�д���е�����AN��
Input
����һ������N �� 26��
Output
�������Ӧ���ַ���AN����һ�����з�������
����в��ú��ж���Ŀո���С��س�����
Sample Input
3
Sample Output
ABACABA
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int num,a,b,c;
	int *str;
	int all,gps;

	scanf("%d",&num);
	all=pow(2,num)-1;
	str=(int)malloc(sizeof(int)*(all+1));//��������
	for(a=0;a<31;a++)//����ֵ
		str[a]=1;//�������ִ�����ĸ
	for(a=0;a<num;a++)
	{
		if(a>0)
		{
			gps=pow(2,a+1)/2;
			str[gps-1]=a+1;
		}
		for(b=pow(2,a+1)-1,c=0;b>(pow(2,a+1)-1)/2;b--,c++)
			str[b-1]=str[c];
	}
	for(a=0;a<all;a++)
		printf("%c",str[a]+64);//+64������ֺ���ĸ��ת��
	free(str);//�ͷ�����

	return 0;
}
