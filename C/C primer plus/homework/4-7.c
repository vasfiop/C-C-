#include<stdio.h>
#include<float.h>
int main(void)
{
    double num1=1.0/3.0;
    float num2=1.0/3.0;

    printf("%.6f %.6f\n",num1,num2);
    printf("%.12f %.12f\n",num1,num2);
    printf("%.16f %.16f\n",num1,num2);
    printf("%d %d",FLT_DIG,DBL_DIG);//�ڲ�����ʧ���ȵ�ǰ���£�float���Ϳɱ�ʾ��ʮ������λ������СֵΪ6��
    //�ڲ���ʧ���ȵ�ǰ���£�double���Ϳɱ�ʾ��ʮ������λ������СֵΪ10��

    return 0;
}
