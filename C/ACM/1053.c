/*
Description
��Sn=1!+2!+3!+4!+5!+��+n!ֵ֮������n��һ�����֡�
Input
n
Output
��
Sample Input
5
Sample Output
153
HINT
���ز���ͨ��֮�󣬽� �׳� �� �׳��ۼ� ������������Ϊlong long int���ͣ�
�����%lld��Ȼ��ֱ���ύ���뼴�ɡ�
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int a,b;
    long long sum;
    long long sn;

    scanf("%d",&n);
    for(a=1,sn=0;a<=n;a++)
    {
        for(b=1,sum=1;b<=a;b++)
            sum*=b;
        sn+=sum;
    }
    printf("%lld\n",sn);

    return 0;
}
