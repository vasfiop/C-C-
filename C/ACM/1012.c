/*
Description
�ַ����������������
input
��һ����һ��������N�����Ϊ100��֮���Ƕ����ַ�������������N����ÿһ���ַ������ܺ��пո��ַ���������1000.
output
�Ƚ������е�ǰN���ַ��������ܺ��пո�ԭ��������ڽ����µ��ַ����������пո��Կո���߻س��ָ�һ�ΰ������롣ÿ�����֮�����һ�����С�
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
