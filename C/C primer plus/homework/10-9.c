#include<stdio.h>
double dou(int q, int w,double x[q][w], double y[3][5]);
int main(void)
{
    double a[3][5]=
    {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 10.10},
        {11.11, 12.12, 13.13, 14.14, 15.15},
    };
    double b[3][5];
    int c,d;


    dou(3,5,a,b);
    for(c=0;c<3;c++)
    {
        for(d=0;d<5;d++)
        {
            printf("%.2f ",b[c][d]);
        }
        printf("\n");
    }

    return 0;
}
double dou(int q, int w,double x[q][w], double y[3][5])
{
    int z,t;

    for(z=0;z<q;z++)
    {
        for(t=0;t<w;t++)
        {
            y[z][t]=x[z][t];
        }
    }
}
