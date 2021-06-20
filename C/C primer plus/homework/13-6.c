#include "all_file.h"//stdio.h string.h stdilb.h
#include "s_gets.h"
#define SIZE 80
int main(void)
{
    int ch;
    FILE *file_1,*file_2;
    char *name_1,*name_2;
    int count;

    fprintf(stderr,"Please enter a name of the first file.\n");
    name_1=(char *)malloc(sizeof(char *)*SIZE);
    s_gets(name_1,SIZE);
    name_2=(char *)malloc(sizeof(char *)*SIZE);
    if((file_1=fopen(name_1,"r"))==NULL)
    {
        fprintf(stderr,"Can't open the %s.001\n",name_1);
        exit(EXIT_FAILURE);
    }
    strncpy(name_2,name_1,SIZE-5);
    name_2[SIZE-5]='\0';
    strcat(name_2,".txt");
    if((file_2=fopen(name_2,"w"))==NULL)
    {
        fprintf(stderr,"Can't open the %s.002\n",name_2);
        exit(EXIT_FAILURE);
    }
    while((ch=getc(file_1))!=EOF)
        if(!(count++%3))
            putc(ch,file_2);
    if(fclose(file_1)!=0||fclose(file_2)!=0)
        fprintf(stderr,"Error in closing files.\n");

    return 0;
}
