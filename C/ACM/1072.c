/*
Description
дһ�������������ַ����е�Ԫ����ĸ���Ƶ���һ���ַ�����Ȼ�������
Input
һ���ַ���
Output
˳��������е�Ԫ����ĸ��aeiuo��
Sample Input
abcde
Sample Output
ae
*/
#include<stdio.h>
#include<string.h>
char Yuan[6]="aeiou";
void Find(char *str_1,char *str_2,int size);
int main(int argc, char const *argv[])
{
    int size;
    char str_1[1000];
    char str_2[1000];

    gets(str_1);
    size=strlen(str_1);
    Find(str_1,str_2,size);
    puts(str_2);

    return 0;
}
void Find(char *str_1,char *str_2,int size)
{
    int a,b,c;

    for(a=0,b=0;a<size;a++)
        for(c=0;c<5;c++)
            if(str_1[a]==Yuan[c])
                str_2[b++]=str_1[a];
    str_2[b]='\0';
}