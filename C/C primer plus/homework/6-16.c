#include<stdio.h>
#define MUN 100
int main(void)
{
    double n1,n2;
    int year;

    year=1;
    n1=n2=100;

    while(n2<=n1)
    {
        n1+=0.1*MUN;//MUN*0.1*year+MUN
        n2+=0.05*n2;
        printf("第%d年。Daphen的:%f,Deirdre的:%f.\n",year,n1,n2);
        year++;
    }

    return 0;
}
