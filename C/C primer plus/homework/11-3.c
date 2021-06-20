#include<stdio.h>
#include<ctype.h>
int fit(char * ch);
int main(void)
{
    char cn[80];

    while(fit(cn))
    {
        puts(cn);
    }
    puts("Done.\n");

    return 0;
}
int fit(char * ch)
{
    int a;
    char cr;

    while((cr=ch[0]=getchar())!=EOF&&isspace(cr))
        continue;
    for(a=1;a<80;a++)
    {
        if(cr==EOF)
        {
            ch[a]='\0';
            return 0;
        }
        cr=ch[a]=getchar();
        if(isspace(cr))
        {
            ch[a]='\0';
            break;
        }
    }
    while(cr!='\n')
        cr=getchar();

    return 1;
}
