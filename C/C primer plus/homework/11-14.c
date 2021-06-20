#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char *argv[])
{
    double in,sum,up;
    int b;


    in=atof(argv[1]);
    up=atof(argv[2]);
    printf("%f to the %f power =%f\n",in,up,pow(in,up));

    return 0;
}
