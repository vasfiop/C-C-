/*
Description
用选择法对10个整数从小到大排序。
Input
10个整数
Output
排序好的10个整数
Sample Input
4 85  3 234 45 345 345 122 30 12
Sample Output
3
4
12
30
45
85
122
234
345
345
*/
#include<stdio.h>
#define SIZE 10
int main(int argc, char const *argv[])
{
    int num[SIZE];
    int a,b;
    int middle;

    for(a=0;a<SIZE;a++)
        scanf("%d",&num[a]);
    for(a=0;a<SIZE;a++)
        for(b=a+1;b<SIZE;b++)
            if(num[a]>num[b])
            {
                middle=num[a];
                num[a]=num[b];
                num[b]=middle;
            }
    for(a=0;a<SIZE;a++)
        printf("%d\n",num[a]);

    return 0;
}
