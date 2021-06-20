#include<stdio.h>
int num(int n[7], int x[3]);
int main(void)
{
    int i[7]={1, 2, 3, 4, 5, 6, 7};
    int b[3];
    int c;

    num(i,b);
    for(c=0;c<3;c++)
    {
        printf("%d ",b[c]);
    }

    return 0;
}
int num(int n[7], int x[3])
{
    int a,b;

    for(a=2,b=0;a<5;a++,b++)
    {
        x[b]=n[a];
    }
}
