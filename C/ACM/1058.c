/*
Description
一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
Input
M N
Output
它在第N次落地时反弹多高？共经过多少米？ 保留两位小数，空格隔开，放在一行
Sample Input
1000 5
Sample Output
31.25 2875.00
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    double M,N;
    double sum,size;
    int a;

    scanf("%lf %lf",&M,&N);
    for(a=0,sum=0;a<N;a++)
    {
        sum+=M;
        M/=2;
        sum+=M;
    }
    printf("%.2f %.2f\n",M,sum-M);

    return  0;
}