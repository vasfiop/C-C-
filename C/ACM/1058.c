/*
Description
һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬�����¡� ���ڵ�N�����ʱ������ߣ������������ף� ������λС��
Input
M N
Output
���ڵ�N�����ʱ������ߣ������������ף� ������λС�����ո����������һ��
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