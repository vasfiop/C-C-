/*
Description
现在我们有n个整数，请按从小到大的顺序，输出前3个数据。
Input
第一行，一个n， 3<=n<=100。
 第二行n个数(int范围)
Output
一行，输出前三个最小的数（末尾无空格）。
Sample Input
4
5 2 1 3
Sample Output
1 2 3
*/
#include<stdio.h>
int main(void)
{
    int n=0,a;
    int ch[n];
    while(scanf("%d",&n)!=EOF)
    {
        for(a=0;a<n;a++)
            scanf("%d",&ch[a]);
        for(a=0;a<n;a++)
            printf("%d",ch[a]);
    }
    return 0;
}
