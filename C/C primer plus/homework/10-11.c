#include<stdio.h>
int put(int p[3][5],int a, int b);
int up(int u[3][5], int a, int b);
int main(void)
{
    int one[3][5]=
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    put(one,3,5);
    up(one,3,5);

    return 0;
}
int put(int p[3][5], int a, int b)
{
    int x,y;

    for(x=0;x<a;x++)
    {
        for(y=0;y<b;y++)
        {
            printf("%d ",p[x][y]);
        }
        printf("\n");
    }
}
int up(int u[3][5], int a, int b)
{
    int x,y;

    for(x=0;x<a;x++)
    {
        for(y=0;y<b;y++)
        {
            u[x][y]*=u[x][y];
        }
    }
    put(u,a,b);
}
