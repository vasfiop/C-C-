/*
Description
AunSmile����ܲ����ģ���Ϊzhuiqu����������ps4��è�档
����AunSmile�����zhuiqu��-����Ϸ�������֡�
AunSmile����һ�����ֵ����յף�����������������zhuiqu�¡�
����AunSmile�ܻ��ǣ������˼��飬���zhuiqu���ܲ� ������
��ôps4��è���춼��zhuiqu��!�յ���������������С��������
Input
һ�У���������
Output
����յס�����֤��int��Χ��
Sample Input
1 2 3
Sample Output
6
*/
#include<stdio.h>
int gcd(int x,int y);
int main(int argc, char const *argv[])
{
    int a,b,c;
    int middle;
    int s1,s2;
    int d1;
    
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        s1=gcd(a,b);//����a��b���������
        s2=gcd(b,c);//����b��c���������
        d1=a*b*c/(s1*s2);
        printf("%d\n",d1);
    }

    return 0;
}
int gcd(int x,int y)
{
    if(x%y==0)
        return y;
    else 
        gcd(y,x%y);
}
