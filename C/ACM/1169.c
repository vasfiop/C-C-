/*
Description
����һ��������n.��1+1/2!+1/3!+....+1/n!
Ҫ���岢���ú���fact(n)����n�Ľ׳ˣ���������ֵ�������ǵ㵥���ȸ����͡�
* �������4λС��
Input
������n
Output
����֮��
Sample Input
2
Sample Output
1.5000
*/
#include<stdio.h>
float fact(int );
int main(int argc, char const *argv[])
{
    int n;
    float sum;

    scanf("%d",&n);
    sum=fact(n);
    printf("%.4f\n",sum);

    return 0;
}
float fact(int n)
{
    int a,b;
    float sum;
    float num;

    for(a=1,sum=0;a<=n;a++)
    {
        for(b=1,num=1;b<=a;b++)
            num*=b;
        sum+=(float)1/num;
    }
    return sum;
}