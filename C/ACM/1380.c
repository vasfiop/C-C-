/*
1380��
Description
������һ�ֺ�Ƶ���ļ����������ڿ������ֻ����ֵ���������⡣һ��ʵ�ʵ������ǣ�
�����Ǹ�ĳ�������ʤ�߰�����ͭ�������ʱ������������п��ܵ�ֵֻ������1��2��3�������ý����ķ��������ų�����ġ�
дһ������������������һ��1,2,3��ɵ��������У��ų�������������ٽ��������� 
Input
���Ƹ���N (1 <= N <= 1000)
�� 2�е���N+1��:
ÿ��һ�����֣���ʾ���ơ���N�С���1..3��
Output
��һ�У�һ�����֡���ʾ�ų�������������ٽ���������
Sample Input
9
2
2
1
3
3
3
2
3
1
Sample Output
4
*/
#include<stdio.h>
#include<stdlib.h>
#define LONG 1000
int main(int argc, char const *argv[])
{
    int n;
    int a,b;
    int count,middle;
    int num[LONG];

    scanf("%d",&n);
    for(a=0;a<n;a++)
        scanf("%d",&num[a]);
    for(a=0,count=0;a<n-1;a++)
        for(b=a+1;b<n;b++)
            if(num[a]>num[b])
            {
                middle=num[a];
                num[a]=num[b];
                num[b]=middle;
                count++;
            }
    printf("%d\n",count);

    return 0;
}
