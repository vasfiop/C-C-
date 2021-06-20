/*
Description
有一字符串，包含n个字符。写一函数，将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。

Input
数字n 一行字符串 数字m
Output
从m开始的子串

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
