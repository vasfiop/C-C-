#include<stdio.h>
int main(void)
{
    //char ch[40]="ABCDEFGHIJKLMNOPQRSTU";
    int n1,n2,n3;
    n3=0;

    for(n1=0;n1<=5;n1++)
    {
        for(n2=0;n2<=n1;n2++,n3++)
        {
            printf("%c",'A'+n3);
        }
        printf("\n");
    }

    return 0;
}
