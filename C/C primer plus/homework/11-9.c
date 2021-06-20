#include "all_file.h"//慵懒的程序员不需要解释
#include "s_gets.h"
char *turn(char *s1);
int main(void)
{
    char ch1[50];

    printf("Enter a string:");
    while(s_gets(ch1,50)&&ch1[0]!=EOF)
    {
        printf("%s\n",turn(ch1));
        printf("Now enter a new string:");
    }
    puts("Done");

    return 0;
}
char *turn(char *s1)
{
    char ch;
    int n,a;

    n=strlen(s1);
    for(a=0;a<n/2;a++)
    {
        ch=s1[a];
        s1[a]=s1[n-a-1];
        s1[n-a-1]=ch;
    }

    return s1;
}
