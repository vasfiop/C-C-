/*
Description
���һ������һ�����¶�ת���������¶ȵ�ȡֵ������[-1000 C��1500C ]���¶ȼ��50C��Ҫ����͵��ú��� ctof(c),�������¶�Cת���ɻ����¶�F�����㹫ʽ��
F = 32 + C* 9/5��
����
c=0->f=32
c=5->f=41
c=10->f=50
c=15->f=59
c=20->f=68
c=25->f=77
c=30->f=86
c=35->f=95
c=40->f=104
c=45->f=113
c=50->f=122
c=55->f=131
c=60->f=140
c=65->f=149
*/
#include<stdio.h>
double ctof(double c);
int main(int argc, char const *argv[])
{
    double c;
    double F;
    
    while(scanf("%lf",&c)!=EOF)
    {
        F=ctof(c);
        printf("c=%g->f=%g\n",c,F);
    }

    return 0;
}
double ctof(double c)
{
    return 32+c*9.0/5.0;
}