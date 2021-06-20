/*
Description
写一个函数，使给定的一个二维数组（３×３）转置，即行列互换。
Input
一个3x3的矩阵
Output
转置后的矩阵
Sample Input
1 2 3
4 5 6
7 8 9
Sample Output
1 4 7 
2 5 8 
3 6 9 
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num[3][3];
    int a,b;
    int middle;

    for(a=0;a<3;a++)
        for(b=0;b<3;b++)
            scanf("%d",&num[a][b]);
    for(a=0;a<3;a++)
        for(b=a;b<3;b++)
        {
            middle=num[a][b];
            num[a][b]=num[b][a];
            num[b][a]=middle;
        }
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
            printf("%d ",num[a][b]);
        printf("\n");
    }

    return 0;
}
