/*
Description
��һ�ַ���������n���ַ���дһ�����������ַ����дӵ�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊ��һ���ַ�����

Input
����n һ���ַ��� ����m
Output
��m��ʼ���Ӵ�

Sample Input
6
abcdef
3
Sample Output
cdef
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int m;
    char *str;
    char *putstr;

    scanf("%d",&n);
    str=(char*)malloc(sizeof(char)*n+1);
    scanf("%s",str);
    scanf("%d",&m);

    putstr=(char*)malloc(sizeof(char)*n);
    int a=0;
    for(int i=m-1,a=0;i<n;i++,a++)
        putstr[a]=str[i];
    puts(putstr);
    
    return 0;
}
