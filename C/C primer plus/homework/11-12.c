#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LEN 100
char *s_gets(char * st, int n);
int main(void)
{
    char ch[100];
    int danci,daxie,xiaoxie,biaodian,shuzi,a;

    danci=daxie=xiaoxie=biaodian=shuzi=0;
    while(s_gets(ch,LEN))
    {
        for(a=0;ch[a]!='\0';a++)
        {
            if(!isalpha(ch[a]))
                danci++;
            if(isdigit(ch[a]))
                shuzi++;
            if(islower(ch[a]))
                xiaoxie++;
            if(isupper(ch[a]))
                daxie++;
            if(ispunct(ch[a]))
                biaodian++;
        }
    }
    printf("单词数=%d\n大写字母数=%d\n小写字母数=%d\n标点符号数=%d\n数字字符数=%d\n",danci,daxie,xiaoxie,biaodian,shuzi);

    return 0;
}
/*
char *s_gets(char *st,int n)
{
    char *ret_val;
    int i=0;

    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        while(st[i]!='\n'&&st[i]!='\0')
            i++;
        if(st[i]=='\n')
            st[i]='\0';
        else
            while(getchar()!='\n')
                continue;
    }

    return ret_val;
}
*/

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

