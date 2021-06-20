#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define LEN 10
void in_a(char ch[LEN][100]);
void in_b(char *strings[LEN]);
void in_c(char *ch[LEN]);
void in_d(char *ch[LEN]);
void menu(void);
char really(char ch);//用户输入验证
char *s_gets(char *st ,int n);
int main(void)
{
     char ch[LEN][100],choose,*upto[LEN];
     int a;

    printf("please enter 10 string:\n");
    while(s_gets(ch[0],100)!=EOF)
    {
        for(a=1;a<LEN;a++)
            s_gets(ch[a],100);
        for(a=0;a<LEN;a++)
            upto[a]=ch[a];
        menu();
        choose=really(choose);
        if(choose=='q')
            break;
        switch(choose)
        {
            case 'a':
                in_a(ch);
                break;
            case 'b':
                in_b(upto);
                break;
            case 'c':
                in_c(upto);
                break;
            case 'd':
                in_d(upto);
                break;
            default:
                break;
        }
        printf("now enter new 10 string:\n");
    }
    puts("Done");

    return 0;
}
void in_a(char ch[LEN][100])
{
    int a;
    for(a=0;a<LEN;a++)
        printf("%s\n",ch[a]);
}
void in_b(char *strings[LEN])
{
    char *cr;
    int a,b;

    for(a=0;a<LEN-1;a++)
        for(b=a+1;b<LEN;b++)
            if(*strings[a]>*strings[b])
            {
                cr=strings[a];
                strings[a]=strings[b];
                strings[b]=cr;
            }
    for(a=0;a<LEN;a++)
        printf("%s\n",strings[a]);
}
void in_c(char *ch[LEN])
{
    char *cr;
    int a,b;

    for(a=0;a<LEN-1;a++)
        for(b=a+1;b<LEN;b++)
            if(strlen(ch[a])>strlen(ch[b]))
            {
                cr=ch[a];
                ch[a]=ch[b];
                ch[b]=cr;
            }
    for(a=0;a<LEN;a++)
        printf("%s\n",ch[a]);
}
void in_d(char *ch[LEN])
{
    char *cr;
    int a,b,num[10],count;

    for(a=0;a<LEN;a++)
    {
        for(b=0,count=0;b<LEN;b++)
        {
            if(isspace(ch[a][b]))
                break;
            count++;
        }
        num[a]=count;
    }
    for(a=0;a<LEN-1;a++)
        for(b=a+1;b<LEN;b++)
            if(num[a]>num[b])
            {
                cr=num[a];
                num[a]=num[b];
                num[b]=cr;
                cr=ch[a];
                ch[a]=ch[b];
                ch[b]=cr;
            }
    for(a=0;a<LEN;a++)
        printf("%s\n",ch[a]);
}
char *s_gets(char *st ,int n)
{
    char *ret_val;
    char *find;

    ret_val=fgets(st,n,stdin);//会把换行符储存在字符串里面
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
void menu(void)
{
    int a;
    char ch;

    for(a=0;a<70;a++)
        printf("*");
    printf("\n");
    printf("a) 打印源字符串列表            b) 以ASCII码中的顺序打印字符串\n");
    printf("c) 按长度递增顺序打印字符串    d) 按字符串第一个单词的长度的顺序打印字符串\n");
    printf("q) 退出\n");
    for(a=0;a<70;a++)
        printf("*");
    printf("\n");
    printf("please make a choice:");
}
char really(char ch)
{
    ch=getchar();
    while(getchar()!='\n')
        continue;
    while(ch<'a'||ch>'d'&&ch!='q')
    {
        printf("%c not really a choice.\n",ch);
        printf("please enter a,b,c,d or q.\n");
        menu();
        ch=getchar();
        while(getchar()!='\n')
            continue;
    }

    return ch;
}
