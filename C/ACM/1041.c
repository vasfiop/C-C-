/*
Description
��дһ����������a��b��c����ֵ������������ֵ��
Input
һ�����飬�ֱ�Ϊa b c
Output
a b c����������
Sample Input
10 20 30
Sample Output
30
*/
#include<stdio.h>
int main(void)
{
    int a,b,c,max;

    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        max=a;
        if(b>max)
            max=b;
        if(c>max)
            max=c;
        printf("%d\n",max);
    }
}
