#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void del_char(char *,char);
int main(int argc, char const *argv[])
{
    char ch;
    char str[1000];

    scanf("%c",&ch);
    fflush(NULL);
    gets(str);
    del_char(str,ch);
    printf(str);

    return 0;
}
void del_char(char * str,char ch)
{
    int size,a;
    int b;

    size=strlen(str);
    for(a=0;a<size-1;a++)
        if(str[a]==ch)
            for(b=a;b<size-1;b++)
                str[b]=str[b+1];
}
