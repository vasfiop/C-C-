/*
Description
n！=1*2*3*.....*n;
求只含有奇数的1*3*5*7*9*11*......*n的最后一位；
n属于long long int 范围 （保证n为奇数）
Input
n
Output
结果的最后一位
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
