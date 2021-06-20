#include "all_file.h"
#include "s_gets.h"
int main(int argc,char *argv[])
{
    FILE *file_1;
    char into;
    int ch;
    int count,i;

    into=argv[1][0];
    if(argc<2)
    {
        printf("Error.\n");
        exit(EXIT_FAILURE);
    }
    if(argv[2]=='\0')
    {
        printf("OX00000001\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        i=2;
        while(i<argc)
        {
            if((file_1=fopen(argv[i],"r"))==NULL)
            {
                printf("Can't open the %s.\n",argv[i]);
                continue;
            }
            count=0;
            while((ch=getc(file_1))!=EOF)
            {
                if(ch==into)
                    count++;
            }
            printf("The %s has %c for %d.\n",argv[i],into,count);
            fclose(file_1);
            i++;
        }
    }

    return 0;
}
