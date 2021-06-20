/*
Description
求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字。
Input
n
Output
和
Sample Input
5
Sample Output
153
HINT
本地测试通过之后，将 阶乘 和 阶乘累加 的两个变量改为long long int类型，
输出用%lld，然后直接提交代码即可。
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int a,b;
    long long sum;
    long long sn;

    scanf("%d",&n);
    for(a=1,sn=0;a<=n;a++)
    {
        for(b=1,sum=1;b<=a;b++)
            sum*=b;
        sn+=sum;
    }
    printf("%lld\n",sn);

    return 0;
}
