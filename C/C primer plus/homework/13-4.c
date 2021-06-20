#include "all_file.h"
int main(int argc, char *argv[])
{
    FILE *file;
    int num;
    int ch;

    if(argc<2)
    {
        printf("Error.\n");
        exit(EXIT_FAILURE);
    }
    for(num=1;num<argc;num++)
    {
        if((file=fopen(argv[num],"a+"))==NULL)
        {
            printf("Can't open the %s.\n",argv[num]);
            exit(EXIT_FAILURE);
        }
        while((ch=getc(file))!=EOF)
            putc(ch,stdout);
        fclose(file);
    }
    puts("Done!");

    return 0;
}
