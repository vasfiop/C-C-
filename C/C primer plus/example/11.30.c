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
    fgets(line,LIMIT,stdin);//输入
    find=strchr(line,'\n');//查找line中的换行符，strchr自身返回字符串位置的指针。如果没找到返回空指针
    if(find)//将换行符换成空字符
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
    while(*str)//如果输入有意义，切将小写换成大写
    {
        *str=toupper(*str);//如果参数是小写字符，该函数返回大写字符；否则，返回原始参数。定义在ctyp.h
        str++;
    }
}
int PunctCount(const char *str)
{
    int ct=0;
    while(*str)
    {
        if(ispunct(*str))//标点符号（处空格和字母数字）
            ct++;
        str++;
    }

    return ct;
}
