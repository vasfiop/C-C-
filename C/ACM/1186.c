/*
Description
��������������m��n���������Լ������С��������

Sample Input
2 3
Sample Output
1
6
*/
#include<stdio.h>
int gcd(int , int );
int main(int argc, char const *argv[])
{
    int m,n;
    int b,s;//b�����Լ����s����С������
    
    scanf("%d %d",&n,&m);
    b=gcd(m,n);
    s=m*n/b;
    printf("%d\n",b);
    printf("%d\n",s);

    return 0;
}
int gcd(int x,int y)
{
    if(x%y==0)
        return y;
    else 
        gcd(y,x%y);
}