/*
Description
��д��������һ��������n����������ʽ��ֵ��Ҫ����͵��ú���fact(k)����k�Ľ׳ˣ���������ֵ��������double��
1+1/2+ .... +1/n!
�������5λС����
Sample Input
5
Sample Output
sum=1.71667
*/
#include<stdio.h>
double fact(int k);
int main(int argc, char const *argv[])
{
    int n;
    double sum;

    scanf("%d",&n);
    sum=fact(n);
    printf("sum=%.5f\n",sum);
    
    return 0;
}
double fact(int k)
{
    int a,b;
    double sum;
    double num;

    for(a=1;a<=k;a++)
    {
        for(b=1,num=1;b<=a;b++)
            num*=b;
        sum+=1.0/num;
    }

    return sum;
}