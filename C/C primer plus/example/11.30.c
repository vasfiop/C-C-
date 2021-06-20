#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIMIT 81
void TpUpper(char *);
int PunctCount(const char *);
int main(void)
{
    char line[LIMIT];
    char *find;
    puts("Please enter a line:");
    fgets(line,LIMIT,stdin);//����
    find=strchr(line,'\n');//����line�еĻ��з���strchr�������ַ���λ�õ�ָ�롣���û�ҵ����ؿ�ָ��
    if(find)//�����з����ɿ��ַ�
    {
        *find='\0';
    }
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n",PunctCount(line));

    return 0;
}
void ToUpper(char *str)
{
    while(*str)//������������壬�н�Сд���ɴ�д
    {
        *str=toupper(*str);//���������Сд�ַ����ú������ش�д�ַ������򣬷���ԭʼ������������ctyp.h
        str++;
    }
}
int PunctCount(const char *str)
{
    int ct=0;
    while(*str)
    {
        if(ispunct(*str))//�����ţ����ո����ĸ���֣�
            ct++;
        str++;
    }

    return ct;
}
