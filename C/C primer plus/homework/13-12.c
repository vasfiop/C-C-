#include"all_file.h"
#include"s_gets.h"
#define SIZE 80//文件名字的长度
char really[10]=" .':~*=&%#";
int main(void)
{
    FILE *file;
    char *name;
    int ch;
    int picture[20][30];//需要被储存的数组
    int x,y;
    char *chs[20][31];

    name=(char *)malloc(sizeof(char *)*SIZE);
    printf("Please enter a name of file.\n");
    s_gets(name,80);
    if((file=fopen(name,"a+"))==NULL)
    {
        printf("Can't open the %s.\n",name);
        exit(EXIT_FAILURE);
    }
    for(x=0;x<20;x++)
    {
        for(y=0;y<30;y++)
            fscanf(file,"%d",&picture[x][y]);
    }
    for(x=0;x<20;x++)
    {
        for(y=0;y<30;y++)
            chs[x][y]=really[picture[x][y]];
    }
    for(x=0;x<20;x++)
    {
        for(y=0;y<30;y++)
            putchar(chs[x][y]);
        putchar('\n');
    }
    if(ferror(file))
    {
        fprintf(stderr,"Error getting date from file.\n");
        exit(EXIT_FAILURE);
    }
    free(name);

    return 0;
}
