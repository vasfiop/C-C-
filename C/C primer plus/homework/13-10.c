#include"all_file.h"
#include"s_gets.h"
#define SIZE 80
int main(void)
{
    FILE *file;
    char *name;
    int ch;
    long weizhi;

    name=(char *)malloc(sizeof(char *)*SIZE);
    printf("Please enter a name of the file.\n");
    s_gets(name,SIZE);
    if((file=fopen(name,"a+"))==NULL)
    {
        printf("Can't open the %s\n",name);
        exit(EXIT_FAILURE);
    }
    printf("Please enter a location of the putout.\n");
    while(scanf("%ld",&weizhi)&&weizhi>=0)
    {
        fseek(file,weizhi,SEEK_SET);
        while((ch=getc(file))!=EOF)
            putchar(ch);
        putchar('\n');
        printf("Now please enter another the location.\n");
    }
    fclose(file);
    free(name);

    return 0;
}
