#include<stdio.h>
#define rong 3.785
#define chang 1.609
int main(void)
{
    float eour,usa;

    printf("���������(��λӢ��)�ͺ�����(��λ����):\n");
    scanf("%f %f",&eour,&usa);
    printf("ŷ��=%.1f\n",usa*rong/chang*eour*100);
    printf("����=%.1f\n",eour*chang/rong*usa);

    return 0;
}
