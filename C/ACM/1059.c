/*
Description
���ӳ������⡣���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬������񫣬�ֶ����һ���� 
�ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ����
�Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ���� ����N���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�������ӡ�
Input
N
Output
��������
Sample Input
10
Sample Output
1534
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int a,sum;

    scanf("%d",&n);
    for(a=0,sum=1;a<n-1;a++)
    {
        sum++;
        sum*=2;
    }
    printf("%d\n",sum);
    
    return 0;
}
