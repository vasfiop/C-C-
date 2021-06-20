/*
Description
将一个字符串str的内容颠倒过来，并输出。str的长度不超过100个字符。
Input
输入包括一行。 第一行输入的字符串。
Output
输出转换好的逆序字符串。
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
