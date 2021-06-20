#include<stdio.h>
#define FIVE 5
#define THREE 3
void copy(double q[], double w[], double e[], double r[THREE][FIVE], int five);
double num1(double q[], int five);
double all_num(double q[][FIVE], int three);
double big(double q[][FIVE], int three);
int main(void)
{
    double guess[THREE][FIVE];
    double x[FIVE];
    double y[FIVE];
    double z[FIVE];
    int a,b;

    printf("请输入5个double值:");
    for(a=0;a<FIVE;a++)
        scanf("%lf",&x[a]);
    printf("请输入5个double值:");
    for(a=0;a<FIVE;a++)
        scanf("%lf",&y[a]);
    printf("请输入5个double值:");
    for(a=0;a<FIVE;a++)
        scanf("%lf",&z[a]);
    copy(x,y,z,guess,FIVE);

    printf("打印结果:\n");
    for(a=0;a<THREE;a++)
    {
        for(b=0;b<FIVE;b++)
            printf("%.2f ",guess[a][b]);
        printf("\n");
    }

    printf("打印结果:\n");
    printf("第一组%.2f,第二组%.2f,第三组%.2f\n",num1(x,FIVE),num1(y,FIVE),num1(z,FIVE));
    printf("打印结果:%.2f\n",all_num(guess,THREE));
    printf("打印结果:%.2f\n",big(guess,THREE));

    return 0;
}
void copy(double q[], double w[], double e[], double r[THREE][FIVE], int five)
{
    int a,b;

    for(a=0,b=0;b<FIVE;b++)
        r[a][b]=q[b];
    for(a=1,b=0;b<FIVE;b++)
        r[a][b]=q[b];
    for(a=2,b=0;b<FIVE;b++)
        r[a][b]=q[b];
}
double num1(double q[], int five)
{
    int a;
    double total;

    for(a=0,total=0;a<FIVE;a++)
        total+=q[a];
    total/=FIVE;

    return total;
}
double all_num(double q[][FIVE], int three)
{
    int a,b;
    double total;

    for(a=0,total;a<THREE;a++)
    {
        for(b=0;b<FIVE;b++)
            total+=q[a][b];
    }
    total/=15;

    return total;
}
double big(double q[][FIVE], int three)
{
    int a,b;
    double c;

    for(a=0;a<THREE;a++)
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
