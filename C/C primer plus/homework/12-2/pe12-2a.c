#include<stdio.h>
#include "pe12-2a.h"
void set_mode(int mode)
{
    if(mode==1)
        choose=1;
    else if(!mode)
        choose=0;
}
void get_info(void)
{
    if(!choose)
        printf("Enter distance traveled in kilometers:");
    else
        printf("Enter distance traveled in miles:");
    scanf("%d",&how_long);
    if(!choose)
        printf("Enter fuel consumed in liters:");
    else
        printf("Enter fuel consumed in gallons:");
    scanf("%lf",&use);
}
void show_info(void)
{
    if(!choose)
        printf("Fuel consumption is %.2f liters per %d Km\n",use/(how_long/100.0),how_long);
    else
        printf("Fuel consumed is %.1f miles per gallon.\n",how_long/use);
}
