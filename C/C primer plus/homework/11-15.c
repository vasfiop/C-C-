#include<stdio.h>
#include<ctype.h>
#include "s_gets.h"
int myatoi(char *ch);
int main(void)
{
    char cr[100];

    s_gets(cr,100);
    printf("%d\n",myatoi(cr));

    return 0;
}
int myatoi(char *ch)
{
    int b,a,count,sum;

    for(a=0,count=0;isdigit(ch[a]);a++)
        count++;
    for(a=0,sum=0;a<count;a++,sum*=10)
        sum+=ch[a]-'0';


    return sum/10;
}
