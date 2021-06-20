#include<stdio.h>
int main(void)
{
    int n1,n2;

    for(n1=0;n1<5;n1++)
    {
        for(n2=0;n2<=n1;n2++)
        {
            printf("%c",'A'+n2);
        }
        printf("\n");
    }

    return 0;
}
