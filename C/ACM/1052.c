/*
Description
��Sn=a+aa+aaa+��+aa��aaa����n��a��ֵ֮������a��һ�����֡� ���磺2+22+222+2222+22222��n=5����n�ɼ������롣������֪a=2.
Input
n
Output
��
Sample Input
5
Sample Output
24690
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,n;
    int s;
    int num;
    int i,j;

    a=2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        num=a;
        for(j=0;j<i;j++)
        {
            num*=10;
            num+=a;
        }
        s+=num;
    }
    printf("%d\n",s);

    return 0;
}
