/*
Description
��Բ�뾶r��Բ����h ��Բ�ܳ�C1��Բ���Sa��Բ������Sb��Բ�����Va��Բ�����Vb��
��scanf�������ݣ���������������ʱҪ������˵����ȡС�������λ���֡������� PI��3.14
Input
������������r��h
Output
Բ�ܳ�C1��Բ���Sa��Բ������Sb��Բ�����Va��Բ�����Vb�� ������λС����ÿ��������С�
Sample Input
1.5 3
Sample Output
C1=9.42
Sa=7.07
Sb=28.26
Va=14.13
Vb=21.20
*/
#include<stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    double r,h,c1,sa,sb,sh,va,vb;

    scanf("%lf %lf",&r,&h);
    c1=2*r*PI;
    sa=r*r*PI;
    sb=4*PI*r*r;
    va=(4.0/3)*PI*r*r*r;
    vb=r*r*PI*h;
    printf("C1=%.2f\n",c1);
    printf("Sa=%.2f\n",sa);
    printf("Sb=%.2f\n",sb);
    printf("Va=%.2f\n",va);
    printf("Vb=%.2f\n",vb);

    return 0;
}
