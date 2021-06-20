/*
Description
如题
Input
整数n ，接下来的n行有n对整数 a和b
Output
输出a和b的最大公约数
Sample Input
2
3 6
6 3
Sample Output
3
3
*/
#include<stdio.h>
#include<stdlib.h>//提供malloc原型
int gcd(int x,int y);
int main(int argc, char const *argv[])
{
    int *num_a,*num_b;
    int n;
    int s;//最大公约数
    int a;

    scanf("%d",&n);
    num_a=(int *)malloc(sizeof(int)*n);//创建数组
    num_b=(int *)malloc(sizeof(int)*n);
    for(a=0;a<n;a++)
    {
        scanf("%d %d",&num_a[a],&num_b[a]);
        s=gcd(num_a[a],num_b[a]);
        printf("%d\n",s);
    }
    free(num_a);
    free(num_b);//释放空间
    //断点位置
    return 0;
}
int gcd(int x,int y)
{
    if(x%y==0)
        return y;
    else 
        return gcd(y,x%y);
}