/*
Description
一个数如果恰好等于它的因子之和，这个数就称为"完数"。
例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 
编程序找出N之内的所有完数，并按下面格式输出其因子：
Input
N
Output
? its factors are ? ? ?
Sample Input
1000
Sample Output
6 its factors are 1 2 3
28 its factors are 1 2 4 7 14
496 its factors are 1 2 4 8 16 31 62 124 248
*/
#include<stdio.h>//由于完数都是三角数，所以比较三角数就可以了
int main(int argc, char const *argv[])
{
    int n;
    int a,b;
    int sum;
    int num;//三角数

    scanf("%d",&n);
    for(a=2,num=a*(a+1)/2;num<=n;a++)
    {
        for(b=1,num=a*(a+1)/2,sum=0;b<=num/2;b++)
            if(num%b==0)
                sum+=b;
        if(sum==num)
        {
            printf("%d its factors are",num);
            for(b=1;b<=num/2;b++)
                if(num%b==0)
                    printf(" %d",b);
            printf("\n");
        }
    }

    return 0;
}

