/*
Description
判断非负整数是否是3的倍数
Input
整数n，表示下面有n个数，接下来的n个数每个占一行，每个数不会超过100位
Output
输出Y或N
Sample Input
2
11
12
Sample Output
N
Y
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n,a;
    int * num;

    scanf("%d",&n);
    num=(int *)malloc(sizeof(int)*n);//创建数组
    for(a=0;a<n;a++)
        scanf("%d",&num[a]);
    for(a=0;a<n;a++)
    {
        if(!(num[a]%3))
            printf("Y\n");
        else 
            printf("N\n");
    }
    free(num);//释放数组
    //断点
    return 0;
}
