#include<stdio.h>
char *fit(char *ch, char cn);
int main(void)
{
    char cr;
    char qt[100]={"QWERTYUIOPAsdfghjkl"};

    while(scanf("%c",&cr)!=EOF)
    {
        if(fit(qt,cr)!=NULL)
            printf("have\n");
        else
            printf("no have\n");
    }
    puts("Done");

    return 0;
}
char *fit(char *ch, char cn)
{
    int a;

    for(a=0;a<100;a++)
    {
        if(cn==ch[a])
            return ch;
    }

    return NULL;
}
