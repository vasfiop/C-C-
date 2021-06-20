#include<stdio.h>
#define ALL 1000000
#define DOWN 100000
#define UP 1.08
int main(void)
{
    double year,money;
    money=ALL;
    year=1.0;


    while(money>=0)
    {
        year++;
        money=money-DOWN;
        if(money<0)
            break;
        money*=UP;
        printf("%f",money);
    }
    printf("%.0f",year);

    return 0;
}
