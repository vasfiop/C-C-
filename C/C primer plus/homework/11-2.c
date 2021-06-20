#include<stdio.h>
#include<ctype.h>
#define LEN 10
void fit(char *cr,int a);
int main(void)
{
    int x=10;
    char ch[10];

    fit(ch,LEN-1);
    puts(ch);

    return 0;
}
void fit(char *cr, int a)
{
    int i;

    for(i=0;i<a;i++)
    {
        cr[i]=getchar();
        if(isspace(cr[i]))
            break;
    }
}
