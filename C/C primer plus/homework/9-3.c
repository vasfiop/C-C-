#include<stdio.h>
int chline(char ch, int i, int j);
int main(void)
{
    int a,b;
    char cr;

    printf("请输入打印的字符.\n");
    scanf("%c",&cr);
    printf("请输入希望打印的行数.\n");
    scanf("%d",&a);
    printf("请输入希望打印的列数.\n");
    scanf("%d",&b);
    chline(cr,a,b);


    return 0;
}
int chline(char ch,int i,int j)
{
    int a,b;

    for(a=0;a<=i;a++)
    {
        for(b=0;b<=j;b++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
