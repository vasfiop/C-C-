#include<stdio.h>
int chline(char ch, int i, int j);
int main(void)
{
    int a,b;
    char cr;

    scanf("%c %d %d",&cr,&a,&b);
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
