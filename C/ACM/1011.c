/*
Description
��һ���ַ���str�����ݵߵ��������������str�ĳ��Ȳ�����100���ַ���
Input
�������һ�С� ��һ��������ַ�����
Output
���ת���õ������ַ�����
Sample Input
I am a student
Sample Output
tneduts a ma I
*/
#include<stdio.h>
#include<string.h>
char *s_gets(char *st ,int n);
int main(void)
{
    char str[100],cr;
    int a,b;

    while(gets(str))
    {
        a=strlen(str);
        for(b=0;b<=(a-1)/2;b++)
        {
            cr=str[b];
            str[b]=str[a-1-b];
            str[a-1-b]=cr;
        }
        str[a]='\0';
        printf("%s\n",str);
    }

    return 0;
}
