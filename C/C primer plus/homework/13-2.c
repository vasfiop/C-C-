#include "all_file.h"
int main(int argc , char *argv[])
{
    FILE *file_1;
    FILE *file_2;
    int ch;

    if(argc<2)
    {
        printf("Error.\n");
        exit(EXIT_FAILURE);
    }
    if((file_1=fopen(argv[1],"a+"))==NULL)
    {
        printf("Can't open the %s.\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    if((file_2=fopen(argv[2],"w+"))==NULL)
    {
        printf("Can't open the %s.\n",argv[2]);
        exit(EXIT_FAILURE);
    }
    while((ch=getc(file_1))!=EOF)
        putc(ch,file_2);
    fclose(file_1);
    fclose(file_2);
    puts("Done!");

    return 0;
}
