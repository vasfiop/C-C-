#include<stdio.h>
#define SIZE 8
int main(void)
{
    double do1[SIZE];
    double do2[SIZE];
    int n1;

    printf("请输入8个数字\n");
    for(n1=0;n1<SIZE;n1++)
    {
        printf("第%d个:",n1+1);
        scanf("%lf",&do1[n1]);
    }
    do2[0]=do1[0];
    for(n1=1;n1<SIZE;n1++)
    {
        do2[n1]=do1[n1]+do2[n1-1];
    }
    for(n1=0;n1<SIZE;n1++)
    {
        printf("%5.2f",do1[n1]);
    }
    printf("\n");
    for(n1=0;n1<SIZE;n1++)
    {
        printf("%5.2f",do2[n1]);
    }

    return 0;
}
