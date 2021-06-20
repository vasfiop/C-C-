/*
Description
字符串的输入输出处理
input
第一行是一个正整数N，最大为100。之后是多行字符串（行数大于N），每一行字符串可能含有空格，字符数不超过1000.
output
先将输入中的前N行字符串（可能含有空格）原样输出，在将余下的字符串（不含有空格）以空格或者回车分割一次按行输入。每行输出之间输出一个空行。
Sample Input
2
www.njupt.edu.cn NUPT
A C M
N U P Ter
Sample Output
www.njupt.edu.cn NUPT

A C M

N

U

P

Ter
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    char str[100][1000];
    int N,a,num,c;

    while(scanf("%d",&N)!=EOF)
    {
        getchar();
        num=0;
        while(gets(str[num]))
            num++;
        for(a=0;a<=N-1;a++)
            printf("%s\n\n",str[a]);
        for(a;a<num;a++)
        {
            for(c=0;str[a][c]!='\0';c++)
            {
                if(!isspace(str[a][c]))
                    printf("%c",str[a][c]);
                else
                    printf("\n\n");
            }
            printf("\n\n");
        }
    }

    return 0;
}
/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    int N,a,b,c,d;
    char str[100][1000];

    scanf("%d",&N);
    getchar();
    b=0;
    while(gets(str[b]))
        b++;
    for(a=0;a<N;a++)
        printf("%s\n\n",str[a]);
    for(a;a<b;a++)
    {
        for(d=0;str[a][d]!='\0';d++)
        {
            if(!isspace(str[a][d]))
                printf("%c",str[a][d]);
            else
                printf("\n\n");
        }
        printf("\n\n");
    }

    return 0;
}
*/
