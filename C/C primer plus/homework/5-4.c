#include<stdio.h>
#define feets 30.48
#define inchess 2.54
int main(void)
{
    float high;
    int feet;

    printf("Enter a height in centimeters:");
    scanf("%f",&high);
    while(high>0)
    {
        feet=high/feets;
        printf("%.1f cm= %d feet, %.1f inches\n",high,feet,(high-feet*feets)/inchess);
        printf("Enter a height in centimeters(<=0 to quit):");
        scanf("%f",&high);
    }
    printf("bye!");

    return 0;
}
