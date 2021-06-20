#include "all_file.h"
#define SIZE 100
int main(int argc,char *argv[])
{
    FILE *file_1;
    char *ch;
    int cha;

    ch=(char *)malloc(SIZE*sizeof(char *));
    gets(ch);
    if((file_1=fopen(ch,"a+"))==NULL)
    {
        printf("Can't open the %s.\n",ch);
        exit(EXIT_FAILURE);
    }
    while((ch=getc(file_1))!=EOF)
    {
        ch=toupper(ch);
        putchar(ch);
    }
    free(ch);
    fclose(file_1);

    return 0;
}
