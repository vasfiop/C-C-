#include<stdio.h>
//#include "s_gets.h"
char *mystrncpy(char *s1,char *s2, int n);
int main(void)
{
    int num;
    char ch1[50],ch2[50];

    printf("Enter a string:");
    while(fgets(ch2,50,stdin)&&ch2[0]!=EOF)
    {
        printf("Now enter a number of the top:");
        scanf("%d",&num);
        getchar();
        mystrncpy(ch1,ch2,num+1);
        printf("%s\n",ch1);
        printf("Enter a new string:");
    }
    puts("Done");

    return 0;
}
char *mystrncpy(char *s1,char *s2,int n)
{
    int a;

    for(a=0;a<n;a++)
        s1[a]=s2[a];
    s1[n-1]='\0';

    return s1;
}
