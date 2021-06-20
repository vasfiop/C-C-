#include"all_file.h"
#include"s_gets.h"
#define SIZE 40
int main(void)
{
    FILE *file;
    char *name;
    int num;
    int count=0;

    name=(char *)malloc(sizeof(char *)*SIZE);
    printf("Please enter a file of the name.\n");
    s_gets(name,SIZE);
    if((file=fopen(name,"a+"))==NULL)
    {
        printf("Can't open the %s\n",name);
        exit(EXIT_FAILURE);
    }
    rewind(file);
    while(fgets(name,SIZE,file)!=NULL)
        count++;
    rewind(file);
    puts("Enter words to add to the file;press the # key at the beginning of a line to terminate.");
    while((fscanf(stdin,"%s",name)==1)&&(name[0]!='#'))
        fprintf(file,"%3d: %s",++count,name);
    puts("FILE contents:");
    rewind(file);
    while(fgets(name,SIZE,file)!=NULL)
        fputs(name,stdout);
    if(fclose(file)!=0)
        fprintf(stderr,"Error closing file\n");
    free(file);
    puts("Done");

    return 0;
}
