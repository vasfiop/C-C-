#include<stdio.h>
int num1(int q, int n1[q], int n2[q], int n3[q]);
int main(void)
{
    int x[5]={1, 2, 3, 4, 5};
    int y[5]={6, 7, 8, 9, 10};
    int z[5];
    int t;

    num1(5,x,y,z);
    for(t=0;t<5;t++)
        printf("%d ",z[t]);

    return 0;
}
int num1(int q,int n1[q], int n2[q], int n3[q])
{
    int t;

    for(t=0;t<q;t++)
    {
        n3[t]=n1[t]+n2[t];
    }
}
