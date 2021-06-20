#include<stdio.h>
#include<ctype.h>
int fit(char *cr,int n);
int main(void)
{
    char ch[80];
    int x;

    printf("请输入读入的最大值:");
    scanf("%d",&x);

    while(fit(ch,x))
        puts(ch);
    puts("Done");

    return 0;
}
int fit(char *cr,int n)
{
    char ch;
    int a;

    while((ch=cr[0]=getchar())!=EOF&&isspace(ch))
        continue;
    for(a=1;a<n;a++)
    {
        if(ch==EOF)
        {
            cr[a]='\0';
            return 0;
        }
        ch=cr[a]=getchar();
        if(isspace(ch))
        {
            cr[a]='\0';
            break;
        }
    }
    while(ch!='\n')
        ch=getchar();

    return 1;
}
