/*
Description
求一个数的相反数（友情提示：这个数字可能会很大），-1的相反数是1,1的相反数是-1。
Input
输入一个n，表示后面有多少数字，
接下来有n行，输入一个数。
Output
n个数的相反数
Sample Input
2
999999
-10000
Sample Output
-999999
10000
HINT
提示：数字会超过unsigned long long int
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
