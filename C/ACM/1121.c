/*
Description
已知 n 个整数 x1,x2,…,xn，以及一个整数 k（k＜n）。从 n 个整数中任选 k 个整数相加，可分别得到一系列的和。
例如当 n=4，k＝3，4 个整数分别为 3，7，12，19 时，可得全部的组合与它们的和为：
3＋7＋12=22　　3＋7＋19＝29　　7＋12＋19＝38　　3＋12＋19＝34。
现在，要求你计算出和为素数共有多少种。
例如上例，只有一种的和为素数：3＋7＋19＝29）。

Input
键盘输入，格式为：
n , k （1<=n<=20，k＜n）
x1,x2，…,xn （1<=xi<=5000000）
Output
屏幕输出，格式为：
一个整数（满足条件的种数）。

Sample Input
4 3
3 7 12 19
Sample Output
1
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void randss(int *num,int n);
int main(int argc, char const *argv[])
{
    int n,k;
    int *NUM;
    int *num;
    int a;
    int last;
    int sum;
    int find;
    int count=0;
    int size;
    int gps;

    scanf("%d %d",&n,&k);
    NUM=(int *)malloc(sizeof(int)*n);
    for(a=0;a<n;a++)
        scanf("%d",&NUM[a]);
   //randss(NUM,n);
    num=(int *)malloc(sizeof(int)*k);
    for(a=0;a<k;a++)
        num[a]=NUM[a];
    last=k-1;
    gps=n-1;
    size=k;

    while(size)
    {
        for(a=0,sum=0;a<k;a++)
            sum+=num[a];
        for(a=2,find=1;a<sum;a++)
            if(sum%a==0)
            {
                find=0;
                break;
            }
        if(find)
            count++;
        if(last==gps)
        {
            size--;
            last=size-1;
            gps--;
        }
        if(size==0)
            break;
        last++;
        num[size-1]=NUM[last];
    }
    printf("%d\n",count);

    return 0;
}
/*
void randss(int *num,int n)
{
    srand(time(NULL));
    int a;

    for(a=0;a<n;a++)
        num[a]=(rand()%5000000)+1;
    for(a=0;a<n;a++)
        printf("%d ",num[a]);
    printf("\n");
}
*/