/*
Description
��ӡ������"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸñ��� ���磺153��һ��ˮ�ɻ�������Ϊ153=1^3+5^3+3^3�� Output:
153
???
???
??? 
Input
��
Output
���е�ˮ�ɻ�������С�Ŀ�ʼ�� ÿ��һ��
*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a;
    int ge,shi,bai;
    
    for(a=100;a<=999;a++)
    {
        ge=a%10;
        shi=a/10%10;
        bai=a/100;
        if(pow(ge,3)+pow(shi,3)+pow(bai,3)==a)
            printf("%d\n",a);
    }
    
    return 0;
}
