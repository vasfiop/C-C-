#include"all_file.h"
#define SIZE 255
int main(int argc,char *argv[])
{
    FILE *file;
    char *finds;

    finds=(char *)malloc(sizeof(char *)*SIZE);
    if(argc<2)
    {
        printf("Error.\n");
        exit(EXIT_FAILURE);
    }
    if((file=fopen(argv[2],"a+"))==NULL)
    {
        printf("Can't open the %s.\n",argv[2]);
        exit(EXIT_FAILURE);
    }
    while(fgets(argv[2],255,file)!=NULL)
    {
        if(strstr(finds,argv[1])!=NULL)
            fputs(finds,stdout);
    }
    if(fclose(file)==0)
        printf("Error Close to file.\n");
    free(finds);

    return 0;
}
