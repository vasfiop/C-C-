/*
Description
һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"��
���磬6������Ϊ1��2��3����6=1+2+3�����6��"����"�� 
������ҳ�N֮�ڵ��������������������ʽ��������ӣ�
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
#include<stdio.h>//�����������������������ԱȽ��������Ϳ�����
int main(int argc, char const *argv[])
{
    int n;
    int a,b;
    int sum;
    int num;//������

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

