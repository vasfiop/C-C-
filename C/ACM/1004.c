/*
����
��һ��������ʾ��������a��b�ĸ�������������Ǽ���a + b��
����
��������Ǽ���a + b����һ��������ʾ���������Ե���Ŀ��
���
����ÿһ����������a��b����Ӧ����һ�������a��b�ĺͣ������������е�ÿһ�ж���һ�������
Sample Input
2
1 5
10 20
Sample Output
6
30
*/
#include<stdio.h>
int main(void)
{
    int n,a,all_num,b;
    int all[n];

    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        all_num=0;
        for(b=0;b<2;b++)
        {
            scanf("%d",&all[b]);
            all_num+=all[b];
        }
        printf("%d\n",all_num);
    }

    return 0;
}
