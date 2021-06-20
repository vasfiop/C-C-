#include<stdio.h>
double num(double x[5][5], double y[5][5]);
int main(void)
{
    double a[5][5];
    double age[5][5];
    int b,c;

    for(b=0;b<5;b++)
    {
        printf("ÇëÊäÈë5¸ödoubleÖµ:");
        for(c=0;c<5;c++)
            scanf("%lf",&a[b][c]);
    }
    num(a,age);

    for(b=0;b<5;b++)
    {
        for(c=0;c<5;c++)
            printf("%2.2f",age[b][c]);
        printf("\n");
    }

    return 0;
}
double num(double x[5][5],double y[5][5])
{
    int z,t;

    for(z=0;z<5;z++)
    {
        for(t=0;t<5;t++)
            y[z][t]=x[z][t];
    }
}
