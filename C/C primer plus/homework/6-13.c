#include<stdio.h>
int main(void)
{
    int n[8];
    int n1,n2;

    for(n1=0,n2=1;n1<8;n1++)
    {
        n[n1]=n2;
        n2*=2;
    }
    n1=0;
    do
    {
        printf("%d ",n[n1]);
        n1++;
    }while(n1<8);

    return 0;
}
