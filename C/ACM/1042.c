/*
Description
Ҫ��"China"������룬��������ǣ���ԭ����ĸ����ĵ�4����ĸ����ԭ������ĸ�����磬��ĸ"A"�����4����ĸ��"E"��"E"����"A"��
��ˣ�"China"Ӧ��Ϊ"Glmre"��
���һ�����ø���ֵ�ķ���ʹcl��c2��c3��c4��c5���������ֵ�ֱ�Ϊ����C������h������i������n������a�����������㣬ʹc1��c2��c3��c4��c5�ֱ��Ϊ��G������l������m������r������e�����������
Input
China
Output
���ܺ��China
Sample Input
China
Sample Output
Glmre
*/
#include<stdio.h>
int main(void)
{
    char c1='C',c2='h',c3='i',c4='n',c5='a';

    printf("%c%c%c%c%c",c1+4,c2+4,c3+4,c4+4,c5+4);

    return 0;
}
