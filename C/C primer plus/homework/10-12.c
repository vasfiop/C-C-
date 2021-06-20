#include<stdio.h>
#define MONTHS 12
#define YEARS 5
float fl(float fn[5][12]);
float f2(float fc[5][12]);
int main(void)
{
    float rain[YEARS][MONTHS]=
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    float all;
    /*int a,b;

    for(a=0;a<YEARS;a++)
    {
        for(b=0;b<MONTHS;b++)
        {
            printf("%.1f ",rain[a][b]);
        }
        printf("\n");
    }
    int year,month;
    float total,all;
    for(year=0,all=0;year<YEARS;year++)
    {
        for(month=0,total=0;month<MONTHS;month++)
        {
            total+=rain[year][month];
        }
        printf("%5d %15.1f\n",2010+year,total);
        all+=total;
    }*/

    printf(" YEAR   RAINFALL  (inches)\n");
    all=fl(rain);
    printf("\nThe yearly average is %.1f inches.\n\n",all/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
    f2(rain);
    printf("\n");

    return 0;
}
float fl(float fn[5][12])
{
    int year,month;
    float all_num,total;

    for(year=0,all_num=0;year<5;year++)
    {
        for(month=0,total=0;month<12;month++)
        {
            total+=fn[year][month];
        }
        printf("%5d %15.1f\n",2010+year,total);
        all_num+=total;
    }

    return all_num;
}
float f2(float fc[5][12])
{
    int month,year;
    float total;

    for(month=0;month<12;month++)
    {
        for(year=0,total=0;year<5;year++)
        {
            total+=fc[year][month];
        }
        printf("%4.1f ",total/YEARS);
    }
}
