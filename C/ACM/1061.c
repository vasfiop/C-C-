/*
Description
用筛法求之N内的素数。
Input
N
Output
0～N的素数
Sample Input
100
Sample Output
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n;
    int *num;
    int find;
    int a,b;

    scanf("%d",&n);
    num=(int *)malloc(sizeof(int)*(n+1));
    num[1]=0;
    for(a=2;a<n;a++)
        num[a]=1;
    for(a=1;a<n;a++)
        if(num[a])
            for(b=2;a*b<=n;b++)
                num[a*b]=0;
    for(a=1;a<n;a++)
        if(num[a])
            printf("%d\n",a);

    return 0;
}
