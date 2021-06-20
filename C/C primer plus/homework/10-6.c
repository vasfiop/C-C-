#include<stdio.h>
double num(double x[10]);
int main(void)
{
    double a[10];
    int b;

    printf("ÇëÊäÈë10¸ödoubleÖµ:");
    for(b=0;b<10;b++)
        scanf("%lf",&a[b]);
    printf("\n");
    num(a);
    printf("\n");
    for(b=0;b<10;b++)
        printf("%.2f\n",a[b]);

    return 0;
}
double num(double x[10])
{
    int y,t;
    double z[10];

    for(y=9,t=0;t<10;y--,t++)
    {
        z[t]=x[y];
    }
    for(y=9,t=0;t<10;y--,t++)
    {
        x[t]=z[y];
    }
}
