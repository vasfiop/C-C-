/*
Description
��n��Χ��һȦ��˳���źš��ӵ�1���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ĵڼ��ŵ���λ��
Input
��ʼ����n
Output
���һ�˵ĳ�ʼ���
Sample Input
3
Sample Output
2
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n;
    int a,b;
    int *num;
    int count;//�������ȥ����

    scanf("%d",&n);
    num=(int *)malloc(sizeof(int)*n);//��������
    for(a=0;a<n;a++)//����ֵ��1�ǻ��ڵ��ˣ�0�ǲ��ڵ��ˣ��±�+1λ����
        num[a]=1;
    for(a=0,b=0,count=0;count!=(n-1);a++)//����Ѿ���n-1���˱����˳�ȥ�����˳�ѭ��
    {
        a=a%n;
		if(num[a]==0)//�����ǰλ���Ѿ����߳�ȥ�������ж�
			continue;
        b++;
        if(b==3)//b���������������3����ֱ���߳�ȥ
        {
            num[a]=0;
            b=0;
            count++;
        }
    }
    for(a=0;a<n;a++)//�ҵ�Ψһ����������
        if(num[a])
            break;
    printf("%d\n",a+1);

    return 0;
}
