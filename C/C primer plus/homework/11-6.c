#include<stdio.h>
#include"s_gets.h"
int is_within(char s, char *cn);
int main(void)
{
    char ch[100],c;

    printf("Enter a string:");
    while(s_gets(ch,100)&&ch[0]!=EOF)//¶ÁÈ¡100-1¸ö×Ö·û£¬Óöµ½»»ÐÐ·û¶ªÆú²¢»»³É¿Õ×Ö·û
    {
        printf("Now enter a char:");
        c=getchar();
        while(getchar()!='\n')
            continue;
        if(is_within(c,ch))
            printf("Have\n");
        else
            printf("no\n");
        printf("Now enter a string:");
    }

    puts("Done");

    return 0;
}
int is_within(char s,char *ch)
{
    int a;

    for(a=0;ch[a]!='\0';a++)
    {
        if(s==ch[a])
            return 1;
    }

    return 0;
}
