/*
Description
дһ�������������ַ�������
Input
�����ַ���
Output
���Ӻ���ַ���
Sample Input
123
abc
Sample Output
123abc
*/
#include<stdio.h>
#include<string.h>
#define SIZE 1000
void Mystrcat(char *,char *);
int main(int argc, char const *argv[])
{
    char str1[SIZE],str2[SIZE];

    gets(str1);
    gets(str2);
    Mystrcat(str1,str2);
    puts(str1);

    return 0;
}
void Mystrcat(char *str1, char *str2)
{
    int size_1,size_2;
    int a,b;

    size_1=strlen(str1);
    size_2=strlen(str2);
    for(a=size_1,b=0;a<size_2+size_1;a++,b++)
        str1[a]=str2[b];
}