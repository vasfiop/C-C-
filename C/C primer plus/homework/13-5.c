#include "all_file.h"
#include "s_gets.h"
#define LONG 4096
#define SIZE 80
void append(FILE *source, FILE *dest);
int main(int argc, char *argv[])
{
    FILE *file_1;
    FILE *file_2;
    int ch,count=0;
    char *name_2;

    if(argc<2)
    {
        fputs("Error.\n",stderr);
        exit(EXIT_FAILURE);
    }
    if((file_1=fopen(argv[1],"a+"))==NULL)
    {
        fprintf(stderr,"Can't open %s.010\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    if(setvbuf(file_1,NULL,_IOFBF,LONG))
    {
        fputs("Can't create output buffer.001\n",stderr);
        exit(EXIT_FAILURE);
    }
    puts("Enter name of first source file (empty line to quit):");
    name_2=(char *)malloc(SIZE*sizeof(char*));
    while(s_gets(name_2,SIZE)&&name_2[0]!='\0')
    {
        if(strcmp(argv[1],name_2)==0)
            fputs("Can't append file to itself.\n",stdout);
        else if((file_2=fopen(name_2,"r"))==NULL)
            fprintf(stderr,"Can't open %s.020\n",name_2);
        else
        {
            if(setvbuf(file_2,NULL,_IOFBF,LONG))
            {
                fputs("Can't create output buffer.002\n",stderr);
                continue;
            }
            append(file_2,file_1);
            if(ferror(file_1))
                fprintf(stderr,"Error in reading file %s.100\n",argv[1]);
            if(ferror(file_2))
                fprintf(stderr,"Error in reading file %s.200\n",name_2);
            fclose(file_2);
            count++;
            fprintf(stderr,"File %s appended.\n",name_2);
            puts("Next file (empty line to quit):");
        }
    }
    fprintf(stderr,"Done appending. %d files appended.\n",count);
    fseek(file_1,(long)0,SEEK_SET);
    fprintf(stderr,"%s contents:\n",argv[1]);
    while((ch=getc(file_1))!=EOF)
        putchar(ch);
    free(name_2);
    fclose(file_1);

    return 0;
}
void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[LONG];

    while(fread(temp,sizeof(char),LONG,source)>=LONG)
        fwrite(temp,sizeof(char),LONG,dest);
}
