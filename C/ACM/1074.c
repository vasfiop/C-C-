/*
Description
编写一函数，由实参传来一个字符串，
统计此字符串中字母、数字、空格和其它字符的个数，
在主函数中输入字符串以及输出上述结果。 
只要结果，别输出什么提示信息。
Input
一行字符串
Output
统计数据，4个数字，空格分开。
Sample Input
!@#$%^QWERT    1234567
Sample Output
5 7 4 6 
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    char str[10000];
    int size,a;
    int z,s,k,q;//字母、数字、空格和其它字符的个数，

    gets(str);
    size=strlen(str);
    z=s=k=q=0;
    for(a=0;a<size;a++)
    {
        if(isalpha(str[a]))//ctype.h提供原型
            z++;
        else if(isdigit(str[a]))
            s++;
        else if(str[a]==' ')
            k++;
        else
            q++;
    }
    printf("%d %d %d %d\n",z,s,k,q);
    
    return 0;
}
