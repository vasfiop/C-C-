#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BUFSIZE 4096//文件内部的字符长度
#define SLEN 81//文件名的长度
void append(FILE *source , FILE *dest);
char *s_gets(char *st,int n);
int main(void)
{
    FILE *fa,*fs;
    int files=0;
    char file_app[SLEN];
    char file_src[SLEN];
    int ch;

    puts("Enter name of destination file:");//destintaion的意思是目的地
    s_gets(file_app,SLEN);//将用户的第一次输入储存到file_app中
    if((fa=fopen(file_app,"a+"))==NULL)//打开file_app一更新模式打开，末尾添加，若无则创建新文件
    {//如果打开失败就是退出程序
        fprintf(stderr,"Can't poen %s\n",file_app);
        exit(EXIT_FAILURE);
    }
    if(setvbuf(fa,NULL,_IOFBF,BUFSIZE)!=0)
    {//如果创建缓冲区失败就退出程序
        fputs("Can't create output buffer\n",stderr);
        exit(EXIT_FAILURE);
    }
    puts("Enter name of first source file (empty line to quit):");//输入第一个源文件的名称
    while(s_gets(file_src,SLEN)&&file_src[0]!='\0')//将用户输入的第二次输入储存在src
    {
        if(strcmp(file_src,file_app)==0)//比较字符，相同0，不同非零
            fputs("Can't append file to itself\n",stderr);
        else if((fs=fopen(file_src,"r"))==NULL)//如果打不开
            fprintf(stderr,"Can't poen %s\n",file_src);
        else
        {
            if(setvbuf(fs,NULL,_IOFBF,BUFSIZ)!=0)//如果创建缓冲区，如果失败就重复创建
            {
                fputs("Can't create input buffer\n",stderr);
                continue;
            }
            append(fs,fa);
            if(ferror(fs)!=0)//当读或写出现错误，返回一个非零值，否则返回0
                fprintf(stderr,"Error in reading file %s.\n",file_src);
            if(ferror(fa)!=0)
                fprintf(stderr,"Error in writing file %s.\n",file_app);
            fclose(fs);
            files++;
            printf("File %s appended.\n",file_src);
            puts("Next file(empty lint to quit):");
        }
    }
    printf("Done appending. %d files appended.\n",files);
    rewind(fa);
    printf("%s contents:\n",file_app);
    while((ch=getc(fa))!=EOF)
        putchar(ch);
    puts("Done displaying.");
    fclose(fa);

    return 0;
}
void append(FILE*source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];

    while((bytes=fread(temp,sizeof(char),BUFSIZE,source))>0)
        fwrite(temp,sizeof(char),bytes,dest);
}
char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        find=strchr(st,'\n');
        if(find)
            *find='\0';
        else
            while(getchar()!='\n')
                continue;
    }

    return ret_val;
}
