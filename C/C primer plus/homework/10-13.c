#include<stdio.h>
#define FIVE 5
void all(double q[FIVE], double w[FIVE], double e[FIVE], double r[3][FIVE]);
double bll(double q[FIVE]);
double c(double q[3][FIVE]);
double d(double q[3][FIVE]);
int main(void)
{
    double x[FIVE];
    double y[FIVE];
    double z[FIVE];
    double input[3][FIVE];
    int a,b;

    printf("������5��doubleֵ:");
    for(a=0;a<5;a++)
        scanf("%lf",&x[a]);
    printf("������5��doubleֵ:");
    for(a=0;a<5;a++)
        scanf("%lf",&y[a]);
    printf("������5��doubleֵ:");
    for(a=0;a<5;a++)
        scanf("%lf",&z[a]);

    all(x,y,z,input);
    printf("��ӡ���:\n");
    for(a=0;a<3;a++)
    {
        for(b=0;b<FIVE;b++)
            printf("%.2f ",input[a][b]);
        printf("\n");
    }
    printf("��ӡ���:");
    printf("��һ�飺%.2f���ڶ���:%.2f,������:%.2f",bll(x),bll(y),bll(z));
    printf("\n��ӡ���:");
    printf("%.2f",c(input));
    printf("\n��ӡ���:");
    printf("%.2f",d(input));
}
void all(double q[FIVE], double w[FIVE], double e[FIVE], double r[3][FIVE])
{
    int a,b;

    for(a=0,b=0;b<FIVE;b++)
        r[a][b]=q[b];
    for(a=1,b=0;b<FIVE;b++)
        r[a][b]=w[b];
    for(a=2,b=0;b<FIVE;b++)
        r[a][b]=e[b];
}
double bll(double q[FIVE])
{
    int a;
    double total;

    for(a=0,total=0;a<FIVE;a++)
    {
        total+=q[a];
    }
    total/=FIVE;
    return total;
}
double c(double q[3][FIVE])
{
    int a,b;
    double total=0;

    for(a=0;a<3;a++)
    {
        for(b=0;b<FIVE;b++)
            total+=q[a][b];
    }
    total/=15;
    return total;
}
double d(double q[3][FIVE])
{
    int a,b;
    double c;

    for(a=0;a<3;a++)
    {
        for(b=0;b<FIVE;b++)
        {
            if(q[a][b]>q[a+1][b+1])
                c=q[a][b];
            else
                c=q[a+1][b+1];
        }
    }

    return c;
}
