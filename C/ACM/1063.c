/*
Description
求一个3×3矩阵对角线元素之和。
Input
矩阵
Output
主对角线 副对角线 元素和
Sample Input
1 2 3
1 1 1
3 2 1
Sample Output
3 7
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num[3][3];
    int a,b;
    int first,dec;

    for(a=0;a<3;a++)
        for(b=0;b<3;b++)
            scanf("%d",&num[a][b]);
    for(a=0,first=0;a<3;a++)
        first+=num[a][a];
    for(a=0,b=2,dec=0;a<3;a++,b--)
        dec+=num[a][b];
    printf("%d %d\n",first,dec);

    return 0;
}
