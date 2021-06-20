/*
Description
输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。
Input
一行字符
Output
统计值
Sample Input
aklsjflj123 sadf918u324 asdf91u32oasdf/.';123
Sample Output
23 16 2 4
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[20000];
    int a,size;
    int z,k,s,q;

    gets(str);
    size=strlen(str);
    z=k=s=q=0;
    for(a=0;a<size;a++)
    {
        if(isalpha(str[a]))
            z++;
        else if(str[a]==' ')
            k++;
        else if(isdigit(str[a]))
            s++;
        else 
            q++;
    }
    printf("%d %d %d %d\n",z,s,k,q);
    
    return 0;
}
