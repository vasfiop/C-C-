/*
Description
��һ�������෴����������ʾ��������ֿ��ܻ�ܴ󣩣�-1���෴����1,1���෴����-1��
Input
����һ��n����ʾ�����ж������֣�
��������n�У�����һ������
Output
n�������෴��
Sample Input
2
999999
-10000
Sample Output
-999999
10000
HINT
��ʾ�����ֻᳬ��unsigned long long int
*/
#include<stdio.h>
int main(void)
{
    unsigned long long int a,num;
    int n;
    while(scanf("%lld",&n)!=EOF)
    {
        for(a=0;a<n;a++)
        {
            scanf("%lld",&num);
            printf("%lld\n",num*-1);
        }
    }
    return 0;
}
