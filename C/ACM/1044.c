/*
Description
����һ�������¶ȣ�Ҫ����������¶ȡ�
��ʽΪ c=5(F-32)/9 ���Ҫ��������˵����ȡλ2С����
Input
һ�������¶ȣ�������
Output
�����¶ȣ�������λС��
Sample Input
-40
Sample Output
c=-40.00
*/
#include<stdio.h>
int main(void)
{
    double F,C;

    scanf("%lf",&F);
    C=5.0*(F-32)/9.0;
    printf("c=%.2f",C);

    return 0;
}
