/*
Description
n��=1*2*3*.....*n;
��ֻ����������1*3*5*7*9*11*......*n�����һλ��
n����long long int ��Χ ����֤nΪ������
Input
n
Output
��������һλ
Sample Input
1
3
5
Sample Output
1
3
5
*/
#include<stdio.h>
int main(void)
{
    long long int n,num,sum;

    while(scanf("%lld",&n)!=EOF)
    {
        for(num=1,sum=1;num<=n;num+=2)
            sum*=num;
        printf("%lld\n",sum%10);
    }
    return 0;
}
