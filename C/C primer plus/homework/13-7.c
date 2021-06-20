#include "all_file.h"
#include "s_gets.h"
#define LONG 4096
#define SIZE 80
int main(void)
{
    FILE *file_1,*file_2;
    char *name_1,*name_2;
    int ch1,ch2;

    fprintf(stderr,"Please enter a name of the first file.\n");
    name_1=(char *)malloc(sizeof(char *)*SIZE);
    s_gets(name_1,SIZE);
    fprintf(stderr,"Please enter a name of the second file.\n");
    name_2=(char *)malloc(sizeof(char *)*SIZE);
    s_gets(name_2,SIZE);
    if(strcmp(name_1,name_2)==0)
    {
        fprintf(stderr,"Can't open itself.\n");
        exit(EXIT_FAILURE);
    }
    if((file_2=fopen(name_2,"r"))==NULL)
    {
        fprintf(stderr,"Can't open the %s.002\n",name_2);
        exit(EXIT_FAILURE);
    }
    if((file_1=fopen(name_1,"r"))==NULL)
    {
        fprintf(stderr,"Can't open the %s.001\n",name_1);
        exit(EXIT_FAILURE);
    }
    printf("a:\n");
    while(ch1!=EOF&&ch2!=EOF)
    {
        while((ch1=getc(file_1))!='\n'&&ch1!=EOF)
            putchar(ch1);
        putchar('\n');
        while((ch2=getc(file_2))!='\n'&&ch2!=EOF)
            putchar(ch2);
        putchar('\n');
    }
    ch1=ch2=0;
    fseek(file_1,(long)0,SEEK_SET);
    fseek(file_2,(long)0,SEEK_SET);
    printf("B:\n");
    while(ch1!=EOF&&ch2!=EOF)
    {
        while((ch1=getc(file_1))!='\n'&&ch1!=EOF)
            putchar(ch1);
        while((ch2=getc(file_2))!='\n'&&ch2!=EOF)
            putchar(ch2);
        putchar('\n');
    }
    fclose(file_1);
    fclose(file_2);
    free(name_1);
    free(name_2);

    return 0;
}
