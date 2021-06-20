#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
    int a,b;

    for(a=argc-1;a>0;a--)
    {
        printf("%s",argv[a]);
        if(a)
            printf(" ");
    }

    return 0;
}
