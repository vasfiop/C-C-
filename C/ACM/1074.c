/*
Description
��дһ��������ʵ�δ���һ���ַ�����
ͳ�ƴ��ַ�������ĸ�����֡��ո�������ַ��ĸ�����
���������������ַ����Լ������������� 
ֻҪ����������ʲô��ʾ��Ϣ��
Input
һ���ַ���
Output
ͳ�����ݣ�4�����֣��ո�ֿ���
Sample Input
!@#$%^QWERT    1234567
Sample Output
5 7 4 6 
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    char str[10000];
    int size,a;
    int z,s,k,q;//��ĸ�����֡��ո�������ַ��ĸ�����

    gets(str);
    size=strlen(str);
    z=s=k=q=0;
    for(a=0;a<size;a++)
    {
        if(isalpha(str[a]))//ctype.h�ṩԭ��
            z++;
        else if(isdigit(str[a]))
            s++;
        else if(str[a]==' ')
            k++;
        else
            q++;
    }
    printf("%d %d %d %d\n",z,s,k,q);
    
    return 0;
}
