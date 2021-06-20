#include<stdio.h>
void copy_arr(double *ch, double *cr, int num);
void copy_ptr(double ch[5], double *cr, int num);
void copy_ptrs(double ch[5], double *cr, double *ct);
void first(double ch[5]);
int main(void)
{
    double source[5]={1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    int n;

    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source+5);
    first(source);
    first(target1);
    first(target2);
    first(target3);

    return 0;
}
void copy_arr(double *ch, double *cr, int num)
{
    int n;

    for(n=0;n<num;n++)
        *(ch+n)=*(cr+n);
}
void copy_ptr(double ch[5], double *cr, int num)
{
    int n;
    for(n=0;n<num;n++)
        ch[n]=*(cr+n);
}
void copy_ptrs(double ch[5],double *cr,double *ct)
{
    int *n;
    int n1;

    for(n1=0;cr<ct;cr++,n1++)
        ch[n1]=*(cr);
}
void first(double ch[5])
{
    int n;

    for(n=0;n<5;n++)
    {
        printf("%.1f ",ch[n]);
    }
    printf("\n");
}
