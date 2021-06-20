/*
Description
求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
Input
a b c
Output
1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c
Sample Input
100 50 10
Sample Output
47977.93
*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    int x;
    double sum;

    scanf("%d %d %d",&a,&b,&c);
    for(x=1,sum=0;x<=a;x++)
        sum+=x;
    for(x=1;x<=b;x++)
        sum+=pow(x,2);
    for(x=1;x<=c;x++)
        sum+=1.0/x;
    printf("%.2f\n",sum);
    
    return 0;
}
