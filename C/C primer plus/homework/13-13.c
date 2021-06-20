//使用name1.txt文件测试
#include"all_file.h"
#include"s_gets.h"
#define SIZE 80
const char really[10]=" .':~*=&%#";
int main(void)
{
    FILE *file;
    char *name;
    int len=20;
    int lon=30;
    char picture[len][lon];
    char chs[len][lon+1];
    int x,y;

    printf("Please enter a name of the file.\n");
    name=(char *)malloc(sizeof(char *)*SIZE);
    s_gets(name,SIZE);
    if((file=fopen(name,"a+"))==NULL)
    {
        fprintf(stderr,"Can't open the %s.\n",name);
        exit(EXIT_FAILURE);
    }
    for(x=0;x<len;x++)
        for(y=0;y<lon;y++)
            fscanf(file,"%d",&picture[x][y]);
    for(x=0;x<len;x++)
        for(y=0;y<lon;y++)
            chs[x][y]=really[picture[x][y]];
    for(x=0;x<len;x++)
    {
        for(y=0;y<lon;y++)
            putchar(chs[x][y]);
        putchar('\n');
    }
    fclose(file);
    free(name);

    return 0;
}
