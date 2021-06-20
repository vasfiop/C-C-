/*
1380：
Description
排序是一种很频繁的计算任务。现在考虑最多只有三值的排序问题。一个实际的例子是，
当我们给某项竞赛的优胜者按金银铜牌排序的时候。在这个任务中可能的值只有三种1，2和3。我们用交换的方法把他排成升序的。
写一个程序计算出，给定的一个1,2,3组成的数字序列，排成升序所需的最少交换次数。 
Input
奖牌个数N (1 <= N <= 1000)
第 2行到第N+1行:
每行一个数字，表示奖牌。共N行。（1..3）
Output
共一行，一个数字。表示排成升序所需的最少交换次数。
Sample Input
9
2
2
1
3
3
3
2
3
1
Sample Output
4
*/
#include<stdio.h>
#include<stdlib.h>
#define LONG 1000
int main(int argc, char const *argv[])
{
    int n;
    int a,b;
    int count,middle;
    int num[LONG];

    scanf("%d",&n);
    for(a=0;a<n;a++)
        scanf("%d",&num[a]);
    for(a=0,count=0;a<n-1;a++)
        for(b=a+1;b<n;b++)
            if(num[a]>num[b])
            {
                middle=num[a];
                num[a]=num[b];
                num[b]=middle;
                count++;
            }
    printf("%d\n",count);

    return 0;
}
