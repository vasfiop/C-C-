/*
Description
����һ�е籨���֣�����ĸ�������һ��ĸ���硯a����ɡ�b��������z����ɡ��ᡯ�����ַ����䣩��
Input
һ���ַ�
Output
���ܴ������ַ�
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
