/*
Description
有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。
Input
N
Output
数列前N项和
Sample Input
10
Sample Output
16.48
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    double sum;
    double up,down;
    int n;
    int a;
    double middle;

    scanf("%d",&n);
    up=2;
    down=1;
    for(a=0,sum=0;a<n;a++)
    {
        sum+=up/down;
        middle=up;
        up=up+down;
        down=middle;
    }
    printf("%.2f\n",sum);

    return 0;
}
