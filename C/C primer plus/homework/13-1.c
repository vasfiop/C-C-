#include "all_file.h"
#define SIZE 100
int main(void)
{
    FILE *file;
    char *name;
    int ch;

    printf("Please enter a name of file:");
    name=(char*)malloc(SIZE*sizeof(char*));
    gets(name);
    if((file=fopen(name,"a+"))==NULL)
    {
        printf("Can't open the file.\n");
        exit(EXIT_FAILURE);
    }
    free(name);
    name=malloc(SIZE*sizeof(char*));
    printf("Please enter a string to file:");
    while((ch=getchar())!=EOF)
        putc(ch,file);
    fclose(file);
    free(name);

    return 0;
}
