//使用name.txt文件测试
#include"all_file.h"
#include"s_gets.h"
#define len 20
#define lon 30
#define SIZE 80
const char really[10]=" .':~*=&%#";
int main(void)
{
    FILE *file;
    char *name;
    int x,y;
    char chs[len][lon+1];
    int picture[len][lon];

    fprintf(stderr,"Please enter a name of the file.\n");
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
    {
        for(y=0;y<lon;y++)
        {
            if(picture[x][y]==10)
                picture[x][y]=(picture[x-1][y]+picture[x+1][y]+picture[x][y-1]+picture[x][y+1])/4;
        }
    }
    for(x=0;x<len;x++)
    {
        for(y=0;y<lon;y++)
            chs[x][y]=really[picture[x][y]];
    }
    for(x=0;x<len;x++)
    {
        for(y=0;y<lon;y++)
            putchar(chs[x][y]);
        putchar('\n');
    }

    return 0;



}
