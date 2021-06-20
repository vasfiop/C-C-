/*
Description
输入一行电报文字，将字母变成其下一字母（如’a’变成’b’……’z’变成’ａ’其它字符不变）。
Input
一行字符
Output
加密处理后的字符
Sample Input
a b
Sample Output
b c
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    char str[1000];
    int a;
    int size;

    gets(str);
    size=strlen(str);
    for(a=0;a<size;a++)
    {
        if(isalpha(str[a])&&str[a]!='z'&&str[a]!='Z')
            putchar(str[a]+1);
        else if(str[a]=='z')
            putchar('a');
        else if(str[a]=='Z')
            putchar('A');
        else 
            putchar(str[a]);
    }
    
    return 0;
}
