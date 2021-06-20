#include<stdio.h>
int main(void)
{
    int n1,n2,n3,n4;

    printf("Enter lower and upper integer limits:");
    scanf("%d %d",&n1,&n2);
    while(n1!=n2)
    {
        for(n4=n1,n3=0;n4<=n2;n4++)
        {
            n3=n4*n4+n3;
        }
        printf("The sums of the squares from %d to %d is %d.\n",n1*n1,n2*n2,n3);
        printf("Enter next set of limits:");
        scanf("%d %d",&n1,&n2);
    }

    return 0;
}
