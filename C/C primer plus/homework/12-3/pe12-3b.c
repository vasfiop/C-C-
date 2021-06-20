#include<stdio.h>
#include "pe12-3.h"
void set_mode(int *mode)
{
    if(*mode==0)
        *mode=0;
    else if(*mode==1)
        *mode=1;
}
void get_info(int mode,int *how_long,double *use)
{
    if(mode==0)
        printf("Enter distance traveled in kilometers:");
    else
        printf("Enter distance traveled in miles:");
    scanf("%d",how_long);
    if(mode==0)
        printf("Enter fuel consumed in liters:");
    else
        printf("Enter distance traveled in miles:");
    scanf("%lf",use);
}
void show_info(int mode ,int how_long , double use)
{
    if(mode==0)
        printf("Fuel consumption is %.2f liters per %d km.\n",use/(how_long/100.0),how_long);
    else
        printf("Fuel consumption is %.1f miles per gallon.\n",how_long/use);
}
