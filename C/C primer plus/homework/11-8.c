#include<stdio.h>
#include "s_gets.h"
char *string_in(char *s1,char *s2);//s1³¤s2¶Ì
int main(void)
{
    char ch1[50],ch2[50];

    printf("Please enter a first string:");
    while(s_gets(ch1,50)&&ch1[0]!=EOF)
    {
        printf("Now enter a second string:");
        s_gets(ch2,50);
        if(ch2[0]==EOF)
            break;
        if(string_in(ch1,ch2))
            printf("%s is in %s.\n",ch2,ch1);
        else
            printf("%s is not in %s.\n",ch2,ch1);
        printf("Enter a new first string:");
    }
    puts("Done");

    return 0;
}
char *string_in(char *s1,char *s2)
{
    int a,b;

    for(a=0,b=0;s2[a]!='\0';a++)
    {
        if(s1[a]==s2[b])
        {
            while(s2[b]!='\0')
            {
                b++;
                a++;
                continue;
            }
            if(s2[b]=='\0')
                return s1[a];
        }
    }
    return NULL;
}
