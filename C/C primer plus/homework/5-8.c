#include<stdio.h>
int main(void)
{
    long first,last;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&last);
    printf("Now enter the first operand:");
    scanf("%d",&first);
    while(first>0)
    {
        printf("%d %% %d is %d\n",first,last,first%last);
        printf("Enter next number for first operadn(<=0 to quit):");
        scanf("%d",first);
    }
    printf("Done");

    return 0;
}
