 #include<stdio.h>
#include<stdlib.h>
#define LIM 30
char *s_gets(char *st, int n);
int main(void)
{
    char number[LIM];
    char *end;
    long value;

    puts("Enter a number (empty line to quit):");//输入的是位数字
    while(s_gets(number,LIM)&&number[0]!='\0')
    {
       value=strtol(number,&end,10);//函数会把字符串换成long类型的值
       printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n",value,end,*end);//第一个是十进制输出，第二个输出的字符，第三个输出a的ASCII码。
       value=strtol(number,&end,16);
       printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n",value,end,*end);//第一个是十六进制输出，第二个同上，第三题输出十六进制的十进制。
       puts("Next number:");
    }

    puts("Buy!\n");

    return 0;
}
char *s_gets(char * st,int n)//输入函数
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
